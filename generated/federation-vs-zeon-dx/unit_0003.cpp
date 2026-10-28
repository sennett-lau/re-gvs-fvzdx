#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0003[4096] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0,
    6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0,
    0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20,
    0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0,
    0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0,
    0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0,
    0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0,
    67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 78, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0,
    0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0,
    93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 110, 0, 111, 0, 0,
    112, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0,
    117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0,
    122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 130, 0, 0, 0, 0, 0, 0, 0, 131, 0,
    0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    147, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 153, 0, 0, 0,
    0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0,
    161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 165, 0, 166, 0, 0, 0,
    0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0,
    171, 0, 172, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0,
    183, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 188, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191,
    0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0,
    194, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 0, 208, 0, 0, 0, 0, 209,
    0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 211, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 215, 0, 0, 0, 0, 0, 0,
    0, 216, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 234, 0, 0, 235, 0,
    0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0,
    0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0,
    250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0,
    257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260,
    0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0,
    0, 0, 0, 264, 0, 265, 0, 266, 0, 0, 0, 0, 267, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270,
    271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0,
    0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0,
    0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0,
    0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    297, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300,
    0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0,
    0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0,
    310, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0,
    0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0,
    0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0,
    0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331,
    0, 0, 0, 0, 0, 0, 332, 0, 333, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0,
    0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0,
    0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352,
    0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0,
    0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 385, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 394,
    395, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 398, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0003(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0010C000;
    case 2u: goto L_0010C014;
    case 3u: goto L_0010C03C;
    case 4u: goto L_0010C058;
    case 5u: goto L_0010C068;
    case 6u: goto L_0010C080;
    case 7u: goto L_0010C0A0;
    case 8u: goto L_0010C100;
    case 9u: goto L_0010C120;
    case 10u: goto L_0010C168;
    case 11u: goto L_0010C1A0;
    case 12u: goto L_0010C1FC;
    case 13u: goto L_0010C254;
    case 14u: goto L_0010C270;
    case 15u: goto L_0010C294;
    case 16u: goto L_0010C2E4;
    case 17u: goto L_0010C388;
    case 18u: goto L_0010C418;
    case 19u: goto L_0010C440;
    case 20u: goto L_0010C47C;
    case 21u: goto L_0010C4A0;
    case 22u: goto L_0010C4E0;
    case 23u: goto L_0010C4F0;
    case 24u: goto L_0010C540;
    case 25u: goto L_0010C554;
    case 26u: goto L_0010C570;
    case 27u: goto L_0010C5B0;
    case 28u: goto L_0010C5E8;
    case 29u: goto L_0010C620;
    case 30u: goto L_0010C66C;
    case 31u: goto L_0010C688;
    case 32u: goto L_0010C6C8;
    case 33u: goto L_0010C6D8;
    case 34u: goto L_0010C710;
    case 35u: goto L_0010C75C;
    case 36u: goto L_0010C830;
    case 37u: goto L_0010C87C;
    case 38u: goto L_0010C950;
    case 39u: goto L_0010C99C;
    case 40u: goto L_0010CA88;
    case 41u: goto L_0010CAF0;
    case 42u: goto L_0010CB1C;
    case 43u: goto L_0010CB40;
    case 44u: goto L_0010CB64;
    case 45u: goto L_0010CBA0;
    case 46u: goto L_0010CBDC;
    case 47u: goto L_0010CBF8;
    case 48u: goto L_0010CC38;
    case 49u: goto L_0010CC84;
    case 50u: goto L_0010CCB0;
    case 51u: goto L_0010CCD0;
    case 52u: goto L_0010CD10;
    case 53u: goto L_0010CD88;
    case 54u: goto L_0010CDEC;
    case 55u: goto L_0010CE18;
    case 56u: goto L_0010CE38;
    case 57u: goto L_0010CE78;
    case 58u: goto L_0010CE98;
    case 59u: goto L_0010CEE0;
    case 60u: goto L_0010CEF0;
    case 61u: goto L_0010CF38;
    case 62u: goto L_0010CF48;
    case 63u: goto L_0010CFC8;
    case 64u: goto L_0010CFF4;
    case 65u: goto L_0010D018;
    case 66u: goto L_0010D060;
    case 67u: goto L_0010D080;
    case 68u: goto L_0010D0CC;
    case 69u: goto L_0010D0E8;
    case 70u: goto L_0010D130;
    case 71u: goto L_0010D150;
    case 72u: goto L_0010D19C;
    case 73u: goto L_0010D1B8;
    case 74u: goto L_0010D1C8;
    case 75u: goto L_0010D1E0;
    case 76u: goto L_0010D20C;
    case 77u: goto L_0010D224;
    case 78u: goto L_0010D22C;
    case 79u: goto L_0010D234;
    case 80u: goto L_0010D248;
    case 81u: goto L_0010D264;
    case 82u: goto L_0010D274;
    case 83u: goto L_0010D284;
    case 84u: goto L_0010D2A0;
    case 85u: goto L_0010D2F4;
    case 86u: goto L_0010D31C;
    case 87u: goto L_0010D340;
    case 88u: goto L_0010D390;
    case 89u: goto L_0010D398;
    case 90u: goto L_0010D3BC;
    case 91u: goto L_0010D3D4;
    case 92u: goto L_0010D3F4;
    case 93u: goto L_0010D400;
    case 94u: goto L_0010D440;
    case 95u: goto L_0010D458;
    case 96u: goto L_0010D48C;
    case 97u: goto L_0010D49C;
    case 98u: goto L_0010D4B0;
    case 99u: goto L_0010D4D8;
    case 100u: goto L_0010D508;
    case 101u: goto L_0010D550;
    case 102u: goto L_0010D578;
    case 103u: goto L_0010D5CC;
    case 104u: goto L_0010D5D8;
    case 105u: goto L_0010D5E8;
    case 106u: goto L_0010D610;
    case 107u: goto L_0010D640;
    case 108u: goto L_0010D658;
    case 109u: goto L_0010D664;
    case 110u: goto L_0010D66C;
    case 111u: goto L_0010D674;
    case 112u: goto L_0010D680;
    case 113u: goto L_0010D690;
    case 114u: goto L_0010D6C0;
    case 115u: goto L_0010D6C8;
    case 116u: goto L_0010D6E0;
    case 117u: goto L_0010D700;
    case 118u: goto L_0010D730;
    case 119u: goto L_0010D740;
    case 120u: goto L_0010D760;
    case 121u: goto L_0010D778;
    case 122u: goto L_0010D780;
    case 123u: goto L_0010D7A8;
    case 124u: goto L_0010D7E4;
    case 125u: goto L_0010D7F0;
    case 126u: goto L_0010D81C;
    case 127u: goto L_0010D824;
    case 128u: goto L_0010D834;
    case 129u: goto L_0010D850;
    case 130u: goto L_0010D858;
    case 131u: goto L_0010D878;
    case 132u: goto L_0010D88C;
    case 133u: goto L_0010D8AC;
    case 134u: goto L_0010D8B8;
    case 135u: goto L_0010D918;
    case 136u: goto L_0010D96C;
    case 137u: goto L_0010D978;
    case 138u: goto L_0010D9A0;
    case 139u: goto L_0010D9B4;
    case 140u: goto L_0010DA28;
    case 141u: goto L_0010DA40;
    case 142u: goto L_0010DA58;
    case 143u: goto L_0010DA70;
    case 144u: goto L_0010DAA8;
    case 145u: goto L_0010DAC8;
    case 146u: goto L_0010DAD4;
    case 147u: goto L_0010DB00;
    case 148u: goto L_0010DB24;
    case 149u: goto L_0010DB2C;
    case 150u: goto L_0010DB40;
    case 151u: goto L_0010DB50;
    case 152u: goto L_0010DB68;
    case 153u: goto L_0010DB70;
    case 154u: goto L_0010DB90;
    case 155u: goto L_0010DBA4;
    case 156u: goto L_0010DBC8;
    case 157u: goto L_0010DBD0;
    case 158u: goto L_0010DC18;
    case 159u: goto L_0010DC2C;
    case 160u: goto L_0010DC6C;
    case 161u: goto L_0010DC80;
    case 162u: goto L_0010DC9C;
    case 163u: goto L_0010DCB0;
    case 164u: goto L_0010DCDC;
    case 165u: goto L_0010DCE8;
    case 166u: goto L_0010DCF0;
    case 167u: goto L_0010DD04;
    case 168u: goto L_0010DD30;
    case 169u: goto L_0010DD50;
    case 170u: goto L_0010DD78;
    case 171u: goto L_0010DD80;
    case 172u: goto L_0010DD88;
    case 173u: goto L_0010DD90;
    case 174u: goto L_0010DDAC;
    case 175u: goto L_0010DDC0;
    case 176u: goto L_0010DDE0;
    case 177u: goto L_0010DDEC;
    case 178u: goto L_0010DE18;
    case 179u: goto L_0010DE3C;
    case 180u: goto L_0010DE44;
    case 181u: goto L_0010DE58;
    case 182u: goto L_0010DE68;
    case 183u: goto L_0010DE80;
    case 184u: goto L_0010DE88;
    case 185u: goto L_0010DEA8;
    case 186u: goto L_0010DEBC;
    case 187u: goto L_0010DEE0;
    case 188u: goto L_0010DEE8;
    case 189u: goto L_0010DF30;
    case 190u: goto L_0010DF68;
    case 191u: goto L_0010DF7C;
    case 192u: goto L_0010DF84;
    case 193u: goto L_0010DFF8;
    case 194u: goto L_0010E000;
    case 195u: goto L_0010E00C;
    case 196u: goto L_0010E02C;
    case 197u: goto L_0010E038;
    case 198u: goto L_0010E074;
    case 199u: goto L_0010E0A0;
    case 200u: goto L_0010E0C0;
    case 201u: goto L_0010E1A0;
    case 202u: goto L_0010E1A8;
    case 203u: goto L_0010E1D4;
    case 204u: goto L_0010E1DC;
    case 205u: goto L_0010E210;
    case 206u: goto L_0010E254;
    case 207u: goto L_0010E25C;
    case 208u: goto L_0010E268;
    case 209u: goto L_0010E27C;
    case 210u: goto L_0010E28C;
    case 211u: goto L_0010E2A8;
    case 212u: goto L_0010E2B0;
    case 213u: goto L_0010E2D0;
    case 214u: goto L_0010E2E0;
    case 215u: goto L_0010E2E4;
    case 216u: goto L_0010E304;
    case 217u: goto L_0010E310;
    case 218u: goto L_0010E360;
    case 219u: goto L_0010E38C;
    case 220u: goto L_0010E3A0;
    case 221u: goto L_0010E3C4;
    case 222u: goto L_0010E3D8;
    case 223u: goto L_0010E408;
    case 224u: goto L_0010E430;
    case 225u: goto L_0010E44C;
    case 226u: goto L_0010E480;
    case 227u: goto L_0010E494;
    case 228u: goto L_0010E4B0;
    case 229u: goto L_0010E4D0;
    case 230u: goto L_0010E520;
    case 231u: goto L_0010E534;
    case 232u: goto L_0010E5CC;
    case 233u: goto L_0010E5E0;
    case 234u: goto L_0010E5EC;
    case 235u: goto L_0010E5F8;
    case 236u: goto L_0010E60C;
    case 237u: goto L_0010E650;
    case 238u: goto L_0010E66C;
    case 239u: goto L_0010E688;
    case 240u: goto L_0010E6B0;
    case 241u: goto L_0010E6C4;
    case 242u: goto L_0010E704;
    case 243u: goto L_0010E718;
    case 244u: goto L_0010E734;
    case 245u: goto L_0010E748;
    case 246u: goto L_0010E760;
    case 247u: goto L_0010E7AC;
    case 248u: goto L_0010E7C0;
    case 249u: goto L_0010E7E8;
    case 250u: goto L_0010E800;
    case 251u: goto L_0010E81C;
    case 252u: goto L_0010E85C;
    case 253u: goto L_0010E870;
    case 254u: goto L_0010E89C;
    case 255u: goto L_0010E8B8;
    case 256u: goto L_0010E8DC;
    case 257u: goto L_0010E900;
    case 258u: goto L_0010E934;
    case 259u: goto L_0010E948;
    case 260u: goto L_0010E97C;
    case 261u: goto L_0010E990;
    case 262u: goto L_0010E9B0;
    case 263u: goto L_0010E9F8;
    case 264u: goto L_0010EA0C;
    case 265u: goto L_0010EA14;
    case 266u: goto L_0010EA1C;
    case 267u: goto L_0010EA30;
    case 268u: goto L_0010EA38;
    case 269u: goto L_0010EA68;
    case 270u: goto L_0010EA7C;
    case 271u: goto L_0010EA80;
    case 272u: goto L_0010EAD4;
    case 273u: goto L_0010EAE0;
    case 274u: goto L_0010EB08;
    case 275u: goto L_0010EB2C;
    case 276u: goto L_0010EB68;
    case 277u: goto L_0010EB98;
    case 278u: goto L_0010EBB8;
    case 279u: goto L_0010EBE0;
    case 280u: goto L_0010EC14;
    case 281u: goto L_0010EC34;
    case 282u: goto L_0010EC50;
    case 283u: goto L_0010EC74;
    case 284u: goto L_0010EC9C;
    case 285u: goto L_0010ECD0;
    case 286u: goto L_0010ECE4;
    case 287u: goto L_0010ECF4;
    case 288u: goto L_0010ED10;
    case 289u: goto L_0010ED50;
    case 290u: goto L_0010ED78;
    case 291u: goto L_0010ED9C;
    case 292u: goto L_0010EDB8;
    case 293u: goto L_0010EDF8;
    case 294u: goto L_0010EE18;
    case 295u: goto L_0010EE48;
    case 296u: goto L_0010EE58;
    case 297u: goto L_0010EE80;
    case 298u: goto L_0010EEA0;
    case 299u: goto L_0010EEC8;
    case 300u: goto L_0010EEFC;
    case 301u: goto L_0010EF1C;
    case 302u: goto L_0010EF38;
    case 303u: goto L_0010EF68;
    case 304u: goto L_0010EF90;
    case 305u: goto L_0010EFCC;
    case 306u: goto L_0010EFEC;
    case 307u: goto L_0010F010;
    case 308u: goto L_0010F038;
    case 309u: goto L_0010F078;
    case 310u: goto L_0010F080;
    case 311u: goto L_0010F0A0;
    case 312u: goto L_0010F0DC;
    case 313u: goto L_0010F104;
    case 314u: goto L_0010F134;
    case 315u: goto L_0010F140;
    case 316u: goto L_0010F170;
    case 317u: goto L_0010F190;
    case 318u: goto L_0010F1C0;
    case 319u: goto L_0010F1F8;
    case 320u: goto L_0010F220;
    case 321u: goto L_0010F298;
    case 322u: goto L_0010F2CC;
    case 323u: goto L_0010F2F4;
    case 324u: goto L_0010F314;
    case 325u: goto L_0010F340;
    case 326u: goto L_0010F350;
    case 327u: goto L_0010F368;
    case 328u: goto L_0010F388;
    case 329u: goto L_0010F398;
    case 330u: goto L_0010F3B0;
    case 331u: goto L_0010F3FC;
    case 332u: goto L_0010F418;
    case 333u: goto L_0010F420;
    case 334u: goto L_0010F428;
    case 335u: goto L_0010F468;
    case 336u: goto L_0010F490;
    case 337u: goto L_0010F4E8;
    case 338u: goto L_0010F530;
    case 339u: goto L_0010F558;
    case 340u: goto L_0010F5EC;
    case 341u: goto L_0010F61C;
    case 342u: goto L_0010F63C;
    case 343u: goto L_0010F670;
    case 344u: goto L_0010F6BC;
    case 345u: goto L_0010F6E4;
    case 346u: goto L_0010F708;
    case 347u: goto L_0010F738;
    case 348u: goto L_0010F74C;
    case 349u: goto L_0010F778;
    case 350u: goto L_0010F798;
    case 351u: goto L_0010F7C8;
    case 352u: goto L_0010F7FC;
    case 353u: goto L_0010F810;
    case 354u: goto L_0010F82C;
    case 355u: goto L_0010F840;
    case 356u: goto L_0010F850;
    case 357u: goto L_0010F894;
    case 358u: goto L_0010F8BC;
    case 359u: goto L_0010F8E0;
    case 360u: goto L_0010F910;
    case 361u: goto L_0010F920;
    case 362u: goto L_0010F950;
    case 363u: goto L_0010F970;
    case 364u: goto L_0010F9A0;
    case 365u: goto L_0010F9C8;
    case 366u: goto L_0010F9F0;
    case 367u: goto L_0010FA2C;
    case 368u: goto L_0010FA4C;
    case 369u: goto L_0010FA68;
    case 370u: goto L_0010FAA0;
    case 371u: goto L_0010FAC8;
    case 372u: goto L_0010FAEC;
    case 373u: goto L_0010FB08;
    case 374u: goto L_0010FB48;
    case 375u: goto L_0010FB68;
    case 376u: goto L_0010FB90;
    case 377u: goto L_0010FBB0;
    case 378u: goto L_0010FBD8;
    case 379u: goto L_0010FC0C;
    case 380u: goto L_0010FC2C;
    case 381u: goto L_0010FC48;
    case 382u: goto L_0010FC90;
    case 383u: goto L_0010FCB8;
    case 384u: goto L_0010FCDC;
    case 385u: goto L_0010FD98;
    case 386u: goto L_0010FDA4;
    case 387u: goto L_0010FDD0;
    case 388u: goto L_0010FDF0;
    case 389u: goto L_0010FE20;
    case 390u: goto L_0010FE60;
    case 391u: goto L_0010FE88;
    case 392u: goto L_0010FEB4;
    case 393u: goto L_0010FEE0;
    case 394u: goto L_0010FEFC;
    case 395u: goto L_0010FF00;
    case 396u: goto L_0010FF10;
    case 397u: goto L_0010FF3C;
    case 398u: goto L_0010FF40;
    case 399u: goto L_0010FF5C;
    case 400u: goto L_0010FF88;
    case 401u: goto L_0010FFB0;
    case 402u: goto L_0010FFD8;
    default: bad_entry(c, 0x0010C000u); return;
    }
L_0010C000:
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010BFC8u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 469u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C014u);  if (depth < kMaxDepth) unit_0003(c, 69u, depth + 1u); else { c.pc = 0x0010D0E8u; return; } if (c.pc != 0x0010C014u) [[unlikely]] return; }
L_0010C014:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 4u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 8));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_0010C060; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 22212u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0010C058; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C03Cu); set32(c.r[4], c.r[4].w[0] + 3304u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x0010C03Cu) [[unlikely]] return; }
L_0010C03C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 3344u);
    c.r[8].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C058u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x0010C058u) [[unlikely]] return; }
L_0010C058:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010C068; } }
L_0010C060:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C068u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 6u, depth + 1u); else { c.pc = 0x0010C080u; return; } if (c.pc != 0x0010C068u) [[unlikely]] return; }
L_0010C068:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0010C080:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] + 17744u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] + 132u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 8;
L_0010C0A0:
    st32((c.r[2].w[0] - 116u), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[2].w[0] - 108u), 0u);
    st32((c.r[2].w[0] - 112u), 0u);
    st32((c.r[2].w[0] - 4u), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], c.r[2].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010C0A0u | kUnwind; return; } goto L_0010C0A0; } }
    set32(c.r[2], 0u + 16u);
    set32(c.r[16], c.r[4].w[0] + 18496u);
    st32((c.r[4].w[0] + 18496u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[4], c.r[4].w[0] + 17664u);
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 128u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 128u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C100u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010C100u) [[unlikely]] return; }
L_0010C100:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  goto L_0010C10C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010C10C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0010C120:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[3], 0u + 15u);
    set32(c.r[16], c.r[2].w[0] + 18496u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 17664u);
    st32((c.r[2].w[0] + 18496u), c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 128u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 128u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C168u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010C168u) [[unlikely]] return; }
L_0010C168:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[7], ld32((c.r[16].w[0] + 12u)));  goto L_0010C178; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010C190; } }
L_0010C178:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0010C190; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st32((c.r[2].w[0] + 22208u), 0u);
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 3;
L_0010C190:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0010C1A0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[30].d[0]);
    c.r[2].d[0] = c.r[20].d[0] & 63ull;
    st64((c.r[29].w[0] + 128u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (t) { goto L_0010C204; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 22212u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0010C2EC; } }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C1FCu); set32(c.r[4], c.r[4].w[0] + 3384u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x0010C1FCu) [[unlikely]] return; }
L_0010C1FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010C354; } }
L_0010C204:
    set32(c.r[4], 0u + 28u);
    set32(c.r[3], 0u + 112u);
    mmi::mult(c, 1, c.r[19].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[18].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[30].w[0] + 17744u);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[16].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0010C25C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 22212u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0010C2EC; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 3432u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C254u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x0010C254u) [[unlikely]] return; }
L_0010C254:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010C354; } }
L_0010C25C:
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[22], 0u + 5u);
    set32(c.r[21], 0u + 2u);
    set32(c.r[17], 0u + 1u);
    c.budget -= 5;
L_0010C270:
    st32((c.r[16].w[0] + 88u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 112u), static_cast<std::uint8_t>(c.r[22].w[0]));
    set32(c.r[5], 0u + 255u);
    st8((c.r[16].w[0] + 113u), static_cast<std::uint8_t>(c.r[21].w[0]));
    set32(c.r[6], 0u + 32u);
    st8((c.r[16].w[0] + 103u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C294u); set32(c.r[17], c.r[17].w[0] - 1u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0010C294u) [[unlikely]] return; }
L_0010C294:
    st32((c.r[16].w[0] + 96u), 0u);
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 128u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010C270u | kUnwind; return; } goto L_0010C270; } }
    set32(c.r[17], 0u + 1u);
    set32(c.r[16], c.r[23].w[0] + 18496u);
    st32((c.r[23].w[0] + 18496u), c.r[17].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[16].w[0] + 4u), c.r[19].w[0]);
    set32(c.r[4], c.r[4].w[0] + 17664u);
    st32((c.r[16].w[0] + 8u), c.r[18].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[16].w[0] + 16u), c.r[20].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    set32(c.r[8], 0u + 128u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 128u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C2E4u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010C2E4u) [[unlikely]] return; }
L_0010C2E4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], 0u + 28u);  if (t) { goto L_0010C2F4; } }
L_0010C2EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010C354; } }
L_0010C2F4:
    set32(c.r[7], 0u + 112u);
    mmi::mult(c, 1, c.r[19].w[0], c.r[7].w[0]);
    c.r[7].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[18].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[18].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + 17984u);
    set32(c.r[4], c.r[30].w[0] + 17744u);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[19].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[8], ld32((c.r[16].w[0] + 20u)));
    st32((c.r[2].w[0] + 16u), c.r[17].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[6].w[0]), 0u);
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[5].w[0] + 12u), 0u);
    st32((c.r[7].w[0] + 8u), c.r[8].w[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[2].w[0]), c.r[20].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 24;
L_0010C354:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0010C388:
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], 0u + 112u);
    set32(c.r[4], 0u + 28u);
    mmi::mult(c, 1, c.r[7].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], c.r[2].w[0] + 17744u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    set32(c.r[2], c.r[2].w[0] + 16u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[17], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010C42C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], 0u + 14u);
    set32(c.r[16], c.r[2].w[0] + 18496u);
    st32((c.r[2].w[0] + 18496u), c.r[3].w[0]);
    set32(c.r[6], 0u + 1u);
    st32((c.r[16].w[0] + 4u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[16].w[0] + 16u), c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + 17664u);
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), 0u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 128u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 128u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C418u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010C418u) [[unlikely]] return; }
L_0010C418:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { st32((c.r[17].w[0]), 0u);  goto L_0010C428; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010C42C; } }
L_0010C428:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_0010C42C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0010C440:
    set32(c.r[2], 0u + 28u);
    set32(c.r[3], 0u + 112u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 17744u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C47Cu); set32(c.r[5], c.r[16].w[0] + 256u);  if (depth < kMaxDepth) unit_0001(c, 35u, depth + 1u); else { c.pc = 0x001043F0u; return; } if (c.pc != 0x0010C47Cu) [[unlikely]] return; }
L_0010C47C:
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 216u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] << 7);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0010C4A0:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], 0u + 112u);
    set32(c.r[4], 0u + 28u);
    mmi::mult(c, 1, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 17744u);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010C4E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C4E0u); c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 19u, depth + 1u); else { c.pc = 0x0010C440u; return; } if (c.pc != 0x0010C4E0u) [[unlikely]] return; }
L_0010C4E0:
    set32(c.r[2], ld32((c.r[2].w[0] + 88u)));
    c.budget -= 1;
L_0010C4E4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0010C4F0:
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], 0u + 112u);
    set32(c.r[4], 0u + 28u);
    mmi::mult(c, 1, c.r[7].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 17744u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0010C538; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010C558; } }
L_0010C538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C540u); c.r[4].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 19u, depth + 1u); else { c.pc = 0x0010C440u; return; } if (c.pc != 0x0010C540u) [[unlikely]] return; }
L_0010C540:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C554u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x0010C554u) [[unlikely]] return; }
L_0010C554:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 1;
L_0010C558:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0010C570:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], 0u + 112u);
    set32(c.r[4], 0u + 28u);
    mmi::mult(c, 1, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 17744u);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 99u);  if (t) { goto L_0010C5DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C5B0u); c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 19u, depth + 1u); else { c.pc = 0x0010C440u; return; } if (c.pc != 0x0010C5B0u) [[unlikely]] return; }
L_0010C5B0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u + 6u);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 112u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0010C5E0; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 113u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = ld8((c.r[4].w[0] + 112u));  goto L_0010C5E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_0010C5E0; } }
L_0010C5DC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0010C5E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0010C5E8:
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0010C610; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 22216u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { set32(c.r[5], ld32((c.r[3].w[0])));  [[clang::musttail]] return unit_0006(c, 36u, depth); }
L_0010C610:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 3520u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0010C620:
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], 0u + 112u);
    set32(c.r[4], 0u + 28u);
    mmi::mult(c, 1, c.r[7].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 17744u);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0010C664; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010C674; } }
L_0010C664:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C66Cu); c.r[4].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 19u, depth + 1u); else { c.pc = 0x0010C440u; return; } if (c.pc != 0x0010C66Cu) [[unlikely]] return; }
L_0010C66C:
    st8((c.r[2].w[0] + 113u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0010C674:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0010C688:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], 0u + 112u);
    set32(c.r[4], 0u + 28u);
    mmi::mult(c, 1, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 17744u);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010C6CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C6C8u); c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 19u, depth + 1u); else { c.pc = 0x0010C440u; return; } if (c.pc != 0x0010C6C8u) [[unlikely]] return; }
L_0010C6C8:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 113u));
    c.budget -= 1;
L_0010C6CC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0010C6D8:
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0010C700; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 22248u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { set32(c.r[5], ld32((c.r[3].w[0])));  [[clang::musttail]] return unit_0006(c, 36u, depth); }
L_0010C700:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 3520u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0010C710:
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], 0u + 112u);
    set32(c.r[4], 0u + 28u);
    mmi::mult(c, 1, c.r[8].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] + 17744u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0010C818; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C75Cu); c.r[4].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 19u, depth + 1u); else { c.pc = 0x0010C440u; return; } if (c.pc != 0x0010C75Cu) [[unlikely]] return; }
L_0010C75C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = ld8((c.r[4].w[0] + 114u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010C81C; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 100u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010C81C; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 106u));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0010C818; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0010C7A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0010C81C; } }
L_0010C7A0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;  if (t) { goto L_0010C7E8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0010C7C0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[5].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010C7D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0010C820; } }
L_0010C7C0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_0010C7F8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010C808; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0010C820; } }
L_0010C7D8:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0] + 48u));  if (t) { goto L_0010C81C; } }
L_0010C7E8:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0] + 49u));  if (t) { goto L_0010C81C; } }
L_0010C7F8:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0] + 50u));  if (t) { goto L_0010C81C; } }
L_0010C808:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0] + 51u));  if (t) { goto L_0010C81C; } }
L_0010C818:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010C81C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0010C820:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0010C830:
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], 0u + 112u);
    set32(c.r[4], 0u + 28u);
    mmi::mult(c, 1, c.r[8].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] + 17744u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0010C934; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C87Cu); c.r[4].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 19u, depth + 1u); else { c.pc = 0x0010C440u; return; } if (c.pc != 0x0010C87Cu) [[unlikely]] return; }
L_0010C87C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 114u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010C938; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 100u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010C938; } }
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[5].d[0]; c.r[2].d[0] = ld8((c.r[4].w[0] + 107u));  if (t) { goto L_0010C8B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0010C93C; } }
L_0010C8B4:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0010C938; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], c.r[17].w[0] << 2);  goto L_0010C908; }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] > 0;  if (t) { goto L_0010C8E0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[5].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010C8F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0010C93C; } }
L_0010C8E0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0010C914; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010C924; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0010C93C; } }
L_0010C8F8:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0] + 64u));  if (t) { goto L_0010C938; } }
L_0010C908:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0] + 65u));  if (t) { goto L_0010C938; } }
L_0010C914:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0] + 66u));  if (t) { goto L_0010C938; } }
L_0010C924:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0] + 67u));  if (t) { goto L_0010C938; } }
L_0010C934:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010C938:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0010C93C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0010C950:
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], 0u + 112u);
    set32(c.r[4], 0u + 28u);
    mmi::mult(c, 1, c.r[8].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] + 17744u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0010CA70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C99Cu); c.r[4].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 19u, depth + 1u); else { c.pc = 0x0010C440u; return; } if (c.pc != 0x0010C99Cu) [[unlikely]] return; }
L_0010C99C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 114u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010CA74; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 113u));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010CA74; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[5].d[0]; c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;  if (t) { goto L_0010CA10; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0010C9E0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010C9F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0010CA78; } }
L_0010C9E0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_0010CA28; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010CA3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0010CA78; } }
L_0010C9F8:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 101u));
    set32(c.r[2], 0u + 243u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[3].w[0] >> 4);  if (t) { goto L_0010CA70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0010CA78; } }
L_0010CA10:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 100u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010CA74; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 105u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] << 1);  if (t) { goto L_0010CA64; } }
L_0010CA28:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 100u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010CA74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[4].w[0] + 105u));  if (t) { goto L_0010CA74; } }
L_0010CA3C:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 100u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_0010CA70; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[2].d[0] = ld8((c.r[4].w[0] + 104u));  if (t) { goto L_0010CA58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0010CA78; } }
L_0010CA58:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] << 1);  if (t) { goto L_0010CA70; } }
L_0010CA64:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[3].w[0] + 80u));  if (t) { goto L_0010CA74; } }
L_0010CA70:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010CA74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0010CA78:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0010CA88:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[2], 0u + 6u);
    set32(c.r[16], c.r[3].w[0] + 18496u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[16].w[0] + 12u), c.r[6].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[16].w[0] + 16u), c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] + 17664u);
    st32((c.r[3].w[0] + 18496u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[16].w[0] + 4u), c.r[18].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 8u), c.r[17].w[0]);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    set32(c.r[8], 0u + 128u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 128u);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CAF0u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010CAF0u) [[unlikely]] return; }
L_0010CAF0:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[3], ld32((c.r[16].w[0] + 20u)));  goto L_0010CB00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010CB24; } }
L_0010CB00:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0010CB24; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CB1Cu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0003(c, 29u, depth + 1u); else { c.pc = 0x0010C620u; return; } if (c.pc != 0x0010CB1Cu) [[unlikely]] return; }
L_0010CB1C:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_0010CB24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0010CB40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CB64u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 19u, depth + 1u); else { c.pc = 0x0010C440u; return; } if (c.pc != 0x0010CB64u) [[unlikely]] return; }
L_0010CB64:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 114u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010CBE0; } }
    set32(c.r[3], 0u + 28u);
    set32(c.r[4], 0u + 112u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[16].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 17744u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[7], c.r[6].w[0] + 12u);
    c.budget -= 11;
L_0010CBA0:
    set32(c.r[2], c.r[18].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[7].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 6ll ? 1ull : 0ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010CBA0u | kUnwind; return; } goto L_0010CBA0; } }
    set32(c.r[3], 0u + 6u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[6].w[0] + 4u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[6].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CBDCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 459u, depth + 1u); else { c.pc = 0x0010BE10u; return; } if (c.pc != 0x0010CBDCu) [[unlikely]] return; }
L_0010CBDC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0010CBE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0010CBF8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    set32(c.r[2], 0u + 8u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[16], c.r[3].w[0] + 18496u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st32((c.r[3].w[0] + 18496u), c.r[2].w[0]);
    set32(c.r[7], c.r[16].w[0] + 12u);
    st32((c.r[16].w[0] + 4u), c.r[18].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 16;
L_0010CC38:
    set32(c.r[2], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[7].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 6ll ? 1ull : 0ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010CC38u | kUnwind; return; } goto L_0010CC38; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] + 17664u);
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 128u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 128u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CC84u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010CC84u) [[unlikely]] return; }
L_0010CC84:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[3], ld32((c.r[16].w[0] + 20u)));  goto L_0010CC94; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010CCB8; } }
L_0010CC94:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0010CCB8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CCB0u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0003(c, 29u, depth + 1u); else { c.pc = 0x0010C620u; return; } if (c.pc != 0x0010CCB0u) [[unlikely]] return; }
L_0010CCB0:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_0010CCB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0010CCD0:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], 0u + 112u);
    set32(c.r[4], 0u + 28u);
    mmi::mult(c, 1, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 17744u);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010CD78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CD10u); c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 19u, depth + 1u); else { c.pc = 0x0010C440u; return; } if (c.pc != 0x0010CD10u) [[unlikely]] return; }
L_0010CD10:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = ld8((c.r[6].w[0] + 114u));
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].d[0] = ld8((c.r[6].w[0] + 100u));  goto L_0010CD2C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010CD78; } }
L_0010CD2C:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010CD78; } }
    c.r[2].d[0] = ld8((c.r[6].w[0] + 102u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010CD78; } }
    c.r[5].d[0] = ld8((c.r[6].w[0] + 122u));
    c.r[4].d[0] = ld8((c.r[6].w[0] + 124u));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 123u));
    c.r[5].d[0] = c.r[5].d[0] << 8;
    c.r[2].d[0] = ld8((c.r[6].w[0] + 121u));
    c.r[4].d[0] = c.r[4].d[0] << 24;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] + c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] + c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] + c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 12;
L_0010CD78:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0010CD88:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[3], 0u + 10u);
    set32(c.r[16], c.r[2].w[0] + 18496u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[16].w[0] + 12u), c.r[6].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[2].w[0] + 18496u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 17664u);
    st32((c.r[16].w[0] + 4u), c.r[18].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[16].w[0] + 8u), c.r[17].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), 0u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 128u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 128u);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CDECu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010CDECu) [[unlikely]] return; }
L_0010CDEC:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[3], ld32((c.r[16].w[0] + 16u)));  goto L_0010CDFC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010CE20; } }
L_0010CDFC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0010CE20; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CE18u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0003(c, 29u, depth + 1u); else { c.pc = 0x0010C620u; return; } if (c.pc != 0x0010CE18u) [[unlikely]] return; }
L_0010CE18:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_0010CE20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0010CE38:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], 0u + 112u);
    set32(c.r[4], 0u + 28u);
    mmi::mult(c, 1, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 17744u);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010CE88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CE78u); c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 51u, depth + 1u); else { c.pc = 0x0010CCD0u; return; } if (c.pc != 0x0010CE78u) [[unlikely]] return; }
L_0010CE78:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
L_0010CE88:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0010CE98:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], 0u + 112u);
    set32(c.r[4], 0u + 28u);
    mmi::mult(c, 1, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 17744u);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0010CED8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010CEE0; } }
L_0010CED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CEE0u); set32(c.r[6], 0u + 4095u);  if (depth < kMaxDepth) unit_0003(c, 53u, depth + 1u); else { c.pc = 0x0010CD88u; return; } if (c.pc != 0x0010CEE0u) [[unlikely]] return; }
L_0010CEE0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0010CEF0:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], 0u + 112u);
    set32(c.r[4], 0u + 28u);
    mmi::mult(c, 1, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 17744u);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0010CF30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010CF38; } }
L_0010CF30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CF38u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 53u, depth + 1u); else { c.pc = 0x0010CD88u; return; } if (c.pc != 0x0010CF38u) [[unlikely]] return; }
L_0010CF38:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0010CF48:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    set32(c.r[3], 0u + 11u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], c.r[2].w[0] + 18496u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[16].w[0] + 4u), c.r[18].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[2].w[0] + 18496u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 17664u);
    st32((c.r[16].w[0] + 8u), c.r[17].w[0]);
    set32(c.r[8], 0u + 128u);
    ldl(c.r[2], (c.r[6].w[0] + 7u));
    ldr(c.r[2], (c.r[6].w[0]));
    lwl(c.r[3], (c.r[6].w[0] + 11u));
    lwr(c.r[3], (c.r[6].w[0] + 8u));
    sdl(c.r[2], (c.r[16].w[0] + 19u));
    sdr(c.r[2], (c.r[16].w[0] + 12u));
    swl(c.r[3], (c.r[16].w[0] + 23u));
    swr(c.r[3], (c.r[16].w[0] + 20u));
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 128u);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CFC8u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010CFC8u) [[unlikely]] return; }
L_0010CFC8:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[3], ld32((c.r[16].w[0] + 28u)));  goto L_0010CFD8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010CFFC; } }
L_0010CFD8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0010CFFC; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010CFF4u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0003(c, 29u, depth + 1u); else { c.pc = 0x0010C620u; return; } if (c.pc != 0x0010CFF4u) [[unlikely]] return; }
L_0010CFF4:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_0010CFFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0010D018:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[3], 0u + 12u);
    set32(c.r[16], c.r[2].w[0] + 18496u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 17664u);
    st32((c.r[2].w[0] + 18496u), c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 128u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 128u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D060u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010D060u) [[unlikely]] return; }
L_0010D060:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  goto L_0010D06C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010D06C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0010D080:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[6], 0u + 13u);
    set32(c.r[16], c.r[2].w[0] + 18496u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[2].w[0] + 18496u), c.r[6].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[3].w[0] + 17664u);
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 128u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 128u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D0CCu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010D0CCu) [[unlikely]] return; }
L_0010D0CC:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  goto L_0010D0D8; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010D0D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0010D0E8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[3], 0u + 18u);
    set32(c.r[16], c.r[2].w[0] + 18496u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 17664u);
    st32((c.r[2].w[0] + 18496u), c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 128u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 128u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D130u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010D130u) [[unlikely]] return; }
L_0010D130:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  goto L_0010D13C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010D13C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0010D150:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[6], 0u + 20u);
    set32(c.r[16], c.r[2].w[0] + 18496u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[2].w[0] + 18496u), c.r[6].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[3].w[0] + 17664u);
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 128u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 128u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D19Cu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010D19Cu) [[unlikely]] return; }
L_0010D19C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 8u)));  goto L_0010D1A8; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010D1A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0010D1B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D1C8u); c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 450u, depth + 1u); else { c.pc = 0x00103BD0u; return; } if (c.pc != 0x0010D1C8u) [[unlikely]] return; }
L_0010D1C8:
    set_interrupts(c, true);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0010D1E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] & 65535ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 8u), 0u);
    st32((c.r[29].w[0] + 20u), 0u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D20Cu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 444u, depth + 1u); else { c.pc = 0x00103BA0u; return; } if (c.pc != 0x0010D20Cu) [[unlikely]] return; }
L_0010D20C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00110000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D224u); set32(c.r[5], c.r[5].w[0] - 11848u);  if (depth < kMaxDepth) unit_0000(c, 364u, depth + 1u); else { c.pc = 0x00103920u; return; } if (c.pc != 0x0010D224u) [[unlikely]] return; }
L_0010D224:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D22Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x0010D22Cu) [[unlikely]] return; }
L_0010D22C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D234u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x0010D234u) [[unlikely]] return; }
L_0010D234:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0010D248:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D264u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0003(c, 163u, depth + 1u); else { c.pc = 0x0010DCB0u; return; } if (c.pc != 0x0010D264u) [[unlikely]] return; }
L_0010D264:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010D288; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D274u);  if (depth < kMaxDepth) unit_0002(c, 450u, depth + 1u); else { c.pc = 0x0010BD40u; return; } if (c.pc != 0x0010D274u) [[unlikely]] return; }
L_0010D274:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], ld32((c.r[3].w[0] + 18624u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D284u); st32((c.r[3].w[0] + 18624u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0002(c, 452u, depth + 1u); else { c.pc = 0x0010BD88u; return; } if (c.pc != 0x0010D284u) [[unlikely]] return; }
L_0010D284:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0010D288:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0010D2A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 11u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st32((c.r[16].w[0] + 22356u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 22356u)));
    st32((c.r[4].w[0] + 22360u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 22356u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_0010D2E8; } }
    st32((c.r[16].w[0] + 22356u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st32((c.r[2].w[0] + 22320u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0010D334; } }
L_0010D2E8:
    set32(c.r[4], ld32((c.r[2].w[0] + 22312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D2F4u);  if (depth < kMaxDepth) unit_0000(c, 450u, depth + 1u); else { c.pc = 0x00103BD0u; return; } if (c.pc != 0x0010D2F4u) [[unlikely]] return; }
L_0010D2F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 22292u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0010D324; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 18624u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_0010D324; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 22304u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D31Cu);  if (depth < kMaxDepth) unit_0000(c, 450u, depth + 1u); else { c.pc = 0x00103BD0u; return; } if (c.pc != 0x0010D31Cu) [[unlikely]] return; }
L_0010D31C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010D32C; } }
L_0010D324:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st32((c.r[2].w[0] + 22320u), 0u);
    c.budget -= 2;
L_0010D32C:
    st32((c.r[16].w[0] + 22356u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_0010D334:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0010D340:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 128u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[23].d[0]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.budget -= 20;
L_0010D390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D398u); set32(c.r[4], ld32((c.r[30].w[0] + 22304u)));  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x0010D398u) [[unlikely]] return; }
L_0010D398:
    set32(c.r[3], ld32((c.r[19].w[0] + 22356u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], ld32((c.r[21].w[0] + 22288u)));  if (t) { goto L_0010D3C0; } }
    st32((c.r[18].w[0] + 22320u), 0u);
    st32((c.r[19].w[0] + 22356u), 0u);
    st32((c.r[23].w[0] + 22292u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D3BCu); st32((c.r[22].w[0] + 18636u), 0u);  if (depth < kMaxDepth) unit_0000(c, 388u, depth + 1u); else { c.pc = 0x001039E0u; return; } if (c.pc != 0x0010D3BCu) [[unlikely]] return; }
L_0010D3BC:
    set32(c.r[2], ld32((c.r[21].w[0] + 22288u)));
    c.budget -= 1;
L_0010D3C0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[4], c.r[20].w[0] + 3576u);  if (t) { goto L_0010D3D4; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 18624u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D3D4u); set32(c.r[6], ld32((c.r[16].w[0] + 22360u)));  if (depth < kMaxDepth) unit_0001(c, 235u, depth + 1u); else { c.pc = 0x00105CA0u; return; } if (c.pc != 0x0010D3D4u) [[unlikely]] return; }
L_0010D3D4:
    set32(c.r[3], ld32((c.r[17].w[0] + 18624u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0010D3F4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 22360u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010D3F4; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D3F4u); set32(c.r[4], ld32((c.r[16].w[0] + 22360u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010D3F4u) [[unlikely]] return; }
L_0010D3F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 22320u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010D390u | kUnwind; return; } goto L_0010D390; } }
    c.budget -= 1;
L_0010D400:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[19], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[20].w[0] + 22292u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 14;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0] + 80u), c.r[31].d[0]);  if (t) { goto L_0010D4A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D440u);  if (depth < kMaxDepth) unit_0000(c, 410u, depth + 1u); else { c.pc = 0x00103A90u; return; } if (c.pc != 0x0010D440u) [[unlikely]] return; }
L_0010D440:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[3].w[0] + 18640u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D458u); set32(c.r[5], c.r[5].w[0] + 18648u);  if (depth < kMaxDepth) unit_0000(c, 412u, depth + 1u); else { c.pc = 0x00103AA0u; return; } if (c.pc != 0x0010D458u) [[unlikely]] return; }
L_0010D458:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00110000u);
    set32(c.r[3], c.r[3].w[0] + 18696u);
    set32(c.r[2], c.r[2].w[0] + 25456u);
    set32(c.r[5], c.r[5].w[0] - 11456u);
    st32((c.r[3].w[0] + 12u), c.r[16].w[0]);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[18].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D48Cu); st32((c.r[3].w[0] + 20u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0000(c, 380u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x0010D48Cu) [[unlikely]] return; }
L_0010D48C:
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 22292u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D49Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 384u, depth + 1u); else { c.pc = 0x001039C0u; return; } if (c.pc != 0x0010D49Cu) [[unlikely]] return; }
L_0010D49C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0010D4B4; } }
L_0010D4A4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D4B0u); c.r[19].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 398u, depth + 1u); else { c.pc = 0x00103A30u; return; } if (c.pc != 0x0010D4B0u) [[unlikely]] return; }
L_0010D4B0:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0010D4B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0010D4D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[6].d[0] = c.r[4].d[0] | c.r[2].d[0];
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0; c.r[9].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_0010D530; } }
    set32(c.r[8], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0010D530; } }
    set32(c.r[7], c.r[6].w[0] + 16u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[2], c.r[7].w[0] + c.r[5].w[0]);
    c.budget -= 4;
L_0010D508:
    set32(c.r[4], c.r[8].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[7].w[0] + c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010D508u | kUnwind; return; } goto L_0010D508; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[6].w[0] + 4u)));  if (t) { goto L_0010D534; } }
L_0010D530:
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 1;
L_0010D534:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0010D570; } }
    set32(c.r[8], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0010D570; } }
    set32(c.r[7], c.r[6].w[0] + 80u);
    set32(c.r[2], c.r[7].w[0] + c.r[5].w[0]);
    c.budget -= 2;
L_0010D550:
    set32(c.r[4], c.r[8].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[7].w[0] + c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010D550u | kUnwind; return; } goto L_0010D550; } }
L_0010D570:
    c.budget -= 2;
    { set32(c.r[4], c.r[9].w[0] + 22356u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010D2A0u | kUnwind; return; } goto L_0010D2A0; }
L_0010D578:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 22312u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; st64((c.r[29].w[0] + 32u), c.r[16].d[0]);  if (t) { goto L_0010D5B0; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 22316u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0010D5FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0010D5B8; } }
L_0010D5B0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0010D5B8:
    st32((c.r[29].w[0] + 20u), 0u);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D5CCu); st32((c.r[29].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 444u, depth + 1u); else { c.pc = 0x00103BA0u; return; } if (c.pc != 0x0010D5CCu) [[unlikely]] return; }
L_0010D5CC:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D5D8u); st32((c.r[17].w[0] + 22312u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 444u, depth + 1u); else { c.pc = 0x00103BA0u; return; } if (c.pc != 0x0010D5D8u) [[unlikely]] return; }
L_0010D5D8:
    st32((c.r[16].w[0] + 22316u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D5E8u); st32((c.r[29].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_0000(c, 444u, depth + 1u); else { c.pc = 0x00103BA0u; return; } if (c.pc != 0x0010D5E8u) [[unlikely]] return; }
L_0010D5E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st32((c.r[3].w[0] + 22304u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st32((c.r[2].w[0] + 22320u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 5;
L_0010D5FC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0010D610:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], ld32((c.r[2].w[0] + 22292u)));
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_0010D648; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[3].w[0] + 22356u), c.r[2].w[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D640u); set32(c.r[4], ld32((c.r[16].w[0] + 22304u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010D640u) [[unlikely]] return; }
L_0010D640:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_0010D650; } }
L_0010D648:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.budget -= 2;
L_0010D650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D658u); set32(c.r[4], ld32((c.r[2].w[0] + 22312u)));  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x0010D658u) [[unlikely]] return; }
L_0010D658:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D664u); set32(c.r[4], ld32((c.r[3].w[0] + 22316u)));  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x0010D664u) [[unlikely]] return; }
L_0010D664:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D66Cu); set32(c.r[4], ld32((c.r[16].w[0] + 22304u)));  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x0010D66Cu) [[unlikely]] return; }
L_0010D66C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D674u);  if (depth < kMaxDepth) unit_0002(c, 450u, depth + 1u); else { c.pc = 0x0010BD40u; return; } if (c.pc != 0x0010D674u) [[unlikely]] return; }
L_0010D674:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D680u); c.r[4].d[0] = c.r[4].d[0] | 18ull;  if (depth < kMaxDepth) unit_0001(c, 263u, depth + 1u); else { c.pc = 0x00106090u; return; } if (c.pc != 0x0010D680u) [[unlikely]] return; }
L_0010D680:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010BD88u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 452u, depth); }
L_0010D690:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 22332u)));
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 10;
    { const bool t = c.r[3].sd[0] >= 0; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_0010D6C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D6C0u);  if (depth < kMaxDepth) unit_0003(c, 119u, depth + 1u); else { c.pc = 0x0010D740u; return; } if (c.pc != 0x0010D6C0u) [[unlikely]] return; }
L_0010D6C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D6C8u);  if (depth < kMaxDepth) unit_0002(c, 450u, depth + 1u); else { c.pc = 0x0010BD40u; return; } if (c.pc != 0x0010D6C8u) [[unlikely]] return; }
L_0010D6C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], ld32((c.r[3].w[0] + 18628u)));
    st32((c.r[2].w[0] + 18632u), c.r[17].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D6E0u); st32((c.r[3].w[0] + 18628u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0002(c, 452u, depth + 1u); else { c.pc = 0x0010BD88u; return; } if (c.pc != 0x0010D6E0u) [[unlikely]] return; }
L_0010D6E0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0010D700:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], ld32((c.r[2].w[0] + 18628u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0010D730; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 22308u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0010D734; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D730u); set32(c.r[4], ld32((c.r[2].w[0] + 18632u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010D730u) [[unlikely]] return; }
L_0010D730:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0010D734:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0010D740:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[17], 0u + 1u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D760u); st32((c.r[16].w[0] + 22308u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0002(c, 450u, depth + 1u); else { c.pc = 0x0010BD40u; return; } if (c.pc != 0x0010D760u) [[unlikely]] return; }
L_0010D760:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00110000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] - 10496u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D778u); c.r[4].d[0] = c.r[4].d[0] | 18ull;  if (depth < kMaxDepth) unit_0001(c, 262u, depth + 1u); else { c.pc = 0x00106060u; return; } if (c.pc != 0x0010D778u) [[unlikely]] return; }
L_0010D778:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D780u);  if (depth < kMaxDepth) unit_0002(c, 452u, depth + 1u); else { c.pc = 0x0010BD88u; return; } if (c.pc != 0x0010D780u) [[unlikely]] return; }
L_0010D780:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st32((c.r[16].w[0] + 22308u), 0u);
    st32((c.r[3].w[0] + 22332u), c.r[17].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0010D7A8:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st64((c.r[29].w[0] + 144u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D7E4u); st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0003(c, 102u, depth + 1u); else { c.pc = 0x0010D578u; return; } if (c.pc != 0x0010D7E4u) [[unlikely]] return; }
L_0010D7E4:
    set32(c.r[4], ld32((c.r[22].w[0] + 22312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D7F0u);  if (depth < kMaxDepth) unit_0000(c, 454u, depth + 1u); else { c.pc = 0x00103BF0u; return; } if (c.pc != 0x0010D7F0u) [[unlikely]] return; }
L_0010D7F0:
    set32(c.r[3], ld32((c.r[22].w[0] + 22312u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010DA74; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 18640u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[6].w[0] + 22300u), c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D81Cu); set32(c.r[5], c.r[5].w[0] + 18648u);  if (depth < kMaxDepth) unit_0000(c, 412u, depth + 1u); else { c.pc = 0x00103AA0u; return; } if (c.pc != 0x0010D81Cu) [[unlikely]] return; }
L_0010D81C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D824u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0003(c, 163u, depth + 1u); else { c.pc = 0x0010DCB0u; return; } if (c.pc != 0x0010D824u) [[unlikely]] return; }
L_0010D824:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0010D9A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D834u); c.r[17].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (depth < kMaxDepth) unit_0001(c, 282u, depth + 1u); else { c.pc = 0x00106448u; return; } if (c.pc != 0x0010D834u) [[unlikely]] return; }
L_0010D834:
    set32(c.r[2], ld32((c.r[17].w[0] + 22336u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; c.r[23].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0010D8EC; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[30].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0010D874; } }
L_0010D850:
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_0010D858:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010D858u | kUnwind; return; } goto L_0010D858; } }
L_0010D874:
    set32(c.r[16], c.r[23].w[0] + 19136u);
    c.budget -= 1;
L_0010D878:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 1431ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D88Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 330u, depth + 1u); else { c.pc = 0x00106AB8u; return; } if (c.pc != 0x0010D88Cu) [[unlikely]] return; }
L_0010D88C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_0010D8DC; }
    set32(c.r[2], ld32((c.r[20].w[0] + 22288u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { goto L_0010D8B0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D8ACu); set32(c.r[4], c.r[4].w[0] + 3616u);  if (depth < kMaxDepth) unit_0001(c, 235u, depth + 1u); else { c.pc = 0x00105CA0u; return; } if (c.pc != 0x0010D8ACu) [[unlikely]] return; }
L_0010D8AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.budget -= 1;
L_0010D8B0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_0010D8B8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010D8B8u | kUnwind; return; } goto L_0010D8B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[23].w[0] + 19136u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010D878u | kUnwind; return; } goto L_0010D878; } }
L_0010D8DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010D850u | kUnwind; return; } goto L_0010D850; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 22336u), 0u);  if (t) { goto L_0010D8F8; } }
L_0010D8EC:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
L_0010D8F8:
    c.r[3].d[0] = ld8((c.r[18].w[0]));
    set32(c.r[4], c.r[21].w[0] + 18752u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] << 24);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; st8((c.r[4].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0010D93C; } }
    set32(c.r[6], c.r[4].w[0] + 36u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_0010D918:
    c.r[2].d[0] = c.r[5].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[18].w[0] + c.r[5].w[0]);  if (t) { goto L_0010D93C; } }
    set32(c.r[4], c.r[5].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010D918u | kUnwind; return; } goto L_0010D918; }
L_0010D93C:
    set32(c.r[2], 0u + 256u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[16], c.r[21].w[0] + 18752u);  if (t) { goto L_0010D950; } }
    set32(c.r[2], c.r[21].w[0] + 18752u);
    st8((c.r[2].w[0] + 291u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0010D950:
    set32(c.r[2], ld32((c.r[20].w[0] + 22288u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0] + 292u), c.r[16].w[0]);  if (t) { goto L_0010D96C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[5], c.r[16].w[0] + 36u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D96Cu); set32(c.r[4], c.r[4].w[0] + 3648u);  if (depth < kMaxDepth) unit_0001(c, 235u, depth + 1u); else { c.pc = 0x00105CA0u; return; } if (c.pc != 0x0010D96Cu) [[unlikely]] return; }
L_0010D96C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D978u); set32(c.r[5], 0u + 296u);  if (depth < kMaxDepth) unit_0001(c, 279u, depth + 1u); else { c.pc = 0x00106398u; return; } if (c.pc != 0x0010D978u) [[unlikely]] return; }
L_0010D978:
    set32(c.r[4], c.r[23].w[0] + 19136u);
    st32((c.r[29].w[0]), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 296u);
    set32(c.r[9], c.r[30].w[0] + 19072u);
    set32(c.r[10], 0u + 4u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D9A0u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010D9A0u) [[unlikely]] return; }
L_0010D9A0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_0010D9BC; } }
L_0010D9A8:
    set32(c.r[4], ld32((c.r[22].w[0] + 22312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010D9B4u);  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010D9B4u) [[unlikely]] return; }
L_0010D9B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010DA74; } }
L_0010D9BC:
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    ldl(c.r[3], (c.r[2].w[0] + 7u));
    ldr(c.r[3], (c.r[2].w[0]));
    ldl(c.r[4], (c.r[2].w[0] + 15u));
    ldr(c.r[4], (c.r[2].w[0] + 8u));
    ldl(c.r[5], (c.r[2].w[0] + 23u));
    ldr(c.r[5], (c.r[2].w[0] + 16u));
    ldl(c.r[6], (c.r[2].w[0] + 31u));
    ldr(c.r[6], (c.r[2].w[0] + 24u));
    sdl(c.r[3], (c.r[19].w[0] + 7u));
    sdr(c.r[3], (c.r[19].w[0]));
    sdl(c.r[4], (c.r[19].w[0] + 15u));
    sdr(c.r[4], (c.r[19].w[0] + 8u));
    sdl(c.r[5], (c.r[19].w[0] + 23u));
    sdr(c.r[5], (c.r[19].w[0] + 16u));
    sdl(c.r[6], (c.r[19].w[0] + 31u));
    sdr(c.r[6], (c.r[19].w[0] + 24u));
    lwl(c.r[3], (c.r[2].w[0] + 35u));
    lwr(c.r[3], (c.r[2].w[0] + 32u));
    swl(c.r[3], (c.r[19].w[0] + 35u));
    swr(c.r[3], (c.r[19].w[0] + 32u));
    set32(c.r[3], ld32((c.r[20].w[0] + 22288u)));
    c.budget -= 24;
    { const bool t = c.r[3].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0010DA58; } }
    set32(c.r[5], c.r[19].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DA28u); set32(c.r[4], c.r[4].w[0] + 3672u);  if (depth < kMaxDepth) unit_0001(c, 235u, depth + 1u); else { c.pc = 0x00105CA0u; return; } if (c.pc != 0x0010DA28u) [[unlikely]] return; }
L_0010DA28:
    set32(c.r[2], ld32((c.r[20].w[0] + 22288u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0010DA58; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DA40u); set32(c.r[4], c.r[4].w[0] + 3688u);  if (depth < kMaxDepth) unit_0001(c, 235u, depth + 1u); else { c.pc = 0x00105CA0u; return; } if (c.pc != 0x0010DA40u) [[unlikely]] return; }
L_0010DA40:
    set32(c.r[2], ld32((c.r[20].w[0] + 22288u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0010DA58; } }
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DA58u); set32(c.r[4], c.r[4].w[0] + 3704u);  if (depth < kMaxDepth) unit_0001(c, 235u, depth + 1u); else { c.pc = 0x00105CA0u; return; } if (c.pc != 0x0010DA58u) [[unlikely]] return; }
L_0010DA58:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[2], c.r[30].w[0] + 19072u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[4], ld32((c.r[22].w[0] + 22312u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DA70u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010DA70u) [[unlikely]] return; }
L_0010DA70:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0010DA74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0010DAA8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DAC8u); st64((c.r[29].w[0] + 32u), c.r[18].d[0]);  if (depth < kMaxDepth) unit_0003(c, 102u, depth + 1u); else { c.pc = 0x0010D578u; return; } if (c.pc != 0x0010DAC8u) [[unlikely]] return; }
L_0010DAC8:
    set32(c.r[4], ld32((c.r[16].w[0] + 22312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DAD4u);  if (depth < kMaxDepth) unit_0000(c, 454u, depth + 1u); else { c.pc = 0x00103BF0u; return; } if (c.pc != 0x0010DAD4u) [[unlikely]] return; }
L_0010DAD4:
    set32(c.r[3], ld32((c.r[16].w[0] + 22312u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_0010DB08; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 22288u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_0010DB40; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 22300u)));
    set32(c.r[4], c.r[4].w[0] + 3728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DB00u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 235u, depth + 1u); else { c.pc = 0x00105CA0u; return; } if (c.pc != 0x0010DB00u) [[unlikely]] return; }
L_0010DB00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010DC00; } }
L_0010DB08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 18640u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[3].w[0] + 22300u), c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DB24u); set32(c.r[5], c.r[5].w[0] + 18648u);  if (depth < kMaxDepth) unit_0000(c, 412u, depth + 1u); else { c.pc = 0x00103AA0u; return; } if (c.pc != 0x0010DB24u) [[unlikely]] return; }
L_0010DB24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DB2Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0003(c, 163u, depth + 1u); else { c.pc = 0x0010DCB0u; return; } if (c.pc != 0x0010DB2Cu) [[unlikely]] return; }
L_0010DB2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0010DB48; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 22312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DB40u);  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010DB40u) [[unlikely]] return; }
L_0010DB40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010DC00; } }
L_0010DB48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DB50u); c.r[18].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (depth < kMaxDepth) unit_0001(c, 282u, depth + 1u); else { c.pc = 0x00106448u; return; } if (c.pc != 0x0010DB50u) [[unlikely]] return; }
L_0010DB50:
    set32(c.r[2], ld32((c.r[18].w[0] + 22328u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0010DC00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_0010DB8C; } }
    c.budget -= 1;
L_0010DB68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_0010DB70:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010DB70u | kUnwind; return; } goto L_0010DB70; } }
L_0010DB8C:
    set32(c.r[16], c.r[17].w[0] + 26832u);
    c.budget -= 1;
L_0010DB90:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 1429ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DBA4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 330u, depth + 1u); else { c.pc = 0x00106AB8u; return; } if (c.pc != 0x0010DBA4u) [[unlikely]] return; }
L_0010DBA4:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_0010DBF4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 22288u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { goto L_0010DBCC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DBC8u); set32(c.r[4], c.r[4].w[0] + 3768u);  if (depth < kMaxDepth) unit_0001(c, 235u, depth + 1u); else { c.pc = 0x00105CA0u; return; } if (c.pc != 0x0010DBC8u) [[unlikely]] return; }
L_0010DBC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.budget -= 1;
L_0010DBCC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0010DBD0:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010DBD0u | kUnwind; return; } goto L_0010DBD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[17].w[0] + 26832u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010DB90u | kUnwind; return; } goto L_0010DB90; } }
L_0010DBF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010DB68u | kUnwind; return; } goto L_0010DB68; } }
    st32((c.r[18].w[0] + 22328u), 0u);
    c.budget -= 1;
L_0010DC00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0010DC18:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DC2Cu); st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0003(c, 144u, depth + 1u); else { c.pc = 0x0010DAA8u; return; } if (c.pc != 0x0010DC2Cu) [[unlikely]] return; }
L_0010DC2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_0010DC3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010DCA0; } }
L_0010DC3C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[16], c.r[2].w[0] + 22400u);
    set32(c.r[4], c.r[4].w[0] + 26832u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 14u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DC6Cu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010DC6Cu) [[unlikely]] return; }
L_0010DC6C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_0010DC88; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DC80u); set32(c.r[4], ld32((c.r[2].w[0] + 22312u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010DC80u) [[unlikely]] return; }
L_0010DC80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010DCA0; } }
L_0010DC88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    set32(c.r[4], ld32((c.r[3].w[0] + 22312u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DC9Cu); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010DC9Cu) [[unlikely]] return; }
L_0010DC9C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0010DCA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0010DCB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_0010DD14; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 22288u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0010DCDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DCDCu); set32(c.r[4], c.r[4].w[0] + 3792u);  if (depth < kMaxDepth) unit_0001(c, 235u, depth + 1u); else { c.pc = 0x00105CA0u; return; } if (c.pc != 0x0010DCDCu) [[unlikely]] return; }
L_0010DCDC:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_0010DCF0; } }
L_0010DCE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DCF0u); set32(c.r[4], 0u + 60u);  if (depth < kMaxDepth) unit_0003(c, 75u, depth + 1u); else { c.pc = 0x0010D1E0u; return; } if (c.pc != 0x0010DCF0u) [[unlikely]] return; }
L_0010DCF0:
    set32(c.r[2], ld32((c.r[17].w[0] + 22320u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010DCE8u | kUnwind; return; } goto L_0010DCE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DD04u); set32(c.r[4], c.r[16].w[0] + 26832u);  if (depth < kMaxDepth) unit_0001(c, 355u, depth + 1u); else { c.pc = 0x00106E78u; return; } if (c.pc != 0x0010DD04u) [[unlikely]] return; }
L_0010DD04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010DCE8u | kUnwind; return; } goto L_0010DCE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0010DD40; } }
L_0010DD14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 22320u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0010DD3C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DD30u); set32(c.r[4], c.r[4].w[0] + 26832u);  if (depth < kMaxDepth) unit_0001(c, 355u, depth + 1u); else { c.pc = 0x00106E78u; return; } if (c.pc != 0x0010DD30u) [[unlikely]] return; }
L_0010DD30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0010DD3C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010DD3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0010DD40:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0010DD50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_0010DDA0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 22288u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0010DD78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DD78u); set32(c.r[4], c.r[4].w[0] + 3808u);  if (depth < kMaxDepth) unit_0001(c, 235u, depth + 1u); else { c.pc = 0x00105CA0u; return; } if (c.pc != 0x0010DD78u) [[unlikely]] return; }
L_0010DD78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_0010DD88; } }
L_0010DD80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DD88u); set32(c.r[4], 0u + 60u);  if (depth < kMaxDepth) unit_0003(c, 75u, depth + 1u); else { c.pc = 0x0010D1E0u; return; } if (c.pc != 0x0010DD88u) [[unlikely]] return; }
L_0010DD88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DD90u); set32(c.r[4], c.r[16].w[0] + 29000u);  if (depth < kMaxDepth) unit_0001(c, 355u, depth + 1u); else { c.pc = 0x00106E78u; return; } if (c.pc != 0x0010DD90u) [[unlikely]] return; }
L_0010DD90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010DD80u | kUnwind; return; } goto L_0010DD80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0010DDB0; } }
L_0010DDA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DDACu); set32(c.r[4], c.r[4].w[0] + 29000u);  if (depth < kMaxDepth) unit_0001(c, 355u, depth + 1u); else { c.pc = 0x00106E78u; return; } if (c.pc != 0x0010DDACu) [[unlikely]] return; }
L_0010DDAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0010DDB0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0010DDC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DDE0u); st64((c.r[29].w[0] + 32u), c.r[18].d[0]);  if (depth < kMaxDepth) unit_0003(c, 102u, depth + 1u); else { c.pc = 0x0010D578u; return; } if (c.pc != 0x0010DDE0u) [[unlikely]] return; }
L_0010DDE0:
    set32(c.r[4], ld32((c.r[16].w[0] + 22316u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DDECu);  if (depth < kMaxDepth) unit_0000(c, 454u, depth + 1u); else { c.pc = 0x00103BF0u; return; } if (c.pc != 0x0010DDECu) [[unlikely]] return; }
L_0010DDEC:
    set32(c.r[3], ld32((c.r[16].w[0] + 22316u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_0010DE20; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 22288u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_0010DE58; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 22296u)));
    set32(c.r[4], c.r[4].w[0] + 3824u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DE18u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 235u, depth + 1u); else { c.pc = 0x00105CA0u; return; } if (c.pc != 0x0010DE18u) [[unlikely]] return; }
L_0010DE18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010DF18; } }
L_0010DE20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 18640u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[3].w[0] + 22296u), c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DE3Cu); set32(c.r[5], c.r[5].w[0] + 18648u);  if (depth < kMaxDepth) unit_0000(c, 412u, depth + 1u); else { c.pc = 0x00103AA0u; return; } if (c.pc != 0x0010DE3Cu) [[unlikely]] return; }
L_0010DE3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DE44u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0003(c, 169u, depth + 1u); else { c.pc = 0x0010DD50u; return; } if (c.pc != 0x0010DE44u) [[unlikely]] return; }
L_0010DE44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0010DE60; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 22316u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DE58u);  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010DE58u) [[unlikely]] return; }
L_0010DE58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010DF18; } }
L_0010DE60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DE68u); c.r[18].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (depth < kMaxDepth) unit_0001(c, 282u, depth + 1u); else { c.pc = 0x00106448u; return; } if (c.pc != 0x0010DE68u) [[unlikely]] return; }
L_0010DE68:
    set32(c.r[2], ld32((c.r[18].w[0] + 22344u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0010DF18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_0010DEA4; } }
    c.budget -= 1;
L_0010DE80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_0010DE88:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010DE88u | kUnwind; return; } goto L_0010DE88; } }
L_0010DEA4:
    set32(c.r[16], c.r[17].w[0] + 29000u);
    c.budget -= 1;
L_0010DEA8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 1427ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DEBCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 330u, depth + 1u); else { c.pc = 0x00106AB8u; return; } if (c.pc != 0x0010DEBCu) [[unlikely]] return; }
L_0010DEBC:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_0010DF0C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 22288u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { goto L_0010DEE4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DEE0u); set32(c.r[4], c.r[4].w[0] + 3864u);  if (depth < kMaxDepth) unit_0001(c, 235u, depth + 1u); else { c.pc = 0x00105CA0u; return; } if (c.pc != 0x0010DEE0u) [[unlikely]] return; }
L_0010DEE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.budget -= 1;
L_0010DEE4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0010DEE8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010DEE8u | kUnwind; return; } goto L_0010DEE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[17].w[0] + 29000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010DEA8u | kUnwind; return; } goto L_0010DEA8; } }
L_0010DF0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010DE80u | kUnwind; return; } goto L_0010DE80; } }
    st32((c.r[18].w[0] + 22344u), 0u);
    c.budget -= 1;
L_0010DF18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0010DF30:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[30].d[0]);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0] + 128u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DF68u); st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0003(c, 169u, depth + 1u); else { c.pc = 0x0010DD50u; return; } if (c.pc != 0x0010DF68u) [[unlikely]] return; }
L_0010DF68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010E1E0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DF7Cu); c.r[21].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (depth < kMaxDepth) unit_0001(c, 282u, depth + 1u); else { c.pc = 0x00106448u; return; } if (c.pc != 0x0010DF7Cu) [[unlikely]] return; }
L_0010DF7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010DF84u); c.r[20].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (depth < kMaxDepth) unit_0000(c, 410u, depth + 1u); else { c.pc = 0x00103A90u; return; } if (c.pc != 0x0010DF84u) [[unlikely]] return; }
L_0010DF84:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], ld32((c.r[21].w[0] + 22352u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[4].w[0] + 22308u), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], 0u - 1u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st32((c.r[6].w[0] + 18640u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[3].w[0] + 22332u), c.r[4].w[0]);
    st32((c.r[7].w[0] + 22336u), c.r[4].w[0]);
    set32(c.r[17], c.r[2].w[0] + 19176u);
    st32((c.r[8].w[0] + 22328u), c.r[4].w[0]);
    set32(c.r[18], c.r[16].w[0] + 19264u);
    st32((c.r[9].w[0] + 22344u), c.r[4].w[0]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st32((c.r[11].w[0] + 22340u), c.r[4].w[0]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st32((c.r[10].w[0] + 22324u), 0u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[21].w[0] + 22352u), c.r[5].w[0]);
    st32((c.r[20].w[0] + 22348u), c.r[4].w[0]);
    c.budget -= 29;
L_0010DFF8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0010E000:
    c.r[5].d[0] = c.r[5].d[0] | 1426ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E00Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 330u, depth + 1u); else { c.pc = 0x00106AB8u; return; } if (c.pc != 0x0010E00Cu) [[unlikely]] return; }
L_0010E00C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[5].sd[0] >= 0) { set32(c.r[2], ld32((c.r[17].w[0] + 36u)));  goto L_0010E05C; }
    set32(c.r[2], ld32((c.r[23].w[0] + 22288u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[6], ld32((c.r[21].w[0] + 22352u)));  if (t) { goto L_0010E02C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E02Cu); set32(c.r[4], c.r[22].w[0] + 3888u);  if (depth < kMaxDepth) unit_0001(c, 235u, depth + 1u); else { c.pc = 0x00105CA0u; return; } if (c.pc != 0x0010E02Cu) [[unlikely]] return; }
L_0010E02C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
L_0010E038:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010E038u | kUnwind; return; } goto L_0010E038; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010DFF8u | kUnwind; return; } goto L_0010DFF8; } }
L_0010E05C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0010E0B4; } }
    st32((c.r[16].w[0] + 19264u), c.r[19].w[0]);
    st32((c.r[20].w[0] + 22348u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E074u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0001(c, 279u, depth + 1u); else { c.pc = 0x00106398u; return; } if (c.pc != 0x0010E074u) [[unlikely]] return; }
L_0010E074:
    set32(c.r[16], c.r[30].w[0] + 26880u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 4u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 16u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E0A0u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010E0A0u) [[unlikely]] return; }
L_0010E0A0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_0010E0E4; } }
    st32((c.r[2].w[0] + 22308u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010E1E0; } }
L_0010E0B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
L_0010E0C0:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010E0C0u | kUnwind; return; } goto L_0010E0C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010DFF8u | kUnwind; return; } goto L_0010DFF8; } }
L_0010E0E4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[2], c.r[16].w[0] + 12u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    set32(c.r[3], c.r[16].w[0] + 4u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[16], 0u + 1u);
    set32(c.r[2], 0u + 255u);
    c.budget -= 13;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; set32(c.r[4], ld32((c.r[4].w[0])));  if (t) { goto L_0010E16C; } }
    set32(c.r[2], 0u + 254u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[6], 0u - 1u);  if (t) { goto L_0010E130; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 22288u), c.r[16].w[0]);  if (t) { goto L_0010E16C; } }
L_0010E130:
    set32(c.r[2], c.r[5].w[0] + 255u);
    c.r[3].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], 0u + 2u);  goto L_0010E16C; }
    c.r[3].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[4].w[0] + 255u);
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_0010E170; } }
    set32(c.r[16], 0u + 2u);
    c.budget -= 1;
L_0010E16C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.budget -= 1;
L_0010E170:
    st32((c.r[4].w[0] + 22308u), 0u);
    c.budget -= 3;
    { const bool t = c.r[19].sd[0] < 0; c.r[2].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_0010E1CC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_0010E1CC; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_0010E1CC; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 22288u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0010E1A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E1A0u); set32(c.r[4], c.r[4].w[0] + 3920u);  if (depth < kMaxDepth) unit_0001(c, 235u, depth + 1u); else { c.pc = 0x00105CA0u; return; } if (c.pc != 0x0010E1A0u) [[unlikely]] return; }
L_0010E1A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E1A8u);  if (depth < kMaxDepth) unit_0003(c, 106u, depth + 1u); else { c.pc = 0x0010D610u; return; } if (c.pc != 0x0010E1A8u) [[unlikely]] return; }
L_0010E1A8:
    set32(c.r[4], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st32((c.r[2].w[0] + 22312u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st32((c.r[3].w[0] + 22316u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st32((c.r[2].w[0] + 22304u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0010E1E0; } }
L_0010E1CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E1D4u);  if (depth < kMaxDepth) unit_0003(c, 102u, depth + 1u); else { c.pc = 0x0010D578u; return; } if (c.pc != 0x0010E1D4u) [[unlikely]] return; }
L_0010E1D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E1DCu);  if (depth < kMaxDepth) unit_0003(c, 119u, depth + 1u); else { c.pc = 0x0010D740u; return; } if (c.pc != 0x0010E1DCu) [[unlikely]] return; }
L_0010E1DC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0010E1E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0010E210:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    set32(c.r[2], ld32((c.r[22].w[0] + 22288u)));
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.budget -= 14;
    { const bool t = c.r[2].sd[0] <= 0; st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (t) { goto L_0010E254; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E254u); set32(c.r[4], c.r[4].w[0] + 3936u);  if (depth < kMaxDepth) unit_0001(c, 235u, depth + 1u); else { c.pc = 0x00105CA0u; return; } if (c.pc != 0x0010E254u) [[unlikely]] return; }
L_0010E254:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E25Cu); c.r[19].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (depth < kMaxDepth) unit_0003(c, 102u, depth + 1u); else { c.pc = 0x0010D578u; return; } if (c.pc != 0x0010E25Cu) [[unlikely]] return; }
L_0010E25C:
    set32(c.r[4], ld32((c.r[19].w[0] + 22316u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E268u);  if (depth < kMaxDepth) unit_0000(c, 454u, depth + 1u); else { c.pc = 0x00103BF0u; return; } if (c.pc != 0x0010E268u) [[unlikely]] return; }
L_0010E268:
    set32(c.r[3], ld32((c.r[19].w[0] + 22316u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_0010E3DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E27Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0003(c, 169u, depth + 1u); else { c.pc = 0x0010DD50u; return; } if (c.pc != 0x0010E27Cu) [[unlikely]] return; }
L_0010E27C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0010E394; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E28Cu); c.r[17].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (depth < kMaxDepth) unit_0001(c, 282u, depth + 1u); else { c.pc = 0x00106448u; return; } if (c.pc != 0x0010E28Cu) [[unlikely]] return; }
L_0010E28C:
    set32(c.r[2], ld32((c.r[17].w[0] + 22340u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; c.r[21].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0010E344; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[23].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_0010E2CC; } }
    c.budget -= 1;
L_0010E2A8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_0010E2B0:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010E2B0u | kUnwind; return; } goto L_0010E2B0; } }
L_0010E2CC:
    set32(c.r[16], c.r[21].w[0] + 19216u);
    c.budget -= 1;
L_0010E2D0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 1434ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E2E4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 330u, depth + 1u); else { c.pc = 0x00106AB8u; return; } if (c.pc != 0x0010E2E4u) [[unlikely]] return; }
    goto L_0010E2E4;
L_0010E2E0:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010E2E4:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_0010E334; }
    set32(c.r[2], ld32((c.r[22].w[0] + 22288u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { goto L_0010E308; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E304u); set32(c.r[4], c.r[4].w[0] + 3952u);  if (depth < kMaxDepth) unit_0001(c, 235u, depth + 1u); else { c.pc = 0x00105CA0u; return; } if (c.pc != 0x0010E304u) [[unlikely]] return; }
L_0010E304:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.budget -= 1;
L_0010E308:
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_0010E310:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010E310u | kUnwind; return; } goto L_0010E310; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[21].w[0] + 19216u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010E2D0u | kUnwind; return; } goto L_0010E2D0; } }
L_0010E334:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010E2A8u | kUnwind; return; } goto L_0010E2A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 22340u), 0u);  if (t) { goto L_0010E34C; } }
L_0010E344:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.budget -= 2;
L_0010E34C:
    set32(c.r[16], c.r[20].w[0] + 19280u);
    st32((c.r[20].w[0] + 19280u), c.r[18].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E360u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0001(c, 279u, depth + 1u); else { c.pc = 0x00106398u; return; } if (c.pc != 0x0010E360u) [[unlikely]] return; }
L_0010E360:
    set32(c.r[17], c.r[23].w[0] + 26880u);
    set32(c.r[4], c.r[21].w[0] + 19216u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 4u);
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E38Cu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010E38Cu) [[unlikely]] return; }
L_0010E38C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[22].w[0] + 22288u)));  goto L_0010E3B4; }
L_0010E394:
    set32(c.r[4], ld32((c.r[19].w[0] + 22316u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E3A0u);  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010E3A0u) [[unlikely]] return; }
L_0010E3A0:
    c.r[4].d[0] = c.r[18].d[0] ^ 8ull;
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], 0u + 6u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; if (c.r[4].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];  if (t) { goto L_0010E3DC; } }
L_0010E3B4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0010E3C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E3C4u); set32(c.r[4], c.r[4].w[0] + 3984u);  if (depth < kMaxDepth) unit_0001(c, 235u, depth + 1u); else { c.pc = 0x00105CA0u; return; } if (c.pc != 0x0010E3C4u) [[unlikely]] return; }
L_0010E3C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[19].w[0] + 22316u)));
    c.r[2].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E3D8u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010E3D8u) [[unlikely]] return; }
L_0010E3D8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0010E3DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0010E408:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[18], c.r[17].w[0] + 27968u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E430u); set32(c.r[4], 0u + 34u);  if (depth < kMaxDepth) unit_0003(c, 175u, depth + 1u); else { c.pc = 0x0010DDC0u; return; } if (c.pc != 0x0010E430u) [[unlikely]] return; }
L_0010E430:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[17].w[0] + 27968u), c.r[16].w[0]);  goto L_0010E440; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010E4B4; } }
L_0010E440:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E44Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0001(c, 279u, depth + 1u); else { c.pc = 0x00106398u; return; } if (c.pc != 0x0010E44Cu) [[unlikely]] return; }
L_0010E44C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[16], c.r[2].w[0] + 26880u);
    set32(c.r[4], c.r[4].w[0] + 29000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 34u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 4u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E480u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010E480u) [[unlikely]] return; }
L_0010E480:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_0010E49C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E494u); set32(c.r[4], ld32((c.r[2].w[0] + 22316u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010E494u) [[unlikely]] return; }
L_0010E494:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010E4B4; } }
L_0010E49C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    set32(c.r[4], ld32((c.r[3].w[0] + 22316u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E4B0u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010E4B0u) [[unlikely]] return; }
L_0010E4B0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0010E4B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0010E4D0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 22324u)));
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    set32(c.r[18], c.r[3].w[0] + 22528u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0010E52C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E520u);  if (depth < kMaxDepth) unit_0003(c, 158u, depth + 1u); else { c.pc = 0x0010DC18u; return; } if (c.pc != 0x0010E520u) [[unlikely]] return; }
L_0010E520:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010E68C; } }
L_0010E52C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E534u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0003(c, 144u, depth + 1u); else { c.pc = 0x0010DAA8u; return; } if (c.pc != 0x0010E534u) [[unlikely]] return; }
L_0010E534:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[8].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_0010E66C; } }
    st32((c.r[18].w[0]), c.r[19].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[17].w[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st32((c.r[18].w[0] + 8u), c.r[20].w[0]);
    set32(c.r[4], c.r[19].w[0] + 26624u);
    set32(c.r[5], c.r[8].w[0] + 26816u);
    set32(c.r[6], 0u + 1u);
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    st8((c.r[18].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    st8((c.r[18].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    st32((c.r[18].w[0] + 16u), c.r[4].w[0]);
    st8((c.r[18].w[0] + 14u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[18].w[0] + 20u), c.r[5].w[0]);
    c.r[7].d[0] = ld8((c.r[16].w[0] + 2u));
    c.budget -= 18;
    { const bool t = c.r[7].d[0] == c.r[6].d[0]; c.r[2].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_0010E5A0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[17].w[0] << 11);  if (t) { goto L_0010E5B0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 2340u);  if (t) { goto L_0010E5AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010E5B0; } }
L_0010E5A0:
    set32(c.r[2], 0u + 2328u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]); c.r[5].d[0] = c.lo.d[0];  if (t) { goto L_0010E5B0; } }
L_0010E5AC:
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.budget -= 1;
L_0010E5B0:
    set32(c.r[2], ld32((c.r[21].w[0] + 22324u)));
    set32(c.r[16], c.r[8].w[0] + 26816u);
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[8].w[0] + 26816u), 0u);  if (t) { goto L_0010E5CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E5CCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 279u, depth + 1u); else { c.pc = 0x00106398u; return; } if (c.pc != 0x0010E5CCu) [[unlikely]] return; }
L_0010E5CC:
    set32(c.r[19], c.r[19].w[0] + 26624u);
    set32(c.r[5], 0u + 144u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E5E0u); c.r[20].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (depth < kMaxDepth) unit_0001(c, 279u, depth + 1u); else { c.pc = 0x00106398u; return; } if (c.pc != 0x0010E5E0u) [[unlikely]] return; }
L_0010E5E0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E5ECu); set32(c.r[5], 0u + 24u);  if (depth < kMaxDepth) unit_0001(c, 279u, depth + 1u); else { c.pc = 0x00106398u; return; } if (c.pc != 0x0010E5ECu) [[unlikely]] return; }
L_0010E5EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E5F8u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0001(c, 279u, depth + 1u); else { c.pc = 0x00106398u; return; } if (c.pc != 0x0010E5F8u) [[unlikely]] return; }
L_0010E5F8:
    set32(c.r[2], ld32((c.r[20].w[0] + 22288u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0010E60C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E60Cu); set32(c.r[4], c.r[4].w[0] + 4008u);  if (depth < kMaxDepth) unit_0001(c, 235u, depth + 1u); else { c.pc = 0x00105CA0u; return; } if (c.pc != 0x0010E60Cu) [[unlikely]] return; }
L_0010E60C:
    set32(c.r[2], 0u + 1u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st32((c.r[16].w[0] + 22356u), c.r[2].w[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00110000u);
    st32((c.r[17].w[0] + 22320u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 26832u);
    st32((c.r[29].w[0]), c.r[19].w[0]);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[11], c.r[11].w[0] - 11048u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 24u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E650u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010E650u) [[unlikely]] return; }
L_0010E650:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[20].w[0] + 22288u)));  goto L_0010E674; }
    st32((c.r[16].w[0] + 22356u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st32((c.r[17].w[0] + 22320u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E66Cu); set32(c.r[4], ld32((c.r[2].w[0] + 22312u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010E66Cu) [[unlikely]] return; }
L_0010E66C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010E68C; } }
L_0010E674:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0010E68C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E688u); set32(c.r[4], c.r[4].w[0] + 4032u);  if (depth < kMaxDepth) unit_0001(c, 235u, depth + 1u); else { c.pc = 0x00105CA0u; return; } if (c.pc != 0x0010E688u) [[unlikely]] return; }
L_0010E688:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0010E68C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0010E6B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E6C4u); st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0003(c, 175u, depth + 1u); else { c.pc = 0x0010DDC0u; return; } if (c.pc != 0x0010E6C4u) [[unlikely]] return; }
L_0010E6C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_0010E6D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0010E738; } }
L_0010E6D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[16], c.r[2].w[0] + 26880u);
    set32(c.r[4], c.r[4].w[0] + 29000u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E704u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010E704u) [[unlikely]] return; }
L_0010E704:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_0010E720; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E718u); set32(c.r[4], ld32((c.r[2].w[0] + 22316u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010E718u) [[unlikely]] return; }
L_0010E718:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0010E738; } }
L_0010E720:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    set32(c.r[4], ld32((c.r[3].w[0] + 22316u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E734u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010E734u) [[unlikely]] return; }
L_0010E734:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0010E738:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0010E748:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[4], 0u + 30u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E760u); st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0003(c, 175u, depth + 1u); else { c.pc = 0x0010DDC0u; return; } if (c.pc != 0x0010E760u) [[unlikely]] return; }
L_0010E760:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_0010E770; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010E7EC; } }
L_0010E770:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[17], c.r[2].w[0] + 26880u);
    set32(c.r[3], 0u + 8u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st32((c.r[16].w[0] + 22356u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 29000u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 22u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E7ACu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010E7ACu) [[unlikely]] return; }
L_0010E7AC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_0010E7CC; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 22316u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E7C0u);  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010E7C0u) [[unlikely]] return; }
L_0010E7C0:
    st32((c.r[16].w[0] + 22356u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010E7EC; } }
L_0010E7CC:
    st32((c.r[16].w[0] + 22356u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[17].d[0] | c.r[2].d[0];
    set32(c.r[4], ld32((c.r[3].w[0] + 22316u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E7E8u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010E7E8u) [[unlikely]] return; }
L_0010E7E8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0010E7EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0010E800:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E81Cu); set32(c.r[4], 0u + 33u);  if (depth < kMaxDepth) unit_0003(c, 175u, depth + 1u); else { c.pc = 0x0010DDC0u; return; } if (c.pc != 0x0010E81Cu) [[unlikely]] return; }
L_0010E81C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_0010E82C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010E8A0; } }
L_0010E82C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[16], c.r[2].w[0] + 26880u);
    set32(c.r[4], c.r[4].w[0] + 29000u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 33u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 8u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E85Cu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010E85Cu) [[unlikely]] return; }
L_0010E85C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_0010E878; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E870u); set32(c.r[4], ld32((c.r[2].w[0] + 22316u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010E870u) [[unlikely]] return; }
L_0010E870:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010E8A0; } }
L_0010E878:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[16].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 22316u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E89Cu); set32(c.r[16], ld32((c.r[3].w[0])));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010E89Cu) [[unlikely]] return; }
L_0010E89C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0010E8A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0010E8B8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    set32(c.r[4], 0u + 15u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E8DCu); st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0003(c, 175u, depth + 1u); else { c.pc = 0x0010DDC0u; return; } if (c.pc != 0x0010E8DCu) [[unlikely]] return; }
L_0010E8DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_0010E8EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010E994; } }
L_0010E8EC:
    set32(c.r[2], ld32((c.r[19].w[0] + 22288u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0010E900; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E900u); set32(c.r[4], c.r[4].w[0] + 4048u);  if (depth < kMaxDepth) unit_0001(c, 235u, depth + 1u); else { c.pc = 0x00105CA0u; return; } if (c.pc != 0x0010E900u) [[unlikely]] return; }
L_0010E900:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[16], c.r[2].w[0] + 26880u);
    set32(c.r[4], c.r[4].w[0] + 29000u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 16u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E934u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010E934u) [[unlikely]] return; }
L_0010E934:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_0010E950; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E948u); set32(c.r[4], ld32((c.r[2].w[0] + 22316u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010E948u) [[unlikely]] return; }
L_0010E948:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010E994; } }
L_0010E950:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[17].d[0];
    ldl(c.r[3], (c.r[2].w[0] + 7u));
    ldr(c.r[3], (c.r[2].w[0]));
    sdl(c.r[3], (c.r[18].w[0] + 7u));
    sdr(c.r[3], (c.r[18].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0] + 22288u)));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0010E97C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E97Cu); set32(c.r[4], c.r[4].w[0] + 4080u);  if (depth < kMaxDepth) unit_0001(c, 235u, depth + 1u); else { c.pc = 0x00105CA0u; return; } if (c.pc != 0x0010E97Cu) [[unlikely]] return; }
L_0010E97C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[3].d[0] = c.r[16].d[0] | c.r[17].d[0];
    set32(c.r[4], ld32((c.r[2].w[0] + 22316u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E990u); set32(c.r[16], ld32((c.r[3].w[0])));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010E990u) [[unlikely]] return; }
L_0010E990:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0010E994:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0010E9B0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 128u), c.r[21].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 29060u)));
    st64((c.r[29].w[0] + 144u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[17].d[0]);
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] >= 0; st64((c.r[29].w[0] + 48u), c.r[16].d[0]);  if (t) { goto L_0010E9FC; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010E9F8u); st32((c.r[29].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 444u, depth + 1u); else { c.pc = 0x00103BA0u; return; } if (c.pc != 0x0010E9F8u) [[unlikely]] return; }
L_0010E9F8:
    st32((c.r[21].w[0] + 29060u), c.r[2].w[0]);
    c.budget -= 1;
L_0010E9FC:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EA0Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 330u, depth + 1u); else { c.pc = 0x0010F3B0u; return; } if (c.pc != 0x0010EA0Cu) [[unlikely]] return; }
L_0010EA0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EA14u); set32(c.r[4], ld32((c.r[21].w[0] + 29060u)));  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x0010EA14u) [[unlikely]] return; }
L_0010EA14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EA1Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 282u, depth + 1u); else { c.pc = 0x00106448u; return; } if (c.pc != 0x0010EA1Cu) [[unlikely]] return; }
L_0010EA1C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[20].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0010EA54; } }
    c.budget -= 1;
L_0010EA30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.budget -= 2;
L_0010EA38:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010EA38u | kUnwind; return; } goto L_0010EA38; } }
L_0010EA54:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], c.r[16].w[0] + 19328u);
    c.r[5].d[0] = c.r[5].d[0] | 1024ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EA68u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 330u, depth + 1u); else { c.pc = 0x00106AB8u; return; } if (c.pc != 0x0010EA68u) [[unlikely]] return; }
L_0010EA68:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[18], c.r[16].w[0] + 19328u);  if (t) { goto L_0010EA9C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EA7Cu); set32(c.r[4], c.r[4].w[0] + 4112u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x0010EA7Cu) [[unlikely]] return; }
L_0010EA7C:
    c.budget -= 1;
L_0010EA80:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010EA80u | kUnwind; return; } goto L_0010EA80; } }
L_0010EA9C:
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[18].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010EA30u | kUnwind; return; } goto L_0010EA30; } }
    set32(c.r[17], c.r[20].w[0] + 24896u);
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[22].w[0] + 19456u);
    st32((c.r[29].w[0]), 0u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 254u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 48u);
    set32(c.r[10], 0u + 12u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EAD4u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010EAD4u) [[unlikely]] return; }
L_0010EAD4:
    set32(c.r[4], ld32((c.r[21].w[0] + 29060u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EAE0u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010EAE0u) [[unlikely]] return; }
L_0010EAE0:
    c.budget -= 2;
    if (c.r[16].sd[0] >= 0) { set32(c.r[2], ld32((c.r[17].w[0] + 4u)));  goto L_0010EAF4; }
    st32((c.r[19].w[0] + 36u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[16].w[0] - 100u);  if (t) { goto L_0010EB3C; } }
L_0010EAF4:
    c.r[2].d[0] = c.r[2].sd[0] < 522ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0010EB14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EB08u); set32(c.r[4], c.r[4].w[0] + 4136u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x0010EB08u) [[unlikely]] return; }
L_0010EB08:
    st32((c.r[19].w[0] + 36u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 120u);  if (t) { goto L_0010EB3C; } }
L_0010EB14:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].sd[0] < 526ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0010EB38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EB2Cu); set32(c.r[4], c.r[4].w[0] + 4176u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x0010EB2Cu) [[unlikely]] return; }
L_0010EB2C:
    st32((c.r[18].w[0] + 36u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 121u);  if (t) { goto L_0010EB3C; } }
L_0010EB38:
    set32(c.r[2], ld32((c.r[20].w[0] + 24896u)));
    c.budget -= 1;
L_0010EB3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0010EB68:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[6], c.r[6].w[0] + 24896u);
    set32(c.r[2], c.r[2].w[0] + 29056u);
    st32((c.r[4].w[0]), c.r[6].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 29060u)));
    set32(c.r[2], c.r[2].w[0] + 19328u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0] + 60u), c.r[3].w[0]);  c.pc = t; return; }
L_0010EB98:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EBB8u); set32(c.r[4], ld32((c.r[17].w[0] + 29060u)));  if (depth < kMaxDepth) unit_0000(c, 454u, depth + 1u); else { c.pc = 0x00103BF0u; return; } if (c.pc != 0x0010EBB8u) [[unlikely]] return; }
L_0010EBB8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0010EBC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 200u);  if (t) { goto L_0010EC38; } }
L_0010EBC8:
    set32(c.r[4], c.r[2].w[0] + 19328u);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0010EBE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EBE0u); set32(c.r[4], ld32((c.r[17].w[0] + 29060u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010EBE0u) [[unlikely]] return; }
L_0010EBE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_0010EC38; } }
L_0010EBE8:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[7], c.r[7].w[0] + 19456u);
    set32(c.r[9], c.r[9].w[0] + 24896u);
    st32((c.r[7].w[0] + 20u), c.r[16].w[0]);
    set32(c.r[5], 0u + 20u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 48u);
    set32(c.r[10], 0u + 4u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EC14u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010EC14u) [[unlikely]] return; }
L_0010EC14:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_0010EC2C; } }
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 29056u), c.r[2].w[0]);  if (t) { goto L_0010EC34; } }
L_0010EC2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EC34u); set32(c.r[4], ld32((c.r[17].w[0] + 29060u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010EC34u) [[unlikely]] return; }
L_0010EC34:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0010EC38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0010EC50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 29060u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EC74u); st64((c.r[29].w[0] + 48u), c.r[18].d[0]);  if (depth < kMaxDepth) unit_0000(c, 454u, depth + 1u); else { c.pc = 0x00103BF0u; return; } if (c.pc != 0x0010EC74u) [[unlikely]] return; }
L_0010EC74:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0010EC84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 200u);  if (t) { goto L_0010ECF8; } }
L_0010EC84:
    set32(c.r[4], c.r[2].w[0] + 19328u);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0010ECA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EC9Cu); set32(c.r[4], ld32((c.r[17].w[0] + 29060u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010EC9Cu) [[unlikely]] return; }
L_0010EC9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_0010ECF8; } }
L_0010ECA4:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[7], c.r[7].w[0] + 19456u);
    set32(c.r[5], 0u + 21u);
    st32((c.r[7].w[0] + 4u), c.r[16].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), 0u);
    set32(c.r[8], 0u + 48u);
    set32(c.r[9], c.r[18].w[0] + 24896u);
    set32(c.r[10], 0u + 4u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010ECD0u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010ECD0u) [[unlikely]] return; }
L_0010ECD0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0010ECEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010ECE4u); set32(c.r[4], ld32((c.r[17].w[0] + 29060u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010ECE4u) [[unlikely]] return; }
L_0010ECE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0010ECF8; } }
L_0010ECEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010ECF4u); set32(c.r[4], ld32((c.r[17].w[0] + 29060u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010ECF4u) [[unlikely]] return; }
L_0010ECF4:
    set32(c.r[2], ld32((c.r[18].w[0] + 24896u)));
    c.budget -= 1;
L_0010ECF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0010ED10:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    c.r[18].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[18].w[0] + 29060u)));
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010ED50u); st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0000(c, 454u, depth + 1u); else { c.pc = 0x00103BF0u; return; } if (c.pc != 0x0010ED50u) [[unlikely]] return; }
L_0010ED50:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0010ED60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 200u);  if (t) { goto L_0010EE1C; } }
L_0010ED60:
    set32(c.r[20], c.r[2].w[0] + 19328u);
    set32(c.r[3], ld32((c.r[20].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0010ED80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010ED78u); set32(c.r[4], ld32((c.r[18].w[0] + 29060u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010ED78u) [[unlikely]] return; }
L_0010ED78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_0010EE1C; } }
L_0010ED80:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0010ED94; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0010EDA4; } }
L_0010ED94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010ED9Cu); set32(c.r[4], ld32((c.r[18].w[0] + 29060u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010ED9Cu) [[unlikely]] return; }
L_0010ED9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 210u);  if (t) { goto L_0010EE1C; } }
L_0010EDA4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 19524u);
    set32(c.r[6], 0u + 1023u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EDB8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x0010EDB8u) [[unlikely]] return; }
L_0010EDB8:
    set32(c.r[3], c.r[16].w[0] - 20u);
    st32((c.r[16].w[0] - 20u), c.r[21].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[19].w[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[3].w[0] + 4u), c.r[22].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st8((c.r[3].w[0] + 1043u), static_cast<std::uint8_t>(0u));
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] + 24896u);
    set32(c.r[5], 0u + 2u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 1044u);
    set32(c.r[10], 0u + 4u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EDF8u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010EDF8u) [[unlikely]] return; }
L_0010EDF8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_0010EE10; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 29056u), c.r[2].w[0]);  if (t) { goto L_0010EE18; } }
L_0010EE10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EE18u); set32(c.r[4], ld32((c.r[18].w[0] + 29060u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010EE18u) [[unlikely]] return; }
L_0010EE18:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0010EE1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0010EE48:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EE58u); set32(c.r[7], 0u + 64u);  if (depth < kMaxDepth) unit_0003(c, 288u, depth + 1u); else { c.pc = 0x0010ED10u; return; } if (c.pc != 0x0010EE58u) [[unlikely]] return; }
L_0010EE58:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0010EE70; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[2], 0u + 11u);
    st32((c.r[3].w[0] + 29056u), c.r[2].w[0]);
    c.budget -= 3;
L_0010EE70:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0010EE80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EEA0u); set32(c.r[4], ld32((c.r[17].w[0] + 29060u)));  if (depth < kMaxDepth) unit_0000(c, 454u, depth + 1u); else { c.pc = 0x00103BF0u; return; } if (c.pc != 0x0010EEA0u) [[unlikely]] return; }
L_0010EEA0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0010EEB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 200u);  if (t) { goto L_0010EF20; } }
L_0010EEB0:
    set32(c.r[4], c.r[2].w[0] + 19328u);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0010EED0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EEC8u); set32(c.r[4], ld32((c.r[17].w[0] + 29060u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010EEC8u) [[unlikely]] return; }
L_0010EEC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_0010EF20; } }
L_0010EED0:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[7].w[0] + 19456u), c.r[16].w[0]);
    set32(c.r[9], c.r[9].w[0] + 24896u);
    set32(c.r[7], c.r[7].w[0] + 19456u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 48u);
    set32(c.r[10], 0u + 4u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EEFCu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010EEFCu) [[unlikely]] return; }
L_0010EEFC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_0010EF14; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 29056u), c.r[2].w[0]);  if (t) { goto L_0010EF1C; } }
L_0010EF14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EF1Cu); set32(c.r[4], ld32((c.r[17].w[0] + 29060u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010EF1Cu) [[unlikely]] return; }
L_0010EF1C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0010EF20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0010EF38:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[19].w[0] + 29060u)));
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EF68u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 454u, depth + 1u); else { c.pc = 0x00103BF0u; return; } if (c.pc != 0x0010EF68u) [[unlikely]] return; }
L_0010EF68:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0010EF78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 200u);  if (t) { goto L_0010EFF0; } }
L_0010EF78:
    set32(c.r[4], c.r[2].w[0] + 19328u);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0010EF98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EF90u); set32(c.r[4], ld32((c.r[19].w[0] + 29060u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010EF90u) [[unlikely]] return; }
L_0010EF90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_0010EFF0; } }
L_0010EF98:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[7], c.r[2].w[0] + 19456u);
    st32((c.r[2].w[0] + 19456u), c.r[18].w[0]);
    st32((c.r[7].w[0] + 16u), c.r[16].w[0]);
    set32(c.r[9], c.r[9].w[0] + 24896u);
    st32((c.r[7].w[0] + 20u), c.r[17].w[0]);
    set32(c.r[5], 0u + 4u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 48u);
    set32(c.r[10], 0u + 4u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EFCCu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010EFCCu) [[unlikely]] return; }
L_0010EFCC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_0010EFE4; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 29056u), c.r[2].w[0]);  if (t) { goto L_0010EFEC; } }
L_0010EFE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010EFECu); set32(c.r[4], ld32((c.r[19].w[0] + 29060u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010EFECu) [[unlikely]] return; }
L_0010EFEC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0010EFF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0010F010:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 4u)));  goto L_0010F05C; }
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0010F058; } }
    set32(c.r[7], c.r[4].w[0] + 16u);
    c.budget -= 2;
L_0010F038:
    set32(c.r[2], c.r[7].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010F038u | kUnwind; return; } goto L_0010F038; } }
L_0010F058:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_0010F05C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010F098; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0010F098; } }
    set32(c.r[7], c.r[4].w[0] + 80u);
    c.budget -= 2;
L_0010F078:
    set32(c.r[2], c.r[7].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 2;
L_0010F080:
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010F078u | kUnwind; return; } goto L_0010F078; } }
L_0010F098:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010F0A0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[21].w[0] + 29060u)));
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F0DCu); st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0000(c, 454u, depth + 1u); else { c.pc = 0x00103BF0u; return; } if (c.pc != 0x0010F0DCu) [[unlikely]] return; }
L_0010F0DC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0010F0EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 200u);  if (t) { goto L_0010F194; } }
L_0010F0EC:
    set32(c.r[22], c.r[2].w[0] + 19328u);
    set32(c.r[3], ld32((c.r[22].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0010F10C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F104u); set32(c.r[4], ld32((c.r[21].w[0] + 29060u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010F104u) [[unlikely]] return; }
L_0010F104:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_0010F194; } }
L_0010F10C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] + 20608u);
    set32(c.r[17], c.r[2].w[0] + 19456u);
    st32((c.r[2].w[0] + 19456u), c.r[20].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[17].w[0] + 28u), c.r[16].w[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[17].w[0] + 24u), c.r[18].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F134u); st32((c.r[17].w[0] + 12u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_0001(c, 279u, depth + 1u); else { c.pc = 0x00106398u; return; } if (c.pc != 0x0010F134u) [[unlikely]] return; }
L_0010F134:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F140u); set32(c.r[5], 0u + 192u);  if (depth < kMaxDepth) unit_0001(c, 279u, depth + 1u); else { c.pc = 0x00106398u; return; } if (c.pc != 0x0010F140u) [[unlikely]] return; }
L_0010F140:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00110000u);
    st32((c.r[29].w[0]), c.r[16].w[0]);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] + 24896u);
    set32(c.r[11], c.r[11].w[0] - 4080u);
    set32(c.r[5], 0u + 5u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 48u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F170u); set32(c.r[10], 0u + 4u);  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010F170u) [[unlikely]] return; }
L_0010F170:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_0010F188; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 29056u), c.r[2].w[0]);  if (t) { goto L_0010F190; } }
L_0010F188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F190u); set32(c.r[4], ld32((c.r[21].w[0] + 29060u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010F190u) [[unlikely]] return; }
L_0010F190:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0010F194:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0010F1C0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[20].w[0] + 29060u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F1F8u); st64((c.r[29].w[0] + 48u), c.r[18].d[0]);  if (depth < kMaxDepth) unit_0000(c, 454u, depth + 1u); else { c.pc = 0x00103BF0u; return; } if (c.pc != 0x0010F1F8u) [[unlikely]] return; }
L_0010F1F8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[21].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0010F208; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 200u);  if (t) { goto L_0010F318; } }
L_0010F208:
    set32(c.r[2], c.r[21].w[0] + 19328u);
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0010F228; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F220u); set32(c.r[4], ld32((c.r[20].w[0] + 29060u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010F220u) [[unlikely]] return; }
L_0010F220:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_0010F318; } }
L_0010F228:
    c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    set32(c.r[6], c.r[18].w[0] + 19456u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 19456u), c.r[19].w[0]);  if (t) { goto L_0010F248; } }
    st32((c.r[6].w[0] + 20u), c.r[16].w[0]);
    st32((c.r[6].w[0] + 24u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 12u), 0u);  if (t) { goto L_0010F274; } }
L_0010F248:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[2], c.r[17].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] | 65520ull;
    set32(c.r[4], c.r[17].w[0] - 16u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[5], c.r[16].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    st32((c.r[6].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 11;
L_0010F274:
    set32(c.r[2], c.r[18].w[0] + 19456u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0010F2C0; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[17].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[7].w[0] + 19456u);
    c.budget -= 4;
L_0010F298:
    c.r[5].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[3], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[3].w[0] + 32u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.r[2].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010F298u | kUnwind; return; } goto L_0010F298; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010F2C4; } }
L_0010F2C0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 1;
L_0010F2C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F2CCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 525u, depth + 1u); else { c.pc = 0x00103E20u; return; } if (c.pc != 0x0010F2CCu) [[unlikely]] return; }
L_0010F2CC:
    set32(c.r[9], c.r[16].w[0] + 24896u);
    set32(c.r[4], c.r[21].w[0] + 19328u);
    set32(c.r[7], c.r[18].w[0] + 19456u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 48u);
    set32(c.r[10], 0u + 4u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F2F4u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010F2F4u) [[unlikely]] return; }
L_0010F2F4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_0010F30C; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 29056u), c.r[2].w[0]);  if (t) { goto L_0010F314; } }
L_0010F30C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F314u); set32(c.r[4], ld32((c.r[20].w[0] + 29060u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010F314u) [[unlikely]] return; }
L_0010F314:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0010F318:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0010F340:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F350u); c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 101u, depth + 1u); else { c.pc = 0x00104AD8u; return; } if (c.pc != 0x0010F350u) [[unlikely]] return; }
L_0010F350:
    set_interrupts(c, true);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0010F368:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00110000u);
    c.r[17].d[0] = c.r[4].d[0] & 65535ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F388u); set32(c.r[16], c.r[16].w[0] - 3264u);  if (depth < kMaxDepth) unit_0000(c, 410u, depth + 1u); else { c.pc = 0x00103A90u; return; } if (c.pc != 0x0010F388u) [[unlikely]] return; }
L_0010F388:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F398u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 364u, depth + 1u); else { c.pc = 0x00103920u; return; } if (c.pc != 0x0010F398u) [[unlikely]] return; }
L_0010F398:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00103AC0u | kUnwind; return; } [[clang::musttail]] return unit_0000(c, 416u, depth); }
L_0010F3B0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 29056u)));
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_0010F3F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0010F46C; } }
L_0010F3F0:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F3FCu); set32(c.r[4], c.r[17].w[0] + 19328u);  if (depth < kMaxDepth) unit_0001(c, 355u, depth + 1u); else { c.pc = 0x00106E78u; return; } if (c.pc != 0x0010F3FCu) [[unlikely]] return; }
L_0010F3FC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0010F430; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0010F430; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010F420; } }
    c.budget -= 1;
L_0010F418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F420u); set32(c.r[4], 0u + 60u);  if (depth < kMaxDepth) unit_0003(c, 327u, depth + 1u); else { c.pc = 0x0010F368u; return; } if (c.pc != 0x0010F420u) [[unlikely]] return; }
L_0010F420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F428u); set32(c.r[4], c.r[17].w[0] + 19328u);  if (depth < kMaxDepth) unit_0001(c, 355u, depth + 1u); else { c.pc = 0x00106E78u; return; } if (c.pc != 0x0010F428u) [[unlikely]] return; }
L_0010F428:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010F418u | kUnwind; return; } goto L_0010F418; } }
L_0010F430:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[16].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_0010F440; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 29056u)));
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0010F440:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0010F46C; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[19].w[0] + 29056u), 0u);  if (t) { goto L_0010F45C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 24896u)));
    st32((c.r[21].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_0010F45C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F468u); set32(c.r[4], ld32((c.r[2].w[0] + 29060u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010F468u) [[unlikely]] return; }
L_0010F468:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0010F46C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0010F490:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 19368u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];  if (t) { goto L_0010F4AC; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0010F4AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 19372u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0010F4C8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
L_0010F4C8:
    set32(c.r[3], ld32((c.r[2].w[0] + 19376u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0010F4DC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 144u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0010F4DC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010F4E8:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[22].w[0] + 29060u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[23].d[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F530u); st64((c.r[29].w[0] + 32u), c.r[17].d[0]);  if (depth < kMaxDepth) unit_0000(c, 454u, depth + 1u); else { c.pc = 0x00103BF0u; return; } if (c.pc != 0x0010F530u) [[unlikely]] return; }
L_0010F530:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[23].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0010F540; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 200u);  if (t) { goto L_0010F640; } }
L_0010F540:
    set32(c.r[2], c.r[23].w[0] + 19328u);
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0010F560; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F558u); set32(c.r[4], ld32((c.r[22].w[0] + 29060u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010F558u) [[unlikely]] return; }
L_0010F558:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_0010F640; } }
L_0010F560:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[17].w[0] + 19456u);
    set32(c.r[2], c.r[4].w[0] + 20608u);
    st32((c.r[3].w[0] + 4u), c.r[18].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 7;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[3].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_0010F588; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0010F58C; } }
L_0010F588:
    st32((c.r[3].w[0] + 20u), 0u);
    c.budget -= 1;
L_0010F58C:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] + 19456u);  if (t) { goto L_0010F5A0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_0010F5A8; } }
L_0010F5A0:
    set32(c.r[2], c.r[17].w[0] + 19456u);
    st32((c.r[2].w[0] + 16u), 0u);
    c.budget -= 2;
L_0010F5A8:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] + 19456u);  if (t) { goto L_0010F5BC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0010F5C4; } }
L_0010F5BC:
    set32(c.r[2], c.r[17].w[0] + 19456u);
    st32((c.r[2].w[0] + 12u), 0u);
    c.budget -= 2;
L_0010F5C4:
    set32(c.r[16], c.r[4].w[0] + 20608u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[2].w[0] + 19368u), c.r[19].w[0]);
    st32((c.r[3].w[0] + 19372u), c.r[20].w[0]);
    set32(c.r[5], 0u + 192u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F5ECu); st32((c.r[6].w[0] + 19376u), c.r[21].w[0]);  if (depth < kMaxDepth) unit_0001(c, 279u, depth + 1u); else { c.pc = 0x00106398u; return; } if (c.pc != 0x0010F5ECu) [[unlikely]] return; }
L_0010F5EC:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00110000u);
    st32((c.r[29].w[0]), c.r[16].w[0]);
    set32(c.r[4], c.r[23].w[0] + 19328u);
    set32(c.r[7], c.r[17].w[0] + 19456u);
    set32(c.r[9], c.r[9].w[0] + 24896u);
    set32(c.r[11], c.r[11].w[0] - 2928u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 48u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F61Cu); set32(c.r[10], 0u + 4u);  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010F61Cu) [[unlikely]] return; }
L_0010F61C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_0010F634; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 29056u), c.r[2].w[0]);  if (t) { goto L_0010F63C; } }
L_0010F634:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F63Cu); set32(c.r[4], ld32((c.r[22].w[0] + 29060u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010F63Cu) [[unlikely]] return; }
L_0010F63C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0010F640:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0010F670:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    c.r[21].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[21].w[0] + 29060u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F6BCu); st64((c.r[29].w[0] + 128u), c.r[23].d[0]);  if (depth < kMaxDepth) unit_0000(c, 454u, depth + 1u); else { c.pc = 0x00103BF0u; return; } if (c.pc != 0x0010F6BCu) [[unlikely]] return; }
L_0010F6BC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0010F6CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 200u);  if (t) { goto L_0010F79C; } }
L_0010F6CC:
    set32(c.r[23], c.r[2].w[0] + 19328u);
    set32(c.r[3], ld32((c.r[23].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0010F6EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F6E4u); set32(c.r[4], ld32((c.r[21].w[0] + 29060u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010F6E4u) [[unlikely]] return; }
L_0010F6E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_0010F79C; } }
L_0010F6EC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0010F700; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0010F710; } }
L_0010F700:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F708u); set32(c.r[4], ld32((c.r[21].w[0] + 29060u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010F708u) [[unlikely]] return; }
L_0010F708:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 210u);  if (t) { goto L_0010F79C; } }
L_0010F710:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[2].w[0] + 19504u);
    st32((c.r[2].w[0] + 19504u), c.r[22].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[19].w[0]);
    set32(c.r[4], c.r[16].w[0] + 20u);
    st32((c.r[16].w[0] + 8u), c.r[20].w[0]);
    set32(c.r[6], 0u + 1023u);
    st32((c.r[16].w[0] + 12u), c.r[17].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F738u); st32((c.r[16].w[0] + 16u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x0010F738u) [[unlikely]] return; }
L_0010F738:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0; st8((c.r[16].w[0] + 1043u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0010F74C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F74Cu); set32(c.r[5], c.r[17].w[0] << 6);  if (depth < kMaxDepth) unit_0001(c, 279u, depth + 1u); else { c.pc = 0x00106398u; return; } if (c.pc != 0x0010F74Cu) [[unlikely]] return; }
L_0010F74C:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] + 24896u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 1044u);
    set32(c.r[10], 0u + 4u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F778u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010F778u) [[unlikely]] return; }
L_0010F778:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_0010F790; } }
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 29056u), c.r[2].w[0]);  if (t) { goto L_0010F798; } }
L_0010F790:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F798u); set32(c.r[4], ld32((c.r[21].w[0] + 29060u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010F798u) [[unlikely]] return; }
L_0010F798:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0010F79C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0010F7C8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_0010F834; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[3], c.r[18].w[0] + 20800u);
    c.r[16].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F7FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0010F7FCu) [[unlikely]] return; }
L_0010F7FC:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1024ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], 0u + 1023u);  goto L_0010F814; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F810u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0010F810u) [[unlikely]] return; }
L_0010F810:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0010F814:
    set32(c.r[2], c.r[18].w[0] + 20800u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[5].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F82Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x0010F82Cu) [[unlikely]] return; }
L_0010F82C:
    set32(c.r[3], c.r[17].w[0] + c.r[16].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0010F834:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
L_0010F840:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0010F850:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    c.r[19].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[19].w[0] + 29060u)));
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F894u); st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0000(c, 454u, depth + 1u); else { c.pc = 0x00103BF0u; return; } if (c.pc != 0x0010F894u) [[unlikely]] return; }
L_0010F894:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0010F8A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 200u);  if (t) { goto L_0010F974; } }
L_0010F8A4:
    set32(c.r[23], c.r[2].w[0] + 19328u);
    set32(c.r[3], ld32((c.r[23].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0010F8C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F8BCu); set32(c.r[4], ld32((c.r[19].w[0] + 29060u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010F8BCu) [[unlikely]] return; }
L_0010F8BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_0010F974; } }
L_0010F8C4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0010F8D8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0010F8E8; } }
L_0010F8D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F8E0u); set32(c.r[4], ld32((c.r[19].w[0] + 29060u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010F8E0u) [[unlikely]] return; }
L_0010F8E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 210u);  if (t) { goto L_0010F974; } }
L_0010F8E8:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[17], c.r[2].w[0] + 19504u);
    set32(c.r[16], c.r[16].w[0] + 20800u);
    st32((c.r[2].w[0] + 19504u), c.r[21].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[17].w[0] + 16u), c.r[16].w[0]);
    set32(c.r[4], c.r[17].w[0] + 20u);
    st32((c.r[17].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F910u); set32(c.r[6], 0u + 1023u);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x0010F910u) [[unlikely]] return; }
L_0010F910:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[17].w[0] + 1043u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F920u); set32(c.r[5], 0u + 1024u);  if (depth < kMaxDepth) unit_0001(c, 279u, depth + 1u); else { c.pc = 0x00106398u; return; } if (c.pc != 0x0010F920u) [[unlikely]] return; }
L_0010F920:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00110000u);
    st32((c.r[29].w[0]), c.r[22].w[0]);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] + 24896u);
    set32(c.r[11], c.r[11].w[0] - 2104u);
    set32(c.r[5], 0u + 12u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 1044u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F950u); set32(c.r[10], 0u + 4u);  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010F950u) [[unlikely]] return; }
L_0010F950:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_0010F968; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 29056u), c.r[2].w[0]);  if (t) { goto L_0010F970; } }
L_0010F968:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F970u); set32(c.r[4], ld32((c.r[19].w[0] + 29060u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010F970u) [[unlikely]] return; }
L_0010F970:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0010F974:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0010F9A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 29060u)));
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F9C8u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 454u, depth + 1u); else { c.pc = 0x00103BF0u; return; } if (c.pc != 0x0010F9C8u) [[unlikely]] return; }
L_0010F9C8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0010F9D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 200u);  if (t) { goto L_0010FA50; } }
L_0010F9D8:
    set32(c.r[4], c.r[2].w[0] + 19328u);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0010F9F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010F9F0u); set32(c.r[4], ld32((c.r[17].w[0] + 29060u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010F9F0u) [[unlikely]] return; }
L_0010F9F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_0010FA50; } }
L_0010F9F8:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] + 19456u);
    set32(c.r[9], c.r[9].w[0] + 24896u);
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 4u), c.r[18].w[0]);
    set32(c.r[5], 0u + 16u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 48u);
    set32(c.r[10], 0u + 4u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FA2Cu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010FA2Cu) [[unlikely]] return; }
L_0010FA2C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_0010FA44; } }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 29056u), c.r[2].w[0]);  if (t) { goto L_0010FA4C; } }
L_0010FA44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FA4Cu); set32(c.r[4], ld32((c.r[17].w[0] + 29060u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010FA4Cu) [[unlikely]] return; }
L_0010FA4C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0010FA50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0010FA68:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    c.r[18].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[18].w[0] + 29060u)));
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FAA0u); st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0000(c, 454u, depth + 1u); else { c.pc = 0x00103BF0u; return; } if (c.pc != 0x0010FAA0u) [[unlikely]] return; }
L_0010FAA0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0010FAB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 200u);  if (t) { goto L_0010FB6C; } }
L_0010FAB0:
    set32(c.r[19], c.r[2].w[0] + 19328u);
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0010FAD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FAC8u); set32(c.r[4], ld32((c.r[18].w[0] + 29060u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010FAC8u) [[unlikely]] return; }
L_0010FAC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_0010FB6C; } }
L_0010FAD0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0010FAE4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0010FAF4; } }
L_0010FAE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FAECu); set32(c.r[4], ld32((c.r[18].w[0] + 29060u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010FAECu) [[unlikely]] return; }
L_0010FAEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 210u);  if (t) { goto L_0010FB6C; } }
L_0010FAF4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 19524u);
    set32(c.r[6], 0u + 1023u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FB08u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x0010FB08u) [[unlikely]] return; }
L_0010FB08:
    set32(c.r[3], c.r[16].w[0] - 20u);
    st32((c.r[16].w[0] - 20u), c.r[21].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[20].w[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st8((c.r[3].w[0] + 1043u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[3].w[0] + 8u), 0u);
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] + 24896u);
    set32(c.r[5], 0u + 15u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 1044u);
    set32(c.r[10], 0u + 4u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FB48u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010FB48u) [[unlikely]] return; }
L_0010FB48:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_0010FB60; } }
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 29056u), c.r[2].w[0]);  if (t) { goto L_0010FB68; } }
L_0010FB60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FB68u); set32(c.r[4], ld32((c.r[18].w[0] + 29060u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010FB68u) [[unlikely]] return; }
L_0010FB68:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0010FB6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0010FB90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FBB0u); set32(c.r[4], ld32((c.r[17].w[0] + 29060u)));  if (depth < kMaxDepth) unit_0000(c, 454u, depth + 1u); else { c.pc = 0x00103BF0u; return; } if (c.pc != 0x0010FBB0u) [[unlikely]] return; }
L_0010FBB0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0010FBC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 200u);  if (t) { goto L_0010FC30; } }
L_0010FBC0:
    set32(c.r[4], c.r[2].w[0] + 19328u);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0010FBE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FBD8u); set32(c.r[4], ld32((c.r[17].w[0] + 29060u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010FBD8u) [[unlikely]] return; }
L_0010FBD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_0010FC30; } }
L_0010FBE0:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[7].w[0] + 19456u), c.r[16].w[0]);
    set32(c.r[9], c.r[9].w[0] + 24896u);
    set32(c.r[7], c.r[7].w[0] + 19456u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 48u);
    set32(c.r[10], 0u + 4u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FC0Cu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010FC0Cu) [[unlikely]] return; }
L_0010FC0C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_0010FC24; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 29056u), c.r[2].w[0]);  if (t) { goto L_0010FC2C; } }
L_0010FC24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FC2Cu); set32(c.r[4], ld32((c.r[17].w[0] + 29060u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010FC2Cu) [[unlikely]] return; }
L_0010FC2C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0010FC30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0010FC48:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    c.r[20].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[20].w[0] + 29060u)));
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[23].d[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FC90u); st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0000(c, 454u, depth + 1u); else { c.pc = 0x00103BF0u; return; } if (c.pc != 0x0010FC90u) [[unlikely]] return; }
L_0010FC90:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0010FCA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 200u);  if (t) { goto L_0010FDF4; } }
L_0010FCA0:
    set32(c.r[23], c.r[2].w[0] + 19328u);
    set32(c.r[3], ld32((c.r[23].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0010FCC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FCB8u); set32(c.r[4], ld32((c.r[20].w[0] + 29060u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010FCB8u) [[unlikely]] return; }
L_0010FCB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_0010FDF4; } }
L_0010FCC0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0010FCD4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0010FCE4; } }
L_0010FCD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FCDCu); set32(c.r[4], ld32((c.r[20].w[0] + 29060u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010FCDCu) [[unlikely]] return; }
L_0010FCDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 210u);  if (t) { goto L_0010FDF4; } }
L_0010FCE4:
    c.r[17].d[0] = c.r[17].d[0] & 7ull;
    set32(c.r[16], c.r[2].w[0] + 19504u);
    st32((c.r[2].w[0] + 19504u), c.r[21].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[19].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[16].w[0] + 8u), c.r[17].w[0]);
    set32(c.r[3], c.r[2].w[0] + 19392u);
    set32(c.r[4], c.r[16].w[0] + 20u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[9], c.r[2].w[0] + 19392u);
    ldl(c.r[6], (c.r[22].w[0] + 7u));
    ldr(c.r[6], (c.r[22].w[0]));
    ldl(c.r[7], (c.r[22].w[0] + 15u));
    ldr(c.r[7], (c.r[22].w[0] + 8u));
    ldl(c.r[8], (c.r[22].w[0] + 23u));
    ldr(c.r[8], (c.r[22].w[0] + 16u));
    sdl(c.r[6], (c.r[9].w[0] + 7u));
    sdr(c.r[6], (c.r[9].w[0]));
    sdl(c.r[7], (c.r[9].w[0] + 15u));
    sdr(c.r[7], (c.r[9].w[0] + 8u));
    sdl(c.r[8], (c.r[9].w[0] + 23u));
    sdr(c.r[8], (c.r[9].w[0] + 16u));
    ldl(c.r[6], (c.r[22].w[0] + 31u));
    ldr(c.r[6], (c.r[22].w[0] + 24u));
    ldl(c.r[7], (c.r[22].w[0] + 39u));
    ldr(c.r[7], (c.r[22].w[0] + 32u));
    ldl(c.r[8], (c.r[22].w[0] + 47u));
    ldr(c.r[8], (c.r[22].w[0] + 40u));
    sdl(c.r[6], (c.r[9].w[0] + 31u));
    sdr(c.r[6], (c.r[9].w[0] + 24u));
    sdl(c.r[7], (c.r[9].w[0] + 39u));
    sdr(c.r[7], (c.r[9].w[0] + 32u));
    sdl(c.r[8], (c.r[9].w[0] + 47u));
    sdr(c.r[8], (c.r[9].w[0] + 40u));
    ldl(c.r[6], (c.r[22].w[0] + 55u));
    ldr(c.r[6], (c.r[22].w[0] + 48u));
    ldl(c.r[7], (c.r[22].w[0] + 63u));
    ldr(c.r[7], (c.r[22].w[0] + 56u));
    sdl(c.r[6], (c.r[9].w[0] + 55u));
    sdr(c.r[6], (c.r[9].w[0] + 48u));
    sdl(c.r[7], (c.r[9].w[0] + 63u));
    sdr(c.r[7], (c.r[9].w[0] + 56u));
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 45;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FD98u); set32(c.r[6], 0u + 1023u);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x0010FD98u) [[unlikely]] return; }
L_0010FD98:
    st8((c.r[16].w[0] + 1043u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FDA4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 525u, depth + 1u); else { c.pc = 0x00103E20u; return; } if (c.pc != 0x0010FDA4u) [[unlikely]] return; }
L_0010FDA4:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] + 24896u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 14u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 1044u);
    set32(c.r[10], 0u + 4u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FDD0u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010FDD0u) [[unlikely]] return; }
L_0010FDD0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_0010FDE8; } }
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 29056u), c.r[2].w[0]);  if (t) { goto L_0010FDF0; } }
L_0010FDE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FDF0u); set32(c.r[4], ld32((c.r[20].w[0] + 29060u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010FDF0u) [[unlikely]] return; }
L_0010FDF0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0010FDF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0010FE20:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[21].w[0] + 29060u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FE60u); st64((c.r[29].w[0] + 32u), c.r[17].d[0]);  if (depth < kMaxDepth) unit_0000(c, 454u, depth + 1u); else { c.pc = 0x00103BF0u; return; } if (c.pc != 0x0010FE60u) [[unlikely]] return; }
L_0010FE60:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0010FE70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 200u);  if (t) { goto L_0010FF60; } }
L_0010FE70:
    set32(c.r[22], c.r[2].w[0] + 19328u);
    set32(c.r[3], ld32((c.r[22].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0010FE90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FE88u); set32(c.r[4], ld32((c.r[21].w[0] + 29060u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010FE88u) [[unlikely]] return; }
L_0010FE88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_0010FF60; } }
L_0010FE90:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0010FEAC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010FEAC; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0010FEBC; } }
L_0010FEAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FEB4u); set32(c.r[4], ld32((c.r[21].w[0] + 29060u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010FEB4u) [[unlikely]] return; }
L_0010FEB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 210u);  if (t) { goto L_0010FF60; } }
L_0010FEBC:
    set32(c.r[3], 0u + 16u);
    set32(c.r[17], c.r[2].w[0] + 19504u);
    st32((c.r[2].w[0] + 19504u), c.r[20].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 4u), c.r[19].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FEE0u); set32(c.r[6], 0u + 1023u);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x0010FEE0u) [[unlikely]] return; }
L_0010FEE0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 19424u);
    st8((c.r[17].w[0] + 1043u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FEFCu); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x0010FEFCu) [[unlikely]] return; }
L_0010FEFC:
    set32(c.r[16], c.r[16].w[0] - 32u);
    c.budget -= 1;
L_0010FF00:
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 16u), c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FF10u); st8((c.r[16].w[0] + 63u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0000(c, 525u, depth + 1u); else { c.pc = 0x00103E20u; return; } if (c.pc != 0x0010FF10u) [[unlikely]] return; }
L_0010FF10:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] + 24896u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 14u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 1044u);
    set32(c.r[10], 0u + 4u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FF3Cu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010FF3Cu) [[unlikely]] return; }
L_0010FF3C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0010FF40:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_0010FF54; } }
    set32(c.r[2], 0u + 19u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 29056u), c.r[2].w[0]);  if (t) { goto L_0010FF5C; } }
L_0010FF54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FF5Cu); set32(c.r[4], ld32((c.r[21].w[0] + 29060u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010FF5Cu) [[unlikely]] return; }
L_0010FF5C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0010FF60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0010FF88:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 29060u)));
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FFB0u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 454u, depth + 1u); else { c.pc = 0x00103BF0u; return; } if (c.pc != 0x0010FFB0u) [[unlikely]] return; }
L_0010FFB0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0010FFC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 200u);  if (t) { [[clang::musttail]] return unit_0004(c, 5u, depth); } }
L_0010FFC0:
    set32(c.r[4], c.r[2].w[0] + 19328u);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0010FFE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010FFD8u); set32(c.r[4], ld32((c.r[17].w[0] + 29060u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010FFD8u) [[unlikely]] return; }
L_0010FFD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { [[clang::musttail]] return unit_0004(c, 5u, depth); } }
L_0010FFE0:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] + 19456u);
    set32(c.r[9], c.r[9].w[0] + 24896u);
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 4u), c.r[18].w[0]);
    set32(c.r[5], 0u + 17u);
    st32((c.r[29].w[0]), 0u);
    c.budget -= 8;
    [[clang::musttail]] return unit_0004(c, 1u, depth);
}

}
