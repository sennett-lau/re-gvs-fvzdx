#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0095[4096] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 6, 0, 0,
    7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 33, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0,
    44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 64, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 80, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0,
    94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0,
    0, 0, 0, 0, 0, 103, 0, 104, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 107, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0,
    0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 114, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0,
    116, 0, 117, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 121, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0,
    0, 0, 0, 0, 0, 0, 124, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0,
    130, 0, 131, 0, 132, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136,
    0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0,
    141, 0, 0, 0, 0, 0, 142, 0, 143, 0, 144, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 149, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0,
    0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0,
    0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 171, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 178, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 188, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0,
    0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0,
    198, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 202,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0,
    0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0,
    0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0,
    226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0,
    0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0,
    0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0,
    0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 261,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 265, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0, 272, 0, 0, 0, 0,
    273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0,
    279, 0, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0,
    0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 291,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0,
    302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0,
    0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0,
    0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0,
    0, 0, 0, 0, 312, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 319, 0, 0,
    0, 0, 0, 0, 0, 320, 0, 321, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0,
    0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0,
    328, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 332, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 335, 0, 336, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 339, 0, 340, 0, 0, 0, 0, 0, 0, 0,
    341, 0, 342, 0, 0, 0, 0, 0, 0, 0, 343, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 346, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 347, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 350, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 351, 0, 0, 352, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 355, 0, 0,
    0, 0, 0, 356, 0, 0, 357, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 360, 0, 0,
    0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0,
    0, 368, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0,
    0, 382, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0,
    0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0,
    0, 398, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 406, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0,
    0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 415, 0, 0, 0,
    416, 0, 0, 0, 417, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0,
};

void unit_0095(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00354000;
    case 2u: goto L_0035400C;
    case 3u: goto L_00354040;
    case 4u: goto L_00354048;
    case 5u: goto L_0035406C;
    case 6u: goto L_00354074;
    case 7u: goto L_00354080;
    case 8u: goto L_003540C8;
    case 9u: goto L_003540E0;
    case 10u: goto L_00354138;
    case 11u: goto L_0035416C;
    case 12u: goto L_003541C0;
    case 13u: goto L_003541C4;
    case 14u: goto L_003541E0;
    case 15u: goto L_00354214;
    case 16u: goto L_00354240;
    case 17u: goto L_00354280;
    case 18u: goto L_003542A0;
    case 19u: goto L_003542D0;
    case 20u: goto L_0035432C;
    case 21u: goto L_00354340;
    case 22u: goto L_00354354;
    case 23u: goto L_00354368;
    case 24u: goto L_00354378;
    case 25u: goto L_003543C0;
    case 26u: goto L_003543F8;
    case 27u: goto L_00354428;
    case 28u: goto L_0035443C;
    case 29u: goto L_0035445C;
    case 30u: goto L_00354478;
    case 31u: goto L_00354520;
    case 32u: goto L_0035455C;
    case 33u: goto L_00354564;
    case 34u: goto L_00354598;
    case 35u: goto L_003545AC;
    case 36u: goto L_003545C8;
    case 37u: goto L_003545D4;
    case 38u: goto L_00354610;
    case 39u: goto L_003546AC;
    case 40u: goto L_003546C0;
    case 41u: goto L_00354710;
    case 42u: goto L_003547CC;
    case 43u: goto L_003547EC;
    case 44u: goto L_00354800;
    case 45u: goto L_00354818;
    case 46u: goto L_00354830;
    case 47u: goto L_00354898;
    case 48u: goto L_003548AC;
    case 49u: goto L_003548C0;
    case 50u: goto L_003548D4;
    case 51u: goto L_003548E8;
    case 52u: goto L_003548FC;
    case 53u: goto L_00354954;
    case 54u: goto L_0035495C;
    case 55u: goto L_0035498C;
    case 56u: goto L_003549A0;
    case 57u: goto L_003549C4;
    case 58u: goto L_00354A14;
    case 59u: goto L_00354A28;
    case 60u: goto L_00354A64;
    case 61u: goto L_00354A90;
    case 62u: goto L_00354A98;
    case 63u: goto L_00354AC0;
    case 64u: goto L_00354ACC;
    case 65u: goto L_00354AD4;
    case 66u: goto L_00354AF4;
    case 67u: goto L_00354B34;
    case 68u: goto L_00354B54;
    case 69u: goto L_00354B5C;
    case 70u: goto L_00354B90;
    case 71u: goto L_00354B98;
    case 72u: goto L_00354BC0;
    case 73u: goto L_00354BF4;
    case 74u: goto L_00354BFC;
    case 75u: goto L_00354C60;
    case 76u: goto L_00354CA0;
    case 77u: goto L_00354D18;
    case 78u: goto L_00354D3C;
    case 79u: goto L_00354D5C;
    case 80u: goto L_00354D78;
    case 81u: goto L_00354DA0;
    case 82u: goto L_00354DC0;
    case 83u: goto L_00354DC8;
    case 84u: goto L_00354DDC;
    case 85u: goto L_00354DF8;
    case 86u: goto L_00354E20;
    case 87u: goto L_00354E40;
    case 88u: goto L_00354E5C;
    case 89u: goto L_00354E78;
    case 90u: goto L_00354EA0;
    case 91u: goto L_00354EC0;
    case 92u: goto L_00354EE0;
    case 93u: goto L_00354EF0;
    case 94u: goto L_00354F00;
    case 95u: goto L_00354F38;
    case 96u: goto L_00354F7C;
    case 97u: goto L_00354FAC;
    case 98u: goto L_00354FBC;
    case 99u: goto L_00354FD0;
    case 100u: goto L_0035500C;
    case 101u: goto L_00355044;
    case 102u: goto L_00355070;
    case 103u: goto L_00355094;
    case 104u: goto L_0035509C;
    case 105u: goto L_003550A4;
    case 106u: goto L_003550C4;
    case 107u: goto L_003550CC;
    case 108u: goto L_003550D4;
    case 109u: goto L_003550E4;
    case 110u: goto L_003550F8;
    case 111u: goto L_00355118;
    case 112u: goto L_00355134;
    case 113u: goto L_0035514C;
    case 114u: goto L_00355154;
    case 115u: goto L_0035515C;
    case 116u: goto L_00355180;
    case 117u: goto L_00355188;
    case 118u: goto L_00355190;
    case 119u: goto L_003551B0;
    case 120u: goto L_003551B8;
    case 121u: goto L_003551C0;
    case 122u: goto L_003551C8;
    case 123u: goto L_003551F8;
    case 124u: goto L_00355218;
    case 125u: goto L_00355220;
    case 126u: goto L_00355228;
    case 127u: goto L_0035524C;
    case 128u: goto L_00355254;
    case 129u: goto L_0035525C;
    case 130u: goto L_00355280;
    case 131u: goto L_00355288;
    case 132u: goto L_00355290;
    case 133u: goto L_003552A0;
    case 134u: goto L_003552B0;
    case 135u: goto L_003552C0;
    case 136u: goto L_003552FC;
    case 137u: goto L_00355304;
    case 138u: goto L_0035533C;
    case 139u: goto L_00355344;
    case 140u: goto L_0035535C;
    case 141u: goto L_00355380;
    case 142u: goto L_00355398;
    case 143u: goto L_003553A0;
    case 144u: goto L_003553A8;
    case 145u: goto L_003553B0;
    case 146u: goto L_003553E8;
    case 147u: goto L_003553F0;
    case 148u: goto L_0035542C;
    case 149u: goto L_00355434;
    case 150u: goto L_00355440;
    case 151u: goto L_00355454;
    case 152u: goto L_00355470;
    case 153u: goto L_00355494;
    case 154u: goto L_003554EC;
    case 155u: goto L_00355504;
    case 156u: goto L_0035551C;
    case 157u: goto L_00355530;
    case 158u: goto L_00355538;
    case 159u: goto L_00355568;
    case 160u: goto L_003555A4;
    case 161u: goto L_003555E4;
    case 162u: goto L_00355618;
    case 163u: goto L_0035563C;
    case 164u: goto L_00355668;
    case 165u: goto L_003556CC;
    case 166u: goto L_00355708;
    case 167u: goto L_00355710;
    case 168u: goto L_00355744;
    case 169u: goto L_00355754;
    case 170u: goto L_0035576C;
    case 171u: goto L_00355778;
    case 172u: goto L_003557B4;
    case 173u: goto L_00355810;
    case 174u: goto L_00355858;
    case 175u: goto L_00355890;
    case 176u: goto L_003558D8;
    case 177u: goto L_003558E8;
    case 178u: goto L_003558F8;
    case 179u: goto L_00355920;
    case 180u: goto L_00355960;
    case 181u: goto L_00355990;
    case 182u: goto L_003559C0;
    case 183u: goto L_003559D4;
    case 184u: goto L_003559F4;
    case 185u: goto L_00355A60;
    case 186u: goto L_00355AB0;
    case 187u: goto L_00355AD8;
    case 188u: goto L_00355AE0;
    case 189u: goto L_00355B70;
    case 190u: goto L_00355B90;
    case 191u: goto L_00355BA0;
    case 192u: goto L_00355BB0;
    case 193u: goto L_00355BC4;
    case 194u: goto L_00355BE8;
    case 195u: goto L_00355C28;
    case 196u: goto L_00355C40;
    case 197u: goto L_00355C78;
    case 198u: goto L_00355C80;
    case 199u: goto L_00355C88;
    case 200u: goto L_00355CA4;
    case 201u: goto L_00355CF0;
    case 202u: goto L_00355CFC;
    case 203u: goto L_00355D2C;
    case 204u: goto L_00355D90;
    case 205u: goto L_00355DB8;
    case 206u: goto L_00355E10;
    case 207u: goto L_00355E54;
    case 208u: goto L_00355E70;
    case 209u: goto L_00355EBC;
    case 210u: goto L_00355EF8;
    case 211u: goto L_00355F54;
    case 212u: goto L_00355F68;
    case 213u: goto L_00355F90;
    case 214u: goto L_00355FB0;
    case 215u: goto L_00355FF8;
    case 216u: goto L_00356010;
    case 217u: goto L_00356080;
    case 218u: goto L_003560B4;
    case 219u: goto L_003560D0;
    case 220u: goto L_003560E0;
    case 221u: goto L_003560F8;
    case 222u: goto L_00356110;
    case 223u: goto L_00356128;
    case 224u: goto L_00356154;
    case 225u: goto L_00356160;
    case 226u: goto L_00356180;
    case 227u: goto L_003561A0;
    case 228u: goto L_003561CC;
    case 229u: goto L_003561D8;
    case 230u: goto L_00356204;
    case 231u: goto L_00356238;
    case 232u: goto L_0035624C;
    case 233u: goto L_00356270;
    case 234u: goto L_00356284;
    case 235u: goto L_003562A8;
    case 236u: goto L_003562B4;
    case 237u: goto L_003562D4;
    case 238u: goto L_003562F4;
    case 239u: goto L_00356320;
    case 240u: goto L_00356334;
    case 241u: goto L_00356354;
    case 242u: goto L_00356374;
    case 243u: goto L_003563A0;
    case 244u: goto L_003563AC;
    case 245u: goto L_003563CC;
    case 246u: goto L_003563EC;
    case 247u: goto L_00356418;
    case 248u: goto L_0035643C;
    case 249u: goto L_00356470;
    case 250u: goto L_0035649C;
    case 251u: goto L_003564B0;
    case 252u: goto L_003564D0;
    case 253u: goto L_003564F8;
    case 254u: goto L_0035650C;
    case 255u: goto L_00356534;
    case 256u: goto L_00356548;
    case 257u: goto L_00356570;
    case 258u: goto L_00356584;
    case 259u: goto L_003565AC;
    case 260u: goto L_003565DC;
    case 261u: goto L_003565FC;
    case 262u: goto L_00356640;
    case 263u: goto L_003566B0;
    case 264u: goto L_003566C8;
    case 265u: goto L_003566D4;
    case 266u: goto L_003566F0;
    case 267u: goto L_00356760;
    case 268u: goto L_0035678C;
    case 269u: goto L_003567B0;
    case 270u: goto L_003567C4;
    case 271u: goto L_003567E0;
    case 272u: goto L_003567EC;
    case 273u: goto L_00356800;
    case 274u: goto L_0035681C;
    case 275u: goto L_00356830;
    case 276u: goto L_00356844;
    case 277u: goto L_00356858;
    case 278u: goto L_0035686C;
    case 279u: goto L_00356880;
    case 280u: goto L_00356894;
    case 281u: goto L_003568A4;
    case 282u: goto L_003568CC;
    case 283u: goto L_003568E0;
    case 284u: goto L_003568F4;
    case 285u: goto L_0035691C;
    case 286u: goto L_00356940;
    case 287u: goto L_00356978;
    case 288u: goto L_00356998;
    case 289u: goto L_003569B8;
    case 290u: goto L_003569DC;
    case 291u: goto L_003569FC;
    case 292u: goto L_00356A28;
    case 293u: goto L_00356A4C;
    case 294u: goto L_00356A54;
    case 295u: goto L_00356A70;
    case 296u: goto L_00356AD4;
    case 297u: goto L_00356B04;
    case 298u: goto L_00356B1C;
    case 299u: goto L_00356B38;
    case 300u: goto L_00356B54;
    case 301u: goto L_00356B68;
    case 302u: goto L_00356B80;
    case 303u: goto L_00356C00;
    case 304u: goto L_00356C28;
    case 305u: goto L_00356C3C;
    case 306u: goto L_00356C60;
    case 307u: goto L_00356C84;
    case 308u: goto L_00356D70;
    case 309u: goto L_00356D94;
    case 310u: goto L_00356DB4;
    case 311u: goto L_00356DF4;
    case 312u: goto L_00356E10;
    case 313u: goto L_00356E18;
    case 314u: goto L_00356E40;
    case 315u: goto L_00356E54;
    case 316u: goto L_00356E84;
    case 317u: goto L_00356EBC;
    case 318u: goto L_00356EEC;
    case 319u: goto L_00356EF4;
    case 320u: goto L_00356F14;
    case 321u: goto L_00356F1C;
    case 322u: goto L_00356F28;
    case 323u: goto L_00356F38;
    case 324u: goto L_00356F6C;
    case 325u: goto L_00356F88;
    case 326u: goto L_00356FC0;
    case 327u: goto L_00356FE8;
    case 328u: goto L_00357000;
    case 329u: goto L_00357008;
    case 330u: goto L_00357034;
    case 331u: goto L_0035704C;
    case 332u: goto L_00357090;
    case 333u: goto L_00357098;
    case 334u: goto L_003570C0;
    case 335u: goto L_003570CC;
    case 336u: goto L_003570D4;
    case 337u: goto L_003570F4;
    case 338u: goto L_00357138;
    case 339u: goto L_00357158;
    case 340u: goto L_00357160;
    case 341u: goto L_00357180;
    case 342u: goto L_00357188;
    case 343u: goto L_003571A8;
    case 344u: goto L_003571B0;
    case 345u: goto L_003571D8;
    case 346u: goto L_003571E0;
    case 347u: goto L_0035720C;
    case 348u: goto L_00357224;
    case 349u: goto L_00357268;
    case 350u: goto L_00357270;
    case 351u: goto L_00357298;
    case 352u: goto L_003572A4;
    case 353u: goto L_003572AC;
    case 354u: goto L_003572E0;
    case 355u: goto L_003572F4;
    case 356u: goto L_0035730C;
    case 357u: goto L_00357318;
    case 358u: goto L_00357320;
    case 359u: goto L_0035736C;
    case 360u: goto L_00357374;
    case 361u: goto L_00357394;
    case 362u: goto L_003573B0;
    case 363u: goto L_00357408;
    case 364u: goto L_0035743C;
    case 365u: goto L_00357460;
    case 366u: goto L_003574A0;
    case 367u: goto L_003574F4;
    case 368u: goto L_00357504;
    case 369u: goto L_00357514;
    case 370u: goto L_00357550;
    case 371u: goto L_003575A8;
    case 372u: goto L_003575D4;
    case 373u: goto L_00357630;
    case 374u: goto L_0035763C;
    case 375u: goto L_0035764C;
    case 376u: goto L_00357698;
    case 377u: goto L_003576C4;
    case 378u: goto L_0035770C;
    case 379u: goto L_00357748;
    case 380u: goto L_00357770;
    case 381u: goto L_003577F0;
    case 382u: goto L_00357804;
    case 383u: goto L_00357810;
    case 384u: goto L_00357890;
    case 385u: goto L_003578D0;
    case 386u: goto L_00357968;
    case 387u: goto L_003579C0;
    case 388u: goto L_003579E0;
    case 389u: goto L_00357A20;
    case 390u: goto L_00357A90;
    case 391u: goto L_00357AC4;
    case 392u: goto L_00357AD0;
    case 393u: goto L_00357AFC;
    case 394u: goto L_00357B70;
    case 395u: goto L_00357B90;
    case 396u: goto L_00357BD4;
    case 397u: goto L_00357BF4;
    case 398u: goto L_00357C04;
    case 399u: goto L_00357C20;
    case 400u: goto L_00357C90;
    case 401u: goto L_00357CA0;
    case 402u: goto L_00357CD0;
    case 403u: goto L_00357CE0;
    case 404u: goto L_00357D50;
    case 405u: goto L_00357D60;
    case 406u: goto L_00357D90;
    case 407u: goto L_00357DA0;
    case 408u: goto L_00357DD0;
    case 409u: goto L_00357DEC;
    case 410u: goto L_00357E10;
    case 411u: goto L_00357E3C;
    case 412u: goto L_00357E78;
    case 413u: goto L_00357F10;
    case 414u: goto L_00357F60;
    case 415u: goto L_00357F70;
    case 416u: goto L_00357F80;
    case 417u: goto L_00357F90;
    case 418u: goto L_00357FA0;
    case 419u: goto L_00357FC0;
    case 420u: goto L_00357FD0;
    case 421u: goto L_00357FF0;
    default: bad_entry(c, 0x00354000u); return;
    }
L_00354000:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035400Cu); set32(c.r[4], c.r[2].w[0] << 10);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x0035400Cu) [[unlikely]] return; }
L_0035400C:
    st32((c.r[16].w[0] + 116u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003541C0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u + 63u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[28].w[0] - 25176u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5508u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 9;
L_00354040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354048u);  if (depth < kMaxDepth) unit_0094(c, 216u, depth + 1u); else { c.pc = 0x00352820u; return; } if (c.pc != 0x00354048u) [[unlikely]] return; }
L_00354048:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00354060; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 4;
L_00354060:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035406Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x0035406Cu) [[unlikely]] return; }
L_0035406C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354074u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x00354074u) [[unlikely]] return; }
L_00354074:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[17], c.r[2].w[0] + 17216u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 3;
L_00354080:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[2] = ld32((c.r[1].w[0] + 17204u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[3] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[14] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[0] = ld32((c.r[1].w[0] + 17212u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[12] = fp::add(c.f[3], c.f[2]);
    c.facc = fp::add(c.f[14], c.f[0]);
    c.f[0] = c.r[16].w[0];
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003540C8u); c.f[13] = fp::add(c.facc, fp::mul(c.f[1], c.f[0]));  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x003540C8u) [[unlikely]] return; }
L_003540C8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00354080u | kUnwind; return; } goto L_00354080; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003541C0; } }
L_003540E0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0035411C; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 1u);  goto L_00354104; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003541C0; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_00354104:
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 116u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[2], 0u + 12u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
L_0035411C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 1365u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354138u); mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]); c.r[4].d[0] = c.lo.d[0];  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x00354138u) [[unlikely]] return; }
L_00354138:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.f[1] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[2], 0u + 1365u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035416Cu); mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]); c.r[4].d[0] = c.lo.d[0];  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x0035416Cu) [[unlikely]] return; }
L_0035416C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 116u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003541C0; } }
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5509u));
    c.budget -= 9;
    if (c.r[3].d[0] == c.r[2].d[0]) { mmi::paddub(c.r[4], c.r[16], c.r[0]);  goto L_003541B8; }
    st8((c.r[4].w[0] + 5508u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 2;
L_003541B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003541C0u);  if (depth < kMaxDepth) unit_009D(c, 278u, depth + 1u); else { c.pc = 0x00376B70u; return; } if (c.pc != 0x003541C0u) [[unlikely]] return; }
L_003541C0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_003541C4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003541E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[5], 0u + 255u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00350000u);
    set32(c.r[6], c.r[2].w[0] + 16176u);
    st8((c.r[4].w[0] + 5509u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], 0u + 10u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354214u); st8((c.r[2].w[0] + 5508u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x00354214u) [[unlikely]] return; }
L_00354214:
    set32(c.r[3], 0u + 15u);
    st8((c.r[2].w[0] + 285u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[28].w[0] - 27328u));
    st32((c.r[2].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 27324u));
    st32((c.r[2].w[0] + 36u), c.f[0]);
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00354240:
    c.r[2].d[0] = c.r[4].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[28].w[0] - 27320u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[21] = c.f[12];
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[4], 0u + 2u);
    c.f[20] = c.f[13];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354280u); set32(c.r[6], c.r[2].w[0] + 26960u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x00354280u) [[unlikely]] return; }
L_00354280:
    st32((c.r[2].w[0] + 32u), c.f[21]);
    st32((c.r[2].w[0] + 36u), c.f[20]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003542A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 17248u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { set32(c.r[4], ld32((c.r[2].w[0])));  [[clang::musttail]] return unit_009E(c, 32u, depth); }
L_003542D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[5], 0u + 3u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0035465C; } }
    set32(c.r[6], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_003544C4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003543D0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00354314; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_003546FC; } }
L_00354314:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00354378; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035432Cu); st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 283u, depth + 1u); else { c.pc = 0x00376BE0u; return; } if (c.pc != 0x0035432Cu) [[unlikely]] return; }
L_0035432C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354340u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x00354340u) [[unlikely]] return; }
L_00354340:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354354u); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x00354354u) [[unlikely]] return; }
L_00354354:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354368u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x00354368u) [[unlikely]] return; }
L_00354368:
    set32(c.r[5], 0u + 20u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354378u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 29u, depth + 1u); else { c.pc = 0x00378400u; return; } if (c.pc != 0x00354378u) [[unlikely]] return; }
L_00354378:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003546F8; } }
    c.r[4].d[0] = ld8((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00350000u);
    set32(c.r[6], c.r[2].w[0] + 18192u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 2u);
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003543C0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x003543C0u) [[unlikely]] return; }
L_003543C0:
    set32(c.r[3], 0u + 2u);
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 285u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003546F8; } }
L_003543D0:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00354480; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 32u);  if (t) { goto L_003543F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003546F8; } }
    set32(c.r[4], 0u + 32u);
    c.budget -= 1;
L_003543F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003543F8u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x003543F8u) [[unlikely]] return; }
L_003543F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 64u);  if (t) { goto L_00354434; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 16u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 11u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], 0u + 4u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354428u); st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00354428u) [[unlikely]] return; }
L_00354428:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003546F8; } }
    set32(c.r[4], 0u + 64u);
    c.budget -= 1;
L_00354434:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035443Cu);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x0035443Cu) [[unlikely]] return; }
L_0035443C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 13u);  if (t) { goto L_0035446C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 13u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00354460; } }
    set32(c.r[5], 0u + 54u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035445Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0035445Cu) [[unlikely]] return; }
L_0035445C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00354460:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003546F8; } }
    set32(c.r[4], c.r[16].w[0] + 13u);
    c.budget -= 1;
L_0035446C:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354478u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_009D(c, 305u, depth + 1u); else { c.pc = 0x00377240u; return; } if (c.pc != 0x00354478u) [[unlikely]] return; }
L_00354478:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003546F8; } }
L_00354480:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003546F8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 13u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003544AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_003544B8; } }
L_003544AC:
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_003544B8:
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 11u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003546F8; } }
L_003544C4:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00354610; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_003545DC; } }
    c.budget -= 2;
    if (c.r[4].d[0] == c.r[6].d[0]) { set32(c.r[4], c.r[16].w[0] + 10u);  goto L_00354554; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00354528; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], c.r[4].w[0] + 1u);  if (t) { goto L_00354504; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003546F8; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_00354504:
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 32u);
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[16].w[0] + 10u);
    set32(c.r[4], 0u + 27u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354520u); st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 201u, depth + 1u); else { c.pc = 0x00352570u; return; } if (c.pc != 0x00354520u) [[unlikely]] return; }
L_00354520:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003546F8; } }
L_00354528:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003546F8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003546F8; } }
    set32(c.r[4], c.r[16].w[0] + 10u);
    c.budget -= 1;
L_00354554:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035455Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_009D(c, 305u, depth + 1u); else { c.pc = 0x00377240u; return; } if (c.pc != 0x0035455Cu) [[unlikely]] return; }
L_0035455C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354564u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x00354564u) [[unlikely]] return; }
L_00354564:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 64u);  if (t) { goto L_003545A4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], 0u + 16u);
    set32(c.r[5], 0u + 4u);
    st8((c.r[3].w[0] + 5511u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354598u); st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00354598u) [[unlikely]] return; }
L_00354598:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003546F8; } }
    set32(c.r[4], 0u + 64u);
    c.budget -= 1;
L_003545A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003545ACu);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x003545ACu) [[unlikely]] return; }
L_003545AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003546F8; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 27u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003545C8u); st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x003545C8u) [[unlikely]] return; }
L_003545C8:
    set32(c.r[5], 0u + 54u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003545D4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x003545D4u) [[unlikely]] return; }
L_003545D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003546F8; } }
L_003545DC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00354610; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[2], 0u + 12u);
    set32(c.r[4], 0u + 27u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354610u); st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x00354610u) [[unlikely]] return; }
L_00354610:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003546F8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 10u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00354650; } }
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003546F8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00354650:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003546F8; } }
L_0035465C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003546EC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003546C0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_0035468C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003546F8; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0035468C:
    set32(c.r[5], 0u + 20u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 13u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_003546B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003546ACu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 30u, depth + 1u); else { c.pc = 0x00378410u; return; } if (c.pc != 0x003546ACu) [[unlikely]] return; }
L_003546AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));  if (t) { goto L_003546C4; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_003546B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003546C0u);  if (depth < kMaxDepth) unit_009E(c, 30u, depth + 1u); else { c.pc = 0x00378410u; return; } if (c.pc != 0x003546C0u) [[unlikely]] return; }
L_003546C0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_003546C4:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003546F8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003546F8; } }
L_003546EC:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 13u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { goto L_003546FC; } }
L_003546F8:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_003546FC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00354710:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[3], 0u + 2u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 285u));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00354740; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_0035481C; } }
L_00354740:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 13u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x432C0000u);  if (t) { goto L_0035475C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC32C0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 32u), c.r[3].w[0]);  if (t) { goto L_00354760; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x432C0000u);
    c.budget -= 1;
L_0035475C:
    st32((c.r[17].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 1;
L_00354760:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_003547A4; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] + 1u);  goto L_00354784; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00354818; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00354784:
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3300000u);
    st32((c.r[17].w[0] + 36u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 40u), c.r[3].w[0]);  if (t) { goto L_00354818; } }
L_003547A4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_003547F8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_003547C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00354818; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_003547C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003547CCu);  if (depth < kMaxDepth) unit_009D(c, 297u, depth + 1u); else { c.pc = 0x00376EC0u; return; } if (c.pc != 0x003547CCu) [[unlikely]] return; }
L_003547CC:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 11u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00354818; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003547ECu); st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x003547ECu) [[unlikely]] return; }
L_003547EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00354818; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_003547F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354800u);  if (depth < kMaxDepth) unit_009D(c, 299u, depth + 1u); else { c.pc = 0x00376F50u; return; } if (c.pc != 0x00354800u) [[unlikely]] return; }
L_00354800:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 11u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00354818; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354818u); st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x00354818u) [[unlikely]] return; }
L_00354818:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0035481C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00354830:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[2], 0u + 3u);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00354C28; } }
    set32(c.r[6], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[6].d[0];  if (t) { goto L_00354A38; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0035492C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00354878; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00354C88; } }
L_00354878:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003548FC; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354898u); st8((c.r[16].w[0] + 11u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009D(c, 283u, depth + 1u); else { c.pc = 0x00376BE0u; return; } if (c.pc != 0x00354898u) [[unlikely]] return; }
L_00354898:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003548ACu); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x003548ACu) [[unlikely]] return; }
L_003548AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003548C0u); set32(c.r[5], 0u + 21u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x003548C0u) [[unlikely]] return; }
L_003548C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003548D4u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x003548D4u) [[unlikely]] return; }
L_003548D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00350000u);
    set32(c.r[6], c.r[2].w[0] + 19616u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003548E8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x003548E8u) [[unlikely]] return; }
L_003548E8:
    set32(c.r[5], 0u + 20u);
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003548FCu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 29u, depth + 1u); else { c.pc = 0x00378400u; return; } if (c.pc != 0x003548FCu) [[unlikely]] return; }
L_003548FC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00354C84; } }
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00354C84; } }
L_0035492C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003549D0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 10u);  if (t) { goto L_0035494C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00354C84; } }
    set32(c.r[4], c.r[16].w[0] + 10u);
    c.budget -= 1;
L_0035494C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354954u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_009D(c, 305u, depth + 1u); else { c.pc = 0x00377240u; return; } if (c.pc != 0x00354954u) [[unlikely]] return; }
L_00354954:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035495Cu); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x0035495Cu) [[unlikely]] return; }
L_0035495C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 64u);  if (t) { goto L_00354998; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 16u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 11u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], 0u + 4u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035498Cu); st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0035498Cu) [[unlikely]] return; }
L_0035498C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00354C84; } }
    set32(c.r[4], 0u + 64u);
    c.budget -= 1;
L_00354998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003549A0u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x003549A0u) [[unlikely]] return; }
L_003549A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00354C84; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 10u));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00354C84; } }
    set32(c.r[5], 0u + 54u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003549C4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x003549C4u) [[unlikely]] return; }
L_003549C4:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00354C84; } }
L_003549D0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00354C84; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 10u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00354C84; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] - 26608u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00354000u < 16384u) { entry = entries_0095[(t - 0x00354000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00354A14:
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00354C84; } }
L_00354A28:
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00354C84; } }
L_00354A38:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00354C84; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] - 26640u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00354000u < 16384u) { entry = entries_0095[(t - 0x00354000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00354A64:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 32u);
    set32(c.r[4], 0u + 39u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 11u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[16].w[0] + 12u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354A90u); st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 201u, depth + 1u); else { c.pc = 0x00352570u; return; } if (c.pc != 0x00354A90u) [[unlikely]] return; }
L_00354A90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00354C84; } }
L_00354A98:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00354C84; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00354C84; } }
L_00354AC0:
    set32(c.r[4], c.r[16].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354ACCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_009D(c, 305u, depth + 1u); else { c.pc = 0x00377240u; return; } if (c.pc != 0x00354ACCu) [[unlikely]] return; }
L_00354ACC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354AD4u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x00354AD4u) [[unlikely]] return; }
L_00354AD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 64u);  if (t) { goto L_00354B2C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354AF4u); st8((c.r[2].w[0] + 5511u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00354AF4u) [[unlikely]] return; }
L_00354AF4:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 12u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_00354B18; } }
    set32(c.r[2], 0u + 5u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 16u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00354C84; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_00354B18:
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00354C84; } }
    set32(c.r[4], 0u + 64u);
    c.budget -= 1;
L_00354B2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354B34u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x00354B34u) [[unlikely]] return; }
L_00354B34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00354C84; } }
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 54u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354B54u); st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00354B54u) [[unlikely]] return; }
L_00354B54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00354C84; } }
L_00354B5C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00354C84; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[2], 0u + 32u);
    set32(c.r[4], 0u + 39u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354B90u); st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x00354B90u) [[unlikely]] return; }
L_00354B90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00354C84; } }
L_00354B98:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00354C84; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00354C84; } }
L_00354BC0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00354C84; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[2], 0u + 32u);
    set32(c.r[4], 0u + 39u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354BF4u); st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x00354BF4u) [[unlikely]] return; }
L_00354BF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00354C84; } }
L_00354BFC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00354C84; } }
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00354C84; } }
L_00354C28:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00354C60; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_00354C4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00354C84; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00354C4C:
    set32(c.r[5], 0u + 20u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354C60u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 30u, depth + 1u); else { c.pc = 0x00378410u; return; } if (c.pc != 0x00354C60u) [[unlikely]] return; }
L_00354C60:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00354C84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[16].w[0] + 10u));  if (t) { goto L_00354C88; } }
L_00354C84:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00354C88:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00354CA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_00354D64; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00354D18; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_00354CE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_00354D88; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00354CE4:
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[17].w[0] + 32u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F990000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    st32((c.r[17].w[0] + 112u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354D18u); st32((c.r[17].w[0] + 116u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x00354D18u) [[unlikely]] return; }
L_00354D18:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 10u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 17344u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354D3Cu); st32((c.r[17].w[0] + 36u), c.f[0]);  if (depth < kMaxDepth) unit_009D(c, 297u, depth + 1u); else { c.pc = 0x00376EC0u; return; } if (c.pc != 0x00354D3Cu) [[unlikely]] return; }
L_00354D3C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 11u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00354D84; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354D5Cu); st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x00354D5Cu) [[unlikely]] return; }
L_00354D5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00354D84; } }
L_00354D64:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 11u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00354D80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354D78u);  if (depth < kMaxDepth) unit_009D(c, 299u, depth + 1u); else { c.pc = 0x00376F50u; return; } if (c.pc != 0x00354D78u) [[unlikely]] return; }
L_00354D78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00354D84; } }
L_00354D80:
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00354D84:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00354D88:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00354DA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2u));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354DC0u); st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x00354DC0u) [[unlikely]] return; }
L_00354DC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354DC8u);  if (depth < kMaxDepth) unit_009D(c, 283u, depth + 1u); else { c.pc = 0x00376BE0u; return; } if (c.pc != 0x00354DC8u) [[unlikely]] return; }
L_00354DC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00350000u);
    set32(c.r[6], c.r[2].w[0] + 24080u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354DDCu); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x00354DDCu) [[unlikely]] return; }
L_00354DDC:
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    st8((c.r[2].w[0] + 285u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00350000u);
    set32(c.r[6], c.r[2].w[0] + 24080u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354DF8u); set32(c.r[5], 0u + 15u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x00354DF8u) [[unlikely]] return; }
L_00354DF8:
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    st8((c.r[2].w[0] + 285u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 6u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00354E2C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00350000u);
    set32(c.r[6], c.r[2].w[0] + 24080u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354E20u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x00354E20u) [[unlikely]] return; }
L_00354E20:
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 285u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00354E48; } }
L_00354E2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00350000u);
    set32(c.r[6], c.r[2].w[0] + 24080u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354E40u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x00354E40u) [[unlikely]] return; }
L_00354E40:
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    st8((c.r[2].w[0] + 285u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00354E48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00350000u);
    set32(c.r[6], c.r[2].w[0] + 24080u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354E5Cu); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x00354E5Cu) [[unlikely]] return; }
L_00354E5C:
    set32(c.r[4], 0u + 1u);
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    st8((c.r[2].w[0] + 285u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00350000u);
    set32(c.r[6], c.r[2].w[0] + 24080u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354E78u); set32(c.r[5], 0u + 17u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x00354E78u) [[unlikely]] return; }
L_00354E78:
    set32(c.r[4], 0u + 1u);
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    st8((c.r[2].w[0] + 285u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 6u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00354EB0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00350000u);
    set32(c.r[6], c.r[2].w[0] + 24080u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354EA0u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x00354EA0u) [[unlikely]] return; }
L_00354EA0:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 285u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00354ECC; } }
L_00354EB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00350000u);
    set32(c.r[6], c.r[2].w[0] + 24080u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354EC0u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x00354EC0u) [[unlikely]] return; }
L_00354EC0:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    st8((c.r[2].w[0] + 285u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00354ECC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00350000u);
    set32(c.r[6], c.r[2].w[0] + 24176u);
    set32(c.r[5], 0u + 34u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354EE0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x00354EE0u) [[unlikely]] return; }
L_00354EE0:
    set32(c.r[5], 0u + 20u);
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354EF0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 29u, depth + 1u); else { c.pc = 0x00378400u; return; } if (c.pc != 0x00354EF0u) [[unlikely]] return; }
L_00354EF0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00354F00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00355800; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[3].w[0] - 26368u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00354000u < 16384u) { entry = entries_0095[(t - 0x00354000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00354F38:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 4u));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00355014; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00354F74; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_00354F68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00355804; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00354F68:
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00355800; } }
L_00354F74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354F7Cu);  if (depth < kMaxDepth) unit_009E(c, 18u, depth + 1u); else { c.pc = 0x003782D0u; return; } if (c.pc != 0x00354F7Cu) [[unlikely]] return; }
L_00354F7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00354FB4; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 4u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 16u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], 0u + 4u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354FACu); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00354FACu) [[unlikely]] return; }
L_00354FAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00355800; } }
L_00354FB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354FBCu);  if (depth < kMaxDepth) unit_009E(c, 19u, depth + 1u); else { c.pc = 0x00378310u; return; } if (c.pc != 0x00354FBCu) [[unlikely]] return; }
L_00354FBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00355004; } }
    set32(c.r[5], 0u + 54u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354FD0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00354FD0u) [[unlikely]] return; }
L_00354FD0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 7u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00354FF8; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00355800; } }
L_00354FF8:
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00355800; } }
L_00355004:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035500Cu); c.r[4].d[0] = ld8((c.r[16].w[0] + 8u));  if (depth < kMaxDepth) unit_0095(c, 251u, depth + 1u); else { c.pc = 0x003564B0u; return; } if (c.pc != 0x0035500Cu) [[unlikely]] return; }
L_0035500C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00355800; } }
L_00355014:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00355800; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00355800; } }
L_00355044:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8u));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00355800; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] - 26416u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00354000u < 16384u) { entry = entries_0095[(t - 0x00354000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00355070:
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[6], c.r[2].w[0] - 31888u);
    set32(c.r[7], 0u + 11u);
    set32(c.r[8], 0u + 4u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355094u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 67u, depth + 1u); else { c.pc = 0x003788B0u; return; } if (c.pc != 0x00355094u) [[unlikely]] return; }
L_00355094:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035509Cu);  if (depth < kMaxDepth) unit_009E(c, 95u, depth + 1u); else { c.pc = 0x00378F00u; return; } if (c.pc != 0x0035509Cu) [[unlikely]] return; }
L_0035509C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00355800; } }
L_003550A4:
    set32(c.r[8], 0u + 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[6], c.r[2].w[0] - 31504u);
    set32(c.r[7], 0u + 62u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[8].w[0]));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003550C4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 67u, depth + 1u); else { c.pc = 0x003788B0u; return; } if (c.pc != 0x003550C4u) [[unlikely]] return; }
L_003550C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003550CCu);  if (depth < kMaxDepth) unit_009E(c, 95u, depth + 1u); else { c.pc = 0x00378F00u; return; } if (c.pc != 0x003550CCu) [[unlikely]] return; }
L_003550CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00355800; } }
L_003550D4:
    set32(c.r[2], 0u + 3u);
    set32(c.r[4], c.r[28].w[0] - 25172u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003550E4u); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0095(c, 182u, depth + 1u); else { c.pc = 0x003559C0u; return; } if (c.pc != 0x003550E4u) [[unlikely]] return; }
L_003550E4:
    set32(c.r[4], c.r[28].w[0] - 25172u);
    set32(c.r[6], 0u + 4u);
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003550F8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x003550F8u) [[unlikely]] return; }
L_003550F8:
    c.r[2].d[0] = c.r[16].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00355120; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[28].w[0] - 25172u);
    set32(c.r[5], c.r[2].w[0] - 26488u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355118u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x00355118u) [[unlikely]] return; }
L_00355118:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[28].w[0] - 25172u);  if (t) { goto L_00355138; } }
L_00355120:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[28].w[0] - 25172u);
    set32(c.r[5], c.r[2].w[0] - 26480u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355134u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x00355134u) [[unlikely]] return; }
L_00355134:
    set32(c.r[6], c.r[28].w[0] - 25172u);
    c.budget -= 1;
L_00355138:
    set32(c.r[7], 0u + 2u);
    set32(c.r[8], 0u + 4u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035514Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 67u, depth + 1u); else { c.pc = 0x003788B0u; return; } if (c.pc != 0x0035514Cu) [[unlikely]] return; }
L_0035514C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355154u);  if (depth < kMaxDepth) unit_009E(c, 95u, depth + 1u); else { c.pc = 0x00378F00u; return; } if (c.pc != 0x00355154u) [[unlikely]] return; }
L_00355154:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00355800; } }
L_0035515C:
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[6], c.r[2].w[0] - 31376u);
    set32(c.r[7], 0u + 7u);
    set32(c.r[8], 0u + 4u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355180u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 67u, depth + 1u); else { c.pc = 0x003788B0u; return; } if (c.pc != 0x00355180u) [[unlikely]] return; }
L_00355180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355188u);  if (depth < kMaxDepth) unit_009E(c, 95u, depth + 1u); else { c.pc = 0x00378F00u; return; } if (c.pc != 0x00355188u) [[unlikely]] return; }
L_00355188:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00355800; } }
L_00355190:
    set32(c.r[8], 0u + 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[6], c.r[2].w[0] - 31366u);
    set32(c.r[7], 0u + 110u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[8].w[0]));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003551B0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 67u, depth + 1u); else { c.pc = 0x003788B0u; return; } if (c.pc != 0x003551B0u) [[unlikely]] return; }
L_003551B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003551B8u);  if (depth < kMaxDepth) unit_009E(c, 95u, depth + 1u); else { c.pc = 0x00378F00u; return; } if (c.pc != 0x003551B8u) [[unlikely]] return; }
L_003551B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00355800; } }
L_003551C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003551C8u);  if (depth < kMaxDepth) unit_0095(c, 262u, depth + 1u); else { c.pc = 0x00356640u; return; } if (c.pc != 0x003551C8u) [[unlikely]] return; }
L_003551C8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 5u);  if (t) { goto L_003551EC; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00355800; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 1;
L_003551EC:
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00355800; } }
L_003551F8:
    set32(c.r[8], 0u + 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[6], c.r[2].w[0] - 31440u);
    set32(c.r[7], 0u + 32u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[8].w[0]));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355218u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 67u, depth + 1u); else { c.pc = 0x003788B0u; return; } if (c.pc != 0x00355218u) [[unlikely]] return; }
L_00355218:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355220u);  if (depth < kMaxDepth) unit_009E(c, 95u, depth + 1u); else { c.pc = 0x00378F00u; return; } if (c.pc != 0x00355220u) [[unlikely]] return; }
L_00355220:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00355800; } }
L_00355228:
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[6], c.r[2].w[0] - 31632u);
    set32(c.r[7], 0u + 127u);
    set32(c.r[8], 0u + 1u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035524Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 67u, depth + 1u); else { c.pc = 0x003788B0u; return; } if (c.pc != 0x0035524Cu) [[unlikely]] return; }
L_0035524C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355254u);  if (depth < kMaxDepth) unit_009E(c, 95u, depth + 1u); else { c.pc = 0x00378F00u; return; } if (c.pc != 0x00355254u) [[unlikely]] return; }
L_00355254:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00355800; } }
L_0035525C:
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[6], c.r[2].w[0] - 31760u);
    set32(c.r[7], 0u + 11u);
    set32(c.r[8], 0u + 4u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355280u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 67u, depth + 1u); else { c.pc = 0x003788B0u; return; } if (c.pc != 0x00355280u) [[unlikely]] return; }
L_00355280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355288u);  if (depth < kMaxDepth) unit_009E(c, 95u, depth + 1u); else { c.pc = 0x00378F00u; return; } if (c.pc != 0x00355288u) [[unlikely]] return; }
L_00355288:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00355800; } }
L_00355290:
    set32(c.r[3], 0u + 4u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00355800; } }
L_003552A0:
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00355800; } }
L_003552B0:
    set32(c.r[3], 0u + 6u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00355800; } }
L_003552C0:
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 7u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003552DC; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003552E0; } }
L_003552DC:
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003552E0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 7u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 7u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00355800; } }
L_003552FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355304u);  if (depth < kMaxDepth) unit_009E(c, 95u, depth + 1u); else { c.pc = 0x00378F00u; return; } if (c.pc != 0x00355304u) [[unlikely]] return; }
L_00355304:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[3], 0u - 1u);  if (t) { goto L_00355480; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8u));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00355470; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] - 26464u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00354000u < 16384u) { entry = entries_0095[(t - 0x00354000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0035533C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355344u); set32(c.r[4], c.r[28].w[0] - 25172u);  if (depth < kMaxDepth) unit_0095(c, 182u, depth + 1u); else { c.pc = 0x003559C0u; return; } if (c.pc != 0x00355344u) [[unlikely]] return; }
L_00355344:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[28].w[0] - 25172u);
    set32(c.r[6], 0u + 4u);
    st8((c.r[1].w[0] - 31238u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035535Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0035535Cu) [[unlikely]] return; }
L_0035535C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 31238u)));
    c.r[2].d[0] = c.r[6].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00355388; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[28].w[0] - 25172u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355380u); set32(c.r[5], c.r[2].w[0] - 26488u);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x00355380u) [[unlikely]] return; }
L_00355380:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00355474; } }
L_00355388:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[28].w[0] - 25172u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355398u); set32(c.r[5], c.r[2].w[0] - 26480u);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x00355398u) [[unlikely]] return; }
L_00355398:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00355470; } }
L_003553A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003553A8u);  if (depth < kMaxDepth) unit_0095(c, 269u, depth + 1u); else { c.pc = 0x003567B0u; return; } if (c.pc != 0x003553A8u) [[unlikely]] return; }
L_003553A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00355470; } }
L_003553B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] - 31504u));
    set32(c.r[3], 0u + 129u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00355470; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 31503u));
    set32(c.r[6], 0u + 64u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_00355470; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[2].w[0] - 31504u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003553E8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x003553E8u) [[unlikely]] return; }
L_003553E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00355470; } }
L_003553F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] - 31366u));
    set32(c.r[3], 0u + 129u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00355470; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] - 31365u));
    set32(c.r[3], 0u + 64u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00355470; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[2].w[0] - 31366u);
    set32(c.r[6], 0u + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035542Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0035542Cu) [[unlikely]] return; }
L_0035542C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00355470; } }
L_00355434:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355440u); set32(c.r[4], c.r[2].w[0] - 31376u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x00355440u) [[unlikely]] return; }
L_00355440:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[3], c.r[3].w[0] - 31888u);
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_00355460; } }
L_00355454:
    st8((c.r[5].w[0] + 512u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 3;
L_00355460:
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00355454u | kUnwind; return; } goto L_00355454; } }
L_00355470:
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00355474:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00355800; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_00355480:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00355800; } }
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00355800; } }
L_00355494:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 4u));
    set32(c.r[6], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_00355570; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[4], c.r[16].w[0] + 9u);  if (t) { goto L_00355528; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], c.r[3].w[0] + 1u);  goto L_003554C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00355800; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_003554C4:
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 31237u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00350000u);
    mmi::paddub(c.r[4], c.r[5], c.r[0]);
    set32(c.r[6], c.r[2].w[0] + 24496u);
    set32(c.r[5], 0u + 18u);
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003554ECu); st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x003554ECu) [[unlikely]] return; }
L_003554EC:
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00350000u);
    set32(c.r[6], c.r[2].w[0] + 24496u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355504u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x00355504u) [[unlikely]] return; }
L_00355504:
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00350000u);
    set32(c.r[6], c.r[2].w[0] + 24592u);
    set32(c.r[5], 0u + 5u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035551Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0035551Cu) [[unlikely]] return; }
L_0035551C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 28u), c.r[16].w[0]);  if (t) { goto L_00355800; } }
    set32(c.r[4], c.r[16].w[0] + 9u);
    c.budget -= 1;
L_00355528:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355530u);  if (depth < kMaxDepth) unit_009D(c, 319u, depth + 1u); else { c.pc = 0x00377620u; return; } if (c.pc != 0x00355530u) [[unlikely]] return; }
L_00355530:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355538u);  if (depth < kMaxDepth) unit_009E(c, 18u, depth + 1u); else { c.pc = 0x003782D0u; return; } if (c.pc != 0x00355538u) [[unlikely]] return; }
L_00355538:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00355800; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 4u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 16u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], 0u + 4u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355568u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00355568u) [[unlikely]] return; }
L_00355568:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00355800; } }
L_00355570:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00355800; } }
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 9u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] - 31237u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00355800; } }
L_003555A4:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 4u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00355644; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_003555EC; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_003555D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00355800; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_003555D4:
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 332u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003555E4u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 199u, depth + 1u); else { c.pc = 0x00352520u; return; } if (c.pc != 0x003555E4u) [[unlikely]] return; }
L_003555E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00355800; } }
L_003555EC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_00355620; } }
    c.r[1].d[0] = c.r[3].sd[0] < 240ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00355800; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355618u);  if (depth < kMaxDepth) unit_009E(c, 18u, depth + 1u); else { c.pc = 0x003782D0u; return; } if (c.pc != 0x00355618u) [[unlikely]] return; }
L_00355618:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00355800; } }
L_00355620:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 4u));
    set32(c.r[2], 0u + 12u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035563Cu); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x0035563Cu) [[unlikely]] return; }
L_0035563C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00355800; } }
L_00355644:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00355800; } }
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00355800; } }
L_00355668:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003557BC; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00355780; } }
    set32(c.r[6], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[6].d[0]) { set32(c.r[4], c.r[16].w[0] + 11u);  goto L_00355700; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003556D4; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 1u);  goto L_003556B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00355800; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_003556B0:
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 32u);
    st8((c.r[16].w[0] + 11u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[16].w[0] + 11u);
    mmi::paddub(c.r[4], c.r[6], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003556CCu); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 201u, depth + 1u); else { c.pc = 0x00352570u; return; } if (c.pc != 0x003556CCu) [[unlikely]] return; }
L_003556CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00355800; } }
L_003556D4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00355800; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00355800; } }
    set32(c.r[4], c.r[16].w[0] + 11u);
    c.budget -= 1;
L_00355700:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355708u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_009D(c, 319u, depth + 1u); else { c.pc = 0x00377620u; return; } if (c.pc != 0x00355708u) [[unlikely]] return; }
L_00355708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355710u);  if (depth < kMaxDepth) unit_009E(c, 18u, depth + 1u); else { c.pc = 0x003782D0u; return; } if (c.pc != 0x00355710u) [[unlikely]] return; }
L_00355710:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035574C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], 0u + 16u);
    set32(c.r[5], 0u + 4u);
    st8((c.r[3].w[0] + 5511u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 4u));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355744u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00355744u) [[unlikely]] return; }
L_00355744:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00355800; } }
L_0035574C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355754u);  if (depth < kMaxDepth) unit_009E(c, 19u, depth + 1u); else { c.pc = 0x00378310u; return; } if (c.pc != 0x00355754u) [[unlikely]] return; }
L_00355754:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00355800; } }
    set32(c.r[4], 0u + 2u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035576Cu); st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x0035576Cu) [[unlikely]] return; }
L_0035576C:
    set32(c.r[5], 0u + 54u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355778u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00355778u) [[unlikely]] return; }
L_00355778:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00355800; } }
L_00355780:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00355800; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 4u));
    set32(c.r[2], 0u + 12u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003557B4u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x003557B4u) [[unlikely]] return; }
L_003557B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00355800; } }
L_003557BC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00355800; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 11u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003557F8; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00355800; } }
L_003557F8:
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00355800:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00355804:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00355810:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00355858; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 1u);  goto L_00355844; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00355884; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_00355844:
    set32(c.r[5], 0u + 20u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355858u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 30u, depth + 1u); else { c.pc = 0x00378410u; return; } if (c.pc != 0x00355858u) [[unlikely]] return; }
L_00355858:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00355880; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00355880:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00355884:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00355890:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    set32(c.r[2], 0u + 3u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00355900; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003558F0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003558E0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003558D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0035590C; } }
L_003558D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003558D8u);  if (depth < kMaxDepth) unit_0095(c, 81u, depth + 1u); else { c.pc = 0x00354DA0u; return; } if (c.pc != 0x003558D8u) [[unlikely]] return; }
L_003558D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00355908; } }
L_003558E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003558E8u);  if (depth < kMaxDepth) unit_0095(c, 94u, depth + 1u); else { c.pc = 0x00354F00u; return; } if (c.pc != 0x003558E8u) [[unlikely]] return; }
L_003558E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00355908; } }
L_003558F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003558F8u);  if (depth < kMaxDepth) unit_0095(c, 173u, depth + 1u); else { c.pc = 0x00355810u; return; } if (c.pc != 0x003558F8u) [[unlikely]] return; }
L_003558F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00355908; } }
L_00355900:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[4].w[0] + 5u));  if (t) { goto L_0035590C; } }
L_00355908:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0035590C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00355920:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00355930; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003559B0; } }
L_00355930:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[3], c.r[5].w[0] - 1u);  if (t) { goto L_00355944; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_003559B0; } }
    set32(c.r[3], c.r[5].w[0] - 1u);
    c.budget -= 1;
L_00355944:
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    mmi::paddub(c.r[2], c.r[4], c.r[0]);
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (t) { goto L_003559B0; } }
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[7], c.r[5].w[0] - 3u);  if (t) { goto L_00355980; } }
L_00355960:
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.r[3].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00355960u | kUnwind; return; } goto L_00355960; } }
    c.budget -= 1;
L_00355980:
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[1].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003559B0; } }
L_00355990:
    set32(c.r[6], c.r[6].w[0] + 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00355990u | kUnwind; return; } goto L_00355990; } }
    c.budget -= 1;
L_003559B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003559C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003559D4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x003559D4u) [[unlikely]] return; }
L_003559D4:
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    mmi::paddub(c.r[8], c.r[2], c.r[0]);
    set32(c.r[13], c.r[3].w[0] - 1u);
    c.r[1].d[0] = 0ll < c.r[8].sd[0] ? 1ull : 0ull;
    mmi::paddub(c.r[9], c.r[0], c.r[0]);
    mmi::paddub(c.r[12], c.r[0], c.r[0]);
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[10], c.r[0], c.r[0]);  if (t) { goto L_00355A88; } }
L_003559F4:
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0])));
    c.r[2].d[0] = c.r[11].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[13], c.r[13].w[0] - 1u);  if (t) { goto L_00355A90; } }
    set32(c.r[2], 0u + 44u);
    c.budget -= 3;
    if (c.r[11].d[0] == c.r[2].d[0]) { set32(c.r[9], c.r[9].w[0] + 1u);  goto L_00355A7C; }
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[11].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[11].sd[0] < 48ll ? 1ull : 0ull;  if (t) { goto L_00355A28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[11], 0u + 48u);  if (t) { goto L_00355A40; } }
    c.r[2].d[0] = c.r[11].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 1;
L_00355A28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00355A94; } }
    c.r[1].d[0] = c.r[11].sd[0] < 58ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00355A90; } }
    c.budget -= 1;
L_00355A40:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != 0ull; set32(c.r[4], 0u + 10u);  if (t) { goto L_00355A58; } }
    set32(c.r[2], c.r[11].w[0] - 48u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[12], c.r[12].w[0] + c.r[2].w[0]);  if (t) { goto L_00355A70; } }
    set32(c.r[4], 0u + 10u);
    c.budget -= 1;
L_00355A58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355A60u); mmi::paddub(c.r[5], c.r[10], c.r[0]);  if (depth < kMaxDepth) unit_0095(c, 179u, depth + 1u); else { c.pc = 0x00355920u; return; } if (c.pc != 0x00355A60u) [[unlikely]] return; }
L_00355A60:
    set32(c.r[3], c.r[11].w[0] - 48u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[12], c.r[12].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00355A70:
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 3;
L_00355A7C:
    c.r[2].d[0] = c.r[9].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003559F4u | kUnwind; return; } goto L_003559F4; } }
L_00355A88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[12], c.r[0]);  if (t) { goto L_00355A94; } }
L_00355A90:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00355A94:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00355AB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 10;
L_00355AD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355AE0u); c.r[4].d[0] = ld8((c.r[18].w[0]));  if (depth < kMaxDepth) unit_0096(c, 44u, depth + 1u); else { c.pc = 0x003586A0u; return; } if (c.pc != 0x00355AE0u) [[unlikely]] return; }
L_00355AE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00355B18; } }
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[19].w[0] + c.r[16].w[0]);  if (t) { goto L_00355B44; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[4], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[16], c.r[16].w[0] + 2u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    set32(c.r[18], c.r[18].w[0] + 2u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00355B30; } }
L_00355B18:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[3], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
L_00355B30:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00355AD8u | kUnwind; return; } goto L_00355AD8; } }
    set32(c.r[3], c.r[19].w[0] + c.r[16].w[0]);
    c.budget -= 2;
L_00355B44:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00355B70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[2], 0u + 16513u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (t) { goto L_00355B98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355B90u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00355B90u) [[unlikely]] return; }
L_00355B90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00355BA4; } }
L_00355B98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355BA0u);  if (depth < kMaxDepth) unit_0095(c, 196u, depth + 1u); else { c.pc = 0x00355C40u; return; } if (c.pc != 0x00355BA0u) [[unlikely]] return; }
L_00355BA0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00355BA4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00355BB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355BC4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x00355BC4u) [[unlikely]] return; }
L_00355BC4:
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_00355BE0; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00355BE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 16513u);  if (t) { goto L_00355C00; } }
L_00355BE8:
    c.r[2].d[0] = ld16((c.r[6].w[0]));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[6], c.r[6].w[0] + 2u);  goto L_00355BFC; }
    c.r[5].d[0] = c.r[5].d[0] | 1ull;
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.budget -= 2;
L_00355BFC:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_00355C00:
    c.r[2].d[0] = c.r[4].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00355BE8u | kUnwind; return; } goto L_00355BE8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00355C20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00355C2C; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00355C20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355C28u);  if (depth < kMaxDepth) unit_0095(c, 196u, depth + 1u); else { c.pc = 0x00355C40u; return; } if (c.pc != 0x00355C28u) [[unlikely]] return; }
L_00355C28:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00355C2C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00355C40:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[16], ld32((c.r[1].w[0] + 17520u)));
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[18], c.r[0], c.r[0]);  if (t) { goto L_00355DE0; } }
    mmi::paddub(c.r[4], c.r[21], c.r[0]);
    c.budget -= 1;
L_00355C78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355C80u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 65u, depth + 1u); else { c.pc = 0x00118ED8u; return; } if (c.pc != 0x00355C80u) [[unlikely]] return; }
L_00355C80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[17], c.r[2], c.r[0]);  if (t) { goto L_00355DC0; } }
L_00355C88:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[21].d[0]; mmi::paddub(c.r[20], c.r[0], c.r[0]);  if (t) { goto L_00355C98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], 0u + 2u);  if (t) { goto L_00355CE0; } }
L_00355C98:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[3].w[0] + 17408u);  if (t) { goto L_00355CD0; } }
L_00355CA4:
    c.r[3].d[0] = ld8((c.r[17].w[0] - 2u));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[4].d[0]) { set32(c.r[5], c.r[5].w[0] + 2u);  goto L_00355CCC; }
    c.r[4].d[0] = ld8((c.r[17].w[0] - 1u));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00355CC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], 0u + 1u);  if (t) { goto L_00355CE0; } }
L_00355CC8:
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.budget -= 1;
L_00355CCC:
    c.budget -= 1;
L_00355CD0:
    c.r[4].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00355CA4u | kUnwind; return; } goto L_00355CA4; } }
    c.budget -= 1;
L_00355CE0:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_00355DC4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355CF0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x00355CF0u) [[unlikely]] return; }
L_00355CF0:
    mmi::paddub(c.r[19], c.r[2], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355CFCu); mmi::paddub(c.r[4], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x00355CFCu) [[unlikely]] return; }
L_00355CFC:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[3].d[0];  if (t) { goto L_00355D68; } }
    set32(c.r[6], c.r[17].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; mmi::paddub(c.r[20], c.r[0], c.r[0]);  if (t) { goto L_00355D20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], 0u + 1u);  if (t) { goto L_00355D68; } }
L_00355D20:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[3].w[0] + 17408u);  if (t) { goto L_00355D58; } }
L_00355D2C:
    c.r[3].d[0] = ld8((c.r[6].w[0]));
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[5], c.r[5].w[0] + 2u);  goto L_00355D54; }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 1u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00355D50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], 0u + 1u);  if (t) { goto L_00355D68; } }
L_00355D50:
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.budget -= 1;
L_00355D54:
    c.budget -= 1;
L_00355D58:
    c.r[4].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00355D2Cu | kUnwind; return; } goto L_00355D2C; } }
    c.budget -= 1;
L_00355D68:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00355DC0; } }
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 3;
    { const bool t = c.r[19].sd[0] >= 0; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[19].w[0]) >> 1));  if (t) { goto L_00355D84; } }
    set32(c.r[2], c.r[19].w[0] + 1u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00355D84:
    set32(c.r[4], 0u + 129u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 150u);  if (t) { goto L_00355DA0; } }
L_00355D90:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[17], c.r[17].w[0] + 2u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
L_00355DA0:
    c.r[2].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00355D90u | kUnwind; return; } goto L_00355D90; } }
    mmi::paddub(c.r[4], c.r[21], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355DB8u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 65u, depth + 1u); else { c.pc = 0x00118ED8u; return; } if (c.pc != 0x00355DB8u) [[unlikely]] return; }
L_00355DB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[17], c.r[2], c.r[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00355C88u | kUnwind; return; } goto L_00355C88; } }
L_00355DC0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00355DC4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 17520u);
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 7;
L_00355DE0:
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[4], c.r[21], c.r[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00355C78u | kUnwind; return; } goto L_00355C78; } }
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00355E10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], ld32((c.r[4].w[0] + 28u)));  if (t) { goto L_00355E2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[4].w[0] + 285u));  if (t) { goto L_00355E38; } }
L_00355E2C:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 285u));
    c.budget -= 3;
L_00355E38:
    c.r[3].d[0] = ld8((c.r[6].w[0] + 7u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00355E5C; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355E54u); c.r[4].d[0] = ld8((c.r[6].w[0] + 7u));  if (depth < kMaxDepth) unit_0095(c, 222u, depth + 1u); else { c.pc = 0x00356110u; return; } if (c.pc != 0x00355E54u) [[unlikely]] return; }
L_00355E54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00355E64; } }
L_00355E5C:
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(0u));
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 2;
L_00355E64:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00355E70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_00355F70; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00355EC4; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_00355EB4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_00355F94; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00355EB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355EBCu); st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x00355EBCu) [[unlikely]] return; }
L_00355EBC:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8u));
    st8((c.r[17].w[0] + 285u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00355EC4:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 285u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00355EF8; } }
    st8((c.r[17].w[0] + 285u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 17904u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355EF8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 274u, depth + 1u); else { c.pc = 0x00376B10u; return; } if (c.pc != 0x00355EF8u) [[unlikely]] return; }
L_00355EF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[4], c.r[2].w[0] + 17936u);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[2].w[0] + 17940u);
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8u));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 12u));
    c.budget -= 18;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00355F60; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355F54u); st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x00355F54u) [[unlikely]] return; }
L_00355F54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00355F90; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00355F60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355F68u);  if (depth < kMaxDepth) unit_009D(c, 297u, depth + 1u); else { c.pc = 0x00376EC0u; return; } if (c.pc != 0x00355F68u) [[unlikely]] return; }
L_00355F68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00355F90; } }
L_00355F70:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 12u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00355F88; } }
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
L_00355F88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355F90u);  if (depth < kMaxDepth) unit_009D(c, 299u, depth + 1u); else { c.pc = 0x00376F50u; return; } if (c.pc != 0x00355F90u) [[unlikely]] return; }
L_00355F90:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00355F94:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00355FB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[6], ld32((c.r[4].w[0] + 28u)));  if (t) { goto L_00355FE0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_00355FDC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00355FFC; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00355FDC:
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00355FE0:
    c.r[5].d[0] = ld8((c.r[6].w[0] + 13u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00355FF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355FF8u);  if (depth < kMaxDepth) unit_009D(c, 278u, depth + 1u); else { c.pc = 0x00376B70u; return; } if (c.pc != 0x00355FF8u) [[unlikely]] return; }
L_00355FF8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00355FFC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00356010:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_003560D8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00356080; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_00356054; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_003560FC; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00356054:
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x432D0000u);
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FD90000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    st32((c.r[17].w[0] + 112u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356080u); st32((c.r[17].w[0] + 116u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x00356080u) [[unlikely]] return; }
L_00356080:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 9u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0xC2DC0000u);  if (t) { goto L_0035609C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2480000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_003560A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2DC0000u);
    c.budget -= 1;
L_0035609C:
    st32((c.r[17].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 1;
L_003560A0:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 13u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003560BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003560B4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 297u, depth + 1u); else { c.pc = 0x00376EC0u; return; } if (c.pc != 0x003560B4u) [[unlikely]] return; }
L_003560B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003560F8; } }
L_003560BC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003560D0u); st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x003560D0u) [[unlikely]] return; }
L_003560D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003560F8; } }
L_003560D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003560E0u);  if (depth < kMaxDepth) unit_009D(c, 299u, depth + 1u); else { c.pc = 0x00376F50u; return; } if (c.pc != 0x003560E0u) [[unlikely]] return; }
L_003560E0:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 13u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003560F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003560F8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 278u, depth + 1u); else { c.pc = 0x00376B70u; return; } if (c.pc != 0x003560F8u) [[unlikely]] return; }
L_003560F8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_003560FC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00356110:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356128u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x00356128u) [[unlikely]] return; }
L_00356128:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00356328; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 18032u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 18080u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356154u); set32(c.r[4], c.r[2].w[0] - 31888u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00356154u) [[unlikely]] return; }
L_00356154:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356160u); set32(c.r[4], c.r[2].w[0] - 31504u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x00356160u) [[unlikely]] return; }
L_00356160:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(24ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003561A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[2].w[0] - 31504u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356180u); set32(c.r[6], 0u + 24u);  if (depth < kMaxDepth) unit_0095(c, 186u, depth + 1u); else { c.pc = 0x00355AB0u; return; } if (c.pc != 0x00356180u) [[unlikely]] return; }
L_00356180:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 18036u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 18084u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003561A0u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x003561A0u) [[unlikely]] return; }
L_003561A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[28].w[0] - 25172u);  if (t) { goto L_003561D0; } }
L_003561A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 18036u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 18084u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003561CCu); set32(c.r[4], c.r[2].w[0] - 31504u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x003561CCu) [[unlikely]] return; }
L_003561CC:
    set32(c.r[4], c.r[28].w[0] - 25172u);
    c.budget -= 1;
L_003561D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003561D8u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x003561D8u) [[unlikely]] return; }
L_003561D8:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0035620C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 18040u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 18088u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356204u); set32(c.r[4], c.r[28].w[0] - 25172u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00356204u) [[unlikely]] return; }
L_00356204:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00356238; } }
L_0035620C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[0] = ld32((c.r[1].w[0] + 18040u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[28].w[0] - 25172u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 18088u));
    c.f[14] = c.r[2].w[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356238u); c.f[12] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00356238u) [[unlikely]] return; }
L_00356238:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[2].w[0] - 31376u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035624Cu); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x0035624Cu) [[unlikely]] return; }
L_0035624C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 18044u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 18092u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356270u); st8((c.r[29].w[0] + 35u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00356270u) [[unlikely]] return; }
L_00356270:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[2].w[0] - 31373u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356284u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x00356284u) [[unlikely]] return; }
L_00356284:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = ld32((c.r[1].w[0] + 18092u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003562A8u); st8((c.r[29].w[0] + 36u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x003562A8u) [[unlikely]] return; }
L_003562A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003562B4u); set32(c.r[4], c.r[2].w[0] - 31366u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x003562B4u) [[unlikely]] return; }
L_003562B4:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(44ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003562FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[2].w[0] - 31366u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003562D4u); set32(c.r[6], 0u + 44u);  if (depth < kMaxDepth) unit_0095(c, 186u, depth + 1u); else { c.pc = 0x00355AB0u; return; } if (c.pc != 0x003562D4u) [[unlikely]] return; }
L_003562D4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 18048u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 18096u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003562F4u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x003562F4u) [[unlikely]] return; }
L_003562F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_003564A0; } }
L_003562FC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 18048u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 18096u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356320u); set32(c.r[4], c.r[2].w[0] - 31366u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00356320u) [[unlikely]] return; }
L_00356320:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035649C; } }
L_00356328:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356334u); set32(c.r[4], c.r[2].w[0] - 31440u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x00356334u) [[unlikely]] return; }
L_00356334:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035637C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[2].w[0] - 31440u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356354u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0095(c, 186u, depth + 1u); else { c.pc = 0x00355AB0u; return; } if (c.pc != 0x00356354u) [[unlikely]] return; }
L_00356354:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 18056u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 18104u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356374u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00356374u) [[unlikely]] return; }
L_00356374:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003563A0; } }
L_0035637C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 18056u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 18104u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003563A0u); set32(c.r[4], c.r[2].w[0] - 31440u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x003563A0u) [[unlikely]] return; }
L_003563A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003563ACu); set32(c.r[4], c.r[2].w[0] - 31632u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x003563ACu) [[unlikely]] return; }
L_003563AC:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(26ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003563F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[2].w[0] - 31632u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003563CCu); set32(c.r[6], 0u + 26u);  if (depth < kMaxDepth) unit_0095(c, 186u, depth + 1u); else { c.pc = 0x00355AB0u; return; } if (c.pc != 0x003563CCu) [[unlikely]] return; }
L_003563CC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 18060u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 18108u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003563ECu); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x003563ECu) [[unlikely]] return; }
L_003563EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00356418; } }
L_003563F4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 18060u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 18108u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356418u); set32(c.r[4], c.r[2].w[0] - 31632u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00356418u) [[unlikely]] return; }
L_00356418:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 18064u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 18112u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035643Cu); set32(c.r[4], c.r[2].w[0] - 31760u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0035643Cu) [[unlikely]] return; }
L_0035643C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 31237u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00356478; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 18068u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 18116u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356470u); set32(c.r[4], c.r[2].w[0] + 17368u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00356470u) [[unlikely]] return; }
L_00356470:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035649C; } }
L_00356478:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 18068u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 18116u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035649Cu); set32(c.r[4], c.r[2].w[0] + 17384u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0035649Cu) [[unlikely]] return; }
L_0035649C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_003564A0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_003564B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[4], 0u + 8192u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003564D0u); mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x003564D0u) [[unlikely]] return; }
L_003564D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 43u);  if (t) { goto L_003564EC; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 25310u));
    set32(c.r[2], 0u + 82u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 4096u);  if (t) { goto L_00356504; } }
    set32(c.r[5], 0u + 43u);
    c.budget -= 1;
L_003564EC:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003564F8u); c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x003564F8u) [[unlikely]] return; }
L_003564F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003565FC; } }
    set32(c.r[4], 0u + 4096u);
    c.budget -= 1;
L_00356504:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035650Cu);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x0035650Cu) [[unlikely]] return; }
L_0035650C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 43u);  if (t) { goto L_00356528; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 25310u));
    set32(c.r[2], 0u + 81u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 2048u);  if (t) { goto L_00356540; } }
    set32(c.r[5], 0u + 43u);
    c.budget -= 1;
L_00356528:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356534u); c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(2ll);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00356534u) [[unlikely]] return; }
L_00356534:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003565FC; } }
    set32(c.r[4], 0u + 2048u);
    c.budget -= 1;
L_00356540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356548u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x00356548u) [[unlikely]] return; }
L_00356548:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 43u);  if (t) { goto L_00356564; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 25310u));
    set32(c.r[2], 0u + 80u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 1024u);  if (t) { goto L_0035657C; } }
    set32(c.r[5], 0u + 43u);
    c.budget -= 1;
L_00356564:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356570u); c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(3ll);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00356570u) [[unlikely]] return; }
L_00356570:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003565FC; } }
    set32(c.r[4], 0u + 1024u);
    c.budget -= 1;
L_0035657C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356584u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x00356584u) [[unlikely]] return; }
L_00356584:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 43u);  if (t) { goto L_003565A0; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 25310u));
    set32(c.r[2], 0u + 79u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 43u);  if (t) { goto L_003565B8; } }
    set32(c.r[5], 0u + 43u);
    c.budget -= 1;
L_003565A0:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003565ACu); c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(4ll);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x003565ACu) [[unlikely]] return; }
L_003565AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003565FC; } }
    set32(c.r[5], 0u + 43u);
    c.budget -= 1;
L_003565B8:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[5].d[0]) { set32(c.r[5], 0u + 43u);  goto L_003565E8; }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 25309u));
    c.r[2].d[0] = c.r[2].d[0] & 34ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003565E4; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003565DCu); c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(6ll);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x003565DCu) [[unlikely]] return; }
L_003565DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003565FC; } }
L_003565E4:
    set32(c.r[5], 0u + 43u);
    c.budget -= 1;
L_003565E8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_003565FC; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003565FCu); c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(5ll);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x003565FCu) [[unlikely]] return; }
L_003565FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 26576u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.r[4].d[0] = c.r[16].d[0] & 255ull;
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00356640:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 31888u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0035669C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 31504u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00356698; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 31376u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00356698; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 31366u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00356698; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 31238u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00356698; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0035669C; } }
L_00356698:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0035669C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003566B0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003566C8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x003566C8u) [[unlikely]] return; }
L_003566C8:
    set32(c.r[16], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003566D4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x003566D4u) [[unlikely]] return; }
L_003566D4:
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[2].w[0] + 18128u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_00356740; } }
    set32(c.r[2], c.r[16].w[0] + c.r[6].w[0]);
    c.budget -= 1;
L_003566F0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[1].d[0] = c.r[2].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[2].sd[0] < 128ll ? 1ull : 0ull;  if (t) { goto L_0035670C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00356794; } }
    c.r[1].d[0] = c.r[2].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 1;
L_0035670C:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);  goto L_00356720; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00356794; } }
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_00356720:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] - 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[2], c.r[4].w[0] + 1u);  if (t) { goto L_00356738; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00356794; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_00356738:
    c.r[4].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 2;
L_00356740:
    c.r[6].d[0] = c.r[4].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003566F0u | kUnwind; return; } goto L_003566F0; } }
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356760u); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0006(c, 27u, depth + 1u); else { c.pc = 0x00118488u; return; } if (c.pc != 0x00356760u) [[unlikely]] return; }
L_00356760:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_00356778; }
    set32(c.r[3], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[5], 0u + 46u);  if (t) { goto L_00356784; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00356778:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00356798; } }
    set32(c.r[5], 0u + 46u);
    c.budget -= 1;
L_00356784:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035678Cu); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 27u, depth + 1u); else { c.pc = 0x00118488u; return; } if (c.pc != 0x0035678Cu) [[unlikely]] return; }
L_0035678C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 2;
L_00356794:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00356798:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003567B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003567C4u); set32(c.r[4], c.r[2].w[0] - 31632u);  if (depth < kMaxDepth) unit_0095(c, 263u, depth + 1u); else { c.pc = 0x003566B0u; return; } if (c.pc != 0x003567C4u) [[unlikely]] return; }
L_003567C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003567EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[2].w[0] - 31632u);
    set32(c.r[6], 0u + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003567E0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x003567E0u) [[unlikely]] return; }
L_003567E0:
    set32(c.r[5], 0u + 54u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003567ECu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x003567ECu) [[unlikely]] return; }
L_003567EC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00356800:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[2].w[0] - 31888u);
    set32(c.r[6], 0u + 128u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035681Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0035681Cu) [[unlikely]] return; }
L_0035681C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[2].w[0] - 31760u);
    set32(c.r[6], 0u + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356830u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00356830u) [[unlikely]] return; }
L_00356830:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[2].w[0] - 31632u);
    set32(c.r[6], 0u + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356844u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00356844u) [[unlikely]] return; }
L_00356844:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[2].w[0] - 31504u);
    set32(c.r[6], 0u + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356858u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00356858u) [[unlikely]] return; }
L_00356858:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[2].w[0] - 31440u);
    set32(c.r[6], 0u + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035686Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0035686Cu) [[unlikely]] return; }
L_0035686C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[2].w[0] - 31376u);
    set32(c.r[6], 0u + 10u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356880u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00356880u) [[unlikely]] return; }
L_00356880:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[2].w[0] - 31366u);
    set32(c.r[6], 0u + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356894u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00356894u) [[unlikely]] return; }
L_00356894:
    set32(c.r[4], c.r[28].w[0] - 25172u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003568A4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x003568A4u) [[unlikely]] return; }
L_003568A4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    st8((c.r[1].w[0] - 31238u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    st8((c.r[1].w[0] - 31237u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 31238u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[28].w[0] - 25172u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003568CCu); set32(c.r[5], c.r[2].w[0] - 26480u);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x003568CCu) [[unlikely]] return; }
L_003568CC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003568E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003568F4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 283u, depth + 1u); else { c.pc = 0x00376BE0u; return; } if (c.pc != 0x003568F4u) [[unlikely]] return; }
L_003568F4:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00356954; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00350000u);
    set32(c.r[6], c.r[2].w[0] + 30736u);
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], 0u + 5u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035691Cu); st8((c.r[16].w[0] + 14u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0035691Cu) [[unlikely]] return; }
L_0035691C:
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00350000u);
    set32(c.r[6], c.r[2].w[0] + 30928u);
    set32(c.r[4], 0u + 5u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356940u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x00356940u) [[unlikely]] return; }
L_00356940:
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 272u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003569A4; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00356954:
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 14u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00350000u);
    set32(c.r[6], c.r[2].w[0] + 31200u);
    set32(c.r[4], 0u + 5u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356978u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x00356978u) [[unlikely]] return; }
L_00356978:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    st8((c.r[2].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00350000u);
    set32(c.r[6], c.r[2].w[0] + 31200u);
    set32(c.r[4], 0u + 5u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356998u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x00356998u) [[unlikely]] return; }
L_00356998:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    st8((c.r[2].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003569A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00350000u);
    set32(c.r[6], c.r[2].w[0] + 30576u);
    set32(c.r[4], 0u + 5u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003569B8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x003569B8u) [[unlikely]] return; }
L_003569B8:
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00350000u);
    set32(c.r[6], c.r[2].w[0] + 30032u);
    set32(c.r[4], 0u + 5u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003569DCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x003569DCu) [[unlikely]] return; }
L_003569DC:
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 272u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00350000u);
    set32(c.r[4], 0u + 5u);
    set32(c.r[6], c.r[2].w[0] + 31776u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003569FCu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x003569FCu) [[unlikely]] return; }
L_003569FC:
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 272u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 26120u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00356A38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00350000u);
    set32(c.r[6], c.r[2].w[0] + 30736u);
    set32(c.r[4], 0u + 5u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356A28u); set32(c.r[5], 0u + 30u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x00356A28u) [[unlikely]] return; }
L_00356A28:
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 272u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00356A38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00350000u);
    set32(c.r[6], c.r[2].w[0] + 31264u);
    set32(c.r[5], 0u + 7u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356A4Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x00356A4Cu) [[unlikely]] return; }
L_00356A4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356A54u); st32((c.r[2].w[0] + 28u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_009A(c, 532u, depth + 1u); else { c.pc = 0x0036B670u; return; } if (c.pc != 0x00356A54u) [[unlikely]] return; }
L_00356A54:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00356A70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[6], 0u + 3u);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[6].d[0];  if (t) { goto L_00356B24; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_00356B10; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00356ADC; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_00356AB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00356B6C; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00356AB4:
    set32(c.r[5], 0u + 20u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 25736u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_00356B68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356AD4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 30u, depth + 1u); else { c.pc = 0x00378410u; return; } if (c.pc != 0x00356AD4u) [[unlikely]] return; }
L_00356AD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00356B68; } }
L_00356ADC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00356B68; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356B04u); st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x00356B04u) [[unlikely]] return; }
L_00356B04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00356B68; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00356B10:
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356B1Cu); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_009E(c, 38u, depth + 1u); else { c.pc = 0x00378520u; return; } if (c.pc != 0x00356B1Cu) [[unlikely]] return; }
L_00356B1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00356B68; } }
L_00356B24:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356B38u); st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0095(c, 283u, depth + 1u); else { c.pc = 0x003568E0u; return; } if (c.pc != 0x00356B38u) [[unlikely]] return; }
L_00356B38:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 25736u));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], 0u + 20u);  if (t) { goto L_00356B60; } }
    set32(c.r[5], 0u + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356B54u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 29u, depth + 1u); else { c.pc = 0x00378400u; return; } if (c.pc != 0x00356B54u) [[unlikely]] return; }
L_00356B54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00356B68; } }
    set32(c.r[5], 0u + 20u);
    c.budget -= 1;
L_00356B60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356B68u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 29u, depth + 1u); else { c.pc = 0x00378400u; return; } if (c.pc != 0x00356B68u) [[unlikely]] return; }
L_00356B68:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00356B6C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00356B80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[6], 0u + 2u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[6].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00356DC8; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_00356D14; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00356BB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00357398; } }
L_00356BB8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_00356C98; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[4], 0u + 32u);  if (t) { goto L_00356BF8; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] + 1u);  goto L_00356BE0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00357394; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00356BE0:
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 14u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00357394; } }
    set32(c.r[4], 0u + 32u);
    c.budget -= 1;
L_00356BF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356C00u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x00356C00u) [[unlikely]] return; }
L_00356C00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 64u);  if (t) { goto L_00356C34; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 4u));
    set32(c.r[2], 0u + 16u);
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356C28u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00356C28u) [[unlikely]] return; }
L_00356C28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00357394; } }
    set32(c.r[4], 0u + 64u);
    c.budget -= 1;
L_00356C34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356C3Cu);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x00356C3Cu) [[unlikely]] return; }
L_00356C3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00356C68; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 54u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356C60u); st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00356C60u) [[unlikely]] return; }
L_00356C60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00357394; } }
L_00356C68:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 26120u));
    set32(c.r[5], 0u + 16u);
    set32(c.r[2], 0u + 15u);
    set32(c.r[4], c.r[16].w[0] + 7u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356C84u); if (c.r[3].d[0] == 0) c.r[5].d[0] = c.r[2].d[0];  if (depth < kMaxDepth) unit_009D(c, 305u, depth + 1u); else { c.pc = 0x00377240u; return; } if (c.pc != 0x00356C84u) [[unlikely]] return; }
L_00356C84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00357394; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00357394; } }
L_00356C98:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00357394; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 7u));
    set32(c.r[3], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00356D00; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 3u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 18400u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 14u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 7u));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00357394; } }
L_00356D00:
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 14u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_00357394; } }
L_00356D14:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[4], 0u + 64u);  if (t) { goto L_00356D68; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] + 1u);  goto L_00356D34; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00357394; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00356D34:
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 7u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 18400u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00357394; } }
    set32(c.r[4], 0u + 64u);
    c.budget -= 1;
L_00356D68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356D70u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x00356D70u) [[unlikely]] return; }
L_00356D70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00356D9C; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 54u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356D94u); st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00356D94u) [[unlikely]] return; }
L_00356D94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00357394; } }
L_00356D9C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8u));
    set32(c.r[4], c.r[16].w[0] + 9u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356DB4u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_009D(c, 305u, depth + 1u); else { c.pc = 0x00377240u; return; } if (c.pc != 0x00356DB4u) [[unlikely]] return; }
L_00356DB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00357394; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00357394; } }
L_00356DC8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 4u));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00357394; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[5].w[0] - 25088u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00354000u < 16384u) { entry = entries_0095[(t - 0x00354000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00356DF4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00357394; } }
L_00356E10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356E18u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x00356E18u) [[unlikely]] return; }
L_00356E18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 64u);  if (t) { goto L_00356E4C; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 4u));
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356E40u); st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00356E40u) [[unlikely]] return; }
L_00356E40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00357394; } }
    set32(c.r[4], 0u + 64u);
    c.budget -= 1;
L_00356E4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356E54u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x00356E54u) [[unlikely]] return; }
L_00356E54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00356E8C; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00357394; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 54u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356E84u); st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00356E84u) [[unlikely]] return; }
L_00356E84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00357394; } }
L_00356E8C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00356EA8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26120u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_00356EB0; } }
L_00356EA8:
    c.r[5].d[0] = ld8((c.r[28].w[0] - 26120u));
    c.budget -= 2;
L_00356EB0:
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356EBCu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_009D(c, 305u, depth + 1u); else { c.pc = 0x00377240u; return; } if (c.pc != 0x00356EBCu) [[unlikely]] return; }
L_00356EBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00357394; } }
    c.r[4].d[0] = ld8((c.r[28].w[0] - 26120u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00357394; } }
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 14u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00357394; } }
L_00356EEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356EF4u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x00356EF4u) [[unlikely]] return; }
L_00356EF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00357394; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 54u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356F14u); st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00356F14u) [[unlikely]] return; }
L_00356F14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00357394; } }
L_00356F1C:
    c.r[5].d[0] = ld8((c.r[28].w[0] - 26120u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356F28u); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_009D(c, 305u, depth + 1u); else { c.pc = 0x00377240u; return; } if (c.pc != 0x00356F28u) [[unlikely]] return; }
L_00356F28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 32u);  if (t) { goto L_00356F64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356F38u); set32(c.r[4], 0u + 8192u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x00356F38u) [[unlikely]] return; }
L_00356F38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00357394; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 14u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26120u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00357394; } }
    set32(c.r[4], 0u + 32u);
    c.budget -= 1;
L_00356F64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356F6Cu);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x00356F6Cu) [[unlikely]] return; }
L_00356F6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 64u);  if (t) { goto L_00356FB8; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], 0u + 4u);
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356F88u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00356F88u) [[unlikely]] return; }
L_00356F88:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 9u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 5u);  if (t) { goto L_00356FA8; } }
    set32(c.r[3], 0u + 4u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00357394; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 1;
L_00356FA8:
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00357394; } }
    set32(c.r[4], 0u + 64u);
    c.budget -= 1;
L_00356FB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356FC0u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x00356FC0u) [[unlikely]] return; }
L_00356FC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 9u);  if (t) { goto L_00356FF4; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 9u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00357394; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], 0u + 54u);
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356FE8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00356FE8u) [[unlikely]] return; }
L_00356FE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00357394; } }
    set32(c.r[4], c.r[16].w[0] + 9u);
    c.budget -= 1;
L_00356FF4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357000u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_009D(c, 305u, depth + 1u); else { c.pc = 0x00377240u; return; } if (c.pc != 0x00357000u) [[unlikely]] return; }
L_00357000:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00357394; } }
L_00357008:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 5u));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00357394; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[5].w[0] - 25120u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00354000u < 16384u) { entry = entries_0095[(t - 0x00354000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00357034:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 5u));
    set32(c.r[3], 0u + 16u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00357394; } }
L_0035704C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00357394; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 5u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 32u);
    set32(c.r[4], 0u + 25u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 11u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[16].w[0] + 11u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357090u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 201u, depth + 1u); else { c.pc = 0x00352570u; return; } if (c.pc != 0x00357090u) [[unlikely]] return; }
L_00357090:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00357394; } }
L_00357098:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00357394; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 5u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00357394; } }
L_003570C0:
    set32(c.r[4], c.r[16].w[0] + 11u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003570CCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_009D(c, 305u, depth + 1u); else { c.pc = 0x00377240u; return; } if (c.pc != 0x003570CCu) [[unlikely]] return; }
L_003570CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003570D4u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x003570D4u) [[unlikely]] return; }
L_003570D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 64u);  if (t) { goto L_00357130; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003570F4u); st8((c.r[2].w[0] + 5511u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x003570F4u) [[unlikely]] return; }
L_003570F4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 11u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 6u);  if (t) { goto L_0035711C; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 5u));
    set32(c.r[3], 0u + 16u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00357394; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 1;
L_0035711C:
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 16u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00357394; } }
    set32(c.r[4], 0u + 64u);
    c.budget -= 1;
L_00357130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357138u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x00357138u) [[unlikely]] return; }
L_00357138:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00357394; } }
    set32(c.r[2], 0u + 6u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 54u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357158u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00357158u) [[unlikely]] return; }
L_00357158:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00357394; } }
L_00357160:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00357394; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357180u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0095(c, 365u, depth + 1u); else { c.pc = 0x00357460u; return; } if (c.pc != 0x00357180u) [[unlikely]] return; }
L_00357180:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00357394; } }
L_00357188:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00357394; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003571A8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0095(c, 365u, depth + 1u); else { c.pc = 0x00357460u; return; } if (c.pc != 0x003571A8u) [[unlikely]] return; }
L_003571A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00357394; } }
L_003571B0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00357394; } }
    set32(c.r[2], 0u + 3u);
    set32(c.r[4], 0u + 25u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003571D8u); st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x003571D8u) [[unlikely]] return; }
L_003571D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00357394; } }
L_003571E0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 5u));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00357394; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[5].w[0] - 25152u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00354000u < 16384u) { entry = entries_0095[(t - 0x00354000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0035720C:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 5u));
    set32(c.r[3], 0u + 16u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00357394; } }
L_00357224:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00357394; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 5u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 32u);
    set32(c.r[4], 0u + 38u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 11u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[16].w[0] + 11u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357268u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 201u, depth + 1u); else { c.pc = 0x00352570u; return; } if (c.pc != 0x00357268u) [[unlikely]] return; }
L_00357268:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00357394; } }
L_00357270:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00357394; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 5u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00357394; } }
L_00357298:
    set32(c.r[4], c.r[16].w[0] + 11u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003572A4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_009D(c, 305u, depth + 1u); else { c.pc = 0x00377240u; return; } if (c.pc != 0x003572A4u) [[unlikely]] return; }
L_003572A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003572ACu); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x003572ACu) [[unlikely]] return; }
L_003572AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 64u);  if (t) { goto L_003572EC; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 5u));
    set32(c.r[2], 0u + 16u);
    set32(c.r[3], 0u + 1u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[5], 0u + 4u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003572E0u); st8((c.r[2].w[0] + 5511u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x003572E0u) [[unlikely]] return; }
L_003572E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00357394; } }
    set32(c.r[4], 0u + 64u);
    c.budget -= 1;
L_003572EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003572F4u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x003572F4u) [[unlikely]] return; }
L_003572F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00357394; } }
    set32(c.r[2], 0u + 3u);
    set32(c.r[4], 0u + 38u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035730Cu); st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x0035730Cu) [[unlikely]] return; }
L_0035730C:
    set32(c.r[5], 0u + 54u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357318u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00357318u) [[unlikely]] return; }
L_00357318:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00357394; } }
L_00357320:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00357394; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 11u));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 3u);  goto L_00357360; }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 5u));
    set32(c.r[3], 0u + 16u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00357394; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_00357360:
    set32(c.r[4], 0u + 38u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035736Cu); st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x0035736Cu) [[unlikely]] return; }
L_0035736C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00357394; } }
L_00357374:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00357394; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357394u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0095(c, 365u, depth + 1u); else { c.pc = 0x00357460u; return; } if (c.pc != 0x00357394u) [[unlikely]] return; }
L_00357394:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00357398:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003573B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[7], 0u + 2u);
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[7].d[0]) { set32(c.r[3], 0u + 3u);  goto L_00357448; }
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_00357418; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003573E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00357450; } }
L_003573E4:
    c.r[5].d[0] = ld8((c.r[28].w[0] - 25736u));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00357410; } }
    set32(c.r[5], 0u + 20u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357408u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 30u, depth + 1u); else { c.pc = 0x00378410u; return; } if (c.pc != 0x00357408u) [[unlikely]] return; }
L_00357408:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035744C; } }
L_00357410:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { goto L_0035744C; } }
L_00357418:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0035744C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035743Cu); st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x0035743Cu) [[unlikely]] return; }
L_0035743C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035744C; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_00357448:
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0035744C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00357450:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00357460:
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_00357490; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_00357484; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00357494; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_00357484:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00357494; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_00357490:
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00357494:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003574A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    set32(c.r[2], 0u + 4u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0035752C; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00357520; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035750C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003574FC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003574EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00357538; } }
L_003574EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003574F4u);  if (depth < kMaxDepth) unit_0095(c, 295u, depth + 1u); else { c.pc = 0x00356A70u; return; } if (c.pc != 0x003574F4u) [[unlikely]] return; }
L_003574F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00357534; } }
L_003574FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357504u);  if (depth < kMaxDepth) unit_0095(c, 302u, depth + 1u); else { c.pc = 0x00356B80u; return; } if (c.pc != 0x00357504u) [[unlikely]] return; }
L_00357504:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00357534; } }
L_0035750C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357514u);  if (depth < kMaxDepth) unit_0095(c, 362u, depth + 1u); else { c.pc = 0x003573B0u; return; } if (c.pc != 0x00357514u) [[unlikely]] return; }
L_00357514:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00357534; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_00357520:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0035753C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0035752C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00357538; } }
L_00357534:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00357538:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0035753C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00357550:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00357588; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 4u);  if (t) { goto L_00357634; } }
L_00357588:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 13u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003575F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[18], c.r[2].w[0] - 28704u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[19], c.r[0], c.r[0]);  if (t) { goto L_003575E0; } }
L_003575A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[1] = ld32((c.r[1].w[0] + 18484u));
    c.f[0] = c.r[19].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 18480u));
    c.f[14] = c.r[2].w[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003575D4u); c.f[13] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0099(c, 110u, depth + 1u); else { c.pc = 0x003655A0u; return; } if (c.pc != 0x003575D4u) [[unlikely]] return; }
L_003575D4:
    set32(c.r[18], c.r[18].w[0] + 128u);
    set32(c.r[19], c.r[19].w[0] + 24u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 3;
L_003575E0:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 26120u));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003575A8u | kUnwind; return; } goto L_003575A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00357630; } }
L_003575F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 18480u));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A70000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[13] = ld32((c.r[1].w[0] + 18484u));
    set32(c.r[2], c.r[2].w[0] + 29152u);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357630u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0099(c, 110u, depth + 1u); else { c.pc = 0x003655A0u; return; } if (c.pc != 0x00357630u) [[unlikely]] return; }
L_00357630:
    set32(c.r[4], 0u + 4u);
    c.budget -= 1;
L_00357634:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035763Cu);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0035763Cu) [[unlikely]] return; }
L_0035763C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035764Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x0035764Cu) [[unlikely]] return; }
L_0035764C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 13u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003576CC; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00357748; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 7u));
    c.r[1].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003576A0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 18512u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 18516u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357698u); set32(c.r[4], c.r[2].w[0] - 25064u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00357698u) [[unlikely]] return; }
L_00357698:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_0035774C; } }
L_003576A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 18520u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 18524u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003576C4u); set32(c.r[4], c.r[2].w[0] - 25056u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x003576C4u) [[unlikely]] return; }
L_003576C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00357748; } }
L_003576CC:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 14u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00357748; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 9u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035770C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 18528u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 18532u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035770Cu); set32(c.r[4], c.r[2].w[0] - 25056u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0035770Cu) [[unlikely]] return; }
L_0035770C:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 9u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00357748; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 18536u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 18540u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357748u); set32(c.r[4], c.r[2].w[0] - 25064u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00357748u) [[unlikely]] return; }
L_00357748:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0035774C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00357770:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[6], ld32((c.r[4].w[0] + 28u)));  if (t) { goto L_003577AC; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] + 1u);  goto L_0035779C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00357808; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0035779C:
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 13u));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003577AC:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 13u));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00357804; } }
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 13u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 6;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[5], 0u + 6u);  goto L_003577FC; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_003577E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00357804; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_003577E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003577F0u);  if (depth < kMaxDepth) unit_009D(c, 274u, depth + 1u); else { c.pc = 0x00376B10u; return; } if (c.pc != 0x003577F0u) [[unlikely]] return; }
L_003577F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00357804; } }
    set32(c.r[5], 0u + 6u);
    c.budget -= 1;
L_003577FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357804u);  if (depth < kMaxDepth) unit_009D(c, 274u, depth + 1u); else { c.pc = 0x00376B10u; return; } if (c.pc != 0x00357804u) [[unlikely]] return; }
L_00357804:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00357808:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00357810:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[6], ld32((c.r[4].w[0] + 28u)));  if (t) { goto L_00357840; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_0035783C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_003578C4; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0035783C:
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00357840:
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 14u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003578C0; } }
    set32(c.r[5], 0u + 1u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00357898; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 12u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003578C0; } }
    st8((c.r[6].w[0] + 12u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 7u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 18352u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357890u); c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  if (depth < kMaxDepth) unit_009D(c, 274u, depth + 1u); else { c.pc = 0x00376B10u; return; } if (c.pc != 0x00357890u) [[unlikely]] return; }
L_00357890:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003578C0; } }
L_00357898:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 26120u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003578BC; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 7u));
    c.r[3].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003578BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_003578C0; } }
L_003578BC:
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003578C0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_003578C4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003578D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[6], ld32((c.r[4].w[0] + 28u)));  if (t) { goto L_00357970; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0035790C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_00357908; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_003579D4; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00357908:
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0035790C:
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 14u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003579D0; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 12u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003579D0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[2].w[0] + 18400u);
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[6].w[0] + 12u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 7u));
    c.r[2].d[0] = ld8((c.r[6].w[0] + 9u));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357968u); c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));  if (depth < kMaxDepth) unit_009D(c, 274u, depth + 1u); else { c.pc = 0x00376B10u; return; } if (c.pc != 0x00357968u) [[unlikely]] return; }
L_00357968:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003579D0; } }
L_00357970:
    c.r[5].d[0] = ld8((c.r[6].w[0] + 14u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003579C8; } }
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 12u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003579D0; } }
    st8((c.r[6].w[0] + 12u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 7u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].d[0] = ld8((c.r[6].w[0] + 9u));
    set32(c.r[3], c.r[3].w[0] + 18400u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003579C0u); c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));  if (depth < kMaxDepth) unit_009D(c, 274u, depth + 1u); else { c.pc = 0x00376B10u; return; } if (c.pc != 0x003579C0u) [[unlikely]] return; }
L_003579C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003579D0; } }
L_003579C8:
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003579D0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_003579D4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003579E0:
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = ld8((c.r[5].w[0] + 13u));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00357A0C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00357A04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00357A10; } }
L_00357A04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00357A10; } }
L_00357A0C:
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00357A10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00357A20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[5], 0u + 3u);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_00357BDC; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00357B48; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00357A90; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[2], c.r[6].w[0] + 1u);  goto L_00357A70; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_00357C08; } }
    set32(c.r[2], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_00357A70:
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 32u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 112u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 116u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357A90u); st32((c.r[17].w[0] + 116u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x00357A90u) [[unlikely]] return; }
L_00357A90:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00357AD8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357AC4u); st32((c.r[17].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x00357AC4u) [[unlikely]] return; }
L_00357AC4:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357AD0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 274u, depth + 1u); else { c.pc = 0x00376B10u; return; } if (c.pc != 0x00357AD0u) [[unlikely]] return; }
L_00357AD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00357C04; } }
L_00357AD8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 13u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00357AF0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00357AF4; } }
L_00357AF0:
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00357AF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357AFCu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 297u, depth + 1u); else { c.pc = 0x00376EC0u; return; } if (c.pc != 0x00357AFCu) [[unlikely]] return; }
L_00357AFC:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00357B28; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 7u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 18224u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 36u), c.f[0]);  if (t) { goto L_00357C04; } }
L_00357B28:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 18304u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 36u), c.f[0]);  if (t) { goto L_00357C04; } }
L_00357B48:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 14u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00357B78; } }
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBDCC0000u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[5], 0u + 7u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357B70u); st32((c.r[17].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009D(c, 274u, depth + 1u); else { c.pc = 0x00376B10u; return; } if (c.pc != 0x00357B70u) [[unlikely]] return; }
L_00357B70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00357C04; } }
L_00357B78:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 12u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[6].w[0] + 1u);  if (t) { goto L_00357BCC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357B90u); st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 297u, depth + 1u); else { c.pc = 0x00376EC0u; return; } if (c.pc != 0x00357B90u) [[unlikely]] return; }
L_00357B90:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 9u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 18560u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] + 18568u));
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[0] = ld32((c.r[1].w[0] + 18572u));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 112u), c.f[0]);  if (t) { goto L_00357C04; } }
    set32(c.r[2], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_00357BCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357BD4u); st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x00357BD4u) [[unlikely]] return; }
L_00357BD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00357C04; } }
L_00357BDC:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 12u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00357BFC; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357BF4u); st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x00357BF4u) [[unlikely]] return; }
L_00357BF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00357C04; } }
L_00357BFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357C04u);  if (depth < kMaxDepth) unit_009D(c, 299u, depth + 1u); else { c.pc = 0x00376F50u; return; } if (c.pc != 0x00357C04u) [[unlikely]] return; }
L_00357C04:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00357C08:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00357C20:
    set32(c.r[6], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[5], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[6].w[0] + 13u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_00357C70; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00357C44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00357C84; } }
L_00357C44:
    c.r[3].d[0] = ld8((c.r[6].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00357C58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00357C5C; } }
L_00357C58:
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00357C5C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x432A0000u);
    st32((c.r[4].w[0] + 32u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC30B0000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 36u), c.r[3].w[0]);  if (t) { goto L_00357C84; } }
L_00357C70:
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43340000u);
    st32((c.r[4].w[0] + 32u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC33D0000u);
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 5;
L_00357C84:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00357C90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357CA0u);  if (depth < kMaxDepth) unit_00A0(c, 217u, depth + 1u); else { c.pc = 0x003820F0u; return; } if (c.pc != 0x00357CA0u) [[unlikely]] return; }
L_00357CA0:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[3].d[0]) { mmi::paddub(c.r[2], c.r[3], c.r[0]);  goto L_00357CC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00357CC0; } }
    mmi::paddub(c.r[2], c.r[3], c.r[0]);
    c.budget -= 1;
L_00357CC0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00357CD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357CE0u); set32(c.r[5], c.r[29].w[0] + 28u);  if (depth < kMaxDepth) unit_00A0(c, 221u, depth + 1u); else { c.pc = 0x00382190u; return; } if (c.pc != 0x00357CE0u) [[unlikely]] return; }
L_00357CE0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u - 1u);  goto L_00357D28; }
    set32(c.r[3], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00357D24; } }
    set32(c.r[3], 0u - 3u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { mmi::paddub(c.r[2], c.r[0], c.r[0]);  goto L_00357D1C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00357D30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00357D24; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_00357D1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00357D3C; } }
L_00357D24:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00357D28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00357D38; } }
L_00357D30:
    set32(c.r[2], ld32((c.r[29].w[0] + 28u)));
    c.budget -= 2;
L_00357D38:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00357D3C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00357D50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357D60u);  if (depth < kMaxDepth) unit_00A0(c, 219u, depth + 1u); else { c.pc = 0x00382140u; return; } if (c.pc != 0x00357D60u) [[unlikely]] return; }
L_00357D60:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; mmi::paddub(c.r[2], c.r[3], c.r[0]);  if (t) { goto L_00357D78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00357D84; } }
    mmi::paddub(c.r[2], c.r[3], c.r[0]);
    c.budget -= 1;
L_00357D78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00357D88; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_00357D84:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00357D88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00357D90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357DA0u); set32(c.r[5], c.r[29].w[0] + 24u);  if (depth < kMaxDepth) unit_00A0(c, 192u, depth + 1u); else { c.pc = 0x00381E70u; return; } if (c.pc != 0x00357DA0u) [[unlikely]] return; }
L_00357DA0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00357DB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00357DC0; } }
L_00357DB0:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] ^ 4ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
L_00357DC0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00357DD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    st32((c.r[29].w[0] + 24u), c.r[4].w[0]);
    st16((c.r[29].w[0] + 28u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[4], c.r[29].w[0] + 24u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357DECu); st16((c.r[29].w[0] + 30u), static_cast<std::uint16_t>(c.r[6].w[0]));  if (depth < kMaxDepth) unit_00A0(c, 185u, depth + 1u); else { c.pc = 0x00381D90u; return; } if (c.pc != 0x00357DECu) [[unlikely]] return; }
L_00357DEC:
    st32((c.r[28].w[0] - 25168u), 0u);
    st32((c.r[28].w[0] - 25164u), 0u);
    st8((c.r[28].w[0] - 25160u), static_cast<std::uint8_t>(0u));
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00357E10:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[29].w[0] + 88u);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357E3Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00A0(c, 192u, depth + 1u); else { c.pc = 0x00381E70u; return; } if (c.pc != 0x00357E3Cu) [[unlikely]] return; }
L_00357E3C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00357E50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_00357F44; } }
L_00357E50:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 25160u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[29].w[0] + 92u);  if (t) { goto L_00357EB8; } }
    c.r[2].d[0] = ld16((c.r[16].w[0]));
    c.r[2].d[0] = c.r[2].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], 0u + 12u);  if (t) { goto L_00357EB8; } }
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357E78u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0095(c, 415u, depth + 1u); else { c.pc = 0x00357F70u; return; } if (c.pc != 0x00357E78u) [[unlikely]] return; }
L_00357E78:
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 25160u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 4u));
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[28].w[0] - 25164u), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 5u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25164u)));
    st32((c.r[28].w[0] - 25168u), 0u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[28].w[0] - 25164u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[28].w[0] - 25164u));
    st32((c.r[28].w[0] - 25164u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0]));
    set32(c.r[2], c.r[2].w[0] - 12u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 16;
L_00357EB8:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 25160u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00357F40; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 25164u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 25168u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00357EEC; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[28].w[0] - 25168u), 0u);
    st32((c.r[28].w[0] - 25164u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 25160u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00357F40; } }
L_00357EEC:
    c.r[16].d[0] = ld16((c.r[29].w[0] + 92u));
    c.r[1].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[1].d[0] == 0) c.r[16].d[0] = c.r[2].d[0];
    c.r[1].d[0] = 0ll < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[17].w[0] + c.r[3].w[0]);  if (t) { goto L_00357F3C; } }
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357F10u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0095(c, 415u, depth + 1u); else { c.pc = 0x00357F70u; return; } if (c.pc != 0x00357F10u) [[unlikely]] return; }
L_00357F10:
    set32(c.r[2], ld32((c.r[28].w[0] - 25168u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 25164u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[28].w[0] - 25168u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 25168u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00357F3C; } }
    st32((c.r[28].w[0] - 25168u), 0u);
    st32((c.r[28].w[0] - 25164u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 25160u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00357F40; } }
L_00357F3C:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_00357F40:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00357F44:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00357F60:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_00A0(c, 209u, depth); }
L_00357F70:
    c.r[6].d[0] = c.r[6].d[0] << 48;
    c.budget -= 3;
    { c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);  [[clang::musttail]] return unit_00A0(c, 205u, depth); }
L_00357F80:
    c.r[6].d[0] = c.r[6].d[0] << 48;
    c.budget -= 3;
    { c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);  [[clang::musttail]] return unit_00A0(c, 207u, depth); }
L_00357F90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357FA0u);  if (depth < kMaxDepth) unit_00A0(c, 183u, depth + 1u); else { c.pc = 0x00381D60u; return; } if (c.pc != 0x00357FA0u) [[unlikely]] return; }
L_00357FA0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00357FC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357FD0u);  if (depth < kMaxDepth) unit_00A0(c, 211u, depth + 1u); else { c.pc = 0x00382060u; return; } if (c.pc != 0x00357FD0u) [[unlikely]] return; }
L_00357FD0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00357FF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358000u);  if (depth < kMaxDepth) unit_00A0(c, 223u, depth + 1u); else { c.pc = 0x00382230u; return; } if (c.pc != 0x00358000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0096(c, 1u, depth);
}

}
