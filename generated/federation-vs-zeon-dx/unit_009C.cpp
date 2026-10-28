#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_009C[4096] = {
    1, 2, 3, 0, 4, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 10,
    0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 14, 0, 15, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 28,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 31,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0,
    35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0,
    41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    65, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0,
    0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 93,
    0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0,
    102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0,
    108, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 113, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0,
    0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 128,
    0, 0, 0, 0, 0, 0, 0, 129, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0,
    0, 0, 0, 0, 0, 135, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0,
    139, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0,
    0, 0, 0, 0, 0, 0, 149, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0,
    0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158,
    0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    164, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0,
    0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0,
    0, 0, 189, 0, 190, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 194, 0, 0, 195, 0, 196, 0, 0, 0,
    0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0,
    0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0,
    209, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220,
    0, 0, 0, 0, 221, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 229, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0,
    0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 251, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 256,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268,
    0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 270, 0, 271, 0, 272, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0,
    0, 0, 0, 277, 0, 278, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0,
    0, 0, 0, 297, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0, 0, 0, 0,
    0, 318, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 326, 0,
    327, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 334, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0,
    342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 347, 0, 0, 0, 0, 348, 0, 0, 0,
    349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 352,
    0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0,
    0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0,
    358, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 360, 0, 0, 0, 0, 361, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 363, 0, 364,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 370, 0, 0,
    371, 0, 0, 0, 0, 0, 0, 0, 372, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 375, 0, 0, 0, 0, 376, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 381, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 384, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 386, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 389, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    392, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0,
    0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0,
    0, 405, 0, 0, 406, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 409, 0, 0, 0, 0, 0, 410, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 414, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 418, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0,
    0, 0, 425, 0, 0, 0, 426, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 429, 0, 430, 0, 431, 0, 432, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0,
    0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0,
    438, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 442, 0, 0, 0, 0,
};

void unit_009C(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00370000;
    case 2u: goto L_00370004;
    case 3u: goto L_00370008;
    case 4u: goto L_00370010;
    case 5u: goto L_00370014;
    case 6u: goto L_00370038;
    case 7u: goto L_00370044;
    case 8u: goto L_00370060;
    case 9u: goto L_00370068;
    case 10u: goto L_0037007C;
    case 11u: goto L_0037008C;
    case 12u: goto L_003700A0;
    case 13u: goto L_003700EC;
    case 14u: goto L_00370118;
    case 15u: goto L_00370120;
    case 16u: goto L_00370130;
    case 17u: goto L_00370140;
    case 18u: goto L_00370154;
    case 19u: goto L_00370178;
    case 20u: goto L_003701A8;
    case 21u: goto L_003701E0;
    case 22u: goto L_003701EC;
    case 23u: goto L_00370214;
    case 24u: goto L_00370240;
    case 25u: goto L_00370268;
    case 26u: goto L_003702AC;
    case 27u: goto L_003702F4;
    case 28u: goto L_003702FC;
    case 29u: goto L_00370328;
    case 30u: goto L_00370374;
    case 31u: goto L_0037037C;
    case 32u: goto L_003703B0;
    case 33u: goto L_003703C4;
    case 34u: goto L_003703F4;
    case 35u: goto L_00370400;
    case 36u: goto L_00370410;
    case 37u: goto L_00370440;
    case 38u: goto L_00370448;
    case 39u: goto L_00370468;
    case 40u: goto L_00370478;
    case 41u: goto L_00370480;
    case 42u: goto L_003704B8;
    case 43u: goto L_00370508;
    case 44u: goto L_0037051C;
    case 45u: goto L_00370530;
    case 46u: goto L_00370548;
    case 47u: goto L_003705CC;
    case 48u: goto L_003705D4;
    case 49u: goto L_0037063C;
    case 50u: goto L_00370640;
    case 51u: goto L_00370650;
    case 52u: goto L_00370698;
    case 53u: goto L_003706A4;
    case 54u: goto L_003706C8;
    case 55u: goto L_003706D4;
    case 56u: goto L_003706E4;
    case 57u: goto L_0037071C;
    case 58u: goto L_0037073C;
    case 59u: goto L_0037074C;
    case 60u: goto L_003707DC;
    case 61u: goto L_00370840;
    case 62u: goto L_0037084C;
    case 63u: goto L_003708C4;
    case 64u: goto L_003708CC;
    case 65u: goto L_00370900;
    case 66u: goto L_00370914;
    case 67u: goto L_00370928;
    case 68u: goto L_0037093C;
    case 69u: goto L_00370948;
    case 70u: goto L_00370958;
    case 71u: goto L_00370990;
    case 72u: goto L_003709B0;
    case 73u: goto L_003709C0;
    case 74u: goto L_00370A00;
    case 75u: goto L_00370A40;
    case 76u: goto L_00370A54;
    case 77u: goto L_00370A68;
    case 78u: goto L_00370A8C;
    case 79u: goto L_00370AB4;
    case 80u: goto L_00370AC0;
    case 81u: goto L_00370B20;
    case 82u: goto L_00370B70;
    case 83u: goto L_00370BA4;
    case 84u: goto L_00370C08;
    case 85u: goto L_00370C3C;
    case 86u: goto L_00370C40;
    case 87u: goto L_00370C58;
    case 88u: goto L_00370C70;
    case 89u: goto L_00370C9C;
    case 90u: goto L_00370CA4;
    case 91u: goto L_00370CAC;
    case 92u: goto L_00370CDC;
    case 93u: goto L_00370CFC;
    case 94u: goto L_00370D04;
    case 95u: goto L_00370D48;
    case 96u: goto L_00370D84;
    case 97u: goto L_00370DB4;
    case 98u: goto L_00370DF8;
    case 99u: goto L_00370E28;
    case 100u: goto L_00370E40;
    case 101u: goto L_00370E70;
    case 102u: goto L_00370E80;
    case 103u: goto L_00370E94;
    case 104u: goto L_00370EA8;
    case 105u: goto L_00370EBC;
    case 106u: goto L_00370ED0;
    case 107u: goto L_00370EF8;
    case 108u: goto L_00370F00;
    case 109u: goto L_00370F10;
    case 110u: goto L_00370F20;
    case 111u: goto L_00370F30;
    case 112u: goto L_00370F3C;
    case 113u: goto L_00370F8C;
    case 114u: goto L_00370F94;
    case 115u: goto L_00370FA4;
    case 116u: goto L_00370FC4;
    case 117u: goto L_00370FCC;
    case 118u: goto L_00370FE4;
    case 119u: goto L_00371004;
    case 120u: goto L_0037100C;
    case 121u: goto L_00371030;
    case 122u: goto L_00371048;
    case 123u: goto L_00371068;
    case 124u: goto L_00371090;
    case 125u: goto L_003710CC;
    case 126u: goto L_003710D8;
    case 127u: goto L_003710F0;
    case 128u: goto L_003710FC;
    case 129u: goto L_0037111C;
    case 130u: goto L_00371124;
    case 131u: goto L_00371148;
    case 132u: goto L_00371150;
    case 133u: goto L_00371168;
    case 134u: goto L_00371174;
    case 135u: goto L_00371194;
    case 136u: goto L_0037119C;
    case 137u: goto L_003711C0;
    case 138u: goto L_003711F4;
    case 139u: goto L_00371200;
    case 140u: goto L_00371218;
    case 141u: goto L_00371224;
    case 142u: goto L_00371248;
    case 143u: goto L_00371250;
    case 144u: goto L_00371278;
    case 145u: goto L_003712C8;
    case 146u: goto L_003712D4;
    case 147u: goto L_003712EC;
    case 148u: goto L_003712F8;
    case 149u: goto L_00371318;
    case 150u: goto L_00371320;
    case 151u: goto L_00371344;
    case 152u: goto L_0037134C;
    case 153u: goto L_00371364;
    case 154u: goto L_00371370;
    case 155u: goto L_00371390;
    case 156u: goto L_00371398;
    case 157u: goto L_003713BC;
    case 158u: goto L_003713FC;
    case 159u: goto L_00371408;
    case 160u: goto L_00371420;
    case 161u: goto L_0037142C;
    case 162u: goto L_00371450;
    case 163u: goto L_00371458;
    case 164u: goto L_00371480;
    case 165u: goto L_00371488;
    case 166u: goto L_003714A4;
    case 167u: goto L_003714B0;
    case 168u: goto L_0037150C;
    case 169u: goto L_00371530;
    case 170u: goto L_00371540;
    case 171u: goto L_00371550;
    case 172u: goto L_003715A8;
    case 173u: goto L_003715BC;
    case 174u: goto L_003715D4;
    case 175u: goto L_003715E8;
    case 176u: goto L_003715F8;
    case 177u: goto L_0037160C;
    case 178u: goto L_00371644;
    case 179u: goto L_00371650;
    case 180u: goto L_00371660;
    case 181u: goto L_00371688;
    case 182u: goto L_003716AC;
    case 183u: goto L_003716CC;
    case 184u: goto L_003716E0;
    case 185u: goto L_003716F4;
    case 186u: goto L_003717B0;
    case 187u: goto L_003717DC;
    case 188u: goto L_003717F0;
    case 189u: goto L_00371808;
    case 190u: goto L_00371810;
    case 191u: goto L_0037181C;
    case 192u: goto L_00371840;
    case 193u: goto L_0037184C;
    case 194u: goto L_0037185C;
    case 195u: goto L_00371868;
    case 196u: goto L_00371870;
    case 197u: goto L_0037188C;
    case 198u: goto L_003718D8;
    case 199u: goto L_00371900;
    case 200u: goto L_003719C0;
    case 201u: goto L_00371A3C;
    case 202u: goto L_00371A5C;
    case 203u: goto L_00371A70;
    case 204u: goto L_00371A90;
    case 205u: goto L_00371AA0;
    case 206u: goto L_00371AC0;
    case 207u: goto L_00371AD4;
    case 208u: goto L_00371AE8;
    case 209u: goto L_00371B00;
    case 210u: goto L_00371B0C;
    case 211u: goto L_00371B20;
    case 212u: goto L_00371B4C;
    case 213u: goto L_00371BBC;
    case 214u: goto L_00371BD0;
    case 215u: goto L_00371BE0;
    case 216u: goto L_00371BF0;
    case 217u: goto L_00371C80;
    case 218u: goto L_00371CB8;
    case 219u: goto L_00371CEC;
    case 220u: goto L_00371CFC;
    case 221u: goto L_00371D10;
    case 222u: goto L_00371D18;
    case 223u: goto L_00371D30;
    case 224u: goto L_00371D6C;
    case 225u: goto L_00371DAC;
    case 226u: goto L_00371DE0;
    case 227u: goto L_00371E18;
    case 228u: goto L_00371E2C;
    case 229u: goto L_00371E34;
    case 230u: goto L_00371E3C;
    case 231u: goto L_00371E4C;
    case 232u: goto L_00371E78;
    case 233u: goto L_00371E9C;
    case 234u: goto L_00371EB8;
    case 235u: goto L_00371ECC;
    case 236u: goto L_00371F10;
    case 237u: goto L_00371F38;
    case 238u: goto L_00371F54;
    case 239u: goto L_00371F70;
    case 240u: goto L_00371FA0;
    case 241u: goto L_00371FB4;
    case 242u: goto L_00371FC8;
    case 243u: goto L_00371FD0;
    case 244u: goto L_00372008;
    case 245u: goto L_00372064;
    case 246u: goto L_00372098;
    case 247u: goto L_00372118;
    case 248u: goto L_00372154;
    case 249u: goto L_00372188;
    case 250u: goto L_0037219C;
    case 251u: goto L_003721BC;
    case 252u: goto L_003721C4;
    case 253u: goto L_003721DC;
    case 254u: goto L_00372218;
    case 255u: goto L_00372264;
    case 256u: goto L_0037227C;
    case 257u: goto L_003722D4;
    case 258u: goto L_00372340;
    case 259u: goto L_00372374;
    case 260u: goto L_003723A0;
    case 261u: goto L_003723C4;
    case 262u: goto L_003723D4;
    case 263u: goto L_003723DC;
    case 264u: goto L_0037240C;
    case 265u: goto L_0037241C;
    case 266u: goto L_00372440;
    case 267u: goto L_00372448;
    case 268u: goto L_0037247C;
    case 269u: goto L_00372494;
    case 270u: goto L_0037250C;
    case 271u: goto L_00372514;
    case 272u: goto L_0037251C;
    case 273u: goto L_00372524;
    case 274u: goto L_00372538;
    case 275u: goto L_00372564;
    case 276u: goto L_00372574;
    case 277u: goto L_0037258C;
    case 278u: goto L_00372594;
    case 279u: goto L_0037259C;
    case 280u: goto L_003725C4;
    case 281u: goto L_003725E0;
    case 282u: goto L_00372628;
    case 283u: goto L_00372638;
    case 284u: goto L_00372644;
    case 285u: goto L_00372690;
    case 286u: goto L_003726AC;
    case 287u: goto L_003726D8;
    case 288u: goto L_00372708;
    case 289u: goto L_00372734;
    case 290u: goto L_00372780;
    case 291u: goto L_003727C8;
    case 292u: goto L_003727DC;
    case 293u: goto L_00372820;
    case 294u: goto L_00372840;
    case 295u: goto L_00372850;
    case 296u: goto L_0037286C;
    case 297u: goto L_0037288C;
    case 298u: goto L_00372894;
    case 299u: goto L_003728C4;
    case 300u: goto L_00372900;
    case 301u: goto L_0037292C;
    case 302u: goto L_0037293C;
    case 303u: goto L_0037298C;
    case 304u: goto L_003729E0;
    case 305u: goto L_003729F8;
    case 306u: goto L_00372A30;
    case 307u: goto L_00372AB8;
    case 308u: goto L_00372B10;
    case 309u: goto L_00372B24;
    case 310u: goto L_00372B4C;
    case 311u: goto L_00372B8C;
    case 312u: goto L_00372C1C;
    case 313u: goto L_00372C30;
    case 314u: goto L_00372C54;
    case 315u: goto L_00372C70;
    case 316u: goto L_00372CD8;
    case 317u: goto L_00372CEC;
    case 318u: goto L_00372D04;
    case 319u: goto L_00372D18;
    case 320u: goto L_00372D34;
    case 321u: goto L_00372D44;
    case 322u: goto L_00372D58;
    case 323u: goto L_00372D84;
    case 324u: goto L_00372DAC;
    case 325u: goto L_00372DD8;
    case 326u: goto L_00372DF8;
    case 327u: goto L_00372E00;
    case 328u: goto L_00372E14;
    case 329u: goto L_00372E30;
    case 330u: goto L_00372E44;
    case 331u: goto L_00372E58;
    case 332u: goto L_00372E80;
    case 333u: goto L_00372EB0;
    case 334u: goto L_00372EC8;
    case 335u: goto L_00372ED0;
    case 336u: goto L_00372F00;
    case 337u: goto L_00372F60;
    case 338u: goto L_00372F94;
    case 339u: goto L_00372FF8;
    case 340u: goto L_00373058;
    case 341u: goto L_0037306C;
    case 342u: goto L_00373080;
    case 343u: goto L_003730E0;
    case 344u: goto L_00373120;
    case 345u: goto L_00373130;
    case 346u: goto L_00373154;
    case 347u: goto L_0037315C;
    case 348u: goto L_00373170;
    case 349u: goto L_00373180;
    case 350u: goto L_003731C0;
    case 351u: goto L_003731EC;
    case 352u: goto L_003731FC;
    case 353u: goto L_00373214;
    case 354u: goto L_00373270;
    case 355u: goto L_00373294;
    case 356u: goto L_003732B8;
    case 357u: goto L_003732DC;
    case 358u: goto L_00373300;
    case 359u: goto L_00373324;
    case 360u: goto L_0037332C;
    case 361u: goto L_00373340;
    case 362u: goto L_00373354;
    case 363u: goto L_00373374;
    case 364u: goto L_0037337C;
    case 365u: goto L_003733AC;
    case 366u: goto L_003733C0;
    case 367u: goto L_003733F0;
    case 368u: goto L_00373424;
    case 369u: goto L_0037345C;
    case 370u: goto L_00373474;
    case 371u: goto L_00373480;
    case 372u: goto L_003734A0;
    case 373u: goto L_003734A8;
    case 374u: goto L_003734D8;
    case 375u: goto L_003734E0;
    case 376u: goto L_003734F4;
    case 377u: goto L_00373524;
    case 378u: goto L_0037352C;
    case 379u: goto L_00373560;
    case 380u: goto L_00373590;
    case 381u: goto L_003735A8;
    case 382u: goto L_003735B4;
    case 383u: goto L_003735E4;
    case 384u: goto L_003735EC;
    case 385u: goto L_00373620;
    case 386u: goto L_00373628;
    case 387u: goto L_0037363C;
    case 388u: goto L_0037366C;
    case 389u: goto L_00373674;
    case 390u: goto L_003736A8;
    case 391u: goto L_003736C0;
    case 392u: goto L_00373800;
    case 393u: goto L_00373820;
    case 394u: goto L_00373834;
    case 395u: goto L_0037385C;
    case 396u: goto L_00373870;
    case 397u: goto L_00373890;
    case 398u: goto L_003738C0;
    case 399u: goto L_003738EC;
    case 400u: goto L_0037391C;
    case 401u: goto L_00373950;
    case 402u: goto L_00373960;
    case 403u: goto L_00373994;
    case 404u: goto L_003739E0;
    case 405u: goto L_00373A04;
    case 406u: goto L_00373A10;
    case 407u: goto L_00373A2C;
    case 408u: goto L_00373A50;
    case 409u: goto L_00373A5C;
    case 410u: goto L_00373A74;
    case 411u: goto L_00373AA0;
    case 412u: goto L_00373B00;
    case 413u: goto L_00373B5C;
    case 414u: goto L_00373B64;
    case 415u: goto L_00373BC0;
    case 416u: goto L_00373C30;
    case 417u: goto L_00373CA0;
    case 418u: goto L_00373CB4;
    case 419u: goto L_00373CBC;
    case 420u: goto L_00373CF0;
    case 421u: goto L_00373D1C;
    case 422u: goto L_00373D3C;
    case 423u: goto L_00373D54;
    case 424u: goto L_00373D74;
    case 425u: goto L_00373D88;
    case 426u: goto L_00373D98;
    case 427u: goto L_00373DA8;
    case 428u: goto L_00373DD4;
    case 429u: goto L_00373DDC;
    case 430u: goto L_00373DE4;
    case 431u: goto L_00373DEC;
    case 432u: goto L_00373DF4;
    case 433u: goto L_00373E68;
    case 434u: goto L_00373ED0;
    case 435u: goto L_00373EF8;
    case 436u: goto L_00373F08;
    case 437u: goto L_00373F64;
    case 438u: goto L_00373F80;
    case 439u: goto L_00373F9C;
    case 440u: goto L_00373FB8;
    case 441u: goto L_00373FDC;
    case 442u: goto L_00373FEC;
    default: bad_entry(c, 0x00370000u); return;
    }
L_00370000:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00370004:
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00370008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370010u); st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x00370010u) [[unlikely]] return; }
L_00370010:
    st32((c.r[17].w[0] + 32u), 0u);
    c.budget -= 1;
L_00370014:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 20712u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 12u));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037004C; } }
    goto L_0037003C;
L_00370038:
    c.budget -= 1;
L_0037003C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370044u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 297u, depth + 1u); else { c.pc = 0x00376EC0u; return; } if (c.pc != 0x00370044u) [[unlikely]] return; }
L_00370044:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370088; } }
L_0037004C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370060u); st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x00370060u) [[unlikely]] return; }
L_00370060:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370088; } }
L_00370068:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 12u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00370084; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037007Cu);  if (depth < kMaxDepth) unit_009D(c, 299u, depth + 1u); else { c.pc = 0x00376F50u; return; } if (c.pc != 0x0037007Cu) [[unlikely]] return; }
L_0037007C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370088; } }
L_00370084:
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00370088:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0037008C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003700A0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(14ll) ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00370E3C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] - 22176u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00370000u < 16384u) { entry = entries_009C[(t - 0x00370000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003700EC:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 2u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 28352u);
    set32(c.r[3], 0u + 1800u);
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[5], c.r[2].w[0] - 3616u);
    set32(c.r[6], 0u + 1600u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370118u); st16((c.r[28].w[0] - 24892u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x00370118u) [[unlikely]] return; }
L_00370118:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370120u);  if (depth < kMaxDepth) unit_009D(c, 283u, depth + 1u); else { c.pc = 0x00376BE0u; return; } if (c.pc != 0x00370120u) [[unlikely]] return; }
L_00370120:
    set32(c.r[5], 0u + 20u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370130u); c.r[4].sd[0] = static_cast<std::int32_t>(0xFF000000u);  if (depth < kMaxDepth) unit_009E(c, 29u, depth + 1u); else { c.pc = 0x00378400u; return; } if (c.pc != 0x00370130u) [[unlikely]] return; }
L_00370130:
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[18], c.r[0], c.r[0]);  if (t) { goto L_00370248; } }
L_00370140:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], c.r[2].w[0] + 640u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370154u); set32(c.r[5], c.r[2].w[0] + 1344u);  if (depth < kMaxDepth) unit_0006(c, 31u, depth + 1u); else { c.pc = 0x00118618u; return; } if (c.pc != 0x00370154u) [[unlikely]] return; }
L_00370154:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] + 1u);  if (t) { goto L_0037023C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 28352u);
    set32(c.r[5], 0u + 50u);
    set32(c.r[2], c.r[3].w[0] + c.r[18].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370178u); set32(c.r[6], c.r[2].w[0] + 1344u);  if (depth < kMaxDepth) unit_009E(c, 35u, depth + 1u); else { c.pc = 0x00378490u; return; } if (c.pc != 0x00370178u) [[unlikely]] return; }
L_00370178:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003701C8; } }
    set32(c.r[4], c.r[2].w[0] << 5);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[2].w[0] + 28352u);
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[19], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[19].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003701A8u); set32(c.r[5], c.r[2].w[0] + 1352u);  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x003701A8u) [[unlikely]] return; }
L_003701A8:
    set32(c.r[3], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[19].w[0] + 28u);  if (t) { goto L_00370238; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_00370238; } }
L_003701C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[2].w[0] + 28224u);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 7u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 6;
L_003701E0:
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003701ECu); set32(c.r[5], c.r[2].w[0] + 1344u);  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x003701ECu) [[unlikely]] return; }
L_003701EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[2].w[0] + 28224u);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 7u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], c.r[3].w[0] + 8u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370214u); set32(c.r[5], c.r[2].w[0] + 1352u);  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x00370214u) [[unlikely]] return; }
L_00370214:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 7u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] + 28224u);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 28u), 0u);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 7u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
L_00370238:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0037023C:
    set32(c.r[18], c.r[18].w[0] + 704u);
    c.budget -= 1;
L_00370240:
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_00370248:
    c.r[2].d[0] = c.r[17].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00370140u | kUnwind; return; } goto L_00370140; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 28352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370268u); set32(c.r[5], 0u + 50u);  if (depth < kMaxDepth) unit_009E(c, 33u, depth + 1u); else { c.pc = 0x00378450u; return; } if (c.pc != 0x00370268u) [[unlikely]] return; }
L_00370268:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 50u);  if (t) { goto L_00370288; } }
    set32(c.r[2], 0u + 9u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00370290; } }
    set32(c.r[3], 0u + 50u);
    c.budget -= 1;
L_00370288:
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00370290:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 7u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00370E40; } }
    set32(c.r[2], 0u + 9u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00370E3C; } }
L_003702AC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00370E3C; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[2], 0u + 34u);
    set32(c.r[4], 0u + 130u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5510u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003702F4u); set32(c.r[5], c.r[2].w[0] + 5510u);  if (depth < kMaxDepth) unit_0094(c, 201u, depth + 1u); else { c.pc = 0x00352570u; return; } if (c.pc != 0x003702F4u) [[unlikely]] return; }
L_003702F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370E3C; } }
L_003702FC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00370E3C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00370E3C; } }
L_00370328:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 24892u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[28].w[0] - 24892u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 24892u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00370360; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5510u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00370E3C; } }
L_00370360:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370374u); set32(c.r[4], c.r[2].w[0] + 5510u);  if (depth < kMaxDepth) unit_009D(c, 305u, depth + 1u); else { c.pc = 0x00377240u; return; } if (c.pc != 0x00370374u) [[unlikely]] return; }
L_00370374:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037037Cu); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x0037037Cu) [[unlikely]] return; }
L_0037037C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 64u);  if (t) { goto L_003703BC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], 0u + 16u);
    set32(c.r[5], 0u + 4u);
    st8((c.r[3].w[0] + 5511u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 2u));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003703B0u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x003703B0u) [[unlikely]] return; }
L_003703B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 4u);  if (t) { goto L_003703F8; } }
    set32(c.r[4], 0u + 64u);
    c.budget -= 1;
L_003703BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003703C4u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x003703C4u) [[unlikely]] return; }
L_003703C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003703F4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], c.r[2].w[0] + 5510u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 5510u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003703F4; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], 0u + 54u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003703F4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x003703F4u) [[unlikely]] return; }
L_003703F4:
    set32(c.r[4], 0u + 4u);
    c.budget -= 1;
L_003703F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370400u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x00370400u) [[unlikely]] return; }
L_00370400:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370410u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x00370410u) [[unlikely]] return; }
L_00370410:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 24892u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x88880000u);
    c.r[3].d[0] = c.r[2].d[0] | 34953ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[2].w[0] - 22368u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[6].w[0] >> 31);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 12;
L_00370440:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370448u); set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x00370448u) [[unlikely]] return; }
L_00370448:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x439A0000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370468u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00370468u) [[unlikely]] return; }
L_00370468:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370478u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x00370478u) [[unlikely]] return; }
L_00370478:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370E3C; } }
L_00370480:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00370E3C; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[2], 0u + 12u);
    set32(c.r[4], 0u + 130u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003704B8u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x003704B8u) [[unlikely]] return; }
L_003704B8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00370E3C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 5510u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 9u);  if (t) { goto L_0037053C; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 2u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] - 784u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 18u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370508u); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x00370508u) [[unlikely]] return; }
L_00370508:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037051Cu); set32(c.r[5], 0u + 19u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0037051Cu) [[unlikely]] return; }
L_0037051C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] - 64u);
    set32(c.r[5], 0u + 7u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370530u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x00370530u) [[unlikely]] return; }
L_00370530:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370E3C; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 1;
L_0037053C:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00370E3C; } }
L_00370548:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[6], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_00370754; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00370590; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_00370578; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370E3C; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00370578:
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1800u);
    st16((c.r[28].w[0] - 24892u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00370E3C; } }
L_00370590:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 24892u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[28].w[0] - 24892u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 24892u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003705B8; } }
    set32(c.r[2], 0u + 8u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00370E3C; } }
L_003705B8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 7u));
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003705CCu); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_009D(c, 305u, depth + 1u); else { c.pc = 0x00377240u; return; } if (c.pc != 0x003705CCu) [[unlikely]] return; }
L_003705CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003705D4u); set32(c.r[4], 0u + 1024u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x003705D4u) [[unlikely]] return; }
L_003705D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 2048u);  if (t) { goto L_00370648; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 18u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[4], 0u + 64u);  if (t) { goto L_0037069C; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] + 28252u);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00370698; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 18u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] + 28252u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8u));
    set32(c.r[5], 0u + 43u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037063Cu); st32((c.r[2].w[0]), c.r[6].w[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0037063Cu) [[unlikely]] return; }
L_0037063C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370698; } }
    goto L_00370644;
L_00370640:
    c.budget -= 1;
L_00370644:
    set32(c.r[4], 0u + 2048u);
    c.budget -= 1;
L_00370648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370650u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x00370650u) [[unlikely]] return; }
L_00370650:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00370698; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[2].w[0] + 28252u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00370698; } }
    st32((c.r[4].w[0]), 0u);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 18u));
    set32(c.r[5], 0u + 43u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370698u); st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00370698u) [[unlikely]] return; }
L_00370698:
    set32(c.r[4], 0u + 64u);
    c.budget -= 1;
L_0037069C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003706A4u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x003706A4u) [[unlikely]] return; }
L_003706A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 4u);  if (t) { goto L_003706CC; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[5], 0u + 54u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003706C8u); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x003706C8u) [[unlikely]] return; }
L_003706C8:
    set32(c.r[4], 0u + 4u);
    c.budget -= 1;
L_003706CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003706D4u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x003706D4u) [[unlikely]] return; }
L_003706D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003706E4u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x003706E4u) [[unlikely]] return; }
L_003706E4:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 24892u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x88880000u);
    c.r[3].d[0] = c.r[2].d[0] | 34953ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[2].w[0] - 22368u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[6].w[0] >> 31);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037071Cu); set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x0037071Cu) [[unlikely]] return; }
L_0037071C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44130000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A40000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037073Cu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0037073Cu) [[unlikely]] return; }
L_0037073C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037074Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x0037074Cu) [[unlikely]] return; }
L_0037074C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370E3C; } }
L_00370754:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00370E3C; } }
    set32(c.r[4], 0u + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] + 28252u);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003707C8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 18u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00370E3C; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] + 28252u);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[4].w[0]);  if (t) { goto L_00370E3C; } }
L_003707C8:
    st32((c.r[3].w[0]), 0u);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 18u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00370E3C; } }
L_003707DC:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00370A08; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_003709C8; } }
    set32(c.r[6], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0037087C; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_00370854; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_00370824; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370E3C; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00370824:
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 1800u);
    set32(c.r[2], 0u + 32u);
    st8((c.r[5].w[0] + 5510u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[28].w[0] - 24892u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 7;
L_00370840:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037084Cu); set32(c.r[5], c.r[2].w[0] + 5510u);  if (depth < kMaxDepth) unit_0094(c, 201u, depth + 1u); else { c.pc = 0x00352570u; return; } if (c.pc != 0x0037084Cu) [[unlikely]] return; }
L_0037084C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370E3C; } }
L_00370854:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00370E3C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00370E3C; } }
L_0037087C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 24892u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[28].w[0] - 24892u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 24892u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003708B4; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5510u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00370E3C; } }
L_003708B4:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003708C4u); set32(c.r[4], c.r[2].w[0] + 5510u);  if (depth < kMaxDepth) unit_009D(c, 305u, depth + 1u); else { c.pc = 0x00377240u; return; } if (c.pc != 0x003708C4u) [[unlikely]] return; }
L_003708C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003708CCu); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x003708CCu) [[unlikely]] return; }
L_003708CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 64u);  if (t) { goto L_0037090C; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], 0u + 16u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    st8((c.r[3].w[0] + 5511u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370900u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00370900u) [[unlikely]] return; }
L_00370900:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 4u);  if (t) { goto L_00370940; } }
    set32(c.r[4], 0u + 64u);
    c.budget -= 1;
L_0037090C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370914u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x00370914u) [[unlikely]] return; }
L_00370914:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037093C; } }
    set32(c.r[5], 0u + 54u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370928u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00370928u) [[unlikely]] return; }
L_00370928:
    set32(c.r[2], 0u + 6u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037093Cu); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x0037093Cu) [[unlikely]] return; }
L_0037093C:
    set32(c.r[4], 0u + 4u);
    c.budget -= 1;
L_00370940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370948u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x00370948u) [[unlikely]] return; }
L_00370948:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370958u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x00370958u) [[unlikely]] return; }
L_00370958:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 24892u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x88880000u);
    c.r[3].d[0] = c.r[2].d[0] | 34953ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[2].w[0] - 22368u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[6].w[0] >> 31);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370990u); set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x00370990u) [[unlikely]] return; }
L_00370990:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x439A0000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003709B0u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x003709B0u) [[unlikely]] return; }
L_003709B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003709C0u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x003709C0u) [[unlikely]] return; }
L_003709C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370E3C; } }
L_003709C8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00370E3C; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], 0u + 12u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5511u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370A00u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x00370A00u) [[unlikely]] return; }
L_00370A00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370E3C; } }
L_00370A08:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00370E3C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 5510u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_00370A48; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00370E3C; } }
    goto L_00370A44;
L_00370A40:
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00370A44:
    set32(c.r[2], 0u + 6u);
    c.budget -= 1;
L_00370A48:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00370E3C; } }
L_00370A54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 28352u);
    set32(c.r[5], 0u + 50u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370A68u); mmi::paddub(c.r[21], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 33u, depth + 1u); else { c.pc = 0x00378450u; return; } if (c.pc != 0x00370A68u) [[unlikely]] return; }
L_00370A68:
    mmi::paddub(c.r[17], c.r[2], c.r[0]);
    set32(c.r[3], c.r[2].w[0] << 5);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[18], c.r[2].w[0] + 28224u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] + 28352u);
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[20], c.r[0], c.r[0]);  if (t) { goto L_00370AE0; } }
L_00370A8C:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[20].w[0] + 1u);  if (t) { goto L_00370AD4; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_00370AD0; } }
    set32(c.r[21], 0u + 1u);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370AB4u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x00370AB4u) [[unlikely]] return; }
L_00370AB4:
    set32(c.r[4], c.r[19].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370AC0u); set32(c.r[5], c.r[18].w[0] + 8u);  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x00370AC0u) [[unlikely]] return; }
L_00370AC0:
    mmi::paddub(c.r[2], c.r[21], c.r[0]);
    st32((c.r[19].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 32u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 4;
L_00370AD0:
    set32(c.r[2], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_00370AD4:
    set32(c.r[18], c.r[18].w[0] + 32u);
    c.r[20].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
L_00370AE0:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 7u));
    c.r[3].d[0] = c.r[20].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00370A8Cu | kUnwind; return; } goto L_00370A8C; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull; set32(c.r[2], 0u + 10u);  if (t) { goto L_00370B14; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00370E3C; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 1;
L_00370B14:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00370E3C; } }
L_00370B20:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00370C10; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00370BD4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00370BAC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00370B58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370E3C; } }
L_00370B58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 28352u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[5], c.r[2].w[0] - 3616u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370B70u); set32(c.r[6], 0u + 1600u);  if (depth < kMaxDepth) unit_0005(c, 227u, depth + 1u); else { c.pc = 0x00116BC8u; return; } if (c.pc != 0x00370B70u) [[unlikely]] return; }
L_00370B70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00370B88; } }
    set32(c.r[2], 0u + 13u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00370E3C; } }
L_00370B88:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], 0u + 152u);
    set32(c.r[4], 0u + 136u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370BA4u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 199u, depth + 1u); else { c.pc = 0x00352520u; return; } if (c.pc != 0x00370BA4u) [[unlikely]] return; }
L_00370BA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370E3C; } }
L_00370BAC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00370E3C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00370E3C; } }
L_00370BD4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00370E3C; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], 0u + 12u);
    set32(c.r[4], 0u + 76u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370C08u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x00370C08u) [[unlikely]] return; }
L_00370C08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370E3C; } }
L_00370C10:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00370E3C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00370E3C; } }
L_00370C3C:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 26144u));
    c.budget -= 1;
L_00370C40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 12u);  if (t) { goto L_00370C7C; } }
    set32(c.r[2], 0u + 11u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370C58u); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0020(c, 80u, depth + 1u); else { c.pc = 0x00180B50u; return; } if (c.pc != 0x00370C58u) [[unlikely]] return; }
L_00370C58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[2].w[0] + 28352u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01B90000u);
    set32(c.r[6], 0u + 1600u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370C70u); c.r[4].d[0] = c.r[2].d[0] | 61440ull;  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x00370C70u) [[unlikely]] return; }
L_00370C70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370E3C; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 1;
L_00370C7C:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] - 3616u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[2].w[0] + 28352u);
    set32(c.r[6], 0u + 1600u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370C9Cu); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x00370C9Cu) [[unlikely]] return; }
L_00370C9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370E3C; } }
L_00370CA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370CACu);  if (depth < kMaxDepth) unit_0020(c, 81u, depth + 1u); else { c.pc = 0x00180B60u; return; } if (c.pc != 0x00370CACu) [[unlikely]] return; }
L_00370CAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00370E3C; } }
    set32(c.r[3], 0u + 13u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00370CE4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 28352u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[5], c.r[2].w[0] - 3616u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370CDCu); set32(c.r[6], 0u + 1600u);  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x00370CDCu) [[unlikely]] return; }
L_00370CDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370E3C; } }
L_00370CE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] - 3616u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[2].w[0] + 28352u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370CFCu); set32(c.r[6], 0u + 1600u);  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x00370CFCu) [[unlikely]] return; }
L_00370CFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370E3C; } }
L_00370D04:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00370D8C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00370D50; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_00370D34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370E3C; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00370D34:
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 152u);
    set32(c.r[4], 0u + 131u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370D48u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 199u, depth + 1u); else { c.pc = 0x00352520u; return; } if (c.pc != 0x00370D48u) [[unlikely]] return; }
L_00370D48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370E3C; } }
L_00370D50:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00370E3C; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], 0u + 12u);
    set32(c.r[4], 0u + 76u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370D84u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x00370D84u) [[unlikely]] return; }
L_00370D84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370E3C; } }
L_00370D8C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00370E3C; } }
    set32(c.r[2], 0u + 13u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00370E3C; } }
L_00370DB4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00370E34; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00370E00; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_00370DE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370E3C; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00370DE4:
    set32(c.r[5], 0u + 20u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370DF8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 30u, depth + 1u); else { c.pc = 0x00378410u; return; } if (c.pc != 0x00370DF8u) [[unlikely]] return; }
L_00370DF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370E3C; } }
L_00370E00:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00370E3C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370E28u); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x00370E28u) [[unlikely]] return; }
L_00370E28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00370E3C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00370E34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);  if (t) { goto L_00370E44; } }
L_00370E3C:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_00370E40:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00370E44:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00370E70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370E80u);  if (depth < kMaxDepth) unit_009D(c, 283u, depth + 1u); else { c.pc = 0x00376BE0u; return; } if (c.pc != 0x00370E80u) [[unlikely]] return; }
L_00370E80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 3856u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370E94u); set32(c.r[5], 0u + 36u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x00370E94u) [[unlikely]] return; }
L_00370E94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370EA8u); set32(c.r[5], 0u + 37u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x00370EA8u) [[unlikely]] return; }
L_00370EA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370EBCu); set32(c.r[5], 0u + 38u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x00370EBCu) [[unlikely]] return; }
L_00370EBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 5296u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370ED0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x00370ED0u) [[unlikely]] return; }
L_00370ED0:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 24884u)));
    c.f[12] = ld32((c.r[28].w[0] - 27152u));
    c.f[13] = ld32((c.r[28].w[0] - 27148u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 666u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[4].d[0] = c.r[3].d[0] << 56;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370EF8u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (depth < kMaxDepth) unit_009D(c, 289u, depth + 1u); else { c.pc = 0x00376CB0u; return; } if (c.pc != 0x00370EF8u) [[unlikely]] return; }
L_00370EF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370F00u);  if (depth < kMaxDepth) unit_009A(c, 532u, depth + 1u); else { c.pc = 0x0036B670u; return; } if (c.pc != 0x00370F00u) [[unlikely]] return; }
L_00370F00:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00370F10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370F20u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x00370F20u) [[unlikely]] return; }
L_00370F20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370F30u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x00370F30u) [[unlikely]] return; }
L_00370F30:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370F3Cu); set32(c.r[4], c.r[2].w[0] + 648u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x00370F3Cu) [[unlikely]] return; }
L_00370F3C:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_00370F5C; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00370F5C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[0] = ld32((c.r[1].w[0] + 20728u));
    c.f[1] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 20736u));
    c.f[12] = fp::sub(c.f[0], c.f[1]);
    c.f[14] = c.r[3].w[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370F8Cu); set32(c.r[4], c.r[2].w[0] + 648u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00370F8Cu) [[unlikely]] return; }
L_00370F8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370F94u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x00370F94u) [[unlikely]] return; }
L_00370F94:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370FA4u); set32(c.r[4], c.r[2].w[0] + 640u);  if (depth < kMaxDepth) unit_0096(c, 45u, depth + 1u); else { c.pc = 0x003586F0u; return; } if (c.pc != 0x00370FA4u) [[unlikely]] return; }
L_00370FA4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 20732u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 20736u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370FC4u); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00370FC4u) [[unlikely]] return; }
L_00370FC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370FCCu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x00370FCCu) [[unlikely]] return; }
L_00370FCC:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[6], ld32((c.r[3].w[0] + 5312u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370FE4u); set32(c.r[5], c.r[2].w[0] - 22120u);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x00370FE4u) [[unlikely]] return; }
L_00370FE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x425C0000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43460000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371004u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00371004u) [[unlikely]] return; }
L_00371004:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037100Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0037100Cu) [[unlikely]] return; }
L_0037100C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x432F0000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43460000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371030u); set32(c.r[4], c.r[2].w[0] - 22112u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00371030u) [[unlikely]] return; }
L_00371030:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[6], ld32((c.r[3].w[0] + 5316u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371048u); set32(c.r[5], c.r[2].w[0] - 22120u);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x00371048u) [[unlikely]] return; }
L_00371048:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x435F0000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43460000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371068u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00371068u) [[unlikely]] return; }
L_00371068:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43AB0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43460000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371090u); set32(c.r[4], c.r[2].w[0] - 22104u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00371090u) [[unlikely]] return; }
L_00371090:
    set32(c.r[5], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[7].d[0] = c.r[2].d[0] | 34464ull;
    c.r[4].d[0] = ld16((c.r[5].w[0] + 668u));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 670u));
    c.r[2].d[0] = ld16((c.r[5].w[0] + 672u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[6].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003710E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003710CCu); set32(c.r[5], c.r[2].w[0] - 22096u);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x003710CCu) [[unlikely]] return; }
L_003710CC:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003710D8u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0096(c, 45u, depth + 1u); else { c.pc = 0x003586F0u; return; } if (c.pc != 0x003710D8u) [[unlikely]] return; }
L_003710D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_003710F4; } }
L_003710E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003710F0u); set32(c.r[5], c.r[2].w[0] - 22088u);  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x003710F0u) [[unlikely]] return; }
L_003710F0:
    set32(c.r[4], 0u + 2u);
    c.budget -= 1;
L_003710F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003710FCu);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x003710FCu) [[unlikely]] return; }
L_003710FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43070000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x436E0000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037111Cu); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0037111Cu) [[unlikely]] return; }
L_0037111C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371124u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x00371124u) [[unlikely]] return; }
L_00371124:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x436E0000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371148u); set32(c.r[4], c.r[2].w[0] - 22072u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00371148u) [[unlikely]] return; }
L_00371148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371150u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x00371150u) [[unlikely]] return; }
L_00371150:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[6].d[0] = ld16((c.r[3].w[0] + 668u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371168u); set32(c.r[5], c.r[2].w[0] - 22096u);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x00371168u) [[unlikely]] return; }
L_00371168:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371174u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0096(c, 45u, depth + 1u); else { c.pc = 0x003586F0u; return; } if (c.pc != 0x00371174u) [[unlikely]] return; }
L_00371174:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43900000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x436E0000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371194u); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00371194u) [[unlikely]] return; }
L_00371194:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037119Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0037119Cu) [[unlikely]] return; }
L_0037119C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43CC0000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x436E0000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003711C0u); set32(c.r[4], c.r[2].w[0] - 22064u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x003711C0u) [[unlikely]] return; }
L_003711C0:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 34464ull;
    c.r[3].d[0] = ld16((c.r[2].w[0] + 670u));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 672u));
    set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[6].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00371208; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003711F4u); set32(c.r[5], c.r[2].w[0] - 22096u);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x003711F4u) [[unlikely]] return; }
L_003711F4:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371200u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0096(c, 45u, depth + 1u); else { c.pc = 0x003586F0u; return; } if (c.pc != 0x00371200u) [[unlikely]] return; }
L_00371200:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_0037121C; } }
L_00371208:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371218u); set32(c.r[5], c.r[2].w[0] - 22088u);  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x00371218u) [[unlikely]] return; }
L_00371218:
    set32(c.r[4], 0u + 2u);
    c.budget -= 1;
L_0037121C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371224u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x00371224u) [[unlikely]] return; }
L_00371224:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43DC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x436E0000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371248u); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00371248u) [[unlikely]] return; }
L_00371248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371250u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x00371250u) [[unlikely]] return; }
L_00371250:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x440C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x436E0000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371278u); set32(c.r[4], c.r[2].w[0] - 22056u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00371278u) [[unlikely]] return; }
L_00371278:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 34464ull;
    c.r[3].d[0] = ld16((c.r[2].w[0] + 5268u));
    c.r[5].d[0] = ld16((c.r[2].w[0] + 5270u));
    c.r[4].d[0] = ld16((c.r[2].w[0] + 5272u));
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003712DC; } }
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003712C8u); set32(c.r[5], c.r[2].w[0] - 22096u);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x003712C8u) [[unlikely]] return; }
L_003712C8:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003712D4u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0096(c, 45u, depth + 1u); else { c.pc = 0x003586F0u; return; } if (c.pc != 0x003712D4u) [[unlikely]] return; }
L_003712D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_003712F0; } }
L_003712DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003712ECu); set32(c.r[5], c.r[2].w[0] - 22088u);  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x003712ECu) [[unlikely]] return; }
L_003712EC:
    set32(c.r[4], 0u + 2u);
    c.budget -= 1;
L_003712F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003712F8u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x003712F8u) [[unlikely]] return; }
L_003712F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x438B0000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43070000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371318u); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00371318u) [[unlikely]] return; }
L_00371318:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371320u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x00371320u) [[unlikely]] return; }
L_00371320:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x438B0000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371344u); set32(c.r[4], c.r[2].w[0] - 22072u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00371344u) [[unlikely]] return; }
L_00371344:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037134Cu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0037134Cu) [[unlikely]] return; }
L_0037134C:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[6].d[0] = ld16((c.r[3].w[0] + 5268u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371364u); set32(c.r[5], c.r[2].w[0] - 22096u);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x00371364u) [[unlikely]] return; }
L_00371364:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371370u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0096(c, 45u, depth + 1u); else { c.pc = 0x003586F0u; return; } if (c.pc != 0x00371370u) [[unlikely]] return; }
L_00371370:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x438B0000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43900000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371390u); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00371390u) [[unlikely]] return; }
L_00371390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371398u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x00371398u) [[unlikely]] return; }
L_00371398:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x438B0000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43CC0000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003713BCu); set32(c.r[4], c.r[2].w[0] - 22064u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x003713BCu) [[unlikely]] return; }
L_003713BC:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 34464ull;
    c.r[3].d[0] = ld16((c.r[2].w[0] + 5270u));
    c.r[4].d[0] = ld16((c.r[2].w[0] + 5272u));
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00371410; } }
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003713FCu); set32(c.r[5], c.r[2].w[0] - 22096u);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x003713FCu) [[unlikely]] return; }
L_003713FC:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371408u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0096(c, 45u, depth + 1u); else { c.pc = 0x003586F0u; return; } if (c.pc != 0x00371408u) [[unlikely]] return; }
L_00371408:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_00371424; } }
L_00371410:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371420u); set32(c.r[5], c.r[2].w[0] - 22088u);  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x00371420u) [[unlikely]] return; }
L_00371420:
    set32(c.r[4], 0u + 2u);
    c.budget -= 1;
L_00371424:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037142Cu);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0037142Cu) [[unlikely]] return; }
L_0037142C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x438B0000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43DC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371450u); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00371450u) [[unlikely]] return; }
L_00371450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371458u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x00371458u) [[unlikely]] return; }
L_00371458:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x438B0000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x440C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371480u); set32(c.r[4], c.r[2].w[0] - 22056u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00371480u) [[unlikely]] return; }
L_00371480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371488u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x00371488u) [[unlikely]] return; }
L_00371488:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43E70000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B30000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003714A4u);  if (depth < kMaxDepth) unit_009A(c, 561u, depth + 1u); else { c.pc = 0x0036BC50u; return; } if (c.pc != 0x003714A4u) [[unlikely]] return; }
L_003714A4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003714B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00371538; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00371504; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_003714EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00371544; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_003714EC:
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43320000u);
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC33C0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[3].w[0]);  if (t) { goto L_00371540; } }
L_00371504:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037150Cu);  if (depth < kMaxDepth) unit_009D(c, 297u, depth + 1u); else { c.pc = 0x00376EC0u; return; } if (c.pc != 0x0037150Cu) [[unlikely]] return; }
L_0037150C:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5243u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00371540; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371530u); st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x00371530u) [[unlikely]] return; }
L_00371530:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00371540; } }
L_00371538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371540u);  if (depth < kMaxDepth) unit_009D(c, 299u, depth + 1u); else { c.pc = 0x00376F50u; return; } if (c.pc != 0x00371540u) [[unlikely]] return; }
L_00371540:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00371544:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00371550:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    set32(c.r[2], 0u + 3u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0037173C; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_003716FC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00371658; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_003715A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00371798; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_003715A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003715A8u); st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 283u, depth + 1u); else { c.pc = 0x00376BE0u; return; } if (c.pc != 0x003715A8u) [[unlikely]] return; }
L_003715A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 6064u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003715BCu); set32(c.r[5], 0u + 39u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x003715BCu) [[unlikely]] return; }
L_003715BC:
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003715D4u); set32(c.r[5], 0u + 40u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x003715D4u) [[unlikely]] return; }
L_003715D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003715E8u); set32(c.r[5], 0u + 41u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x003715E8u) [[unlikely]] return; }
L_003715E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[18], c.r[2].w[0] - 22048u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_00371620; } }
L_003715F8:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 6400u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037160Cu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0037160Cu) [[unlikely]] return; }
L_0037160C:
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[18], c.r[18].w[0] + 2u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    c.budget -= 5;
L_00371620:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 26008u));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003715F8u | kUnwind; return; } goto L_003715F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 6592u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371644u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x00371644u) [[unlikely]] return; }
L_00371644:
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371650u); st32((c.r[2].w[0] + 28u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_009A(c, 532u, depth + 1u); else { c.pc = 0x0036B670u; return; } if (c.pc != 0x00371650u) [[unlikely]] return; }
L_00371650:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00371794; } }
L_00371658:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371660u);  if (depth < kMaxDepth) unit_0097(c, 178u, depth + 1u); else { c.pc = 0x0035D5B0u; return; } if (c.pc != 0x00371660u) [[unlikely]] return; }
L_00371660:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00371670; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00371798; } }
L_00371670:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 26008u));
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371688u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_009D(c, 305u, depth + 1u); else { c.pc = 0x00377240u; return; } if (c.pc != 0x00371688u) [[unlikely]] return; }
L_00371688:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 32u);  if (t) { goto L_003716A4; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00371794; } }
    set32(c.r[4], 0u + 32u);
    c.budget -= 1;
L_003716A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003716ACu);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x003716ACu) [[unlikely]] return; }
L_003716AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 64u);  if (t) { goto L_003716D8; } }
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003716CCu); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x003716CCu) [[unlikely]] return; }
L_003716CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00371794; } }
    set32(c.r[4], 0u + 64u);
    c.budget -= 1;
L_003716D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003716E0u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x003716E0u) [[unlikely]] return; }
L_003716E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00371794; } }
    set32(c.r[5], 0u + 54u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003716F4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x003716F4u) [[unlikely]] return; }
L_003716F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00371798; } }
L_003716FC:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037172C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_00371720; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00371794; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00371720:
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00371794; } }
L_0037172C:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00371794; } }
L_0037173C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00371774; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_00371760; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00371794; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_00371760:
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 16u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00371794; } }
L_00371774:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00371794; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00371798; } }
L_00371794:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00371798:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003717B0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003717DCu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x003717DCu) [[unlikely]] return; }
L_003717DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003717F0u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x003717F0u) [[unlikely]] return; }
L_003717F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[18], c.r[2].w[0] - 6960u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[19], c.r[2].w[0] + 20752u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_00371898; } }
L_00371808:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371810u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x00371810u) [[unlikely]] return; }
L_00371810:
    c.f[12] = ld32((c.r[19].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037181Cu); c.r[20].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0007(c, 115u, depth + 1u); else { c.pc = 0x0011DF88u; return; } if (c.pc != 0x0037181Cu) [[unlikely]] return; }
L_0037181C:
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x40200000u);
    c.r[20].d[0] = c.r[20].d[0] | 52428ull;
    c.r[20].d[0] = c.r[20].d[0] << 16;
    c.r[20].d[0] = c.r[20].d[0] | 52428ull;
    c.r[20].d[0] = c.r[20].d[0] << 16;
    mmi::paddub(c.r[21], c.r[2], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371840u); c.r[20].d[0] = c.r[20].d[0] | 52428ull;  if (depth < kMaxDepth) unit_0000(c, 35u, depth + 1u); else { c.pc = 0x00100120u; return; } if (c.pc != 0x00371840u) [[unlikely]] return; }
L_00371840:
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037184Cu); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 24u, depth + 1u); else { c.pc = 0x0011CBC0u; return; } if (c.pc != 0x0037184Cu) [[unlikely]] return; }
L_0037184C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037185Cu); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 34u, depth + 1u); else { c.pc = 0x0011CE68u; return; } if (c.pc != 0x0037185Cu) [[unlikely]] return; }
L_0037185C:
    mmi::paddub(c.r[4], c.r[21], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371868u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 19u, depth + 1u); else { c.pc = 0x0011CB58u; return; } if (c.pc != 0x00371868u) [[unlikely]] return; }
L_00371868:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371870u); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 61u, depth + 1u); else { c.pc = 0x0011D390u; return; } if (c.pc != 0x00371870u) [[unlikely]] return; }
L_00371870:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42820000u);
    c.f[13] = c.r[2].w[0];
    c.f[12] = c.f[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037188Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0037188Cu) [[unlikely]] return; }
L_0037188C:
    set32(c.r[18], c.r[18].w[0] + 64u);
    set32(c.r[19], c.r[19].w[0] + 4u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 3;
L_00371898:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 26008u));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00371808u | kUnwind; return; } goto L_00371808; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.f[12] = ld32((c.r[28].w[0] - 27144u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.f[13] = ld32((c.r[28].w[0] - 27140u));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - 10032u);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003718D8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0099(c, 110u, depth + 1u); else { c.pc = 0x003655A0u; return; } if (c.pc != 0x003718D8u) [[unlikely]] return; }
L_003718D8:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00371900:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[6], ld32((c.r[4].w[0] + 28u)));  if (t) { goto L_003719AC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0037195C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_00371930; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003719AC; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00371930:
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0xBF4C0000u);  if (t) { goto L_00371954; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 40u), 0u);  if (t) { goto L_0037195C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF4C0000u);
    c.budget -= 1;
L_00371954:
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    c.budget -= 2;
L_0037195C:
    c.r[5].d[0] = ld8((c.r[6].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0xBF4C0000u);  if (t) { goto L_0037198C; } }
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    st32((c.r[4].w[0] + 108u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 100u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_003719AC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF4C0000u);
    c.budget -= 1;
L_0037198C:
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 96u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 108u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 8;
L_003719AC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003719C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[0] = ld32((c.r[1].w[0] - 21968u));
    set32(c.r[17], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] - 21964u));
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[0] = ld32((c.r[1].w[0] - 21960u));
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[0] = ld32((c.r[1].w[0] - 21956u));
    st32((c.r[4].w[0] + 116u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 21;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00371A78; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00371A3C; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_00371A34; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_00371AA4; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00371A34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371A3Cu); st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x00371A3Cu) [[unlikely]] return; }
L_00371A3C:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 12u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00371A68; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371A5Cu); st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x00371A5Cu) [[unlikely]] return; }
L_00371A5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00371AA0; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00371A68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371A70u);  if (depth < kMaxDepth) unit_009D(c, 297u, depth + 1u); else { c.pc = 0x00376EC0u; return; } if (c.pc != 0x00371A70u) [[unlikely]] return; }
L_00371A70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00371AA0; } }
L_00371A78:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 12u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00371A98; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371A90u); st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x00371A90u) [[unlikely]] return; }
L_00371A90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00371AA0; } }
L_00371A98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371AA0u);  if (depth < kMaxDepth) unit_009D(c, 299u, depth + 1u); else { c.pc = 0x00376F50u; return; } if (c.pc != 0x00371AA0u) [[unlikely]] return; }
L_00371AA0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00371AA4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00371AC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371AD4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 283u, depth + 1u); else { c.pc = 0x00376BE0u; return; } if (c.pc != 0x00371AD4u) [[unlikely]] return; }
L_00371AD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 10112u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371AE8u); set32(c.r[5], 0u + 45u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x00371AE8u) [[unlikely]] return; }
L_00371AE8:
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 10800u);
    set32(c.r[5], 0u + 7u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371B00u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x00371B00u) [[unlikely]] return; }
L_00371B00:
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371B0Cu); st32((c.r[2].w[0] + 28u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_009A(c, 532u, depth + 1u); else { c.pc = 0x0036B670u; return; } if (c.pc != 0x00371B0Cu) [[unlikely]] return; }
L_00371B0C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00371B20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[9].d[0] = ld8((c.r[28].w[0] - 26116u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[8], c.r[2].w[0] - 27424u);
    set32(c.r[4], 0u + 129u);
    set32(c.r[3], 0u + 64u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (t) { goto L_00371B90; } }
L_00371B4C:
    c.r[2].d[0] = ld8((c.r[8].w[0] + 1u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[8], c.r[8].w[0] + 520u);  goto L_00371B8C; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { goto L_00371B80; } }
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_00371B88; } }
    c.r[2].d[0] = ld8((c.r[8].w[0] + 9u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00371B88; } }
    c.budget -= 1;
L_00371B80:
    set32(c.r[7], 0u + 1u);
    c.budget -= 2;
L_00371B88:
    set32(c.r[8], c.r[8].w[0] + 520u);
    c.budget -= 1;
L_00371B8C:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00371B90:
    c.r[2].d[0] = c.r[5].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00371B4Cu | kUnwind; return; } goto L_00371B4C; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_00371BAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00371BD4; } }
L_00371BAC:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[9].d[0]; set32(c.r[4], 0u + 147u);  if (t) { goto L_00371BC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371BBCu); set32(c.r[4], 0u + 146u);  if (depth < kMaxDepth) unit_0094(c, 199u, depth + 1u); else { c.pc = 0x00352520u; return; } if (c.pc != 0x00371BBCu) [[unlikely]] return; }
L_00371BBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00371BD4; } }
    set32(c.r[4], 0u + 147u);
    c.budget -= 1;
L_00371BC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371BD0u);  if (depth < kMaxDepth) unit_0094(c, 199u, depth + 1u); else { c.pc = 0x00352520u; return; } if (c.pc != 0x00371BD0u) [[unlikely]] return; }
L_00371BD0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00371BD4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00371BE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00371BF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 5u));
    set32(c.r[2], 0u + 4u);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00371D74; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00371D38; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00371CB0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00371C88; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], c.r[4].w[0] + 1u);  if (t) { goto L_00371C48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00371DC4; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_00371C48:
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 32u);
    st8((c.r[16].w[0] + 11u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[2], c.r[2].w[0] - 19888u);
    set32(c.r[6], c.r[16].w[0] + 11u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371C80u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0094(c, 209u, depth + 1u); else { c.pc = 0x00352700u; return; } if (c.pc != 0x00371C80u) [[unlikely]] return; }
L_00371C80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00371DC0; } }
L_00371C88:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00371DC0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 5u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00371DC0; } }
L_00371CB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371CB8u);  if (depth < kMaxDepth) unit_009E(c, 18u, depth + 1u); else { c.pc = 0x003782D0u; return; } if (c.pc != 0x00371CB8u) [[unlikely]] return; }
L_00371CB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00371CF4; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 5u));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], 0u + 16u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    st8((c.r[3].w[0] + 5511u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371CECu); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00371CECu) [[unlikely]] return; }
L_00371CEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00371DC0; } }
L_00371CF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371CFCu);  if (depth < kMaxDepth) unit_009E(c, 19u, depth + 1u); else { c.pc = 0x00378310u; return; } if (c.pc != 0x00371CFCu) [[unlikely]] return; }
L_00371CFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 11u);  if (t) { goto L_00371D24; } }
    set32(c.r[5], 0u + 54u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371D10u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00371D10u) [[unlikely]] return; }
L_00371D10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371D18u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x00371D18u) [[unlikely]] return; }
L_00371D18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00371DC4; } }
    set32(c.r[4], c.r[16].w[0] + 11u);
    c.budget -= 1;
L_00371D24:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371D30u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_009D(c, 319u, depth + 1u); else { c.pc = 0x00377620u; return; } if (c.pc != 0x00371D30u) [[unlikely]] return; }
L_00371D30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00371DC0; } }
L_00371D38:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00371DC0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 5u));
    set32(c.r[2], 0u + 12u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371D6Cu); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x00371D6Cu) [[unlikely]] return; }
L_00371D6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00371DC0; } }
L_00371D74:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00371DC0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 11u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00371DB8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8u));
    set32(c.r[2], c.r[28].w[0] - 26104u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371DACu); c.r[4].d[0] = ld8((c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 490u, depth + 1u); else { c.pc = 0x00363770u; return; } if (c.pc != 0x00371DACu) [[unlikely]] return; }
L_00371DAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00371DC4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00371DB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00371DC8; } }
L_00371DC0:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00371DC4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00371DC8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00371DE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_003725C4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] - 21920u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00370000u < 16384u) { entry = entries_009C[(t - 0x00370000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00371E18:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371E2Cu); st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009C(c, 206u, depth + 1u); else { c.pc = 0x00371AC0u; return; } if (c.pc != 0x00371E2Cu) [[unlikely]] return; }
L_00371E2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003725C8; } }
L_00371E34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371E3Cu);  if (depth < kMaxDepth) unit_0097(c, 178u, depth + 1u); else { c.pc = 0x0035D5B0u; return; } if (c.pc != 0x00371E3Cu) [[unlikely]] return; }
L_00371E3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003725C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371E4Cu); set32(c.r[4], 0u + 8192u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x00371E4Cu) [[unlikely]] return; }
L_00371E4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 4096u);  if (t) { goto L_00371EC4; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_00371EA8; }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 7u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003725C4; } }
    set32(c.r[5], 0u + 43u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371E78u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00371E78u) [[unlikely]] return; }
L_00371E78:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 7u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371E9Cu); c.r[4].d[0] = ld8((c.r[16].w[0] + 7u));  if (depth < kMaxDepth) unit_0098(c, 475u, depth + 1u); else { c.pc = 0x00363560u; return; } if (c.pc != 0x00371E9Cu) [[unlikely]] return; }
L_00371E9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003725C4; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_00371EA8:
    set32(c.r[5], 0u + 43u);
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371EB8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00371EB8u) [[unlikely]] return; }
L_00371EB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003725C4; } }
    set32(c.r[4], 0u + 4096u);
    c.budget -= 1;
L_00371EC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371ECCu);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x00371ECCu) [[unlikely]] return; }
L_00371ECC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00371F5C; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 26096u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_00371F44; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 26092u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 7u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003725C4; } }
    set32(c.r[5], 0u + 43u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371F10u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00371F10u) [[unlikely]] return; }
L_00371F10:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 7u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371F38u); c.r[4].d[0] = ld8((c.r[16].w[0] + 7u));  if (depth < kMaxDepth) unit_0098(c, 475u, depth + 1u); else { c.pc = 0x00363560u; return; } if (c.pc != 0x00371F38u) [[unlikely]] return; }
L_00371F38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003725C4; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00371F44:
    set32(c.r[5], 0u + 43u);
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371F54u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00371F54u) [[unlikely]] return; }
L_00371F54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003725C4; } }
L_00371F5C:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 26096u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 64u);  if (t) { goto L_00371FAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371F70u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x00371F70u) [[unlikely]] return; }
L_00371F70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00371FA8; } }
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 16u);
    set32(c.r[5], 0u + 4u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371FA0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00371FA0u) [[unlikely]] return; }
L_00371FA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003725C4; } }
L_00371FA8:
    set32(c.r[4], 0u + 64u);
    c.budget -= 1;
L_00371FAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371FB4u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x00371FB4u) [[unlikely]] return; }
L_00371FB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003725C4; } }
    set32(c.r[5], 0u + 54u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371FC8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00371FC8u) [[unlikely]] return; }
L_00371FC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_003725C8; } }
L_00371FD0:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 9u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003725C4; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 26096u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003725C4; } }
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003725C4; } }
L_00372008:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037206C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00372028; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003725C4; } }
L_00372028:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003725C4; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], c.r[28].w[0] - 26104u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372064u); c.r[4].d[0] = ld8((c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 495u, depth + 1u); else { c.pc = 0x00363820u; return; } if (c.pc != 0x00372064u) [[unlikely]] return; }
L_00372064:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003725C4; } }
L_0037206C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 16u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_0037208C; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003725C4; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 1;
L_0037208C:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003725C4; } }
L_00372098:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00372220; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_003721E4; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 32u);  goto L_0037214C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00372120; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], c.r[4].w[0] + 1u);  if (t) { goto L_003720E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003725C4; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_003720E0:
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 32u);
    st8((c.r[16].w[0] + 11u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[2], c.r[2].w[0] - 19888u);
    set32(c.r[6], c.r[16].w[0] + 11u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372118u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0094(c, 209u, depth + 1u); else { c.pc = 0x00352700u; return; } if (c.pc != 0x00372118u) [[unlikely]] return; }
L_00372118:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003725C4; } }
L_00372120:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003725C4; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003725C4; } }
    set32(c.r[4], 0u + 32u);
    c.budget -= 1;
L_0037214C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372154u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x00372154u) [[unlikely]] return; }
L_00372154:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 64u);  if (t) { goto L_00372194; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], 0u + 16u);
    set32(c.r[5], 0u + 4u);
    st8((c.r[3].w[0] + 5511u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372188u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00372188u) [[unlikely]] return; }
L_00372188:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003725C4; } }
    set32(c.r[4], 0u + 64u);
    c.budget -= 1;
L_00372194:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037219Cu);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x0037219Cu) [[unlikely]] return; }
L_0037219C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 11u);  if (t) { goto L_003721D0; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 54u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003721BCu); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x003721BCu) [[unlikely]] return; }
L_003721BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003721C4u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x003721C4u) [[unlikely]] return; }
L_003721C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003725C4; } }
    set32(c.r[4], c.r[16].w[0] + 11u);
    c.budget -= 1;
L_003721D0:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003721DCu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_009D(c, 305u, depth + 1u); else { c.pc = 0x00377240u; return; } if (c.pc != 0x003721DCu) [[unlikely]] return; }
L_003721DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003725C4; } }
L_003721E4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003725C4; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], 0u + 12u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372218u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x00372218u) [[unlikely]] return; }
L_00372218:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003725C4; } }
L_00372220:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003725C4; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 11u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00372270; } }
    set32(c.r[2], 0u + 5u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8u));
    set32(c.r[2], c.r[28].w[0] - 26104u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372264u); c.r[4].d[0] = ld8((c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 490u, depth + 1u); else { c.pc = 0x00363770u; return; } if (c.pc != 0x00372264u) [[unlikely]] return; }
L_00372264:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003725C4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00372270:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003725C4; } }
L_0037227C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00372348; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037230C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003722DC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_003722B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003725C4; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_003722B8:
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 32u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A70000u);
    set32(c.r[4], 0u + 20u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003722D4u); set32(c.r[5], c.r[2].w[0] + 28384u);  if (depth < kMaxDepth) unit_0094(c, 207u, depth + 1u); else { c.pc = 0x003526A0u; return; } if (c.pc != 0x003722D4u) [[unlikely]] return; }
L_003722D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003725C4; } }
L_003722DC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003725C4; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], 0u + 120u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003725C4; } }
L_0037230C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003725C4; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], 0u + 12u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372340u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x00372340u) [[unlikely]] return; }
L_00372340:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003725C4; } }
L_00372348:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003725C4; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003725C4; } }
L_00372374:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003725C4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] - 21952u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00370000u < 16384u) { entry = entries_009C[(t - 0x00370000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003723A0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 14u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003725C4; } }
L_003723C4:
    c.r[5].d[0] = ld8((c.r[28].w[0] - 26116u));
    set32(c.r[4], c.r[16].w[0] + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003723D4u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_009D(c, 319u, depth + 1u); else { c.pc = 0x00377620u; return; } if (c.pc != 0x003723D4u) [[unlikely]] return; }
L_003723D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003723DCu);  if (depth < kMaxDepth) unit_009E(c, 18u, depth + 1u); else { c.pc = 0x003782D0u; return; } if (c.pc != 0x003723DCu) [[unlikely]] return; }
L_003723DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00372414; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 16u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], 0u + 4u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037240Cu); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0037240Cu) [[unlikely]] return; }
L_0037240C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003725C4; } }
L_00372414:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037241Cu);  if (depth < kMaxDepth) unit_009E(c, 19u, depth + 1u); else { c.pc = 0x00378310u; return; } if (c.pc != 0x0037241Cu) [[unlikely]] return; }
L_0037241C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003725C4; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 54u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372440u); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00372440u) [[unlikely]] return; }
L_00372440:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003725C4; } }
L_00372448:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003725C4; } }
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 26116u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_003724B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037247Cu);  if (depth < kMaxDepth) unit_009C(c, 211u, depth + 1u); else { c.pc = 0x00371B20u; return; } if (c.pc != 0x0037247Cu) [[unlikely]] return; }
L_0037247C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_003724A0; } }
    set32(c.r[2], 0u + 5u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372494u); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009C(c, 215u, depth + 1u); else { c.pc = 0x00371BE0u; return; } if (c.pc != 0x00372494u) [[unlikely]] return; }
L_00372494:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003725C4; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_003724A0:
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 212u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003725C4; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_003724B4:
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 10u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[3], c.r[2].w[0] - 27424u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[2], c.r[2].w[0] - 27418u);
    set32(c.r[4], c.r[5].w[0] << 6);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    c.r[7].d[0] = ld16((c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[6], c.r[5].w[0] + 8u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 20768u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[8], ld32((c.r[2].w[0])));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037250Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 67u, depth + 1u); else { c.pc = 0x003788B0u; return; } if (c.pc != 0x0037250Cu) [[unlikely]] return; }
L_0037250C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372514u);  if (depth < kMaxDepth) unit_009E(c, 95u, depth + 1u); else { c.pc = 0x00378F00u; return; } if (c.pc != 0x00372514u) [[unlikely]] return; }
L_00372514:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003725C4; } }
L_0037251C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372524u);  if (depth < kMaxDepth) unit_009E(c, 95u, depth + 1u); else { c.pc = 0x00378F00u; return; } if (c.pc != 0x00372524u) [[unlikely]] return; }
L_00372524:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003725C4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003725C4; } }
L_00372538:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    if (c.r[2].sd[0] < 0) { set32(c.r[2], 0u + 1u);  goto L_00372580; }
    c.r[1].d[0] = c.r[2].sd[0] < 120ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003725C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372564u);  if (depth < kMaxDepth) unit_009E(c, 18u, depth + 1u); else { c.pc = 0x003782D0u; return; } if (c.pc != 0x00372564u) [[unlikely]] return; }
L_00372564:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037257C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372574u);  if (depth < kMaxDepth) unit_009E(c, 19u, depth + 1u); else { c.pc = 0x00378310u; return; } if (c.pc != 0x00372574u) [[unlikely]] return; }
L_00372574:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003725C4; } }
L_0037257C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00372580:
    set32(c.r[4], 0u + 76u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037258Cu); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x0037258Cu) [[unlikely]] return; }
L_0037258C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003725C4; } }
L_00372594:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037259Cu);  if (depth < kMaxDepth) unit_009C(c, 216u, depth + 1u); else { c.pc = 0x00371BF0u; return; } if (c.pc != 0x0037259Cu) [[unlikely]] return; }
L_0037259C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003725B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003725C4; } }
L_003725B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003725C4; } }
    set32(c.r[2], 0u + 5u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_003725C4:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003725C8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003725E0:
    set32(c.r[29], c.r[29].w[0] - 448u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    mmi::paddub(c.r[23], c.r[4], c.r[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st32((c.r[29].w[0] + 188u), c.r[5].w[0]);
    mmi::paddub(c.r[22], c.r[6], c.r[0]);
    mmi::paddub(c.r[21], c.r[7], c.r[0]);
    mmi::paddub(c.r[20], c.r[8], c.r[0]);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372628u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x00372628u) [[unlikely]] return; }
L_00372628:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372638u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x00372638u) [[unlikely]] return; }
L_00372638:
    set32(c.r[30], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372644u); mmi::paddub(c.r[4], c.r[23], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x00372644u) [[unlikely]] return; }
L_00372644:
    mmi::paddub(c.r[17], c.r[2], c.r[0]);
    mmi::div(c, 0, c.r[17].w[0], c.r[21].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::div(c, 0, c.r[17].w[0], c.r[21].w[0]);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037267C; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 3;
L_0037267C:
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_00372748; } }
L_00372690:
    c.r[1].d[0] = c.r[21].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[19], c.r[17], c.r[0]);  if (t) { goto L_003726C4; } }
    set32(c.r[4], c.r[23].w[0] + c.r[18].w[0]);
    set32(c.r[5], c.r[21].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003726ACu); mmi::paddub(c.r[19], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 236u, depth + 1u); else { c.pc = 0x0037A1D0u; return; } if (c.pc != 0x003726ACu) [[unlikely]] return; }
L_003726AC:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[5], c.r[23].w[0] + c.r[18].w[0]);  if (t) { goto L_003726CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[21].w[0] - 1u);  if (t) { goto L_003726C8; } }
    mmi::paddub(c.r[19], c.r[17], c.r[0]);
    c.budget -= 1;
L_003726C4:
    c.budget -= 1;
L_003726C8:
    set32(c.r[5], c.r[23].w[0] + c.r[18].w[0]);
    c.budget -= 1;
L_003726CC:
    mmi::paddub(c.r[4], c.r[30], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003726D8u); mmi::paddub(c.r[6], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x003726D8u) [[unlikely]] return; }
L_003726D8:
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[3], c.r[30].w[0] + c.r[19].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[4], c.r[30], c.r[0]);
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[22].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372708u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00372708u) [[unlikely]] return; }
L_00372708:
    set32(c.r[20], c.r[20].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[20].sd[0] <= 0;  if (t) { goto L_00372748; } }
    c.f[0] = c.r[22].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    set32(c.r[18], c.r[18].w[0] + c.r[19].w[0]);
    set32(c.r[17], c.r[17].w[0] - c.r[19].w[0]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372734u); c.f[12] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00372734u) [[unlikely]] return; }
L_00372734:
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[22], c.r[2], c.r[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00372690u | kUnwind; return; } goto L_00372690; } }
L_00372748:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 448u);  c.pc = t; return; }
L_00372780:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 13u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00372908; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 20784u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 20788u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003727C8u); set32(c.r[4], c.r[2].w[0] - 15408u);  if (depth < kMaxDepth) unit_0099(c, 110u, depth + 1u); else { c.pc = 0x003655A0u; return; } if (c.pc != 0x003727C8u) [[unlikely]] return; }
L_003727C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[18], c.r[2].w[0] - 16048u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_00372828; } }
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_003727DC:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[0] = c.r[17].w[0];
    set32(c.r[2], c.r[2].w[0] + 20816u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[2] = ld32((c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[1] = c.r[3].w[0];
    c.f[12] = ld32((c.r[1].w[0] + 20816u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372820u); c.f[13] = fp::add(c.f[0], c.f[2]);  if (depth < kMaxDepth) unit_0099(c, 110u, depth + 1u); else { c.pc = 0x003655A0u; return; } if (c.pc != 0x00372820u) [[unlikely]] return; }
L_00372820:
    set32(c.r[18], c.r[18].w[0] + 128u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_00372828:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 26096u));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003727DCu | kUnwind; return; } goto L_003727DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372840u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x00372840u) [[unlikely]] return; }
L_00372840:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372850u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x00372850u) [[unlikely]] return; }
L_00372850:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 7u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].d[0] = ld8((c.r[28].w[0] - 26092u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[2].w[0] - 21888u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037286Cu); set32(c.r[6], c.r[3].w[0] + 1u);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x0037286Cu) [[unlikely]] return; }
L_0037286C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 20792u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 20796u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037288Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0037288Cu) [[unlikely]] return; }
L_0037288C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372894u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x00372894u) [[unlikely]] return; }
L_00372894:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 7u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003728C4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 20800u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 20804u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003728C4u); set32(c.r[4], c.r[2].w[0] - 21872u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x003728C4u) [[unlikely]] return; }
L_003728C4:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 7u));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 26092u));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00372A10; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 20808u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 20812u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372900u); set32(c.r[4], c.r[2].w[0] - 21864u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00372900u) [[unlikely]] return; }
L_00372900:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_00372A14; } }
L_00372908:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 20784u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 20788u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037292Cu); set32(c.r[4], c.r[2].w[0] - 20656u);  if (depth < kMaxDepth) unit_0099(c, 110u, depth + 1u); else { c.pc = 0x003655A0u; return; } if (c.pc != 0x0037292Cu) [[unlikely]] return; }
L_0037292C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[16], c.r[3].w[0] - 27424u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_00372A00; } }
L_0037293C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_00372958; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00372970; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_00372958:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 6;
L_00372970:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[1] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[0] = ld32((c.r[1].w[0] + 20784u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037298Cu); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0037298Cu) [[unlikely]] return; }
L_0037298C:
    mmi::paddub(c.r[18], c.r[2], c.r[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_003729AC; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003729C4; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_003729AC:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 6;
L_003729C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[1] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[0] = ld32((c.r[1].w[0] + 20788u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003729E0u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x003729E0u) [[unlikely]] return; }
L_003729E0:
    c.r[7].d[0] = ld8((c.r[16].w[0] + 4u));
    c.r[8].d[0] = ld8((c.r[16].w[0] + 5u));
    set32(c.r[4], c.r[16].w[0] + 8u);
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003729F8u); mmi::paddub(c.r[6], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_009C(c, 281u, depth + 1u); else { c.pc = 0x003725E0u; return; } if (c.pc != 0x003729F8u) [[unlikely]] return; }
L_003729F8:
    set32(c.r[16], c.r[16].w[0] + 520u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_00372A00:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 26116u));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037293Cu | kUnwind; return; } goto L_0037293C; } }
L_00372A10:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00372A14:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00372A30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 13u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_00372B54; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 26096u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00372A78; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00372A78; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00372A7C; } }
L_00372A78:
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00372A7C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00372B2C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00372AB8; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 1u);  goto L_00372AAC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_00372C58; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_00372AAC:
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372AB8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x00372AB8u) [[unlikely]] return; }
L_00372AB8:
    st32((c.r[17].w[0] + 32u), 0u);
    c.r[5].d[0] = ld8((c.r[28].w[0] - 26096u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8u));
    set32(c.r[3], c.r[2].w[0] - 21856u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[17].w[0] + 36u), c.f[0]);
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 112u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 116u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 12u));
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00372B1C; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372B10u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x00372B10u) [[unlikely]] return; }
L_00372B10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00372C54; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00372B1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372B24u);  if (depth < kMaxDepth) unit_009D(c, 297u, depth + 1u); else { c.pc = 0x00376EC0u; return; } if (c.pc != 0x00372B24u) [[unlikely]] return; }
L_00372B24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00372C54; } }
L_00372B2C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 12u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00372B44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00372C54; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00372B44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372B4Cu);  if (depth < kMaxDepth) unit_009D(c, 299u, depth + 1u); else { c.pc = 0x00376F50u; return; } if (c.pc != 0x00372B4Cu) [[unlikely]] return; }
L_00372B4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00372C54; } }
L_00372B54:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00372C38; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 1u);  goto L_00372B90; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_00372B84; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00372C54; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00372B84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372B8Cu); st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x00372B8Cu) [[unlikely]] return; }
L_00372B8C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00372B90:
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 32u), 0u);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 26116u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 10u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[3].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_00372BBC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[0] = ld32((c.r[1].w[0] - 21776u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 36u), c.f[0]);  if (t) { goto L_00372BF0; } }
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00372BBC:
    set32(c.r[2], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[2], c.r[2].w[0] - 27421u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 21824u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.budget -= 13;
L_00372BF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 112u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 116u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 12u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00372C28; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372C1Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x00372C1Cu) [[unlikely]] return; }
L_00372C1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00372C54; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00372C28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372C30u);  if (depth < kMaxDepth) unit_009D(c, 297u, depth + 1u); else { c.pc = 0x00376EC0u; return; } if (c.pc != 0x00372C30u) [[unlikely]] return; }
L_00372C30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00372C54; } }
L_00372C38:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 12u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00372C4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00372C54; } }
L_00372C4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372C54u);  if (depth < kMaxDepth) unit_009D(c, 299u, depth + 1u); else { c.pc = 0x00376F50u; return; } if (c.pc != 0x00372C54u) [[unlikely]] return; }
L_00372C54:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00372C58:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00372C70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 2u));
    set32(c.r[2], 0u + 3u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_003730CC; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00372E88; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00372DB4; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00372CB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003730D0; } }
L_00372CB4:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_00372DA0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00372CD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003730CC; } }
L_00372CD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372CD8u);  if (depth < kMaxDepth) unit_009D(c, 283u, depth + 1u); else { c.pc = 0x00376BE0u; return; } if (c.pc != 0x00372CD8u) [[unlikely]] return; }
L_00372CD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 12512u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372CECu); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x00372CECu) [[unlikely]] return; }
L_00372CEC:
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372D04u); set32(c.r[5], 0u + 17u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x00372D04u) [[unlikely]] return; }
L_00372D04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 14016u);
    set32(c.r[5], 0u + 7u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372D18u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x00372D18u) [[unlikely]] return; }
L_00372D18:
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 14016u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372D34u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x00372D34u) [[unlikely]] return; }
L_00372D34:
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372D44u); st32((c.r[2].w[0] + 28u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_009A(c, 532u, depth + 1u); else { c.pc = 0x0036B670u; return; } if (c.pc != 0x00372D44u) [[unlikely]] return; }
L_00372D44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] - 14512u);
    set32(c.r[6], 0u + 3840u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372D58u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00372D58u) [[unlikely]] return; }
L_00372D58:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 26032u));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00372D90; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], 0u + 1u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372D84u); st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0098(c, 449u, depth + 1u); else { c.pc = 0x00363270u; return; } if (c.pc != 0x00372D84u) [[unlikely]] return; }
L_00372D84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003730CC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00372D90:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003730CC; } }
L_00372DA0:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372DACu); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0098(c, 450u, depth + 1u); else { c.pc = 0x00363290u; return; } if (c.pc != 0x00372DACu) [[unlikely]] return; }
L_00372DAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003730CC; } }
L_00372DB4:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[4].d[0]) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_00372E64; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00372DD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003730CC; } }
L_00372DD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372DD8u);  if (depth < kMaxDepth) unit_0097(c, 178u, depth + 1u); else { c.pc = 0x0035D5B0u; return; } if (c.pc != 0x00372DD8u) [[unlikely]] return; }
L_00372DD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003730CC; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 26032u));
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372DF8u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_009D(c, 305u, depth + 1u); else { c.pc = 0x00377240u; return; } if (c.pc != 0x00372DF8u) [[unlikely]] return; }
L_00372DF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372E00u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x00372E00u) [[unlikely]] return; }
L_00372E00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 64u);  if (t) { goto L_00372E3C; } }
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372E14u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00372E14u) [[unlikely]] return; }
L_00372E14:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372E30u); c.r[4].d[0] = ld8((c.r[16].w[0] + 8u));  if (depth < kMaxDepth) unit_0098(c, 449u, depth + 1u); else { c.pc = 0x00363270u; return; } if (c.pc != 0x00372E30u) [[unlikely]] return; }
L_00372E30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003730CC; } }
    set32(c.r[4], 0u + 64u);
    c.budget -= 1;
L_00372E3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372E44u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x00372E44u) [[unlikely]] return; }
L_00372E44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003730CC; } }
    set32(c.r[5], 0u + 54u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372E58u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00372E58u) [[unlikely]] return; }
L_00372E58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_003730D0; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00372E64:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372E80u); st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (depth < kMaxDepth) unit_0098(c, 450u, depth + 1u); else { c.pc = 0x00363290u; return; } if (c.pc != 0x00372E80u) [[unlikely]] return; }
L_00372E80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003730CC; } }
L_00372E88:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003730AC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00372EA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003730CC; } }
L_00372EA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372EB0u);  if (depth < kMaxDepth) unit_0097(c, 178u, depth + 1u); else { c.pc = 0x0035D5B0u; return; } if (c.pc != 0x00372EB0u) [[unlikely]] return; }
L_00372EB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003730CC; } }
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], c.r[16].w[0] + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372EC8u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 305u, depth + 1u); else { c.pc = 0x00377240u; return; } if (c.pc != 0x00372EC8u) [[unlikely]] return; }
L_00372EC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372ED0u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x00372ED0u) [[unlikely]] return; }
L_00372ED0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 64u);  if (t) { goto L_00373064; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 16u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], 0u + 4u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372F00u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00372F00u) [[unlikely]] return; }
L_00372F00:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 9u));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00373000; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00372F9C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00372F68; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00372F38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003730CC; } }
L_00372F38:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 7u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003730CC; } }
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 7u));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372F60u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0098(c, 450u, depth + 1u); else { c.pc = 0x00363290u; return; } if (c.pc != 0x00372F60u) [[unlikely]] return; }
L_00372F60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003730CC; } }
L_00372F68:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 7u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003730CC; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 7u));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372F94u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0098(c, 450u, depth + 1u); else { c.pc = 0x00363290u; return; } if (c.pc != 0x00372F94u) [[unlikely]] return; }
L_00372F94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003730CC; } }
L_00372F9C:
    c.r[3].d[0] = ld16((c.r[28].w[0] - 26040u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    c.r[4].d[0] = ld8((c.r[16].w[0] + 7u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003730CC; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 7u));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372FF8u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0098(c, 450u, depth + 1u); else { c.pc = 0x00363290u; return; } if (c.pc != 0x00372FF8u) [[unlikely]] return; }
L_00372FF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003730CC; } }
L_00373000:
    c.r[3].d[0] = ld16((c.r[28].w[0] - 26040u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    c.r[4].d[0] = ld8((c.r[16].w[0] + 7u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003730CC; } }
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 7u));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373058u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0098(c, 450u, depth + 1u); else { c.pc = 0x00363290u; return; } if (c.pc != 0x00373058u) [[unlikely]] return; }
L_00373058:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003730CC; } }
    set32(c.r[4], 0u + 64u);
    c.budget -= 1;
L_00373064:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037306Cu);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x0037306Cu) [[unlikely]] return; }
L_0037306C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003730CC; } }
    set32(c.r[5], 0u + 54u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373080u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00373080u) [[unlikely]] return; }
L_00373080:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 26032u));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0037309C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_003730D0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0037309C:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003730CC; } }
L_003730AC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003730CC; } }
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003730CC:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003730D0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003730E0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 13u));
    c.budget -= 9;
    if (c.r[4].d[0] == c.r[3].d[0]) { mmi::paddub(c.r[4], c.r[0], c.r[0]);  goto L_003731E4; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_00373118; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_003736AC; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 1;
L_00373118:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373120u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x00373120u) [[unlikely]] return; }
L_00373120:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373130u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x00373130u) [[unlikely]] return; }
L_00373130:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 20900u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 20904u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373154u); set32(c.r[4], c.r[2].w[0] - 21664u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00373154u) [[unlikely]] return; }
L_00373154:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037315Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0037315Cu) [[unlikely]] return; }
L_0037315C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373170u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x00373170u) [[unlikely]] return; }
L_00373170:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[17], c.r[3].w[0] - 10672u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_003731C8; } }
L_00373180:
    c.f[0] = c.r[16].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[12] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41990000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43080000u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003731C0u); c.f[13] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x003731C0u) [[unlikely]] return; }
L_003731C0:
    set32(c.r[17], c.r[17].w[0] + 64u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_003731C8:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 26032u));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00373180u | kUnwind; return; } goto L_00373180; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003736A8; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_003731E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003731ECu);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x003731ECu) [[unlikely]] return; }
L_003731EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003731FCu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x003731FCu) [[unlikely]] return; }
L_003731FC:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 26036u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[2], c.r[2].w[0] - 10672u);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373214u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x00373214u) [[unlikely]] return; }
L_00373214:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_00373234; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00373234:
    c.f[0] = c.r[2].w[0];
    c.r[3].d[0] = ld8((c.r[28].w[0] - 26036u));
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.f[13] = ld32((c.r[1].w[0] - 21708u));
    c.f[0] = c.r[5].w[0];
    set32(c.r[2], c.r[2].w[0] - 10672u);
    c.f[14] = c.r[4].w[0];
    set32(c.r[3], c.r[3].w[0] << 6);
    c.f[12] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373270u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00373270u) [[unlikely]] return; }
L_00373270:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[12] = ld32((c.r[1].w[0] - 21760u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[13] = ld32((c.r[1].w[0] - 21756u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373294u); set32(c.r[4], c.r[2].w[0] - 14512u);  if (depth < kMaxDepth) unit_0099(c, 110u, depth + 1u); else { c.pc = 0x003655A0u; return; } if (c.pc != 0x00373294u) [[unlikely]] return; }
L_00373294:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[12] = ld32((c.r[1].w[0] - 21760u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[13] = ld32((c.r[1].w[0] - 21748u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003732B8u); set32(c.r[4], c.r[2].w[0] - 13744u);  if (depth < kMaxDepth) unit_0099(c, 110u, depth + 1u); else { c.pc = 0x003655A0u; return; } if (c.pc != 0x003732B8u) [[unlikely]] return; }
L_003732B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[12] = ld32((c.r[1].w[0] - 21760u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[13] = ld32((c.r[1].w[0] - 21740u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003732DCu); set32(c.r[4], c.r[2].w[0] - 12976u);  if (depth < kMaxDepth) unit_0099(c, 110u, depth + 1u); else { c.pc = 0x003655A0u; return; } if (c.pc != 0x003732DCu) [[unlikely]] return; }
L_003732DC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[12] = ld32((c.r[1].w[0] - 21760u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[13] = ld32((c.r[1].w[0] - 21732u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373300u); set32(c.r[4], c.r[2].w[0] - 12208u);  if (depth < kMaxDepth) unit_0099(c, 110u, depth + 1u); else { c.pc = 0x003655A0u; return; } if (c.pc != 0x00373300u) [[unlikely]] return; }
L_00373300:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[12] = ld32((c.r[1].w[0] - 21760u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[13] = ld32((c.r[1].w[0] - 21724u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373324u); set32(c.r[4], c.r[2].w[0] - 11440u);  if (depth < kMaxDepth) unit_0099(c, 110u, depth + 1u); else { c.pc = 0x003655A0u; return; } if (c.pc != 0x00373324u) [[unlikely]] return; }
L_00373324:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037332Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0037332Cu) [[unlikely]] return; }
L_0037332C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373340u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x00373340u) [[unlikely]] return; }
L_00373340:
    set32(c.r[6], ld32((c.r[28].w[0] - 26052u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373354u); set32(c.r[5], c.r[2].w[0] - 21648u);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x00373354u) [[unlikely]] return; }
L_00373354:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 20848u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 20852u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373374u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00373374u) [[unlikely]] return; }
L_00373374:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037337Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0037337Cu) [[unlikely]] return; }
L_0037337C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[0] = ld32((c.r[1].w[0] + 20848u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C00000u);
    c.f[1] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 20860u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[12] = fp::add(c.f[1], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003733ACu); set32(c.r[4], c.r[2].w[0] - 21640u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x003733ACu) [[unlikely]] return; }
L_003733AC:
    set32(c.r[6], ld32((c.r[28].w[0] - 26056u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003733C0u); set32(c.r[5], c.r[2].w[0] - 21648u);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x003733C0u) [[unlikely]] return; }
L_003733C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[0] = ld32((c.r[1].w[0] + 20848u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43060000u);
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[1] = c.r[2].w[0];
    c.f[13] = ld32((c.r[1].w[0] + 20868u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003733F0u); c.f[12] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x003733F0u) [[unlikely]] return; }
L_003733F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[0] = ld32((c.r[1].w[0] + 20848u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[1] = c.r[2].w[0];
    c.f[13] = ld32((c.r[1].w[0] + 20876u));
    c.f[12] = fp::add(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373424u); set32(c.r[4], c.r[2].w[0] - 21632u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00373424u) [[unlikely]] return; }
L_00373424:
    c.r[5].d[0] = ld16((c.r[28].w[0] - 26064u));
    c.r[4].d[0] = ld16((c.r[28].w[0] - 26068u));
    c.r[3].d[0] = ld16((c.r[28].w[0] - 26072u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[7].d[0] = c.r[2].d[0] | 34464ull;
    set32(c.r[2], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[6].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00373464; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037345Cu); set32(c.r[5], c.r[2].w[0] - 21624u);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x0037345Cu) [[unlikely]] return; }
L_0037345C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_00373478; } }
L_00373464:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373474u); set32(c.r[5], c.r[2].w[0] - 21616u);  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x00373474u) [[unlikely]] return; }
L_00373474:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_00373478:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373480u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x00373480u) [[unlikely]] return; }
L_00373480:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 20888u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 20884u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003734A0u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x003734A0u) [[unlikely]] return; }
L_003734A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003734A8u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x003734A8u) [[unlikely]] return; }
L_003734A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[0] = ld32((c.r[1].w[0] + 20888u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42400000u);
    c.f[1] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 20884u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[12] = fp::add(c.f[1], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003734D8u); set32(c.r[4], c.r[2].w[0] - 21608u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x003734D8u) [[unlikely]] return; }
L_003734D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003734E0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x003734E0u) [[unlikely]] return; }
L_003734E0:
    c.r[6].d[0] = ld16((c.r[28].w[0] - 26064u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003734F4u); set32(c.r[5], c.r[2].w[0] - 21624u);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x003734F4u) [[unlikely]] return; }
L_003734F4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[0] = ld32((c.r[1].w[0] + 20888u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42860000u);
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[1] = c.r[2].w[0];
    c.f[13] = ld32((c.r[1].w[0] + 20884u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373524u); c.f[12] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00373524u) [[unlikely]] return; }
L_00373524:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037352Cu); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0037352Cu) [[unlikely]] return; }
L_0037352C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[0] = ld32((c.r[1].w[0] + 20888u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42E60000u);
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[1] = c.r[2].w[0];
    c.f[13] = ld32((c.r[1].w[0] + 20884u));
    c.f[12] = fp::add(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373560u); set32(c.r[4], c.r[2].w[0] - 21600u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00373560u) [[unlikely]] return; }
L_00373560:
    c.r[3].d[0] = ld16((c.r[28].w[0] - 26068u));
    c.r[2].d[0] = ld16((c.r[28].w[0] - 26072u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 34464ull;
    set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[6].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00373598; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373590u); set32(c.r[5], c.r[2].w[0] - 21624u);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x00373590u) [[unlikely]] return; }
L_00373590:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_003735AC; } }
L_00373598:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003735A8u); set32(c.r[5], c.r[2].w[0] - 21616u);  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x003735A8u) [[unlikely]] return; }
L_003735A8:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_003735AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003735B4u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x003735B4u) [[unlikely]] return; }
L_003735B4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[0] = ld32((c.r[1].w[0] + 20888u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43060000u);
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[1] = c.r[2].w[0];
    c.f[13] = ld32((c.r[1].w[0] + 20884u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003735E4u); c.f[12] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x003735E4u) [[unlikely]] return; }
L_003735E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003735ECu); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x003735ECu) [[unlikely]] return; }
L_003735EC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[0] = ld32((c.r[1].w[0] + 20888u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43360000u);
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[1] = c.r[2].w[0];
    c.f[13] = ld32((c.r[1].w[0] + 20884u));
    c.f[12] = fp::add(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373620u); set32(c.r[4], c.r[2].w[0] - 21592u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00373620u) [[unlikely]] return; }
L_00373620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373628u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x00373628u) [[unlikely]] return; }
L_00373628:
    c.r[6].d[0] = ld16((c.r[28].w[0] - 26076u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037363Cu); set32(c.r[5], c.r[2].w[0] - 21624u);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x0037363Cu) [[unlikely]] return; }
L_0037363C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[0] = ld32((c.r[1].w[0] + 20888u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43490000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[1] = c.r[2].w[0];
    c.f[13] = ld32((c.r[1].w[0] + 20884u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037366Cu); c.f[12] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0037366Cu) [[unlikely]] return; }
L_0037366C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373674u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x00373674u) [[unlikely]] return; }
L_00373674:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[0] = ld32((c.r[1].w[0] + 20888u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43790000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[1] = c.r[2].w[0];
    c.f[13] = ld32((c.r[1].w[0] + 20884u));
    c.f[12] = fp::add(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003736A8u); set32(c.r[4], c.r[2].w[0] - 21584u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x003736A8u) [[unlikely]] return; }
L_003736A8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_003736AC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003736C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_0037376C; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 13u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00373764; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 112u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[0] = ld32((c.r[1].w[0] + 20948u));
    st32((c.r[17].w[0] + 116u), c.f[0]);
    st32((c.r[17].w[0] + 120u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 32u), 0u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8u));
    c.budget -= 12;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[4], c.r[3].w[0] >> 1);  if (t) { goto L_0037372C; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00373744; } }
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.budget -= 1;
L_0037372C:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 6;
L_00373744:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[1] = ld32((c.r[1].w[0] + 20960u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[0] = ld32((c.r[1].w[0] + 20956u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 36u), c.f[0]);  if (t) { goto L_003737C4; } }
L_00373764:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003737C4; } }
L_0037376C:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 13u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003737C0; } }
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[3].d[0] = c.r[3].d[0] | 26214ull;
    st32((c.r[17].w[0] + 112u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 116u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 120u), c.r[3].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 9u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[3].w[0] - 21568u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3480000u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 36u), c.r[3].w[0]);  if (t) { goto L_003737C4; } }
L_003737C0:
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003737C4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0037383C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00373800; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 1u);  goto L_003737F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_00373860; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_003737F4:
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373800u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x00373800u) [[unlikely]] return; }
L_00373800:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 12u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_0037382C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373820u); st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x00373820u) [[unlikely]] return; }
L_00373820:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037385C; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_0037382C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373834u);  if (depth < kMaxDepth) unit_009D(c, 297u, depth + 1u); else { c.pc = 0x00376EC0u; return; } if (c.pc != 0x00373834u) [[unlikely]] return; }
L_00373834:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037385C; } }
L_0037383C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 12u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00373854; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0037385C; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00373854:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037385Cu);  if (depth < kMaxDepth) unit_009D(c, 299u, depth + 1u); else { c.pc = 0x00376F50u; return; } if (c.pc != 0x0037385Cu) [[unlikely]] return; }
L_0037385C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00373860:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00373870:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.f[1] = ld32((c.r[28].w[0] - 24880u));
    c.f[0] = ld32((c.r[28].w[0] - 24884u));
    set32(c.r[4], 0u + 8192u);
    st32((c.r[28].w[0] - 24872u), c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373890u); st32((c.r[28].w[0] - 24876u), c.f[0]);  if (depth < kMaxDepth) unit_009E(c, 21u, depth + 1u); else { c.pc = 0x00378370u; return; } if (c.pc != 0x00373890u) [[unlikely]] return; }
L_00373890:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 4096u);  if (t) { goto L_003738B8; } }
    c.f[1] = ld32((c.r[28].w[0] - 24884u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 24884u), c.f[0]);  if (t) { goto L_003738E0; } }
    set32(c.r[4], 0u + 4096u);
    c.budget -= 1;
L_003738B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003738C0u);  if (depth < kMaxDepth) unit_009E(c, 21u, depth + 1u); else { c.pc = 0x00378370u; return; } if (c.pc != 0x003738C0u) [[unlikely]] return; }
L_003738C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 2048u);  if (t) { goto L_003738E4; } }
    c.f[1] = ld32((c.r[28].w[0] - 24884u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[28].w[0] - 24884u), c.f[0]);
    c.budget -= 6;
L_003738E0:
    set32(c.r[4], 0u + 2048u);
    c.budget -= 1;
L_003738E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003738ECu);  if (depth < kMaxDepth) unit_009E(c, 21u, depth + 1u); else { c.pc = 0x00378370u; return; } if (c.pc != 0x003738ECu) [[unlikely]] return; }
L_003738EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1024u);  if (t) { goto L_00373914; } }
    c.f[1] = ld32((c.r[28].w[0] - 24880u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 24880u), c.f[0]);  if (t) { goto L_0037393C; } }
    set32(c.r[4], 0u + 1024u);
    c.budget -= 1;
L_00373914:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037391Cu);  if (depth < kMaxDepth) unit_009E(c, 21u, depth + 1u); else { c.pc = 0x00378370u; return; } if (c.pc != 0x0037391Cu) [[unlikely]] return; }
L_0037391C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037393C; } }
    c.f[1] = ld32((c.r[28].w[0] - 24880u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[28].w[0] - 24880u), c.f[0]);
    c.budget -= 6;
L_0037393C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00373950:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373960u); c.f[12] = ld32((c.r[28].w[0] - 24880u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00373960u) [[unlikely]] return; }
L_00373960:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] - 15u);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[2].sd[0] < 611ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0037398C; } }
    c.f[0] = ld32((c.r[28].w[0] - 24872u));
    st32((c.r[28].w[0] - 24880u), c.f[0]);
    c.budget -= 2;
L_0037398C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373994u); c.f[12] = ld32((c.r[28].w[0] - 24884u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00373994u) [[unlikely]] return; }
L_00373994:
    c.r[4].d[0] = ld16((c.r[28].w[0] - 27132u));
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[3].d[0] = ld16((c.r[28].w[0] - 27130u));
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003739C8; } }
    c.f[0] = ld32((c.r[28].w[0] - 24876u));
    st32((c.r[28].w[0] - 24884u), c.f[0]);
    c.budget -= 2;
L_003739C8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003739E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[20] = ld32((c.r[4].w[0] + 4u));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373A04u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00373A04u) [[unlikely]] return; }
L_00373A04:
    c.f[12] = ld32((c.r[28].w[0] - 24880u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373A10u); mmi::paddub(c.r[17], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00373A10u) [[unlikely]] return; }
L_00373A10:
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373A2Cu); c.f[12] = fp::sub(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00373A2Cu) [[unlikely]] return; }
L_00373A2C:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00373A44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00373A84; } }
L_00373A44:
    c.f[20] = ld32((c.r[16].w[0] + 12u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373A50u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00373A50u) [[unlikely]] return; }
L_00373A50:
    c.f[12] = ld32((c.r[28].w[0] - 24884u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373A5Cu); mmi::paddub(c.r[17], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00373A5Cu) [[unlikely]] return; }
L_00373A5C:
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373A74u); c.f[12] = fp::sub(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00373A74u) [[unlikely]] return; }
L_00373A74:
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
L_00373A84:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00373AA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], 0u + 255u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 25964u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 5234u));
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00373B18; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00373AF4; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 5235u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00373B18; } }
L_00373AF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373B00u); set32(c.r[4], c.r[2].w[0] + 21200u);  if (depth < kMaxDepth) unit_009C(c, 404u, depth + 1u); else { c.pc = 0x003739E0u; return; } if (c.pc != 0x00373B00u) [[unlikely]] return; }
L_00373B00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00373B18; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 21200u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00373BA0; } }
L_00373B18:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 7u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], 0u + 13u);  if (t) { goto L_00373B34; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 13u);  if (t) { goto L_00373B38; } }
    set32(c.r[16], 0u + 13u);
    c.budget -= 1;
L_00373B34:
    set32(c.r[17], 0u + 24u);
    c.budget -= 1;
L_00373B38:
    c.r[1].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00373BA0; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 21200u);
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
L_00373B5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373B64u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_009C(c, 404u, depth + 1u); else { c.pc = 0x003739E0u; return; } if (c.pc != 0x00373B64u) [[unlikely]] return; }
L_00373B64:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00373B94; }
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 21200u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00373BA0; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00373B94:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00373B5Cu | kUnwind; return; } goto L_00373B5C; } }
L_00373BA0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00373BC0:
    c.r[5].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[6], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 21204u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.r[1].d[0] = c.r[5].sd[0] < 13ll ? 1ull : 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 21212u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0] + 8132u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 18;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[3].w[0] + 8136u), c.f[0]);  if (t) { goto L_00373C14; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 8140u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00373C20; } }
L_00373C14:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 8140u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
L_00373C20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00373C30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[18], c.r[4], c.r[0]);  if (t) { goto L_00373E90; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00373D90; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_00373C74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00373EB4; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00373C74:
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 255u);
    st8((c.r[18].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.f[0] = ld32((c.r[2].w[0] + 8132u));
    st32((c.r[28].w[0] - 24880u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8136u));
    st32((c.r[28].w[0] - 24884u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 8140u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373CA0u); st8((c.r[18].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009C(c, 411u, depth + 1u); else { c.pc = 0x00373AA0u; return; } if (c.pc != 0x00373CA0u) [[unlikely]] return; }
L_00373CA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[4], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373CB4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x00373CB4u) [[unlikely]] return; }
L_00373CB4:
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 2;
L_00373CBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[2].w[0] + 20984u);
    c.r[4].d[0] = ld8((c.r[18].w[0] + 7u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 16640u);
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373CF0u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x00373CF0u) [[unlikely]] return; }
L_00373CF0:
    st32((c.r[2].w[0] + 28u), c.r[18].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00373CBCu | kUnwind; return; } goto L_00373CBC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 16080u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373D1Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x00373D1Cu) [[unlikely]] return; }
L_00373D1C:
    st32((c.r[2].w[0] + 28u), c.r[18].w[0]);
    st8((c.r[2].w[0] + 272u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 16784u);
    set32(c.r[4], 0u + 4u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373D3Cu); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x00373D3Cu) [[unlikely]] return; }
L_00373D3C:
    st32((c.r[2].w[0] + 28u), c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 16976u);
    set32(c.r[4], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373D54u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x00373D54u) [[unlikely]] return; }
L_00373D54:
    st32((c.r[2].w[0] + 28u), c.r[18].w[0]);
    st8((c.r[2].w[0] + 272u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 16976u);
    set32(c.r[4], 0u + 4u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373D74u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x00373D74u) [[unlikely]] return; }
L_00373D74:
    st32((c.r[2].w[0] + 28u), c.r[18].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 272u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373D88u); st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_009A(c, 532u, depth + 1u); else { c.pc = 0x0036B670u; return; } if (c.pc != 0x00373D88u) [[unlikely]] return; }
L_00373D88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00373EB0; } }
L_00373D90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373D98u);  if (depth < kMaxDepth) unit_0097(c, 178u, depth + 1u); else { c.pc = 0x0035D5B0u; return; } if (c.pc != 0x00373D98u) [[unlikely]] return; }
L_00373D98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00373EB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373DA8u); set32(c.r[4], 0u + 128u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x00373DA8u) [[unlikely]] return; }
L_00373DA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00373DD4; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 7u));
    set32(c.r[5], 0u + 40u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[18].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 7u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373DD4u); st8((c.r[18].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00373DD4u) [[unlikely]] return; }
L_00373DD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373DDCu);  if (depth < kMaxDepth) unit_009C(c, 396u, depth + 1u); else { c.pc = 0x00373870u; return; } if (c.pc != 0x00373DDCu) [[unlikely]] return; }
L_00373DDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373DE4u);  if (depth < kMaxDepth) unit_009C(c, 401u, depth + 1u); else { c.pc = 0x00373950u; return; } if (c.pc != 0x00373DE4u) [[unlikely]] return; }
L_00373DE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373DECu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_009C(c, 411u, depth + 1u); else { c.pc = 0x00373AA0u; return; } if (c.pc != 0x00373DECu) [[unlikely]] return; }
L_00373DEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373DF4u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x00373DF4u) [[unlikely]] return; }
L_00373DF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00373E68; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 8u));
    set32(c.r[2], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00373E68; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00373E40; } }
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[2], c.r[2].w[0] + 14716u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00373E68; } }
L_00373E40:
    c.r[5].d[0] = ld8((c.r[18].w[0] + 2u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 16u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[18].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], 0u + 4u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373E68u); st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00373E68u) [[unlikely]] return; }
L_00373E68:
    c.f[0] = ld32((c.r[28].w[0] - 24880u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st32((c.r[2].w[0] + 8132u), c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 24884u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st32((c.r[2].w[0] + 8136u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 7u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 8140u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00373EB0; } }
L_00373E90:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00373EB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00373EB4; } }
L_00373EB0:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00373EB4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00373ED0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373EF8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x00373EF8u) [[unlikely]] return; }
L_00373EF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373F08u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x00373F08u) [[unlikely]] return; }
L_00373F08:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 7u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], 0u + 13u);  if (t) { goto L_00373F24; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 13u);  if (t) { goto L_00373F28; } }
    set32(c.r[17], 0u + 13u);
    c.budget -= 1;
L_00373F24:
    set32(c.r[18], 0u + 24u);
    c.budget -= 1;
L_00373F28:
    c.r[1].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_00373FD4; } }
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[2], c.r[2].w[0] + 15040u);
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 21008u);
    set32(c.r[3], c.r[17].w[0] << 3);
    set32(c.r[20], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
L_00373F64:
    c.r[2].d[0] = ld8((c.r[19].w[0] - 324u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00373F88; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373F80u); set32(c.r[5], c.r[2].w[0] - 21552u);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x00373F80u) [[unlikely]] return; }
L_00373F80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[20].w[0]));  if (t) { goto L_00373FA4; } }
L_00373F88:
    c.r[6].d[0] = ld16((c.r[19].w[0] - 326u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373F9Cu); set32(c.r[5], c.r[2].w[0] - 21544u);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x00373F9Cu) [[unlikely]] return; }
L_00373F9C:
    c.f[12] = ld32((c.r[20].w[0]));
    c.budget -= 2;
L_00373FA4:
    c.f[13] = ld32((c.r[20].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373FB8u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00373FB8u) [[unlikely]] return; }
L_00373FB8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + 328u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00373F64u | kUnwind; return; } goto L_00373F64; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 2;
L_00373FD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373FDCu);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x00373FDCu) [[unlikely]] return; }
L_00373FDC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373FECu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x00373FECu) [[unlikely]] return; }
L_00373FEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43F90000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43D40000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00374004u);  if (depth < kMaxDepth) unit_009A(c, 561u, depth + 1u); else { c.pc = 0x0036BC50u; return; } if (c.pc != 0x00374004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_009D(c, 2u, depth);
}

}
