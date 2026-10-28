#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_000B[4096] = {
    1, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0,
    0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0,
    0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0,
    20, 0, 21, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0,
    0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0,
    43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0,
    0, 0, 0, 0, 54, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 0,
    75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0,
    0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0,
    88, 0, 0, 0, 89, 0, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0,
    0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 103, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0,
    110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0,
    0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0,
    0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0,
    0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0,
    0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 153, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 159, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0,
    0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 175,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0,
    0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0,
    188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0,
    0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 0, 198, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0,
    0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0,
    0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0,
    216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0,
    220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 224, 0, 0, 0, 0, 0,
    0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 228, 0, 0, 0, 229, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0,
    0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0,
    238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 241, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 247,
    0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0,
    255, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 0,
    0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0,
    0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    267, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0,
    272, 0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0,
    0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 285, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 287, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0,
    294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 296, 0, 297, 0, 0, 0, 0, 0, 0, 298, 0, 0, 299, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 304, 0, 0, 305, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0,
    310, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    313, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0,
    317, 0, 0, 0, 0, 318, 0, 0, 0, 0, 319, 0, 320, 0, 0, 0, 321, 0, 322, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 341, 0, 342, 0, 0, 0, 0,
    0, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 347, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 350,
    0, 351, 0, 352, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 357, 0,
    0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 370, 0, 371, 0, 0, 0, 0, 0,
    372, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 379, 0, 0, 0, 0, 380, 0, 381, 0, 0, 0,
    382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 384, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0,
    0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 397, 0,
    0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0,
    0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 406, 0, 0, 0, 407, 0,
    0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 0, 0,
    0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    419, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0,
    0, 0, 430, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 433, 0, 0, 434, 0, 0, 0,
    0, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 437, 0, 438, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 441, 0, 0, 0, 0, 442, 0, 443, 0, 444, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0,
    446, 0, 447, 0, 0, 448, 0, 0, 0, 0, 449, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    452, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 454, 0, 455, 0, 0, 456, 0, 457, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 460, 0, 461, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 463, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0,
};

void unit_000B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0012C000;
    case 2u: goto L_0012C004;
    case 3u: goto L_0012C010;
    case 4u: goto L_0012C038;
    case 5u: goto L_0012C040;
    case 6u: goto L_0012C060;
    case 7u: goto L_0012C074;
    case 8u: goto L_0012C088;
    case 9u: goto L_0012C098;
    case 10u: goto L_0012C0CC;
    case 11u: goto L_0012C0F4;
    case 12u: goto L_0012C110;
    case 13u: goto L_0012C134;
    case 14u: goto L_0012C18C;
    case 15u: goto L_0012C1A8;
    case 16u: goto L_0012C1B8;
    case 17u: goto L_0012C1C0;
    case 18u: goto L_0012C1E0;
    case 19u: goto L_0012C1F4;
    case 20u: goto L_0012C200;
    case 21u: goto L_0012C208;
    case 22u: goto L_0012C214;
    case 23u: goto L_0012C240;
    case 24u: goto L_0012C254;
    case 25u: goto L_0012C268;
    case 26u: goto L_0012C2BC;
    case 27u: goto L_0012C2D0;
    case 28u: goto L_0012C310;
    case 29u: goto L_0012C320;
    case 30u: goto L_0012C330;
    case 31u: goto L_0012C348;
    case 32u: goto L_0012C380;
    case 33u: goto L_0012C398;
    case 34u: goto L_0012C3C0;
    case 35u: goto L_0012C3D8;
    case 36u: goto L_0012C45C;
    case 37u: goto L_0012C494;
    case 38u: goto L_0012C4AC;
    case 39u: goto L_0012C4F0;
    case 40u: goto L_0012C508;
    case 41u: goto L_0012C520;
    case 42u: goto L_0012C568;
    case 43u: goto L_0012C580;
    case 44u: goto L_0012C5A0;
    case 45u: goto L_0012C5B0;
    case 46u: goto L_0012C5C0;
    case 47u: goto L_0012C618;
    case 48u: goto L_0012C62C;
    case 49u: goto L_0012C65C;
    case 50u: goto L_0012C688;
    case 51u: goto L_0012C6A0;
    case 52u: goto L_0012C6D4;
    case 53u: goto L_0012C6F0;
    case 54u: goto L_0012C710;
    case 55u: goto L_0012C718;
    case 56u: goto L_0012C744;
    case 57u: goto L_0012C758;
    case 58u: goto L_0012C798;
    case 59u: goto L_0012C7D8;
    case 60u: goto L_0012C7E8;
    case 61u: goto L_0012C810;
    case 62u: goto L_0012C858;
    case 63u: goto L_0012C8C0;
    case 64u: goto L_0012C8D8;
    case 65u: goto L_0012C918;
    case 66u: goto L_0012C934;
    case 67u: goto L_0012C948;
    case 68u: goto L_0012C958;
    case 69u: goto L_0012C980;
    case 70u: goto L_0012C99C;
    case 71u: goto L_0012C9B0;
    case 72u: goto L_0012C9B8;
    case 73u: goto L_0012C9DC;
    case 74u: goto L_0012C9E8;
    case 75u: goto L_0012CA00;
    case 76u: goto L_0012CA38;
    case 77u: goto L_0012CA60;
    case 78u: goto L_0012CA9C;
    case 79u: goto L_0012CAC8;
    case 80u: goto L_0012CAF0;
    case 81u: goto L_0012CB08;
    case 82u: goto L_0012CB28;
    case 83u: goto L_0012CB40;
    case 84u: goto L_0012CB54;
    case 85u: goto L_0012CB70;
    case 86u: goto L_0012CBB8;
    case 87u: goto L_0012CBEC;
    case 88u: goto L_0012CC00;
    case 89u: goto L_0012CC10;
    case 90u: goto L_0012CC1C;
    case 91u: goto L_0012CC38;
    case 92u: goto L_0012CC50;
    case 93u: goto L_0012CC60;
    case 94u: goto L_0012CC88;
    case 95u: goto L_0012CC98;
    case 96u: goto L_0012CCE4;
    case 97u: goto L_0012CD04;
    case 98u: goto L_0012CD18;
    case 99u: goto L_0012CD38;
    case 100u: goto L_0012CD40;
    case 101u: goto L_0012CD4C;
    case 102u: goto L_0012CD64;
    case 103u: goto L_0012CD6C;
    case 104u: goto L_0012CDD8;
    case 105u: goto L_0012CE04;
    case 106u: goto L_0012CE30;
    case 107u: goto L_0012CE50;
    case 108u: goto L_0012CEC8;
    case 109u: goto L_0012CEE4;
    case 110u: goto L_0012CF00;
    case 111u: goto L_0012CF6C;
    case 112u: goto L_0012CF9C;
    case 113u: goto L_0012CFE4;
    case 114u: goto L_0012CFF4;
    case 115u: goto L_0012D018;
    case 116u: goto L_0012D02C;
    case 117u: goto L_0012D03C;
    case 118u: goto L_0012D068;
    case 119u: goto L_0012D0AC;
    case 120u: goto L_0012D0C4;
    case 121u: goto L_0012D0DC;
    case 122u: goto L_0012D0F0;
    case 123u: goto L_0012D10C;
    case 124u: goto L_0012D128;
    case 125u: goto L_0012D130;
    case 126u: goto L_0012D14C;
    case 127u: goto L_0012D168;
    case 128u: goto L_0012D190;
    case 129u: goto L_0012D1B4;
    case 130u: goto L_0012D1C0;
    case 131u: goto L_0012D1C8;
    case 132u: goto L_0012D1E0;
    case 133u: goto L_0012D1F0;
    case 134u: goto L_0012D208;
    case 135u: goto L_0012D240;
    case 136u: goto L_0012D264;
    case 137u: goto L_0012D270;
    case 138u: goto L_0012D290;
    case 139u: goto L_0012D2B8;
    case 140u: goto L_0012D2C4;
    case 141u: goto L_0012D2CC;
    case 142u: goto L_0012D2E8;
    case 143u: goto L_0012D2F4;
    case 144u: goto L_0012D330;
    case 145u: goto L_0012D390;
    case 146u: goto L_0012D3D8;
    case 147u: goto L_0012D3E0;
    case 148u: goto L_0012D468;
    case 149u: goto L_0012D4B0;
    case 150u: goto L_0012D4C4;
    case 151u: goto L_0012D4E0;
    case 152u: goto L_0012D4EC;
    case 153u: goto L_0012D4F8;
    case 154u: goto L_0012D524;
    case 155u: goto L_0012D53C;
    case 156u: goto L_0012D558;
    case 157u: goto L_0012D5A8;
    case 158u: goto L_0012D5E8;
    case 159u: goto L_0012D5F4;
    case 160u: goto L_0012D624;
    case 161u: goto L_0012D63C;
    case 162u: goto L_0012D65C;
    case 163u: goto L_0012D670;
    case 164u: goto L_0012D6A8;
    case 165u: goto L_0012D6F0;
    case 166u: goto L_0012D71C;
    case 167u: goto L_0012D778;
    case 168u: goto L_0012D790;
    case 169u: goto L_0012D7C8;
    case 170u: goto L_0012D80C;
    case 171u: goto L_0012D824;
    case 172u: goto L_0012D844;
    case 173u: goto L_0012D854;
    case 174u: goto L_0012D86C;
    case 175u: goto L_0012D87C;
    case 176u: goto L_0012D8A8;
    case 177u: goto L_0012D8B4;
    case 178u: goto L_0012D8F0;
    case 179u: goto L_0012D92C;
    case 180u: goto L_0012D944;
    case 181u: goto L_0012D964;
    case 182u: goto L_0012D974;
    case 183u: goto L_0012D98C;
    case 184u: goto L_0012D99C;
    case 185u: goto L_0012D9C4;
    case 186u: goto L_0012D9D0;
    case 187u: goto L_0012D9F0;
    case 188u: goto L_0012DA00;
    case 189u: goto L_0012DA18;
    case 190u: goto L_0012DA38;
    case 191u: goto L_0012DAB0;
    case 192u: goto L_0012DAB8;
    case 193u: goto L_0012DADC;
    case 194u: goto L_0012DAF8;
    case 195u: goto L_0012DB08;
    case 196u: goto L_0012DB24;
    case 197u: goto L_0012DB2C;
    case 198u: goto L_0012DB40;
    case 199u: goto L_0012DB48;
    case 200u: goto L_0012DB70;
    case 201u: goto L_0012DB94;
    case 202u: goto L_0012DBA0;
    case 203u: goto L_0012DBB8;
    case 204u: goto L_0012DBE8;
    case 205u: goto L_0012DC08;
    case 206u: goto L_0012DC30;
    case 207u: goto L_0012DC58;
    case 208u: goto L_0012DC68;
    case 209u: goto L_0012DCA0;
    case 210u: goto L_0012DCA8;
    case 211u: goto L_0012DCB8;
    case 212u: goto L_0012DCC8;
    case 213u: goto L_0012DCF4;
    case 214u: goto L_0012DDB4;
    case 215u: goto L_0012DDE8;
    case 216u: goto L_0012DE00;
    case 217u: goto L_0012DE30;
    case 218u: goto L_0012DE40;
    case 219u: goto L_0012DE68;
    case 220u: goto L_0012DE80;
    case 221u: goto L_0012DEB4;
    case 222u: goto L_0012DEC8;
    case 223u: goto L_0012DEDC;
    case 224u: goto L_0012DEE8;
    case 225u: goto L_0012DF08;
    case 226u: goto L_0012DF18;
    case 227u: goto L_0012DF30;
    case 228u: goto L_0012DF38;
    case 229u: goto L_0012DF48;
    case 230u: goto L_0012DF50;
    case 231u: goto L_0012DF6C;
    case 232u: goto L_0012DF90;
    case 233u: goto L_0012DFA4;
    case 234u: goto L_0012DFB4;
    case 235u: goto L_0012DFC4;
    case 236u: goto L_0012DFD4;
    case 237u: goto L_0012DFF0;
    case 238u: goto L_0012E000;
    case 239u: goto L_0012E028;
    case 240u: goto L_0012E038;
    case 241u: goto L_0012E084;
    case 242u: goto L_0012E0A4;
    case 243u: goto L_0012E0B4;
    case 244u: goto L_0012E0C8;
    case 245u: goto L_0012E0DC;
    case 246u: goto L_0012E0F4;
    case 247u: goto L_0012E0FC;
    case 248u: goto L_0012E10C;
    case 249u: goto L_0012E124;
    case 250u: goto L_0012E12C;
    case 251u: goto L_0012E13C;
    case 252u: goto L_0012E1B8;
    case 253u: goto L_0012E1E4;
    case 254u: goto L_0012E1F8;
    case 255u: goto L_0012E200;
    case 256u: goto L_0012E214;
    case 257u: goto L_0012E240;
    case 258u: goto L_0012E260;
    case 259u: goto L_0012E2D8;
    case 260u: goto L_0012E2F4;
    case 261u: goto L_0012E310;
    case 262u: goto L_0012E378;
    case 263u: goto L_0012E388;
    case 264u: goto L_0012E398;
    case 265u: goto L_0012E3A8;
    case 266u: goto L_0012E418;
    case 267u: goto L_0012E480;
    case 268u: goto L_0012E488;
    case 269u: goto L_0012E4A0;
    case 270u: goto L_0012E4C8;
    case 271u: goto L_0012E4E4;
    case 272u: goto L_0012E500;
    case 273u: goto L_0012E508;
    case 274u: goto L_0012E524;
    case 275u: goto L_0012E540;
    case 276u: goto L_0012E554;
    case 277u: goto L_0012E570;
    case 278u: goto L_0012E5A8;
    case 279u: goto L_0012E5D4;
    case 280u: goto L_0012E5E8;
    case 281u: goto L_0012E60C;
    case 282u: goto L_0012E624;
    case 283u: goto L_0012E654;
    case 284u: goto L_0012E670;
    case 285u: goto L_0012E678;
    case 286u: goto L_0012E6BC;
    case 287u: goto L_0012E6C8;
    case 288u: goto L_0012E6D0;
    case 289u: goto L_0012E6E8;
    case 290u: goto L_0012E718;
    case 291u: goto L_0012E730;
    case 292u: goto L_0012E754;
    case 293u: goto L_0012E760;
    case 294u: goto L_0012E780;
    case 295u: goto L_0012E7A8;
    case 296u: goto L_0012E7B4;
    case 297u: goto L_0012E7BC;
    case 298u: goto L_0012E7D8;
    case 299u: goto L_0012E7E4;
    case 300u: goto L_0012E820;
    case 301u: goto L_0012E878;
    case 302u: goto L_0012E8DC;
    case 303u: goto L_0012E960;
    case 304u: goto L_0012E98C;
    case 305u: goto L_0012E998;
    case 306u: goto L_0012E9A4;
    case 307u: goto L_0012E9BC;
    case 308u: goto L_0012E9D4;
    case 309u: goto L_0012E9F0;
    case 310u: goto L_0012EA00;
    case 311u: goto L_0012EA10;
    case 312u: goto L_0012EA30;
    case 313u: goto L_0012EA80;
    case 314u: goto L_0012EA98;
    case 315u: goto L_0012EAC8;
    case 316u: goto L_0012EAE0;
    case 317u: goto L_0012EB00;
    case 318u: goto L_0012EB14;
    case 319u: goto L_0012EB28;
    case 320u: goto L_0012EB30;
    case 321u: goto L_0012EB40;
    case 322u: goto L_0012EB48;
    case 323u: goto L_0012EB68;
    case 324u: goto L_0012EB7C;
    case 325u: goto L_0012EBB0;
    case 326u: goto L_0012EC08;
    case 327u: goto L_0012EC38;
    case 328u: goto L_0012EC4C;
    case 329u: goto L_0012EC64;
    case 330u: goto L_0012EC7C;
    case 331u: goto L_0012ECA4;
    case 332u: goto L_0012ECAC;
    case 333u: goto L_0012ECE0;
    case 334u: goto L_0012ED28;
    case 335u: goto L_0012ED54;
    case 336u: goto L_0012EDB0;
    case 337u: goto L_0012EDC8;
    case 338u: goto L_0012EE00;
    case 339u: goto L_0012EE44;
    case 340u: goto L_0012EE5C;
    case 341u: goto L_0012EE64;
    case 342u: goto L_0012EE6C;
    case 343u: goto L_0012EE8C;
    case 344u: goto L_0012EEA4;
    case 345u: goto L_0012EEB4;
    case 346u: goto L_0012EEE0;
    case 347u: goto L_0012EEEC;
    case 348u: goto L_0012EF28;
    case 349u: goto L_0012EF64;
    case 350u: goto L_0012EF7C;
    case 351u: goto L_0012EF84;
    case 352u: goto L_0012EF8C;
    case 353u: goto L_0012EFAC;
    case 354u: goto L_0012EFC4;
    case 355u: goto L_0012EFD4;
    case 356u: goto L_0012EFEC;
    case 357u: goto L_0012EFF8;
    case 358u: goto L_0012F018;
    case 359u: goto L_0012F028;
    case 360u: goto L_0012F040;
    case 361u: goto L_0012F070;
    case 362u: goto L_0012F0D0;
    case 363u: goto L_0012F0E0;
    case 364u: goto L_0012F130;
    case 365u: goto L_0012F140;
    case 366u: goto L_0012F150;
    case 367u: goto L_0012F174;
    case 368u: goto L_0012F1A8;
    case 369u: goto L_0012F1D0;
    case 370u: goto L_0012F1E0;
    case 371u: goto L_0012F1E8;
    case 372u: goto L_0012F200;
    case 373u: goto L_0012F220;
    case 374u: goto L_0012F238;
    case 375u: goto L_0012F268;
    case 376u: goto L_0012F294;
    case 377u: goto L_0012F2B0;
    case 378u: goto L_0012F2CC;
    case 379u: goto L_0012F2D4;
    case 380u: goto L_0012F2E8;
    case 381u: goto L_0012F2F0;
    case 382u: goto L_0012F300;
    case 383u: goto L_0012F32C;
    case 384u: goto L_0012F344;
    case 385u: goto L_0012F34C;
    case 386u: goto L_0012F370;
    case 387u: goto L_0012F388;
    case 388u: goto L_0012F3A8;
    case 389u: goto L_0012F3EC;
    case 390u: goto L_0012F41C;
    case 391u: goto L_0012F480;
    case 392u: goto L_0012F508;
    case 393u: goto L_0012F528;
    case 394u: goto L_0012F538;
    case 395u: goto L_0012F54C;
    case 396u: goto L_0012F568;
    case 397u: goto L_0012F578;
    case 398u: goto L_0012F598;
    case 399u: goto L_0012F5A8;
    case 400u: goto L_0012F5C8;
    case 401u: goto L_0012F5D4;
    case 402u: goto L_0012F5F8;
    case 403u: goto L_0012F608;
    case 404u: goto L_0012F638;
    case 405u: goto L_0012F658;
    case 406u: goto L_0012F668;
    case 407u: goto L_0012F678;
    case 408u: goto L_0012F690;
    case 409u: goto L_0012F6A8;
    case 410u: goto L_0012F6C0;
    case 411u: goto L_0012F6D8;
    case 412u: goto L_0012F6F0;
    case 413u: goto L_0012F708;
    case 414u: goto L_0012F728;
    case 415u: goto L_0012F758;
    case 416u: goto L_0012F798;
    case 417u: goto L_0012F7B0;
    case 418u: goto L_0012F7D0;
    case 419u: goto L_0012F800;
    case 420u: goto L_0012F820;
    case 421u: goto L_0012F838;
    case 422u: goto L_0012F858;
    case 423u: goto L_0012F888;
    case 424u: goto L_0012F8A8;
    case 425u: goto L_0012F8C0;
    case 426u: goto L_0012F8E0;
    case 427u: goto L_0012F910;
    case 428u: goto L_0012F930;
    case 429u: goto L_0012F970;
    case 430u: goto L_0012F988;
    case 431u: goto L_0012F9A0;
    case 432u: goto L_0012F9C8;
    case 433u: goto L_0012F9E4;
    case 434u: goto L_0012F9F0;
    case 435u: goto L_0012FA10;
    case 436u: goto L_0012FA20;
    case 437u: goto L_0012FA30;
    case 438u: goto L_0012FA38;
    case 439u: goto L_0012FA58;
    case 440u: goto L_0012FA98;
    case 441u: goto L_0012FAAC;
    case 442u: goto L_0012FAC0;
    case 443u: goto L_0012FAC8;
    case 444u: goto L_0012FAD0;
    case 445u: goto L_0012FAE0;
    case 446u: goto L_0012FB00;
    case 447u: goto L_0012FB08;
    case 448u: goto L_0012FB14;
    case 449u: goto L_0012FB28;
    case 450u: goto L_0012FB38;
    case 451u: goto L_0012FB58;
    case 452u: goto L_0012FB80;
    case 453u: goto L_0012FB90;
    case 454u: goto L_0012FBB0;
    case 455u: goto L_0012FBB8;
    case 456u: goto L_0012FBC4;
    case 457u: goto L_0012FBCC;
    case 458u: goto L_0012FBE8;
    case 459u: goto L_0012FC40;
    case 460u: goto L_0012FC58;
    case 461u: goto L_0012FC60;
    case 462u: goto L_0012FCA0;
    case 463u: goto L_0012FCAC;
    case 464u: goto L_0012FCB4;
    case 465u: goto L_0012FD08;
    case 466u: goto L_0012FD54;
    case 467u: goto L_0012FD80;
    case 468u: goto L_0012FDB0;
    case 469u: goto L_0012FDEC;
    case 470u: goto L_0012FEC4;
    case 471u: goto L_0012FF28;
    case 472u: goto L_0012FF88;
    case 473u: goto L_0012FFA8;
    case 474u: goto L_0012FFF0;
    default: bad_entry(c, 0x0012C000u); return;
    }
L_0012C000:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012C004:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C010u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0012C010u) [[unlikely]] return; }
L_0012C010:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 64u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[18].w[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 10;
L_0012C038:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C040u);  if (depth < kMaxDepth) unit_000C(c, 170u, depth + 1u); else { c.pc = 0x001311F0u; return; } if (c.pc != 0x0012C040u) [[unlikely]] return; }
L_0012C040:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0012C060:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C074u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 169u, depth + 1u); else { c.pc = 0x001311E0u; return; } if (c.pc != 0x0012C074u) [[unlikely]] return; }
L_0012C074:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_000C(c, 170u, depth); }
L_0012C088:
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 60u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  c.pc = t; return; }
L_0012C098:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0012C0D4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C0CCu); set32(c.r[6], c.r[16].w[0] + 12u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012C0CCu) [[unlikely]] return; }
L_0012C0CC:
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    c.budget -= 2;
L_0012C0D4:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0012C0FC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C0F4u); set32(c.r[6], c.r[16].w[0] + 20u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012C0F4u) [[unlikely]] return; }
L_0012C0F4:
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 20u), 0u);
    c.budget -= 2;
L_0012C0FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012C110:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C134u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 169u, depth + 1u); else { c.pc = 0x001311E0u; return; } if (c.pc != 0x0012C134u) [[unlikely]] return; }
L_0012C134:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;  if (t) { goto L_0012C194; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0012C1B8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[16].w[0] - 1024u);  if (t) { goto L_0012C1B0; } }
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(64ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);  if (t) { goto L_0012C1B8; } }
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 13680u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);  if (t) { goto L_0012C1B8; } }
    set32(c.r[6], c.r[18].w[0] >> 2);
    set32(c.r[2], c.r[2].w[0] - 13424u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C18Cu); set32(c.r[4], ld32((c.r[2].w[0])));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012C18Cu) [[unlikely]] return; }
L_0012C18C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012C1B8; } }
L_0012C194:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C1A8u); set32(c.r[7], ld32((c.r[17].w[0] + 12u)));  if (depth < kMaxDepth) unit_000B(c, 35u, depth + 1u); else { c.pc = 0x0012C3D8u; return; } if (c.pc != 0x0012C1A8u) [[unlikely]] return; }
L_0012C1A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0012C1B8; } }
L_0012C1B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C1B8u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_000B(c, 42u, depth + 1u); else { c.pc = 0x0012C568u; return; } if (c.pc != 0x0012C1B8u) [[unlikely]] return; }
L_0012C1B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C1C0u);  if (depth < kMaxDepth) unit_000C(c, 170u, depth + 1u); else { c.pc = 0x001311F0u; return; } if (c.pc != 0x0012C1C0u) [[unlikely]] return; }
L_0012C1C0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0012C1E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C1F4u);  if (depth < kMaxDepth) unit_0000(c, 410u, depth + 1u); else { c.pc = 0x00103A90u; return; } if (c.pc != 0x0012C1F4u) [[unlikely]] return; }
L_0012C1F4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C200u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 356u, depth + 1u); else { c.pc = 0x00106EB8u; return; } if (c.pc != 0x0012C200u) [[unlikely]] return; }
L_0012C200:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C208u); set32(c.r[16], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 410u, depth + 1u); else { c.pc = 0x00103A90u; return; } if (c.pc != 0x0012C208u) [[unlikely]] return; }
L_0012C208:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C214u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 356u, depth + 1u); else { c.pc = 0x00106EB8u; return; } if (c.pc != 0x0012C214u) [[unlikely]] return; }
L_0012C214:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00130000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[5], ld32((c.r[28].w[0] - 32212u)));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 16112u);
    set32(c.r[7], c.r[7].w[0] - 13936u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C240u); set32(c.r[4], c.r[4].w[0] - 14008u);  if (depth < kMaxDepth) unit_0001(c, 359u, depth + 1u); else { c.pc = 0x00106F50u; return; } if (c.pc != 0x0012C240u) [[unlikely]] return; }
L_0012C240:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[28].w[0] - 32208u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C254u);  if (depth < kMaxDepth) unit_0001(c, 386u, depth + 1u); else { c.pc = 0x00107368u; return; } if (c.pc != 0x0012C254u) [[unlikely]] return; }
L_0012C254:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0012C268:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[3].w[0] - 24448u), c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] - 24448u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[9], c.r[16].w[0] - 24192u);
    st32((c.r[2].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] - 14048u);
    st32((c.r[2].w[0] + 12u), c.r[7].w[0]);
    set32(c.r[5], 0u + 2u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 16u);
    set32(c.r[10], 0u + 4u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C2BCu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0012C2BCu) [[unlikely]] return; }
L_0012C2BC:
    set32(c.r[2], ld32((c.r[16].w[0] - 24192u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012C2D0:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    st32((c.r[7].w[0] - 24448u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[2].w[0] - 14048u);
    set32(c.r[7], c.r[7].w[0] - 24448u);
    set32(c.r[9], c.r[9].w[0] - 24192u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 4u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C310u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0012C310u) [[unlikely]] return; }
L_0012C310:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012C320:
    set32(c.r[2], ld32((c.r[28].w[0] - 32204u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 32204u), c.r[2].w[0]);  c.pc = t; return; }
L_0012C330:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].sd[0] <= 0; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0012C36C; } }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 2;
L_0012C348:
    set32(c.r[4], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[3], 0u - 86u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[7].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012C348u | kUnwind; return; } goto L_0012C348; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0012C374; } }
L_0012C36C:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 2;
L_0012C374:
    set32(c.r[6], ld32((c.r[28].w[0] - 32200u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C380u); set32(c.r[5], c.r[8].w[0] + 16120u);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x0012C380u) [[unlikely]] return; }
L_0012C380:
    set32(c.r[3], ld32((c.r[28].w[0] - 32200u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[28].w[0] - 32200u), c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012C398:
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 68u);  if (t) { goto L_0012C3AC; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0012C3AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 15136u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);  c.pc = t; return; }
L_0012C3C0:
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 40u), 0u);  c.pc = t; return; }
L_0012C3D8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[2].d[0] = c.r[18].d[0] & 63ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0012C414; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 16144u);  if (t) { goto L_0012C4A4; } }
L_0012C414:
    c.r[2].d[0] = c.r[19].d[0] & 31ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0012C428; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 16176u);  if (t) { goto L_0012C4A4; } }
L_0012C428:
    c.r[2].d[0] = c.r[17].d[0] & 63ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0012C440; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 16208u);  if (t) { goto L_0012C454; } }
L_0012C440:
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 68u);  if (t) { goto L_0012C464; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] + 16232u);
    c.budget -= 2;
L_0012C454:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C45Cu);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x0012C45Cu) [[unlikely]] return; }
L_0012C45C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012C54C; } }
L_0012C464:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 15136u);
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012C54C; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C494u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 25u, depth + 1u); else { c.pc = 0x0012C268u; return; } if (c.pc != 0x0012C494u) [[unlikely]] return; }
L_0012C494:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0012C4B4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] + 16256u);
    c.budget -= 2;
L_0012C4A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C4ACu);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x0012C4ACu) [[unlikely]] return; }
L_0012C4AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012C54C; } }
L_0012C4B4:
    set32(c.r[3], c.r[17].w[0] - 64u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[2], c.r[18].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[17].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0] + 24u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 12u), c.r[18].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C4F0u); st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0012C4F0u) [[unlikely]] return; }
L_0012C4F0:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C508u); set32(c.r[5], c.r[5].w[0] + 63u);  if (depth < kMaxDepth) unit_0001(c, 35u, depth + 1u); else { c.pc = 0x001043F0u; return; } if (c.pc != 0x0012C508u) [[unlikely]] return; }
L_0012C508:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C520u); set32(c.r[5], c.r[5].w[0] + 63u);  if (depth < kMaxDepth) unit_0001(c, 41u, depth + 1u); else { c.pc = 0x00104530u; return; } if (c.pc != 0x0012C520u) [[unlikely]] return; }
L_0012C520:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00130000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00130000u);
    set32(c.r[2], c.r[2].w[0] - 15584u);
    set32(c.r[3], c.r[3].w[0] - 15568u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    c.budget -= 11;
L_0012C54C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0012C568:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C580u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_000B(c, 27u, depth + 1u); else { c.pc = 0x0012C2D0u; return; } if (c.pc != 0x0012C580u) [[unlikely]] return; }
L_0012C580:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 68u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00116E18u | kUnwind; return; } [[clang::musttail]] return unit_0005(c, 239u, depth); }
L_0012C5A0:
    st32((c.r[4].w[0] + 36u), c.r[6].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 32u), c.r[5].w[0]);  c.pc = t; return; }
L_0012C5B0:
    st32((c.r[4].w[0] + 44u), c.r[6].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 40u), c.r[5].w[0]);  c.pc = t; return; }
L_0012C5C0:
    set32(c.r[2], ld32((c.r[28].w[0] - 32196u)));
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[28].w[0] - 32196u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.r[5].d[0] = ld8((c.r[16].w[0] + 1u));  if (t) { goto L_0012C640; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 60u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0012C640; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C618u); set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);  if (depth < kMaxDepth) unit_0001(c, 41u, depth + 1u); else { c.pc = 0x00104530u; return; } if (c.pc != 0x0012C618u) [[unlikely]] return; }
L_0012C618:
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C62Cu); set32(c.r[6], ld32((c.r[16].w[0] + 16u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012C62Cu) [[unlikely]] return; }
L_0012C62C:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 60u)));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 5;
L_0012C640:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0012C6E4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C65Cu); set32(c.r[6], ld32((c.r[16].w[0] + 16u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012C65Cu) [[unlikely]] return; }
L_0012C65C:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C688u); set32(c.r[5], c.r[5].w[0] - 1u);  if (depth < kMaxDepth) unit_0001(c, 35u, depth + 1u); else { c.pc = 0x001043F0u; return; } if (c.pc != 0x0012C688u) [[unlikely]] return; }
L_0012C688:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C6A0u); set32(c.r[5], c.r[5].w[0] + 63u);  if (depth < kMaxDepth) unit_0001(c, 41u, depth + 1u); else { c.pc = 0x00104530u; return; } if (c.pc != 0x0012C6A0u) [[unlikely]] return; }
L_0012C6A0:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 28u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 60u), 0u);
    set32(c.r[4], c.r[16].w[0] + 48u);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[16].w[0] + 52u), c.r[6].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C6D4u); st32((c.r[16].w[0] + 56u), c.r[7].w[0]);  if (depth < kMaxDepth) unit_0000(c, 565u, depth + 1u); else { c.pc = 0x00103F60u; return; } if (c.pc != 0x0012C6D4u) [[unlikely]] return; }
L_0012C6D4:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
L_0012C6E4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012C6F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], ld32((c.r[28].w[0] - 32192u)));
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_0012C780; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x003B0000u);  if (t) { goto L_0012C734; } }
    c.budget -= 1;
L_0012C710:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_0012C718:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012C718u | kUnwind; return; } goto L_0012C718; } }
L_0012C734:
    set32(c.r[5], ld32((c.r[28].w[0] - 32212u)));
    set32(c.r[4], c.r[16].w[0] - 14048u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C744u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 330u, depth + 1u); else { c.pc = 0x00106AB8u; return; } if (c.pc != 0x0012C744u) [[unlikely]] return; }
L_0012C744:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[2], c.r[16].w[0] - 14048u);  if (t) { goto L_0012C774; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C758u); set32(c.r[4], c.r[4].w[0] + 16296u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x0012C758u) [[unlikely]] return; }
L_0012C758:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012C758u | kUnwind; return; } goto L_0012C758; } }
L_0012C774:
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 32192u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012C710u | kUnwind; return; } goto L_0012C710; } }
L_0012C780:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[28].w[0] - 32192u), c.r[2].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012C798:
    set32(c.r[2], ld32((c.r[28].w[0] - 32192u)));
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[28].w[0] - 32192u), c.r[2].w[0]);  if (t) { goto L_0012C7F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[18], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 15136u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[17], c.r[16].w[0] + 544u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 7;
L_0012C7D8:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[16], c.r[16].w[0] + 68u);  goto L_0012C7EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C7E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 42u, depth + 1u); else { c.pc = 0x0012C568u; return; } if (c.pc != 0x0012C7E8u) [[unlikely]] return; }
L_0012C7E8:
    set32(c.r[16], c.r[16].w[0] + 68u);
    c.budget -= 1;
L_0012C7EC:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012C7D8u | kUnwind; return; } goto L_0012C7D8; }
L_0012C7F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0012C810:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[12].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[11].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.budget -= 11;
    { const bool t = c.r[6].sd[0] <= 0; st64((c.r[29].w[0] + 32u), c.r[17].d[0]);  if (t) { goto L_0012C884; } }
    set32(c.r[9], c.r[4].w[0] + 1024u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[8], c.r[6].w[0] << 2);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[10], c.r[16].w[0] << 2);
    c.budget -= 7;
L_0012C858:
    set32(c.r[2], c.r[11].w[0] << 2);
    set32(c.r[3], c.r[7].w[0] - 24448u);
    set32(c.r[4], c.r[2].w[0] + c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] + 1u);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[11].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[2].w[0]), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012C858u | kUnwind; return; } goto L_0012C858; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[18].w[0] - 24192u);  if (t) { goto L_0012C8A0; } }
L_0012C884:
    set32(c.r[9], c.r[4].w[0] + 1024u);
    set32(c.r[8], c.r[6].w[0] << 2);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[10], c.r[16].w[0] << 2);
    set32(c.r[17], c.r[18].w[0] - 24192u);
    c.budget -= 7;
L_0012C8A0:
    c.r[5].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[4], c.r[13].w[0] - 14048u);
    set32(c.r[7], c.r[7].w[0] - 24448u);
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C8C0u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0012C8C0u) [[unlikely]] return; }
L_0012C8C0:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0; set32(c.r[2], ld32((c.r[18].w[0] - 24192u)));  if (t) { goto L_0012C8F8; } }
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    c.r[11].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
L_0012C8D8:
    set32(c.r[2], ld32((c.r[9].w[0])));
    set32(c.r[11], c.r[11].w[0] - 1u);
    set32(c.r[9], c.r[9].w[0] + 4u);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[11].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012C8D8u | kUnwind; return; } goto L_0012C8D8; } }
    set32(c.r[2], ld32((c.r[18].w[0] - 24192u)));
    c.budget -= 1;
L_0012C8F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0012C918:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C934u); set32(c.r[18], 0u + 1u);  if (depth < kMaxDepth) unit_000C(c, 169u, depth + 1u); else { c.pc = 0x001311E0u; return; } if (c.pc != 0x0012C934u) [[unlikely]] return; }
L_0012C934:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[16], c.r[2].w[0] - 15136u);
    set32(c.r[17], c.r[16].w[0] + 544u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 5;
L_0012C948:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[16], c.r[16].w[0] + 68u);  goto L_0012C95C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C958u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 46u, depth + 1u); else { c.pc = 0x0012C5C0u; return; } if (c.pc != 0x0012C958u) [[unlikely]] return; }
L_0012C958:
    set32(c.r[16], c.r[16].w[0] + 68u);
    c.budget -= 1;
L_0012C95C:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012C948u | kUnwind; return; } goto L_0012C948; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 64u);  [[clang::musttail]] return unit_000C(c, 170u, depth); }
L_0012C980:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] - 13168u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C99Cu);  if (depth < kMaxDepth) unit_000B(c, 190u, depth + 1u); else { c.pc = 0x0012DA38u; return; } if (c.pc != 0x0012C99Cu) [[unlikely]] return; }
L_0012C99C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], c.r[2].w[0] - 13152u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012C9B0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012BAB8u | kUnwind; return; } [[clang::musttail]] return unit_000A(c, 493u, depth); }
L_0012C9B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] - 13164u)));
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0012C9DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012C9DCu); set32(c.r[4], ld32((c.r[2].w[0] - 13160u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012C9DCu) [[unlikely]] return; }
L_0012C9DC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012C9E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] - 13048u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 6;
L_0012CA00:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0]; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { goto L_0012CA20; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; c.r[2].d[0] = c.r[4].sd[0] < 40ll ? 1ull : 0ull;  if (t) { goto L_0012CA24; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0012CA20:
    c.r[2].d[0] = c.r[4].sd[0] < 40ll ? 1ull : 0ull;
    c.budget -= 1;
L_0012CA24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012CA00u | kUnwind; return; } goto L_0012CA00; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0012CA38:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0012CAB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CA60u);  if (depth < kMaxDepth) unit_000A(c, 468u, depth + 1u); else { c.pc = 0x0012B6C0u; return; } if (c.pc != 0x0012CA60u) [[unlikely]] return; }
L_0012CA60:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 9u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_0012CA7C; } }
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
L_0012CA7C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0012CAB8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[5], c.r[5].w[0] << 11);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CA9Cu); set32(c.r[5], c.r[5].w[0] - 1u);  if (depth < kMaxDepth) unit_0001(c, 41u, depth + 1u); else { c.pc = 0x00104530u; return; } if (c.pc != 0x0012CA9Cu) [[unlikely]] return; }
L_0012CA9C:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
L_0012CAB8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012CAC8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[18], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[17], 0u + 39u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[16], c.r[2].w[0] - 13048u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 10;
L_0012CAF0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 64u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[18].d[0]; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { goto L_0012CB08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CB08u);  if (depth < kMaxDepth) unit_000B(c, 76u, depth + 1u); else { c.pc = 0x0012CA38u; return; } if (c.pc != 0x0012CB08u) [[unlikely]] return; }
L_0012CB08:
    c.budget -= 2;
    if (c.r[17].sd[0] >= 0) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012CAF0u | kUnwind; return; } goto L_0012CAF0; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0012CB28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st32((c.r[2].w[0] - 13164u), c.r[4].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] - 13160u), c.r[5].w[0]);  c.pc = t; return; }
L_0012CB40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CB54u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0012CB54u) [[unlikely]] return; }
L_0012CB54:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0012CBA8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 47u);
    set32(c.r[7], 0u + 92u);
    c.budget -= 4;
L_0012CB70:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[8].d[0]; c.r[3].d[0] = ld8((c.r[4].w[0]));  if (t) { goto L_0012CB84; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 2;
L_0012CB84:
    set32(c.r[2], c.r[3].w[0] - 97u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(26ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] - 32u);  if (t) { goto L_0012CB98; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0012CB98:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012CB70u | kUnwind; return; } goto L_0012CB70; } }
L_0012CBA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012CBB8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[17].d[0] != 0ull; st64((c.r[29].w[0] + 48u), c.r[16].d[0]);  if (t) { goto L_0012CBE0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 16384u);  if (t) { goto L_0012CC30; } }
L_0012CBE0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CBECu); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 168u, depth + 1u); else { c.pc = 0x0012D790u; return; } if (c.pc != 0x0012CBECu) [[unlikely]] return; }
L_0012CBEC:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_0012CC3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CC00u); c.r[16].sd[0] = static_cast<std::int32_t>(0x003B0000u);  if (depth < kMaxDepth) unit_000A(c, 476u, depth + 1u); else { c.pc = 0x0012B7B8u; return; } if (c.pc != 0x0012CC00u) [[unlikely]] return; }
L_0012CC00:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 10488u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CC10u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 127u, depth + 1u); else { c.pc = 0x0012D168u; return; } if (c.pc != 0x0012CC10u) [[unlikely]] return; }
L_0012CC10:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CC1Cu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 123u, depth + 1u); else { c.pc = 0x0010D7A8u; return; } if (c.pc != 0x0012CC1Cu) [[unlikely]] return; }
L_0012CC1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_0012CC3C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + 16432u);
    c.budget -= 3;
L_0012CC30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CC38u);  if (depth < kMaxDepth) unit_000B(c, 72u, depth + 1u); else { c.pc = 0x0012C9B8u; return; } if (c.pc != 0x0012CC38u) [[unlikely]] return; }
L_0012CC38:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012CC3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0012CC50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] - 13048u);
    set32(c.r[4], 0u + 39u);
    c.budget -= 4;
L_0012CC60:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[3].d[0];
    set32(c.r[3], c.r[3].w[0] + 64u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012CC60u | kUnwind; return; } goto L_0012CC60; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; return; }
L_0012CC88:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { set32(c.r[6], 0u + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00116E18u | kUnwind; return; } [[clang::musttail]] return unit_0005(c, 239u, depth); }
L_0012CC98:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] != 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_0012CCC8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 16480u);  if (t) { goto L_0012CCFC; } }
L_0012CCC8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0012CCDC; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 16520u);  if (t) { goto L_0012CCFC; } }
L_0012CCDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CCE4u);  if (depth < kMaxDepth) unit_000B(c, 92u, depth + 1u); else { c.pc = 0x0012CC50u; return; } if (c.pc != 0x0012CCE4u) [[unlikely]] return; }
L_0012CCE4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[19], c.r[17].w[0] + 24u);  if (t) { goto L_0012CD0C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + 16560u);
    c.budget -= 3;
L_0012CCFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CD04u);  if (depth < kMaxDepth) unit_000B(c, 72u, depth + 1u); else { c.pc = 0x0012C9B8u; return; } if (c.pc != 0x0012CD04u) [[unlikely]] return; }
L_0012CD04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012CDB8; } }
L_0012CD0C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CD18u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 168u, depth + 1u); else { c.pc = 0x0012D790u; return; } if (c.pc != 0x0012CD18u) [[unlikely]] return; }
L_0012CD18:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0012CD74; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 10488u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CD38u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 127u, depth + 1u); else { c.pc = 0x0012D168u; return; } if (c.pc != 0x0012CD38u) [[unlikely]] return; }
L_0012CD38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CD40u);  if (depth < kMaxDepth) unit_000A(c, 476u, depth + 1u); else { c.pc = 0x0012B7B8u; return; } if (c.pc != 0x0012CD40u) [[unlikely]] return; }
L_0012CD40:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CD4Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 123u, depth + 1u); else { c.pc = 0x0010D7A8u; return; } if (c.pc != 0x0012CD4Cu) [[unlikely]] return; }
L_0012CD4C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(0u));  goto L_0012CD78; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CD64u); set32(c.r[5], c.r[5].w[0] + 16608u);  if (depth < kMaxDepth) unit_000B(c, 72u, depth + 1u); else { c.pc = 0x0012C9B8u; return; } if (c.pc != 0x0012CD64u) [[unlikely]] return; }
L_0012CD64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CD6Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 94u, depth + 1u); else { c.pc = 0x0012CC88u; return; } if (c.pc != 0x0012CD6Cu) [[unlikely]] return; }
L_0012CD6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012CDB8; } }
L_0012CD74:
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0012CD78:
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[17].w[0] + 12u), 0u);
    set32(c.r[5], c.r[4].w[0] + 2047u);
    set32(c.r[2], c.r[4].w[0] + 4094u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    st32((c.r[17].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 11));
    st32((c.r[17].w[0] + 20u), 0u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 16u), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 16;
L_0012CDB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0012CDD8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_0012CE1C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));  goto L_0012CE08; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CE04u);  if (depth < kMaxDepth) unit_000B(c, 118u, depth + 1u); else { c.pc = 0x0012D068u; return; } if (c.pc != 0x0012CE04u) [[unlikely]] return; }
L_0012CE04:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0012CE08:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012CC88u | kUnwind; return; } goto L_0012CC88; }
L_0012CE1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012CE30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0012CE58; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CE50u); set32(c.r[5], c.r[5].w[0] + 16656u);  if (depth < kMaxDepth) unit_000B(c, 72u, depth + 1u); else { c.pc = 0x0012C9B8u; return; } if (c.pc != 0x0012CE50u) [[unlikely]] return; }
L_0012CE50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012CEB8; } }
L_0012CE58:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0012CE68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_0012CE98; } }
L_0012CE68:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0012CE80; } }
    set32(c.r[6], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[2], c.r[6].w[0] + c.r[5].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0012CE9C; } }
L_0012CE80:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[6], ld32((c.r[7].w[0] + 8u)));  if (t) { goto L_0012CE9C; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0012CE9C; } }
L_0012CE98:
    set32(c.r[6], ld32((c.r[7].w[0] + 8u)));
    c.budget -= 1;
L_0012CE9C:
    set32(c.r[2], ld32((c.r[7].w[0] + 12u)));
    set32(c.r[3], 0u - 1u);
    c.r[4].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    if (c.r[4].d[0] == 0) c.r[2].d[0] = c.r[6].d[0];
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[2].d[0] = 0ull;
    st32((c.r[7].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 7;
L_0012CEB8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012CEC8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0012CEEC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CEE4u); set32(c.r[5], c.r[5].w[0] + 16656u);  if (depth < kMaxDepth) unit_000B(c, 72u, depth + 1u); else { c.pc = 0x0012C9B8u; return; } if (c.pc != 0x0012CEE4u) [[unlikely]] return; }
L_0012CEE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012CEF0; } }
L_0012CEEC:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_0012CEF0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012CF00:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.budget -= 11;
    { const bool t = c.r[17].d[0] != 0ull; st64((c.r[29].w[0] + 48u), c.r[19].d[0]);  if (t) { goto L_0012CF3C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 16656u);  if (t) { goto L_0012CF64; } }
L_0012CF3C:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0012CF50; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 16680u);  if (t) { goto L_0012CF64; } }
L_0012CF50:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));  goto L_0012CF74; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 16712u);
    c.budget -= 3;
L_0012CF64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CF6Cu);  if (depth < kMaxDepth) unit_000B(c, 72u, depth + 1u); else { c.pc = 0x0012C9B8u; return; } if (c.pc != 0x0012CF6Cu) [[unlikely]] return; }
L_0012CF6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012D044; } }
L_0012CF74:
    set32(c.r[20], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[20].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012D044; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0012CF94; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0012D044; } }
L_0012CF94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CF9Cu); set32(c.r[19], 0u + 1u);  if (depth < kMaxDepth) unit_000B(c, 74u, depth + 1u); else { c.pc = 0x0012C9E8u; return; } if (c.pc != 0x0012CF9Cu) [[unlikely]] return; }
L_0012CF9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[19].d[0]; c.r[6].sd[0] = static_cast<std::int32_t>(0x003B0000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012CF6Cu | kUnwind; return; } goto L_0012CF6C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[7], c.r[6].w[0] - 10168u);
    st32((c.r[17].w[0] + 20u), c.r[18].w[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    st32((c.r[17].w[0] + 16u), c.r[16].w[0]);
    c.r[2].d[0] = ld8((c.r[6].w[0] - 10168u));
    st8((c.r[17].w[0] + 60u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[7].w[0] + 1u));
    st8((c.r[17].w[0] + 61u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[7].w[0] + 2u));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CFE4u); st8((c.r[17].w[0] + 62u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0003(c, 163u, depth + 1u); else { c.pc = 0x0010DCB0u; return; } if (c.pc != 0x0012CFE4u) [[unlikely]] return; }
L_0012CFE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[19].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012D044; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012CFF4u);  if (depth < kMaxDepth) unit_000B(c, 79u, depth + 1u); else { c.pc = 0x0012CAC8u; return; } if (c.pc != 0x0012CFF4u) [[unlikely]] return; }
L_0012CFF4:
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[5], c.r[5].w[0] << 11);
    set32(c.r[16], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D018u); set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0001(c, 41u, depth + 1u); else { c.pc = 0x00104530u; return; } if (c.pc != 0x0012D018u) [[unlikely]] return; }
L_0012D018:
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D02Cu); set32(c.r[7], c.r[17].w[0] + 60u);  if (depth < kMaxDepth) unit_000A(c, 463u, depth + 1u); else { c.pc = 0x0012B578u; return; } if (c.pc != 0x0012D02Cu) [[unlikely]] return; }
L_0012D02C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012D044; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D03Cu);  if (depth < kMaxDepth) unit_000B(c, 71u, depth + 1u); else { c.pc = 0x0012C9B0u; return; } if (c.pc != 0x0012D03Cu) [[unlikely]] return; }
L_0012D03C:
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[20].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 2;
L_0012D044:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0012D068:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_0012D098; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + 16656u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012C9B8u | kUnwind; return; } goto L_0012C9B8; }
L_0012D098:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0012D0E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D0ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 76u, depth + 1u); else { c.pc = 0x0012CA38u; return; } if (c.pc != 0x0012D0ACu) [[unlikely]] return; }
L_0012D0AC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[5], ld32((c.r[16].w[0] + 16u)));  goto L_0012D0C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D0C4u);  if (depth < kMaxDepth) unit_000A(c, 479u, depth + 1u); else { c.pc = 0x0012B818u; return; } if (c.pc != 0x0012D0C4u) [[unlikely]] return; }
L_0012D0C4:
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_0012D0C8:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[5], c.r[5].w[0] << 11);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D0DCu); set32(c.r[5], c.r[5].w[0] - 1u);  if (depth < kMaxDepth) unit_0001(c, 41u, depth + 1u); else { c.pc = 0x00104530u; return; } if (c.pc != 0x0012D0DCu) [[unlikely]] return; }
L_0012D0DC:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_0012D0E4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012D0F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0012D114; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D10Cu); set32(c.r[5], c.r[5].w[0] + 16656u);  if (depth < kMaxDepth) unit_000B(c, 72u, depth + 1u); else { c.pc = 0x0012C9B8u; return; } if (c.pc != 0x0012D10Cu) [[unlikely]] return; }
L_0012D10C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012D118; } }
L_0012D114:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 1;
L_0012D118:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012D128:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 2048u);  c.pc = t; return; }
L_0012D130:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0012D154; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D14Cu); set32(c.r[5], c.r[5].w[0] + 16656u);  if (depth < kMaxDepth) unit_000B(c, 72u, depth + 1u); else { c.pc = 0x0012C9B8u; return; } if (c.pc != 0x0012D14Cu) [[unlikely]] return; }
L_0012D14C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012D15C; } }
L_0012D154:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] << 11);
    c.budget -= 2;
L_0012D15C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012D168:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D190u); set32(c.r[5], c.r[5].w[0] - 10160u);  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x0012D190u) [[unlikely]] return; }
L_0012D190:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[2], 0u + 47u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 92u);  if (t) { goto L_0012D1B4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0012D1B4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D1B4u); set32(c.r[5], c.r[5].w[0] + 16752u);  if (depth < kMaxDepth) unit_0006(c, 21u, depth + 1u); else { c.pc = 0x00118358u; return; } if (c.pc != 0x0012D1B4u) [[unlikely]] return; }
L_0012D1B4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D1C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 21u, depth + 1u); else { c.pc = 0x00118358u; return; } if (c.pc != 0x0012D1C0u) [[unlikely]] return; }
L_0012D1C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D1C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0012D1C8u) [[unlikely]] return; }
L_0012D1C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 2u);
    set32(c.r[17], c.r[3].w[0] + 16760u);
    set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D1E0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 31u, depth + 1u); else { c.pc = 0x00118618u; return; } if (c.pc != 0x0012D1E0u) [[unlikely]] return; }
L_0012D1E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0012D1F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D1F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 21u, depth + 1u); else { c.pc = 0x00118358u; return; } if (c.pc != 0x0012D1F0u) [[unlikely]] return; }
L_0012D1F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012CB40u | kUnwind; return; } goto L_0012CB40; }
L_0012D208:
    set32(c.r[4], c.r[4].w[0] << 24);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 24));
    set32(c.r[2], c.r[4].w[0] - 97u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(26ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0012D22C; } }
    set32(c.r[2], c.r[4].w[0] - 32u);
    set32(c.r[2], c.r[2].w[0] << 24);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 3;
L_0012D22C:
    c.r[3].d[0] = c.r[3].d[0] ^ 92ull;
    set32(c.r[2], 0u + 47u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];  c.pc = t; return; }
L_0012D240:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], c.r[4].w[0] << 24);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 24));
    set32(c.r[17], c.r[5].w[0] << 24);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D264u); set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 24));  if (depth < kMaxDepth) unit_000B(c, 134u, depth + 1u); else { c.pc = 0x0012D208u; return; } if (c.pc != 0x0012D264u) [[unlikely]] return; }
L_0012D264:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D270u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 134u, depth + 1u); else { c.pc = 0x0012D208u; return; } if (c.pc != 0x0012D270u) [[unlikely]] return; }
L_0012D270:
    c.r[16].d[0] = c.r[16].d[0] ^ c.r[2].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], 0u - 1u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    if (c.r[16].d[0] == 0) c.r[2].d[0] = 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012D290:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D2B8u); st64((c.r[29].w[0] + 16u), c.r[17].d[0]);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0012D2B8u) [[unlikely]] return; }
L_0012D2B8:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D2C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0012D2C4u) [[unlikely]] return; }
L_0012D2C4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_0012D2D4; } }
L_0012D2CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0012D310; } }
L_0012D2D4:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0012D30C; } }
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
L_0012D2E8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D2F4u); c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));  if (depth < kMaxDepth) unit_000B(c, 135u, depth + 1u); else { c.pc = 0x0012D240u; return; } if (c.pc != 0x0012D2F4u) [[unlikely]] return; }
L_0012D2F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012D2CCu | kUnwind; return; } goto L_0012D2CC; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012D2E8u | kUnwind; return; } goto L_0012D2E8; } }
L_0012D30C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012D310:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0012D330:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[23].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 19;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0012D414; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[23].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[2], 0u + 10u);
    c.budget -= 5;
L_0012D390:
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] - 1u)));  goto L_0012D3A4; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] + 1u);  if (t) { goto L_0012D3F4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] - 1u)));
    c.budget -= 1;
L_0012D3A4:
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[6], c.r[18].w[0] - c.r[5].w[0]);  if (t) { goto L_0012D3B4; } }
    st8((c.r[4].w[0] - 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0012D3B4:
    mmi::mult(c, 0, c.r[21].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[20].w[0] << 3);
    set32(c.r[5], c.r[17].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[16], c.r[22].w[0] + c.r[16].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D3D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x0012D3D8u) [[unlikely]] return; }
L_0012D3D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D3E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 83u, depth + 1u); else { c.pc = 0x0012CB40u; return; } if (c.pc != 0x0012D3E0u) [[unlikely]] return; }
L_0012D3E0:
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[20].d[0]; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0012D418; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0012D3F8; } }
L_0012D3F4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0012D3F8:
    set32(c.r[2], c.r[17].w[0] + c.r[18].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 10u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012D390u | kUnwind; return; } goto L_0012D390; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[23].w[0] - 10184u)));  if (t) { goto L_0012D41C; } }
L_0012D414:
    c.r[23].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.budget -= 1;
L_0012D418:
    set32(c.r[2], ld32((c.r[23].w[0] - 10184u)));
    c.budget -= 1;
L_0012D41C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[23].w[0] - 10184u);  if (t) { goto L_0012D434; } }
    st32((c.r[23].w[0] - 10184u), c.r[22].w[0]);
    st32((c.r[3].w[0] + 12u), c.r[21].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[20].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[19].w[0]);
    c.budget -= 4;
L_0012D434:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0012D468:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[16].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    lwl(c.r[2], (c.r[17].w[0] + 3u));
    lwr(c.r[2], (c.r[17].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    swl(c.r[2], (c.r[29].w[0] + 67u));
    swr(c.r[2], (c.r[29].w[0] + 64u));
    st8((c.r[29].w[0] + 68u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 16768u);
    st8((c.r[29].w[0] + 68u), static_cast<std::uint8_t>(0u));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D4B0u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0006(c, 19u, depth + 1u); else { c.pc = 0x001182A0u; return; } if (c.pc != 0x0012D4B0u) [[unlikely]] return; }
L_0012D4B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x003B0000u);  if (t) { goto L_0012D4CC; } }
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D4C4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 303u, depth + 1u); else { c.pc = 0x0012E960u; return; } if (c.pc != 0x0012D4C4u) [[unlikely]] return; }
L_0012D4C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  if (t) { goto L_0012D544; } }
L_0012D4CC:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] - 9896u);
    set32(c.r[6], 0u + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D4E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0012D4E0u) [[unlikely]] return; }
L_0012D4E0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D4ECu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 127u, depth + 1u); else { c.pc = 0x0012D168u; return; } if (c.pc != 0x0012D4ECu) [[unlikely]] return; }
L_0012D4EC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D4F8u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 123u, depth + 1u); else { c.pc = 0x0010D7A8u; return; } if (c.pc != 0x0012D4F8u) [[unlikely]] return; }
L_0012D4F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0012D52C; } }
    set32(c.r[4], ld32((c.r[29].w[0])));
    st8((c.r[29].w[0] + 49u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[29].w[0] + 48u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 2u);
    st8((c.r[29].w[0] + 50u), static_cast<std::uint8_t>(0u));
    set32(c.r[7], c.r[29].w[0] + 48u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D524u); st8((c.r[29].w[0] + 51u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0003(c, 229u, depth + 1u); else { c.pc = 0x0010E4D0u; return; } if (c.pc != 0x0012D524u) [[unlikely]] return; }
L_0012D524:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012D534; } }
L_0012D52C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012D540; } }
L_0012D534:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D53Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 163u, depth + 1u); else { c.pc = 0x0010DCB0u; return; } if (c.pc != 0x0012D53Cu) [[unlikely]] return; }
L_0012D53C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0012D540:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_0012D544:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0012D558:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 160u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[22].d[0]);
    c.r[23].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[21].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[20].d[0]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[19].d[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 176u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[17].d[0]);
    c.budget -= 17;
    { const bool t = c.r[22].sd[0] <= 0; st64((c.r[29].w[0] + 48u), c.r[16].d[0]);  if (t) { goto L_0012D64C; } }
    c.r[30].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[5], c.r[30].w[0] - 10184u);
    c.budget -= 3;
L_0012D5A8:
    set32(c.r[4], c.r[19].w[0] << 3);
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[18], c.r[21].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[19].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[3], c.r[4].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[21].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x003B0000u);  if (t) { goto L_0012D63C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 9896u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D5E8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 127u, depth + 1u); else { c.pc = 0x0012D168u; return; } if (c.pc != 0x0012D5E8u) [[unlikely]] return; }
L_0012D5E8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D5F4u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 123u, depth + 1u); else { c.pc = 0x0010D7A8u; return; } if (c.pc != 0x0012D5F4u) [[unlikely]] return; }
L_0012D5F4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0012D62C; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + 16776u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D624u); set32(c.r[20], c.r[20].w[0] + 1u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x0012D624u) [[unlikely]] return; }
L_0012D624:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_0012D640; } }
L_0012D62C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 16800u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D63Cu); set32(c.r[23], c.r[23].w[0] + 1u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x0012D63Cu) [[unlikely]] return; }
L_0012D63C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0012D640:
    c.r[2].d[0] = c.r[19].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[30].w[0] - 10184u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012D5A8u | kUnwind; return; } goto L_0012D5A8; } }
L_0012D64C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D65Cu); set32(c.r[4], c.r[2].w[0] + 16824u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x0012D65Cu) [[unlikely]] return; }
L_0012D65C:
    c.budget -= 2;
    { const bool t = c.r[23].sd[0] <= 0; set32(c.r[5], 0u + 10u);  if (t) { goto L_0012D670; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D670u); set32(c.r[4], c.r[4].w[0] + 16848u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x0012D670u) [[unlikely]] return; }
L_0012D670:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0012D6A8:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    c.budget -= 15;
    { const bool t = c.r[20].sd[0] <= 0; st64((c.r[29].w[0] + 16u), c.r[17].d[0]);  if (t) { goto L_0012D744; } }
    c.r[21].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[4], c.r[21].w[0] - 10184u);
    c.budget -= 3;
L_0012D6F0:
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[17], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[16].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D71Cu); set32(c.r[5], c.r[19].w[0] + c.r[5].w[0]);  if (depth < kMaxDepth) unit_000B(c, 138u, depth + 1u); else { c.pc = 0x0012D290u; return; } if (c.pc != 0x0012D71Cu) [[unlikely]] return; }
L_0012D71C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_0012D738; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0012D74C; } }
L_0012D738:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[21].w[0] - 10184u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012D6F0u | kUnwind; return; } goto L_0012D6F0; } }
L_0012D744:
    st32((c.r[18].w[0] + 4u), 0u);
    st32((c.r[18].w[0]), 0u);
    c.budget -= 2;
L_0012D74C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0012D778:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 10184u);
    c.budget -= 5;
    { set32(c.r[6], 0u + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00116E18u | kUnwind; return; } [[clang::musttail]] return unit_0005(c, 239u, depth); }
L_0012D790:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] - 10184u)));
    set32(c.r[2], c.r[2].w[0] - 10184u);
    st32((c.r[5].w[0]), 0u);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == 0ull; st32((c.r[5].w[0] + 4u), 0u);  if (t) { goto L_0012D7BC; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { c.r[5].d[0] = c.r[3].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012D6A8u | kUnwind; return; } goto L_0012D6A8; }
L_0012D7BC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012D7C8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[20], c.r[2].w[0] - 23936u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D80Cu); set32(c.r[6], 0u + 4096u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0012D80Cu) [[unlikely]] return; }
L_0012D80C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 10184u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012D824; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D824u);  if (depth < kMaxDepth) unit_000B(c, 167u, depth + 1u); else { c.pc = 0x0012D778u; return; } if (c.pc != 0x0012D824u) [[unlikely]] return; }
L_0012D824:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0012D83C; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0012D83C; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0012D84C; } }
L_0012D83C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D844u);  if (depth < kMaxDepth) unit_000B(c, 167u, depth + 1u); else { c.pc = 0x0012D778u; return; } if (c.pc != 0x0012D844u) [[unlikely]] return; }
L_0012D844:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012D8CC; } }
L_0012D84C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D854u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 148u, depth + 1u); else { c.pc = 0x0012D468u; return; } if (c.pc != 0x0012D854u) [[unlikely]] return; }
L_0012D854:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[19].w[0] + 9u);  goto L_0012D884; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D86Cu); set32(c.r[4], c.r[4].w[0] + 16896u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x0012D86Cu) [[unlikely]] return; }
L_0012D86C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D87Cu); set32(c.r[5], c.r[5].w[0] + 16936u);  if (depth < kMaxDepth) unit_000B(c, 72u, depth + 1u); else { c.pc = 0x0012C9B8u; return; } if (c.pc != 0x0012D87Cu) [[unlikely]] return; }
L_0012D87C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012D8CC; } }
L_0012D884:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    mmi::divu(c, 0, c.r[16].w[0], c.r[17].w[0]);
    c.budget -= 4;
    if (c.r[17].d[0] == 0ull) { breakpoint(c, 0x0012D890u);  goto L_0012D894; }
L_0012D894:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[16].d[0] = c.lo.d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D8A8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 144u, depth + 1u); else { c.pc = 0x0012D330u; return; } if (c.pc != 0x0012D8A8u) [[unlikely]] return; }
L_0012D8A8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D8B4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 156u, depth + 1u); else { c.pc = 0x0012D558u; return; } if (c.pc != 0x0012D8B4u) [[unlikely]] return; }
L_0012D8B4:
    set32(c.r[3], c.r[19].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] << 3);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 5;
    if (c.r[17].d[0] == 0ull) { breakpoint(c, 0x0012D8C4u);  goto L_0012D8C8; }
L_0012D8C8:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_0012D8CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0012D8F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[19], c.r[2].w[0] - 23936u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D92Cu); set32(c.r[6], 0u + 4096u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0012D92Cu) [[unlikely]] return; }
L_0012D92C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 10184u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012D944; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D944u);  if (depth < kMaxDepth) unit_000B(c, 167u, depth + 1u); else { c.pc = 0x0012D778u; return; } if (c.pc != 0x0012D944u) [[unlikely]] return; }
L_0012D944:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0012D95C; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0012D95C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0012D96C; } }
L_0012D95C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D964u);  if (depth < kMaxDepth) unit_000B(c, 167u, depth + 1u); else { c.pc = 0x0012D778u; return; } if (c.pc != 0x0012D964u) [[unlikely]] return; }
L_0012D964:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012D9D4; } }
L_0012D96C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D974u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 148u, depth + 1u); else { c.pc = 0x0012D468u; return; } if (c.pc != 0x0012D974u) [[unlikely]] return; }
L_0012D974:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], 0u + 137u);  goto L_0012D9A4; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D98Cu); set32(c.r[4], c.r[4].w[0] + 16896u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x0012D98Cu) [[unlikely]] return; }
L_0012D98C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D99Cu); set32(c.r[5], c.r[5].w[0] + 16936u);  if (depth < kMaxDepth) unit_000B(c, 72u, depth + 1u); else { c.pc = 0x0012C9B8u; return; } if (c.pc != 0x0012D99Cu) [[unlikely]] return; }
L_0012D99C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012D9D4; } }
L_0012D9A4:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    mmi::div(c, 0, c.r[17].w[0], c.r[16].w[0]);
    c.budget -= 4;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x0012D9B0u);  goto L_0012D9B4; }
L_0012D9B4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.lo.d[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D9C4u); set32(c.r[7], 0u + 129u);  if (depth < kMaxDepth) unit_000B(c, 144u, depth + 1u); else { c.pc = 0x0012D330u; return; } if (c.pc != 0x0012D9C4u) [[unlikely]] return; }
L_0012D9C4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012D9D0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 156u, depth + 1u); else { c.pc = 0x0012D558u; return; } if (c.pc != 0x0012D9D0u) [[unlikely]] return; }
L_0012D9D0:
    mmi::mult(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_0012D9D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0012D9F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DA00u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 168u, depth + 1u); else { c.pc = 0x0012D790u; return; } if (c.pc != 0x0012DA00u) [[unlikely]] return; }
L_0012DA00:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0012DA18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[3], c.r[2].w[0] - 10168u);
    st8((c.r[2].w[0] - 10168u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[8].w[0] - 10164u), c.r[7].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_0012DA38:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[17].d[0]);  if (t) { goto L_0012DA5C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] - 10160u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0012DAE4; } }
L_0012DA5C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], 0u + 47u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 92u);  if (t) { goto L_0012DA98; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0012DA98; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[7], c.r[2].w[0] + 16752u);
    set32(c.r[6], c.r[4].w[0] - 10160u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1u)));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[4].w[0] - 10160u);  if (t) { goto L_0012DAA4; } }
L_0012DA98:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st8((c.r[4].w[0] - 10160u), static_cast<std::uint8_t>(0u));
    set32(c.r[17], c.r[4].w[0] - 10160u);
    c.budget -= 3;
L_0012DAA4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DAB0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 21u, depth + 1u); else { c.pc = 0x00118358u; return; } if (c.pc != 0x0012DAB0u) [[unlikely]] return; }
L_0012DAB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DAB8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0012DAB8u) [[unlikely]] return; }
L_0012DAB8:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], 0u + 47u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] - 1u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 92u);  if (t) { goto L_0012DAD4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0012DAE8; } }
L_0012DAD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DADCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0012DADCu) [[unlikely]] return; }
L_0012DADC:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st8((c.r[2].w[0] - 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0012DAE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0012DAE8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012DAF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 10160u);  c.pc = t; return; }
L_0012DB08:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] - 9768u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DB24u);  if (depth < kMaxDepth) unit_000B(c, 361u, depth + 1u); else { c.pc = 0x0012F070u; return; } if (c.pc != 0x0012DB24u) [[unlikely]] return; }
L_0012DB24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DB2Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 363u, depth + 1u); else { c.pc = 0x0012F0E0u; return; } if (c.pc != 0x0012DB2Cu) [[unlikely]] return; }
L_0012DB2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], c.r[2].w[0] - 9752u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012DB40:
    c.r[2].d[0] = 0ull | 32768ull;
    c.budget -= 2;
L_0012DB48:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012DB48u | kUnwind; return; } goto L_0012DB48; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012DB70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] - 9764u)));
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0012DB94; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DB94u); set32(c.r[4], ld32((c.r[2].w[0] - 9760u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012DB94u) [[unlikely]] return; }
L_0012DB94:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012DBA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[2].w[0] - 9648u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[3].w[0] + 468u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 6;
L_0012DBB8:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[6].d[0]) { set32(c.r[3], c.r[3].w[0] + 36u);  goto L_0012DBD4; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[3], c.r[3].w[0] + 36u);  if (t) { goto L_0012DBD4; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0012DBD4:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012DBB8u | kUnwind; return; } goto L_0012DBB8; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0012DBE8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[16].w[0] + 8u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DC08u); set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_0002(c, 76u, depth + 1u); else { c.pc = 0x00108810u; return; } if (c.pc != 0x0012DC08u) [[unlikely]] return; }
L_0012DC08:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 8u)));  goto L_0012DC18; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012DC20; } }
L_0012DC18:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0012DC20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012DC30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[16], c.r[2].w[0] - 9648u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[18], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[17], c.r[16].w[0] + 468u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 10;
L_0012DC58:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[16], c.r[16].w[0] + 36u);  goto L_0012DC78; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DC68u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 204u, depth + 1u); else { c.pc = 0x0012DBE8u; return; } if (c.pc != 0x0012DC68u) [[unlikely]] return; }
L_0012DC68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 36u);  if (t) { goto L_0012DC78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012DC88; } }
L_0012DC78:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012DC58u | kUnwind; return; } goto L_0012DC58; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0012DC88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0012DCA0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012B7B8u | kUnwind; return; } [[clang::musttail]] return unit_000A(c, 476u, depth); }
L_0012DCA8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DCB8u);  if (depth < kMaxDepth) unit_000A(c, 476u, depth + 1u); else { c.pc = 0x0012B7B8u; return; } if (c.pc != 0x0012DCB8u) [[unlikely]] return; }
L_0012DCB8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012DCC8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 9;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0012DDD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DCF4u);  if (depth < kMaxDepth) unit_000B(c, 206u, depth + 1u); else { c.pc = 0x0012DC30u; return; } if (c.pc != 0x0012DCF4u) [[unlikely]] return; }
L_0012DCF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0012DDD4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0012DDD8; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = ld8((c.r[16].w[0] + 3u));  if (t) { goto L_0012DD24; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0012DD60; } }
L_0012DD24:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0012DD3C; } }
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_0012DD60; } }
L_0012DD3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; set32(c.r[2], c.r[4].w[0] << 24);  if (t) { goto L_0012DD64; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 7;
L_0012DD60:
    set32(c.r[2], c.r[4].w[0] << 24);
    c.budget -= 1;
L_0012DD64:
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0012DD98; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[5], c.r[5].w[0] << 11);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001080A8u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 13u, depth); }
L_0012DD98:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0012DDD4; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DDB4u); set32(c.r[6], c.r[6].w[0] << 11);  if (depth < kMaxDepth) unit_000A(c, 465u, depth + 1u); else { c.pc = 0x0012B628u; return; } if (c.pc != 0x0012DDB4u) [[unlikely]] return; }
L_0012DDB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0012DDD4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[4], c.r[4].w[0] + 17040u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00117F48u | kUnwind; return; } [[clang::musttail]] return unit_0005(c, 313u, depth); }
L_0012DDD4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0012DDD8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012DDE8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DE00u); st64((c.r[29].w[0]), c.r[16].d[0]);  if (depth < kMaxDepth) unit_000A(c, 468u, depth + 1u); else { c.pc = 0x0012B6C0u; return; } if (c.pc != 0x0012DE00u) [[unlikely]] return; }
L_0012DE00:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0012DE1C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 9u);  if (t) { goto L_0012DE1C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0012DE54; } }
L_0012DE1C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[18], 0u + 1u);
    set32(c.r[16], c.r[2].w[0] - 9648u);
    set32(c.r[17], c.r[16].w[0] + 468u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 5;
L_0012DE30:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[16], c.r[16].w[0] + 36u);  goto L_0012DE44; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DE40u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 212u, depth + 1u); else { c.pc = 0x0012DCC8u; return; } if (c.pc != 0x0012DE40u) [[unlikely]] return; }
L_0012DE40:
    set32(c.r[16], c.r[16].w[0] + 36u);
    c.budget -= 1;
L_0012DE44:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012DE30u | kUnwind; return; } goto L_0012DE30; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0012DE54:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0012DE68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st32((c.r[2].w[0] - 9764u), c.r[4].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] - 9760u), c.r[5].w[0]);  c.pc = t; return; }
L_0012DE80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 32u), c.r[17].d[0]);  if (t) { goto L_0012DEA8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 17064u);  if (t) { goto L_0012DF64; } }
L_0012DEA8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DEB4u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 337u, depth + 1u); else { c.pc = 0x0012EDC8u; return; } if (c.pc != 0x0012DEB4u) [[unlikely]] return; }
L_0012DEB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[2].w[0] - 9176u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DEC8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 280u, depth + 1u); else { c.pc = 0x0012E5E8u; return; } if (c.pc != 0x0012DEC8u) [[unlikely]] return; }
L_0012DEC8:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = c.r[2].d[0] + 0ull;  goto L_0012DF74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DEDCu);  if (depth < kMaxDepth) unit_000B(c, 209u, depth + 1u); else { c.pc = 0x0012DCA0u; return; } if (c.pc != 0x0012DEDCu) [[unlikely]] return; }
L_0012DEDC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DEE8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 452u, depth + 1u); else { c.pc = 0x00107CA0u; return; } if (c.pc != 0x0012DEE8u) [[unlikely]] return; }
L_0012DEE8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] >= 0; c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0012DF00; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 17112u);  if (t) { goto L_0012DF64; } }
L_0012DF00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DF08u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 210u, depth + 1u); else { c.pc = 0x0012DCA8u; return; } if (c.pc != 0x0012DF08u) [[unlikely]] return; }
L_0012DF08:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DF18u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0002(c, 13u, depth + 1u); else { c.pc = 0x001080A8u; return; } if (c.pc != 0x0012DF18u) [[unlikely]] return; }
L_0012DF18:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0; c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0012DF40; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DF30u); set32(c.r[5], c.r[5].w[0] + 17152u);  if (depth < kMaxDepth) unit_000B(c, 200u, depth + 1u); else { c.pc = 0x0012DB70u; return; } if (c.pc != 0x0012DF30u) [[unlikely]] return; }
L_0012DF30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DF38u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 472u, depth + 1u); else { c.pc = 0x00107F28u; return; } if (c.pc != 0x0012DF38u) [[unlikely]] return; }
L_0012DF38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012DF78; } }
L_0012DF40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DF48u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 210u, depth + 1u); else { c.pc = 0x0012DCA8u; return; } if (c.pc != 0x0012DF48u) [[unlikely]] return; }
L_0012DF48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DF50u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 472u, depth + 1u); else { c.pc = 0x00107F28u; return; } if (c.pc != 0x0012DF50u) [[unlikely]] return; }
L_0012DF50:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0012DF78; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + 17200u);
    c.budget -= 3;
L_0012DF64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DF6Cu);  if (depth < kMaxDepth) unit_000B(c, 200u, depth + 1u); else { c.pc = 0x0012DB70u; return; } if (c.pc != 0x0012DF6Cu) [[unlikely]] return; }
L_0012DF6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012DF78; } }
L_0012DF74:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0012DF78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0012DF90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DFA4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 210u, depth + 1u); else { c.pc = 0x0012DCA8u; return; } if (c.pc != 0x0012DFA4u) [[unlikely]] return; }
L_0012DFA4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DFB4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 13u, depth + 1u); else { c.pc = 0x001080A8u; return; } if (c.pc != 0x0012DFB4u) [[unlikely]] return; }
L_0012DFB4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012DFE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DFC4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 210u, depth + 1u); else { c.pc = 0x0012DCA8u; return; } if (c.pc != 0x0012DFC4u) [[unlikely]] return; }
L_0012DFC4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012DFD4u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0002(c, 13u, depth + 1u); else { c.pc = 0x001080A8u; return; } if (c.pc != 0x0012DFD4u) [[unlikely]] return; }
L_0012DFD4:
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[2].d[0] = 0ull;
    c.budget -= 3;
L_0012DFE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012DFF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] - 9648u);
    set32(c.r[5], c.r[3].w[0] + 468u);
    c.budget -= 4;
L_0012E000:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[3].d[0];
    set32(c.r[3], c.r[3].w[0] + 36u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E000u | kUnwind; return; } goto L_0012E000; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0012E028:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { set32(c.r[6], 0u + 36u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00116E18u | kUnwind; return; } [[clang::musttail]] return unit_0005(c, 239u, depth); }
L_0012E038:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.budget -= 8;
    { const bool t = c.r[17].d[0] != 0ull; st64((c.r[29].w[0]), 0ull);  if (t) { goto L_0012E068; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 17248u);  if (t) { goto L_0012E09C; } }
L_0012E068:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0012E07C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 17288u);  if (t) { goto L_0012E09C; } }
L_0012E07C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E084u);  if (depth < kMaxDepth) unit_000B(c, 237u, depth + 1u); else { c.pc = 0x0012DFF0u; return; } if (c.pc != 0x0012E084u) [[unlikely]] return; }
L_0012E084:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0012E0AC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + 17328u);
    c.budget -= 3;
L_0012E09C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E0A4u);  if (depth < kMaxDepth) unit_000B(c, 200u, depth + 1u); else { c.pc = 0x0012DB70u; return; } if (c.pc != 0x0012E0A4u) [[unlikely]] return; }
L_0012E0A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012E19C; } }
L_0012E0AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E0B4u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 337u, depth + 1u); else { c.pc = 0x0012EDC8u; return; } if (c.pc != 0x0012E0B4u) [[unlikely]] return; }
L_0012E0B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[18], c.r[2].w[0] - 9176u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E0C8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 280u, depth + 1u); else { c.pc = 0x0012E5E8u; return; } if (c.pc != 0x0012E0C8u) [[unlikely]] return; }
L_0012E0C8:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0012E144; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E0DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 220u, depth + 1u); else { c.pc = 0x0012DE80u; return; } if (c.pc != 0x0012E0DCu) [[unlikely]] return; }
L_0012E0DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_0012E0F4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E0F4u); set32(c.r[5], c.r[5].w[0] + 17376u);  if (depth < kMaxDepth) unit_000B(c, 200u, depth + 1u); else { c.pc = 0x0012DB70u; return; } if (c.pc != 0x0012E0F4u) [[unlikely]] return; }
L_0012E0F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E0FCu);  if (depth < kMaxDepth) unit_000B(c, 209u, depth + 1u); else { c.pc = 0x0012DCA0u; return; } if (c.pc != 0x0012E0FCu) [[unlikely]] return; }
L_0012E0FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E10Cu); set32(c.r[5], ld32((c.r[2].w[0] - 8856u)));  if (depth < kMaxDepth) unit_0001(c, 452u, depth + 1u); else { c.pc = 0x00107CA0u; return; } if (c.pc != 0x0012E10Cu) [[unlikely]] return; }
L_0012E10C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0012E134; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E124u); set32(c.r[5], c.r[5].w[0] + 17416u);  if (depth < kMaxDepth) unit_000B(c, 200u, depth + 1u); else { c.pc = 0x0012DB70u; return; } if (c.pc != 0x0012E124u) [[unlikely]] return; }
L_0012E124:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E12Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 239u, depth + 1u); else { c.pc = 0x0012E028u; return; } if (c.pc != 0x0012E12Cu) [[unlikely]] return; }
L_0012E12C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012E19C; } }
L_0012E134:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E13Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 210u, depth + 1u); else { c.pc = 0x0012DCA8u; return; } if (c.pc != 0x0012E13Cu) [[unlikely]] return; }
L_0012E13C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0012E158; } }
L_0012E144:
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0])));
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 5;
L_0012E158:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[5], 0u + 1u);
    st32((c.r[16].w[0] + 24u), 0u);
    set32(c.r[4], c.r[2].w[0] + 2047u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[2].w[0] + 4094u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    st32((c.r[16].w[0] + 28u), 0u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 11));
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 8u), 0u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 17;
L_0012E19C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0012E1B8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_0012E22C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));  goto L_0012E1E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E1E4u);  if (depth < kMaxDepth) unit_000B(c, 266u, depth + 1u); else { c.pc = 0x0012E418u; return; } if (c.pc != 0x0012E1E4u) [[unlikely]] return; }
L_0012E1E4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 1;
L_0012E1E8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));  goto L_0012E218; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E1F8u);  if (depth < kMaxDepth) unit_000B(c, 209u, depth + 1u); else { c.pc = 0x0012DCA0u; return; } if (c.pc != 0x0012E1F8u) [[unlikely]] return; }
L_0012E1F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E200u); set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_0001(c, 472u, depth + 1u); else { c.pc = 0x00107F28u; return; } if (c.pc != 0x0012E200u) [[unlikely]] return; }
L_0012E200:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));  goto L_0012E218; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E214u); set32(c.r[4], c.r[4].w[0] + 17456u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x0012E214u) [[unlikely]] return; }
L_0012E214:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0012E218:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E028u | kUnwind; return; } goto L_0012E028; }
L_0012E22C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012E240:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0012E268; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E260u); set32(c.r[5], c.r[5].w[0] + 17480u);  if (depth < kMaxDepth) unit_000B(c, 200u, depth + 1u); else { c.pc = 0x0012DB70u; return; } if (c.pc != 0x0012E260u) [[unlikely]] return; }
L_0012E260:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012E2C8; } }
L_0012E268:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0012E278; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 24u), c.r[5].w[0]);  if (t) { goto L_0012E2A8; } }
L_0012E278:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0012E290; } }
    set32(c.r[6], ld32((c.r[7].w[0] + 20u)));
    set32(c.r[2], c.r[6].w[0] + c.r[5].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_0012E2AC; } }
L_0012E290:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[6], ld32((c.r[7].w[0] + 20u)));  if (t) { goto L_0012E2AC; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_0012E2AC; } }
L_0012E2A8:
    set32(c.r[6], ld32((c.r[7].w[0] + 20u)));
    c.budget -= 1;
L_0012E2AC:
    set32(c.r[2], ld32((c.r[7].w[0] + 24u)));
    set32(c.r[3], 0u - 1u);
    c.r[4].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    if (c.r[4].d[0] == 0) c.r[2].d[0] = c.r[6].d[0];
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[2].d[0] = 0ull;
    st32((c.r[7].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 7;
L_0012E2C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012E2D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0012E2FC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E2F4u); set32(c.r[5], c.r[5].w[0] + 17480u);  if (depth < kMaxDepth) unit_000B(c, 200u, depth + 1u); else { c.pc = 0x0012DB70u; return; } if (c.pc != 0x0012E2F4u) [[unlikely]] return; }
L_0012E2F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012E300; } }
L_0012E2FC:
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 1;
L_0012E300:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012E310:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.budget -= 11;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 48u), c.r[19].d[0]);  if (t) { goto L_0012E34C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 17480u);  if (t) { goto L_0012E370; } }
L_0012E34C:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0012E360; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 17504u);  if (t) { goto L_0012E370; } }
L_0012E360:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0012E380; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 17536u);
    c.budget -= 2;
L_0012E370:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E378u);  if (depth < kMaxDepth) unit_000B(c, 200u, depth + 1u); else { c.pc = 0x0012DB70u; return; } if (c.pc != 0x0012E378u) [[unlikely]] return; }
L_0012E378:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012E3F4; } }
L_0012E380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E388u); set32(c.r[20], 0u + 1u);  if (depth < kMaxDepth) unit_000B(c, 202u, depth + 1u); else { c.pc = 0x0012DBA0u; return; } if (c.pc != 0x0012E388u) [[unlikely]] return; }
L_0012E388:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[20].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012E3F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E398u); set32(c.r[19], 0u + 2u);  if (depth < kMaxDepth) unit_000A(c, 468u, depth + 1u); else { c.pc = 0x0012B6C0u; return; } if (c.pc != 0x0012E398u) [[unlikely]] return; }
L_0012E398:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[19].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012E3F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E3A8u);  if (depth < kMaxDepth) unit_000B(c, 206u, depth + 1u); else { c.pc = 0x0012DC30u; return; } if (c.pc != 0x0012E3A8u) [[unlikely]] return; }
L_0012E3A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012E3F4; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012E3F4; } }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 24u)));  goto L_0012E3D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[20].w[0]));  if (t) { goto L_0012E3F4; } }
L_0012E3D0:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[19].w[0]));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[18].w[0]);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[17].d[0];
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 9;
L_0012E3F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0012E418:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[17].d[0]);  if (t) { goto L_0012E450; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[5], c.r[5].w[0] + 17480u);
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012DB70u | kUnwind; return; } goto L_0012DB70; }
L_0012E450:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0012E4B0; } }
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));  goto L_0012E4B0; }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));  goto L_0012E4B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0012E488; } }
    c.budget -= 1;
L_0012E480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E488u); set32(c.r[17], c.r[17].w[0] + 1u);  if (depth < kMaxDepth) unit_000B(c, 198u, depth + 1u); else { c.pc = 0x0012DB40u; return; } if (c.pc != 0x0012E488u) [[unlikely]] return; }
L_0012E488:
    c.r[2].d[0] = c.r[17].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0012E4AC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E4A0u); set32(c.r[6], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_0002(c, 76u, depth + 1u); else { c.pc = 0x00108810u; return; } if (c.pc != 0x0012E4A0u) [[unlikely]] return; }
L_0012E4A0:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E480u | kUnwind; return; } goto L_0012E480; } }
L_0012E4AC:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0012E4B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012E4C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0012E4EC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E4E4u); set32(c.r[5], c.r[5].w[0] + 17480u);  if (depth < kMaxDepth) unit_000B(c, 200u, depth + 1u); else { c.pc = 0x0012DB70u; return; } if (c.pc != 0x0012E4E4u) [[unlikely]] return; }
L_0012E4E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012E4F0; } }
L_0012E4EC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 1;
L_0012E4F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012E500:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 2048u);  c.pc = t; return; }
L_0012E508:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0012E52C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E524u); set32(c.r[5], c.r[5].w[0] + 17480u);  if (depth < kMaxDepth) unit_000B(c, 200u, depth + 1u); else { c.pc = 0x0012DB70u; return; } if (c.pc != 0x0012E524u) [[unlikely]] return; }
L_0012E524:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012E534; } }
L_0012E52C:
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] << 11);
    c.budget -= 2;
L_0012E534:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012E540:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E554u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0012E554u) [[unlikely]] return; }
L_0012E554:
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    set32(c.r[5], 0u + 16u);
    if (c.r[3].d[0] != 0) c.r[5].d[0] = c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0012E590; } }
    set32(c.r[6], 0u + 58u);
    set32(c.r[2], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 2;
L_0012E570:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[6].d[0]) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_0012E584; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0012E594; } }
L_0012E584:
    c.r[2].d[0] = c.r[4].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] + c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E570u | kUnwind; return; } goto L_0012E570; } }
L_0012E590:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012E594:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012E5A8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] + 17576u);
    lwl(c.r[2], (c.r[4].w[0] + 3u));
    lwr(c.r[2], (c.r[4].w[0]));
    swl(c.r[2], (c.r[29].w[0] + 3u));
    swr(c.r[2], (c.r[29].w[0]));
    st8((c.r[29].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E5D4u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 31u, depth + 1u); else { c.pc = 0x00118618u; return; } if (c.pc != 0x0012E5D4u) [[unlikely]] return; }
L_0012E5D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012E5E8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E60Cu); st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000B(c, 275u, depth + 1u); else { c.pc = 0x0012E540u; return; } if (c.pc != 0x0012E60Cu) [[unlikely]] return; }
L_0012E60C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x003B0000u);  if (t) { goto L_0012E628; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E624u); set32(c.r[5], c.r[5].w[0] - 8584u);  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x0012E624u) [[unlikely]] return; }
L_0012E624:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.budget -= 1;
L_0012E628:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] - 8848u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 92u);  if (t) { goto L_0012E64C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 47u);  if (t) { goto L_0012E648; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0012E64C; } }
L_0012E648:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0012E64C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E654u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 278u, depth + 1u); else { c.pc = 0x0012E5A8u; return; } if (c.pc != 0x0012E654u) [[unlikely]] return; }
L_0012E654:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0012E6C0; } }
    set32(c.r[16], c.r[16].w[0] - 8848u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E670u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 21u, depth + 1u); else { c.pc = 0x00118358u; return; } if (c.pc != 0x0012E670u) [[unlikely]] return; }
L_0012E670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E678u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0012E678u) [[unlikely]] return; }
L_0012E678:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], 0u + 92u);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] - 1u)));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[4].d[0]; set32(c.r[3], 0u + 47u);  if (t) { goto L_0012E6BC; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0012E6C0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0012E6C0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_0012E6C0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0012E6BC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E6BCu); set32(c.r[5], c.r[5].w[0] + 17584u);  if (depth < kMaxDepth) unit_0006(c, 21u, depth + 1u); else { c.pc = 0x00118358u; return; } if (c.pc != 0x0012E6BCu) [[unlikely]] return; }
L_0012E6BC:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0012E6C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E6C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 21u, depth + 1u); else { c.pc = 0x00118358u; return; } if (c.pc != 0x0012E6C8u) [[unlikely]] return; }
L_0012E6C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E6D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0012E6D0u) [[unlikely]] return; }
L_0012E6D0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0012E704; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 92u);
    set32(c.r[5], 0u + 47u);
    c.budget -= 4;
L_0012E6E8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[6].d[0]) { st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  goto L_0012E6F4; }
L_0012E6F4:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E6E8u | kUnwind; return; } goto L_0012E6E8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0012E704:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0012E718:
    set32(c.r[4], c.r[4].w[0] << 24);
    set32(c.r[2], 0u + 47u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 24));
    c.r[3].d[0] = c.r[4].d[0] ^ 92ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];  c.pc = t; return; }
L_0012E730:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], c.r[4].w[0] << 24);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 24));
    set32(c.r[17], c.r[5].w[0] << 24);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E754u); set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 24));  if (depth < kMaxDepth) unit_000B(c, 290u, depth + 1u); else { c.pc = 0x0012E718u; return; } if (c.pc != 0x0012E754u) [[unlikely]] return; }
L_0012E754:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E760u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 290u, depth + 1u); else { c.pc = 0x0012E718u; return; } if (c.pc != 0x0012E760u) [[unlikely]] return; }
L_0012E760:
    c.r[16].d[0] = c.r[16].d[0] ^ c.r[2].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], 0u - 1u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    if (c.r[16].d[0] == 0) c.r[2].d[0] = 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012E780:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E7A8u); st64((c.r[29].w[0] + 16u), c.r[17].d[0]);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0012E7A8u) [[unlikely]] return; }
L_0012E7A8:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E7B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0012E7B4u) [[unlikely]] return; }
L_0012E7B4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_0012E7C4; } }
L_0012E7BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0012E800; } }
L_0012E7C4:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0012E7FC; } }
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
L_0012E7D8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E7E4u); c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));  if (depth < kMaxDepth) unit_000B(c, 291u, depth + 1u); else { c.pc = 0x0012E730u; return; } if (c.pc != 0x0012E7E4u) [[unlikely]] return; }
L_0012E7E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E7BCu | kUnwind; return; } goto L_0012E7BC; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E7D8u | kUnwind; return; } goto L_0012E7D8; } }
L_0012E7FC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012E800:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0012E820:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0012E910; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[22].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[2], 0u + 92u);
    c.budget -= 4;
L_0012E878:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[5].d[0] = ld8((c.r[4].w[0]));  if (t) { goto L_0012E88C; } }
    set32(c.r[2], 0u + 47u);
    set32(c.r[5], 0u + 47u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0012E88C:
    set32(c.r[2], c.r[5].w[0] << 24);
    set32(c.r[3], 0u + 10u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] - 1u)));  goto L_0012E8AC; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] + 1u);  if (t) { goto L_0012E8F0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] - 1u)));
    c.budget -= 1;
L_0012E8AC:
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[6], c.r[17].w[0] - c.r[7].w[0]);  if (t) { goto L_0012E8BC; } }
    st8((c.r[4].w[0] - 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0012E8BC:
    mmi::mult(c, 0, c.r[20].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[19].w[0] << 3);
    set32(c.r[5], c.r[16].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E8DCu); set32(c.r[4], c.r[21].w[0] + c.r[4].w[0]);  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x0012E8DCu) [[unlikely]] return; }
L_0012E8DC:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[19].d[0]; c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0012E914; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0012E8F4; } }
L_0012E8F0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0012E8F4:
    set32(c.r[2], c.r[16].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 92u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012E878u | kUnwind; return; } goto L_0012E878; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[22].w[0] - 8872u)));  if (t) { goto L_0012E918; } }
L_0012E910:
    c.r[22].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.budget -= 1;
L_0012E914:
    set32(c.r[2], ld32((c.r[22].w[0] - 8872u)));
    c.budget -= 1;
L_0012E918:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[22].w[0] - 8872u);  if (t) { goto L_0012E930; } }
    st32((c.r[22].w[0] - 8872u), c.r[21].w[0]);
    st32((c.r[3].w[0] + 12u), c.r[20].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[19].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[18].w[0]);
    c.budget -= 4;
L_0012E930:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0012E960:
    set32(c.r[29], c.r[29].w[0] - 320u);
    set32(c.r[6], 0u + 256u);
    st64((c.r[29].w[0] + 288u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 256u), c.r[16].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 272u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 304u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E98Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0012E98Cu) [[unlikely]] return; }
L_0012E98C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E998u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 280u, depth + 1u); else { c.pc = 0x0012E5E8u; return; } if (c.pc != 0x0012E998u) [[unlikely]] return; }
L_0012E998:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E9A4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 452u, depth + 1u); else { c.pc = 0x00107CA0u; return; } if (c.pc != 0x0012E9A4u) [[unlikely]] return; }
L_0012E9A4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] < 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0012EA00; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E9BCu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0002(c, 13u, depth + 1u); else { c.pc = 0x001080A8u; return; } if (c.pc != 0x0012E9BCu) [[unlikely]] return; }
L_0012E9BC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] < 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0012EA00; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E9D4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 13u, depth + 1u); else { c.pc = 0x001080A8u; return; } if (c.pc != 0x0012E9D4u) [[unlikely]] return; }
L_0012E9D4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].d[0] = c.r[16].sd[0] < 4097ll ? 1ull : 0ull;  if (t) { goto L_0012EA00; } }
    set32(c.r[6], 0u + 4096u);
    if (c.r[2].d[0] != 0) c.r[6].d[0] = c.r[16].d[0];
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012E9F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 35u, depth + 1u); else { c.pc = 0x001082E0u; return; } if (c.pc != 0x0012E9F0u) [[unlikely]] return; }
L_0012E9F0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0012EA08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EA00u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 472u, depth + 1u); else { c.pc = 0x00107F28u; return; } if (c.pc != 0x0012EA00u) [[unlikely]] return; }
L_0012EA00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012EA14; } }
L_0012EA08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EA10u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 472u, depth + 1u); else { c.pc = 0x00107F28u; return; } if (c.pc != 0x0012EA10u) [[unlikely]] return; }
L_0012EA10:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0012EA14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 304u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 288u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 272u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 256u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_0012EA30:
    set32(c.r[29], c.r[29].w[0] - 416u);
    set32(c.r[6], 0u + 256u);
    st64((c.r[29].w[0] + 352u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 320u), c.r[20].d[0]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 368u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 336u), c.r[21].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 304u), c.r[19].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 400u), c.r[31].d[0]);
    c.r[23].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 384u), c.r[30].d[0]);
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 288u), c.r[18].d[0]);
    c.r[21].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 272u), c.r[17].d[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EA80u); st64((c.r[29].w[0] + 256u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0012EA80u) [[unlikely]] return; }
L_0012EA80:
    c.r[3].d[0] = c.r[20].sd[0] < 14ll ? 1ull : 0ull;
    set32(c.r[2], 0u + 13u);
    if (c.r[3].d[0] == 0) c.r[20].d[0] = c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[20].sd[0] <= 0; c.r[30].sd[0] = static_cast<std::int32_t>(0x003B0000u);  if (t) { goto L_0012EB58; } }
    set32(c.r[5], c.r[30].w[0] - 8872u);
    c.budget -= 1;
L_0012EA98:
    set32(c.r[3], c.r[19].w[0] << 3);
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[18], c.r[22].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[17], c.r[22].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EAC8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 280u, depth + 1u); else { c.pc = 0x0012E5E8u; return; } if (c.pc != 0x0012EAC8u) [[unlikely]] return; }
L_0012EAC8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_0012EB4C; }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EAE0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 452u, depth + 1u); else { c.pc = 0x00107CA0u; return; } if (c.pc != 0x0012EAE0u) [[unlikely]] return; }
L_0012EAE0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].sd[0] >= 0) { st32((c.r[18].w[0]), c.r[16].w[0]);  goto L_0012EB08; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 17592u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EB00u); set32(c.r[23], c.r[23].w[0] + 1u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x0012EB00u) [[unlikely]] return; }
L_0012EB00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_0012EB4C; } }
L_0012EB08:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EB14u); set32(c.r[21], c.r[21].w[0] + 1u);  if (depth < kMaxDepth) unit_000B(c, 232u, depth + 1u); else { c.pc = 0x0012DF90u; return; } if (c.pc != 0x0012EB14u) [[unlikely]] return; }
L_0012EB14:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 17632u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EB28u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x0012EB28u) [[unlikely]] return; }
L_0012EB28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EB30u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 472u, depth + 1u); else { c.pc = 0x00107F28u; return; } if (c.pc != 0x0012EB30u) [[unlikely]] return; }
L_0012EB30:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EB40u); set32(c.r[5], ld32((c.r[3].w[0] - 8856u)));  if (depth < kMaxDepth) unit_0001(c, 452u, depth + 1u); else { c.pc = 0x00107CA0u; return; } if (c.pc != 0x0012EB40u) [[unlikely]] return; }
L_0012EB40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EB48u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 210u, depth + 1u); else { c.pc = 0x0012DCA8u; return; } if (c.pc != 0x0012EB48u) [[unlikely]] return; }
L_0012EB48:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0012EB4C:
    c.r[2].d[0] = c.r[19].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[30].w[0] - 8872u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012EA98u | kUnwind; return; } goto L_0012EA98; } }
L_0012EB58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EB68u); set32(c.r[4], c.r[2].w[0] + 17664u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x0012EB68u) [[unlikely]] return; }
L_0012EB68:
    c.budget -= 2;
    { const bool t = c.r[23].sd[0] <= 0; set32(c.r[5], 0u + 10u);  if (t) { goto L_0012EB7C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EB7Cu); set32(c.r[4], c.r[4].w[0] + 17688u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x0012EB7Cu) [[unlikely]] return; }
L_0012EB7C:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 400u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 384u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 368u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 352u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 336u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 320u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 304u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 288u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 272u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 256u));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 416u);  c.pc = t; return; }
L_0012EBB0:
    set32(c.r[29], c.r[29].w[0] - 400u);
    st64((c.r[29].w[0] + 352u), c.r[22].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st64((c.r[29].w[0] + 304u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 336u), c.r[21].d[0]);
    set32(c.r[2], c.r[22].w[0] - 8872u);
    set32(c.r[19], ld32((c.r[22].w[0] - 8872u)));
    c.r[21].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 384u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 368u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 320u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 288u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 272u), c.r[17].d[0]);
    c.budget -= 15;
    { const bool t = c.r[19].d[0] != 0ull; st64((c.r[29].w[0] + 256u), c.r[16].d[0]);  if (t) { goto L_0012EBF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012ECB0; } }
L_0012EBF4:
    set32(c.r[20], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0012EC94; } }
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[22].w[0] - 8872u);
    c.budget -= 2;
L_0012EC08:
    set32(c.r[2], c.r[18].w[0] << 3);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[17], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[4].w[0] + 8u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[16].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[19].w[0] + c.r[16].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EC38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 280u, depth + 1u); else { c.pc = 0x0012E5E8u; return; } if (c.pc != 0x0012EC38u) [[unlikely]] return; }
L_0012EC38:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0012EC80; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EC4Cu); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0001(c, 472u, depth + 1u); else { c.pc = 0x00107F28u; return; } if (c.pc != 0x0012EC4Cu) [[unlikely]] return; }
L_0012EC4C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0012EC6C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EC64u); set32(c.r[4], c.r[4].w[0] + 17736u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x0012EC64u) [[unlikely]] return; }
L_0012EC64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_0012EC80; } }
L_0012EC6C:
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 17776u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EC7Cu); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x0012EC7Cu) [[unlikely]] return; }
L_0012EC7C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0012EC80:
    c.r[2].d[0] = c.r[18].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[22].w[0] - 8872u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012EC08u | kUnwind; return; } goto L_0012EC08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[23].w[0] + 17808u);  if (t) { goto L_0012EC9C; } }
L_0012EC94:
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[23].w[0] + 17808u);
    c.budget -= 2;
L_0012EC9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012ECA4u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x0012ECA4u) [[unlikely]] return; }
L_0012ECA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012ECACu);  if (depth < kMaxDepth) unit_000B(c, 336u, depth + 1u); else { c.pc = 0x0012EDB0u; return; } if (c.pc != 0x0012ECACu) [[unlikely]] return; }
L_0012ECAC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0012ECB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 384u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 368u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 352u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 336u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 320u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 304u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 288u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 272u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 256u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 400u);  c.pc = t; return; }
L_0012ECE0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    c.budget -= 15;
    { const bool t = c.r[20].sd[0] <= 0; st64((c.r[29].w[0] + 16u), c.r[17].d[0]);  if (t) { goto L_0012ED7C; } }
    c.r[21].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[4], c.r[21].w[0] - 8872u);
    c.budget -= 3;
L_0012ED28:
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[17], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[16].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012ED54u); set32(c.r[5], c.r[19].w[0] + c.r[5].w[0]);  if (depth < kMaxDepth) unit_000B(c, 294u, depth + 1u); else { c.pc = 0x0012E780u; return; } if (c.pc != 0x0012ED54u) [[unlikely]] return; }
L_0012ED54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_0012ED70; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0012ED84; } }
L_0012ED70:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[21].w[0] - 8872u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012ED28u | kUnwind; return; } goto L_0012ED28; } }
L_0012ED7C:
    st32((c.r[18].w[0] + 4u), 0u);
    st32((c.r[18].w[0]), 0u);
    c.budget -= 2;
L_0012ED84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0012EDB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 8872u);
    c.budget -= 5;
    { set32(c.r[6], 0u + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00116E18u | kUnwind; return; } [[clang::musttail]] return unit_0005(c, 239u, depth); }
L_0012EDC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] - 8872u)));
    set32(c.r[2], c.r[2].w[0] - 8872u);
    st32((c.r[5].w[0]), 0u);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == 0ull; st32((c.r[5].w[0] + 4u), 0u);  if (t) { goto L_0012EDF4; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { c.r[5].d[0] = c.r[3].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012ECE0u | kUnwind; return; } goto L_0012ECE0; }
L_0012EDF4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012EE00:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[20], c.r[2].w[0] - 19840u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EE44u); set32(c.r[6], 0u + 4096u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0012EE44u) [[unlikely]] return; }
L_0012EE44:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 8872u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012EE5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EE5Cu);  if (depth < kMaxDepth) unit_000B(c, 336u, depth + 1u); else { c.pc = 0x0012EDB0u; return; } if (c.pc != 0x0012EE5Cu) [[unlikely]] return; }
L_0012EE5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EE64u);  if (depth < kMaxDepth) unit_000B(c, 209u, depth + 1u); else { c.pc = 0x0012DCA0u; return; } if (c.pc != 0x0012EE64u) [[unlikely]] return; }
L_0012EE64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EE6Cu);  if (depth < kMaxDepth) unit_000B(c, 325u, depth + 1u); else { c.pc = 0x0012EBB0u; return; } if (c.pc != 0x0012EE6Cu) [[unlikely]] return; }
L_0012EE6C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012EF04; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0012EF08; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0012EF08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EE8Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 303u, depth + 1u); else { c.pc = 0x0012E960u; return; } if (c.pc != 0x0012EE8Cu) [[unlikely]] return; }
L_0012EE8C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[19].w[0] + 9u);  goto L_0012EEBC; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EEA4u); set32(c.r[4], c.r[4].w[0] + 17832u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x0012EEA4u) [[unlikely]] return; }
L_0012EEA4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EEB4u); set32(c.r[5], c.r[5].w[0] + 17872u);  if (depth < kMaxDepth) unit_000B(c, 200u, depth + 1u); else { c.pc = 0x0012DB70u; return; } if (c.pc != 0x0012EEB4u) [[unlikely]] return; }
L_0012EEB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012EF04; } }
L_0012EEBC:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    mmi::divu(c, 0, c.r[16].w[0], c.r[17].w[0]);
    c.budget -= 4;
    if (c.r[17].d[0] == 0ull) { breakpoint(c, 0x0012EEC8u);  goto L_0012EECC; }
L_0012EECC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[16].d[0] = c.lo.d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EEE0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 300u, depth + 1u); else { c.pc = 0x0012E820u; return; } if (c.pc != 0x0012EEE0u) [[unlikely]] return; }
L_0012EEE0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EEECu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 312u, depth + 1u); else { c.pc = 0x0012EA30u; return; } if (c.pc != 0x0012EEECu) [[unlikely]] return; }
L_0012EEEC:
    set32(c.r[3], c.r[19].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] << 3);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 5;
    if (c.r[17].d[0] == 0ull) { breakpoint(c, 0x0012EEFCu);  goto L_0012EF00; }
L_0012EF00:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_0012EF04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0012EF08:
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0012EF28:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[18], c.r[2].w[0] - 19840u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EF64u); set32(c.r[6], 0u + 4096u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0012EF64u) [[unlikely]] return; }
L_0012EF64:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 8872u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012EF7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EF7Cu);  if (depth < kMaxDepth) unit_000B(c, 336u, depth + 1u); else { c.pc = 0x0012EDB0u; return; } if (c.pc != 0x0012EF7Cu) [[unlikely]] return; }
L_0012EF7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EF84u);  if (depth < kMaxDepth) unit_000B(c, 209u, depth + 1u); else { c.pc = 0x0012DCA0u; return; } if (c.pc != 0x0012EF84u) [[unlikely]] return; }
L_0012EF84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EF8Cu);  if (depth < kMaxDepth) unit_000B(c, 325u, depth + 1u); else { c.pc = 0x0012EBB0u; return; } if (c.pc != 0x0012EF8Cu) [[unlikely]] return; }
L_0012EF8C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012EFFC; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0012F000; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0012F000; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EFACu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 303u, depth + 1u); else { c.pc = 0x0012E960u; return; } if (c.pc != 0x0012EFACu) [[unlikely]] return; }
L_0012EFAC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_0012EFDC; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EFC4u); set32(c.r[4], c.r[4].w[0] + 17832u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x0012EFC4u) [[unlikely]] return; }
L_0012EFC4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EFD4u); set32(c.r[5], c.r[5].w[0] + 17872u);  if (depth < kMaxDepth) unit_000B(c, 200u, depth + 1u); else { c.pc = 0x0012DB70u; return; } if (c.pc != 0x0012EFD4u) [[unlikely]] return; }
L_0012EFD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012EFFC; } }
L_0012EFDC:
    set32(c.r[6], c.r[19].w[0] >> 3);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EFECu); set32(c.r[7], 0u + 257u);  if (depth < kMaxDepth) unit_000B(c, 300u, depth + 1u); else { c.pc = 0x0012E820u; return; } if (c.pc != 0x0012EFECu) [[unlikely]] return; }
L_0012EFEC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012EFF8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 312u, depth + 1u); else { c.pc = 0x0012EA30u; return; } if (c.pc != 0x0012EFF8u) [[unlikely]] return; }
L_0012EFF8:
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 1;
L_0012EFFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0012F000:
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0012F018:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F028u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 337u, depth + 1u); else { c.pc = 0x0012EDC8u; return; } if (c.pc != 0x0012F028u) [[unlikely]] return; }
L_0012F028:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012F040:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0012F05C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x003B0000u);  if (t) { goto L_0012F060; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0] - 8856u), c.r[4].w[0]);  c.pc = t; return; }
L_0012F05C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.budget -= 1;
L_0012F060:
    c.r[2].d[0] = 0ull | 32769ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] - 8856u), c.r[2].w[0]);  c.pc = t; return; }
L_0012F070:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u + 47u);  if (t) { goto L_0012F0C4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 92u);  if (t) { goto L_0012F0B4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x003B0000u);  if (t) { goto L_0012F0B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[8], c.r[2].w[0] + 17584u);
    set32(c.r[7], c.r[4].w[0] - 8848u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 1u)));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012F0BC; } }
L_0012F0B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st8((c.r[4].w[0] - 8848u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0012F0BC:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8848u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00118760u | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 36u, depth); }
L_0012F0C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[2].w[0] - 8848u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0012F0D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 8848u);  c.pc = t; return; }
L_0012F0E0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x003B0000u);  if (t) { goto L_0012F0F8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.budget -= 3;
    { set32(c.r[4], c.r[4].w[0] - 8584u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00118760u | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 36u, depth); }
L_0012F0F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[7], c.r[2].w[0] + 17920u);
    set32(c.r[6], c.r[3].w[0] - 8584u);
    lwl(c.r[4], (c.r[7].w[0] + 3u));
    lwr(c.r[4], (c.r[7].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 4u)));
    swl(c.r[4], (c.r[6].w[0] + 3u));
    swr(c.r[4], (c.r[6].w[0]));
    st8((c.r[6].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 5u)));
    st8((c.r[6].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012F130:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 8584u);  c.pc = t; return; }
L_0012F140:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] - 8856u)));  c.pc = t; return; }
L_0012F150:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] - 8272u)));
    set32(c.r[3], c.r[6].w[0] - 8272u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0012F170; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0012F19C; } }
L_0012F170:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0012F174:
    c.r[2].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1080u);  if (t) { goto L_0012F19C; } }
    set32(c.r[4], c.r[6].w[0] - 8272u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012F174u | kUnwind; return; } goto L_0012F174; } }
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0012F19C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[7].d[0] + 0ull;  c.pc = t; return; }
L_0012F1A8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (t) { goto L_0012F1D8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F1D0u); set32(c.r[4], c.r[4].w[0] + 17928u);  if (depth < kMaxDepth) unit_000B(c, 439u, depth + 1u); else { c.pc = 0x0012FA58u; return; } if (c.pc != 0x0012F1D0u) [[unlikely]] return; }
L_0012F1D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012F298; } }
L_0012F1D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F1E0u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 435u, depth + 1u); else { c.pc = 0x0012FA10u; return; } if (c.pc != 0x0012F1E0u) [[unlikely]] return; }
L_0012F1E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F1E8u);  if (depth < kMaxDepth) unit_000B(c, 366u, depth + 1u); else { c.pc = 0x0012F150u; return; } if (c.pc != 0x0012F1E8u) [[unlikely]] return; }
L_0012F1E8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(0u));  goto L_0012F208; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F200u); set32(c.r[4], c.r[4].w[0] + 17976u);  if (depth < kMaxDepth) unit_000B(c, 439u, depth + 1u); else { c.pc = 0x0012FA58u; return; } if (c.pc != 0x0012F200u) [[unlikely]] return; }
L_0012F200:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012F28C; } }
L_0012F208:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[18].w[0] + 8u), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F220u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012F220u) [[unlikely]] return; }
L_0012F220:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F238u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012F238u) [[unlikely]] return; }
L_0012F238:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], 0u + 15u);
    set32(c.r[2], 0u + 10u);
    set32(c.r[3], c.r[16].w[0] << 3);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    st32((c.r[18].w[0] + 24u), c.r[16].w[0]);
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x0012F254u);  goto L_0012F258; }
L_0012F258:
    set32(c.r[2], c.r[18].w[0] + 1072u);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[18].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 4;
L_0012F268:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 64u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012F268u | kUnwind; return; } goto L_0012F268; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0012F28C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F294u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 437u, depth + 1u); else { c.pc = 0x0012FA30u; return; } if (c.pc != 0x0012F294u) [[unlikely]] return; }
L_0012F294:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0012F298:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0012F2B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_0012F2F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F2CCu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 435u, depth + 1u); else { c.pc = 0x0012FA10u; return; } if (c.pc != 0x0012F2CCu) [[unlikely]] return; }
L_0012F2CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F2D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 397u, depth + 1u); else { c.pc = 0x0012F578u; return; } if (c.pc != 0x0012F2D4u) [[unlikely]] return; }
L_0012F2D4:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1080u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F2E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0012F2E8u) [[unlikely]] return; }
L_0012F2E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F2F0u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 437u, depth + 1u); else { c.pc = 0x0012FA30u; return; } if (c.pc != 0x0012F2F0u) [[unlikely]] return; }
L_0012F2F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012F300:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F32Cu); set32(c.r[5], ld32((c.r[19].w[0] + 8u)));  if (depth < kMaxDepth) unit_0009(c, 333u, depth + 1u); else { c.pc = 0x00125EB8u; return; } if (c.pc != 0x0012F32Cu) [[unlikely]] return; }
L_0012F32C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0012F344; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F344u); set32(c.r[4], c.r[4].w[0] + 18016u);  if (depth < kMaxDepth) unit_000B(c, 439u, depth + 1u); else { c.pc = 0x0012FA58u; return; } if (c.pc != 0x0012F344u) [[unlikely]] return; }
L_0012F344:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F34Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 388u, depth + 1u); else { c.pc = 0x00126560u; return; } if (c.pc != 0x0012F34Cu) [[unlikely]] return; }
L_0012F34C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[16].w[0] + 2047u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[16], c.r[16].w[0] + 4094u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F370u); set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 11));  if (depth < kMaxDepth) unit_0009(c, 341u, depth + 1u); else { c.pc = 0x00125F80u; return; } if (c.pc != 0x0012F370u) [[unlikely]] return; }
L_0012F370:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F388u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 388u, depth + 1u); else { c.pc = 0x0012F3A8u; return; } if (c.pc != 0x0012F388u) [[unlikely]] return; }
L_0012F388:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0012F3A8:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.budget -= 14;
    { const bool t = c.r[18].d[0] != 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_0012F3F4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F3ECu); set32(c.r[4], c.r[4].w[0] + 18048u);  if (depth < kMaxDepth) unit_000B(c, 439u, depth + 1u); else { c.pc = 0x0012FA58u; return; } if (c.pc != 0x0012F3ECu) [[unlikely]] return; }
L_0012F3EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0012F4DC; } }
L_0012F3F4:
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.r[2].d[0] = c.r[2].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0012F4DC; } }
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[16], ld32((c.r[18].w[0] + 28u)));  goto L_0012F424; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F41Cu); set32(c.r[4], c.r[4].w[0] + 18088u);  if (depth < kMaxDepth) unit_000B(c, 439u, depth + 1u); else { c.pc = 0x0012FA58u; return; } if (c.pc != 0x0012F41Cu) [[unlikely]] return; }
L_0012F41C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0012F4DC; } }
L_0012F424:
    set32(c.r[17], 0u - 1u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[6], 0u + 40u);
    set32(c.r[4], c.r[16].w[0] + 15u);
    set32(c.r[2], c.r[16].w[0] + 30u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    set32(c.r[16], c.r[16].w[0] << 6);
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    c.r[7].d[0] = c.r[7].d[0] | 65535ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[16], c.r[16].w[0] + 56u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[16], c.r[18].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 56u)));
    c.r[7].d[0] = c.r[3].d[0] ^ c.r[7].d[0];
    set32(c.r[19], c.r[3].w[0] + 1u);
    if (c.r[7].d[0] == 0) c.r[19].d[0] = 0ull;
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F480u); st32((c.r[16].w[0]), c.r[19].w[0]);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x0012F480u) [[unlikely]] return; }
L_0012F480:
    st32((c.r[16].w[0] + 48u), c.r[20].w[0]);
    set32(c.r[6], 0u + 1u);
    st32((c.r[16].w[0] + 52u), c.r[21].w[0]);
    st32((c.r[16].w[0] + 60u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 44u), c.r[22].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    c.r[17].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + 16u);
    if (c.r[17].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    st32((c.r[18].w[0] + 36u), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 20;
    { const bool t = c.r[5].d[0] != c.r[6].d[0]; st32((c.r[18].w[0] + 28u), c.r[3].w[0]);  if (t) { goto L_0012F4D8; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0012F4D8:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0012F4DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0012F508:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_0012F530; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F528u); set32(c.r[4], c.r[4].w[0] + 18048u);  if (depth < kMaxDepth) unit_000B(c, 439u, depth + 1u); else { c.pc = 0x0012FA58u; return; } if (c.pc != 0x0012F528u) [[unlikely]] return; }
L_0012F528:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0012F56C; } }
L_0012F530:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F538u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 435u, depth + 1u); else { c.pc = 0x0012FA10u; return; } if (c.pc != 0x0012F538u) [[unlikely]] return; }
L_0012F538:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_0012F550; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F54Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 397u, depth + 1u); else { c.pc = 0x0012F578u; return; } if (c.pc != 0x0012F54Cu) [[unlikely]] return; }
L_0012F54C:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_0012F550:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[2], 0u + 2u);  if (t) { goto L_0012F55C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0012F55C:
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F568u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 437u, depth + 1u); else { c.pc = 0x0012FA30u; return; } if (c.pc != 0x0012F568u) [[unlikely]] return; }
L_0012F568:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0012F56C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012F578:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_0012F5A0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F598u); set32(c.r[4], c.r[4].w[0] + 18048u);  if (depth < kMaxDepth) unit_000B(c, 439u, depth + 1u); else { c.pc = 0x0012FA58u; return; } if (c.pc != 0x0012F598u) [[unlikely]] return; }
L_0012F598:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0012F5FC; } }
L_0012F5A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F5A8u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 435u, depth + 1u); else { c.pc = 0x0012FA10u; return; } if (c.pc != 0x0012F5A8u) [[unlikely]] return; }
L_0012F5A8:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0012F5D8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0012F5CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F5C8u);  if (depth < kMaxDepth) unit_0009(c, 352u, depth + 1u); else { c.pc = 0x001260C8u; return; } if (c.pc != 0x0012F5C8u) [[unlikely]] return; }
L_0012F5C8:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0012F5CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F5D4u); set32(c.r[4], ld32((c.r[16].w[0] + 40u)));  if (depth < kMaxDepth) unit_0009(c, 341u, depth + 1u); else { c.pc = 0x00125F80u; return; } if (c.pc != 0x0012F5D4u) [[unlikely]] return; }
L_0012F5D4:
    st32((c.r[16].w[0] + 40u), 0u);
    c.budget -= 1;
L_0012F5D8:
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F5F8u); st32((c.r[16].w[0] + 52u), 0u);  if (depth < kMaxDepth) unit_000B(c, 437u, depth + 1u); else { c.pc = 0x0012FA30u; return; } if (c.pc != 0x0012F5F8u) [[unlikely]] return; }
L_0012F5F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0012F5FC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012F608:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0012F61C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { set32(c.r[4], c.r[4].w[0] + 18048u);  goto L_0012FA58; }
L_0012F61C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0012F62C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_0012F62C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0012F638:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F658u); set32(c.r[18], 0u + 1u);  if (depth < kMaxDepth) unit_000B(c, 435u, depth + 1u); else { c.pc = 0x0012FA10u; return; } if (c.pc != 0x0012F658u) [[unlikely]] return; }
L_0012F658:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[16], c.r[2].w[0] - 8272u);
    set32(c.r[17], c.r[16].w[0] + 8640u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 4;
L_0012F668:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[16], c.r[16].w[0] + 1080u);  goto L_0012F67C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F678u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 471u, depth + 1u); else { c.pc = 0x0012FF28u; return; } if (c.pc != 0x0012F678u) [[unlikely]] return; }
L_0012F678:
    set32(c.r[16], c.r[16].w[0] + 1080u);
    c.budget -= 1;
L_0012F67C:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012F668u | kUnwind; return; } goto L_0012F668; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F690u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 437u, depth + 1u); else { c.pc = 0x0012FA30u; return; } if (c.pc != 0x0012F690u) [[unlikely]] return; }
L_0012F690:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0012F6A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0012F6C8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F6C0u); set32(c.r[4], c.r[4].w[0] + 18048u);  if (depth < kMaxDepth) unit_000B(c, 439u, depth + 1u); else { c.pc = 0x0012FA58u; return; } if (c.pc != 0x0012F6C0u) [[unlikely]] return; }
L_0012F6C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0012F6CC; } }
L_0012F6C8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 1;
L_0012F6CC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012F6D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0012F6F8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F6F0u); set32(c.r[4], c.r[4].w[0] + 18048u);  if (depth < kMaxDepth) unit_000B(c, 439u, depth + 1u); else { c.pc = 0x0012FA58u; return; } if (c.pc != 0x0012F6F0u) [[unlikely]] return; }
L_0012F6F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0012F6FC; } }
L_0012F6F8:
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 1;
L_0012F6FC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012F708:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != 0ull; c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0012F730; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F728u); set32(c.r[4], c.r[4].w[0] + 18048u);  if (depth < kMaxDepth) unit_000B(c, 439u, depth + 1u); else { c.pc = 0x0012FA58u; return; } if (c.pc != 0x0012F728u) [[unlikely]] return; }
L_0012F728:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0012F78C; } }
L_0012F730:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] < 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0012F74C; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 36u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[7].w[0] + 32u)));  goto L_0012F760; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 1;
L_0012F74C:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F758u); set32(c.r[4], c.r[4].w[0] + 18128u);  if (depth < kMaxDepth) unit_000B(c, 439u, depth + 1u); else { c.pc = 0x0012FA58u; return; } if (c.pc != 0x0012F758u) [[unlikely]] return; }
L_0012F758:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0012F78C; } }
L_0012F760:
    set32(c.r[3], 0u - 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[5].w[0] + 15u);
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[4], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[5].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] << 6);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 56u)));
    c.budget -= 11;
L_0012F78C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012F798:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0012F7B8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F7B0u); set32(c.r[4], c.r[4].w[0] + 18048u);  if (depth < kMaxDepth) unit_000B(c, 439u, depth + 1u); else { c.pc = 0x0012FA58u; return; } if (c.pc != 0x0012F7B0u) [[unlikely]] return; }
L_0012F7B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012F814; } }
L_0012F7B8:
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0012F7E8; } }
    set32(c.r[3], c.r[4].w[0] + 56u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 3;
L_0012F7D0:
    c.r[2].d[0] = c.r[6].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 64u);  if (t) { goto L_0012F7E8; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012F7D0u | kUnwind; return; } goto L_0012F7D0; }
L_0012F7E8:
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[6].w[0] << 6);  if (t) { goto L_0012F808; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F800u); set32(c.r[4], c.r[4].w[0] + 18160u);  if (depth < kMaxDepth) unit_000B(c, 439u, depth + 1u); else { c.pc = 0x0012FA58u; return; } if (c.pc != 0x0012F800u) [[unlikely]] return; }
L_0012F800:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012F814; } }
L_0012F808:
    set32(c.r[2], c.r[2].w[0] + 56u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 3;
L_0012F814:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012F820:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0012F840; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F838u); set32(c.r[4], c.r[4].w[0] + 18048u);  if (depth < kMaxDepth) unit_000B(c, 439u, depth + 1u); else { c.pc = 0x0012FA58u; return; } if (c.pc != 0x0012F838u) [[unlikely]] return; }
L_0012F838:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0012F898; } }
L_0012F840:
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0012F870; } }
    set32(c.r[6], c.r[4].w[0] + 56u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
L_0012F858:
    c.r[2].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[6].w[0] + 64u);  if (t) { goto L_0012F870; } }
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[3], c.r[3].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012F858u | kUnwind; return; } goto L_0012F858; }
L_0012F870:
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[3], c.r[3].w[0] << 6);  if (t) { goto L_0012F890; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F888u); set32(c.r[4], c.r[4].w[0] + 18160u);  if (depth < kMaxDepth) unit_000B(c, 439u, depth + 1u); else { c.pc = 0x0012FA58u; return; } if (c.pc != 0x0012F888u) [[unlikely]] return; }
L_0012F888:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0012F898; } }
L_0012F890:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 112u)));
    c.budget -= 2;
L_0012F898:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012F8A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0012F8C8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F8C0u); set32(c.r[4], c.r[4].w[0] + 18048u);  if (depth < kMaxDepth) unit_000B(c, 439u, depth + 1u); else { c.pc = 0x0012FA58u; return; } if (c.pc != 0x0012F8C0u) [[unlikely]] return; }
L_0012F8C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012F920; } }
L_0012F8C8:
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0012F8F8; } }
    set32(c.r[6], c.r[4].w[0] + 56u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
L_0012F8E0:
    c.r[2].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[6].w[0] + 64u);  if (t) { goto L_0012F8F8; } }
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[3], c.r[3].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012F8E0u | kUnwind; return; } goto L_0012F8E0; }
L_0012F8F8:
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[3], c.r[3].w[0] << 6);  if (t) { goto L_0012F918; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F910u); set32(c.r[4], c.r[4].w[0] + 18160u);  if (depth < kMaxDepth) unit_000B(c, 439u, depth + 1u); else { c.pc = 0x0012FA58u; return; } if (c.pc != 0x0012F910u) [[unlikely]] return; }
L_0012F910:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012F920; } }
L_0012F918:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 2;
L_0012F920:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012F930:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0012F944; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { set32(c.r[4], c.r[4].w[0] + 18048u);  goto L_0012FA58; }
L_0012F944:
    c.budget -= 2;
    if (c.r[5].sd[0] < 0) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  goto L_0012F960; }
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012F968; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 1;
L_0012F960:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] + 18200u);  goto L_0012FA58; }
L_0012F968:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 20u), c.r[5].w[0]);  c.pc = t; return; }
L_0012F970:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0012F990; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F988u); set32(c.r[4], c.r[4].w[0] + 18048u);  if (depth < kMaxDepth) unit_000B(c, 439u, depth + 1u); else { c.pc = 0x0012FA58u; return; } if (c.pc != 0x0012F988u) [[unlikely]] return; }
L_0012F988:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0012F994; } }
L_0012F990:
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 1;
L_0012F994:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012F9A0:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { st32((c.r[28].w[0] - 32188u), c.r[4].w[0]);  goto L_0012F9B8; }
    st32((c.r[28].w[0] - 32188u), 0u);
    st32((c.r[28].w[0] - 32184u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 32180u), 0u);  c.pc = t; return; }
L_0012F9B8:
    st32((c.r[28].w[0] - 32184u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 32180u), c.r[6].w[0]);  c.pc = t; return; }
L_0012F9C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], ld32((c.r[28].w[0] - 32188u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0012F9E4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 32184u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012F9E4u); set32(c.r[5], ld32((c.r[28].w[0] - 32180u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012F9E4u) [[unlikely]] return; }
L_0012F9E4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012F9F0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0012FA04; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { set32(c.r[4], c.r[4].w[0] + 18048u);  goto L_0012FA58; }
L_0012FA04:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_0012FA10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FA20u);  if (depth < kMaxDepth) unit_000C(c, 169u, depth + 1u); else { c.pc = 0x001311E0u; return; } if (c.pc != 0x0012FA20u) [[unlikely]] return; }
L_0012FA20:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012FA30:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_000C(c, 170u, depth); }
L_0012FA38:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { st32((c.r[28].w[0] - 32176u), c.r[4].w[0]);  goto L_0012FA4C; }
    st32((c.r[28].w[0] - 32176u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 32172u), 0u);  c.pc = t; return; }
L_0012FA4C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 32172u), c.r[5].w[0]);  c.pc = t; return; }
L_0012FA58:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[5].d[0]);
    set32(c.r[16], c.r[2].w[0] - 8544u);
    st64((c.r[29].w[0] + 112u), c.r[6].d[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 120u), c.r[7].d[0]);
    set32(c.r[6], c.r[29].w[0] + 104u);
    st64((c.r[29].w[0] + 128u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 136u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[10].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FA98u); st64((c.r[29].w[0] + 152u), c.r[11].d[0]);  if (depth < kMaxDepth) unit_0006(c, 193u, depth + 1u); else { c.pc = 0x0011AAD8u; return; } if (c.pc != 0x0012FA98u) [[unlikely]] return; }
L_0012FA98:
    set32(c.r[2], ld32((c.r[28].w[0] - 32176u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 32172u)));  if (t) { goto L_0012FAAC; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FAACu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012FAACu) [[unlikely]] return; }
L_0012FAAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0012FAC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012FAC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012FAD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FAE0u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 435u, depth + 1u); else { c.pc = 0x0012FA10u; return; } if (c.pc != 0x0012FAE0u) [[unlikely]] return; }
L_0012FAE0:
    set32(c.r[2], ld32((c.r[28].w[0] - 32164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { goto L_0012FB1C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 8272u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FB00u); set32(c.r[6], 0u + 8640u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0012FB00u) [[unlikely]] return; }
L_0012FB00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FB08u);  if (depth < kMaxDepth) unit_000B(c, 442u, depth + 1u); else { c.pc = 0x0012FAC0u; return; } if (c.pc != 0x0012FB08u) [[unlikely]] return; }
L_0012FB08:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FB14u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 438u, depth + 1u); else { c.pc = 0x0012FA38u; return; } if (c.pc != 0x0012FB14u) [[unlikely]] return; }
L_0012FB14:
    set32(c.r[2], ld32((c.r[28].w[0] - 32164u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 2;
L_0012FB1C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FB28u); st32((c.r[28].w[0] - 32164u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 437u, depth + 1u); else { c.pc = 0x0012FA30u; return; } if (c.pc != 0x0012FB28u) [[unlikely]] return; }
L_0012FB28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012FB38:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FB58u); st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_000B(c, 435u, depth + 1u); else { c.pc = 0x0012FA10u; return; } if (c.pc != 0x0012FB58u) [[unlikely]] return; }
L_0012FB58:
    set32(c.r[2], ld32((c.r[28].w[0] - 32164u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[28].w[0] - 32164u), c.r[2].w[0]);  if (t) { goto L_0012FBC4; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[18], 0u + 1u);
    set32(c.r[16], c.r[19].w[0] - 8272u);
    set32(c.r[17], c.r[16].w[0] + 8640u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 6;
L_0012FB80:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[16], c.r[16].w[0] + 1080u);  goto L_0012FB94; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FB90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 377u, depth + 1u); else { c.pc = 0x0012F2B0u; return; } if (c.pc != 0x0012FB90u) [[unlikely]] return; }
L_0012FB90:
    set32(c.r[16], c.r[16].w[0] + 1080u);
    c.budget -= 1;
L_0012FB94:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012FB80u | kUnwind; return; } goto L_0012FB80; }
    set32(c.r[4], c.r[19].w[0] - 8272u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FBB0u); set32(c.r[6], 0u + 8640u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0012FBB0u) [[unlikely]] return; }
L_0012FBB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FBB8u);  if (depth < kMaxDepth) unit_000B(c, 443u, depth + 1u); else { c.pc = 0x0012FAC8u; return; } if (c.pc != 0x0012FBB8u) [[unlikely]] return; }
L_0012FBB8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FBC4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 438u, depth + 1u); else { c.pc = 0x0012FA38u; return; } if (c.pc != 0x0012FBC4u) [[unlikely]] return; }
L_0012FBC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FBCCu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 437u, depth + 1u); else { c.pc = 0x0012FA30u; return; } if (c.pc != 0x0012FBCCu) [[unlikely]] return; }
L_0012FBCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0012FBE8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + 56u);
    c.budget -= 12;
    { const bool t = c.r[5].sd[0] <= 0; set32(c.r[17], c.r[16].w[0] + c.r[2].w[0]);  if (t) { goto L_0012FCC8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));  goto L_0012FC88; }
    set32(c.r[18], c.r[17].w[0] + 4u);
    set32(c.r[5], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 48u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FC40u); set32(c.r[8], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_0009(c, 321u, depth + 1u); else { c.pc = 0x00125D60u; return; } if (c.pc != 0x0012FC40u) [[unlikely]] return; }
L_0012FC40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 40u), c.r[2].w[0]);  if (t) { goto L_0012FC58; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FC58u); set32(c.r[4], c.r[4].w[0] + 18280u);  if (depth < kMaxDepth) unit_000B(c, 439u, depth + 1u); else { c.pc = 0x0012FA58u; return; } if (c.pc != 0x0012FC58u) [[unlikely]] return; }
L_0012FC58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FC60u); set32(c.r[4], ld32((c.r[16].w[0] + 40u)));  if (depth < kMaxDepth) unit_0009(c, 388u, depth + 1u); else { c.pc = 0x00126560u; return; } if (c.pc != 0x0012FC60u) [[unlikely]] return; }
L_0012FC60:
    set32(c.r[4], c.r[2].w[0] + 2047u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + 4094u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 11));
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 60u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 10;
L_0012FC88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0012FCC0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FCA0u); set32(c.r[6], ld32((c.r[16].w[0] + 24u)));  if (depth < kMaxDepth) unit_0009(c, 385u, depth + 1u); else { c.pc = 0x00126538u; return; } if (c.pc != 0x0012FCA0u) [[unlikely]] return; }
L_0012FCA0:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FCACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 345u, depth + 1u); else { c.pc = 0x00125FE0u; return; } if (c.pc != 0x0012FCACu) [[unlikely]] return; }
L_0012FCAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FCB4u); set32(c.r[4], ld32((c.r[16].w[0] + 40u)));  if (depth < kMaxDepth) unit_0009(c, 350u, depth + 1u); else { c.pc = 0x00126068u; return; } if (c.pc != 0x0012FCB4u) [[unlikely]] return; }
L_0012FCB4:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
L_0012FCC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_0012FCF0; } }
L_0012FCC8:
    set32(c.r[6], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0012FCF4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[4], c.r[4].w[0] + 18312u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012FA58u | kUnwind; return; } goto L_0012FA58; }
L_0012FCF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0012FCF4:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0012FD08:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 8;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 32u)));  goto L_0012FD44; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[4], c.r[4].w[0] + 18360u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012FA58u | kUnwind; return; } goto L_0012FA58; }
L_0012FD44:
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FD54u); set32(c.r[17], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 344u, depth + 1u); else { c.pc = 0x00125FD8u; return; } if (c.pc != 0x0012FD54u) [[unlikely]] return; }
L_0012FD54:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_0012FD70; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0012FD9C; } }
L_0012FD70:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_0012FD88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FD80u); set32(c.r[4], ld32((c.r[16].w[0] + 40u)));  if (depth < kMaxDepth) unit_0009(c, 348u, depth + 1u); else { c.pc = 0x00126028u; return; } if (c.pc != 0x0012FD80u) [[unlikely]] return; }
L_0012FD80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_0012FD9C; } }
L_0012FD88:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0012FDA0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    st32((c.r[17].w[0] + 56u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 3;
L_0012FD9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0012FDA0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012FDB0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0012FF08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FDECu); set32(c.r[17], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 341u, depth + 1u); else { c.pc = 0x00125F80u; return; } if (c.pc != 0x0012FDECu) [[unlikely]] return; }
L_0012FDEC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; st32((c.r[16].w[0] + 40u), 0u);  if (t) { goto L_0012FE84; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + 56u);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[7], c.r[3].w[0] - 15744u);
    ldl(c.r[4], (c.r[2].w[0] + 11u));
    ldr(c.r[4], (c.r[2].w[0] + 4u));
    ldl(c.r[5], (c.r[2].w[0] + 19u));
    ldr(c.r[5], (c.r[2].w[0] + 12u));
    ldl(c.r[6], (c.r[2].w[0] + 27u));
    ldr(c.r[6], (c.r[2].w[0] + 20u));
    sdl(c.r[4], (c.r[7].w[0] + 7u));
    sdr(c.r[4], (c.r[7].w[0]));
    sdl(c.r[5], (c.r[7].w[0] + 15u));
    sdr(c.r[5], (c.r[7].w[0] + 8u));
    sdl(c.r[6], (c.r[7].w[0] + 23u));
    sdr(c.r[6], (c.r[7].w[0] + 16u));
    ldl(c.r[4], (c.r[2].w[0] + 35u));
    ldr(c.r[4], (c.r[2].w[0] + 28u));
    lwl(c.r[5], (c.r[2].w[0] + 39u));
    lwr(c.r[5], (c.r[2].w[0] + 36u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 40u)));
    sdl(c.r[4], (c.r[7].w[0] + 31u));
    sdr(c.r[4], (c.r[7].w[0] + 24u));
    swl(c.r[5], (c.r[7].w[0] + 35u));
    swr(c.r[5], (c.r[7].w[0] + 32u));
    st8((c.r[7].w[0] + 36u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 41u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 42u)));
    st8((c.r[7].w[0] + 37u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[7].w[0] + 38u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[20], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[19], ld32((c.r[2].w[0] + 44u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 35;
L_0012FE84:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[4], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + 16u);
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    st32((c.r[16].w[0] + 36u), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] - c.r[2].w[0]);
    c.budget -= 14;
    { const bool t = c.r[5].sd[0] > 0; st32((c.r[16].w[0] + 32u), c.r[4].w[0]);  if (t) { goto L_0012FEC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FEC4u);  if (depth < kMaxDepth) unit_000B(c, 432u, depth + 1u); else { c.pc = 0x0012F9C8u; return; } if (c.pc != 0x0012FEC4u) [[unlikely]] return; }
L_0012FEC4:
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 1;
L_0012FEC8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0012FF0C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[5], c.r[5].w[0] - 15744u);
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 13;
    { set32(c.r[29], c.r[29].w[0] + 96u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012F3A8u | kUnwind; return; } goto L_0012F3A8; }
L_0012FF08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0012FF0C:
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0012FF28:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0012FFD8; } }
    c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0012FFDC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[17], c.r[16].w[0] + 112u);  if (t) { goto L_0012FFDC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], c.r[4].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[2], c.r[4].w[0] << 6);  if (t) { goto L_0012FF90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FF88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 465u, depth + 1u); else { c.pc = 0x0012FD08u; return; } if (c.pc != 0x0012FF88u) [[unlikely]] return; }
L_0012FF88:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], c.r[4].w[0] << 6);
    c.budget -= 2;
L_0012FF90:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[18].d[0]; set32(c.r[2], c.r[4].w[0] << 6);  if (t) { goto L_0012FFB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012FFA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 468u, depth + 1u); else { c.pc = 0x0012FDB0u; return; } if (c.pc != 0x0012FFA8u) [[unlikely]] return; }
L_0012FFA8:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], c.r[4].w[0] << 6);
    c.budget -= 2;
L_0012FFB0:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0012FFDC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012FBE8u | kUnwind; return; } goto L_0012FBE8; }
L_0012FFD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0012FFDC:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0012FFF0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], ld32((c.r[28].w[0] - 32148u)));
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.budget -= 4;
    [[clang::musttail]] return unit_000C(c, 1u, depth);
}

}
