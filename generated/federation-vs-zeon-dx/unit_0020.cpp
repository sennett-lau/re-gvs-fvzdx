#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0020[4096] = {
    1, 0, 0, 0, 0, 2, 3, 4, 5, 6, 7, 0, 8, 0, 9, 0, 10, 0, 0, 11, 12, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0,
    15, 0, 0, 0, 16, 0, 17, 0, 18, 19, 0, 0, 0, 0, 20, 0, 21, 0, 22, 0, 0, 0, 0, 23, 24, 0, 0, 25, 26, 0, 0, 0,
    27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0,
    33, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 36, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 60,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0,
    82, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    95, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 106, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 109, 0, 0, 0, 0, 0, 0,
    0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 113, 0, 114, 0, 0, 0, 0, 115, 0,
    0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0,
    131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 135, 0, 0, 0, 0, 0, 0,
    136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 138,
    0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0,
    0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 161, 0, 0, 162, 0, 0, 0,
    0, 0, 0, 0, 0, 163, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 166, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    180, 0, 0, 0, 0, 181, 0, 182, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 185,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0,
    200, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 203, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0,
    207, 0, 0, 208, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0,
    211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0,
    217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0,
    0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0,
    243, 0, 244, 0, 0, 245, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0,
    248, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 251, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0,
    254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0,
    259, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0,
    264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 270, 0, 271, 0, 272, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 278, 0,
    279, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 287, 0, 0, 0, 0, 0, 0, 0, 288,
    0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 296, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 300, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 0, 305, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0,
    308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 310, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 314, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 324, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 326, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    328, 0, 0, 329, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 335, 0,
    0, 0, 336, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 340, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 344, 0, 345,
    0, 0, 0, 346, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0,
    352, 0, 0, 0, 353, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 357, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 363, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0,
    0, 366, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0,
};

void unit_0020(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00180000;
    case 2u: goto L_00180014;
    case 3u: goto L_00180018;
    case 4u: goto L_0018001C;
    case 5u: goto L_00180020;
    case 6u: goto L_00180024;
    case 7u: goto L_00180028;
    case 8u: goto L_00180030;
    case 9u: goto L_00180038;
    case 10u: goto L_00180040;
    case 11u: goto L_0018004C;
    case 12u: goto L_00180050;
    case 13u: goto L_00180060;
    case 14u: goto L_00180070;
    case 15u: goto L_00180080;
    case 16u: goto L_00180090;
    case 17u: goto L_00180098;
    case 18u: goto L_001800A0;
    case 19u: goto L_001800A4;
    case 20u: goto L_001800B8;
    case 21u: goto L_001800C0;
    case 22u: goto L_001800C8;
    case 23u: goto L_001800DC;
    case 24u: goto L_001800E0;
    case 25u: goto L_001800EC;
    case 26u: goto L_001800F0;
    case 27u: goto L_00180100;
    case 28u: goto L_00180120;
    case 29u: goto L_0018013C;
    case 30u: goto L_00180140;
    case 31u: goto L_00180160;
    case 32u: goto L_00180170;
    case 33u: goto L_00180180;
    case 34u: goto L_00180194;
    case 35u: goto L_001801A0;
    case 36u: goto L_001801B4;
    case 37u: goto L_001801B8;
    case 38u: goto L_00180200;
    case 39u: goto L_00180234;
    case 40u: goto L_0018028C;
    case 41u: goto L_001802D0;
    case 42u: goto L_00180310;
    case 43u: goto L_0018039C;
    case 44u: goto L_001803E0;
    case 45u: goto L_001803F0;
    case 46u: goto L_00180438;
    case 47u: goto L_00180450;
    case 48u: goto L_00180480;
    case 49u: goto L_0018049C;
    case 50u: goto L_001804A8;
    case 51u: goto L_001804E4;
    case 52u: goto L_00180518;
    case 53u: goto L_00180520;
    case 54u: goto L_0018055C;
    case 55u: goto L_0018058C;
    case 56u: goto L_001805BC;
    case 57u: goto L_001805C4;
    case 58u: goto L_001805F8;
    case 59u: goto L_00180674;
    case 60u: goto L_0018067C;
    case 61u: goto L_001806A8;
    case 62u: goto L_001806B4;
    case 63u: goto L_001806BC;
    case 64u: goto L_001806D8;
    case 65u: goto L_0018074C;
    case 66u: goto L_0018078C;
    case 67u: goto L_001807A4;
    case 68u: goto L_001807E0;
    case 69u: goto L_001807F4;
    case 70u: goto L_00180878;
    case 71u: goto L_0018090C;
    case 72u: goto L_0018094C;
    case 73u: goto L_00180954;
    case 74u: goto L_00180988;
    case 75u: goto L_001809AC;
    case 76u: goto L_00180A54;
    case 77u: goto L_00180A58;
    case 78u: goto L_00180A70;
    case 79u: goto L_00180AA0;
    case 80u: goto L_00180B50;
    case 81u: goto L_00180B60;
    case 82u: goto L_00180B80;
    case 83u: goto L_00180BA4;
    case 84u: goto L_00180BD0;
    case 85u: goto L_00180C20;
    case 86u: goto L_00180C50;
    case 87u: goto L_00180C80;
    case 88u: goto L_00180CE4;
    case 89u: goto L_00180D0C;
    case 90u: goto L_00180D14;
    case 91u: goto L_00180D44;
    case 92u: goto L_00180D54;
    case 93u: goto L_00180DB4;
    case 94u: goto L_00180DC0;
    case 95u: goto L_00180E00;
    case 96u: goto L_00180E08;
    case 97u: goto L_00180E58;
    case 98u: goto L_00180EA8;
    case 99u: goto L_00180EB8;
    case 100u: goto L_00180ED8;
    case 101u: goto L_00180F28;
    case 102u: goto L_00180F40;
    case 103u: goto L_00180F74;
    case 104u: goto L_00180FA0;
    case 105u: goto L_00180FB0;
    case 106u: goto L_00180FB8;
    case 107u: goto L_00180FC0;
    case 108u: goto L_00180FDC;
    case 109u: goto L_00180FE4;
    case 110u: goto L_00181004;
    case 111u: goto L_0018104C;
    case 112u: goto L_001810D4;
    case 113u: goto L_001810DC;
    case 114u: goto L_001810E4;
    case 115u: goto L_001810F8;
    case 116u: goto L_00181118;
    case 117u: goto L_00181130;
    case 118u: goto L_00181164;
    case 119u: goto L_00181178;
    case 120u: goto L_001811B8;
    case 121u: goto L_001811E0;
    case 122u: goto L_001811E8;
    case 123u: goto L_00181228;
    case 124u: goto L_00181258;
    case 125u: goto L_00181288;
    case 126u: goto L_00181290;
    case 127u: goto L_001812C4;
    case 128u: goto L_001812CC;
    case 129u: goto L_001812D4;
    case 130u: goto L_00181378;
    case 131u: goto L_00181380;
    case 132u: goto L_001813AC;
    case 133u: goto L_001813C8;
    case 134u: goto L_001813DC;
    case 135u: goto L_001813E4;
    case 136u: goto L_00181400;
    case 137u: goto L_00181474;
    case 138u: goto L_0018147C;
    case 139u: goto L_00181488;
    case 140u: goto L_001814E0;
    case 141u: goto L_0018151C;
    case 142u: goto L_00181538;
    case 143u: goto L_00181540;
    case 144u: goto L_00181580;
    case 145u: goto L_001815C0;
    case 146u: goto L_001815F4;
    case 147u: goto L_00181624;
    case 148u: goto L_00181634;
    case 149u: goto L_00181680;
    case 150u: goto L_001816A4;
    case 151u: goto L_00181710;
    case 152u: goto L_00181740;
    case 153u: goto L_00181774;
    case 154u: goto L_00181788;
    case 155u: goto L_001817B0;
    case 156u: goto L_001817D8;
    case 157u: goto L_001817F0;
    case 158u: goto L_00181818;
    case 159u: goto L_0018182C;
    case 160u: goto L_0018185C;
    case 161u: goto L_00181864;
    case 162u: goto L_00181870;
    case 163u: goto L_00181894;
    case 164u: goto L_0018189C;
    case 165u: goto L_001818B0;
    case 166u: goto L_00181908;
    case 167u: goto L_00181910;
    case 168u: goto L_00181918;
    case 169u: goto L_00181944;
    case 170u: goto L_0018194C;
    case 171u: goto L_001819B8;
    case 172u: goto L_001819C0;
    case 173u: goto L_001819EC;
    case 174u: goto L_00181A40;
    case 175u: goto L_00181AA8;
    case 176u: goto L_00181AB0;
    case 177u: goto L_00181B54;
    case 178u: goto L_00181B74;
    case 179u: goto L_00181C30;
    case 180u: goto L_00181D00;
    case 181u: goto L_00181D14;
    case 182u: goto L_00181D1C;
    case 183u: goto L_00181D28;
    case 184u: goto L_00181D74;
    case 185u: goto L_00181D7C;
    case 186u: goto L_00181E10;
    case 187u: goto L_00181E5C;
    case 188u: goto L_00181EA0;
    case 189u: goto L_00181F20;
    case 190u: goto L_00181F30;
    case 191u: goto L_00181F40;
    case 192u: goto L_00181F50;
    case 193u: goto L_00181F60;
    case 194u: goto L_00181F7C;
    case 195u: goto L_00181FA4;
    case 196u: goto L_00181FB0;
    case 197u: goto L_00181FC0;
    case 198u: goto L_00181FE4;
    case 199u: goto L_00181FF0;
    case 200u: goto L_00182000;
    case 201u: goto L_00182024;
    case 202u: goto L_00182030;
    case 203u: goto L_0018203C;
    case 204u: goto L_00182040;
    case 205u: goto L_00182068;
    case 206u: goto L_00182078;
    case 207u: goto L_00182080;
    case 208u: goto L_0018208C;
    case 209u: goto L_00182094;
    case 210u: goto L_001820E4;
    case 211u: goto L_00182100;
    case 212u: goto L_00182140;
    case 213u: goto L_00182148;
    case 214u: goto L_001821A0;
    case 215u: goto L_001821A8;
    case 216u: goto L_001821F8;
    case 217u: goto L_00182200;
    case 218u: goto L_00182234;
    case 219u: goto L_0018223C;
    case 220u: goto L_001822D0;
    case 221u: goto L_00182304;
    case 222u: goto L_00182348;
    case 223u: goto L_001823F0;
    case 224u: goto L_00182420;
    case 225u: goto L_00182518;
    case 226u: goto L_0018252C;
    case 227u: goto L_00182540;
    case 228u: goto L_00182650;
    case 229u: goto L_00182674;
    case 230u: goto L_00182688;
    case 231u: goto L_0018269C;
    case 232u: goto L_001826B0;
    case 233u: goto L_001826C4;
    case 234u: goto L_001826D4;
    case 235u: goto L_001826E8;
    case 236u: goto L_00182720;
    case 237u: goto L_00182740;
    case 238u: goto L_00182770;
    case 239u: goto L_0018279C;
    case 240u: goto L_001827C0;
    case 241u: goto L_001827D0;
    case 242u: goto L_001827F4;
    case 243u: goto L_00182800;
    case 244u: goto L_00182808;
    case 245u: goto L_00182814;
    case 246u: goto L_00182830;
    case 247u: goto L_00182864;
    case 248u: goto L_00182880;
    case 249u: goto L_001828A0;
    case 250u: goto L_001828BC;
    case 251u: goto L_001828C4;
    case 252u: goto L_001828CC;
    case 253u: goto L_001828DC;
    case 254u: goto L_00182900;
    case 255u: goto L_0018291C;
    case 256u: goto L_00182934;
    case 257u: goto L_00182958;
    case 258u: goto L_00182970;
    case 259u: goto L_00182980;
    case 260u: goto L_00182990;
    case 261u: goto L_001829B4;
    case 262u: goto L_001829D0;
    case 263u: goto L_001829E8;
    case 264u: goto L_00182A00;
    case 265u: goto L_00182A10;
    case 266u: goto L_00182A28;
    case 267u: goto L_00182A38;
    case 268u: goto L_00182A70;
    case 269u: goto L_00182AAC;
    case 270u: goto L_00182AB4;
    case 271u: goto L_00182ABC;
    case 272u: goto L_00182AC4;
    case 273u: goto L_00182AD0;
    case 274u: goto L_00182ADC;
    case 275u: goto L_00182AF0;
    case 276u: goto L_00182BA0;
    case 277u: goto L_00182BF0;
    case 278u: goto L_00182BF8;
    case 279u: goto L_00182C00;
    case 280u: goto L_00182C10;
    case 281u: goto L_00182C20;
    case 282u: goto L_00182C30;
    case 283u: goto L_00182C54;
    case 284u: goto L_00182C70;
    case 285u: goto L_00182CA8;
    case 286u: goto L_00182CD4;
    case 287u: goto L_00182CDC;
    case 288u: goto L_00182CFC;
    case 289u: goto L_00182D20;
    case 290u: goto L_00182D28;
    case 291u: goto L_00182D58;
    case 292u: goto L_00182D70;
    case 293u: goto L_00182DA0;
    case 294u: goto L_00182DA8;
    case 295u: goto L_00182DD8;
    case 296u: goto L_00182DE0;
    case 297u: goto L_00182E34;
    case 298u: goto L_00182F0C;
    case 299u: goto L_00182FB4;
    case 300u: goto L_00182FBC;
    case 301u: goto L_00182FC4;
    case 302u: goto L_00182FE0;
    case 303u: goto L_00183018;
    case 304u: goto L_00183034;
    case 305u: goto L_00183040;
    case 306u: goto L_0018305C;
    case 307u: goto L_0018306C;
    case 308u: goto L_00183080;
    case 309u: goto L_001830A0;
    case 310u: goto L_001830A8;
    case 311u: goto L_001830C4;
    case 312u: goto L_001830F4;
    case 313u: goto L_0018314C;
    case 314u: goto L_00183204;
    case 315u: goto L_00183220;
    case 316u: goto L_00183268;
    case 317u: goto L_00183310;
    case 318u: goto L_001833A8;
    case 319u: goto L_001833C8;
    case 320u: goto L_00183640;
    case 321u: goto L_00183650;
    case 322u: goto L_00183698;
    case 323u: goto L_001837C0;
    case 324u: goto L_00183804;
    case 325u: goto L_00183820;
    case 326u: goto L_00183840;
    case 327u: goto L_00183844;
    case 328u: goto L_00183880;
    case 329u: goto L_0018388C;
    case 330u: goto L_00183898;
    case 331u: goto L_001838C8;
    case 332u: goto L_001838D0;
    case 333u: goto L_00183920;
    case 334u: goto L_00183958;
    case 335u: goto L_00183978;
    case 336u: goto L_00183988;
    case 337u: goto L_00183990;
    case 338u: goto L_001839C4;
    case 339u: goto L_001839E8;
    case 340u: goto L_001839F0;
    case 341u: goto L_00183A3C;
    case 342u: goto L_00183A44;
    case 343u: goto L_00183AD8;
    case 344u: goto L_00183AF4;
    case 345u: goto L_00183AFC;
    case 346u: goto L_00183B0C;
    case 347u: goto L_00183B14;
    case 348u: goto L_00183B44;
    case 349u: goto L_00183B64;
    case 350u: goto L_00183BB8;
    case 351u: goto L_00183BE8;
    case 352u: goto L_00183C00;
    case 353u: goto L_00183C10;
    case 354u: goto L_00183C18;
    case 355u: goto L_00183C4C;
    case 356u: goto L_00183C70;
    case 357u: goto L_00183C78;
    case 358u: goto L_00183CC4;
    case 359u: goto L_00183CCC;
    case 360u: goto L_00183D40;
    case 361u: goto L_00183D90;
    case 362u: goto L_00183DE8;
    case 363u: goto L_00183DF0;
    case 364u: goto L_00183E50;
    case 365u: goto L_00183E60;
    case 366u: goto L_00183E84;
    case 367u: goto L_00183E90;
    case 368u: goto L_00183F40;
    case 369u: goto L_00183FC0;
    case 370u: goto L_00183FEC;
    default: bad_entry(c, 0x00180000u); return;
    }
L_00180000:
    st8((c.r[1].w[0] + 18542u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18543u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_00180014:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 1;
L_00180018:
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0018001C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 1;
L_00180020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180028u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 64u, depth + 1u); else { c.pc = 0x00184D30u; return; } if (c.pc != 0x00180028u) [[unlikely]] return; }
    goto L_00180028;
L_00180024:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 140u)));
    c.budget -= 1;
L_00180028:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00180A54; } }
L_00180030:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180038u);  if (depth < kMaxDepth) unit_0093(c, 300u, depth + 1u); else { c.pc = 0x0034FD20u; return; } if (c.pc != 0x00180038u) [[unlikely]] return; }
L_00180038:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00180A54; } }
L_00180040:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
L_0018004C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 188u)));
    c.budget -= 1;
L_00180050:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st8((c.r[2].w[0] + 129u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0018006C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 77u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00180060:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00180084; } }
L_0018006C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 1;
L_00180070:
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u + 3u);
    st8((c.r[2].w[0] + 77u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 4;
L_00180080:
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00180084:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
L_00180090:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00180A54; } }
L_00180098:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001800A4u); st8((c.r[2].w[0] + 54u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0022(c, 182u, depth + 1u); else { c.pc = 0x0018AA50u; return; } if (c.pc != 0x001800A4u) [[unlikely]] return; }
    goto L_001800A4;
L_001800A0:
    st8((c.r[2].w[0] + 54u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001800A4:
    set32(c.r[6], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[2], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0018020C; } }
L_001800B8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0018018C; } }
    goto L_001800C4;
L_001800C0:
    c.budget -= 1;
L_001800C4:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_001800C8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00180134; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001800E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00180A54; } }
    goto L_001800E0;
L_001800DC:
    c.budget -= 1;
L_001800E0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 129u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001800ECu); c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 130u)));  if (depth < kMaxDepth) unit_0022(c, 180u, depth + 1u); else { c.pc = 0x0018A9C0u; return; } if (c.pc != 0x001800ECu) [[unlikely]] return; }
L_001800EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00180A54; } }
    goto L_001800F4;
L_001800F0:
    c.budget -= 1;
L_001800F4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 3;
L_00180100:
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00180A54; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 2;
L_00180120:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00180A54; } }
L_00180134:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018013Cu);  if (depth < kMaxDepth) unit_0022(c, 181u, depth + 1u); else { c.pc = 0x0018AA20u; return; } if (c.pc != 0x0018013Cu) [[unlikely]] return; }
L_0018013C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00180A54; } }
    goto L_00180144;
L_00180140:
    c.budget -= 1;
L_00180144:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 129u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 68u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_00180178; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 1;
L_00180160:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 31u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00180A54; } }
    goto L_00180174;
L_00180170:
    st8((c.r[2].w[0] + 31u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00180174:
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_00180178:
    st16((c.r[3].w[0] + 132u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 2;
L_00180180:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00180A54; } }
L_0018018C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180194u);  if (depth < kMaxDepth) unit_0022(c, 122u, depth + 1u); else { c.pc = 0x00189A90u; return; } if (c.pc != 0x00180194u) [[unlikely]] return; }
L_00180194:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00180A54; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 1;
L_001801A0:
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001801E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001801B4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0022(c, 153u, depth + 1u); else { c.pc = 0x0018A310u; return; } if (c.pc != 0x001801B4u) [[unlikely]] return; }
L_001801B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001801E0; } }
    goto L_001801BC;
L_001801B8:
    c.budget -= 1;
L_001801BC:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 4u);
    set32(c.r[3], 0u + 1u);
    st16((c.r[2].w[0] + 132u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 129u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 74u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001801FC; } }
L_001801E0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 5u);
    st16((c.r[2].w[0] + 132u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 129u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0] + 74u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
L_001801FC:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 1;
L_00180200:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00180A54; } }
L_0018020C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 13u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00180A54; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 132u)));
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00180A54; } }
L_00180234:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], c.r[2].w[0] + 2u);  if (t) { goto L_001803E8; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00180394; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00180308; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0018029C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00180278; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00180A54; } }
L_00180278:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[4], 0u + 64u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018028Cu); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x0018028Cu) [[unlikely]] return; }
L_0018028C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 60u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 132u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00180A54; } }
L_0018029C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18542u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18543u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001802D0u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 64u, depth + 1u); else { c.pc = 0x00184D30u; return; } if (c.pc != 0x001802D0u) [[unlikely]] return; }
L_001802D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00180A54; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 132u)));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] > 0; st16((c.r[4].w[0] + 132u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00180A54; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00180A54; } }
L_00180308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180310u);  if (depth < kMaxDepth) unit_0022(c, 131u, depth + 1u); else { c.pc = 0x00189D30u; return; } if (c.pc != 0x00180310u) [[unlikely]] return; }
L_00180310:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00180A54; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[3].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_00180348; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 76u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00180A54; } }
L_00180348:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[6], 0u + 4u);
    set32(c.r[5], 0u + 5u);
    set32(c.r[4], 0u + 1u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 180u);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 76u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st16((c.r[2].w[0] + 134u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 152u)));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 152u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00180A54; } }
L_00180394:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018039Cu);  if (depth < kMaxDepth) unit_0021(c, 253u, depth + 1u); else { c.pc = 0x00187A90u; return; } if (c.pc != 0x0018039Cu) [[unlikely]] return; }
L_0018039C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00180A54; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 180u);
    set32(c.r[4], 0u + 71u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 76u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st16((c.r[2].w[0] + 134u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001803E0u); st8((c.r[2].w[0] + 77u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x001803E0u) [[unlikely]] return; }
L_001803E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00180A54; } }
L_001803E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001803F0u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 64u, depth + 1u); else { c.pc = 0x00184D30u; return; } if (c.pc != 0x001803F0u) [[unlikely]] return; }
L_001803F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00180A54; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 134u)));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] > 0; st16((c.r[4].w[0] + 134u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00180A54; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00180A54; } }
L_00180438:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 77u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00180450; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180450u); st8((c.r[2].w[0] + 54u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0022(c, 182u, depth + 1u); else { c.pc = 0x0018AA50u; return; } if (c.pc != 0x00180450u) [[unlikely]] return; }
L_00180450:
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], c.r[4].w[0] + 2u);  if (t) { goto L_00180A54; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[3].w[0] + 21696u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00180000u < 16384u) { entry = entries_0020[(t - 0x00180000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00180480:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 129u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018049Cu); set32(c.r[4], c.r[2].w[0] + 62u);  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x0018049Cu) [[unlikely]] return; }
L_0018049C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001804A8u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 64u, depth + 1u); else { c.pc = 0x00184D30u; return; } if (c.pc != 0x001804A8u) [[unlikely]] return; }
L_001804A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00180A54; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 77u));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_00180510; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001804E4u); st8((c.r[3].w[0] + 61u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0022(c, 153u, depth + 1u); else { c.pc = 0x0018A310u; return; } if (c.pc != 0x001804E4u) [[unlikely]] return; }
L_001804E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001804FC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00180A54; } }
L_001804FC:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00180A54; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_00180510:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00180A54; } }
L_00180518:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180520u);  if (depth < kMaxDepth) unit_0022(c, 144u, depth + 1u); else { c.pc = 0x0018A0C0u; return; } if (c.pc != 0x00180520u) [[unlikely]] return; }
L_00180520:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00180A54; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00180540; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00180550; } }
L_00180540:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00180550:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00180A54; } }
L_0018055C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[2].w[0] - 6288u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[5], c.r[2].w[0] + 21648u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[6], c.r[2].w[0] - 6416u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018058Cu); set32(c.r[7], c.r[2].w[0] - 6416u);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x0018058Cu) [[unlikely]] return; }
L_0018058C:
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[6], 0u + 515u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01B90000u);
    c.r[4].d[0] = c.r[2].d[0] | 61440ull;
    set32(c.r[3], 0u + 3540u);
    st32((c.r[5].w[0] + 48u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 31u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st32((c.r[2].w[0] + 40u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st32((c.r[2].w[0] + 44u), c.r[3].w[0]);
    c.budget -= 12;
L_001805BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001805C4u);  if (depth < kMaxDepth) unit_0022(c, 126u, depth + 1u); else { c.pc = 0x00189BB0u; return; } if (c.pc != 0x001805C4u) [[unlikely]] return; }
L_001805C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00180A54; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001805E4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 152u)));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st8((c.r[3].w[0] + 152u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001805E4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00180A54; } }
L_001805F8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 13u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00180A54; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 152u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 66u);  if (t) { goto L_00180644; } }
    set32(c.r[2], 0u + 65u);
    st8((c.r[4].w[0] + 140u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 180u);
    set32(c.r[3], 0u + 6u);
    st16((c.r[2].w[0] + 134u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00180668; } }
    set32(c.r[2], 0u + 66u);
    c.budget -= 1;
L_00180644:
    st8((c.r[4].w[0] + 140u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 180u);
    set32(c.r[3], 0u + 6u);
    st16((c.r[2].w[0] + 134u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
L_00180668:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180674u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x00180674u) [[unlikely]] return; }
L_00180674:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00180A54; } }
L_0018067C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[2].w[0] + 2u);  if (t) { goto L_00180A54; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] + 21664u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00180000u < 16384u) { entry = entries_0020[(t - 0x00180000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001806A8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00180A54; } }
L_001806B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001806BCu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 64u, depth + 1u); else { c.pc = 0x00184D30u; return; } if (c.pc != 0x001806BCu) [[unlikely]] return; }
L_001806BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00180A54; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00180A54; } }
L_001806D8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 129u)));
    set32(c.r[2], c.r[5].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 68u));
    c.r[2].d[0] = c.r[3].d[0] & 130ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 4ull;  if (t) { goto L_00180710; } }
    set32(c.r[2], c.r[5].w[0] + 67u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 140u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00180740; } }
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 1;
L_00180710:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] + 69u);  if (t) { goto L_00180730; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] + 67u);  if (t) { goto L_0018073C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00180738; } }
    set32(c.r[2], c.r[5].w[0] + 69u);
    c.budget -= 1;
L_00180730:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 140u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00180740; } }
L_00180738:
    set32(c.r[2], c.r[5].w[0] + 67u);
    c.budget -= 1;
L_0018073C:
    st8((c.r[4].w[0] + 140u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00180740:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018074Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x0018074Cu) [[unlikely]] return; }
L_0018074C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 77u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00180A54; } }
    st8((c.r[3].w[0] + 149u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 147u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 150u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 151u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 148u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00180A54; } }
L_0018078C:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 77u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001807A4; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001807A4u); st8((c.r[2].w[0] + 54u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0022(c, 182u, depth + 1u); else { c.pc = 0x0018AA50u; return; } if (c.pc != 0x001807A4u) [[unlikely]] return; }
L_001807A4:
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001808D0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 152u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00180828; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 134u)));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; st16((c.r[5].w[0] + 134u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001807FC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001807E0u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 163u)));  if (depth < kMaxDepth) unit_000E(c, 152u, depth + 1u); else { c.pc = 0x0013A1A0u; return; } if (c.pc != 0x001807E0u) [[unlikely]] return; }
L_001807E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001807FC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001807F4u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 163u)));  if (depth < kMaxDepth) unit_000E(c, 158u, depth + 1u); else { c.pc = 0x0013A2C0u; return; } if (c.pc != 0x001807F4u) [[unlikely]] return; }
L_001807F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00180A54; } }
L_001807FC:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u + 180u);
    st16((c.r[2].w[0] + 132u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 134u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00180A54; } }
L_00180828:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 129u)));
    set32(c.r[2], 0u + 128u);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 68u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00180870; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 71u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00180870; } }
    st16((c.r[5].w[0] + 132u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u - 4u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 143u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00180A54; } }
L_00180870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180878u);  if (depth < kMaxDepth) unit_0022(c, 171u, depth + 1u); else { c.pc = 0x0018A7D0u; return; } if (c.pc != 0x00180878u) [[unlikely]] return; }
L_00180878:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00180A54; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0018089C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 148u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001808B8; } }
L_0018089C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st16((c.r[2].w[0] + 132u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00180A54; } }
L_001808B8:
    st16((c.r[4].w[0] + 132u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00180A54; } }
L_001808D0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 13u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00180A54; } }
    set32(c.r[2], 0u - 1u);
    st8((c.r[5].w[0] + 140u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 10u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 134u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00180A54; } }
L_0018090C:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 134u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] > 0; st16((c.r[2].w[0] + 134u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00180A54; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 132u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00180938; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00180938:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 5;
L_0018094C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00180A54; } }
L_00180954:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00180A1C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001809A4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00180980; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00180A54; } }
L_00180980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180988u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 64u, depth + 1u); else { c.pc = 0x00184D30u; return; } if (c.pc != 0x00180988u) [[unlikely]] return; }
L_00180988:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00180A54; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00180A54; } }
L_001809A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001809ACu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 163u)));  if (depth < kMaxDepth) unit_000E(c, 152u, depth + 1u); else { c.pc = 0x0013A1A0u; return; } if (c.pc != 0x001809ACu) [[unlikely]] return; }
L_001809AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001809C8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 134u)));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] > 0; st16((c.r[4].w[0] + 134u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00180A54; } }
L_001809C8:
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 152u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001809F8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], 0u + 10u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 134u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00180A0C; } }
L_001809F8:
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_00180A0C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 140u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00180A54; } }
L_00180A1C:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 134u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] > 0; st16((c.r[2].w[0] + 134u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00180A54; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
L_00180A54:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00180A58:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00180A70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_00180AE8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 13u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00180AA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180AA0u); st16((c.r[3].w[0] + 20u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0022(c, 182u, depth + 1u); else { c.pc = 0x0018AA50u; return; } if (c.pc != 0x00180AA0u) [[unlikely]] return; }
L_00180AA0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 13u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_00180B40; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26176u)));
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18542u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18543u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00180B3C; } }
L_00180AE8:
    c.f[2] = ld32((c.r[3].w[0] + 136u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    st32((c.r[3].w[0] + 136u), c.f[1]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[2].w[0] + 156u), c.f[1]);  if (t) { goto L_00180B3C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 152u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_00180B3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_00180B3C; } }
    set32(c.r[16], 0u - 1u);
    c.budget -= 1;
L_00180B3C:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 1;
L_00180B40:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00180B50:
    c.budget -= 2;
    {  goto L_00181F50; }
L_00180B60:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[2], c.r[28].w[0] - 31072u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00180000u < 16384u) { entry = entries_0020[(t - 0x00180000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00180B80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[2], 0u + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180BA4u); c.r[4].d[0] = c.r[4].d[0] & 255ull;  if (depth < kMaxDepth) unit_0094(c, 199u, depth + 1u); else { c.pc = 0x00352520u; return; } if (c.pc != 0x00180BA4u) [[unlikely]] return; }
L_00180BA4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 1u);
    st16((c.r[3].w[0] + 166u), static_cast<std::uint16_t>(c.r[16].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 165u), static_cast<std::uint8_t>(c.r[4].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00180BD0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] > 0; st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00180C0C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], c.r[3].w[0] + 165u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 165u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00180C0C; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00180C0C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));  c.pc = t; return; }
L_00180C20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], c.r[3].w[0] + 166u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 166u)));
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_00180C68; } }
    set32(c.r[2], 0u + 12u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180C50u); c.r[4].d[0] = ld8((c.r[4].w[0]));  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x00180C50u) [[unlikely]] return; }
L_00180C50:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], 0u - 1u);
    st8((c.r[3].w[0] + 165u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st16((c.r[3].w[0] + 166u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 6;
L_00180C68:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00180C80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].d[0] = c.r[2].d[0] | 18542ull;
    c.r[4].d[0] = c.r[2].d[0] | 18543ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 26176u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26176u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[4].w[0] + 1u);  if (t) { goto L_00181664; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[3].w[0] + 21872u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00180000u < 16384u) { entry = entries_0020[(t - 0x00180000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00180CE4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], 0u + 124u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st16((c.r[2].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180D0Cu); st8((c.r[2].w[0] + 165u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0020(c, 82u, depth + 1u); else { c.pc = 0x00180B80u; return; } if (c.pc != 0x00180D0Cu) [[unlikely]] return; }
L_00180D0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00181668; } }
L_00180D14:
    set32(c.r[2], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18542u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18543u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180D44u); st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0020(c, 84u, depth + 1u); else { c.pc = 0x00180BD0u; return; } if (c.pc != 0x00180D44u) [[unlikely]] return; }
L_00180D44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00181664; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180D54u);  if (depth < kMaxDepth) unit_0093(c, 300u, depth + 1u); else { c.pc = 0x0034FD20u; return; } if (c.pc != 0x00180D54u) [[unlikely]] return; }
L_00180D54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00181664; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 188u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st8((c.r[2].w[0] + 129u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00180D88; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 77u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00180DA0; } }
L_00180D88:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u + 3u);
    st8((c.r[2].w[0] + 77u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_00180DA0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00181664; } }
L_00180DB4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180DC0u); st8((c.r[4].w[0] + 54u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0022(c, 182u, depth + 1u); else { c.pc = 0x0018AA50u; return; } if (c.pc != 0x00180DC0u) [[unlikely]] return; }
L_00180DC0:
    set32(c.r[6], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[2], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00180F38; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00180EB0; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00180E50; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00180DFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00181664; } }
L_00180DFC:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 129u)));
    c.budget -= 1;
L_00180E00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180E08u); c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 130u)));  if (depth < kMaxDepth) unit_0022(c, 180u, depth + 1u); else { c.pc = 0x0018A9C0u; return; } if (c.pc != 0x00180E08u) [[unlikely]] return; }
L_00180E08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00181664; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00181664; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00181664; } }
L_00180E50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180E58u);  if (depth < kMaxDepth) unit_0022(c, 181u, depth + 1u); else { c.pc = 0x0018AA20u; return; } if (c.pc != 0x00180E58u) [[unlikely]] return; }
L_00180E58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00181664; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 129u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 68u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_00180E94; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 31u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00181664; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_00180E94:
    st16((c.r[3].w[0] + 132u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180EA8u); st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0020(c, 85u, depth + 1u); else { c.pc = 0x00180C20u; return; } if (c.pc != 0x00180EA8u) [[unlikely]] return; }
L_00180EA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00181664; } }
L_00180EB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180EB8u);  if (depth < kMaxDepth) unit_0022(c, 122u, depth + 1u); else { c.pc = 0x00189A90u; return; } if (c.pc != 0x00180EB8u) [[unlikely]] return; }
L_00180EB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00181664; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00180F04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180ED8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0022(c, 153u, depth + 1u); else { c.pc = 0x0018A310u; return; } if (c.pc != 0x00180ED8u) [[unlikely]] return; }
L_00180ED8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00180F04; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 4u);
    set32(c.r[3], 0u + 1u);
    st16((c.r[2].w[0] + 132u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 129u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 74u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00180F20; } }
L_00180F04:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 5u);
    st16((c.r[2].w[0] + 132u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 129u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0] + 74u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
L_00180F20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180F28u);  if (depth < kMaxDepth) unit_0020(c, 85u, depth + 1u); else { c.pc = 0x00180C20u; return; } if (c.pc != 0x00180F28u) [[unlikely]] return; }
L_00180F28:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00181664; } }
L_00180F38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180F40u);  if (depth < kMaxDepth) unit_0020(c, 84u, depth + 1u); else { c.pc = 0x00180BD0u; return; } if (c.pc != 0x00180F40u) [[unlikely]] return; }
L_00180F40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00181664; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 13u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00181664; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 132u)));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00181664; } }
L_00180F74:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], c.r[4].w[0] + 2u);  if (t) { goto L_00181664; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[3].w[0] + 21824u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00180000u < 16384u) { entry = entries_0020[(t - 0x00180000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00180FA0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180FB0u); st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0020(c, 85u, depth + 1u); else { c.pc = 0x00180C20u; return; } if (c.pc != 0x00180FB0u) [[unlikely]] return; }
L_00180FB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00181664; } }
L_00180FB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180FC0u);  if (depth < kMaxDepth) unit_0020(c, 84u, depth + 1u); else { c.pc = 0x00180BD0u; return; } if (c.pc != 0x00180FC0u) [[unlikely]] return; }
L_00180FC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00181664; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00181664; } }
L_00180FDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00180FE4u); set32(c.r[4], 0u + 125u);  if (depth < kMaxDepth) unit_0020(c, 82u, depth + 1u); else { c.pc = 0x00180B80u; return; } if (c.pc != 0x00180FE4u) [[unlikely]] return; }
L_00180FE4:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 60u);
    st16((c.r[2].w[0] + 132u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00181664; } }
L_00181004:
    set32(c.r[2], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18542u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18543u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 132u)));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 16;
    { const bool t = c.r[3].sd[0] > 0; st16((c.r[4].w[0] + 132u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00181664; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018104Cu);  if (depth < kMaxDepth) unit_0022(c, 131u, depth + 1u); else { c.pc = 0x00189D30u; return; } if (c.pc != 0x0018104Cu) [[unlikely]] return; }
L_0018104C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00181664; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[3].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_00181084; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 76u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001810CC; } }
L_00181084:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[6], 0u + 4u);
    set32(c.r[5], 0u + 5u);
    set32(c.r[4], 0u + 1u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 180u);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 76u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st16((c.r[2].w[0] + 134u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 152u)));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st8((c.r[3].w[0] + 152u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 18;
L_001810CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001810D4u);  if (depth < kMaxDepth) unit_0020(c, 85u, depth + 1u); else { c.pc = 0x00180C20u; return; } if (c.pc != 0x001810D4u) [[unlikely]] return; }
L_001810D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00181664; } }
L_001810DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001810E4u); set32(c.r[4], 0u + 127u);  if (depth < kMaxDepth) unit_0020(c, 82u, depth + 1u); else { c.pc = 0x00180B80u; return; } if (c.pc != 0x001810E4u) [[unlikely]] return; }
L_001810E4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00181664; } }
L_001810F8:
    set32(c.r[2], 0u + 5u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 4u);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00181664; } }
L_00181118:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 77u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00181130; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181130u); st8((c.r[4].w[0] + 54u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0022(c, 182u, depth + 1u); else { c.pc = 0x0018AA50u; return; } if (c.pc != 0x00181130u) [[unlikely]] return; }
L_00181130:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[6], c.r[2].w[0] + 2u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00181664; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[3].w[0] + 21792u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00180000u < 16384u) { entry = entries_0020[(t - 0x00180000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00181164:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[4], 0u + 49u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181178u); st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0020(c, 82u, depth + 1u); else { c.pc = 0x00180B80u; return; } if (c.pc != 0x00181178u) [[unlikely]] return; }
L_00181178:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] > 0; st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00181664; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001811B8u); st8((c.r[2].w[0] + 61u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0022(c, 153u, depth + 1u); else { c.pc = 0x0018A310u; return; } if (c.pc != 0x001811B8u) [[unlikely]] return; }
L_001811B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001811D0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00181664; } }
L_001811D0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00181664; } }
L_001811E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001811E8u);  if (depth < kMaxDepth) unit_0022(c, 144u, depth + 1u); else { c.pc = 0x0018A0C0u; return; } if (c.pc != 0x001811E8u) [[unlikely]] return; }
L_001811E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00181664; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0018120C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0018121C; } }
L_0018120C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0018121C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00181664; } }
L_00181228:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[2].w[0] - 6288u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[5], c.r[2].w[0] + 21648u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[6], c.r[2].w[0] - 6416u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181258u); set32(c.r[7], c.r[2].w[0] - 6416u);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x00181258u) [[unlikely]] return; }
L_00181258:
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[6], 0u + 515u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01B90000u);
    c.r[4].d[0] = c.r[2].d[0] | 61440ull;
    set32(c.r[3], 0u + 3540u);
    st32((c.r[5].w[0] + 48u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 31u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st32((c.r[2].w[0] + 40u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st32((c.r[2].w[0] + 44u), c.r[3].w[0]);
    c.budget -= 12;
L_00181288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181290u);  if (depth < kMaxDepth) unit_0022(c, 126u, depth + 1u); else { c.pc = 0x00189BB0u; return; } if (c.pc != 0x00181290u) [[unlikely]] return; }
L_00181290:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00181664; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001812B0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 152u)));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st8((c.r[3].w[0] + 152u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001812B0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001812C4u); st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0020(c, 85u, depth + 1u); else { c.pc = 0x00180C20u; return; } if (c.pc != 0x001812C4u) [[unlikely]] return; }
L_001812C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00181664; } }
L_001812CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001812D4u);  if (depth < kMaxDepth) unit_0020(c, 84u, depth + 1u); else { c.pc = 0x00180BD0u; return; } if (c.pc != 0x001812D4u) [[unlikely]] return; }
L_001812D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00181664; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 152u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00181334; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 77u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 126u);  if (t) { goto L_0018130C; } }
    set32(c.r[2], 0u + 50u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00181310; } }
    set32(c.r[2], 0u + 126u);
    c.budget -= 1;
L_0018130C:
    st16((c.r[3].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00181310:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 180u);
    set32(c.r[3], 0u + 6u);
    st16((c.r[2].w[0] + 134u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0018136C; } }
L_00181334:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 77u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 127u);  if (t) { goto L_00181350; } }
    set32(c.r[2], 0u + 35u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00181354; } }
    set32(c.r[2], 0u + 127u);
    c.budget -= 1;
L_00181350:
    st16((c.r[3].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00181354:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 5u);
    set32(c.r[3], 0u + 3u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_0018136C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181378u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 166u)));  if (depth < kMaxDepth) unit_0020(c, 82u, depth + 1u); else { c.pc = 0x00180B80u; return; } if (c.pc != 0x00181378u) [[unlikely]] return; }
L_00181378:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00181664; } }
L_00181380:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[4].w[0] + 2u);  if (t) { goto L_00181664; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[3].w[0] + 21760u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00180000u < 16384u) { entry = entries_0020[(t - 0x00180000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001813AC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[2], 0u + 2u);  if (t) { goto L_001813D4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001813C8u); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0020(c, 85u, depth + 1u); else { c.pc = 0x00180C20u; return; } if (c.pc != 0x001813C8u) [[unlikely]] return; }
L_001813C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00181664; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_001813D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00181664; } }
L_001813DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001813E4u);  if (depth < kMaxDepth) unit_0020(c, 84u, depth + 1u); else { c.pc = 0x00180BD0u; return; } if (c.pc != 0x001813E4u) [[unlikely]] return; }
L_001813E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00181664; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00181664; } }
L_00181400:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 129u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 68u));
    c.r[2].d[0] = c.r[3].d[0] & 130ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 4ull;  if (t) { goto L_00181438; } }
    set32(c.r[2], 0u + 44u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00181468; } }
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 1;
L_00181438:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 128u);  if (t) { goto L_00181458; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 128u);  if (t) { goto L_00181464; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00181460; } }
    set32(c.r[2], 0u + 128u);
    c.budget -= 1;
L_00181458:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00181468; } }
L_00181460:
    set32(c.r[2], 0u + 128u);
    c.budget -= 1;
L_00181464:
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00181468:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181474u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 166u)));  if (depth < kMaxDepth) unit_0020(c, 82u, depth + 1u); else { c.pc = 0x00180B80u; return; } if (c.pc != 0x00181474u) [[unlikely]] return; }
L_00181474:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00181664; } }
L_0018147C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181488u); st8((c.r[4].w[0] + 54u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0022(c, 182u, depth + 1u); else { c.pc = 0x0018AA50u; return; } if (c.pc != 0x00181488u) [[unlikely]] return; }
L_00181488:
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00181508; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 129u)));
    set32(c.r[2], 0u + 128u);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 68u));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 32u);  goto L_001814D8; }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 71u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001814D4; } }
    st16((c.r[5].w[0] + 132u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00181664; } }
L_001814D4:
    set32(c.r[4], 0u + 32u);
    c.budget -= 1;
L_001814D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001814E0u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x001814E0u) [[unlikely]] return; }
L_001814E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00181664; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 1u);
    st16((c.r[2].w[0] + 132u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00181664; } }
L_00181508:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 13u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00181664; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018151Cu);  if (depth < kMaxDepth) unit_0020(c, 85u, depth + 1u); else { c.pc = 0x00180C20u; return; } if (c.pc != 0x0018151Cu) [[unlikely]] return; }
L_0018151C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00181664; } }
L_00181538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181540u);  if (depth < kMaxDepth) unit_0020(c, 84u, depth + 1u); else { c.pc = 0x00180BD0u; return; } if (c.pc != 0x00181540u) [[unlikely]] return; }
L_00181540:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00181664; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 132u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00181564; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00181564:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00181664; } }
L_00181580:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0018162C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 32u);  if (t) { goto L_001815EC; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001815B8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001815B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00181664; } }
L_001815B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001815C0u);  if (depth < kMaxDepth) unit_0020(c, 84u, depth + 1u); else { c.pc = 0x00180BD0u; return; } if (c.pc != 0x001815C0u) [[unlikely]] return; }
L_001815C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00181664; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 180u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 134u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00181664; } }
    set32(c.r[4], 0u + 32u);
    c.budget -= 1;
L_001815EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001815F4u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x001815F4u) [[unlikely]] return; }
L_001815F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00181610; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 134u)));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] > 0; st16((c.r[4].w[0] + 134u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00181664; } }
L_00181610:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181624u); st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0020(c, 85u, depth + 1u); else { c.pc = 0x00180C20u; return; } if (c.pc != 0x00181624u) [[unlikely]] return; }
L_00181624:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00181664; } }
L_0018162C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181634u);  if (depth < kMaxDepth) unit_0020(c, 84u, depth + 1u); else { c.pc = 0x00180BD0u; return; } if (c.pc != 0x00181634u) [[unlikely]] return; }
L_00181634:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00181664; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
L_00181664:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00181668:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00181680:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 13u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_001816A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001816A4u); st16((c.r[3].w[0] + 20u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0022(c, 182u, depth + 1u); else { c.pc = 0x0018AA50u; return; } if (c.pc != 0x001816A4u) [[unlikely]] return; }
L_001816A4:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 13u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_00181700; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18542u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18543u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 152u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_001816FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_001816FC; } }
    set32(c.r[16], 0u - 1u);
    c.budget -= 1;
L_001816FC:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 1;
L_00181700:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00181710:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 18608u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00180000u < 16384u) { entry = entries_0020[(t - 0x00180000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00181740:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181774u); st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0020(c, 192u, depth + 1u); else { c.pc = 0x00181F50u; return; } if (c.pc != 0x00181774u) [[unlikely]] return; }
L_00181774:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01B90000u);
    set32(c.r[6], 0u + 3540u);
    c.r[4].d[0] = c.r[2].d[0] | 61440ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181788u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00181788u) [[unlikely]] return; }
L_00181788:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], 0u - 1u);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    st8((c.r[3].w[0] + 188u), static_cast<std::uint8_t>(c.r[4].w[0]));
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001817B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], c.r[28].w[0] - 31064u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001817D8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001817D8u) [[unlikely]] return; }
L_001817D8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001817F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[4].w[0] + 6u);  if (t) { goto L_00181DFC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[3].w[0] + 21904u);
    c.budget -= 2;
L_00181818:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00180000u < 16384u) { entry = entries_0020[(t - 0x00180000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0018182C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], 0u + 54u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 129u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st32((c.r[2].w[0] + 156u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018185Cu); st32((c.r[2].w[0] + 136u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x0018185Cu) [[unlikely]] return; }
L_0018185C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00181E00; } }
L_00181864:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181870u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 64u, depth + 1u); else { c.pc = 0x00184D30u; return; } if (c.pc != 0x00181870u) [[unlikely]] return; }
L_00181870:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00181DFC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00181DFC; } }
L_00181894:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018189Cu);  if (depth < kMaxDepth) unit_0022(c, 182u, depth + 1u); else { c.pc = 0x0018AA50u; return; } if (c.pc != 0x0018189Cu) [[unlikely]] return; }
L_0018189C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 129u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001818B0u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0022(c, 180u, depth + 1u); else { c.pc = 0x0018A9C0u; return; } if (c.pc != 0x001818B0u) [[unlikely]] return; }
L_001818B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00181DFC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 7u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00181DFC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 129u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 129u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00181DFC; } }
L_00181908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181910u);  if (depth < kMaxDepth) unit_0022(c, 182u, depth + 1u); else { c.pc = 0x0018AA50u; return; } if (c.pc != 0x00181910u) [[unlikely]] return; }
L_00181910:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181918u);  if (depth < kMaxDepth) unit_0022(c, 181u, depth + 1u); else { c.pc = 0x0018AA20u; return; } if (c.pc != 0x00181918u) [[unlikely]] return; }
L_00181918:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00181DFC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 13u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00181DFC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00181DFC; } }
L_00181944:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018194Cu);  if (depth < kMaxDepth) unit_0093(c, 300u, depth + 1u); else { c.pc = 0x0034FD20u; return; } if (c.pc != 0x0018194Cu) [[unlikely]] return; }
L_0018194C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00181DFC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 68u));
    c.r[2].d[0] = c.r[2].d[0] & 130ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00181984; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 69u));
    c.r[2].d[0] = c.r[2].d[0] & 130ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00181984; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 78u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018199C; } }
L_00181984:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 7u);
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00181DFC; } }
L_0018199C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 6u);
    set32(c.r[4], 0u + 55u);
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001819B8u); st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x001819B8u) [[unlikely]] return; }
L_001819B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00181DFC; } }
L_001819C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00181A38; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001819E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00181DFC; } }
L_001819E0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001819ECu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 64u, depth + 1u); else { c.pc = 0x00184D30u; return; } if (c.pc != 0x001819ECu) [[unlikely]] return; }
L_001819EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00181DFC; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 7u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 149u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 147u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 150u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 151u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 148u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00181DFC; } }
L_00181A38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181A40u);  if (depth < kMaxDepth) unit_0022(c, 171u, depth + 1u); else { c.pc = 0x0018A7D0u; return; } if (c.pc != 0x00181A40u) [[unlikely]] return; }
L_00181A40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00181DFC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; st8((c.r[3].w[0] + 140u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00181A6C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 148u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00181A80; } }
L_00181A6C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00181DFC; } }
L_00181A80:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 2u);
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00181DFC; } }
L_00181AA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181AB0u);  if (depth < kMaxDepth) unit_0022(c, 182u, depth + 1u); else { c.pc = 0x0018AA50u; return; } if (c.pc != 0x00181AB0u) [[unlikely]] return; }
L_00181AB0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 4u);
    set32(c.r[4], c.r[3].w[0] + 7u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 7u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00181C98; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00181BF8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00181B28; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00181B28; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00181AFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00181DFC; } }
L_00181AFC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 129u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 77u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 31u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st16((c.r[2].w[0] + 132u), static_cast<std::uint16_t>(0u));
    c.budget -= 11;
L_00181B28:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 2u);
    st8((c.r[2].w[0] + 54u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 129u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 68u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_00181BC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181B54u);  if (depth < kMaxDepth) unit_0022(c, 122u, depth + 1u); else { c.pc = 0x00189A90u; return; } if (c.pc != 0x00181B54u) [[unlikely]] return; }
L_00181B54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00181BC4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00181BA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181B74u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0022(c, 153u, depth + 1u); else { c.pc = 0x0018A310u; return; } if (c.pc != 0x00181B74u) [[unlikely]] return; }
L_00181B74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00181BA8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u + 4u);
    st16((c.r[2].w[0] + 132u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 129u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 74u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00181BC4; } }
L_00181BA8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[16], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 129u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 74u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00181BC4; } }
L_00181BC0:
    set32(c.r[16], 0u - 1u);
    c.budget -= 1;
L_00181BC4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00181DFC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 7u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 129u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 129u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 31u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00181DFC; } }
L_00181BF8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 78u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_00181C78; } }
    set32(c.r[2], 0u + 100u);
    st16((c.r[3].w[0] + 20u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 13u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00181C7C; } }
    st16((c.r[3].w[0] + 20u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181C30u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 164u)));  if (depth < kMaxDepth) unit_00A4(c, 188u, depth + 1u); else { c.pc = 0x00393CD0u; return; } if (c.pc != 0x00181C30u) [[unlikely]] return; }
L_00181C30:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st32((c.r[3].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30528u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 29u));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], 0u - 1u);  goto L_00181C70; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u + 4u);
    st8((c.r[2].w[0] + 77u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st16((c.r[2].w[0] + 132u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00181C7C; } }
    set32(c.r[16], 0u - 1u);
    c.budget -= 1;
L_00181C70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00181C7C; } }
L_00181C78:
    set32(c.r[16], 0u - 1u);
    c.budget -= 1;
L_00181C7C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00181DFC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 7u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00181DFC; } }
L_00181C98:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 13u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00181DFC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18542u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18543u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 132u)));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 57u);  if (t) { goto L_00181D0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181D00u); set32(c.r[4], 0u + 56u);  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x00181D00u) [[unlikely]] return; }
L_00181D00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00181DFC; } }
    set32(c.r[4], 0u + 57u);
    c.budget -= 1;
L_00181D0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181D14u);  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x00181D14u) [[unlikely]] return; }
L_00181D14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00181DFC; } }
L_00181D1C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181D28u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 64u, depth + 1u); else { c.pc = 0x00184D30u; return; } if (c.pc != 0x00181D28u) [[unlikely]] return; }
L_00181D28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00181DFC; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 149u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 147u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 150u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 151u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 148u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00181DFC; } }
L_00181D74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181D7Cu);  if (depth < kMaxDepth) unit_0022(c, 171u, depth + 1u); else { c.pc = 0x0018A7D0u; return; } if (c.pc != 0x00181D7Cu) [[unlikely]] return; }
L_00181D7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00181DFC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; st8((c.r[3].w[0] + 140u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00181DA8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 148u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00181DD4; } }
L_00181DA8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00181DFC; } }
L_00181DD4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 132u)));
    st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 10;
L_00181DFC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00181E00:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00181E10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[2].w[0] + 6u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 6u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00181E54; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 7u)));
    st16((c.r[2].w[0] + 132u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00181E8C; } }
L_00181E54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181E5Cu);  if (depth < kMaxDepth) unit_0020(c, 199u, depth + 1u); else { c.pc = 0x00181FF0u; return; } if (c.pc != 0x00181E5Cu) [[unlikely]] return; }
L_00181E5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00181E8C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
L_00181E8C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00181EA0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18542u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18543u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 152u)));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st8((c.r[3].w[0] + 152u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 152u)));
    c.r[2].d[0] = c.r[2].d[0] & 6ull;
    c.budget -= 19;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00181F14; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 77u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00181F08; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 188u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00181F14; } }
L_00181F08:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 129u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0] + 188u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00181F14:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 152u)));  c.pc = t; return; }
L_00181F20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181F30u);  if (depth < kMaxDepth) unit_0021(c, 72u, depth + 1u); else { c.pc = 0x00184E60u; return; } if (c.pc != 0x00181F30u) [[unlikely]] return; }
L_00181F30:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181F40u); st8((c.r[2].w[0] + 144u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0022(c, 163u, depth + 1u); else { c.pc = 0x0018A6E0u; return; } if (c.pc != 0x00181F40u) [[unlikely]] return; }
L_00181F40:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00181F50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181F60u);  if (depth < kMaxDepth) unit_0021(c, 72u, depth + 1u); else { c.pc = 0x00184E60u; return; } if (c.pc != 0x00181F60u) [[unlikely]] return; }
L_00181F60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[2].w[0] - 6416u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[5], c.r[2].w[0] + 21944u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181F7Cu); set32(c.r[6], c.r[2].w[0] + 21952u);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x00181F7Cu) [[unlikely]] return; }
L_00181F7C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], 0u + 4u);
    set32(c.r[3], 0u + 119u);
    st8((c.r[2].w[0] + 164u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 144u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181FA4u); st16((c.r[2].w[0] + 168u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0020(c, 228u, depth + 1u); else { c.pc = 0x00182650u; return; } if (c.pc != 0x00181FA4u) [[unlikely]] return; }
L_00181FA4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00181FB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00181FC0u);  if (depth < kMaxDepth) unit_0022(c, 182u, depth + 1u); else { c.pc = 0x0018AA50u; return; } if (c.pc != 0x00181FC0u) [[unlikely]] return; }
L_00181FC0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 18592u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00181FE4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00181FE4u) [[unlikely]] return; }
L_00181FE4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00181FF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182000u);  if (depth < kMaxDepth) unit_0022(c, 182u, depth + 1u); else { c.pc = 0x0018AA50u; return; } if (c.pc != 0x00182000u) [[unlikely]] return; }
L_00182000:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 18560u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00182024u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00182024u) [[unlikely]] return; }
L_00182024:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00182030:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
L_0018203C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 1;
L_00182040:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[4].w[0] + 1u);  if (t) { goto L_001822B8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[3].w[0] + 21968u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00180000u < 16384u) { entry = entries_0020[(t - 0x00180000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00182068:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001822B8; } }
L_00182078:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[4], 0u + 53u);
    c.budget -= 2;
L_00182080:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018208Cu); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0021(c, 62u, depth + 1u); else { c.pc = 0x00184CD0u; return; } if (c.pc != 0x0018208Cu) [[unlikely]] return; }
L_0018208C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_001822BC; } }
L_00182094:
    c.f[1] = ld32((c.r[4].w[0] + 136u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 136u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[2].w[0] + 156u), c.f[0]);  if (t) { goto L_001822B8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st32((c.r[2].w[0] + 136u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st32((c.r[2].w[0] + 156u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001820E4u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 64u, depth + 1u); else { c.pc = 0x00184D30u; return; } if (c.pc != 0x001820E4u) [[unlikely]] return; }
L_001820E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001822B8; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
L_00182100:
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 142u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 143u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 149u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 147u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 150u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 151u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 148u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001822B8; } }
L_00182140:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182148u);  if (depth < kMaxDepth) unit_0022(c, 171u, depth + 1u); else { c.pc = 0x0018A7D0u; return; } if (c.pc != 0x00182148u) [[unlikely]] return; }
L_00182148:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001822B8; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0018216C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 148u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 5u);  if (t) { goto L_00182180; } }
L_0018216C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00182184; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_00182180:
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00182184:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], 0u + 10u);
    st8((c.r[2].w[0] + 140u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 132u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001822B8; } }
L_001821A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001821A8u);  if (depth < kMaxDepth) unit_0093(c, 300u, depth + 1u); else { c.pc = 0x0034FD20u; return; } if (c.pc != 0x001821A8u) [[unlikely]] return; }
L_001821A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001822B8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 132u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0] + 132u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001822B8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 6u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001822B8; } }
L_001821F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182200u);  if (depth < kMaxDepth) unit_0093(c, 300u, depth + 1u); else { c.pc = 0x0034FD20u; return; } if (c.pc != 0x00182200u) [[unlikely]] return; }
L_00182200:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001822B8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st32((c.r[2].w[0] + 136u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 144u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182234u); set32(c.r[6], c.r[2].w[0] + 136u);  if (depth < kMaxDepth) unit_0037(c, 109u, depth + 1u); else { c.pc = 0x001DD620u; return; } if (c.pc != 0x00182234u) [[unlikely]] return; }
L_00182234:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001822B8; } }
L_0018223C:
    c.f[1] = ld32((c.r[4].w[0] + 136u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[5].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 136u), c.f[0]);  if (t) { goto L_001822B8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u + 2u);
    st32((c.r[2].w[0] + 136u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 143u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 142u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 128u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 160u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 20;
L_001822B8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_001822BC:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001822D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_00182350; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001822FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_001823E0; } }
L_001822FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182304u);  if (depth < kMaxDepth) unit_0093(c, 300u, depth + 1u); else { c.pc = 0x0034FD20u; return; } if (c.pc != 0x00182304u) [[unlikely]] return; }
L_00182304:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001823DC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st32((c.r[2].w[0] + 136u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st32((c.r[2].w[0] + 156u), 0u);
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 144u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 132u)));
    set32(c.r[6], c.r[5].w[0] + 136u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182348u); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0037(c, 109u, depth + 1u); else { c.pc = 0x001DD620u; return; } if (c.pc != 0x00182348u) [[unlikely]] return; }
L_00182348:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001823DC; } }
L_00182350:
    c.f[1] = ld32((c.r[5].w[0] + 136u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[5].w[0] + 136u), c.f[0]);  if (t) { goto L_001823DC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st32((c.r[2].w[0] + 136u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 143u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 142u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 132u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001823AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 128u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001823B0; } }
L_001823AC:
    st8((c.r[3].w[0] + 128u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_001823B0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 2u);
    st8((c.r[2].w[0] + 160u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 11;
L_001823DC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_001823E0:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001823F0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 6u);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00182420:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 2u);
    st8((c.r[2].w[0] + 54u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 13u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_00182450; } }
    set32(c.r[2], 0u + 100u);
    st16((c.r[3].w[0] + 20u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00182450:
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[2], 0u + 4u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001825F4; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001825A4; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00182574; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00182510; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00182498; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_00182638; } }
L_00182498:
    c.f[1] = ld32((c.r[5].w[0] + 136u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[5].w[0] + 136u), c.f[0]);  if (t) { goto L_00182634; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st32((c.r[2].w[0] + 136u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 152u)));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st8((c.r[3].w[0] + 152u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 152u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001824FC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00182500; } }
L_001824FC:
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_00182500:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00182634; } }
L_00182510:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182518u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 64u, depth + 1u); else { c.pc = 0x00184D30u; return; } if (c.pc != 0x00182518u) [[unlikely]] return; }
L_00182518:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00182634; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018252Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 163u)));  if (depth < kMaxDepth) unit_000E(c, 152u, depth + 1u); else { c.pc = 0x0013A1A0u; return; } if (c.pc != 0x0018252Cu) [[unlikely]] return; }
L_0018252C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00182548; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182540u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 163u)));  if (depth < kMaxDepth) unit_000E(c, 158u, depth + 1u); else { c.pc = 0x0013A2C0u; return; } if (c.pc != 0x00182540u) [[unlikely]] return; }
L_00182540:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00182634; } }
L_00182548:
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], 0u + 10u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 140u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 132u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00182634; } }
L_00182574:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 132u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[5].w[0] + 132u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_00182634; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00182634; } }
L_001825A4:
    c.f[1] = ld32((c.r[5].w[0] + 156u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[5].w[0] + 156u), c.f[0]);  if (t) { goto L_00182634; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 156u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 146u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00182634; } }
L_001825F4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 13u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00182634; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18542u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18543u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 152u)));
    c.budget -= 13;
L_00182634:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 1;
L_00182638:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00182650:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00D70000u);
    c.r[16].d[0] = c.r[2].d[0] | 53248ull;
    set32(c.r[6], 0u + 512u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182674u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00182674u) [[unlikely]] return; }
L_00182674:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00D50000u);
    set32(c.r[6], 0u + 2048u);
    c.r[4].d[0] = c.r[2].d[0] | 51200ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182688u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00182688u) [[unlikely]] return; }
L_00182688:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00D50000u);
    c.r[4].d[0] = c.r[2].d[0] | 53248ull;
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018269Cu); c.r[6].d[0] = 0ull | 36864ull;  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0018269Cu) [[unlikely]] return; }
L_0018269C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00D60000u);
    c.r[4].d[0] = c.r[2].d[0] | 24576ull;
    c.r[6].d[0] = 0ull | 38912ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001826B0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001826B0u) [[unlikely]] return; }
L_001826B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00D60000u);
    c.r[4].d[0] = c.r[2].d[0] | 63488ull;
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001826C4u); c.r[6].d[0] = 0ull | 38912ull;  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001826C4u) [[unlikely]] return; }
L_001826C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[4], 0u + 1205u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001826D4u); set32(c.r[5], c.r[2].w[0] - 18528u);  if (depth < kMaxDepth) unit_0094(c, 42u, depth + 1u); else { c.pc = 0x003503F0u; return; } if (c.pc != 0x001826D4u) [[unlikely]] return; }
L_001826D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00D70000u);
    c.r[4].d[0] = c.r[2].d[0] | 53248ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001826E8u); set32(c.r[5], c.r[2].w[0] + 22000u);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x001826E8u) [[unlikely]] return; }
L_001826E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00D50000u);
    c.r[3].d[0] = c.r[2].d[0] | 51200ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00D70000u);
    c.r[2].d[0] = c.r[2].d[0] | 53312ull;
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00D80000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00110000u);
    set32(c.r[4], c.r[2].w[0] + 27744u);
    set32(c.r[7], ld32((c.r[1].w[0] - 12224u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], c.r[2].w[0] - 7392u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182720u); set32(c.r[8], 0u + 964u);  if (depth < kMaxDepth) unit_0093(c, 253u, depth + 1u); else { c.pc = 0x0034F7F0u; return; } if (c.pc != 0x00182720u) [[unlikely]] return; }
L_00182720:
    set32(c.r[2], 0u + 964u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00D80000u);
    st32((c.r[1].w[0] - 12220u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00D70000u);
    c.r[4].d[0] = c.r[2].d[0] | 53376ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182740u); set32(c.r[5], c.r[2].w[0] + 22016u);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x00182740u) [[unlikely]] return; }
L_00182740:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00D50000u);
    c.r[2].d[0] = c.r[2].d[0] | 53248ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00D80000u);
    st32((c.r[1].w[0] - 12096u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull | 34840ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00D80000u);
    st32((c.r[1].w[0] - 12092u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00D70000u);
    c.r[4].d[0] = c.r[2].d[0] | 53504ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182770u); set32(c.r[5], c.r[2].w[0] + 22032u);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x00182770u) [[unlikely]] return; }
L_00182770:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00D60000u);
    c.r[2].d[0] = c.r[2].d[0] | 24576ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00D80000u);
    st32((c.r[1].w[0] - 11968u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull | 36952ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00D80000u);
    st32((c.r[1].w[0] - 11964u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[16].w[0] + 384u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018279Cu); set32(c.r[5], c.r[2].w[0] + 22048u);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x0018279Cu) [[unlikely]] return; }
L_0018279C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00D60000u);
    c.r[3].d[0] = c.r[3].d[0] | 63488ull;
    st32((c.r[16].w[0] + 448u), c.r[3].w[0]);
    c.r[3].d[0] = 0ull | 36952ull;
    st32((c.r[16].w[0] + 452u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001827C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001827D0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0080(c, 308u, depth + 1u); else { c.pc = 0x00303FA0u; return; } if (c.pc != 0x001827D0u) [[unlikely]] return; }
L_001827D0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 18512u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001827F4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001827F4u) [[unlikely]] return; }
L_001827F4:
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182800u); mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 287u, depth + 1u); else { c.pc = 0x00303B80u; return; } if (c.pc != 0x00182800u) [[unlikely]] return; }
L_00182800:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182808u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_0080(c, 295u, depth + 1u); else { c.pc = 0x00303D30u; return; } if (c.pc != 0x00182808u) [[unlikely]] return; }
L_00182808:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182814u); set32(c.r[4], c.r[2].w[0] + 15904u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x00182814u) [[unlikely]] return; }
L_00182814:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00182830:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5175u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00182870; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182864u); st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_001F(c, 247u, depth + 1u); else { c.pc = 0x0017F440u; return; } if (c.pc != 0x00182864u) [[unlikely]] return; }
L_00182864:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00182870; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00182870:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00182880:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 5u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001828D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001828A0u);  if (depth < kMaxDepth) unit_0093(c, 300u, depth + 1u); else { c.pc = 0x0034FD20u; return; } if (c.pc != 0x001828A0u) [[unlikely]] return; }
L_001828A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00182958; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001828BCu); st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0017(c, 184u, depth + 1u); else { c.pc = 0x0015D800u; return; } if (c.pc != 0x001828BCu) [[unlikely]] return; }
L_001828BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001828C4u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0017(c, 187u, depth + 1u); else { c.pc = 0x0015D8D0u; return; } if (c.pc != 0x001828C4u) [[unlikely]] return; }
L_001828C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001828CCu);  if (depth < kMaxDepth) unit_0021(c, 83u, depth + 1u); else { c.pc = 0x00185030u; return; } if (c.pc != 0x001828CCu) [[unlikely]] return; }
L_001828CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0018295C; } }
L_001828D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001828DCu);  if (depth < kMaxDepth) unit_0020(c, 364u, depth + 1u); else { c.pc = 0x00183E50u; return; } if (c.pc != 0x001828DCu) [[unlikely]] return; }
L_001828DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018291C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182900u); st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0080(c, 270u, depth + 1u); else { c.pc = 0x003036C0u; return; } if (c.pc != 0x00182900u) [[unlikely]] return; }
L_00182900:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0018291C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018291Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x0018291Cu) [[unlikely]] return; }
L_0018291C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[3].w[0] + 156u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182934u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00182934u) [[unlikely]] return; }
L_00182934:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[4].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_00182958; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182958u); set32(c.r[4], c.r[2].w[0] - 31024u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x00182958u) [[unlikely]] return; }
L_00182958:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0018295C:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00182970:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182980u);  if (depth < kMaxDepth) unit_000E(c, 28u, depth + 1u); else { c.pc = 0x00138590u; return; } if (c.pc != 0x00182980u) [[unlikely]] return; }
L_00182980:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00182990:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[2], c.r[2].w[0] + 3008u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    st32((c.r[28].w[0] - 26216u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[6], 0u + 192u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001829B4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001829B4u) [[unlikely]] return; }
L_001829B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[2].w[0] - 6416u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[5], c.r[2].w[0] + 21944u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001829D0u); set32(c.r[6], c.r[2].w[0] + 22064u);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x001829D0u) [[unlikely]] return; }
L_001829D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00D50000u);
    c.r[4].d[0] = c.r[2].d[0] | 14336ull;
    st32((c.r[28].w[0] - 26616u), c.r[4].w[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001829E8u); c.r[6].d[0] = 0ull | 33792ull;  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001829E8u) [[unlikely]] return; }
L_001829E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00D50000u);
    c.r[4].d[0] = c.r[2].d[0] | 48128ull;
    set32(c.r[6], 0u + 1280u);
    st32((c.r[28].w[0] - 26608u), c.r[4].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182A00u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00182A00u) [[unlikely]] return; }
L_00182A00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00D50000u);
    set32(c.r[4], 0u + 1203u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182A10u); c.r[5].d[0] = c.r[2].d[0] | 51200ull;  if (depth < kMaxDepth) unit_000D(c, 71u, depth + 1u); else { c.pc = 0x00135140u; return; } if (c.pc != 0x00182A10u) [[unlikely]] return; }
L_00182A10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[2].w[0] - 7392u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00D50000u);
    set32(c.r[6], 0u + 964u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182A28u); c.r[5].d[0] = c.r[2].d[0] | 51200ull;  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x00182A28u) [[unlikely]] return; }
L_00182A28:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[6], c.r[3].w[0] + 3200u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 4;
L_00182A38:
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] + 28u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00182A38u | kUnwind; return; } goto L_00182A38; } }
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00182A70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 255u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 18496u);
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 15;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00182AACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00182AACu) [[unlikely]] return; }
L_00182AAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182AB4u); mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 308u, depth + 1u); else { c.pc = 0x00303FA0u; return; } if (c.pc != 0x00182AB4u) [[unlikely]] return; }
L_00182AB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182ABCu); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_0080(c, 287u, depth + 1u); else { c.pc = 0x00303B80u; return; } if (c.pc != 0x00182ABCu) [[unlikely]] return; }
L_00182ABC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182AC4u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_0080(c, 295u, depth + 1u); else { c.pc = 0x00303D30u; return; } if (c.pc != 0x00182AC4u) [[unlikely]] return; }
L_00182AC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182AD0u); set32(c.r[4], c.r[2].w[0] + 15904u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x00182AD0u) [[unlikely]] return; }
L_00182AD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182ADCu); set32(c.r[4], c.r[2].w[0] - 31024u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x00182ADCu) [[unlikely]] return; }
L_00182ADC:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00182AF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 24u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 13u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 26u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 27u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 17u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 14u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st32((c.r[2].w[0] + 136u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 12u)));
    c.budget -= 33;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00182B80; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00182B80:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u + 4u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    st8((c.r[2].w[0] + 12u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st16((c.r[2].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 255u);
    c.budget -= 8;
L_00182BA0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st8((c.r[2].w[0] + 68u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[2].w[0] + 71u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00182BA0u | kUnwind; return; } goto L_00182BA0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 87u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[2].w[0] + 163u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00182BE8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 3u);
    st8((c.r[2].w[0] + 163u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00182BE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182BF0u);  if (depth < kMaxDepth) unit_0017(c, 184u, depth + 1u); else { c.pc = 0x0015D800u; return; } if (c.pc != 0x00182BF0u) [[unlikely]] return; }
L_00182BF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182BF8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0017(c, 187u, depth + 1u); else { c.pc = 0x0015D8D0u; return; } if (c.pc != 0x00182BF8u) [[unlikely]] return; }
L_00182BF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182C00u);  if (depth < kMaxDepth) unit_0080(c, 270u, depth + 1u); else { c.pc = 0x003036C0u; return; } if (c.pc != 0x00182C00u) [[unlikely]] return; }
L_00182C00:
    set32(c.r[4], 0u + 10u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182C10u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0037(c, 109u, depth + 1u); else { c.pc = 0x001DD620u; return; } if (c.pc != 0x00182C10u) [[unlikely]] return; }
L_00182C10:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00182C20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182C30u);  if (depth < kMaxDepth) unit_0022(c, 182u, depth + 1u); else { c.pc = 0x0018AA50u; return; } if (c.pc != 0x00182C30u) [[unlikely]] return; }
L_00182C30:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 18480u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00182C54u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00182C54u) [[unlikely]] return; }
L_00182C54:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00182C70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[3].w[0] + 2u);  if (t) { goto L_00183300; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[6], c.r[6].w[0] + 22128u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00180000u < 16384u) { entry = entries_0020[(t - 0x00180000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00182CA8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[7], c.r[3].w[0] + 3u);  if (t) { goto L_00183300; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[6], c.r[6].w[0] + 22080u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00180000u < 16384u) { entry = entries_0020[(t - 0x00180000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00182CD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182CDCu);  if (depth < kMaxDepth) unit_009D(c, 15u, depth + 1u); else { c.pc = 0x00374520u; return; } if (c.pc != 0x00182CDCu) [[unlikely]] return; }
L_00182CDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00182D0C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 22u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182CFCu); st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0021(c, 63u, depth + 1u); else { c.pc = 0x00184D00u; return; } if (c.pc != 0x00182CFCu) [[unlikely]] return; }
L_00182CFC:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 60u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 132u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_00183300; } }
L_00182D0C:
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00183300; } }
L_00182D20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182D28u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 64u, depth + 1u); else { c.pc = 0x00184D30u; return; } if (c.pc != 0x00182D28u) [[unlikely]] return; }
L_00182D28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00183300; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 132u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] > 0; st16((c.r[5].w[0] + 132u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00183300; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00183300; } }
L_00182D58:
    set32(c.r[3], ld32((c.r[28].w[0] - 26220u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00182D90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182D70u);  if (depth < kMaxDepth) unit_0021(c, 63u, depth + 1u); else { c.pc = 0x00184D00u; return; } if (c.pc != 0x00182D70u) [[unlikely]] return; }
L_00182D70:
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 30u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 132u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_00183300; } }
L_00182D90:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00183300; } }
L_00182DA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182DA8u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 64u, depth + 1u); else { c.pc = 0x00184D30u; return; } if (c.pc != 0x00182DA8u) [[unlikely]] return; }
L_00182DA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00183300; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 132u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] > 0; st16((c.r[5].w[0] + 132u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00183300; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00183300; } }
L_00182DD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182DE0u);  if (depth < kMaxDepth) unit_00A4(c, 159u, depth + 1u); else { c.pc = 0x003938E0u; return; } if (c.pc != 0x00182DE0u) [[unlikely]] return; }
L_00182DE0:
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; st32((c.r[4].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_00182E14; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 78u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00183300; } }
L_00182E14:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 78u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00183300; } }
L_00182E34:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[3], 0u - 5u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 64u)));
    st8((c.r[4].w[0] + 73u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[4].w[0] + 70u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[5], c.r[4].w[0] + 64u);
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 14;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00182E80; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 28u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00182E80; } }
    st32((c.r[5].w[0]), 0u);
    c.budget -= 1;
L_00182E80:
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u - 4u);
    set32(c.r[5], c.r[4].w[0] + 64u);
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00182EAC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 6u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00182EAC; } }
    st32((c.r[5].w[0]), 0u);
    c.budget -= 1;
L_00182EAC:
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u - 3u);
    set32(c.r[5], c.r[4].w[0] + 64u);
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00182EE4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30528u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 6u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00182EE4; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 28u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00182EE4; } }
    st32((c.r[5].w[0]), 0u);
    c.budget -= 1;
L_00182EE4:
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_00183300; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00183300; } }
L_00182F0C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[2], 0u - 100u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 16u);  if (t) { goto L_00182FA4; } }
    set32(c.r[2], 0u - 50u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00182FA0; } }
    set32(c.r[2], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 20u);  if (t) { goto L_00182F98; } }
    set32(c.r[2], 0u - 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 19u);  if (t) { goto L_00182F8C; } }
    set32(c.r[2], 0u - 5u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 18u);  if (t) { goto L_00182F80; } }
    set32(c.r[2], 0u - 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 17u);  if (t) { goto L_00182F74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00182FA0; } }
    set32(c.r[2], 0u + 17u);
    c.budget -= 1;
L_00182F74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 140u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00182FA8; } }
    set32(c.r[2], 0u + 18u);
    c.budget -= 1;
L_00182F80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 140u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00182FA8; } }
    set32(c.r[2], 0u + 19u);
    c.budget -= 1;
L_00182F8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 140u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00182FA8; } }
    set32(c.r[2], 0u + 20u);
    c.budget -= 1;
L_00182F98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 140u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00182FA8; } }
L_00182FA0:
    set32(c.r[2], 0u + 16u);
    c.budget -= 1;
L_00182FA4:
    st8((c.r[4].w[0] + 140u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00182FA8:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182FB4u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 63u, depth + 1u); else { c.pc = 0x00184D00u; return; } if (c.pc != 0x00182FB4u) [[unlikely]] return; }
L_00182FB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00183304; } }
L_00182FBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00182FC4u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 64u, depth + 1u); else { c.pc = 0x00184D30u; return; } if (c.pc != 0x00182FC4u) [[unlikely]] return; }
L_00182FC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00183300; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00183300; } }
L_00182FE0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[4].d[0] = ld16((c.r[1].w[0] + 3268u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 3288u));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 1020ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00183300; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00183300; } }
L_00183018:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00183034u); st8((c.r[2].w[0] + 129u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0021(c, 63u, depth + 1u); else { c.pc = 0x00184D00u; return; } if (c.pc != 0x00183034u) [[unlikely]] return; }
L_00183034:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00183040u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 64u, depth + 1u); else { c.pc = 0x00184D30u; return; } if (c.pc != 0x00183040u) [[unlikely]] return; }
L_00183040:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00183300; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00183300; } }
L_0018305C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 129u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0018306Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0022(c, 180u, depth + 1u); else { c.pc = 0x0018A9C0u; return; } if (c.pc != 0x0018306Cu) [[unlikely]] return; }
L_0018306C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00183300; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 129u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
L_00183080:
    st8((c.r[4].w[0] + 129u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00183300; } }
L_001830A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001830A8u);  if (depth < kMaxDepth) unit_0022(c, 181u, depth + 1u); else { c.pc = 0x0018AA20u; return; } if (c.pc != 0x001830A8u) [[unlikely]] return; }
L_001830A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00183300; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00183300; } }
L_001830C4:
    c.r[6].d[0] = ld8((c.r[3].w[0] + 68u));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 71u));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { goto L_00183300; } }
    c.r[4].d[0] = ld8((c.r[3].w[0] + 69u));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 72u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00183300; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00183300; } }
L_001830F4:
    c.r[5].d[0] = ld8((c.r[3].w[0] + 68u));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 71u));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_00183114; } }
    c.r[5].d[0] = ld8((c.r[3].w[0] + 69u));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 72u));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (t) { goto L_00183140; } }
L_00183114:
    st8((c.r[3].w[0] + 129u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], 0u - 2u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 143u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00183300; } }
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 1;
L_00183140:
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[8], c.r[3], c.r[0]);
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
L_0018314C:
    c.r[4].d[0] = ld8((c.r[8].w[0] + 68u));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { mmi::paddub(c.r[7], c.r[0], c.r[0]);  goto L_00183164; }
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[5].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_00183170; }
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 1;
L_00183164:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00183180; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_00183170:
    c.r[7].d[0] = c.r[7].d[0] | c.r[4].d[0];
    c.r[4].d[0] = c.r[6].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0018314Cu | kUnwind; return; } goto L_0018314C; } }
L_00183180:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_001832F4; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00183260; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00183218; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001831B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00183300; } }
L_001831B4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 78u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_001831E8; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001831E4; } }
    set32(c.r[2], 0u + 7u);
    st8((c.r[3].w[0] + 140u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 12u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 147u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001831F8; } }
L_001831E4:
    set32(c.r[2], 0u + 6u);
    c.budget -= 1;
L_001831E8:
    st8((c.r[3].w[0] + 140u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 7u);
    st8((c.r[2].w[0] + 147u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001831F8:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00183204u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 63u, depth + 1u); else { c.pc = 0x00184D00u; return; } if (c.pc != 0x00183204u) [[unlikely]] return; }
L_00183204:
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00183300; } }
L_00183218:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00183220u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 64u, depth + 1u); else { c.pc = 0x00184D30u; return; } if (c.pc != 0x00183220u) [[unlikely]] return; }
L_00183220:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00183300; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 149u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 150u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 151u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 148u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00183300; } }
L_00183260:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00183268u);  if (depth < kMaxDepth) unit_0022(c, 171u, depth + 1u); else { c.pc = 0x0018A7D0u; return; } if (c.pc != 0x00183268u) [[unlikely]] return; }
L_00183268:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00183300; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0018328C; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 148u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001832A4; } }
L_0018328C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00183300; } }
L_001832A4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00183300; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 78u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_001832D8; } }
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 4u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00183300; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_001832D8:
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00183300; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_001832F4:
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_00183300:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00183304:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00183310:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 4u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], c.r[6].w[0] + 2u);  if (t) { goto L_001836FC; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00183460; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00183388; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00183388; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00183364; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_001837A8; } }
L_00183364:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 31u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 129u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 130u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
L_00183388:
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 129u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 68u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_00183428; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001833A8u);  if (depth < kMaxDepth) unit_0022(c, 122u, depth + 1u); else { c.pc = 0x00189A90u; return; } if (c.pc != 0x001833A8u) [[unlikely]] return; }
L_001833A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0018342C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00183410; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001833C8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0022(c, 153u, depth + 1u); else { c.pc = 0x0018A310u; return; } if (c.pc != 0x001833C8u) [[unlikely]] return; }
L_001833C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00183410; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 129u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0] + 74u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 77u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0018342C; } }
L_00183410:
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[16], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 129u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 74u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0018342C; } }
L_00183428:
    set32(c.r[16], 0u - 1u);
    c.budget -= 1;
L_0018342C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001837A4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 129u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 129u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 31u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001837A4; } }
L_00183460:
    c.r[7].d[0] = ld8((c.r[6].w[0] + 68u));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 71u));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_00183480; } }
    c.r[8].d[0] = ld8((c.r[6].w[0] + 69u));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 72u));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[3].d[0];  if (t) { goto L_001834A8; } }
L_00183480:
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], 0u - 2u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 143u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001837A4; } }
L_001834A8:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_001834CC; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 80u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < 150ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00183504; } }
L_001834CC:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_001834F4; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 84u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < 150ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00183504; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_001834F4:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_00183504; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[3].d[0];  if (t) { goto L_00183544; } }
L_00183504:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 78u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0018352C; } }
    set32(c.r[3], 0u + 3u);
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001837A4; } }
L_0018352C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001837A4; } }
L_00183544:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 3u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], c.r[6].w[0] + 3u);  if (t) { goto L_00183690; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00183648; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00183570; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001837A4; } }
L_00183570:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 78u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_001835B4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001835B0; } }
    set32(c.r[2], 0u + 11u);
    st8((c.r[3].w[0] + 140u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 12u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 147u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001835C4; } }
L_001835B0:
    set32(c.r[2], 0u + 8u);
    c.budget -= 1;
L_001835B4:
    st8((c.r[3].w[0] + 140u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 7u);
    st8((c.r[2].w[0] + 147u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001835C4:
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 69u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00183634; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < 150ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00183634; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 140u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 140u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 68u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00183634; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < 150ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00183634; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 140u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 140u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00183634:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00183640u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 63u, depth + 1u); else { c.pc = 0x00184D00u; return; } if (c.pc != 0x00183640u) [[unlikely]] return; }
L_00183640:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001837A4; } }
L_00183648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00183650u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 64u, depth + 1u); else { c.pc = 0x00184D30u; return; } if (c.pc != 0x00183650u) [[unlikely]] return; }
L_00183650:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001837A4; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 149u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 150u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 151u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 148u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001837A4; } }
L_00183690:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00183698u);  if (depth < kMaxDepth) unit_0022(c, 171u, depth + 1u); else { c.pc = 0x0018A7D0u; return; } if (c.pc != 0x00183698u) [[unlikely]] return; }
L_00183698:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001837A4; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_001836BC; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 148u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001836DC; } }
L_001836BC:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001837A4; } }
L_001836DC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001837A4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001837A4; } }
L_001836FC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 78u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (t) { goto L_0018377C; } }
    set32(c.r[3], 0u + 100u);
    st16((c.r[6].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 13u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00183780; } }
    st16((c.r[4].w[0] + 20u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 30528u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 28u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0018376C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 76u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 77u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00183780; } }
L_0018376C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 76u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00183780; } }
L_0018377C:
    set32(c.r[5], 0u - 1u);
    c.budget -= 1;
L_00183780:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001837A4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 3u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
L_001837A4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001837A8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001837C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 77u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00183AAC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[7], c.r[5].w[0] + 2u);  if (t) { goto L_00183D30; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] + 22192u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00180000u < 16384u) { entry = entries_0020[(t - 0x00180000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00183804:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26616u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00183820u); c.r[6].d[0] = 0ull | 33792ull;  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00183820u) [[unlikely]] return; }
L_00183820:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[2].w[0] - 6288u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[5], c.r[2].w[0] + 21648u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[6], c.r[2].w[0] - 6416u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00183844u); set32(c.r[7], c.r[2].w[0] - 6416u);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x00183844u) [[unlikely]] return; }
    goto L_00183844;
L_00183840:
    set32(c.r[7], c.r[2].w[0] - 6416u);
    c.budget -= 1;
L_00183844:
    set32(c.r[5], ld32((c.r[28].w[0] - 26616u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.r[4].d[0] = 0ull | 33792ull;
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 40u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st32((c.r[2].w[0] + 44u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st32((c.r[2].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 31u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 129u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00183880u); set32(c.r[4], c.r[2].w[0] + 2u);  if (depth < kMaxDepth) unit_0021(c, 63u, depth + 1u); else { c.pc = 0x00184D00u; return; } if (c.pc != 0x00183880u) [[unlikely]] return; }
L_00183880:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 60u);
    st16((c.r[2].w[0] + 132u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0018388C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00183898u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 64u, depth + 1u); else { c.pc = 0x00184D30u; return; } if (c.pc != 0x00183898u) [[unlikely]] return; }
L_00183898:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00183D30; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 132u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] > 0; st16((c.r[5].w[0] + 132u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00183D30; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00183D30; } }
L_001838C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001838D0u);  if (depth < kMaxDepth) unit_0022(c, 134u, depth + 1u); else { c.pc = 0x00189DE0u; return; } if (c.pc != 0x001838D0u) [[unlikely]] return; }
L_001838D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00183D30; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00183960; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[6].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 129u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    st8((c.r[2].w[0] + 74u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 131u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 131u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00183920u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0022(c, 93u, depth + 1u); else { c.pc = 0x001895D0u; return; } if (c.pc != 0x00183920u) [[unlikely]] return; }
L_00183920:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 60u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 186u)));
    st8((c.r[4].w[0] + 187u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 152u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st8((c.r[4].w[0] + 152u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st16((c.r[2].w[0] + 22u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 129u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00183958u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0021(c, 63u, depth + 1u); else { c.pc = 0x00184D00u; return; } if (c.pc != 0x00183958u) [[unlikely]] return; }
L_00183958:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00183D34; } }
L_00183960:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 21u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 129u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00183978u); st8((c.r[2].w[0] + 74u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0021(c, 63u, depth + 1u); else { c.pc = 0x00184D00u; return; } if (c.pc != 0x00183978u) [[unlikely]] return; }
L_00183978:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00183D30; } }
L_00183988:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00183990u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 64u, depth + 1u); else { c.pc = 0x00184D30u; return; } if (c.pc != 0x00183990u) [[unlikely]] return; }
L_00183990:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00183D30; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 22u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 22u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001839CC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001839C4u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 163u)));  if (depth < kMaxDepth) unit_000E(c, 152u, depth + 1u); else { c.pc = 0x0013A1A0u; return; } if (c.pc != 0x001839C4u) [[unlikely]] return; }
L_001839C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00183D30; } }
L_001839CC:
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00183D30; } }
L_001839E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001839F0u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 64u, depth + 1u); else { c.pc = 0x00184D30u; return; } if (c.pc != 0x001839F0u) [[unlikely]] return; }
L_001839F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00183D30; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[6].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 149u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 147u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 150u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 151u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 148u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00183D30; } }
L_00183A3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00183A44u);  if (depth < kMaxDepth) unit_0022(c, 171u, depth + 1u); else { c.pc = 0x0018A7D0u; return; } if (c.pc != 0x00183A44u) [[unlikely]] return; }
L_00183A44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00183D30; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00183A68; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 148u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00183A88; } }
L_00183A68:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00183D30; } }
L_00183A88:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00183D30; } }
    set32(c.r[3], 0u + 3u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00183D30; } }
L_00183AAC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[7], c.r[5].w[0] + 2u);  if (t) { goto L_00183D30; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] + 22160u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00180000u < 16384u) { entry = entries_0020[(t - 0x00180000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00183AD8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26616u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00183AF4u); c.r[6].d[0] = 0ull | 33792ull;  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00183AF4u) [[unlikely]] return; }
L_00183AF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00183AFCu); set32(c.r[4], 0u + 14u);  if (depth < kMaxDepth) unit_0021(c, 63u, depth + 1u); else { c.pc = 0x00184D00u; return; } if (c.pc != 0x00183AFCu) [[unlikely]] return; }
L_00183AFC:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 60u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 132u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_00183D30; } }
L_00183B0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00183B14u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 64u, depth + 1u); else { c.pc = 0x00184D30u; return; } if (c.pc != 0x00183B14u) [[unlikely]] return; }
L_00183B14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00183D30; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 132u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] > 0; st16((c.r[5].w[0] + 132u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00183D30; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00183D30; } }
L_00183B44:
    set32(c.r[3], 0u + 100u);
    st16((c.r[5].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 13u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00183D30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00183B64u);  if (depth < kMaxDepth) unit_0022(c, 140u, depth + 1u); else { c.pc = 0x00189FD0u; return; } if (c.pc != 0x00183B64u) [[unlikely]] return; }
L_00183B64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00183D30; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st16((c.r[3].w[0] + 20u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[3].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_00183BF0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], 0u - 1u);
    st8((c.r[2].w[0] + 76u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 131u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 131u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00183BB8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0022(c, 93u, depth + 1u); else { c.pc = 0x001895D0u; return; } if (c.pc != 0x00183BB8u) [[unlikely]] return; }
L_00183BB8:
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 60u);
    set32(c.r[4], 0u + 15u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 186u)));
    st8((c.r[5].w[0] + 187u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 152u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st8((c.r[5].w[0] + 152u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00183BE8u); st16((c.r[2].w[0] + 22u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0021(c, 63u, depth + 1u); else { c.pc = 0x00184D00u; return; } if (c.pc != 0x00183BE8u) [[unlikely]] return; }
L_00183BE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00183D30; } }
L_00183BF0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 21u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00183C00u); st8((c.r[2].w[0] + 76u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0021(c, 63u, depth + 1u); else { c.pc = 0x00184D00u; return; } if (c.pc != 0x00183C00u) [[unlikely]] return; }
L_00183C00:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00183D30; } }
L_00183C10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00183C18u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 64u, depth + 1u); else { c.pc = 0x00184D30u; return; } if (c.pc != 0x00183C18u) [[unlikely]] return; }
L_00183C18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00183D30; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 22u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 22u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00183C54; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00183C4Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 163u)));  if (depth < kMaxDepth) unit_000E(c, 152u, depth + 1u); else { c.pc = 0x0013A1A0u; return; } if (c.pc != 0x00183C4Cu) [[unlikely]] return; }
L_00183C4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00183D30; } }
L_00183C54:
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00183D30; } }
L_00183C70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00183C78u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 140u)));  if (depth < kMaxDepth) unit_0021(c, 64u, depth + 1u); else { c.pc = 0x00184D30u; return; } if (c.pc != 0x00183C78u) [[unlikely]] return; }
L_00183C78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00183D30; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[6].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 149u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 147u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 150u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 151u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 148u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00183D30; } }
L_00183CC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00183CCCu);  if (depth < kMaxDepth) unit_0022(c, 171u, depth + 1u); else { c.pc = 0x0018A7D0u; return; } if (c.pc != 0x00183CCCu) [[unlikely]] return; }
L_00183CCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00183D30; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00183CF0; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 148u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00183D10; } }
L_00183CF0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00183D30; } }
L_00183D10:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00183D30; } }
    set32(c.r[3], 0u + 3u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_00183D30:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00183D34:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00183D40:
    set32(c.r[4], ld32((c.r[28].w[0] - 26216u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 13u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00183D7C; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 54u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[4], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[3].w[0] + 140u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 11;
L_00183D7C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00183D90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], 0u + 1u);
    st8((c.r[2].w[0] + 54u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], c.r[2].w[0] + 2u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_00183DE8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00183DD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_00183E38; } }
L_00183DD0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[5], 0u + 8u);
    set32(c.r[6], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00183DE8u); st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_001B(c, 51u, depth + 1u); else { c.pc = 0x0016CF60u; return; } if (c.pc != 0x00183DE8u) [[unlikely]] return; }
L_00183DE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00183DF0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x00183DF0u) [[unlikely]] return; }
L_00183DF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00183E34; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 13u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00183E34; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[16].d[0] = c.r[16].d[0] | 2ull;
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18542u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26176u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[2].w[0] + c.r[1].w[0]);
    st8((c.r[1].w[0] + 18543u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 11;
L_00183E34:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 1;
L_00183E38:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00183E50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00183E60u);  if (depth < kMaxDepth) unit_0022(c, 182u, depth + 1u); else { c.pc = 0x0018AA50u; return; } if (c.pc != 0x00183E60u) [[unlikely]] return; }
L_00183E60:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 18464u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00183E84u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00183E84u) [[unlikely]] return; }
L_00183E84:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00183E90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[5].w[0] + 1u);  if (t) { goto L_00183F48; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00183ED4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00183EC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00183FB4; } }
L_00183EC8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00183ED4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = c.r[5].w[0];
    c.f[1] = ld32((c.r[3].w[0] + 136u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 136u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[2].w[0] + 156u), c.f[0]);  if (t) { goto L_00183FB0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st32((c.r[2].w[0] + 156u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st32((c.r[2].w[0] + 136u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 144u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00183F40u); set32(c.r[6], c.r[2].w[0] + 136u);  if (depth < kMaxDepth) unit_0037(c, 109u, depth + 1u); else { c.pc = 0x001DD620u; return; } if (c.pc != 0x00183F40u) [[unlikely]] return; }
L_00183F40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00183FB0; } }
L_00183F48:
    c.f[1] = ld32((c.r[5].w[0] + 136u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[4].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[5].w[0] + 136u), c.f[0]);  if (t) { goto L_00183FB0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 136u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 128u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26216u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 15;
L_00183FB0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00183FB4:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00183FC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26216u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 18448u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00183FECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00183FECu) [[unlikely]] return; }
L_00183FEC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
}

}
