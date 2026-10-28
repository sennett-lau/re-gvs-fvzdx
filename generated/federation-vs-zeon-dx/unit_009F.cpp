#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_009F[4096] = {
    1, 0, 2, 0, 3, 0, 4, 0, 5, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8,
    0, 0, 0, 9, 0, 0, 0, 10, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 15,
    0, 0, 0, 0, 16, 0, 17, 0, 18, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0,
    28, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 31, 0, 32, 0, 33, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0,
    42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0,
    0, 47, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0,
    51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0,
    0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0,
    66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0,
    78, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 83, 0, 84, 0, 85, 0, 0, 86, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0,
    0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0,
    0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 0,
    0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121,
    0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 124, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 133,
    0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0,
    0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0,
    0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0,
    0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 160,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 164, 0, 0, 165, 0, 0,
    0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 168, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 172, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 176, 0, 177, 0, 0, 0, 0, 178, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0,
    0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 192, 0, 0, 193, 0, 0, 194, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0,
    197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 202,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0,
    0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0,
    208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0,
    0, 0, 216, 0, 0, 217, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0,
    0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 244, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0,
    0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 264, 0, 265, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 271, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 274, 0, 275, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 280,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    284, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 293, 0, 0, 294,
    0, 0, 295, 0, 0, 296, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0,
    0, 0, 0, 0, 0, 300, 0, 0, 301, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 307,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    325, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 328, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0,
    332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0,
    0, 335, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0,
    0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0,
    359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 363, 0, 0, 0, 0, 0, 0, 364, 0, 365, 0, 366, 0, 0, 0, 367, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_009F(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0037C000;
    case 2u: goto L_0037C008;
    case 3u: goto L_0037C010;
    case 4u: goto L_0037C018;
    case 5u: goto L_0037C020;
    case 6u: goto L_0037C030;
    case 7u: goto L_0037C040;
    case 8u: goto L_0037C07C;
    case 9u: goto L_0037C08C;
    case 10u: goto L_0037C09C;
    case 11u: goto L_0037C0A4;
    case 12u: goto L_0037C0B8;
    case 13u: goto L_0037C0DC;
    case 14u: goto L_0037C0EC;
    case 15u: goto L_0037C0FC;
    case 16u: goto L_0037C110;
    case 17u: goto L_0037C118;
    case 18u: goto L_0037C120;
    case 19u: goto L_0037C128;
    case 20u: goto L_0037C140;
    case 21u: goto L_0037C150;
    case 22u: goto L_0037C18C;
    case 23u: goto L_0037C19C;
    case 24u: goto L_0037C1B0;
    case 25u: goto L_0037C1B8;
    case 26u: goto L_0037C1CC;
    case 27u: goto L_0037C1F0;
    case 28u: goto L_0037C200;
    case 29u: goto L_0037C214;
    case 30u: goto L_0037C21C;
    case 31u: goto L_0037C230;
    case 32u: goto L_0037C238;
    case 33u: goto L_0037C240;
    case 34u: goto L_0037C250;
    case 35u: goto L_0037C260;
    case 36u: goto L_0037C290;
    case 37u: goto L_0037C2A4;
    case 38u: goto L_0037C2AC;
    case 39u: goto L_0037C2C8;
    case 40u: goto L_0037C2D8;
    case 41u: goto L_0037C2F0;
    case 42u: goto L_0037C300;
    case 43u: goto L_0037C330;
    case 44u: goto L_0037C344;
    case 45u: goto L_0037C34C;
    case 46u: goto L_0037C368;
    case 47u: goto L_0037C384;
    case 48u: goto L_0037C38C;
    case 49u: goto L_0037C3A0;
    case 50u: goto L_0037C3E0;
    case 51u: goto L_0037C400;
    case 52u: goto L_0037C410;
    case 53u: goto L_0037C43C;
    case 54u: goto L_0037C458;
    case 55u: goto L_0037C470;
    case 56u: goto L_0037C4A4;
    case 57u: goto L_0037C4D0;
    case 58u: goto L_0037C518;
    case 59u: goto L_0037C52C;
    case 60u: goto L_0037C554;
    case 61u: goto L_0037C578;
    case 62u: goto L_0037C58C;
    case 63u: goto L_0037C5A8;
    case 64u: goto L_0037C5CC;
    case 65u: goto L_0037C5E4;
    case 66u: goto L_0037C600;
    case 67u: goto L_0037C614;
    case 68u: goto L_0037C630;
    case 69u: goto L_0037C678;
    case 70u: goto L_0037C6BC;
    case 71u: goto L_0037C6D8;
    case 72u: goto L_0037C708;
    case 73u: goto L_0037C724;
    case 74u: goto L_0037C738;
    case 75u: goto L_0037C750;
    case 76u: goto L_0037C760;
    case 77u: goto L_0037C770;
    case 78u: goto L_0037C780;
    case 79u: goto L_0037C790;
    case 80u: goto L_0037C7A0;
    case 81u: goto L_0037C7B4;
    case 82u: goto L_0037C7C4;
    case 83u: goto L_0037C7D4;
    case 84u: goto L_0037C7DC;
    case 85u: goto L_0037C7E4;
    case 86u: goto L_0037C7F0;
    case 87u: goto L_0037C820;
    case 88u: goto L_0037C83C;
    case 89u: goto L_0037C850;
    case 90u: goto L_0037C860;
    case 91u: goto L_0037C890;
    case 92u: goto L_0037C8A0;
    case 93u: goto L_0037C8B0;
    case 94u: goto L_0037C8F4;
    case 95u: goto L_0037C970;
    case 96u: goto L_0037C984;
    case 97u: goto L_0037C9BC;
    case 98u: goto L_0037C9E4;
    case 99u: goto L_0037CA1C;
    case 100u: goto L_0037CA44;
    case 101u: goto L_0037CA64;
    case 102u: goto L_0037CA98;
    case 103u: goto L_0037CAD4;
    case 104u: goto L_0037CAE8;
    case 105u: goto L_0037CAF4;
    case 106u: goto L_0037CB0C;
    case 107u: goto L_0037CB54;
    case 108u: goto L_0037CB84;
    case 109u: goto L_0037CBE8;
    case 110u: goto L_0037CBF0;
    case 111u: goto L_0037CC18;
    case 112u: goto L_0037CC28;
    case 113u: goto L_0037CC3C;
    case 114u: goto L_0037CC9C;
    case 115u: goto L_0037CCB0;
    case 116u: goto L_0037CCEC;
    case 117u: goto L_0037CCF4;
    case 118u: goto L_0037CD08;
    case 119u: goto L_0037CD28;
    case 120u: goto L_0037CD30;
    case 121u: goto L_0037CD7C;
    case 122u: goto L_0037CD90;
    case 123u: goto L_0037CDCC;
    case 124u: goto L_0037CDD4;
    case 125u: goto L_0037CDE0;
    case 126u: goto L_0037CDF4;
    case 127u: goto L_0037CE20;
    case 128u: goto L_0037CE30;
    case 129u: goto L_0037CE44;
    case 130u: goto L_0037CEA4;
    case 131u: goto L_0037CEB8;
    case 132u: goto L_0037CEF4;
    case 133u: goto L_0037CEFC;
    case 134u: goto L_0037CF08;
    case 135u: goto L_0037CF34;
    case 136u: goto L_0037CF44;
    case 137u: goto L_0037CF58;
    case 138u: goto L_0037CFB8;
    case 139u: goto L_0037CFCC;
    case 140u: goto L_0037D008;
    case 141u: goto L_0037D010;
    case 142u: goto L_0037D058;
    case 143u: goto L_0037D06C;
    case 144u: goto L_0037D088;
    case 145u: goto L_0037D0DC;
    case 146u: goto L_0037D0EC;
    case 147u: goto L_0037D1F4;
    case 148u: goto L_0037D210;
    case 149u: goto L_0037D228;
    case 150u: goto L_0037D234;
    case 151u: goto L_0037D25C;
    case 152u: goto L_0037D294;
    case 153u: goto L_0037D2B4;
    case 154u: goto L_0037D2C8;
    case 155u: goto L_0037D2D4;
    case 156u: goto L_0037D2EC;
    case 157u: goto L_0037D308;
    case 158u: goto L_0037D340;
    case 159u: goto L_0037D370;
    case 160u: goto L_0037D37C;
    case 161u: goto L_0037D3BC;
    case 162u: goto L_0037D3C4;
    case 163u: goto L_0037D3DC;
    case 164u: goto L_0037D3E8;
    case 165u: goto L_0037D3F4;
    case 166u: goto L_0037D410;
    case 167u: goto L_0037D450;
    case 168u: goto L_0037D488;
    case 169u: goto L_0037D494;
    case 170u: goto L_0037D4B0;
    case 171u: goto L_0037D4C8;
    case 172u: goto L_0037D4D0;
    case 173u: goto L_0037D4D8;
    case 174u: goto L_0037D518;
    case 175u: goto L_0037D550;
    case 176u: goto L_0037D55C;
    case 177u: goto L_0037D564;
    case 178u: goto L_0037D578;
    case 179u: goto L_0037D5A4;
    case 180u: goto L_0037D5B4;
    case 181u: goto L_0037D5C8;
    case 182u: goto L_0037D5E8;
    case 183u: goto L_0037D654;
    case 184u: goto L_0037D6B8;
    case 185u: goto L_0037D6C4;
    case 186u: goto L_0037D6CC;
    case 187u: goto L_0037D6F8;
    case 188u: goto L_0037D708;
    case 189u: goto L_0037D71C;
    case 190u: goto L_0037D73C;
    case 191u: goto L_0037D7A8;
    case 192u: goto L_0037D80C;
    case 193u: goto L_0037D818;
    case 194u: goto L_0037D824;
    case 195u: goto L_0037D840;
    case 196u: goto L_0037D85C;
    case 197u: goto L_0037D880;
    case 198u: goto L_0037D920;
    case 199u: goto L_0037D934;
    case 200u: goto L_0037D940;
    case 201u: goto L_0037D960;
    case 202u: goto L_0037D97C;
    case 203u: goto L_0037D9F0;
    case 204u: goto L_0037DA10;
    case 205u: goto L_0037DA30;
    case 206u: goto L_0037DA40;
    case 207u: goto L_0037DA64;
    case 208u: goto L_0037DA80;
    case 209u: goto L_0037DA98;
    case 210u: goto L_0037DAC0;
    case 211u: goto L_0037DAE4;
    case 212u: goto L_0037DB1C;
    case 213u: goto L_0037DB50;
    case 214u: goto L_0037DB64;
    case 215u: goto L_0037DB70;
    case 216u: goto L_0037DB88;
    case 217u: goto L_0037DB94;
    case 218u: goto L_0037DBA0;
    case 219u: goto L_0037DBC0;
    case 220u: goto L_0037DBD0;
    case 221u: goto L_0037DC2C;
    case 222u: goto L_0037DC58;
    case 223u: goto L_0037DC70;
    case 224u: goto L_0037DCA0;
    case 225u: goto L_0037DCB8;
    case 226u: goto L_0037DD3C;
    case 227u: goto L_0037DD50;
    case 228u: goto L_0037DDAC;
    case 229u: goto L_0037DDC0;
    case 230u: goto L_0037DDD0;
    case 231u: goto L_0037DE00;
    case 232u: goto L_0037DE40;
    case 233u: goto L_0037DE50;
    case 234u: goto L_0037DE90;
    case 235u: goto L_0037DEB0;
    case 236u: goto L_0037DF2C;
    case 237u: goto L_0037DF40;
    case 238u: goto L_0037DF6C;
    case 239u: goto L_0037DFAC;
    case 240u: goto L_0037DFE8;
    case 241u: goto L_0037DFF8;
    case 242u: goto L_0037E010;
    case 243u: goto L_0037E130;
    case 244u: goto L_0037E188;
    case 245u: goto L_0037E190;
    case 246u: goto L_0037E1BC;
    case 247u: goto L_0037E238;
    case 248u: goto L_0037E258;
    case 249u: goto L_0037E26C;
    case 250u: goto L_0037E28C;
    case 251u: goto L_0037E2A0;
    case 252u: goto L_0037E2CC;
    case 253u: goto L_0037E2E0;
    case 254u: goto L_0037E310;
    case 255u: goto L_0037E34C;
    case 256u: goto L_0037E398;
    case 257u: goto L_0037E3D4;
    case 258u: goto L_0037E51C;
    case 259u: goto L_0037E560;
    case 260u: goto L_0037E5AC;
    case 261u: goto L_0037E5D0;
    case 262u: goto L_0037E678;
    case 263u: goto L_0037E6D0;
    case 264u: goto L_0037E6DC;
    case 265u: goto L_0037E6E4;
    case 266u: goto L_0037E72C;
    case 267u: goto L_0037E744;
    case 268u: goto L_0037E754;
    case 269u: goto L_0037E768;
    case 270u: goto L_0037E7C4;
    case 271u: goto L_0037E7CC;
    case 272u: goto L_0037E7D4;
    case 273u: goto L_0037E84C;
    case 274u: goto L_0037E858;
    case 275u: goto L_0037E860;
    case 276u: goto L_0037E8A0;
    case 277u: goto L_0037E8D8;
    case 278u: goto L_0037E924;
    case 279u: goto L_0037E974;
    case 280u: goto L_0037E97C;
    case 281u: goto L_0037E9BC;
    case 282u: goto L_0037EA0C;
    case 283u: goto L_0037EA2C;
    case 284u: goto L_0037EA80;
    case 285u: goto L_0037EA8C;
    case 286u: goto L_0037EAC0;
    case 287u: goto L_0037EB58;
    case 288u: goto L_0037EB98;
    case 289u: goto L_0037EC24;
    case 290u: goto L_0037EC2C;
    case 291u: goto L_0037EC58;
    case 292u: goto L_0037EC68;
    case 293u: goto L_0037EC70;
    case 294u: goto L_0037EC7C;
    case 295u: goto L_0037EC88;
    case 296u: goto L_0037EC94;
    case 297u: goto L_0037ECA0;
    case 298u: goto L_0037ECD4;
    case 299u: goto L_0037ECF0;
    case 300u: goto L_0037ED14;
    case 301u: goto L_0037ED20;
    case 302u: goto L_0037ED38;
    case 303u: goto L_0037ED80;
    case 304u: goto L_0037EDCC;
    case 305u: goto L_0037EDF0;
    case 306u: goto L_0037EE68;
    case 307u: goto L_0037EE7C;
    case 308u: goto L_0037EEF0;
    case 309u: goto L_0037EF90;
    case 310u: goto L_0037EFA8;
    case 311u: goto L_0037F02C;
    case 312u: goto L_0037F064;
    case 313u: goto L_0037F0A0;
    case 314u: goto L_0037F0B0;
    case 315u: goto L_0037F0D4;
    case 316u: goto L_0037F0E4;
    case 317u: goto L_0037F118;
    case 318u: goto L_0037F12C;
    case 319u: goto L_0037F150;
    case 320u: goto L_0037F180;
    case 321u: goto L_0037F1A8;
    case 322u: goto L_0037F1E4;
    case 323u: goto L_0037F230;
    case 324u: goto L_0037F248;
    case 325u: goto L_0037F300;
    case 326u: goto L_0037F314;
    case 327u: goto L_0037F340;
    case 328u: goto L_0037F38C;
    case 329u: goto L_0037F3A4;
    case 330u: goto L_0037F3CC;
    case 331u: goto L_0037F3E0;
    case 332u: goto L_0037F400;
    case 333u: goto L_0037F490;
    case 334u: goto L_0037F4E8;
    case 335u: goto L_0037F504;
    case 336u: goto L_0037F520;
    case 337u: goto L_0037F5A8;
    case 338u: goto L_0037F5D0;
    case 339u: goto L_0037F630;
    case 340u: goto L_0037F6C0;
    case 341u: goto L_0037F708;
    case 342u: goto L_0037F740;
    case 343u: goto L_0037F78C;
    case 344u: goto L_0037F7C0;
    case 345u: goto L_0037F814;
    case 346u: goto L_0037F860;
    case 347u: goto L_0037F8BC;
    case 348u: goto L_0037F8F0;
    case 349u: goto L_0037F910;
    case 350u: goto L_0037F928;
    case 351u: goto L_0037FA10;
    case 352u: goto L_0037FA58;
    case 353u: goto L_0037FA90;
    case 354u: goto L_0037FADC;
    case 355u: goto L_0037FB10;
    case 356u: goto L_0037FB20;
    case 357u: goto L_0037FB50;
    case 358u: goto L_0037FB60;
    case 359u: goto L_0037FB80;
    case 360u: goto L_0037FBB8;
    case 361u: goto L_0037FBC8;
    case 362u: goto L_0037FBE0;
    case 363u: goto L_0037FC08;
    case 364u: goto L_0037FC24;
    case 365u: goto L_0037FC2C;
    case 366u: goto L_0037FC34;
    case 367u: goto L_0037FC44;
    case 368u: goto L_0037FC4C;
    case 369u: goto L_0037FC7C;
    case 370u: goto L_0037FD10;
    case 371u: goto L_0037FD34;
    case 372u: goto L_0037FD84;
    case 373u: goto L_0037FDF4;
    case 374u: goto L_0037FE30;
    case 375u: goto L_0037FF18;
    case 376u: goto L_0037FF4C;
    case 377u: goto L_0037FF8C;
    case 378u: goto L_0037FFD4;
    case 379u: goto L_0037FFD8;
    default: bad_entry(c, 0x0037C000u); return;
    }
L_0037C000:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037C010; } }
L_0037C008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C010u);  if (depth < kMaxDepth) unit_009E(c, 225u, depth + 1u); else { c.pc = 0x0037A010u; return; } if (c.pc != 0x0037C010u) [[unlikely]] return; }
L_0037C010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C018u);  if (depth < kMaxDepth) unit_009F(c, 213u, depth + 1u); else { c.pc = 0x0037DB50u; return; } if (c.pc != 0x0037C018u) [[unlikely]] return; }
L_0037C018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C020u);  if (depth < kMaxDepth) unit_009F(c, 205u, depth + 1u); else { c.pc = 0x0037DA30u; return; } if (c.pc != 0x0037C020u) [[unlikely]] return; }
L_0037C020:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0037C030:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C040u);  if (depth < kMaxDepth) unit_009E(c, 224u, depth + 1u); else { c.pc = 0x0037A000u; return; } if (c.pc != 0x0037C040u) [[unlikely]] return; }
L_0037C040:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_0037C0E4; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037C0C0; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_0037C084; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037C074; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037C118; } }
L_0037C074:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C07Cu);  if (depth < kMaxDepth) unit_009E(c, 225u, depth + 1u); else { c.pc = 0x0037A010u; return; } if (c.pc != 0x0037C07Cu) [[unlikely]] return; }
L_0037C07C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037C118; } }
L_0037C084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C08Cu);  if (depth < kMaxDepth) unit_009E(c, 228u, depth + 1u); else { c.pc = 0x0037A070u; return; } if (c.pc != 0x0037C08Cu) [[unlikely]] return; }
L_0037C08C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[3], c.r[0]);  if (t) { goto L_0037C0B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C09Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 225u, depth + 1u); else { c.pc = 0x0037A010u; return; } if (c.pc != 0x0037C09Cu) [[unlikely]] return; }
L_0037C09C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C0A4u);  if (depth < kMaxDepth) unit_009E(c, 229u, depth + 1u); else { c.pc = 0x0037A080u; return; } if (c.pc != 0x0037C0A4u) [[unlikely]] return; }
L_0037C0A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037C118; } }
    mmi::paddub(c.r[4], c.r[3], c.r[0]);
    c.budget -= 1;
L_0037C0B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C0B8u);  if (depth < kMaxDepth) unit_009E(c, 225u, depth + 1u); else { c.pc = 0x0037A010u; return; } if (c.pc != 0x0037C0B8u) [[unlikely]] return; }
L_0037C0B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037C118; } }
L_0037C0C0:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 74u));
    c.r[3].d[0] = c.r[3].d[0] & 92ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037C128; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C0DCu);  if (depth < kMaxDepth) unit_009E(c, 225u, depth + 1u); else { c.pc = 0x0037A010u; return; } if (c.pc != 0x0037C0DCu) [[unlikely]] return; }
L_0037C0DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037C118; } }
L_0037C0E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C0ECu);  if (depth < kMaxDepth) unit_009E(c, 226u, depth + 1u); else { c.pc = 0x0037A040u; return; } if (c.pc != 0x0037C0ECu) [[unlikely]] return; }
L_0037C0EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_0037C108; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C0FCu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_009E(c, 225u, depth + 1u); else { c.pc = 0x0037A010u; return; } if (c.pc != 0x0037C0FCu) [[unlikely]] return; }
L_0037C0FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037C118; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_0037C108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C110u);  if (depth < kMaxDepth) unit_009E(c, 225u, depth + 1u); else { c.pc = 0x0037A010u; return; } if (c.pc != 0x0037C110u) [[unlikely]] return; }
L_0037C110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C118u);  if (depth < kMaxDepth) unit_009E(c, 231u, depth + 1u); else { c.pc = 0x0037A0C0u; return; } if (c.pc != 0x0037C118u) [[unlikely]] return; }
L_0037C118:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C120u);  if (depth < kMaxDepth) unit_009F(c, 213u, depth + 1u); else { c.pc = 0x0037DB50u; return; } if (c.pc != 0x0037C120u) [[unlikely]] return; }
L_0037C120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C128u);  if (depth < kMaxDepth) unit_009F(c, 205u, depth + 1u); else { c.pc = 0x0037DA30u; return; } if (c.pc != 0x0037C128u) [[unlikely]] return; }
L_0037C128:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037C140:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C150u);  if (depth < kMaxDepth) unit_009E(c, 224u, depth + 1u); else { c.pc = 0x0037A000u; return; } if (c.pc != 0x0037C150u) [[unlikely]] return; }
L_0037C150:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_0037C228; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037C1D4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_0037C1C4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037C184; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037C230; } }
L_0037C184:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C18Cu);  if (depth < kMaxDepth) unit_009E(c, 228u, depth + 1u); else { c.pc = 0x0037A070u; return; } if (c.pc != 0x0037C18Cu) [[unlikely]] return; }
L_0037C18C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[3], c.r[0]);  if (t) { goto L_0037C1A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C19Cu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_009E(c, 225u, depth + 1u); else { c.pc = 0x0037A010u; return; } if (c.pc != 0x0037C19Cu) [[unlikely]] return; }
L_0037C19C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037C230; } }
    mmi::paddub(c.r[4], c.r[3], c.r[0]);
    c.budget -= 1;
L_0037C1A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C1B0u);  if (depth < kMaxDepth) unit_009E(c, 225u, depth + 1u); else { c.pc = 0x0037A010u; return; } if (c.pc != 0x0037C1B0u) [[unlikely]] return; }
L_0037C1B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C1B8u);  if (depth < kMaxDepth) unit_009E(c, 229u, depth + 1u); else { c.pc = 0x0037A080u; return; } if (c.pc != 0x0037C1B8u) [[unlikely]] return; }
L_0037C1B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037C230; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_0037C1C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C1CCu);  if (depth < kMaxDepth) unit_009E(c, 225u, depth + 1u); else { c.pc = 0x0037A010u; return; } if (c.pc != 0x0037C1CCu) [[unlikely]] return; }
L_0037C1CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037C230; } }
L_0037C1D4:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 74u));
    c.r[3].d[0] = c.r[3].d[0] & 92ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037C240; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C1F0u);  if (depth < kMaxDepth) unit_009E(c, 226u, depth + 1u); else { c.pc = 0x0037A040u; return; } if (c.pc != 0x0037C1F0u) [[unlikely]] return; }
L_0037C1F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0037C20C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C200u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_009E(c, 225u, depth + 1u); else { c.pc = 0x0037A010u; return; } if (c.pc != 0x0037C200u) [[unlikely]] return; }
L_0037C200:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037C230; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0037C20C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C214u);  if (depth < kMaxDepth) unit_009E(c, 225u, depth + 1u); else { c.pc = 0x0037A010u; return; } if (c.pc != 0x0037C214u) [[unlikely]] return; }
L_0037C214:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C21Cu);  if (depth < kMaxDepth) unit_009E(c, 230u, depth + 1u); else { c.pc = 0x0037A0A0u; return; } if (c.pc != 0x0037C21Cu) [[unlikely]] return; }
L_0037C21C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037C230; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 1;
L_0037C228:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C230u);  if (depth < kMaxDepth) unit_009E(c, 225u, depth + 1u); else { c.pc = 0x0037A010u; return; } if (c.pc != 0x0037C230u) [[unlikely]] return; }
L_0037C230:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C238u);  if (depth < kMaxDepth) unit_009F(c, 213u, depth + 1u); else { c.pc = 0x0037DB50u; return; } if (c.pc != 0x0037C238u) [[unlikely]] return; }
L_0037C238:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C240u);  if (depth < kMaxDepth) unit_009F(c, 205u, depth + 1u); else { c.pc = 0x0037DA30u; return; } if (c.pc != 0x0037C240u) [[unlikely]] return; }
L_0037C240:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037C250:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C260u);  if (depth < kMaxDepth) unit_009E(c, 226u, depth + 1u); else { c.pc = 0x0037A040u; return; } if (c.pc != 0x0037C260u) [[unlikely]] return; }
L_0037C260:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037C2D8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 30784u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037C2D8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 76u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037C2D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C290u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037ADA0u; return; } if (c.pc != 0x0037C290u) [[unlikely]] return; }
L_0037C290:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 30400u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C2A4u); set32(c.r[5], c.r[2].w[0] + 30272u);  if (depth < kMaxDepth) unit_002F(c, 61u, depth + 1u); else { c.pc = 0x001BC830u; return; } if (c.pc != 0x0037C2A4u) [[unlikely]] return; }
L_0037C2A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037C2D0; } }
L_0037C2AC:
    set32(c.r[6], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[3].w[0] + 30400u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[3].w[0] + 30272u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C2C8u); st32((c.r[6].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002F(c, 61u, depth + 1u); else { c.pc = 0x001BC830u; return; } if (c.pc != 0x0037C2C8u) [[unlikely]] return; }
L_0037C2C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037C2ACu | kUnwind; return; } goto L_0037C2AC; } }
L_0037C2D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C2D8u);  if (depth < kMaxDepth) unit_009E(c, 328u, depth + 1u); else { c.pc = 0x0037AE90u; return; } if (c.pc != 0x0037C2D8u) [[unlikely]] return; }
L_0037C2D8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037C2F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C300u);  if (depth < kMaxDepth) unit_009E(c, 226u, depth + 1u); else { c.pc = 0x0037A040u; return; } if (c.pc != 0x0037C300u) [[unlikely]] return; }
L_0037C300:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037C38C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 30784u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037C38C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 76u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037C370; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C330u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037ADA0u; return; } if (c.pc != 0x0037C330u) [[unlikely]] return; }
L_0037C330:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 30400u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C344u); set32(c.r[5], c.r[2].w[0] + 30272u);  if (depth < kMaxDepth) unit_002F(c, 61u, depth + 1u); else { c.pc = 0x001BC830u; return; } if (c.pc != 0x0037C344u) [[unlikely]] return; }
L_0037C344:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037C370; } }
L_0037C34C:
    set32(c.r[6], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[3].w[0] + 30400u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[3].w[0] + 30272u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C368u); st32((c.r[6].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002F(c, 61u, depth + 1u); else { c.pc = 0x001BC830u; return; } if (c.pc != 0x0037C368u) [[unlikely]] return; }
L_0037C368:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037C34Cu | kUnwind; return; } goto L_0037C34C; } }
L_0037C370:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 30400u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C384u); set32(c.r[5], c.r[2].w[0] + 30272u);  if (depth < kMaxDepth) unit_002F(c, 69u, depth + 1u); else { c.pc = 0x001BC8F0u; return; } if (c.pc != 0x0037C384u) [[unlikely]] return; }
L_0037C384:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C38Cu);  if (depth < kMaxDepth) unit_009E(c, 275u, depth + 1u); else { c.pc = 0x0037A9B0u; return; } if (c.pc != 0x0037C38Cu) [[unlikely]] return; }
L_0037C38C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037C3A0:
    set32(c.r[4], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 76u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037C3D8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 30784u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037C3D8; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 80u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[4].w[0] + 80u);  if (t) { goto L_0037C3D8; } }
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    st8((c.r[3].w[0] + 78u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_0037C3D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037C3E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 76u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037C458; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C400u);  if (depth < kMaxDepth) unit_009E(c, 223u, depth + 1u); else { c.pc = 0x00379FF0u; return; } if (c.pc != 0x0037C400u) [[unlikely]] return; }
L_0037C400:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037C418; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C410u);  if (depth < kMaxDepth) unit_009E(c, 367u, depth + 1u); else { c.pc = 0x0037B290u; return; } if (c.pc != 0x0037C410u) [[unlikely]] return; }
L_0037C410:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0037C45C; } }
L_0037C418:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 30784u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037C444; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[5].d[0] = ld8((c.r[3].w[0] + 77u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C43Cu); set32(c.r[4], c.r[2].w[0] + 30784u);  if (depth < kMaxDepth) unit_009E(c, 249u, depth + 1u); else { c.pc = 0x0037A4C0u; return; } if (c.pc != 0x0037C43Cu) [[unlikely]] return; }
L_0037C43C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037C458; } }
L_0037C444:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[5].d[0] = ld8((c.r[3].w[0] + 80u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C458u); set32(c.r[4], c.r[2].w[0] + 30912u);  if (depth < kMaxDepth) unit_009E(c, 249u, depth + 1u); else { c.pc = 0x0037A4C0u; return; } if (c.pc != 0x0037C458u) [[unlikely]] return; }
L_0037C458:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0037C45C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037C470:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 76u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037C4C4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 30784u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037C4C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C4A4u); set32(c.r[4], c.r[2].w[0] + 30912u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0037C4A4u) [[unlikely]] return; }
L_0037C4A4:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[4], c.r[3].w[0] + 80u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 80u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037C4C4; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    st8((c.r[3].w[0] + 78u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_0037C4C4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037C4D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 76u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037C5EC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037C614; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 30784u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037C568; } }
    c.r[16].d[0] = ld8((c.r[4].w[0] + 77u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C518u); set32(c.r[4], c.r[2].w[0] + 30784u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0037C518u) [[unlikely]] return; }
L_0037C518:
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0037C5DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C52Cu);  if (depth < kMaxDepth) unit_009E(c, 223u, depth + 1u); else { c.pc = 0x00379FF0u; return; } if (c.pc != 0x0037C52Cu) [[unlikely]] return; }
L_0037C52C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037C548; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 77u));
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 77u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0037C55C; } }
L_0037C548:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C554u); set32(c.r[4], c.r[2].w[0] + 30784u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0037C554u) [[unlikely]] return; }
L_0037C554:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    st8((c.r[3].w[0] + 77u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0037C55C:
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 78u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0037C5DC; } }
L_0037C568:
    c.r[16].d[0] = ld8((c.r[4].w[0] + 80u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C578u); set32(c.r[4], c.r[2].w[0] + 30912u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0037C578u) [[unlikely]] return; }
L_0037C578:
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0037C5DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C58Cu);  if (depth < kMaxDepth) unit_009E(c, 223u, depth + 1u); else { c.pc = 0x00379FF0u; return; } if (c.pc != 0x0037C58Cu) [[unlikely]] return; }
L_0037C58C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037C5C0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[5].d[0] = ld8((c.r[3].w[0] + 80u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C5A8u); set32(c.r[4], c.r[2].w[0] + 30912u);  if (depth < kMaxDepth) unit_009E(c, 236u, depth + 1u); else { c.pc = 0x0037A1D0u; return; } if (c.pc != 0x0037C5A8u) [[unlikely]] return; }
L_0037C5A8:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[3].w[0] + 80u));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 80u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0037C5D4; } }
L_0037C5C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C5CCu); set32(c.r[4], c.r[2].w[0] + 30912u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0037C5CCu) [[unlikely]] return; }
L_0037C5CC:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    st8((c.r[3].w[0] + 80u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0037C5D4:
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    st8((c.r[2].w[0] + 78u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0037C5DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C5E4u);  if (depth < kMaxDepth) unit_009F(c, 203u, depth + 1u); else { c.pc = 0x0037D9F0u; return; } if (c.pc != 0x0037C5E4u) [[unlikely]] return; }
L_0037C5E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0037C618; } }
L_0037C5EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 30400u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C600u); set32(c.r[5], c.r[2].w[0] + 30272u);  if (depth < kMaxDepth) unit_002F(c, 61u, depth + 1u); else { c.pc = 0x001BC830u; return; } if (c.pc != 0x0037C600u) [[unlikely]] return; }
L_0037C600:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0037C614; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C614u); st32((c.r[3].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009E(c, 275u, depth + 1u); else { c.pc = 0x0037A9B0u; return; } if (c.pc != 0x0037C614u) [[unlikely]] return; }
L_0037C614:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0037C618:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0037C630:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 76u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037C710; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037C738; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 30784u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037C6A8; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 77u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037C700; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C678u);  if (depth < kMaxDepth) unit_009E(c, 223u, depth + 1u); else { c.pc = 0x00379FF0u; return; } if (c.pc != 0x0037C678u) [[unlikely]] return; }
L_0037C678:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037C694; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 77u));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 77u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0037C69C; } }
L_0037C694:
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    st8((c.r[2].w[0] + 77u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0037C69C:
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 78u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0037C700; } }
L_0037C6A8:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 80u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037C700; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C6BCu);  if (depth < kMaxDepth) unit_009E(c, 223u, depth + 1u); else { c.pc = 0x00379FF0u; return; } if (c.pc != 0x0037C6BCu) [[unlikely]] return; }
L_0037C6BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037C6F0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[5].d[0] = ld8((c.r[3].w[0] + 80u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C6D8u); set32(c.r[4], c.r[2].w[0] + 30912u);  if (depth < kMaxDepth) unit_009E(c, 232u, depth + 1u); else { c.pc = 0x0037A0E0u; return; } if (c.pc != 0x0037C6D8u) [[unlikely]] return; }
L_0037C6D8:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[3].w[0] + 80u));
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 80u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0037C6F8; } }
L_0037C6F0:
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    st8((c.r[2].w[0] + 80u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0037C6F8:
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    st8((c.r[2].w[0] + 78u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0037C700:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C708u);  if (depth < kMaxDepth) unit_009F(c, 203u, depth + 1u); else { c.pc = 0x0037D9F0u; return; } if (c.pc != 0x0037C708u) [[unlikely]] return; }
L_0037C708:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0037C73C; } }
L_0037C710:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 30400u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C724u); set32(c.r[5], c.r[2].w[0] + 30272u);  if (depth < kMaxDepth) unit_002F(c, 63u, depth + 1u); else { c.pc = 0x001BC860u; return; } if (c.pc != 0x0037C724u) [[unlikely]] return; }
L_0037C724:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0037C738; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C738u); st32((c.r[3].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009E(c, 275u, depth + 1u); else { c.pc = 0x0037A9B0u; return; } if (c.pc != 0x0037C738u) [[unlikely]] return; }
L_0037C738:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0037C73C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037C750:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C760u);  if (depth < kMaxDepth) unit_009E(c, 226u, depth + 1u); else { c.pc = 0x0037A040u; return; } if (c.pc != 0x0037C760u) [[unlikely]] return; }
L_0037C760:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037C7E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C770u);  if (depth < kMaxDepth) unit_009E(c, 221u, depth + 1u); else { c.pc = 0x00379FD0u; return; } if (c.pc != 0x0037C770u) [[unlikely]] return; }
L_0037C770:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037C788; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C780u);  if (depth < kMaxDepth) unit_009E(c, 229u, depth + 1u); else { c.pc = 0x0037A080u; return; } if (c.pc != 0x0037C780u) [[unlikely]] return; }
L_0037C780:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037C7D4; } }
L_0037C788:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C790u);  if (depth < kMaxDepth) unit_009E(c, 222u, depth + 1u); else { c.pc = 0x00379FE0u; return; } if (c.pc != 0x0037C790u) [[unlikely]] return; }
L_0037C790:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037C7BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C7A0u);  if (depth < kMaxDepth) unit_009E(c, 224u, depth + 1u); else { c.pc = 0x0037A000u; return; } if (c.pc != 0x0037C7A0u) [[unlikely]] return; }
L_0037C7A0:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_0037C7BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C7B4u);  if (depth < kMaxDepth) unit_009E(c, 225u, depth + 1u); else { c.pc = 0x0037A010u; return; } if (c.pc != 0x0037C7B4u) [[unlikely]] return; }
L_0037C7B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037C7D4; } }
L_0037C7BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C7C4u);  if (depth < kMaxDepth) unit_009E(c, 224u, depth + 1u); else { c.pc = 0x0037A000u; return; } if (c.pc != 0x0037C7C4u) [[unlikely]] return; }
L_0037C7C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037C7D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C7D4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 225u, depth + 1u); else { c.pc = 0x0037A010u; return; } if (c.pc != 0x0037C7D4u) [[unlikely]] return; }
L_0037C7D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C7DCu);  if (depth < kMaxDepth) unit_009F(c, 213u, depth + 1u); else { c.pc = 0x0037DB50u; return; } if (c.pc != 0x0037C7DCu) [[unlikely]] return; }
L_0037C7DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C7E4u);  if (depth < kMaxDepth) unit_009F(c, 205u, depth + 1u); else { c.pc = 0x0037DA30u; return; } if (c.pc != 0x0037C7E4u) [[unlikely]] return; }
L_0037C7E4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037C7F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 76u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037C828; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 30784u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037C844; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C820u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037ADA0u; return; } if (c.pc != 0x0037C820u) [[unlikely]] return; }
L_0037C820:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0037C848; } }
L_0037C828:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 30400u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C83Cu); set32(c.r[5], c.r[2].w[0] + 30272u);  if (depth < kMaxDepth) unit_002F(c, 49u, depth + 1u); else { c.pc = 0x001BC700u; return; } if (c.pc != 0x0037C83Cu) [[unlikely]] return; }
L_0037C83C:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    st32((c.r[3].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 2;
L_0037C844:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0037C848:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037C850:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C860u);  if (depth < kMaxDepth) unit_009E(c, 226u, depth + 1u); else { c.pc = 0x0037A040u; return; } if (c.pc != 0x0037C860u) [[unlikely]] return; }
L_0037C860:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037C8A0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 30784u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037C8A0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 76u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037C898; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C890u);  if (depth < kMaxDepth) unit_009E(c, 345u, depth + 1u); else { c.pc = 0x0037B080u; return; } if (c.pc != 0x0037C890u) [[unlikely]] return; }
L_0037C890:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0037C8A4; } }
L_0037C898:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C8A0u);  if (depth < kMaxDepth) unit_009E(c, 328u, depth + 1u); else { c.pc = 0x0037AE90u; return; } if (c.pc != 0x0037C8A0u) [[unlikely]] return; }
L_0037C8A0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0037C8A4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037C8B0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 76u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037C8E8; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 80u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 77u));
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);  if (t) { goto L_0037C904; } }
L_0037C8E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C8F4u); set32(c.r[4], c.r[2].w[0] + 30528u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0037C8F4u) [[unlikely]] return; }
L_0037C8F4:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 80u));
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 4;
L_0037C904:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0037C93C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[3], c.r[2].w[0] - 6u);
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[3], c.r[2].w[0] + 28u);
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0037C93C; } }
    st32((c.r[3].w[0]), 0u);
    c.budget -= 1;
L_0037C93C:
    set32(c.r[16], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 76u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037C964; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 80u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 77u));
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);  if (t) { goto L_0037C990; } }
L_0037C964:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C970u); set32(c.r[4], c.r[2].w[0] + 30528u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0037C970u) [[unlikely]] return; }
L_0037C970:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 80u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[3].w[0] + 30400u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C984u); set32(c.r[17], c.r[5].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0037C984u) [[unlikely]] return; }
L_0037C984:
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 3;
L_0037C990:
    c.r[1].d[0] = c.r[2].sd[0] < 27ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0037C9B0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[3], c.r[2].w[0] - 22u);
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 5;
L_0037C9B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C9BCu); set32(c.r[4], c.r[2].w[0] + 30912u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0037C9BCu) [[unlikely]] return; }
L_0037C9BC:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 28u)));
    c.r[1].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0037CB84; } }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_0037C9FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C9E4u); set32(c.r[4], c.r[2].w[0] + 30912u);  if (depth < kMaxDepth) unit_009E(c, 236u, depth + 1u); else { c.pc = 0x0037A1D0u; return; } if (c.pc != 0x0037C9E4u) [[unlikely]] return; }
L_0037C9E4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0037C9FC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 4;
L_0037C9FC:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] + 30912u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[6], 0u + 28u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CA1Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x0037CA1Cu) [[unlikely]] return; }
L_0037CA1C:
    set32(c.r[4], ld32((c.r[28].w[0] - 24824u)));
    st8((c.r[29].w[0] + 76u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u - 129u);
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0037CAB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CA44u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0037CA44u) [[unlikely]] return; }
L_0037CA44:
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (t) { goto L_0037CAB8; } }
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[6], c.r[2].w[0] - 2u);  if (t) { goto L_0037CA80; } }
    set32(c.r[7], c.r[29].w[0] + 48u);
    set32(c.r[4], 0u + 42u);
    c.budget -= 2;
L_0037CA64:
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], c.r[5].w[0] + 2u);
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[7], c.r[7].w[0] + 2u);
    c.r[3].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037CA64u | kUnwind; return; } goto L_0037CA64; } }
L_0037CA80:
    c.r[1].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0037CAB8; } }
    set32(c.r[3], c.r[5].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[3].w[0] + 48u);
    set32(c.r[4], 0u + 42u);
    c.budget -= 3;
L_0037CA98:
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037CA98u | kUnwind; return; } goto L_0037CA98; } }
    c.budget -= 1;
L_0037CAB8:
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 18u);  if (t) { goto L_0037CAE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CAD4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0037CAD4u) [[unlikely]] return; }
L_0037CAD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 48u);  if (t) { goto L_0037CAEC; } }
    set32(c.r[4], 0u + 18u);
    c.budget -= 1;
L_0037CAE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CAE8u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0037CAE8u) [[unlikely]] return; }
L_0037CAE8:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_0037CAEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CAF4u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0037CAF4u) [[unlikely]] return; }
L_0037CAF4:
    set32(c.r[3], 0u + 28u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0037CB1C; } }
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CB0Cu); set32(c.r[5], 0u + 27u);  if (depth < kMaxDepth) unit_009E(c, 236u, depth + 1u); else { c.pc = 0x0037A1D0u; return; } if (c.pc != 0x0037CB0Cu) [[unlikely]] return; }
L_0037CB0C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0037CB1C; } }
    st8((c.r[29].w[0] + 75u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0037CB1C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 185u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037CB5C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x449A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[14] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CB54u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0017(c, 240u, depth + 1u); else { c.pc = 0x0015E3B0u; return; } if (c.pc != 0x0037CB54u) [[unlikely]] return; }
L_0037CB54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 24824u)));  if (t) { goto L_0037CB88; } }
L_0037CB5C:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x449A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[14] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CB84u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0037CB84u) [[unlikely]] return; }
L_0037CB84:
    set32(c.r[4], ld32((c.r[28].w[0] - 24824u)));
    c.budget -= 1;
L_0037CB88:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 78u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 78u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[1].w[0] + 30784u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037D010; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 80u));
    set32(c.r[4], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[17], c.r[2].w[0] - c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = c.r[17].sd[0] >= 0; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_0037CBCC; } }
    set32(c.r[16], c.r[4].w[0] - c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_0037CBCC; } }
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 1;
L_0037CBCC:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 76u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037CCFC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 30784u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CBE8u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_009E(c, 273u, depth + 1u); else { c.pc = 0x0037A910u; return; } if (c.pc != 0x0037CBE8u) [[unlikely]] return; }
L_0037CBE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CBF0u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0037CBF0u) [[unlikely]] return; }
L_0037CBF0:
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0037D010; } }
    set32(c.r[2], c.r[16].w[0] + c.r[29].w[0]);
    set32(c.r[5], c.r[2].w[0] + 80u);
    set32(c.r[2], 0u + 28u);
    set32(c.r[16], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CC18u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x0037CC18u) [[unlikely]] return; }
L_0037CC18:
    set32(c.r[2], c.r[16].w[0] + c.r[29].w[0]);
    set32(c.r[4], 0u + 19u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CC28u); st8((c.r[2].w[0] + 48u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0037CC28u) [[unlikely]] return; }
L_0037CC28:
    set32(c.r[2], 0u + 27u);
    set32(c.r[16], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CC3Cu); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 236u, depth + 1u); else { c.pc = 0x0037A1D0u; return; } if (c.pc != 0x0037CC3Cu) [[unlikely]] return; }
L_0037CC3C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0037CC50; } }
    set32(c.r[2], c.r[16].w[0] + c.r[29].w[0]);
    st8((c.r[2].w[0] + 48u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0037CC50:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 185u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0037CCA8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x449A0000u);
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] | 27034ull;
    c.f[14] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.f[13] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CC9Cu); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0017(c, 240u, depth + 1u); else { c.pc = 0x0015E3B0u; return; } if (c.pc != 0x0037CC9Cu) [[unlikely]] return; }
L_0037CC9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));  if (t) { goto L_0037D014; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0037CCA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CCB0u);  if (depth < kMaxDepth) unit_00A6(c, 137u, depth + 1u); else { c.pc = 0x00399B70u; return; } if (c.pc != 0x0037CCB0u) [[unlikely]] return; }
L_0037CCB0:
    set32(c.r[4], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x449A0000u);
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] | 27034ull;
    c.f[14] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.f[13] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CCECu); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0037CCECu) [[unlikely]] return; }
L_0037CCEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CCF4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_00A6(c, 137u, depth + 1u); else { c.pc = 0x00399B70u; return; } if (c.pc != 0x0037CCF4u) [[unlikely]] return; }
L_0037CCF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037D010; } }
L_0037CCFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CD08u); set32(c.r[4], c.r[2].w[0] + 30528u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0037CD08u) [[unlikely]] return; }
L_0037CD08:
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0037CDE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] + 30528u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CD28u); set32(c.r[5], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x0037CD28u) [[unlikely]] return; }
L_0037CD28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CD30u); set32(c.r[4], 0u + 19u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0037CD30u) [[unlikely]] return; }
L_0037CD30:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 185u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0037CD88; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x449A0000u);
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] | 27034ull;
    c.f[14] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.f[13] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CD7Cu); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0017(c, 240u, depth + 1u); else { c.pc = 0x0015E3B0u; return; } if (c.pc != 0x0037CD7Cu) [[unlikely]] return; }
L_0037CD7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 48u);  if (t) { goto L_0037CDD8; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0037CD88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CD90u);  if (depth < kMaxDepth) unit_00A6(c, 137u, depth + 1u); else { c.pc = 0x00399B70u; return; } if (c.pc != 0x0037CD90u) [[unlikely]] return; }
L_0037CD90:
    set32(c.r[4], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x449A0000u);
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] | 27034ull;
    c.f[14] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.f[13] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CDCCu); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0037CDCCu) [[unlikely]] return; }
L_0037CDCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CDD4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_00A6(c, 137u, depth + 1u); else { c.pc = 0x00399B70u; return; } if (c.pc != 0x0037CDD4u) [[unlikely]] return; }
L_0037CDD4:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_0037CDD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CDE0u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0037CDE0u) [[unlikely]] return; }
L_0037CDE0:
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 2;
L_0037CDE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CDF4u); set32(c.r[4], c.r[2].w[0] + 30400u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0037CDF4u) [[unlikely]] return; }
L_0037CDF4:
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[17].sd[0] < 28ll ? 1ull : 0ull;  if (t) { goto L_0037CF10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] + 30400u);
    set32(c.r[5], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], 0u + 28u);
    set32(c.r[16], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CE20u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x0037CE20u) [[unlikely]] return; }
L_0037CE20:
    set32(c.r[2], c.r[16].w[0] + c.r[29].w[0]);
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CE30u); st8((c.r[2].w[0] + 48u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0037CE30u) [[unlikely]] return; }
L_0037CE30:
    set32(c.r[2], 0u + 27u);
    set32(c.r[16], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CE44u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 236u, depth + 1u); else { c.pc = 0x0037A1D0u; return; } if (c.pc != 0x0037CE44u) [[unlikely]] return; }
L_0037CE44:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0037CE58; } }
    set32(c.r[2], c.r[16].w[0] + c.r[29].w[0]);
    st8((c.r[2].w[0] + 48u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0037CE58:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 185u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0037CEB0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x449A0000u);
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] | 27034ull;
    c.f[14] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.f[13] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CEA4u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0017(c, 240u, depth + 1u); else { c.pc = 0x0015E3B0u; return; } if (c.pc != 0x0037CEA4u) [[unlikely]] return; }
L_0037CEA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 48u);  if (t) { goto L_0037CF00; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0037CEB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CEB8u);  if (depth < kMaxDepth) unit_00A6(c, 137u, depth + 1u); else { c.pc = 0x00399B70u; return; } if (c.pc != 0x0037CEB8u) [[unlikely]] return; }
L_0037CEB8:
    set32(c.r[4], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x449A0000u);
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] | 27034ull;
    c.f[14] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.f[13] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CEF4u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0037CEF4u) [[unlikely]] return; }
L_0037CEF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CEFCu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_00A6(c, 137u, depth + 1u); else { c.pc = 0x00399B70u; return; } if (c.pc != 0x0037CEFCu) [[unlikely]] return; }
L_0037CEFC:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_0037CF00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CF08u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0037CF08u) [[unlikely]] return; }
L_0037CF08:
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[17].sd[0] < 28ll ? 1ull : 0ull;
    c.budget -= 2;
L_0037CF10:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0037D010; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[2].w[0] + 30272u);
    set32(c.r[2], 0u + 28u);
    set32(c.r[16], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CF34u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x0037CF34u) [[unlikely]] return; }
L_0037CF34:
    set32(c.r[2], c.r[16].w[0] + c.r[29].w[0]);
    set32(c.r[4], 0u + 19u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CF44u); st8((c.r[2].w[0] + 48u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0037CF44u) [[unlikely]] return; }
L_0037CF44:
    set32(c.r[2], 0u + 27u);
    set32(c.r[16], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CF58u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 236u, depth + 1u); else { c.pc = 0x0037A1D0u; return; } if (c.pc != 0x0037CF58u) [[unlikely]] return; }
L_0037CF58:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0037CF6C; } }
    set32(c.r[2], c.r[16].w[0] + c.r[29].w[0]);
    st8((c.r[2].w[0] + 48u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0037CF6C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 185u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0037CFC4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x449A0000u);
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] | 27034ull;
    c.f[14] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.f[13] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CFB8u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0017(c, 240u, depth + 1u); else { c.pc = 0x0015E3B0u; return; } if (c.pc != 0x0037CFB8u) [[unlikely]] return; }
L_0037CFB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037D010; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0037CFC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037CFCCu);  if (depth < kMaxDepth) unit_00A6(c, 137u, depth + 1u); else { c.pc = 0x00399B70u; return; } if (c.pc != 0x0037CFCCu) [[unlikely]] return; }
L_0037CFCC:
    set32(c.r[4], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x449A0000u);
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] | 27034ull;
    c.f[14] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.f[13] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D008u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0037D008u) [[unlikely]] return; }
L_0037D008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D010u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_00A6(c, 137u, depth + 1u); else { c.pc = 0x00399B70u; return; } if (c.pc != 0x0037D010u) [[unlikely]] return; }
L_0037D010:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.budget -= 1;
L_0037D014:
    c.r[4].d[0] = ld8((c.r[3].w[0] + 76u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0037D1F4; } }
    c.r[4].d[0] = ld8((c.r[3].w[0] + 78u));
    c.r[4].d[0] = c.r[4].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0037D1F4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 185u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037D0F4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_0037D064; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D058u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0037D058u) [[unlikely]] return; }
L_0037D058:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);  if (t) { goto L_0037D070; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 1;
L_0037D064:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D06Cu);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0037D06Cu) [[unlikely]] return; }
L_0037D06C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.budget -= 1;
L_0037D070:
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D088u);  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x0037D088u) [[unlikely]] return; }
L_0037D088:
    set32(c.r[7], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x449A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 27853ull;
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].d[0] = ld8((c.r[7].w[0] + 80u));
    c.r[5].d[0] = ld8((c.r[7].w[0] + 77u));
    set32(c.r[3], ld32((c.r[7].w[0] + 28u)));
    c.f[0] = ld32((c.r[7].w[0] + 16u));
    set32(c.r[4], c.r[2].w[0] - 13400u);
    set32(c.r[2], ld32((c.r[7].w[0] + 12u)));
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[13] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D0DCu); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0037D0DCu) [[unlikely]] return; }
L_0037D0DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D0ECu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x0037D0ECu) [[unlikely]] return; }
L_0037D0EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_0037D1F8; } }
L_0037D0F4:
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);  if (t) { goto L_0037D118; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 232u), c.r[2].w[0]);  if (t) { goto L_0037D120; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 1;
L_0037D118:
    c.r[2].d[0] = c.r[2].d[0] | 255ull;
    st32((c.r[29].w[0] + 232u), c.r[2].w[0]);
    c.budget -= 2;
L_0037D120:
    c.r[8].d[0] = ld8((c.r[3].w[0] + 80u));
    c.r[7].d[0] = ld8((c.r[3].w[0] + 77u));
    set32(c.r[6], ld32((c.r[3].w[0] + 28u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[4].d[0] = c.r[2].d[0] | 65304ull;
    set32(c.r[5], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] - c.r[6].w[0]);
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[29].w[0] + 208u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[29].w[0] + 212u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 216u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 220u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 75u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 23;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x000B0000u);  if (t) { goto L_0037D190; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000B0000u);
    c.r[2].d[0] = c.r[2].d[0] | 20ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 236u), c.r[2].w[0]);  if (t) { goto L_0037D198; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000B0000u);
    c.budget -= 1;
L_0037D190:
    c.r[2].d[0] = c.r[2].d[0] | 10ull;
    st32((c.r[29].w[0] + 236u), c.r[2].w[0]);
    c.budget -= 2;
L_0037D198:
    set32(c.r[2], c.r[29].w[0] + 208u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    set32(c.r[2], c.r[29].w[0] + 232u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 236u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20376u), c.r[2].w[0]);
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 128u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D1F4u); st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_001B(c, 207u, depth + 1u); else { c.pc = 0x0016FA40u; return; } if (c.pc != 0x0037D1F4u) [[unlikely]] return; }
L_0037D1F4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0037D1F8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_0037D210:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D228u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0017(c, 238u, depth + 1u); else { c.pc = 0x0015E390u; return; } if (c.pc != 0x0037D228u) [[unlikely]] return; }
L_0037D228:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D234u); set32(c.r[4], c.r[2].w[0] + 30912u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0037D234u) [[unlikely]] return; }
L_0037D234:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 28u)));
    c.r[1].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0037D37C; } }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_0037D274; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D25Cu); set32(c.r[4], c.r[2].w[0] + 30912u);  if (depth < kMaxDepth) unit_009E(c, 236u, depth + 1u); else { c.pc = 0x0037A1D0u; return; } if (c.pc != 0x0037D25Cu) [[unlikely]] return; }
L_0037D25C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0037D274; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 4;
L_0037D274:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] + 30912u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[6], 0u + 16u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D294u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x0037D294u) [[unlikely]] return; }
L_0037D294:
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    st8((c.r[29].w[0] + 64u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 18u);  if (t) { goto L_0037D2C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D2B4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0017(c, 238u, depth + 1u); else { c.pc = 0x0015E390u; return; } if (c.pc != 0x0037D2B4u) [[unlikely]] return; }
L_0037D2B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 48u);  if (t) { goto L_0037D2CC; } }
    set32(c.r[4], 0u + 18u);
    c.budget -= 1;
L_0037D2C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D2C8u);  if (depth < kMaxDepth) unit_0017(c, 238u, depth + 1u); else { c.pc = 0x0015E390u; return; } if (c.pc != 0x0037D2C8u) [[unlikely]] return; }
L_0037D2C8:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_0037D2CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D2D4u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0037D2D4u) [[unlikely]] return; }
L_0037D2D4:
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_0037D300; } }
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D2ECu); set32(c.r[5], 0u + 15u);  if (depth < kMaxDepth) unit_009E(c, 236u, depth + 1u); else { c.pc = 0x0037A1D0u; return; } if (c.pc != 0x0037D2ECu) [[unlikely]] return; }
L_0037D2EC:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0037D2FC; } }
    st8((c.r[29].w[0] + 63u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0037D2FC:
    set32(c.r[4], 0u + 2u);
    c.budget -= 1;
L_0037D300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D308u);  if (depth < kMaxDepth) unit_0017(c, 239u, depth + 1u); else { c.pc = 0x0015E3A0u; return; } if (c.pc != 0x0037D308u) [[unlikely]] return; }
L_0037D308:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 185u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037D348; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x449A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[14] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D340u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0017(c, 240u, depth + 1u); else { c.pc = 0x0015E3B0u; return; } if (c.pc != 0x0037D340u) [[unlikely]] return; }
L_0037D340:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_0037D374; } }
L_0037D348:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x449A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[14] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    c.f[12] = fp::cvt_s_w(c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D370u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0037D370u) [[unlikely]] return; }
L_0037D370:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_0037D374:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D37Cu);  if (depth < kMaxDepth) unit_0017(c, 239u, depth + 1u); else { c.pc = 0x0015E3A0u; return; } if (c.pc != 0x0037D37Cu) [[unlikely]] return; }
L_0037D37C:
    set32(c.r[4], ld32((c.r[28].w[0] - 24824u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 78u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 78u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[1].w[0] + 30784u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037D824; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 76u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037D49C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 30784u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D3BCu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_009E(c, 273u, depth + 1u); else { c.pc = 0x0037A910u; return; } if (c.pc != 0x0037D3BCu) [[unlikely]] return; }
L_0037D3BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D3C4u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0037D3C4u) [[unlikely]] return; }
L_0037D3C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_0037D81C; } }
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D3DCu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x0037D3DCu) [[unlikely]] return; }
L_0037D3DC:
    set32(c.r[4], 0u + 19u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D3E8u); st8((c.r[29].w[0] + 64u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0017(c, 238u, depth + 1u); else { c.pc = 0x0015E390u; return; } if (c.pc != 0x0037D3E8u) [[unlikely]] return; }
L_0037D3E8:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D3F4u); set32(c.r[5], 0u + 15u);  if (depth < kMaxDepth) unit_009E(c, 236u, depth + 1u); else { c.pc = 0x0037A1D0u; return; } if (c.pc != 0x0037D3F4u) [[unlikely]] return; }
L_0037D3F4:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_0037D408; } }
    st8((c.r[29].w[0] + 63u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], 0u + 2u);
    c.budget -= 2;
L_0037D408:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D410u);  if (depth < kMaxDepth) unit_0017(c, 239u, depth + 1u); else { c.pc = 0x0015E3A0u; return; } if (c.pc != 0x0037D410u) [[unlikely]] return; }
L_0037D410:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 185u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037D458; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x449A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 25395ull;
    c.f[14] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.f[12] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[2].w[0] + 12u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D450u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0017(c, 240u, depth + 1u); else { c.pc = 0x0015E3B0u; return; } if (c.pc != 0x0037D450u) [[unlikely]] return; }
L_0037D450:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_0037D48C; } }
L_0037D458:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x449A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 25395ull;
    c.f[14] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.f[12] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[2].w[0] + 12u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D488u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0037D488u) [[unlikely]] return; }
L_0037D488:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_0037D48C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D494u);  if (depth < kMaxDepth) unit_0017(c, 239u, depth + 1u); else { c.pc = 0x0015E3A0u; return; } if (c.pc != 0x0037D494u) [[unlikely]] return; }
L_0037D494:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037D818; } }
L_0037D49C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 30528u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D4B0u); mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0037D4B0u) [[unlikely]] return; }
L_0037D4B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037D56C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D4C8u); set32(c.r[5], c.r[2].w[0] + 30528u);  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x0037D4C8u) [[unlikely]] return; }
L_0037D4C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D4D0u); set32(c.r[4], 0u + 19u);  if (depth < kMaxDepth) unit_0017(c, 238u, depth + 1u); else { c.pc = 0x0015E390u; return; } if (c.pc != 0x0037D4D0u) [[unlikely]] return; }
L_0037D4D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D4D8u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0017(c, 239u, depth + 1u); else { c.pc = 0x0015E3A0u; return; } if (c.pc != 0x0037D4D8u) [[unlikely]] return; }
L_0037D4D8:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 185u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037D520; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x449A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 25395ull;
    c.f[14] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.f[12] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[2].w[0] + 12u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D518u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0017(c, 240u, depth + 1u); else { c.pc = 0x0015E3B0u; return; } if (c.pc != 0x0037D518u) [[unlikely]] return; }
L_0037D518:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_0037D554; } }
L_0037D520:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x449A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 25395ull;
    c.f[14] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.f[12] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[2].w[0] + 12u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D550u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0037D550u) [[unlikely]] return; }
L_0037D550:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_0037D554:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D55Cu);  if (depth < kMaxDepth) unit_0017(c, 239u, depth + 1u); else { c.pc = 0x0015E3A0u; return; } if (c.pc != 0x0037D55Cu) [[unlikely]] return; }
L_0037D55C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D564u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0037D564u) [[unlikely]] return; }
L_0037D564:
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 2;
L_0037D56C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D578u); set32(c.r[4], c.r[2].w[0] + 30400u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0037D578u) [[unlikely]] return; }
L_0037D578:
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[16].sd[0] < 16ll ? 1ull : 0ull;  if (t) { goto L_0037D6D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] + 30400u);
    set32(c.r[5], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], 0u + 16u);
    set32(c.r[17], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D5A4u); mmi::paddub(c.r[6], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x0037D5A4u) [[unlikely]] return; }
L_0037D5A4:
    set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);
    set32(c.r[4], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D5B4u); st8((c.r[2].w[0] + 48u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0017(c, 238u, depth + 1u); else { c.pc = 0x0015E390u; return; } if (c.pc != 0x0037D5B4u) [[unlikely]] return; }
L_0037D5B4:
    set32(c.r[2], 0u + 15u);
    set32(c.r[17], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D5C8u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 236u, depth + 1u); else { c.pc = 0x0037A1D0u; return; } if (c.pc != 0x0037D5C8u) [[unlikely]] return; }
L_0037D5C8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_0037D5E0; } }
    set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);
    st8((c.r[2].w[0] + 48u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
L_0037D5E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D5E8u);  if (depth < kMaxDepth) unit_0017(c, 239u, depth + 1u); else { c.pc = 0x0015E3A0u; return; } if (c.pc != 0x0037D5E8u) [[unlikely]] return; }
L_0037D5E8:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 185u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037D65C; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 1));
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 8;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_0037D620; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0037D620:
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[5].w[0] + 16u)));
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x449A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 25395ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[3], c.r[3].w[0] + 12u);
    c.f[14] = c.r[2].w[0];
    c.f[0] = c.r[3].w[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D654u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0017(c, 240u, depth + 1u); else { c.pc = 0x0015E3B0u; return; } if (c.pc != 0x0037D654u) [[unlikely]] return; }
L_0037D654:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_0037D6BC; } }
L_0037D65C:
    set32(c.r[5], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 1));
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 8;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_0037D684; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0037D684:
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[5].w[0] + 16u)));
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x449A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 25395ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[3], c.r[3].w[0] + 12u);
    c.f[14] = c.r[2].w[0];
    c.f[0] = c.r[3].w[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D6B8u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0037D6B8u) [[unlikely]] return; }
L_0037D6B8:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_0037D6BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D6C4u);  if (depth < kMaxDepth) unit_0017(c, 239u, depth + 1u); else { c.pc = 0x0015E3A0u; return; } if (c.pc != 0x0037D6C4u) [[unlikely]] return; }
L_0037D6C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D6CCu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0037D6CCu) [[unlikely]] return; }
L_0037D6CC:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[16].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 2;
L_0037D6D4:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0037D818; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[2].w[0] + 30272u);
    set32(c.r[2], 0u + 16u);
    set32(c.r[17], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D6F8u); mmi::paddub(c.r[6], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x0037D6F8u) [[unlikely]] return; }
L_0037D6F8:
    set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);
    set32(c.r[4], 0u + 19u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D708u); st8((c.r[2].w[0] + 48u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0017(c, 238u, depth + 1u); else { c.pc = 0x0015E390u; return; } if (c.pc != 0x0037D708u) [[unlikely]] return; }
L_0037D708:
    set32(c.r[2], 0u + 15u);
    set32(c.r[17], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D71Cu); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 236u, depth + 1u); else { c.pc = 0x0037A1D0u; return; } if (c.pc != 0x0037D71Cu) [[unlikely]] return; }
L_0037D71C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_0037D734; } }
    set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);
    st8((c.r[2].w[0] + 48u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
L_0037D734:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D73Cu);  if (depth < kMaxDepth) unit_0017(c, 239u, depth + 1u); else { c.pc = 0x0015E3A0u; return; } if (c.pc != 0x0037D73Cu) [[unlikely]] return; }
L_0037D73C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 185u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037D7B0; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 1));
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 8;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_0037D774; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0037D774:
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[5].w[0] + 16u)));
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x449A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 25395ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[3], c.r[3].w[0] + 12u);
    c.f[14] = c.r[2].w[0];
    c.f[0] = c.r[3].w[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D7A8u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0017(c, 240u, depth + 1u); else { c.pc = 0x0015E3B0u; return; } if (c.pc != 0x0037D7A8u) [[unlikely]] return; }
L_0037D7A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_0037D810; } }
L_0037D7B0:
    set32(c.r[5], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 1));
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 8;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_0037D7D8; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0037D7D8:
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[5].w[0] + 16u)));
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x449A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 25395ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[3], c.r[3].w[0] + 12u);
    c.f[14] = c.r[2].w[0];
    c.f[0] = c.r[3].w[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D80Cu); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0037D80Cu) [[unlikely]] return; }
L_0037D80C:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_0037D810:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D818u);  if (depth < kMaxDepth) unit_0017(c, 239u, depth + 1u); else { c.pc = 0x0015E3A0u; return; } if (c.pc != 0x0037D818u) [[unlikely]] return; }
L_0037D818:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_0037D81C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D824u);  if (depth < kMaxDepth) unit_0017(c, 238u, depth + 1u); else { c.pc = 0x0015E390u; return; } if (c.pc != 0x0037D824u) [[unlikely]] return; }
L_0037D824:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0037D840:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00380000u);
    set32(c.r[6], c.r[2].w[0] - 8624u);
    set32(c.r[4], 0u + 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D85Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009F(c, 230u, depth + 1u); else { c.pc = 0x0037DDD0u; return; } if (c.pc != 0x0037D85Cu) [[unlikely]] return; }
L_0037D85C:
    set32(c.r[5], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00380000u);
    set32(c.r[6], c.r[3].w[0] - 8880u);
    set32(c.r[4], 0u + 16u);
    st32((c.r[2].w[0] + 28u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D880u); st32((c.r[3].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009F(c, 230u, depth + 1u); else { c.pc = 0x0037DDD0u; return; } if (c.pc != 0x0037D880u) [[unlikely]] return; }
L_0037D880:
    set32(c.r[4], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[6], c.r[3].w[0] + 23488u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[5], c.r[3].w[0] + 23490u);
    st32((c.r[2].w[0] + 28u), c.r[4].w[0]);
    set32(c.r[7], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42D20000u);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 79u));
    c.r[3].d[0] = c.r[3].d[0] | 26214ull;
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.f[1] = c.r[6].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[2].w[0] + 32u), c.f[1]);
    set32(c.r[6], ld32((c.r[28].w[0] - 24824u)));
    c.r[6].d[0] = ld8((c.r[6].w[0] + 79u));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 36u), c.f[0]);
    st32((c.r[2].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    st32((c.r[3].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    st8((c.r[3].w[0] + 73u), static_cast<std::uint8_t>(c.r[4].w[0]));
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 38;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037D920:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D934u); set32(c.r[4], ld32((c.r[2].w[0] + 32u)));  if (depth < kMaxDepth) unit_009F(c, 232u, depth + 1u); else { c.pc = 0x0037DE40u; return; } if (c.pc != 0x0037D934u) [[unlikely]] return; }
L_0037D934:
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D940u); set32(c.r[4], ld32((c.r[2].w[0] + 36u)));  if (depth < kMaxDepth) unit_009F(c, 232u, depth + 1u); else { c.pc = 0x0037DE40u; return; } if (c.pc != 0x0037D940u) [[unlikely]] return; }
L_0037D940:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    st8((c.r[3].w[0] + 73u), static_cast<std::uint8_t>(0u));
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037D960:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00380000u);
    set32(c.r[6], c.r[2].w[0] - 9312u);
    set32(c.r[4], 0u + 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037D97Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009F(c, 230u, depth + 1u); else { c.pc = 0x0037DDD0u; return; } if (c.pc != 0x0037D97Cu) [[unlikely]] return; }
L_0037D97C:
    set32(c.r[6], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[1] = c.r[3].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[2].w[0] + 28u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 23640u)));
    set32(c.r[4], 0u + 1u);
    c.f[0] = c.r[6].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[2].w[0] + 32u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 23642u)));
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 36u), c.f[0]);
    st32((c.r[2].w[0] + 112u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 120u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 116u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    st32((c.r[3].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    st8((c.r[3].w[0] + 81u), static_cast<std::uint8_t>(c.r[4].w[0]));
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 29;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037D9F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 81u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037DA10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DA10u); set32(c.r[4], ld32((c.r[4].w[0] + 52u)));  if (depth < kMaxDepth) unit_009F(c, 232u, depth + 1u); else { c.pc = 0x0037DE40u; return; } if (c.pc != 0x0037DA10u) [[unlikely]] return; }
L_0037DA10:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    st8((c.r[3].w[0] + 81u), static_cast<std::uint8_t>(0u));
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037DA30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DA40u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_009E(c, 226u, depth + 1u); else { c.pc = 0x0037A040u; return; } if (c.pc != 0x0037DA40u) [[unlikely]] return; }
L_0037DA40:
    c.r[3].d[0] = c.r[2].d[0] ^ 0ull;
    set32(c.r[5], 0u + 44u);
    set32(c.r[2], 0u + 45u);
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[5].d[0] = c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00380000u);
    set32(c.r[6], c.r[2].w[0] - 4736u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DA64u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_009F(c, 230u, depth + 1u); else { c.pc = 0x0037DDD0u; return; } if (c.pc != 0x0037DA64u) [[unlikely]] return; }
L_0037DA64:
    set32(c.r[4], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    st32((c.r[2].w[0] + 28u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DA80u); st32((c.r[3].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009E(c, 224u, depth + 1u); else { c.pc = 0x0037A000u; return; } if (c.pc != 0x0037DA80u) [[unlikely]] return; }
L_0037DA80:
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00380000u);
    set32(c.r[5], c.r[16].w[0] + 46u);
    set32(c.r[6], c.r[2].w[0] - 4736u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DA98u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_009F(c, 230u, depth + 1u); else { c.pc = 0x0037DDD0u; return; } if (c.pc != 0x0037DA98u) [[unlikely]] return; }
L_0037DA98:
    set32(c.r[4], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.r[1].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    st32((c.r[2].w[0] + 28u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[3].w[0] + 48u), c.r[2].w[0]);  if (t) { goto L_0037DB00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DAC0u);  if (depth < kMaxDepth) unit_009E(c, 228u, depth + 1u); else { c.pc = 0x0037A070u; return; } if (c.pc != 0x0037DAC0u) [[unlikely]] return; }
L_0037DAC0:
    c.r[3].d[0] = c.r[2].d[0] ^ 0ull;
    set32(c.r[5], 0u + 50u);
    set32(c.r[2], 0u + 51u);
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[5].d[0] = c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00380000u);
    set32(c.r[6], c.r[2].w[0] - 4736u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DAE4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_009F(c, 230u, depth + 1u); else { c.pc = 0x0037DDD0u; return; } if (c.pc != 0x0037DAE4u) [[unlikely]] return; }
L_0037DAE4:
    set32(c.r[4], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    st32((c.r[2].w[0] + 28u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0037DB08; } }
L_0037DB00:
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    st32((c.r[2].w[0] + 52u), 0u);
    c.budget -= 2;
L_0037DB08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00380000u);
    set32(c.r[6], c.r[2].w[0] - 4736u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DB1Cu); set32(c.r[5], 0u + 52u);  if (depth < kMaxDepth) unit_009F(c, 230u, depth + 1u); else { c.pc = 0x0037DDD0u; return; } if (c.pc != 0x0037DB1Cu) [[unlikely]] return; }
L_0037DB1C:
    set32(c.r[4], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40990000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    st32((c.r[2].w[0] + 28u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    st32((c.r[3].w[0] + 56u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0037DB50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DB64u); set32(c.r[4], ld32((c.r[2].w[0] + 44u)));  if (depth < kMaxDepth) unit_009F(c, 232u, depth + 1u); else { c.pc = 0x0037DE40u; return; } if (c.pc != 0x0037DB64u) [[unlikely]] return; }
L_0037DB64:
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DB70u); set32(c.r[4], ld32((c.r[2].w[0] + 48u)));  if (depth < kMaxDepth) unit_009F(c, 232u, depth + 1u); else { c.pc = 0x0037DE40u; return; } if (c.pc != 0x0037DB70u) [[unlikely]] return; }
L_0037DB70:
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037DB88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DB88u);  if (depth < kMaxDepth) unit_009F(c, 232u, depth + 1u); else { c.pc = 0x0037DE40u; return; } if (c.pc != 0x0037DB88u) [[unlikely]] return; }
L_0037DB88:
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DB94u); set32(c.r[4], ld32((c.r[2].w[0] + 56u)));  if (depth < kMaxDepth) unit_009F(c, 232u, depth + 1u); else { c.pc = 0x0037DE40u; return; } if (c.pc != 0x0037DB94u) [[unlikely]] return; }
L_0037DB94:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037DBA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037DBC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DBC0u);  if (depth < kMaxDepth) unit_009F(c, 232u, depth + 1u); else { c.pc = 0x0037DE40u; return; } if (c.pc != 0x0037DBC0u) [[unlikely]] return; }
L_0037DBC0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037DBD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 185u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037DC40; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037DC08; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00380000u);
    set32(c.r[3], c.r[3].w[0] - 9104u);
    st32((c.r[4].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 5;
L_0037DC08:
    set32(c.r[5], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037DC24; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0037DC38; } }
L_0037DC24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DC2Cu);  if (depth < kMaxDepth) unit_009F(c, 232u, depth + 1u); else { c.pc = 0x0037DE40u; return; } if (c.pc != 0x0037DC2Cu) [[unlikely]] return; }
L_0037DC2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0037DC5C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0037DC38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0037DC58; } }
L_0037DC40:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037DC58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DC58u);  if (depth < kMaxDepth) unit_009D(c, 278u, depth + 1u); else { c.pc = 0x00376B70u; return; } if (c.pc != 0x0037DC58u) [[unlikely]] return; }
L_0037DC58:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0037DC5C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037DC70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80400000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[2].d[0] | 16448ull;
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[0] = c.r[2].w[0];
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DCA0u); c.f[12] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0037DCA0u) [[unlikely]] return; }
L_0037DCA0:
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DCB8u); c.f[12] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0037DCB8u) [[unlikely]] return; }
L_0037DCB8:
    set32(c.r[3], c.r[29].w[0] + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 65304ull;
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[3], c.r[29].w[0] + 56u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[3].w[0]);
    set32(c.r[3], c.r[29].w[0] + 60u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20376u), c.r[3].w[0]);
    set32(c.r[3], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 44u), c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 128u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[3].d[0] = c.r[2].d[0] | 316ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    set32(c.r[2], c.r[5].w[0] - 4u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[29].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DD3Cu); st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (depth < kMaxDepth) unit_001B(c, 207u, depth + 1u); else { c.pc = 0x0016FA40u; return; } if (c.pc != 0x0037DD3Cu) [[unlikely]] return; }
L_0037DD3C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0037DD50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0037DD88; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_0037DD7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));  if (t) { goto L_0037DD98; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0037DD7C:
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0037DD94; } }
L_0037DD88:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0037DD94:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.budget -= 1;
L_0037DD98:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037DDAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DDACu);  if (depth < kMaxDepth) unit_009F(c, 232u, depth + 1u); else { c.pc = 0x0037DE40u; return; } if (c.pc != 0x0037DDACu) [[unlikely]] return; }
L_0037DDAC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037DDC0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x001BC7D0u | kUnwind; return; } [[clang::musttail]] return unit_002F(c, 57u, depth); }
L_0037DDD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DE00u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x0037DE00u) [[unlikely]] return; }
L_0037DE00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037DE28; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[3], 0u + 19u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[16].w[0]);
    c.budget -= 8;
L_0037DE28:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0037DE40:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00303A20u | kUnwind; return; } [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_0037DE50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037DE78; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00380000u);
    set32(c.r[3], c.r[3].w[0] - 8528u);
    st32((c.r[4].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 5;
L_0037DE78:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0037DE9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DE90u);  if (depth < kMaxDepth) unit_009F(c, 232u, depth + 1u); else { c.pc = 0x0037DE40u; return; } if (c.pc != 0x0037DE90u) [[unlikely]] return; }
L_0037DE90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0037DEA4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0037DE9C:
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 2;
L_0037DEA4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037DEB0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[16], c.r[2].w[0] - 20416u);
    set32(c.r[6], ld32((c.r[28].w[0] - 26280u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65304ull;
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 152u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[17], ld32((c.r[28].w[0] - 24824u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + 144u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[3].w[0]);
    set32(c.r[2], c.r[29].w[0] + 176u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[2].w[0]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DF2Cu); c.f[12] = ld32((c.r[17].w[0] + 96u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0037DF2Cu) [[unlikely]] return; }
L_0037DF2C:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DF40u); c.f[12] = ld32((c.r[17].w[0] + 100u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0037DF40u) [[unlikely]] return; }
L_0037DF40:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 188u), 0u);
    st32((c.r[29].w[0] + 184u), 0u);
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[18], c.r[17].w[0] + 104u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DF6Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x0037DF6Cu) [[unlikely]] return; }
L_0037DF6C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[2].d[0] = c.r[2].d[0] | 32896ull;
    set32(c.r[22], c.r[29].w[0] + 196u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[22].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 112u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0037DFC8; } }
    c.f[0] = ld32((c.r[18].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DFACu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x0037DFACu) [[unlikely]] return; }
L_0037DFAC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[2].d[0] = c.r[2].d[0] | 16448ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[22].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u + 3u);
    c.budget -= 7;
L_0037DFC8:
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 128u)));
    set32(c.r[3], c.r[3].w[0] - 3u);
    st16((c.r[16].w[0] + 60u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DFE8u); st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 226u, depth + 1u); else { c.pc = 0x0037A040u; return; } if (c.pc != 0x0037DFE8u) [[unlikely]] return; }
L_0037DFE8:
    set32(c.r[18], 0u + 73u);
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037DFF8u); if (c.r[2].d[0] != 0) c.r[18].d[0] = c.r[3].d[0];  if (depth < kMaxDepth) unit_009E(c, 224u, depth + 1u); else { c.pc = 0x0037A000u; return; } if (c.pc != 0x0037DFF8u) [[unlikely]] return; }
L_0037DFF8:
    mmi::paddub(c.r[19], c.r[2], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[20], c.r[2].w[0] + 31440u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[21], c.r[2].w[0] + 31520u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 6;
L_0037E010:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0])));
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[6], c.r[29].w[0] + 164u);
    set32(c.r[3], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0]), c.r[4].w[0]);
    st32((c.r[29].w[0] + 144u), c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] << 5);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 2u)));
    set32(c.r[23], c.r[29].w[0] + 148u);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    st32((c.r[23].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[3], c.r[3].w[0] + 12u);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 116u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 24;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[29].w[0] + 192u);  if (t) { goto L_0037E07C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[22].w[0]);  if (t) { goto L_0037E080; } }
    set32(c.r[3], c.r[29].w[0] + 192u);
    c.budget -= 1;
L_0037E07C:
    st32((c.r[16].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 1;
L_0037E080:
    set32(c.r[3], 0u + 70u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[3].d[0];  if (t) { goto L_0037E0A0; } }
    c.r[3].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037E0A0; } }
    st32((c.r[16].w[0] + 36u), c.r[22].w[0]);
    c.budget -= 2;
L_0037E0A0:
    set32(c.r[4], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 79u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { goto L_0037E0CC; } }
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 31360u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 48u), c.r[2].w[0]);  if (t) { goto L_0037E128; } }
L_0037E0CC:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[17].d[0]) { set32(c.r[2], c.r[2].w[0] + 6u);  goto L_0037E0FC; }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[17].d[0];  if (t) { goto L_0037E0F8; } }
    set32(c.r[3], 0u + 70u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[2].w[0] << 3);  if (t) { goto L_0037E118; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 81u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037E114; } }
    c.budget -= 1;
L_0037E0F8:
    set32(c.r[2], c.r[2].w[0] + 6u);
    c.budget -= 1;
L_0037E0FC:
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 31360u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 48u), c.r[2].w[0]);  if (t) { goto L_0037E128; } }
L_0037E114:
    set32(c.r[3], c.r[2].w[0] << 3);
    c.budget -= 1;
L_0037E118:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 31360u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 4;
L_0037E128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E130u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x0037E130u) [[unlikely]] return; }
L_0037E130:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 78ll ? 1ull : 0ull;
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037E010u | kUnwind; return; } goto L_0037E010; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[3], c.r[2].w[0] + 110u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 110u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037E164; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0037E164:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[4], c.r[2].w[0] + 27184u);
    set32(c.r[6], 0u + 17u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 128u)));
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E188u); st16((c.r[16].w[0] + 60u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009F(c, 254u, depth + 1u); else { c.pc = 0x0037E310u; return; } if (c.pc != 0x0037E188u) [[unlikely]] return; }
L_0037E188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E190u);  if (depth < kMaxDepth) unit_009E(c, 224u, depth + 1u); else { c.pc = 0x0037A000u; return; } if (c.pc != 0x0037E190u) [[unlikely]] return; }
L_0037E190:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 32672u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 32688u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E1BCu); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_009F(c, 254u, depth + 1u); else { c.pc = 0x0037E310u; return; } if (c.pc != 0x0037E1BCu) [[unlikely]] return; }
L_0037E1BC:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 112u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037E2E0; } }
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[10], 0u + 1u);
    set32(c.r[9], c.r[29].w[0] + 144u);
    set32(c.r[8], c.r[29].w[0] + 192u);
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 128u)));
    set32(c.r[7], c.r[29].w[0] + 204u);
    set32(c.r[6], 0u - 2u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[11], c.r[11].w[0] - 3u);
    st16((c.r[16].w[0] + 60u), static_cast<std::uint16_t>(c.r[11].w[0]));
    st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st32((c.r[16].w[0] + 20u), c.r[9].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[8].w[0]);
    st32((c.r[16].w[0] + 40u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 144u), c.r[6].w[0]);
    st32((c.r[23].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] | 452ull;
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[3].w[0] + 104u));
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E238u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x0037E238u) [[unlikely]] return; }
L_0037E238:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E258u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 207u, depth + 1u); else { c.pc = 0x0016FA40u; return; } if (c.pc != 0x0037E258u) [[unlikely]] return; }
L_0037E258:
    set32(c.r[2], ld32((c.r[23].w[0])));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 85u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E26Cu); st32((c.r[23].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 207u, depth + 1u); else { c.pc = 0x0016FA40u; return; } if (c.pc != 0x0037E26Cu) [[unlikely]] return; }
L_0037E26C:
    set32(c.r[2], 0u - 2u);
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st32((c.r[23].w[0]), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E28Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 207u, depth + 1u); else { c.pc = 0x0016FA40u; return; } if (c.pc != 0x0037E28Cu) [[unlikely]] return; }
L_0037E28C:
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 450u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E2A0u); st32((c.r[29].w[0] + 144u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 207u, depth + 1u); else { c.pc = 0x0016FA40u; return; } if (c.pc != 0x0037E2A0u) [[unlikely]] return; }
L_0037E2A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].d[0] = c.r[2].d[0] | 448ull;
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 144u), 0u);
    st32((c.r[23].w[0]), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[3].w[0] + 104u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E2CCu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x0037E2CCu) [[unlikely]] return; }
L_0037E2CC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] << 24);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E2E0u); st32((c.r[29].w[0] + 192u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 207u, depth + 1u); else { c.pc = 0x0016FA40u; return; } if (c.pc != 0x0037E2E0u) [[unlikely]] return; }
L_0037E2E0:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0037E310:
    set32(c.r[29], c.r[29].w[0] - 208u);
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
    mmi::paddub(c.r[23], c.r[6], c.r[0]);
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E34Cu); mmi::paddub(c.r[20], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 224u, depth + 1u); else { c.pc = 0x0037A000u; return; } if (c.pc != 0x0037E34Cu) [[unlikely]] return; }
L_0037E34C:
    mmi::paddub(c.r[30], c.r[2], c.r[0]);
    set32(c.r[2], c.r[29].w[0] + 160u);
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 200u);
    st32((c.r[20].w[0] + 36u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65304ull;
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + 172u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[3].w[0] + 104u));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E398u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x0037E398u) [[unlikely]] return; }
L_0037E398:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[1].d[0] = 0ll < c.r[23].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_0037E530; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[2].d[0] = c.r[2].d[0] | 32896ull;
    c.r[22].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    c.r[2].d[0] = c.r[2].d[0] | 12336ull;
    c.r[18].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.r[2].d[0] = c.r[2].d[0] | 6168ull;
    c.r[17].d[0] = c.r[3].d[0] | 24704ull;
    c.r[19].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 10;
L_0037E3D4:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 9u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[4], c.r[2].w[0] + 31520u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 8u)));
    set32(c.r[2], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    st32((c.r[29].w[0] + 160u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 9u)));
    set32(c.r[4], c.r[3].w[0] + 31520u);
    set32(c.r[3], c.r[29].w[0] + 180u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    st32((c.r[29].w[0] + 164u), c.r[4].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[5], c.r[6].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 6u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 2u)));
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    c.budget -= 32;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_0037E45C; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0037E45C:
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    st32((c.r[20].w[0] + 48u), c.r[21].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 9u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 79u));
    c.budget -= 9;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], c.r[29].w[0] + 204u);  goto L_0037E4B4; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 110u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037E4A4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 109u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0037E4A4; } }
    st32((c.r[29].w[0] + 204u), c.r[22].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 200u), c.r[22].w[0]);  if (t) { goto L_0037E510; } }
L_0037E4A4:
    st32((c.r[29].w[0] + 204u), c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 200u), c.r[17].w[0]);  if (t) { goto L_0037E510; } }
    set32(c.r[3], c.r[29].w[0] + 204u);
    c.budget -= 1;
L_0037E4B4:
    st32((c.r[3].w[0]), c.r[18].w[0]);
    st32((c.r[29].w[0] + 200u), c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 112u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { mmi::paddub(c.r[4], c.r[20], c.r[0]);  goto L_0037E514; }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 9u)));
    set32(c.r[2], 0u + 70u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0037E4F0; } }
    c.r[2].d[0] = c.r[30].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037E4F0; } }
    st32((c.r[3].w[0]), c.r[19].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 200u), c.r[19].w[0]);  if (t) { goto L_0037E510; } }
L_0037E4F0:
    set32(c.r[2], ld32((c.r[4].w[0] + 116u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037E510; } }
    st32((c.r[3].w[0]), c.r[19].w[0]);
    st32((c.r[29].w[0] + 200u), c.r[19].w[0]);
    c.budget -= 3;
L_0037E510:
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 1;
L_0037E514:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E51Cu);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x0037E51Cu) [[unlikely]] return; }
L_0037E51C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037E3D4u | kUnwind; return; } goto L_0037E3D4; } }
    c.budget -= 1;
L_0037E530:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0037E560:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037E594; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00380000u);
    set32(c.r[3], c.r[3].w[0] - 6704u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 111u)));
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 8;
L_0037E594:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0037E5B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E5ACu);  if (depth < kMaxDepth) unit_009F(c, 232u, depth + 1u); else { c.pc = 0x0037DE40u; return; } if (c.pc != 0x0037E5ACu) [[unlikely]] return; }
L_0037E5AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0037E5C0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0037E5B8:
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 2;
L_0037E5C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037E5D0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[16], c.r[2].w[0] - 20416u);
    set32(c.r[6], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[2], c.r[29].w[0] + 96u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    set32(c.r[2], c.r[28].w[0] - 27088u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20376u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 124u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[2].d[0] | 65304ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 128u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] + 30912u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[6].w[0] + 12u)));
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + 11u);
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 42;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E678u); st32((c.r[29].w[0] + 108u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0037E678u) [[unlikely]] return; }
L_0037E678:
    set32(c.r[18], c.r[2].w[0] >> 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[2].d[0] | 255ull;
    set32(c.r[19], c.r[29].w[0] + 127u);
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[19].w[0]));
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0037E6A8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0037E6C0; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_0037E6A8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_0037E6C0:
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    c.f[0] = ld32((c.r[2].w[0] + 104u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E6D0u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x0037E6D0u) [[unlikely]] return; }
L_0037E6D0:
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_0037E6F8; } }
L_0037E6DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E6E4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 207u, depth + 1u); else { c.pc = 0x0016FA40u; return; } if (c.pc != 0x0037E6E4u) [[unlikely]] return; }
L_0037E6E4:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 22u);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 5;
L_0037E6F8:
    c.r[1].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0037E710; } }
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037E6DCu | kUnwind; return; } goto L_0037E6DC; } }
L_0037E710:
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 76u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037E738; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E72Cu); set32(c.r[4], c.r[2].w[0] + 30784u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0037E72Cu) [[unlikely]] return; }
L_0037E72C:
    set32(c.r[2], c.r[2].w[0] >> 1);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);  if (t) { goto L_0037E774; } }
L_0037E738:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E744u); set32(c.r[4], c.r[2].w[0] + 30528u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0037E744u) [[unlikely]] return; }
L_0037E744:
    set32(c.r[20], c.r[2].w[0] >> 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E754u); set32(c.r[4], c.r[2].w[0] + 30400u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0037E754u) [[unlikely]] return; }
L_0037E754:
    set32(c.r[2], c.r[2].w[0] >> 1);
    set32(c.r[20], c.r[20].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E768u); set32(c.r[4], c.r[2].w[0] + 30272u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0037E768u) [[unlikely]] return; }
L_0037E768:
    set32(c.r[2], c.r[2].w[0] >> 1);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_0037E774:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[2].d[0] | 59135ull;
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[19].w[0]));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0037E79C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0037E7B4; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_0037E79C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_0037E7B4:
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    c.f[0] = ld32((c.r[2].w[0] + 104u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E7C4u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x0037E7C4u) [[unlikely]] return; }
L_0037E7C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0037E7E8; } }
L_0037E7CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E7D4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 207u, depth + 1u); else { c.pc = 0x0016FA40u; return; } if (c.pc != 0x0037E7D4u) [[unlikely]] return; }
L_0037E7D4:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 22u);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 5;
L_0037E7E8:
    c.r[1].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);  if (t) { goto L_0037E804; } }
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037E7CCu | kUnwind; return; } goto L_0037E7CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 1;
L_0037E804:
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[19].w[0]));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0037E824; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0037E83C; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_0037E824:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_0037E83C:
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    c.f[0] = ld32((c.r[2].w[0] + 104u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E84Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x0037E84Cu) [[unlikely]] return; }
L_0037E84C:
    c.r[1].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0037E878; } }
L_0037E858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E860u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 207u, depth + 1u); else { c.pc = 0x0016FA40u; return; } if (c.pc != 0x0037E860u) [[unlikely]] return; }
L_0037E860:
    set32(c.r[4], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 22u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 96u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037E858u | kUnwind; return; } goto L_0037E858; } }
L_0037E878:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0037E8A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0037EA8C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[3].w[0] - 13312u);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0037C000u < 16384u) { entry = entries_009F[(t - 0x0037C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0037E8D8:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00380000u);
    set32(c.r[5], c.r[3].w[0] - 5440u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43200000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C00000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[16].w[0] + 168u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 84u), 0u);
    st32((c.r[16].w[0] + 116u), 0u);
    st32((c.r[16].w[0] + 112u), 0u);
    st32((c.r[16].w[0] + 120u), 0u);
    st32((c.r[16].w[0] + 32u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42000000u);
    st32((c.r[16].w[0] + 48u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43800000u);
    st32((c.r[16].w[0] + 64u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[4].w[0]);
    c.budget -= 19;
L_0037E924:
    c.f[1] = ld32((c.r[16].w[0] + 84u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[2] = c.r[3].w[0];
    st32((c.r[16].w[0] + 84u), c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 112u), c.f[0]);  if (t) { goto L_0037EA8C; } }
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 112u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[5], 0u + 60u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037E974u); st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0037E974u) [[unlikely]] return; }
L_0037E974:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));  if (t) { goto L_0037EA90; } }
L_0037E97C:
    c.f[1] = ld32((c.r[16].w[0] + 116u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[4].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 116u), c.f[0]);  if (t) { goto L_0037EA8C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 116u), c.r[4].w[0]);  if (t) { goto L_0037EA8C; } }
L_0037E9BC:
    c.f[1] = ld32((c.r[16].w[0] + 120u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    c.f[0] = c.r[3].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[5].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 120u), c.f[0]);  if (t) { goto L_0037EA8C; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u - 128u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 120u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 24824u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 123u)));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 123u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0037EA8C; } }
L_0037EA0C:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 123u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037EA8C; } }
    set32(c.r[3], c.r[6].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0037EA8C; } }
L_0037EA2C:
    c.f[1] = ld32((c.r[16].w[0] + 84u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 84u), c.f[0]);  if (t) { goto L_0037EA64; } }
    st32((c.r[16].w[0] + 84u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0037EA64:
    c.f[1] = ld32((c.r[16].w[0] + 84u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 116u), c.f[0]);  if (t) { goto L_0037EA8C; } }
L_0037EA80:
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EA8Cu); st8((c.r[2].w[0] + 123u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009F(c, 232u, depth + 1u); else { c.pc = 0x0037DE40u; return; } if (c.pc != 0x0037EA8Cu) [[unlikely]] return; }
L_0037EA8C:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.budget -= 1;
L_0037EA90:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 123u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037EAA4; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0037EAA4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0037EAC0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 32704u);
    ld128((c.r[2].w[0]) & ~15u, c.r[7]);
    set32(c.r[8], c.r[29].w[0] + 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[29].w[0] + 108u);
    st128((c.r[8].w[0]) & ~15u, c.r[7]);
    st32((c.r[1].w[0] - 20396u), c.r[8].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00E00000u);
    c.r[6].d[0] = c.r[2].d[0] | 640ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x60000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[17], c.r[29].w[0] + 111u);
    st32((c.r[29].w[0] + 104u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    st32((c.r[1].w[0] - 20380u), c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 25;
    { const bool t = c.r[2].sd[0] < 0; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0037EB30; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0037EB4C; } }
L_0037EB30:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_0037EB4C:
    c.f[0] = ld32((c.r[16].w[0] + 84u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EB58u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x0037EB58u) [[unlikely]] return; }
L_0037EB58:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 104u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20376u), c.r[2].w[0]);
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    set32(c.r[2], 0u + 14u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EB98u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 207u, depth + 1u); else { c.pc = 0x0016FA40u; return; } if (c.pc != 0x0037EB98u) [[unlikely]] return; }
L_0037EB98:
    c.f[0] = ld32((c.r[16].w[0] + 84u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0037ECD4; } }
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0037EC68; } }
    c.f[0] = ld32((c.r[16].w[0] + 116u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0037EC68; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 88u), c.f[0]);  if (t) { goto L_0037EC14; } }
    c.f[1] = ld32((c.r[16].w[0] + 116u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 92u), c.f[0]);  if (t) { goto L_0037EC1C; } }
L_0037EC14:
    c.f[0] = ld32((c.r[16].w[0] + 120u));
    st32((c.r[29].w[0] + 92u), c.f[0]);
    c.budget -= 2;
L_0037EC1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EC24u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0017(c, 238u, depth + 1u); else { c.pc = 0x0015E390u; return; } if (c.pc != 0x0037EC24u) [[unlikely]] return; }
L_0037EC24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EC2Cu); c.f[12] = ld32((c.r[29].w[0] + 92u));  if (depth < kMaxDepth) unit_0017(c, 232u, depth + 1u); else { c.pc = 0x0015E2A0u; return; } if (c.pc != 0x0037EC2Cu) [[unlikely]] return; }
L_0037EC2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43200000u);
    c.f[12] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42D20000u);
    c.f[13] = c.r[2].w[0];
    c.f[14] = 0u;
    set32(c.r[2], c.r[28].w[0] - 27080u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EC58u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0017(c, 240u, depth + 1u); else { c.pc = 0x0015E3B0u; return; } if (c.pc != 0x0037EC58u) [[unlikely]] return; }
L_0037EC58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EC68u);  if (depth < kMaxDepth) unit_0017(c, 232u, depth + 1u); else { c.pc = 0x0015E2A0u; return; } if (c.pc != 0x0037EC68u) [[unlikely]] return; }
L_0037EC68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EC70u); c.f[12] = ld32((c.r[16].w[0] + 32u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0037EC70u) [[unlikely]] return; }
L_0037EC70:
    st16((c.r[29].w[0] + 72u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EC7Cu); c.f[12] = ld32((c.r[16].w[0] + 36u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0037EC7Cu) [[unlikely]] return; }
L_0037EC7C:
    st16((c.r[29].w[0] + 74u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EC88u); c.f[12] = ld32((c.r[16].w[0] + 48u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0037EC88u) [[unlikely]] return; }
L_0037EC88:
    st16((c.r[29].w[0] + 76u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EC94u); c.f[12] = ld32((c.r[16].w[0] + 64u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0037EC94u) [[unlikely]] return; }
L_0037EC94:
    st16((c.r[29].w[0] + 78u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037ECA0u); c.f[12] = ld32((c.r[16].w[0] + 52u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0037ECA0u) [[unlikely]] return; }
L_0037ECA0:
    st16((c.r[29].w[0] + 80u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    set32(c.r[4], c.r[29].w[0] + 72u);
    set32(c.r[5], c.r[29].w[0] + 88u);
    set32(c.r[7], 0u + 3u);
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 116u));
    set32(c.r[8], 0u + 15u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[29].w[0] + 92u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 120u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037ECD4u); st32((c.r[29].w[0] + 96u), c.f[0]);  if (depth < kMaxDepth) unit_0037(c, 153u, depth + 1u); else { c.pc = 0x001DEB90u; return; } if (c.pc != 0x0037ECD4u) [[unlikely]] return; }
L_0037ECD4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0037ECF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037ED14u); set32(c.r[16], 0u + 1u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0037ED14u) [[unlikely]] return; }
L_0037ED14:
    set32(c.r[17], c.r[2].w[0] - 2u);
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] < 0; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_0037ED5C; } }
L_0037ED20:
    set32(c.r[18], c.r[19].w[0] + c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[2].w[0] - 13408u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037ED38u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 52u, depth + 1u); else { c.pc = 0x00118B60u; return; } if (c.pc != 0x0037ED38u) [[unlikely]] return; }
L_0037ED38:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] - 2u);  goto L_0037ED4C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_0037ED58; } }
    set32(c.r[17], c.r[17].w[0] - 2u);
    c.budget -= 1;
L_0037ED4C:
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] >= 0; st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037ED20u | kUnwind; return; } goto L_0037ED20; } }
L_0037ED58:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 1;
L_0037ED5C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0037ED80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037EDB4; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00380000u);
    set32(c.r[3], c.r[3].w[0] - 4624u);
    st32((c.r[4].w[0] + 168u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] - 44u);
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_0037EDB4:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0037EDD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EDCCu);  if (depth < kMaxDepth) unit_009F(c, 232u, depth + 1u); else { c.pc = 0x0037DE40u; return; } if (c.pc != 0x0037EDCCu) [[unlikely]] return; }
L_0037EDCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0037EDE0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0037EDD8:
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 2;
L_0037EDE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037EDF0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[16], c.r[2].w[0] - 20416u);
    set32(c.r[2], c.r[29].w[0] + 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], 0u + 36u);
    set32(c.r[18], c.r[29].w[0] + 84u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u + 48u);
    set32(c.r[17], ld32((c.r[28].w[0] - 24824u)));
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65304ull;
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[2].w[0]);
    c.f[12] = ld32((c.r[17].w[0] + 96u));
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EE68u); mmi::paddub(c.r[19], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0037EE68u) [[unlikely]] return; }
L_0037EE68:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EE7Cu); c.f[12] = ld32((c.r[17].w[0] + 100u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0037EE7Cu) [[unlikely]] return; }
L_0037EE7C:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 136u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 124u), 0u);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 120u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[2], 0u + 52u);
    c.budget -= 18;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[29].w[0] + 140u);  if (t) { goto L_0037F038; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 128u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[2], c.r[3].w[0] - 2u);
    st16((c.r[16].w[0] + 60u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26280u)));
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    c.f[0] = ld32((c.r[2].w[0] + 104u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EEF0u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x0037EEF0u) [[unlikely]] return; }
L_0037EEF0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    c.r[2].d[0] = c.r[2].d[0] | 12336ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[29].w[0] + 136u), c.r[2].w[0]);
    c.r[4].d[0] = ld8((c.r[19].w[0] + 10u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[2].w[0] + 32720u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[17], c.r[29].w[0] + 96u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 27056u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[29].w[0] + 80u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[19].w[0] + 10u));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    c.r[1].d[0] = c.r[2].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 25;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0037EF70; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + 12u);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 52u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0037EF88; } }
L_0037EF70:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 8u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 88u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 6;
L_0037EF88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EF90u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x0037EF90u) [[unlikely]] return; }
L_0037EF90:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[3].w[0] + 104u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037EFA8u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x0037EFA8u) [[unlikely]] return; }
L_0037EFA8:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[2].d[0] = c.r[2].d[0] | 32896ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[29].w[0] + 136u), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[19].w[0] + 10u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 32720u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    c.r[1].d[0] = c.r[2].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0037F00C; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 31368u);
    set32(c.r[3], c.r[3].w[0] + 64u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 48u), c.r[2].w[0]);  if (t) { goto L_0037F024; } }
L_0037F00C:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 31376u);
    set32(c.r[3], c.r[3].w[0] + 96u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 6;
L_0037F024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F02Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x0037F02Cu) [[unlikely]] return; }
L_0037F02C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_0037F130; } }
    set32(c.r[2], c.r[29].w[0] + 140u);
    c.budget -= 1;
L_0037F038:
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 128u)));
    set32(c.r[2], c.r[2].w[0] - 3u);
    st16((c.r[16].w[0] + 60u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    c.f[0] = ld32((c.r[2].w[0] + 104u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F064u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x0037F064u) [[unlikely]] return; }
L_0037F064:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[29].w[0] + 136u), c.r[2].w[0]);
    set32(c.r[2], 0u + 110u);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], 0u + 36u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F0A0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 207u, depth + 1u); else { c.pc = 0x0016FA40u; return; } if (c.pc != 0x0037F0A0u) [[unlikely]] return; }
L_0037F0A0:
    set32(c.r[2], 0u + 336u);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F0B0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 207u, depth + 1u); else { c.pc = 0x0016FA40u; return; } if (c.pc != 0x0037F0B0u) [[unlikely]] return; }
L_0037F0B0:
    set32(c.r[2], 0u + 110u);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], 0u + 35u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] | 228ull;
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F0D4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 207u, depth + 1u); else { c.pc = 0x0016FA40u; return; } if (c.pc != 0x0037F0D4u) [[unlikely]] return; }
L_0037F0D4:
    set32(c.r[2], 0u + 48u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F0E4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 207u, depth + 1u); else { c.pc = 0x0016FA40u; return; } if (c.pc != 0x0037F0E4u) [[unlikely]] return; }
L_0037F0E4:
    set32(c.r[2], 0u + 110u);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], 0u + 35u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000E0000u);
    c.r[2].d[0] = c.r[2].d[0] | 228ull;
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[3].w[0] + 104u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F118u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x0037F118u) [[unlikely]] return; }
L_0037F118:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] << 24);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F12Cu); st32((c.r[29].w[0] + 136u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 207u, depth + 1u); else { c.pc = 0x0016FA40u; return; } if (c.pc != 0x0037F12Cu) [[unlikely]] return; }
L_0037F12C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0037F130:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0037F150:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st32((c.r[1].w[0] - 28180u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st8((c.r[1].w[0] - 27132u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st16((c.r[1].w[0] - 27130u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[1].w[0] - 27128u), static_cast<std::uint16_t>(0u));  c.pc = t; return; }
L_0037F180:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24622u)));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.r[1].d[0] = 0ll < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_0037F208; } }
    c.r[1].d[0] = c.r[7].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[6], c.r[7].w[0] - 2u);  if (t) { goto L_0037F1D8; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.budget -= 2;
L_0037F1A8:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[5].d[0] | c.r[2].d[0];
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[4].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] << (c.r[4].w[0] & 31u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037F1A8u | kUnwind; return; } goto L_0037F1A8; } }
L_0037F1D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0037F1F8; } }
    set32(c.r[2], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.budget -= 1;
L_0037F1E4:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[5].d[0] | c.r[2].d[0];
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 5;
L_0037F1F8:
    c.r[2].d[0] = c.r[4].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] << (c.r[4].w[0] & 31u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037F1E4u | kUnwind; return; } goto L_0037F1E4; } }
    c.budget -= 1;
L_0037F208:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 27108u)));
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 65535ull;  c.pc = t; return; }
L_0037F230:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 6;
L_0037F248:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037F248u | kUnwind; return; } goto L_0037F248; } }
    set32(c.r[2], 0u + 130u);
    c.r[3].d[0] = ld16((c.r[29].w[0] + 38u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st8((c.r[1].w[0] - 28160u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st8((c.r[1].w[0] - 28159u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st8((c.r[1].w[0] - 28158u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 49u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st8((c.r[1].w[0] - 28157u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st8((c.r[1].w[0] - 28156u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[3].d[0] & 65280ull;
    set32(c.r[6], 0u + 8u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st8((c.r[1].w[0] - 28155u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st8((c.r[1].w[0] - 28154u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st8((c.r[1].w[0] - 28153u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st8((c.r[1].w[0] - 28152u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 255u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st8((c.r[1].w[0] - 28151u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st8((c.r[1].w[0] - 28150u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st8((c.r[1].w[0] - 28149u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[4], c.r[2].w[0] - 28148u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.budget -= 38;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F300u); set32(c.r[5], c.r[2].w[0] - 27096u);  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x0037F300u) [[unlikely]] return; }
L_0037F300:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[5], c.r[2].w[0] - 28160u);
    set32(c.r[6], 0u + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F314u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_00A0(c, 207u, depth + 1u); else { c.pc = 0x00381FA0u; return; } if (c.pc != 0x0037F314u) [[unlikely]] return; }
L_0037F314:
    set32(c.r[3], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0037F32C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0037F32C; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0037F32C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0037F340:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    set32(c.r[2], 0u + 4u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st8((c.r[1].w[0] - 28160u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[5].d[0] | 64ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st8((c.r[1].w[0] - 28159u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[5], c.r[2].w[0] - 28160u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st8((c.r[1].w[0] - 28158u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[2], c.r[2].w[0] - 28160u);
    st8((c.r[1].w[0] - 28157u), static_cast<std::uint8_t>(0u));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F38Cu); c.r[6].d[0] = ld8((c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A0(c, 207u, depth + 1u); else { c.pc = 0x00381FA0u; return; } if (c.pc != 0x0037F38Cu) [[unlikely]] return; }
L_0037F38C:
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[4], c.r[2].w[0] - 28156u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F3A4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0037F3A4u) [[unlikely]] return; }
L_0037F3A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[2], c.r[2].w[0] - 28160u);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0037F3C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0037F3D0; } }
L_0037F3C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F3CCu); set32(c.r[4], c.r[2].w[0] - 28160u);  if (depth < kMaxDepth) unit_00A0(c, 327u, depth + 1u); else { c.pc = 0x00382F90u; return; } if (c.pc != 0x0037F3CCu) [[unlikely]] return; }
L_0037F3CC:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0037F3D0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0037F3E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 27112u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24623u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;  c.pc = t; return; }
L_0037F400:
    c.r[5].d[0] = ld8((c.r[28].w[0] - 24816u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24624u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0037F488; } }
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[28].w[0] - 24816u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] + 31376u);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 26768u));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 26772u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[28].w[0] - 24820u));
    st16((c.r[5].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[1].w[0] - 27120u));
    st16((c.r[5].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 27120u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st32((c.r[1].w[0] - 27120u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 27112u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st8((c.r[1].w[0] - 27112u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 29;
L_0037F488:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037F490:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24624u)));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 24816u));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0037F5B0; } }
    set32(c.r[17], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[17].w[0] + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st8((c.r[1].w[0] - 28160u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[5].d[0] | 32ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st8((c.r[1].w[0] - 28159u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[4], c.r[2].w[0] - 28158u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[2].w[0] + 31376u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F4E8u); mmi::paddub(c.r[6], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x0037F4E8u) [[unlikely]] return; }
L_0037F4E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[3], c.r[17].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] - 28160u);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F504u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0037F504u) [[unlikely]] return; }
L_0037F504:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[5], c.r[2].w[0] - 28160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[2], c.r[2].w[0] - 28160u);
    c.r[6].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F520u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_00A0(c, 207u, depth + 1u); else { c.pc = 0x00381FA0u; return; } if (c.pc != 0x0037F520u) [[unlikely]] return; }
L_0037F520:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[3], 0u - 2u);  if (t) { goto L_0037F544; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 22976u)));
    set32(c.r[3], 0u - 33u);
    c.budget -= 5;
    if (c.r[4].d[0] == c.r[3].d[0]) { mmi::paddub(c.r[2], c.r[0], c.r[0]);  goto L_0037F564; }
    set32(c.r[3], 0u - 2u);
    c.budget -= 1;
L_0037F544:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0037F56C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 22976u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0037F56C; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0037F564:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_0037F5B8; } }
L_0037F56C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[3], c.r[3].w[0] - 28160u);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037F588; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0037F5B4; } }
L_0037F588:
    set32(c.r[5], ld32((c.r[28].w[0] - 24680u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[4], c.r[3].w[0] - 28160u);
    st8((c.r[28].w[0] - 24692u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 24816u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F5A8u); st32((c.r[28].w[0] - 24680u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A0(c, 327u, depth + 1u); else { c.pc = 0x00382F90u; return; } if (c.pc != 0x0037F5A8u) [[unlikely]] return; }
L_0037F5A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0037F5B4; } }
L_0037F5B0:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0037F5B4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0037F5B8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0037F5D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].d[0] = ld8((c.r[28].w[0] - 24692u));
    c.r[2].d[0] = c.r[2].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0037F6B4; } }
    set32(c.r[2], 0u + 4u);
    c.r[3].d[0] = ld16((c.r[28].w[0] - 24820u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st8((c.r[1].w[0] - 28160u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[5].d[0] | 112ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st8((c.r[1].w[0] - 28159u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[5], c.r[2].w[0] - 28160u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 8));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st8((c.r[1].w[0] - 28158u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[2], c.r[2].w[0] - 28160u);
    st8((c.r[1].w[0] - 28157u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F630u); c.r[6].d[0] = ld8((c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A0(c, 207u, depth + 1u); else { c.pc = 0x00381FA0u; return; } if (c.pc != 0x0037F630u) [[unlikely]] return; }
L_0037F630:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[3], 0u - 2u);  if (t) { goto L_0037F654; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 22976u)));
    set32(c.r[3], 0u - 33u);
    c.budget -= 5;
    if (c.r[4].d[0] == c.r[3].d[0]) { mmi::paddub(c.r[2], c.r[0], c.r[0]);  goto L_0037F674; }
    set32(c.r[3], 0u - 2u);
    c.budget -= 1;
L_0037F654:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0037F67C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 22976u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0037F67C; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0037F674:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0037F6B8; } }
L_0037F67C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[3], c.r[3].w[0] - 28160u);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037F698; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0037F6B4; } }
L_0037F698:
    set32(c.r[3], ld32((c.r[28].w[0] - 24680u)));
    st8((c.r[28].w[0] - 24692u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[28].w[0] - 24680u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0037F6B4; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0037F6B4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0037F6B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037F6C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 4u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st8((c.r[1].w[0] - 28160u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[5].d[0] | 16ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st8((c.r[1].w[0] - 28159u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[5], c.r[2].w[0] - 28160u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st8((c.r[1].w[0] - 28158u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[2], c.r[2].w[0] - 28160u);
    st8((c.r[1].w[0] - 28157u), static_cast<std::uint8_t>(0u));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F708u); c.r[6].d[0] = ld8((c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A0(c, 207u, depth + 1u); else { c.pc = 0x00381FA0u; return; } if (c.pc != 0x0037F708u) [[unlikely]] return; }
L_0037F708:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[3], c.r[3].w[0] - 28160u);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0037F728; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0037F728; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0037F728:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037F740:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 4u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st8((c.r[1].w[0] - 28160u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[5].d[0] | 16ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st8((c.r[1].w[0] - 28159u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st8((c.r[1].w[0] - 28158u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[5], c.r[2].w[0] - 28160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[2], c.r[2].w[0] - 28160u);
    st8((c.r[1].w[0] - 28157u), static_cast<std::uint8_t>(0u));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F78Cu); c.r[6].d[0] = ld8((c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A0(c, 207u, depth + 1u); else { c.pc = 0x00381FA0u; return; } if (c.pc != 0x0037F78Cu) [[unlikely]] return; }
L_0037F78C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[3], c.r[3].w[0] - 28160u);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0037F7AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0037F7AC; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0037F7AC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037F7C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[7].d[0] = ld8((c.r[28].w[0] - 24624u));
    c.r[6].d[0] = c.r[5].d[0] | 48ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[5], c.r[2].w[0] - 28160u);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 24708u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[2], c.r[7].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 4u);
    st8((c.r[1].w[0] - 28160u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st8((c.r[1].w[0] - 28159u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st8((c.r[1].w[0] - 28158u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[2], c.r[2].w[0] - 28160u);
    st8((c.r[1].w[0] - 28157u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F814u); c.r[6].d[0] = ld8((c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A0(c, 207u, depth + 1u); else { c.pc = 0x00381FA0u; return; } if (c.pc != 0x0037F814u) [[unlikely]] return; }
L_0037F814:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[3], c.r[3].w[0] - 28160u);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037F830; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0037F850; } }
L_0037F830:
    set32(c.r[4], ld32((c.r[28].w[0] - 24708u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[2].w[0] + 31216u);
    c.r[5].d[0] = ld16((c.r[28].w[0] - 24712u));
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 8;
L_0037F850:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037F860:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 6u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st8((c.r[1].w[0] - 28160u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[5].d[0] | 48ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st8((c.r[1].w[0] - 28159u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st8((c.r[1].w[0] - 28158u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st8((c.r[1].w[0] - 28157u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[5], c.r[2].w[0] - 28160u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st8((c.r[1].w[0] - 28156u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[2], c.r[2].w[0] - 28160u);
    st8((c.r[1].w[0] - 28155u), static_cast<std::uint8_t>(0u));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037F8BCu); c.r[6].d[0] = ld8((c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A0(c, 207u, depth + 1u); else { c.pc = 0x00381FA0u; return; } if (c.pc != 0x0037F8BCu) [[unlikely]] return; }
L_0037F8BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[3], c.r[3].w[0] - 28160u);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0037F8DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0037F8DC; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0037F8DC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037F8F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[3].w[0] + 31248u);
    st16((c.r[28].w[0] - 24720u), static_cast<std::uint16_t>(0u));
    st16((c.r[28].w[0] - 24724u), static_cast<std::uint16_t>(0u));
    st16((c.r[28].w[0] - 24728u), static_cast<std::uint16_t>(0u));
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x2E8B0000u);
    c.r[6].d[0] = c.r[4].d[0] | 41705ull;
    c.budget -= 8;
L_0037F910:
    c.r[11].d[0] = ld8((c.r[28].w[0] - 24724u));
    set32(c.r[5], 0u + 3u);
    set32(c.r[12], c.r[3].w[0] + 6u);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(255ll);
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    c.budget -= 6;
L_0037F928:
    c.r[4].d[0] = ld16((c.r[12].w[0]));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));  if (t) { goto L_0037F93C; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));
    c.budget -= 2;
L_0037F93C:
    c.r[4].d[0] = c.r[10].d[0] & 255ull;
    c.r[1].d[0] = c.r[9].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[11].d[0] & 255ull;  if (t) { goto L_0037F958; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = c.r[9].d[0] & 255ull;  if (t) { goto L_0037F968; } }
    c.r[4].d[0] = c.r[11].d[0] & 255ull;
    c.budget -= 1;
L_0037F958:
    c.r[1].d[0] = c.r[4].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[9].w[0] + 1u);  if (t) { goto L_0037F96C; } }
    c.r[11].d[0] = c.r[9].d[0] & 255ull;
    c.budget -= 1;
L_0037F968:
    set32(c.r[4], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_0037F96C:
    set32(c.r[8], c.r[8].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[4].d[0] = c.r[5].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[12], c.r[12].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037F928u | kUnwind; return; } goto L_0037F928; } }
    mmi::mult(c, 0, c.r[6].w[0], c.r[8].w[0]);
    set32(c.r[5], c.r[8].w[0] >> 31);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[5].d[0] = ld16((c.r[28].w[0] - 24728u));
    c.r[4].d[0] = ld16((c.r[3].w[0]));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0037F9C0; } }
    st16((c.r[28].w[0] - 24728u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 2;
L_0037F9C0:
    c.r[5].d[0] = ld16((c.r[28].w[0] - 24720u));
    c.r[4].d[0] = c.r[10].d[0] & 255ull;
    c.r[1].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0037F9D8; } }
    st16((c.r[28].w[0] - 24720u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 1;
L_0037F9D8:
    c.r[5].d[0] = ld16((c.r[28].w[0] - 24724u));
    c.r[4].d[0] = c.r[11].d[0] & 255ull;
    c.r[1].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_0037F9F4; }
    st16((c.r[28].w[0] - 24724u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 2;
L_0037F9F4:
    c.r[4].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037F910u | kUnwind; return; } goto L_0037F910; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037FA10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 4u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st8((c.r[1].w[0] - 28160u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[5].d[0] | 80ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st8((c.r[1].w[0] - 28159u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[5], c.r[2].w[0] - 28160u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st8((c.r[1].w[0] - 28158u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[2], c.r[2].w[0] - 28160u);
    st8((c.r[1].w[0] - 28157u), static_cast<std::uint8_t>(0u));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FA58u); c.r[6].d[0] = ld8((c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A0(c, 207u, depth + 1u); else { c.pc = 0x00381FA0u; return; } if (c.pc != 0x0037FA58u) [[unlikely]] return; }
L_0037FA58:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[3], c.r[3].w[0] - 28160u);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0037FA78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0037FA78; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0037FA78:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037FA90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 4u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st8((c.r[1].w[0] - 28160u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[5].d[0] | 80ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st8((c.r[1].w[0] - 28159u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st8((c.r[1].w[0] - 28158u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[5], c.r[2].w[0] - 28160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[2], c.r[2].w[0] - 28160u);
    st8((c.r[1].w[0] - 28157u), static_cast<std::uint8_t>(0u));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FADCu); c.r[6].d[0] = ld8((c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A0(c, 207u, depth + 1u); else { c.pc = 0x00381FA0u; return; } if (c.pc != 0x0037FADCu) [[unlikely]] return; }
L_0037FADC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[3], c.r[3].w[0] - 28160u);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0037FAFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0037FAFC; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0037FAFC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037FB10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FB20u); set32(c.r[4], 0u + 11u);  if (depth < kMaxDepth) unit_009F(c, 319u, depth + 1u); else { c.pc = 0x0037F150u; return; } if (c.pc != 0x0037FB20u) [[unlikely]] return; }
L_0037FB20:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 28176u)));
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 27106u)));
    set32(c.r[3], c.r[3].w[0] << (c.r[5].w[0] & 31u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 28184u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FB50u); st16((c.r[1].w[0] - 27106u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009F(c, 351u, depth + 1u); else { c.pc = 0x0037FA10u; return; } if (c.pc != 0x0037FB50u) [[unlikely]] return; }
L_0037FB50:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0037FB6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FB60u); set32(c.r[4], 0u + 10u);  if (depth < kMaxDepth) unit_009F(c, 319u, depth + 1u); else { c.pc = 0x0037F150u; return; } if (c.pc != 0x0037FB60u) [[unlikely]] return; }
L_0037FB60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0037FB6C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0037FB6C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037FB80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 28176u)));
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 27104u)));
    set32(c.r[3], c.r[3].w[0] << (c.r[5].w[0] & 31u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 28184u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FBB8u); st16((c.r[1].w[0] - 27104u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009F(c, 353u, depth + 1u); else { c.pc = 0x0037FA90u; return; } if (c.pc != 0x0037FBB8u) [[unlikely]] return; }
L_0037FBB8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0037FBD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FBC8u); set32(c.r[4], 0u + 10u);  if (depth < kMaxDepth) unit_009F(c, 319u, depth + 1u); else { c.pc = 0x0037F150u; return; } if (c.pc != 0x0037FBC8u) [[unlikely]] return; }
L_0037FBC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0037FBD4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0037FBD4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037FBE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    set32(c.r[5], c.r[2].w[0] - 28160u);
    set32(c.r[6], 0u + 1024u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FC08u); mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_009F(c, 370u, depth + 1u); else { c.pc = 0x0037FD10u; return; } if (c.pc != 0x0037FC08u) [[unlikely]] return; }
L_0037FC08:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0037FC18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_0037FCF8; } }
L_0037FC18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FC24u); set32(c.r[4], c.r[2].w[0] - 28160u);  if (depth < kMaxDepth) unit_00A0(c, 327u, depth + 1u); else { c.pc = 0x00382F90u; return; } if (c.pc != 0x0037FC24u) [[unlikely]] return; }
L_0037FC24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FC2Cu);  if (depth < kMaxDepth) unit_00A0(c, 331u, depth + 1u); else { c.pc = 0x00383080u; return; } if (c.pc != 0x0037FC2Cu) [[unlikely]] return; }
L_0037FC2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037FC58; } }
L_0037FC34:
    mmi::paddub(c.r[6], c.r[2], c.r[0]);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FC44u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_009F(c, 374u, depth + 1u); else { c.pc = 0x0037FE30u; return; } if (c.pc != 0x0037FC44u) [[unlikely]] return; }
L_0037FC44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FC4Cu);  if (depth < kMaxDepth) unit_00A0(c, 331u, depth + 1u); else { c.pc = 0x00383080u; return; } if (c.pc != 0x0037FC4Cu) [[unlikely]] return; }
L_0037FC4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037FC34u | kUnwind; return; } goto L_0037FC34; } }
    c.budget -= 1;
L_0037FC58:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 27108u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24622u)));
    c.r[6].d[0] = c.r[16].d[0] << 56;
    set32(c.r[5], c.r[28].w[0] - 24744u);
    set32(c.r[3], 0u + 1u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_0037FCA8; } }
L_0037FC7C:
    c.budget -= 2;
    if (c.r[6].d[0] == c.r[4].d[0]) { set32(c.r[5], c.r[5].w[0] + 2u);  goto L_0037FCA4; }
    set32(c.r[2], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037FCA0; } }
    c.r[2].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0037FCA0:
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.budget -= 1;
L_0037FCA4:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0037FCA8:
    c.r[2].d[0] = c.r[4].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037FC7Cu | kUnwind; return; } goto L_0037FC7C; } }
    c.r[2].d[0] = ld16((c.r[28].w[0] - 24748u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[28].w[0] - 24748u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[2].sd[0] < 1201ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0037FCD8; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 24732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0037FCD8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 24792u)));
    c.r[2].d[0] = ld16((c.r[28].w[0] - 24748u));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { mmi::paddub(c.r[2], c.r[0], c.r[0]);  goto L_0037FCF4; }
    st16((c.r[28].w[0] - 24792u), static_cast<std::uint16_t>(c.r[2].w[0]));
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 2;
L_0037FCF4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0037FCF8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0037FD10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    c.r[5].d[0] = c.r[6].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FD34u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0094(c, 119u, depth + 1u); else { c.pc = 0x003515C0u; return; } if (c.pc != 0x0037FD34u) [[unlikely]] return; }
L_0037FD34:
    set32(c.r[3], 0u - 1u);
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[3].d[0]; set32(c.r[2], 0u - 2u);  if (t) { goto L_0037FD58; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 22976u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[6], 0u + 1u);  if (t) { goto L_0037FD78; } }
    set32(c.r[2], 0u - 2u);
    c.budget -= 1;
L_0037FD58:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0037FD8C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 22976u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0037FD8C; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_0037FD78:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FD84u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0037FD84u) [[unlikely]] return; }
L_0037FD84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0037FE14; } }
L_0037FD8C:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[4], c.r[17].w[0] + c.r[16].w[0]);  if (t) { goto L_0037FDE8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 22976u)));
    set32(c.r[2], 0u - 97u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 20u);  if (t) { goto L_0037FDCC; } }
    set32(c.r[2], 0u - 98u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 19u);  if (t) { goto L_0037FDC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0037FDD8; } }
    set32(c.r[2], 0u + 19u);
    c.budget -= 1;
L_0037FDC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 24812u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0037FDDC; } }
    set32(c.r[2], 0u + 20u);
    c.budget -= 1;
L_0037FDCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 24812u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0037FDDC; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_0037FDD8:
    st8((c.r[28].w[0] - 24812u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0037FDDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_0037FE14; } }
    set32(c.r[4], c.r[17].w[0] + c.r[16].w[0]);
    c.budget -= 1;
L_0037FDE8:
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FDF4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0037FDF4u) [[unlikely]] return; }
L_0037FDF4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0037FE04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0037FE14; } }
L_0037FE04:
    set32(c.r[3], ld32((c.r[28].w[0] - 24688u)));
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[28].w[0] - 24688u), c.r[3].w[0]);
    c.budget -= 4;
L_0037FE14:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0037FE30:
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
    c.r[17].d[0] = ld8((c.r[6].w[0] + 1u));
    set32(c.r[3], c.r[28].w[0] - 24744u);
    c.r[7].d[0] = ld8((c.r[6].w[0]));
    mmi::paddub(c.r[20], c.r[6], c.r[0]);
    c.r[23].d[0] = ld16((c.r[28].w[0] - 24748u));
    set32(c.r[2], 0u + 144u);
    c.r[16].d[0] = c.r[17].d[0] & 15ull;
    set32(c.r[19], c.r[16].w[0] << 1);
    set32(c.r[18], c.r[3].w[0] + c.r[19].w[0]);
    c.r[30].d[0] = ld16((c.r[18].w[0]));
    c.r[6].d[0] = c.r[17].d[0] & 240ull;
    c.r[6].d[0] = c.r[6].d[0] & 65535ull;
    mmi::paddub(c.r[22], c.r[4], c.r[0]);
    mmi::paddub(c.r[21], c.r[5], c.r[0]);
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 28;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; st16((c.r[28].w[0] - 24748u), static_cast<std::uint16_t>(0u));  if (t) { [[clang::musttail]] return unit_00A0(c, 26u, depth); } }
    set32(c.r[2], 0u + 112u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; mmi::paddub(c.r[2], c.r[17], c.r[0]);  if (t) { [[clang::musttail]] return unit_00A0(c, 29u, depth); } }
    set32(c.r[2], 0u + 80u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_00A0(c, 22u, depth); } }
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[7].d[0] & 65535ull;  if (t) { [[clang::musttail]] return unit_00A0(c, 15u, depth); } }
    set32(c.r[2], 0u + 64u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_00A0(c, 8u, depth); } }
    set32(c.r[2], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0037FFC0; } }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0037FF78; } }
    set32(c.r[2], 0u + 96u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; set32(c.r[5], c.r[20].w[0] + 2u);  if (t) { goto L_0037FF0C; } }
    set32(c.r[2], 0u + 240u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_00A0(c, 28u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u - 2u);  if (t) { [[clang::musttail]] return unit_00A0(c, 28u, depth); } }
    set32(c.r[5], c.r[20].w[0] + 2u);
    c.budget -= 1;
L_0037FF0C:
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FF18u); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x0037FF18u) [[unlikely]] return; }
L_0037FF18:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 170u));
    set32(c.r[2], 0u + 12816u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037FF54; } }
    set32(c.r[2], 0u + 12560u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[6], c.r[29].w[0] + 168u);  if (t) { goto L_0037FF40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_00A0(c, 28u, depth); } }
    set32(c.r[6], c.r[29].w[0] + 168u);
    c.budget -= 1;
L_0037FF40:
    mmi::paddub(c.r[4], c.r[22], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FF4Cu); mmi::paddub(c.r[5], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_009F(c, 323u, depth + 1u); else { c.pc = 0x0037F230u; return; } if (c.pc != 0x0037FF4Cu) [[unlikely]] return; }
L_0037FF4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 12560u);  if (t) { [[clang::musttail]] return unit_00A0(c, 28u, depth); } }
L_0037FF54:
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[30].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24736u)));
    mmi::paddub(c.r[17], c.r[2], c.r[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 24732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[28].w[0] - 24748u), static_cast<std::uint16_t>(c.r[23].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 24736u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { [[clang::musttail]] return unit_00A0(c, 28u, depth); } }
L_0037FF78:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037FF8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FF8Cu);  if (depth < kMaxDepth) unit_009F(c, 342u, depth + 1u); else { c.pc = 0x0037F740u; return; } if (c.pc != 0x0037FF8Cu) [[unlikely]] return; }
L_0037FF8C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 27108u)));
    c.r[4].d[0] = c.r[16].d[0] << 48;
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    st16((c.r[1].w[0] - 27108u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AB0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 27108u)));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 24780u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { [[clang::musttail]] return unit_00A0(c, 28u, depth); } }
L_0037FFC0:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0037FFE4; } }
    c.r[7].d[0] = ld8((c.r[20].w[0] + 3u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037FFD8u); c.r[6].d[0] = c.r[16].d[0] & 255ull;  if (depth < kMaxDepth) unit_009F(c, 346u, depth + 1u); else { c.pc = 0x0037F860u; return; } if (c.pc != 0x0037FFD8u) [[unlikely]] return; }
    goto L_0037FFD8;
L_0037FFD4:
    c.r[6].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 1;
L_0037FFD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_00A0(c, 28u, depth); } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0037FFE4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_00A0(c, 28u, depth); } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 4u));
    c.r[2].d[0] = c.r[21].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_00A0(c, 28u, depth); } }
    [[clang::musttail]] return unit_00A0(c, 1u, depth);
}

}
