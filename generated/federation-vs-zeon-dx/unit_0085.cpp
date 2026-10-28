#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0085[4096] = {
    1, 0, 2, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0,
    0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0,
    0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0,
    0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0,
    0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0,
    0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0,
    0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0,
    0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0,
    0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0,
    67, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0,
    0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0,
    86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0,
    88, 0, 0, 89, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0,
    96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100,
    0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 104, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0,
    0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 123, 0, 124, 0, 125,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0,
    0, 127, 0, 128, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0,
    0, 0, 0, 0, 0, 133, 0, 134, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140,
    0, 0, 0, 141, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145,
    0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 149, 0, 150, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 154, 0, 0, 155, 0, 0, 0, 0,
    156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 160, 0, 0, 161,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0,
    168, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0,
    180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0,
    0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0,
    0, 184, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0,
    191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0,
    0, 0, 200, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 204, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 0,
    207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 209, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 214,
    0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0,
    0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 252, 0, 0, 253, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0,
    255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0,
    0, 0, 265, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0,
    0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 279,
    0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 288, 0, 0, 0, 0,
    0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 299, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0,
    0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0,
    0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312,
    0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0,
    316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 322,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 329, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 336, 0, 0, 337, 0, 0,
    0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 341, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    344, 0, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 350,
    0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 354, 0, 0, 0, 0, 0, 355,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0085(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00314000;
    case 2u: goto L_00314008;
    case 3u: goto L_00314010;
    case 4u: goto L_00314020;
    case 5u: goto L_00314034;
    case 6u: goto L_00314044;
    case 7u: goto L_00314054;
    case 8u: goto L_00314064;
    case 9u: goto L_00314074;
    case 10u: goto L_00314084;
    case 11u: goto L_00314094;
    case 12u: goto L_003140B0;
    case 13u: goto L_003140C4;
    case 14u: goto L_003140D4;
    case 15u: goto L_003140F0;
    case 16u: goto L_00314104;
    case 17u: goto L_00314114;
    case 18u: goto L_00314130;
    case 19u: goto L_00314144;
    case 20u: goto L_00314154;
    case 21u: goto L_00314164;
    case 22u: goto L_00314174;
    case 23u: goto L_00314184;
    case 24u: goto L_003141A0;
    case 25u: goto L_003141B4;
    case 26u: goto L_003141C4;
    case 27u: goto L_003141D4;
    case 28u: goto L_003141E4;
    case 29u: goto L_003141F4;
    case 30u: goto L_00314204;
    case 31u: goto L_00314220;
    case 32u: goto L_00314234;
    case 33u: goto L_00314244;
    case 34u: goto L_00314260;
    case 35u: goto L_00314274;
    case 36u: goto L_00314284;
    case 37u: goto L_003142A0;
    case 38u: goto L_003142B0;
    case 39u: goto L_003142C4;
    case 40u: goto L_003142D4;
    case 41u: goto L_003142E4;
    case 42u: goto L_003142F4;
    case 43u: goto L_00314310;
    case 44u: goto L_00314320;
    case 45u: goto L_00314330;
    case 46u: goto L_00314340;
    case 47u: goto L_00314350;
    case 48u: goto L_00314364;
    case 49u: goto L_00314390;
    case 50u: goto L_003143A0;
    case 51u: goto L_003143B4;
    case 52u: goto L_003143D0;
    case 53u: goto L_003143E4;
    case 54u: goto L_00314404;
    case 55u: goto L_00314414;
    case 56u: goto L_00314428;
    case 57u: goto L_00314440;
    case 58u: goto L_00314450;
    case 59u: goto L_00314460;
    case 60u: goto L_00314474;
    case 61u: goto L_00314484;
    case 62u: goto L_00314494;
    case 63u: goto L_003144B0;
    case 64u: goto L_003144C0;
    case 65u: goto L_003144D4;
    case 66u: goto L_003144E4;
    case 67u: goto L_00314500;
    case 68u: goto L_00314510;
    case 69u: goto L_00314520;
    case 70u: goto L_00314530;
    case 71u: goto L_00314574;
    case 72u: goto L_00314588;
    case 73u: goto L_0031459C;
    case 74u: goto L_003145B8;
    case 75u: goto L_003145CC;
    case 76u: goto L_003145E0;
    case 77u: goto L_00314610;
    case 78u: goto L_0031462C;
    case 79u: goto L_00314650;
    case 80u: goto L_00314790;
    case 81u: goto L_00314828;
    case 82u: goto L_00314850;
    case 83u: goto L_003148A4;
    case 84u: goto L_003148B0;
    case 85u: goto L_003148EC;
    case 86u: goto L_00314900;
    case 87u: goto L_00314974;
    case 88u: goto L_00314980;
    case 89u: goto L_0031498C;
    case 90u: goto L_00314998;
    case 91u: goto L_003149B8;
    case 92u: goto L_003149E0;
    case 93u: goto L_00314A0C;
    case 94u: goto L_00314A50;
    case 95u: goto L_00314A68;
    case 96u: goto L_00314A80;
    case 97u: goto L_00314AA8;
    case 98u: goto L_00314B48;
    case 99u: goto L_00314B64;
    case 100u: goto L_00314B7C;
    case 101u: goto L_00314BA0;
    case 102u: goto L_00314BC0;
    case 103u: goto L_00314BD8;
    case 104u: goto L_00314BE0;
    case 105u: goto L_00314C60;
    case 106u: goto L_00314C70;
    case 107u: goto L_00314CB4;
    case 108u: goto L_00314CDC;
    case 109u: goto L_00314CEC;
    case 110u: goto L_00314E04;
    case 111u: goto L_00314E54;
    case 112u: goto L_00314E74;
    case 113u: goto L_00314EA0;
    case 114u: goto L_00314EA8;
    case 115u: goto L_00314ED8;
    case 116u: goto L_00314EF0;
    case 117u: goto L_00314F10;
    case 118u: goto L_00314F50;
    case 119u: goto L_00314F90;
    case 120u: goto L_00315034;
    case 121u: goto L_0031504C;
    case 122u: goto L_0031505C;
    case 123u: goto L_0031506C;
    case 124u: goto L_00315074;
    case 125u: goto L_0031507C;
    case 126u: goto L_003150E8;
    case 127u: goto L_00315104;
    case 128u: goto L_0031510C;
    case 129u: goto L_00315118;
    case 130u: goto L_0031512C;
    case 131u: goto L_0031513C;
    case 132u: goto L_00315178;
    case 133u: goto L_00315194;
    case 134u: goto L_0031519C;
    case 135u: goto L_003151A8;
    case 136u: goto L_003151F4;
    case 137u: goto L_00315238;
    case 138u: goto L_00315348;
    case 139u: goto L_00315360;
    case 140u: goto L_0031537C;
    case 141u: goto L_0031538C;
    case 142u: goto L_00315394;
    case 143u: goto L_003153A4;
    case 144u: goto L_003153C0;
    case 145u: goto L_003154FC;
    case 146u: goto L_00315508;
    case 147u: goto L_00315520;
    case 148u: goto L_00315530;
    case 149u: goto L_00315540;
    case 150u: goto L_00315548;
    case 151u: goto L_00315550;
    case 152u: goto L_003155BC;
    case 153u: goto L_003155D8;
    case 154u: goto L_003155E0;
    case 155u: goto L_003155EC;
    case 156u: goto L_00315600;
    case 157u: goto L_00315610;
    case 158u: goto L_0031564C;
    case 159u: goto L_00315668;
    case 160u: goto L_00315670;
    case 161u: goto L_0031567C;
    case 162u: goto L_003156C8;
    case 163u: goto L_0031570C;
    case 164u: goto L_00315730;
    case 165u: goto L_00315748;
    case 166u: goto L_00315764;
    case 167u: goto L_00315774;
    case 168u: goto L_00315780;
    case 169u: goto L_00315788;
    case 170u: goto L_00315798;
    case 171u: goto L_003157B0;
    case 172u: goto L_00315820;
    case 173u: goto L_00315898;
    case 174u: goto L_00315988;
    case 175u: goto L_00315A34;
    case 176u: goto L_00315A44;
    case 177u: goto L_00315A70;
    case 178u: goto L_00315AD0;
    case 179u: goto L_00315ADC;
    case 180u: goto L_00315B00;
    case 181u: goto L_00315B60;
    case 182u: goto L_00315B84;
    case 183u: goto L_00315BE4;
    case 184u: goto L_00315C04;
    case 185u: goto L_00315C10;
    case 186u: goto L_00315C34;
    case 187u: goto L_00315C60;
    case 188u: goto L_00315CBC;
    case 189u: goto L_00315CC8;
    case 190u: goto L_00315CF8;
    case 191u: goto L_00315D00;
    case 192u: goto L_00315D10;
    case 193u: goto L_00315DCC;
    case 194u: goto L_00315DD8;
    case 195u: goto L_00315E04;
    case 196u: goto L_00315E20;
    case 197u: goto L_00315E64;
    case 198u: goto L_00315EE8;
    case 199u: goto L_00315EF8;
    case 200u: goto L_00315F08;
    case 201u: goto L_00315F10;
    case 202u: goto L_00315F34;
    case 203u: goto L_00315FEC;
    case 204u: goto L_00315FF8;
    case 205u: goto L_00316058;
    case 206u: goto L_00316064;
    case 207u: goto L_00316080;
    case 208u: goto L_003160C4;
    case 209u: goto L_0031610C;
    case 210u: goto L_00316118;
    case 211u: goto L_00316128;
    case 212u: goto L_00316144;
    case 213u: goto L_00316170;
    case 214u: goto L_0031617C;
    case 215u: goto L_0031618C;
    case 216u: goto L_003161B0;
    case 217u: goto L_003161FC;
    case 218u: goto L_00316250;
    case 219u: goto L_0031625C;
    case 220u: goto L_00316274;
    case 221u: goto L_003162AC;
    case 222u: goto L_003162B8;
    case 223u: goto L_003162D0;
    case 224u: goto L_0031632C;
    case 225u: goto L_00316358;
    case 226u: goto L_00316368;
    case 227u: goto L_0031638C;
    case 228u: goto L_0031639C;
    case 229u: goto L_003163A8;
    case 230u: goto L_003163D8;
    case 231u: goto L_003163F0;
    case 232u: goto L_00316428;
    case 233u: goto L_00316440;
    case 234u: goto L_003164A0;
    case 235u: goto L_003165BC;
    case 236u: goto L_00316638;
    case 237u: goto L_00316648;
    case 238u: goto L_00316694;
    case 239u: goto L_003166A4;
    case 240u: goto L_003166B0;
    case 241u: goto L_003166E0;
    case 242u: goto L_003166F8;
    case 243u: goto L_00316730;
    case 244u: goto L_00316748;
    case 245u: goto L_00316760;
    case 246u: goto L_003167D0;
    case 247u: goto L_00316818;
    case 248u: goto L_00316898;
    case 249u: goto L_003168A8;
    case 250u: goto L_003168B4;
    case 251u: goto L_003169E0;
    case 252u: goto L_003169EC;
    case 253u: goto L_003169F8;
    case 254u: goto L_00316A60;
    case 255u: goto L_00316A80;
    case 256u: goto L_00316AF4;
    case 257u: goto L_00316BC0;
    case 258u: goto L_00316BE4;
    case 259u: goto L_00316C7C;
    case 260u: goto L_00316CA4;
    case 261u: goto L_00316D1C;
    case 262u: goto L_00316D28;
    case 263u: goto L_00316D54;
    case 264u: goto L_00316D78;
    case 265u: goto L_00316D88;
    case 266u: goto L_00316D94;
    case 267u: goto L_00316DAC;
    case 268u: goto L_00316DC0;
    case 269u: goto L_00316DDC;
    case 270u: goto L_00316EAC;
    case 271u: goto L_00316F24;
    case 272u: goto L_00316F6C;
    case 273u: goto L_00316F90;
    case 274u: goto L_00317028;
    case 275u: goto L_00317050;
    case 276u: goto L_003170C8;
    case 277u: goto L_003170D4;
    case 278u: goto L_0031716C;
    case 279u: goto L_0031717C;
    case 280u: goto L_00317188;
    case 281u: goto L_003171A0;
    case 282u: goto L_003171C0;
    case 283u: goto L_003171D8;
    case 284u: goto L_0031724C;
    case 285u: goto L_003172D0;
    case 286u: goto L_003172E4;
    case 287u: goto L_00317360;
    case 288u: goto L_0031736C;
    case 289u: goto L_00317388;
    case 290u: goto L_00317398;
    case 291u: goto L_003173B0;
    case 292u: goto L_003173C4;
    case 293u: goto L_003173E0;
    case 294u: goto L_003174AC;
    case 295u: goto L_003174C4;
    case 296u: goto L_003174D0;
    case 297u: goto L_003174FC;
    case 298u: goto L_00317558;
    case 299u: goto L_00317564;
    case 300u: goto L_00317594;
    case 301u: goto L_003175A8;
    case 302u: goto L_003175C0;
    case 303u: goto L_00317678;
    case 304u: goto L_00317690;
    case 305u: goto L_003176A0;
    case 306u: goto L_003176F0;
    case 307u: goto L_00317710;
    case 308u: goto L_00317750;
    case 309u: goto L_003177C8;
    case 310u: goto L_003177D4;
    case 311u: goto L_00317828;
    case 312u: goto L_0031787C;
    case 313u: goto L_0031788C;
    case 314u: goto L_003178D0;
    case 315u: goto L_003178DC;
    case 316u: goto L_00317900;
    case 317u: goto L_0031792C;
    case 318u: goto L_00317944;
    case 319u: goto L_00317960;
    case 320u: goto L_00317998;
    case 321u: goto L_003179EC;
    case 322u: goto L_003179FC;
    case 323u: goto L_00317A44;
    case 324u: goto L_00317A50;
    case 325u: goto L_00317A60;
    case 326u: goto L_00317AA4;
    case 327u: goto L_00317B28;
    case 328u: goto L_00317B38;
    case 329u: goto L_00317B48;
    case 330u: goto L_00317B50;
    case 331u: goto L_00317B74;
    case 332u: goto L_00317C14;
    case 333u: goto L_00317C40;
    case 334u: goto L_00317C54;
    case 335u: goto L_00317CCC;
    case 336u: goto L_00317CE8;
    case 337u: goto L_00317CF4;
    case 338u: goto L_00317D10;
    case 339u: goto L_00317D54;
    case 340u: goto L_00317D9C;
    case 341u: goto L_00317DA8;
    case 342u: goto L_00317DB8;
    case 343u: goto L_00317DD4;
    case 344u: goto L_00317E00;
    case 345u: goto L_00317E14;
    case 346u: goto L_00317E24;
    case 347u: goto L_00317E48;
    case 348u: goto L_00317E94;
    case 349u: goto L_00317EE8;
    case 350u: goto L_00317EFC;
    case 351u: goto L_00317F08;
    case 352u: goto L_00317F20;
    case 353u: goto L_00317F58;
    case 354u: goto L_00317F64;
    case 355u: goto L_00317F7C;
    case 356u: goto L_00317FD8;
    default: bad_entry(c, 0x00314000u); return;
    }
L_00314000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314008u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0085(c, 70u, depth + 1u); else { c.pc = 0x00314530u; return; } if (c.pc != 0x00314008u) [[unlikely]] return; }
L_00314008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314010u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0085(c, 79u, depth + 1u); else { c.pc = 0x00314650u; return; } if (c.pc != 0x00314010u) [[unlikely]] return; }
L_00314010:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00314020:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314034u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0086(c, 191u, depth + 1u); else { c.pc = 0x0031AEF0u; return; } if (c.pc != 0x00314034u) [[unlikely]] return; }
L_00314034:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00314094; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314044u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0084(c, 330u, depth + 1u); else { c.pc = 0x00313840u; return; } if (c.pc != 0x00314044u) [[unlikely]] return; }
L_00314044:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00314094; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314054u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0086(c, 197u, depth + 1u); else { c.pc = 0x0031AFE0u; return; } if (c.pc != 0x00314054u) [[unlikely]] return; }
L_00314054:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00314094; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314064u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0086(c, 181u, depth + 1u); else { c.pc = 0x0031ABC0u; return; } if (c.pc != 0x00314064u) [[unlikely]] return; }
L_00314064:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00314094; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314074u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0086(c, 185u, depth + 1u); else { c.pc = 0x0031AD00u; return; } if (c.pc != 0x00314074u) [[unlikely]] return; }
L_00314074:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00314094; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314084u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0086(c, 177u, depth + 1u); else { c.pc = 0x0031AAF0u; return; } if (c.pc != 0x00314084u) [[unlikely]] return; }
L_00314084:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00314094; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314094u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0086(c, 171u, depth + 1u); else { c.pc = 0x0031A9C0u; return; } if (c.pc != 0x00314094u) [[unlikely]] return; }
L_00314094:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003140B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003140C4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0084(c, 330u, depth + 1u); else { c.pc = 0x00313840u; return; } if (c.pc != 0x003140C4u) [[unlikely]] return; }
L_003140C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003140D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003140D4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0086(c, 173u, depth + 1u); else { c.pc = 0x0031AA10u; return; } if (c.pc != 0x003140D4u) [[unlikely]] return; }
L_003140D4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003140F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314104u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0084(c, 330u, depth + 1u); else { c.pc = 0x00313840u; return; } if (c.pc != 0x00314104u) [[unlikely]] return; }
L_00314104:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00314114; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314114u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0086(c, 175u, depth + 1u); else { c.pc = 0x0031AA90u; return; } if (c.pc != 0x00314114u) [[unlikely]] return; }
L_00314114:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00314130:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314144u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0084(c, 330u, depth + 1u); else { c.pc = 0x00313840u; return; } if (c.pc != 0x00314144u) [[unlikely]] return; }
L_00314144:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00314184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314154u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0086(c, 197u, depth + 1u); else { c.pc = 0x0031AFE0u; return; } if (c.pc != 0x00314154u) [[unlikely]] return; }
L_00314154:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00314184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314164u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0086(c, 181u, depth + 1u); else { c.pc = 0x0031ABC0u; return; } if (c.pc != 0x00314164u) [[unlikely]] return; }
L_00314164:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00314184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314174u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0086(c, 185u, depth + 1u); else { c.pc = 0x0031AD00u; return; } if (c.pc != 0x00314174u) [[unlikely]] return; }
L_00314174:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00314184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314184u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0086(c, 179u, depth + 1u); else { c.pc = 0x0031AB70u; return; } if (c.pc != 0x00314184u) [[unlikely]] return; }
L_00314184:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003141A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003141B4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0086(c, 191u, depth + 1u); else { c.pc = 0x0031AEF0u; return; } if (c.pc != 0x003141B4u) [[unlikely]] return; }
L_003141B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00314204; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003141C4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0084(c, 330u, depth + 1u); else { c.pc = 0x00313840u; return; } if (c.pc != 0x003141C4u) [[unlikely]] return; }
L_003141C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00314204; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003141D4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0086(c, 197u, depth + 1u); else { c.pc = 0x0031AFE0u; return; } if (c.pc != 0x003141D4u) [[unlikely]] return; }
L_003141D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00314204; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003141E4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0086(c, 181u, depth + 1u); else { c.pc = 0x0031ABC0u; return; } if (c.pc != 0x003141E4u) [[unlikely]] return; }
L_003141E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00314204; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003141F4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0086(c, 185u, depth + 1u); else { c.pc = 0x0031AD00u; return; } if (c.pc != 0x003141F4u) [[unlikely]] return; }
L_003141F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00314204; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314204u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0086(c, 177u, depth + 1u); else { c.pc = 0x0031AAF0u; return; } if (c.pc != 0x00314204u) [[unlikely]] return; }
L_00314204:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00314220:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314234u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0084(c, 330u, depth + 1u); else { c.pc = 0x00313840u; return; } if (c.pc != 0x00314234u) [[unlikely]] return; }
L_00314234:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00314244; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314244u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0086(c, 187u, depth + 1u); else { c.pc = 0x0031ADF0u; return; } if (c.pc != 0x00314244u) [[unlikely]] return; }
L_00314244:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00314260:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314274u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0084(c, 330u, depth + 1u); else { c.pc = 0x00313840u; return; } if (c.pc != 0x00314274u) [[unlikely]] return; }
L_00314274:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003142A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314284u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0086(c, 187u, depth + 1u); else { c.pc = 0x0031ADF0u; return; } if (c.pc != 0x00314284u) [[unlikely]] return; }
L_00314284:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003142A0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 778u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003142A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003142A0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0086(c, 183u, depth + 1u); else { c.pc = 0x0031AC70u; return; } if (c.pc != 0x003142A0u) [[unlikely]] return; }
L_003142A0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003142B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003142C4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0084(c, 330u, depth + 1u); else { c.pc = 0x00313840u; return; } if (c.pc != 0x003142C4u) [[unlikely]] return; }
L_003142C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003142F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003142D4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0086(c, 187u, depth + 1u); else { c.pc = 0x0031ADF0u; return; } if (c.pc != 0x003142D4u) [[unlikely]] return; }
L_003142D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003142F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003142E4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0086(c, 197u, depth + 1u); else { c.pc = 0x0031AFE0u; return; } if (c.pc != 0x003142E4u) [[unlikely]] return; }
L_003142E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003142F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003142F4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0086(c, 181u, depth + 1u); else { c.pc = 0x0031ABC0u; return; } if (c.pc != 0x003142F4u) [[unlikely]] return; }
L_003142F4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00314310:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314320u);  if (depth < kMaxDepth) unit_0084(c, 330u, depth + 1u); else { c.pc = 0x00313840u; return; } if (c.pc != 0x00314320u) [[unlikely]] return; }
L_00314320:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00314330:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314340u);  if (depth < kMaxDepth) unit_0084(c, 330u, depth + 1u); else { c.pc = 0x00313840u; return; } if (c.pc != 0x00314340u) [[unlikely]] return; }
L_00314340:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00314350:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314364u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0084(c, 330u, depth + 1u); else { c.pc = 0x00313840u; return; } if (c.pc != 0x00314364u) [[unlikely]] return; }
L_00314364:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003143B4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 778u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003143B4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_003143AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314390u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0086(c, 197u, depth + 1u); else { c.pc = 0x0031AFE0u; return; } if (c.pc != 0x00314390u) [[unlikely]] return; }
L_00314390:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003143B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003143A0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0086(c, 181u, depth + 1u); else { c.pc = 0x0031ABC0u; return; } if (c.pc != 0x003143A0u) [[unlikely]] return; }
L_003143A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003143B4; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_003143AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003143B4u);  if (depth < kMaxDepth) unit_0086(c, 189u, depth + 1u); else { c.pc = 0x0031AE80u; return; } if (c.pc != 0x003143B4u) [[unlikely]] return; }
L_003143B4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003143D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003143E4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0084(c, 330u, depth + 1u); else { c.pc = 0x00313840u; return; } if (c.pc != 0x003143E4u) [[unlikely]] return; }
L_003143E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00314428; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00314420; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314404u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0086(c, 197u, depth + 1u); else { c.pc = 0x0031AFE0u; return; } if (c.pc != 0x00314404u) [[unlikely]] return; }
L_00314404:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00314428; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314414u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0086(c, 181u, depth + 1u); else { c.pc = 0x0031ABC0u; return; } if (c.pc != 0x00314414u) [[unlikely]] return; }
L_00314414:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00314428; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00314420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314428u);  if (depth < kMaxDepth) unit_0086(c, 187u, depth + 1u); else { c.pc = 0x0031ADF0u; return; } if (c.pc != 0x00314428u) [[unlikely]] return; }
L_00314428:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00314440:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314450u);  if (depth < kMaxDepth) unit_0086(c, 193u, depth + 1u); else { c.pc = 0x0031AF60u; return; } if (c.pc != 0x00314450u) [[unlikely]] return; }
L_00314450:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00314460:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314474u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0084(c, 330u, depth + 1u); else { c.pc = 0x00313840u; return; } if (c.pc != 0x00314474u) [[unlikely]] return; }
L_00314474:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00314494; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314484u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0086(c, 193u, depth + 1u); else { c.pc = 0x0031AF60u; return; } if (c.pc != 0x00314484u) [[unlikely]] return; }
L_00314484:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00314494; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314494u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 18u, depth + 1u); else { c.pc = 0x0034C3E0u; return; } if (c.pc != 0x00314494u) [[unlikely]] return; }
L_00314494:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003144B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003144C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003144D4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0084(c, 330u, depth + 1u); else { c.pc = 0x00313840u; return; } if (c.pc != 0x003144D4u) [[unlikely]] return; }
L_003144D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00314500; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003144E4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0086(c, 187u, depth + 1u); else { c.pc = 0x0031ADF0u; return; } if (c.pc != 0x003144E4u) [[unlikely]] return; }
L_003144E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00314500; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 778u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00314500; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314500u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0086(c, 199u, depth + 1u); else { c.pc = 0x0031B090u; return; } if (c.pc != 0x00314500u) [[unlikely]] return; }
L_00314500:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00314510:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00314520:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00314530:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_003145A4; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8433u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00314634; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314574u); c.f[13] = ld32((c.r[16].w[0] + 7740u));  if (depth < kMaxDepth) unit_000E(c, 296u, depth + 1u); else { c.pc = 0x0013B590u; return; } if (c.pc != 0x00314574u) [[unlikely]] return; }
L_00314574:
    c.f[20] = c.f[0];
    c.f[0] = ld32((c.r[16].w[0] + 7816u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314588u); c.f[12] = fp::mul(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00314588u) [[unlikely]] return; }
L_00314588:
    st32((c.r[16].w[0] + 7816u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 7820u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031459Cu); c.f[12] = fp::mul(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0031459Cu) [[unlikely]] return; }
L_0031459C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 7820u), c.r[2].w[0]);  if (t) { goto L_00314634; } }
L_003145A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003145B8u); c.f[13] = ld32((c.r[16].w[0] + 7740u));  if (depth < kMaxDepth) unit_000E(c, 296u, depth + 1u); else { c.pc = 0x0013B590u; return; } if (c.pc != 0x003145B8u) [[unlikely]] return; }
L_003145B8:
    c.f[20] = c.f[0];
    c.f[0] = ld32((c.r[16].w[0] + 7912u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003145CCu); c.f[12] = fp::mul(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x003145CCu) [[unlikely]] return; }
L_003145CC:
    st32((c.r[16].w[0] + 7912u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 7916u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003145E0u); c.f[12] = fp::mul(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x003145E0u) [[unlikely]] return; }
L_003145E0:
    st32((c.r[16].w[0] + 7916u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 1288u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 1292u)));
    c.f[0] = c.r[3].w[0];
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::mul(c.f[20], c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314610u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00314610u) [[unlikely]] return; }
L_00314610:
    st32((c.r[16].w[0] + 1292u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 806u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 808u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0031462C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031462Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 87u, depth + 1u); else { c.pc = 0x0026D7B0u; return; } if (c.pc != 0x0031462Cu) [[unlikely]] return; }
L_0031462C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 806u)));
    st16((c.r[16].w[0] + 808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00314634:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00314650:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] + 9072u);
    c.f[1] = ld32((c.r[4].w[0] + 988u));
    set32(c.r[5], c.r[5].w[0] - 32u);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003146A4; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 194ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0031469C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 805u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003146CC; } }
L_0031469C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003146CC; } }
L_003146A4:
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[4].w[0] + 984u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003146C8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 805u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003146CC; } }
L_003146C8:
    st8((c.r[4].w[0] + 805u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003146CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x461C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    st32((c.r[4].w[0] + 984u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 582u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0031472C; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0] + 582u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0031470C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CF50000u);
    c.r[3].d[0] = c.r[3].d[0] | 49807ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 976u), c.r[3].w[0]);  if (t) { goto L_00314710; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_0031470C:
    st32((c.r[4].w[0] + 976u), c.r[3].w[0]);
    c.budget -= 1;
L_00314710:
    c.f[1] = ld32((c.r[4].w[0] + 976u));
    c.f[0] = ld32((c.r[4].w[0] + 980u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 1004u), c.f[0]);
    st32((c.r[4].w[0] + 7780u), c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 7740u), c.f[0]);  if (t) { goto L_00314784; } }
L_0031472C:
    c.r[5].d[0] = ld8((c.r[4].w[0] + 805u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00314770; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[5].w[0] << 2);  if (t) { goto L_0031475C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00314758; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[4].w[0] + 976u));  if (t) { goto L_00314778; } }
L_00314758:
    set32(c.r[3], c.r[5].w[0] << 2);
    c.budget -= 1;
L_0031475C:
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 1144u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 976u), c.f[0]);  if (t) { goto L_00314774; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_00314770:
    st32((c.r[4].w[0] + 976u), c.r[3].w[0]);
    c.budget -= 1;
L_00314774:
    c.f[1] = ld32((c.r[4].w[0] + 976u));
    c.budget -= 1;
L_00314778:
    c.f[0] = ld32((c.r[4].w[0] + 980u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 1004u), c.f[0]);
    c.budget -= 3;
L_00314784:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00314790:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 612u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 736u)));
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    set32(c.r[16], ld32((c.r[5].w[0] + 264u)));
    c.r[6].d[0] = ld8((c.r[17].w[0] + 6u));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 5u));
    c.r[4].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));  if (t) { goto L_003147D4; } }
    set32(c.r[18], 0u + 1u);
    c.budget -= 1;
L_003147D4:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] > 0; mmi::paddub(c.r[19], c.r[18], c.r[0]);  if (t) { goto L_003147E0; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_003147E0:
    st8((c.r[20].w[0] + 582u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[5].w[0] + 582u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 576u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00314800; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 264u)));
    st8((c.r[3].w[0] + 582u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 2;
L_00314800:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00314830; } }
    set32(c.r[2], 0u + 14u);
    st8((c.r[20].w[0] + 580u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[20].w[0] + 590u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[20].w[0] + 7775u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314828u); st8((c.r[20].w[0] + 7815u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0058(c, 374u, depth + 1u); else { c.pc = 0x00263640u; return; } if (c.pc != 0x00314828u) [[unlikely]] return; }
L_00314828:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);  if (t) { goto L_003149BC; } }
L_00314830:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 842u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00314858; } }
    mmi::paddub(c.r[19], c.r[18], c.r[0]);
    set32(c.r[5], 0u + 17u);
    set32(c.r[18], 0u + 15u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314850u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x00314850u) [[unlikely]] return; }
L_00314850:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1u)));  if (t) { goto L_00314868; } }
L_00314858:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 840u)));
    st16((c.r[20].w[0] + 842u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[20].w[0] + 838u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1u)));
    c.budget -= 4;
L_00314868:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[4].d[0]) { set32(c.r[2], 0u + 15u);  goto L_00314890; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8386u)));
    set32(c.r[3], c.r[3].w[0] - 32u);
    set32(c.r[3], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & 514ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], 0u + 15u);  if (t) { goto L_003148BC; } }
    set32(c.r[2], 0u + 15u);
    c.budget -= 1;
L_00314890:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (t) { goto L_003148A8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003148A4u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x003148A4u) [[unlikely]] return; }
L_003148A4:
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 1;
L_003148A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003148B0u);  if (depth < kMaxDepth) unit_0085(c, 116u, depth + 1u); else { c.pc = 0x00314EF0u; return; } if (c.pc != 0x003148B0u) [[unlikely]] return; }
L_003148B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003149B8; } }
    set32(c.r[5], 0u + 15u);
    c.budget -= 1;
L_003148BC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[5].d[0];  if (t) { goto L_003149B8; } }
    st8((c.r[20].w[0] + 7775u), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0] + 7815u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[20].w[0] + 531u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 531u));
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[5], 0u + 9u);  goto L_003148F8; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[20].d[0];  if (t) { goto L_003148F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003148ECu); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x003148ECu) [[unlikely]] return; }
L_003148EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 800u)));  if (t) { goto L_00314904; } }
L_003148F4:
    set32(c.r[5], 0u + 9u);
    c.budget -= 1;
L_003148F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314900u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x00314900u) [[unlikely]] return; }
L_00314900:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 800u)));
    c.budget -= 1;
L_00314904:
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00314930; } }
    set32(c.r[2], 0u - 1u);
    st8((c.r[20].w[0] + 800u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 128u);
    st8((c.r[20].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[19], c.r[18], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[18], 0u + 1u);
    st32((c.r[20].w[0] + 1068u), c.r[2].w[0]);
    c.budget -= 8;
L_00314930:
    st8((c.r[20].w[0] + 580u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[20].w[0] + 590u), static_cast<std::uint8_t>(c.r[19].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 812u)));
    set32(c.r[3], 0u - 29184u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    set32(c.r[5], 0u + 32u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st16((c.r[20].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 812u)));
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st16((c.r[20].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[20].w[0] + 792u), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0] + 757u), static_cast<std::uint8_t>(0u));
    st32((c.r[20].w[0] + 1240u), c.r[2].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314974u); st32((c.r[20].w[0] + 1244u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x00314974u) [[unlikely]] return; }
L_00314974:
    set32(c.r[5], 0u + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314980u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 87u, depth + 1u); else { c.pc = 0x0026D7B0u; return; } if (c.pc != 0x00314980u) [[unlikely]] return; }
L_00314980:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031498Cu); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 227u, depth + 1u); else { c.pc = 0x001F3160u; return; } if (c.pc != 0x0031498Cu) [[unlikely]] return; }
L_0031498C:
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314998u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 40u, depth + 1u); else { c.pc = 0x002CCAD0u; return; } if (c.pc != 0x00314998u) [[unlikely]] return; }
L_00314998:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 580u));
    set32(c.r[2], c.r[28].w[0] - 27584u);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003149B8u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003149B8u) [[unlikely]] return; }
L_003149B8:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    c.budget -= 1;
L_003149BC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003149E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[16], 0u + 16u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314A0Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0091(c, 251u, depth + 1u); else { c.pc = 0x00346750u; return; } if (c.pc != 0x00314A0Cu) [[unlikely]] return; }
L_00314A0C:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; st8((c.r[17].w[0] + 591u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00314A24; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 591u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00314A24:
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F590000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBDAE0000u);
    c.r[2].d[0] = c.r[2].d[0] | 5243ull;
    c.f[13] = c.r[2].w[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314A50u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0091(c, 252u, depth + 1u); else { c.pc = 0x003467D0u; return; } if (c.pc != 0x00314A50u) [[unlikely]] return; }
L_00314A50:
    c.f[12] = 0u;
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314A68u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 90u, depth + 1u); else { c.pc = 0x00264D10u; return; } if (c.pc != 0x00314A68u) [[unlikely]] return; }
L_00314A68:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00314A80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314AA8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0091(c, 251u, depth + 1u); else { c.pc = 0x00346750u; return; } if (c.pc != 0x00314AA8u) [[unlikely]] return; }
L_00314AA8:
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_00314B24; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00314B0C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0xC4EE0000u);  if (t) { goto L_00314AF8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0xC4EE0000u);  if (t) { goto L_00314AE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00314B38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC4EE0000u);
    c.budget -= 1;
L_00314AE4:
    st8((c.r[18].w[0] + 591u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[2].d[0] | 39449ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 1216u), c.r[2].w[0]);  if (t) { goto L_00314B34; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC4EE0000u);
    c.budget -= 1;
L_00314AF8:
    st8((c.r[18].w[0] + 591u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 39449ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 1216u), c.r[2].w[0]);  if (t) { goto L_00314B34; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00314B0C:
    st8((c.r[18].w[0] + 591u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC4EE0000u);
    c.r[2].d[0] = c.r[2].d[0] | 39449ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 1216u), c.r[2].w[0]);  if (t) { goto L_00314B34; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_00314B24:
    st8((c.r[18].w[0] + 591u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC4EE0000u);
    c.r[2].d[0] = c.r[2].d[0] | 39449ull;
    st32((c.r[18].w[0] + 1216u), c.r[2].w[0]);
    c.budget -= 4;
L_00314B34:
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_00314B38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42CE0000u);
    st32((c.r[18].w[0] + 1220u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314B48u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0091(c, 267u, depth + 1u); else { c.pc = 0x00346A10u; return; } if (c.pc != 0x00314B48u) [[unlikely]] return; }
L_00314B48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FAE0000u);
    c.r[2].d[0] = c.r[2].d[0] | 5243ull;
    c.f[12] = c.r[2].w[0];
    c.f[13] = 0u;
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314B64u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0091(c, 254u, depth + 1u); else { c.pc = 0x00346840u; return; } if (c.pc != 0x00314B64u) [[unlikely]] return; }
L_00314B64:
    set32(c.r[6], c.r[16].w[0] + 16u);
    c.f[12] = 0u;
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314B7Cu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 90u, depth + 1u); else { c.pc = 0x00264D10u; return; } if (c.pc != 0x00314B7Cu) [[unlikely]] return; }
L_00314B7C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00314BA0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 580u));
    set32(c.r[2], c.r[28].w[0] - 27576u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00314000u < 16384u) { entry = entries_0085[(t - 0x00314000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00314BC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314BD8u); set32(c.r[5], c.r[16].w[0] + 1472u);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00314BD8u) [[unlikely]] return; }
L_00314BD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314BE0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x00314BE0u) [[unlikely]] return; }
L_00314BE0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3ED10000u);
    c.r[3].d[0] = c.r[3].d[0] | 60293ull;
    c.f[2] = c.r[3].w[0];
    set32(c.r[3], ld32((c.r[16].w[0] + 612u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00314C2C; } }
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[3].w[0] - 27120u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 2u, c.f[1], c.f[0]);
    c.budget -= 11;
L_00314C2C:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00314C48; } }
    st32((c.r[16].w[0] + 104u), c.f[2]);
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 2;
L_00314C48:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7813u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00314C60; } }
    set32(c.r[5], 0u + 11u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314C60u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 89u, depth + 1u); else { c.pc = 0x0026D960u; return; } if (c.pc != 0x00314C60u) [[unlikely]] return; }
L_00314C60:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00314C70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 800u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00314C9C; } }
    set32(c.r[2], 0u + 128u);
    st8((c.r[16].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[16].w[0] + 1068u), c.r[2].w[0]);
    c.budget -= 4;
L_00314C9C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 128u);  if (t) { goto L_00314E88; } }
    set32(c.r[5], c.r[16].w[0] + 1472u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314CB4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 304u, depth + 1u); else { c.pc = 0x0034B690u; return; } if (c.pc != 0x00314CB4u) [[unlikely]] return; }
L_00314CB4:
    c.f[0] = ld32((c.r[16].w[0] + 7796u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00314D00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314CDCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x00314CDCu) [[unlikely]] return; }
L_00314CDC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314CECu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x00314CECu) [[unlikely]] return; }
L_00314CEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00314D00; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD0B0000u);
    c.r[3].d[0] = c.r[3].d[0] | 17302ull;
    st32((c.r[16].w[0] + 108u), c.r[3].w[0]);
    c.budget -= 3;
L_00314D00:
    c.f[2] = ld32((c.r[16].w[0] + 7780u));
    c.f[1] = ld32((c.r[16].w[0] + 1220u));
    c.f[0] = 0u;
    c.f[3] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1220u), c.f[3]);  if (t) { goto L_00314D64; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[3], 0u + 7u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 7816u), 0u);
    st32((c.r[16].w[0] + 7820u), 0u);
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(0u));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00314ED8; } }
L_00314D64:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 800u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00314D78; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 1;
L_00314D78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 460u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[2] = ld32((c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42CE0000u);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00314DC8; } }
    set32(c.r[2], 0u + 128u);
    st8((c.r[16].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[16].w[0] + 1068u), c.r[2].w[0]);
    c.budget -= 4;
L_00314DC8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00314E04; } }
    c.f[1] = ld32((c.r[16].w[0] + 1220u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42600000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00314E04; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314E04u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0091(c, 268u, depth + 1u); else { c.pc = 0x00346A40u; return; } if (c.pc != 0x00314E04u) [[unlikely]] return; }
L_00314E04:
    c.f[1] = ld32((c.r[16].w[0] + 1220u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41D00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00314E34; } }
    set32(c.r[2], 0u + 128u);
    st8((c.r[16].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[16].w[0] + 1068u), c.r[2].w[0]);
    c.budget -= 4;
L_00314E34:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 591u)));
    c.r[2].d[0] = c.r[2].d[0] & 6ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00314E64; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = ld32((c.r[16].w[0] + 7780u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314E54u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00314E54u) [[unlikely]] return; }
L_00314E54:
    set32(c.r[3], ld32((c.r[16].w[0] + 7816u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 7816u), c.r[3].w[0]);  if (t) { goto L_00314ED8; } }
L_00314E64:
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = ld32((c.r[16].w[0] + 7780u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314E74u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00314E74u) [[unlikely]] return; }
L_00314E74:
    set32(c.r[3], ld32((c.r[16].w[0] + 7820u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 7820u), c.r[3].w[0]);  if (t) { goto L_00314ED8; } }
    set32(c.r[2], 0u + 128u);
    c.budget -= 1;
L_00314E88:
    st8((c.r[16].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[5], c.r[16].w[0] + 1472u);
    st32((c.r[16].w[0] + 1068u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314EA0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00314EA0u) [[unlikely]] return; }
L_00314EA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314EA8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x00314EA8u) [[unlikely]] return; }
L_00314EA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00314ED8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    st32((c.r[16].w[0] + 1068u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    st32((c.r[16].w[0] + 1052u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 800u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 1240u), 0u);
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314ED8u); st32((c.r[16].w[0] + 1244u), 0u);  if (depth < kMaxDepth) unit_005B(c, 89u, depth + 1u); else { c.pc = 0x0026D960u; return; } if (c.pc != 0x00314ED8u) [[unlikely]] return; }
L_00314ED8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00314EF0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 840u)));
    st16((c.r[4].w[0] + 842u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 838u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 800u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 1240u), 0u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 1244u), 0u);  c.pc = t; return; }
L_00314F10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00314F40; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7814u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00314F40; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 4u);
    st8((c.r[4].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 276u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 277u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_00314F40:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00264EF0u | kUnwind; return; } [[clang::musttail]] return unit_0059(c, 93u, depth); }
L_00314F50:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    set32(c.r[5], c.r[17].w[0] + 128u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00314F90u); set32(c.r[4], c.r[17].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x00314F90u) [[unlikely]] return; }
L_00314F90:
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 732u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.f[20] = c.f[0];  if (t) { goto L_00315028; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[20] = ld32((c.r[17].w[0] + 104u));
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], 0u + 7u);
    set32(c.r[3], 0u - 65u);
    st8((c.r[17].w[0] + 736u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[17].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    set32(c.r[2], 0u + 4u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[17].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st16((c.r[17].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 276u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 277u), static_cast<std::uint8_t>(0u));
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    st32((c.r[17].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 160u));
    st32((c.r[17].w[0] + 1440u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 164u));
    st32((c.r[17].w[0] + 1444u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 168u));
    st32((c.r[17].w[0] + 1448u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    c.f[0] = ld32((c.r[17].w[0] + 1060u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 32;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00315028; } }
    st8((c.r[17].w[0] + 733u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 1;
L_00315028:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 704u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315034u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 345u, depth + 1u); else { c.pc = 0x0034BC70u; return; } if (c.pc != 0x00315034u) [[unlikely]] return; }
L_00315034:
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[17].w[0] + 1424u);  if (t) { goto L_00315124; } }
    set32(c.r[5], c.r[17].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031504Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x0031504Cu) [[unlikely]] return; }
L_0031504C:
    set32(c.r[4], c.r[17].w[0] + 1440u);
    set32(c.r[5], c.r[17].w[0] + 1424u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031505Cu); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 34u, depth + 1u); else { c.pc = 0x0013CCC0u; return; } if (c.pc != 0x0031505Cu) [[unlikely]] return; }
L_0031505C:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[17].w[0] + 1440u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031506Cu); set32(c.r[6], c.r[17].w[0] + 1424u);  if (depth < kMaxDepth) unit_000F(c, 34u, depth + 1u); else { c.pc = 0x0013CCC0u; return; } if (c.pc != 0x0031506Cu) [[unlikely]] return; }
L_0031506C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315074u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00315074u) [[unlikely]] return; }
L_00315074:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031507Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0031507Cu) [[unlikely]] return; }
L_0031507C:
    c.f[2] = ld32((c.r[29].w[0] + 128u));
    c.f[1] = ld32((c.r[29].w[0] + 132u));
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 64u), c.f[2]);
    st32((c.r[29].w[0] + 68u), c.f[1]);
    st32((c.r[29].w[0] + 72u), c.f[0]);
    st32((c.r[29].w[0] + 76u), 0u);
    c.f[0] = ld32((c.r[17].w[0] + 1440u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 1444u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 1448u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    st32((c.r[29].w[0] + 92u), 0u);
    c.f[0] = ld32((c.r[17].w[0] + 1424u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 1428u));
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 1432u));
    st32((c.r[29].w[0] + 104u), c.f[0]);
    st32((c.r[29].w[0] + 108u), 0u);
    st32((c.r[17].w[0] + 1428u), 0u);
    st32((c.r[17].w[0] + 1424u), 0u);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003150E8u); st32((c.r[17].w[0] + 1432u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x003150E8u) [[unlikely]] return; }
L_003150E8:
    c.f[2] = ld32((c.r[17].w[0] + 1304u));
    c.f[1] = ld32((c.r[17].w[0] + 1024u));
    c.f[0] = ld32((c.r[17].w[0] + 1004u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315104u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00315104u) [[unlikely]] return; }
L_00315104:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031510Cu); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0031510Cu) [[unlikely]] return; }
L_0031510C:
    set32(c.r[4], c.r[17].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315118u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x00315118u) [[unlikely]] return; }
L_00315118:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 92u)));  if (t) { goto L_003151C4; } }
    set32(c.r[5], c.r[17].w[0] + 1424u);
    c.budget -= 1;
L_00315124:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031512Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x0031512Cu) [[unlikely]] return; }
L_0031512C:
    set32(c.r[5], c.r[17].w[0] + 1424u);
    set32(c.r[4], c.r[16].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031513Cu); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 147u, depth + 1u); else { c.pc = 0x0026E4D0u; return; } if (c.pc != 0x0031513Cu) [[unlikely]] return; }
L_0031513C:
    st32((c.r[17].w[0] + 1428u), 0u);
    c.f[2] = ld32((c.r[17].w[0] + 1424u));
    c.f[1] = ld32((c.r[17].w[0] + 1432u));
    c.f[0] = 0u;
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[16].w[0] + 144u);  if (t) { goto L_00315170; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 1432u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 144u);
    c.budget -= 3;
L_00315170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315178u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00315178u) [[unlikely]] return; }
L_00315178:
    c.f[2] = ld32((c.r[17].w[0] + 1304u));
    c.f[1] = ld32((c.r[17].w[0] + 1024u));
    c.f[0] = ld32((c.r[17].w[0] + 1004u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315194u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00315194u) [[unlikely]] return; }
L_00315194:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031519Cu); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0031519Cu) [[unlikely]] return; }
L_0031519C:
    set32(c.r[4], c.r[17].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003151A8u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x003151A8u) [[unlikely]] return; }
L_003151A8:
    c.f[0] = ld32((c.r[16].w[0] + 160u));
    st32((c.r[17].w[0] + 1440u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 164u));
    st32((c.r[17].w[0] + 1444u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 168u));
    st32((c.r[17].w[0] + 1448u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 7;
L_003151C4:
    set32(c.r[2], ld32((c.r[17].w[0] + 7816u)));
    c.f[0] = ld32((c.r[17].w[0] + 7816u));
    c.f[2] = ld32((c.r[17].w[0] + 1024u));
    c.f[1] = ld32((c.r[17].w[0] + 1004u));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.f[3] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003151F4u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x003151F4u) [[unlikely]] return; }
L_003151F4:
    st32((c.r[17].w[0] + 7816u), c.r[2].w[0]);
    c.f[3] = ld32((c.r[17].w[0] + 7820u));
    c.f[1] = ld32((c.r[17].w[0] + 1304u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315238u);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00315238u) [[unlikely]] return; }
L_00315238:
    st32((c.r[17].w[0] + 7820u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 996u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[0] = c.r[2].w[0];
    st32((c.r[17].w[0] + 64u), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00315280; } }
    fpu_div(c, 1u, c.f[20], c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 64u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 64u), c.f[0]);
    c.budget -= 6;
L_00315280:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 640u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003152B4; } }
    st32((c.r[17].w[0] + 64u), 0u);
    c.f[0] = ld32((c.r[17].w[0] + 48u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F7D0000u);
    c.r[2].d[0] = c.r[2].d[0] | 28836ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 48u), c.f[0]);  if (t) { goto L_003152CC; } }
L_003152B4:
    c.f[2] = ld32((c.r[17].w[0] + 64u));
    c.f[1] = ld32((c.r[17].w[0] + 1004u));
    c.f[0] = ld32((c.r[17].w[0] + 48u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 48u), c.f[0]);
    c.budget -= 6;
L_003152CC:
    c.f[0] = ld32((c.r[17].w[0] + 48u));
    c.f[2] = ld32((c.r[17].w[0] + 1060u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00315340; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 733u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031533C; } }
    c.f[1] = ld32((c.r[17].w[0] + 996u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0031532C; } }
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 48u), c.f[0]);  if (t) { goto L_00315340; } }
L_0031532C:
    st8((c.r[17].w[0] + 733u), static_cast<std::uint8_t>(0u));
    c.f[0] = ld32((c.r[17].w[0] + 1060u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 48u), c.f[0]);  if (t) { goto L_00315340; } }
L_0031533C:
    st32((c.r[17].w[0] + 48u), c.f[2]);
    c.budget -= 1;
L_00315340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315348u); set32(c.r[4], ld32((c.r[17].w[0] + 7816u)));  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x00315348u) [[unlikely]] return; }
L_00315348:
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 7816u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315360u); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x00315360u) [[unlikely]] return; }
L_00315360:
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    set32(c.r[5], c.r[17].w[0] + 1424u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031537Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 313u, depth + 1u); else { c.pc = 0x0034B7E0u; return; } if (c.pc != 0x0031537Cu) [[unlikely]] return; }
L_0031537C:
    c.f[12] = ld32((c.r[17].w[0] + 52u));
    set32(c.r[5], c.r[17].w[0] + 1440u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031538Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 313u, depth + 1u); else { c.pc = 0x0034B7E0u; return; } if (c.pc != 0x0031538Cu) [[unlikely]] return; }
L_0031538C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315394u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x00315394u) [[unlikely]] return; }
L_00315394:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 878u)));
    set32(c.r[5], c.r[17].w[0] + 1424u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003153A4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 292u, depth + 1u); else { c.pc = 0x0034B4D0u; return; } if (c.pc != 0x003153A4u) [[unlikely]] return; }
L_003153A4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003153C0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[2].w[0] - 28448u);
    set32(c.r[2], 0u + 2u);
    st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    set32(c.r[2], c.r[2].w[0] << 7);
    set32(c.r[16], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_0031547C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_00315418; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld16((c.r[17].w[0] + 704u));  if (t) { goto L_003154F4; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00315418:
    st8((c.r[17].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 11u);
    st8((c.r[17].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    set32(c.r[2], 0u + 7u);
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st16((c.r[17].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 778u), static_cast<std::uint8_t>(0u));
    c.f[0] = ld32((c.r[17].w[0] + 1048u));
    st32((c.r[17].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 1040u));
    st32((c.r[17].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 1044u));
    st32((c.r[17].w[0] + 1216u), c.f[0]);
    st32((c.r[17].w[0] + 108u), 0u);
    st32((c.r[17].w[0] + 68u), 0u);
    st8((c.r[17].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 276u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 277u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 160u));
    st32((c.r[17].w[0] + 1440u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 164u));
    st32((c.r[17].w[0] + 1444u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 168u));
    st32((c.r[17].w[0] + 1448u), c.f[0]);
    c.budget -= 25;
L_0031547C:
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003154A8; } }
    st32((c.r[17].w[0] + 108u), 0u);
    st32((c.r[17].w[0] + 104u), 0u);
    st32((c.r[17].w[0] + 64u), 0u);
    st32((c.r[17].w[0] + 48u), 0u);
    c.budget -= 4;
L_003154A8:
    c.f[2] = ld32((c.r[17].w[0] + 1216u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 1216u), c.f[1]);  if (t) { goto L_003154F0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 732u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 732u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 778u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 108u), 0u);
    st32((c.r[17].w[0] + 68u), 0u);
    st32((c.r[17].w[0] + 64u), 0u);
    c.budget -= 8;
L_003154F0:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 704u));
    c.budget -= 1;
L_003154F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003154FCu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 345u, depth + 1u); else { c.pc = 0x0034BC70u; return; } if (c.pc != 0x003154FCu) [[unlikely]] return; }
L_003154FC:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 704u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315508u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 345u, depth + 1u); else { c.pc = 0x0034BC70u; return; } if (c.pc != 0x00315508u) [[unlikely]] return; }
L_00315508:
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[17].w[0] + 1424u);  if (t) { goto L_003155F8; } }
    set32(c.r[5], c.r[17].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315520u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x00315520u) [[unlikely]] return; }
L_00315520:
    set32(c.r[4], c.r[17].w[0] + 1440u);
    set32(c.r[5], c.r[17].w[0] + 1424u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315530u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 34u, depth + 1u); else { c.pc = 0x0013CCC0u; return; } if (c.pc != 0x00315530u) [[unlikely]] return; }
L_00315530:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[17].w[0] + 1440u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315540u); set32(c.r[6], c.r[17].w[0] + 1424u);  if (depth < kMaxDepth) unit_000F(c, 34u, depth + 1u); else { c.pc = 0x0013CCC0u; return; } if (c.pc != 0x00315540u) [[unlikely]] return; }
L_00315540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315548u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00315548u) [[unlikely]] return; }
L_00315548:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315550u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00315550u) [[unlikely]] return; }
L_00315550:
    c.f[2] = ld32((c.r[29].w[0] + 112u));
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 48u), c.f[2]);
    st32((c.r[29].w[0] + 52u), c.f[1]);
    st32((c.r[29].w[0] + 56u), c.f[0]);
    st32((c.r[29].w[0] + 60u), 0u);
    c.f[0] = ld32((c.r[17].w[0] + 1440u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 1444u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 1448u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    st32((c.r[29].w[0] + 76u), 0u);
    c.f[0] = ld32((c.r[17].w[0] + 1424u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 1428u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 1432u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    st32((c.r[29].w[0] + 92u), 0u);
    st32((c.r[17].w[0] + 1428u), 0u);
    st32((c.r[17].w[0] + 1424u), 0u);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003155BCu); st32((c.r[17].w[0] + 1432u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x003155BCu) [[unlikely]] return; }
L_003155BC:
    c.f[2] = ld32((c.r[17].w[0] + 1304u));
    c.f[1] = ld32((c.r[17].w[0] + 1028u));
    c.f[0] = ld32((c.r[17].w[0] + 1004u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003155D8u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x003155D8u) [[unlikely]] return; }
L_003155D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003155E0u); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x003155E0u) [[unlikely]] return; }
L_003155E0:
    set32(c.r[4], c.r[17].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003155ECu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x003155ECu) [[unlikely]] return; }
L_003155EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 92u)));  if (t) { goto L_00315698; } }
    set32(c.r[5], c.r[17].w[0] + 1424u);
    c.budget -= 1;
L_003155F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315600u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x00315600u) [[unlikely]] return; }
L_00315600:
    set32(c.r[5], c.r[17].w[0] + 1424u);
    set32(c.r[4], c.r[16].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315610u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 147u, depth + 1u); else { c.pc = 0x0026E4D0u; return; } if (c.pc != 0x00315610u) [[unlikely]] return; }
L_00315610:
    st32((c.r[17].w[0] + 1428u), 0u);
    c.f[2] = ld32((c.r[17].w[0] + 1424u));
    c.f[1] = ld32((c.r[17].w[0] + 1432u));
    c.f[0] = 0u;
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[16].w[0] + 144u);  if (t) { goto L_00315644; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 1432u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 144u);
    c.budget -= 3;
L_00315644:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031564Cu);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0031564Cu) [[unlikely]] return; }
L_0031564C:
    c.f[2] = ld32((c.r[17].w[0] + 1304u));
    c.f[1] = ld32((c.r[17].w[0] + 1028u));
    c.f[0] = ld32((c.r[17].w[0] + 1004u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315668u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00315668u) [[unlikely]] return; }
L_00315668:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315670u); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00315670u) [[unlikely]] return; }
L_00315670:
    set32(c.r[4], c.r[17].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031567Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x0031567Cu) [[unlikely]] return; }
L_0031567C:
    c.f[0] = ld32((c.r[16].w[0] + 160u));
    st32((c.r[17].w[0] + 1440u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 164u));
    st32((c.r[17].w[0] + 1444u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 168u));
    st32((c.r[17].w[0] + 1448u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 7;
L_00315698:
    set32(c.r[2], ld32((c.r[17].w[0] + 7816u)));
    c.f[0] = ld32((c.r[17].w[0] + 7816u));
    c.f[2] = ld32((c.r[17].w[0] + 1028u));
    c.f[1] = ld32((c.r[17].w[0] + 1004u));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.f[3] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003156C8u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x003156C8u) [[unlikely]] return; }
L_003156C8:
    st32((c.r[17].w[0] + 7816u), c.r[2].w[0]);
    c.f[3] = ld32((c.r[17].w[0] + 7820u));
    c.f[1] = ld32((c.r[17].w[0] + 1304u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031570Cu);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0031570Cu) [[unlikely]] return; }
L_0031570C:
    st32((c.r[17].w[0] + 7820u), c.r[2].w[0]);
    c.f[2] = ld32((c.r[17].w[0] + 64u));
    c.f[1] = ld32((c.r[17].w[0] + 1004u));
    c.f[0] = ld32((c.r[17].w[0] + 48u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 48u), c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315730u); set32(c.r[4], ld32((c.r[17].w[0] + 7816u)));  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x00315730u) [[unlikely]] return; }
L_00315730:
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 7816u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315748u); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x00315748u) [[unlikely]] return; }
L_00315748:
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    set32(c.r[5], c.r[17].w[0] + 1424u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315764u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 313u, depth + 1u); else { c.pc = 0x0034B7E0u; return; } if (c.pc != 0x00315764u) [[unlikely]] return; }
L_00315764:
    c.f[12] = ld32((c.r[17].w[0] + 52u));
    set32(c.r[5], c.r[17].w[0] + 1440u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315774u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 313u, depth + 1u); else { c.pc = 0x0034B7E0u; return; } if (c.pc != 0x00315774u) [[unlikely]] return; }
L_00315774:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315780u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 164u, depth + 1u); else { c.pc = 0x002D6120u; return; } if (c.pc != 0x00315780u) [[unlikely]] return; }
L_00315780:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315788u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x00315788u) [[unlikely]] return; }
L_00315788:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 878u)));
    set32(c.r[5], c.r[17].w[0] + 1424u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315798u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 292u, depth + 1u); else { c.pc = 0x0034B4D0u; return; } if (c.pc != 0x00315798u) [[unlikely]] return; }
L_00315798:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003157B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_003159F4; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 736u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[3], 0u - 201u);
    set32(c.r[2], 0u + 4u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 763u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(0u));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315820u); c.r[5].d[0] = ld16((c.r[16].w[0] + 704u));  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x00315820u) [[unlikely]] return; }
L_00315820:
    set32(c.r[3], ld32((c.r[16].w[0] + 1308u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 13));  if (t) { goto L_00315834; } }
    set32(c.r[2], c.r[3].w[0] + 8191u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 13));
    c.budget -= 2;
L_00315834:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8433u)));
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003158EC; } }
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003158A8; } }
    c.r[1].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003158A8; } }
    c.f[3] = ld32((c.r[16].w[0] + 1408u));
    c.f[2] = ld32((c.r[16].w[0] + 1412u));
    c.f[1] = ld32((c.r[16].w[0] + 1416u));
    c.f[0] = ld32((c.r[16].w[0] + 1420u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[16].w[0] + 1440u);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    st32((c.r[16].w[0] + 1424u), c.f[3]);
    st32((c.r[16].w[0] + 1428u), c.f[2]);
    st32((c.r[16].w[0] + 1432u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315898u); st32((c.r[16].w[0] + 1436u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x00315898u) [[unlikely]] return; }
L_00315898:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0031592C; } }
L_003158A8:
    c.f[3] = ld32((c.r[16].w[0] + 1408u));
    c.f[2] = ld32((c.r[16].w[0] + 1412u));
    c.f[1] = ld32((c.r[16].w[0] + 1416u));
    c.f[0] = ld32((c.r[16].w[0] + 1420u));
    st32((c.r[16].w[0] + 1440u), c.f[3]);
    st32((c.r[16].w[0] + 1444u), c.f[2]);
    st32((c.r[16].w[0] + 1448u), c.f[1]);
    st32((c.r[16].w[0] + 1452u), c.f[0]);
    c.f[3] = ld32((c.r[16].w[0] + 1440u));
    c.f[2] = ld32((c.r[16].w[0] + 1444u));
    c.f[1] = ld32((c.r[16].w[0] + 1448u));
    c.f[0] = ld32((c.r[16].w[0] + 1452u));
    st32((c.r[16].w[0] + 1424u), c.f[3]);
    st32((c.r[16].w[0] + 1428u), c.f[2]);
    st32((c.r[16].w[0] + 1432u), c.f[1]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1436u), c.f[0]);  if (t) { goto L_0031592C; } }
L_003158EC:
    c.f[3] = ld32((c.r[16].w[0] + 1408u));
    c.f[2] = ld32((c.r[16].w[0] + 1412u));
    c.f[1] = ld32((c.r[16].w[0] + 1416u));
    c.f[0] = ld32((c.r[16].w[0] + 1420u));
    st32((c.r[16].w[0] + 1440u), c.f[3]);
    st32((c.r[16].w[0] + 1444u), c.f[2]);
    st32((c.r[16].w[0] + 1448u), c.f[1]);
    st32((c.r[16].w[0] + 1452u), c.f[0]);
    c.f[3] = ld32((c.r[16].w[0] + 1440u));
    c.f[2] = ld32((c.r[16].w[0] + 1444u));
    c.f[1] = ld32((c.r[16].w[0] + 1448u));
    c.f[0] = ld32((c.r[16].w[0] + 1452u));
    st32((c.r[16].w[0] + 1424u), c.f[3]);
    st32((c.r[16].w[0] + 1428u), c.f[2]);
    st32((c.r[16].w[0] + 1432u), c.f[1]);
    st32((c.r[16].w[0] + 1436u), c.f[0]);
    c.budget -= 16;
L_0031592C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[17].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] + 640u);
    set32(c.r[3], c.r[17].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 1220u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 1304u));
    c.f[0] = ld32((c.r[16].w[0] + 1220u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315988u);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00315988u) [[unlikely]] return; }
L_00315988:
    st16((c.r[16].w[0] + 876u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 1220u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], c.r[17].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 784u);
    st32((c.r[16].w[0] + 1220u), c.f[0]);
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    c.f[0] = ld32((c.r[16].w[0] + 1136u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 1136u));
    c.f[0] = ld32((c.r[16].w[0] + 1220u));
    fpu_div(c, 0u, c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 27;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1228u), c.f[0]);  if (t) { goto L_00315AA8; } }
L_003159F4:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.f[20] = ld32((c.r[16].w[0] + 1004u));  if (t) { goto L_00315A18; } }
    c.f[0] = ld32((c.r[16].w[0] + 1228u));
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    st32((c.r[16].w[0] + 1004u), c.f[0]);
    c.budget -= 3;
L_00315A18:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 876u)));
    c.f[0] = ld32((c.r[16].w[0] + 1004u));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315A34u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00315A34u) [[unlikely]] return; }
L_00315A34:
    set32(c.r[5], c.r[16].w[0] + 1440u);
    mmi::paddub(c.r[6], c.r[2], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315A44u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 292u, depth + 1u); else { c.pc = 0x0034B4D0u; return; } if (c.pc != 0x00315A44u) [[unlikely]] return; }
L_00315A44:
    c.f[1] = ld32((c.r[16].w[0] + 1004u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (t) { goto L_00315A94; } }
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315A70u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 310u, depth + 1u); else { c.pc = 0x0034B780u; return; } if (c.pc != 0x00315A70u) [[unlikely]] return; }
L_00315A70:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = ld32((c.r[16].w[0] + 1136u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00315A94; } }
    st32((c.r[16].w[0] + 108u), 0u);
    c.f[0] = ld32((c.r[16].w[0] + 1136u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 3;
L_00315A94:
    c.f[1] = ld32((c.r[16].w[0] + 1004u));
    c.f[0] = ld32((c.r[16].w[0] + 1220u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 1220u), c.f[0]);
    st32((c.r[16].w[0] + 1004u), c.f[20]);
    c.budget -= 5;
L_00315AA8:
    c.f[1] = ld32((c.r[16].w[0] + 1220u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00315AD4; } }
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315AD0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x00315AD0u) [[unlikely]] return; }
L_00315AD0:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00315AD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315ADCu);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x00315ADCu) [[unlikely]] return; }
L_00315ADC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00315B00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00315B54; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[2], 0u + 4u);
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 1136u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(0u));
    c.budget -= 13;
L_00315B54:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 704u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315B60u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x00315B60u) [[unlikely]] return; }
L_00315B60:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00315B8C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[16].w[0] + 1440u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315B84u); set32(c.r[5], c.r[16].w[0] + 1408u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x00315B84u) [[unlikely]] return; }
L_00315B84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));  if (t) { goto L_00315BB0; } }
L_00315B8C:
    c.f[3] = ld32((c.r[16].w[0] + 1408u));
    c.f[2] = ld32((c.r[16].w[0] + 1412u));
    c.f[1] = ld32((c.r[16].w[0] + 1416u));
    c.f[0] = ld32((c.r[16].w[0] + 1420u));
    st32((c.r[16].w[0] + 1440u), c.f[3]);
    st32((c.r[16].w[0] + 1444u), c.f[2]);
    st32((c.r[16].w[0] + 1448u), c.f[1]);
    st32((c.r[16].w[0] + 1452u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.budget -= 9;
L_00315BB0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00315BEC; } }
    c.f[2] = ld32((c.r[16].w[0] + 1024u));
    c.f[1] = ld32((c.r[16].w[0] + 1004u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], c.r[16].w[0] + 1440u);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315BE4u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0092(c, 288u, depth + 1u); else { c.pc = 0x0034B410u; return; } if (c.pc != 0x00315BE4u) [[unlikely]] return; }
L_00315BE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[29].w[0] + 32u);  if (t) { goto L_00315C08; } }
L_00315BEC:
    c.f[1] = ld32((c.r[16].w[0] + 1024u));
    c.f[0] = ld32((c.r[16].w[0] + 1004u));
    set32(c.r[5], c.r[16].w[0] + 1440u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315C04u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0092(c, 288u, depth + 1u); else { c.pc = 0x0034B410u; return; } if (c.pc != 0x00315C04u) [[unlikely]] return; }
L_00315C04:
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 1;
L_00315C08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315C10u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x00315C10u) [[unlikely]] return; }
L_00315C10:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00315C34; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315C34u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x00315C34u) [[unlikely]] return; }
L_00315C34:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[2].w[0] + 144u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315C60u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 147u, depth + 1u); else { c.pc = 0x0026E4D0u; return; } if (c.pc != 0x00315C60u) [[unlikely]] return; }
L_00315C60:
    set32(c.r[2], c.r[29].w[0] + 36u);
    c.f[0] = 0u;
    st32((c.r[2].w[0]), 0u);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[29].w[0] + 32u));
    c.f[3] = ld32((c.r[29].w[0] + 40u));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], c.r[16].w[0] + 1424u);  if (t) { goto L_00315CF0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315CBCu); set32(c.r[4], c.r[2].w[0] + 144u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00315CBCu) [[unlikely]] return; }
L_00315CBC:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315CC8u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x00315CC8u) [[unlikely]] return; }
L_00315CC8:
    set32(c.r[2], c.r[29].w[0] + 32u);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[16].w[0] + 1424u), c.f[3]);
    st32((c.r[16].w[0] + 1428u), c.f[2]);
    st32((c.r[16].w[0] + 1432u), c.f[1]);
    st32((c.r[16].w[0] + 1436u), c.f[0]);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 10;
L_00315CF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315CF8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 310u, depth + 1u); else { c.pc = 0x0034B780u; return; } if (c.pc != 0x00315CF8u) [[unlikely]] return; }
L_00315CF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315D00u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x00315D00u) [[unlikely]] return; }
L_00315D00:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00315D10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00315D9C; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 1308u), 0u);
    st32((c.r[16].w[0] + 1304u), 0u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[4], 0u - 261u);
    set32(c.r[3], 0u + 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], c.r[2].w[0] + 624u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[16].w[0] + 1216u), c.f[1]);
    c.f[1] = fp::add(c.f[0], c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 29;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.f[0]);  if (t) { goto L_00315DCC; } }
L_00315D9C:
    c.f[1] = ld32((c.r[16].w[0] + 1004u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (t) { goto L_00315DCC; } }
    st32((c.r[16].w[0] + 108u), 0u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315DCCu); st32((c.r[16].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_0086(c, 210u, depth + 1u); else { c.pc = 0x0031B2D0u; return; } if (c.pc != 0x00315DCCu) [[unlikely]] return; }
L_00315DCC:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315DD8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 310u, depth + 1u); else { c.pc = 0x0034B780u; return; } if (c.pc != 0x00315DD8u) [[unlikely]] return; }
L_00315DD8:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00315DFC; } }
    st32((c.r[16].w[0] + 104u), 0u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 2;
L_00315DFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315E04u);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x00315E04u) [[unlikely]] return; }
L_00315E04:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00315E20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[2].w[0] - 28448u);
    set32(c.r[2], 0u + 2u);
    st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 7);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[2].w[0] + 144u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315E64u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 164u, depth + 1u); else { c.pc = 0x002D6120u; return; } if (c.pc != 0x00315E64u) [[unlikely]] return; }
L_00315E64:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00315FA8; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_00315F78; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_00315E94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld16((c.r[16].w[0] + 704u));  if (t) { goto L_00315FF0; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00315E94:
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 6u);
    st8((c.r[16].w[0] + 794u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[3], 0u - 453u);
    set32(c.r[2], 0u + 4u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 736u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 785u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[12] = ld32((c.r[16].w[0] + 104u));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315EE8u); set32(c.r[5], c.r[16].w[0] + 1424u);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x00315EE8u) [[unlikely]] return; }
L_00315EE8:
    c.f[12] = ld32((c.r[16].w[0] + 52u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315EF8u); set32(c.r[5], c.r[16].w[0] + 1440u);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x00315EF8u) [[unlikely]] return; }
L_00315EF8:
    set32(c.r[4], c.r[16].w[0] + 1424u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315F08u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x00315F08u) [[unlikely]] return; }
L_00315F08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315F10u); set32(c.r[4], c.r[16].w[0] + 1424u);  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013CBB0u; return; } if (c.pc != 0x00315F10u) [[unlikely]] return; }
L_00315F10:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 104u), c.f[0]);  if (t) { goto L_00315F34; } }
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315F34u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x00315F34u) [[unlikely]] return; }
L_00315F34:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 608u);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1216u), c.f[0]);  if (t) { goto L_00315FEC; } }
L_00315F78:
    c.f[2] = ld32((c.r[16].w[0] + 1004u));
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1216u), c.f[1]);  if (t) { goto L_00315FEC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00315FA8:
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    set32(c.r[5], 0u + 7u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st32((c.r[16].w[0] + 1440u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    st32((c.r[16].w[0] + 1444u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    st32((c.r[16].w[0] + 1448u), c.f[0]);
    c.f[3] = ld32((c.r[16].w[0] + 1440u));
    c.f[2] = ld32((c.r[16].w[0] + 1444u));
    c.f[1] = ld32((c.r[16].w[0] + 1448u));
    c.f[0] = ld32((c.r[16].w[0] + 1452u));
    st32((c.r[16].w[0] + 1456u), c.f[3]);
    st32((c.r[16].w[0] + 1460u), c.f[2]);
    st32((c.r[16].w[0] + 1464u), c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315FECu); st32((c.r[16].w[0] + 1468u), c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x00315FECu) [[unlikely]] return; }
L_00315FEC:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 704u));
    c.budget -= 1;
L_00315FF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00315FF8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x00315FF8u) [[unlikely]] return; }
L_00315FF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00316028; } }
    c.f[3] = ld32((c.r[16].w[0] + 1408u));
    c.f[2] = ld32((c.r[16].w[0] + 1412u));
    c.f[1] = ld32((c.r[16].w[0] + 1416u));
    c.f[0] = ld32((c.r[16].w[0] + 1420u));
    set32(c.r[2], c.r[29].w[0] + 48u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), c.f[0]);  if (t) { goto L_00316040; } }
L_00316028:
    c.f[0] = ld32((c.r[16].w[0] + 8352u));
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8356u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8360u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.budget -= 6;
L_00316040:
    c.f[1] = ld32((c.r[16].w[0] + 1024u));
    c.f[0] = ld32((c.r[16].w[0] + 1004u));
    set32(c.r[5], c.r[29].w[0] + 48u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316058u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0092(c, 288u, depth + 1u); else { c.pc = 0x0034B410u; return; } if (c.pc != 0x00316058u) [[unlikely]] return; }
L_00316058:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316064u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00316064u) [[unlikely]] return; }
L_00316064:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00316080:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[2].w[0] - 28448u);
    set32(c.r[2], 0u + 2u);
    st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 7);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[2].w[0] + 144u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003160C4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 164u, depth + 1u); else { c.pc = 0x002D6120u; return; } if (c.pc != 0x003160C4u) [[unlikely]] return; }
L_003160C4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 732u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_003160D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00316168; } }
L_003160D8:
    st8((c.r[17].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 1056u));
    set32(c.r[3], 0u + 7u);
    set32(c.r[2], 0u + 4u);
    set32(c.r[5], c.r[17].w[0] + 1424u);
    st32((c.r[17].w[0] + 1216u), c.f[0]);
    st8((c.r[17].w[0] + 741u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 778u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 276u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031610Cu); st8((c.r[17].w[0] + 277u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x0031610Cu) [[unlikely]] return; }
L_0031610C:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 704u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316118u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x00316118u) [[unlikely]] return; }
L_00316118:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00316154; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316128u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 856u)));  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x00316128u) [[unlikely]] return; }
L_00316128:
    c.f[2] = ld32((c.r[17].w[0] + 992u));
    c.f[1] = ld32((c.r[17].w[0] + 1136u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316144u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 856u)));  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x00316144u) [[unlikely]] return; }
L_00316144:
    c.f[1] = ld32((c.r[17].w[0] + 992u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), c.f[0]);  if (t) { goto L_00316160; } }
L_00316154:
    st32((c.r[17].w[0] + 104u), 0u);
    c.f[0] = ld32((c.r[17].w[0] + 992u));
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.budget -= 3;
L_00316160:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 108u), 0u);  if (t) { goto L_00316170; } }
L_00316168:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316170u);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x00316170u) [[unlikely]] return; }
L_00316170:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 704u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031617Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x0031617Cu) [[unlikely]] return; }
L_0031617C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003162D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031618Cu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 856u)));  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x0031618Cu) [[unlikely]] return; }
L_0031618C:
    c.f[3] = ld32((c.r[17].w[0] + 996u));
    c.f[2] = ld32((c.r[17].w[0] + 1136u));
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003161B0u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 856u)));  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x003161B0u) [[unlikely]] return; }
L_003161B0:
    c.f[2] = ld32((c.r[17].w[0] + 996u));
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.f[1] = ld32((c.r[17].w[0] + 1060u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003161E0; } }
    st32((c.r[17].w[0] + 104u), c.f[1]);
    c.budget -= 1;
L_003161E0:
    c.f[1] = ld32((c.r[17].w[0] + 1024u));
    c.f[0] = ld32((c.r[17].w[0] + 1004u));
    set32(c.r[5], c.r[17].w[0] + 1424u);
    set32(c.r[6], c.r[17].w[0] + 1408u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003161FCu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0092(c, 327u, depth + 1u); else { c.pc = 0x0034BA10u; return; } if (c.pc != 0x003161FCu) [[unlikely]] return; }
L_003161FC:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);  if (t) { goto L_0031629C; } }
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316250u); st32((c.r[29].w[0] + 72u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x00316250u) [[unlikely]] return; }
L_00316250:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031625Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x0031625Cu) [[unlikely]] return; }
L_0031625C:
    c.f[1] = ld32((c.r[17].w[0] + 1024u));
    c.f[0] = ld32((c.r[17].w[0] + 1004u));
    set32(c.r[4], c.r[17].w[0] + 1440u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316274u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 306u, depth + 1u); else { c.pc = 0x0026FAE0u; return; } if (c.pc != 0x00316274u) [[unlikely]] return; }
L_00316274:
    set32(c.r[2], c.r[29].w[0] + 64u);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[17].w[0] + 1456u), c.f[3]);
    st32((c.r[17].w[0] + 1460u), c.f[2]);
    st32((c.r[17].w[0] + 1464u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1468u), c.f[0]);  if (t) { goto L_0031632C; } }
L_0031629C:
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003162ACu); set32(c.r[5], c.r[17].w[0] + 1408u);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x003162ACu) [[unlikely]] return; }
L_003162AC:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003162B8u); set32(c.r[5], c.r[17].w[0] + 1456u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x003162B8u) [[unlikely]] return; }
L_003162B8:
    c.f[1] = ld32((c.r[17].w[0] + 1024u));
    c.f[0] = ld32((c.r[17].w[0] + 1004u));
    set32(c.r[4], c.r[17].w[0] + 1440u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003162D0u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 306u, depth + 1u); else { c.pc = 0x0026FAE0u; return; } if (c.pc != 0x003162D0u) [[unlikely]] return; }
L_003162D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[17].w[0] + 52u));  if (t) { goto L_00316330; } }
L_003162D8:
    c.f[1] = ld32((c.r[17].w[0] + 1000u));
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.f[2] = 0u;
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 996u));
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00316314; } }
    st32((c.r[17].w[0] + 104u), 0u);
    c.budget -= 1;
L_00316314:
    c.f[1] = ld32((c.r[17].w[0] + 1024u));
    c.f[0] = ld32((c.r[17].w[0] + 1004u));
    set32(c.r[4], c.r[17].w[0] + 1440u);
    set32(c.r[5], c.r[17].w[0] + 1456u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031632Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 306u, depth + 1u); else { c.pc = 0x0026FAE0u; return; } if (c.pc != 0x0031632Cu) [[unlikely]] return; }
L_0031632C:
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.budget -= 1;
L_00316330:
    c.f[1] = ld32((c.r[17].w[0] + 1064u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00316348; } }
    st32((c.r[17].w[0] + 52u), c.f[1]);
    c.budget -= 1;
L_00316348:
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    set32(c.r[5], c.r[17].w[0] + 1424u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316358u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 313u, depth + 1u); else { c.pc = 0x0034B7E0u; return; } if (c.pc != 0x00316358u) [[unlikely]] return; }
L_00316358:
    c.f[12] = ld32((c.r[17].w[0] + 52u));
    set32(c.r[5], c.r[17].w[0] + 1440u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316368u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 313u, depth + 1u); else { c.pc = 0x0034B7E0u; return; } if (c.pc != 0x00316368u) [[unlikely]] return; }
L_00316368:
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 48u);  if (t) { goto L_003163F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031638Cu); set32(c.r[5], c.r[17].w[0] + 1424u);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x0031638Cu) [[unlikely]] return; }
L_0031638C:
    c.f[12] = ld32((c.r[17].w[0] + 52u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031639Cu); set32(c.r[5], c.r[17].w[0] + 1440u);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x0031639Cu) [[unlikely]] return; }
L_0031639C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003163A8u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x003163A8u) [[unlikely]] return; }
L_003163A8:
    c.f[0] = ld32((c.r[17].w[0] + 8336u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8340u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8344u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 1024u));
    c.f[0] = ld32((c.r[17].w[0] + 1004u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003163D8u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 306u, depth + 1u); else { c.pc = 0x0026FAE0u; return; } if (c.pc != 0x003163D8u) [[unlikely]] return; }
L_003163D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[17].w[0] + 1424u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003163F0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 296u, depth + 1u); else { c.pc = 0x0034B590u; return; } if (c.pc != 0x003163F0u) [[unlikely]] return; }
L_003163F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[17].w[0] + 1216u));  if (t) { goto L_00316444; } }
L_003163F8:
    c.f[0] = ld32((c.r[17].w[0] + 8336u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[17].w[0] + 1440u);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8340u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8344u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 1024u));
    c.f[0] = ld32((c.r[17].w[0] + 1004u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316428u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 306u, depth + 1u); else { c.pc = 0x0026FAE0u; return; } if (c.pc != 0x00316428u) [[unlikely]] return; }
L_00316428:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[17].w[0] + 1424u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316440u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 296u, depth + 1u); else { c.pc = 0x0034B590u; return; } if (c.pc != 0x00316440u) [[unlikely]] return; }
L_00316440:
    c.f[1] = ld32((c.r[17].w[0] + 1216u));
    c.budget -= 1;
L_00316444:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00316480; } }
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 1216u), c.f[0]);  if (t) { goto L_00316480; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 778u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00316480:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003164A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00316558; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_003164D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[16].w[0] + 108u));  if (t) { goto L_003165C0; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_003164D0:
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 8u);
    st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 763u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[2].w[0] + 609u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = c.f[0];
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 34;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 68u), c.f[0]);  if (t) { goto L_003165BC; } }
L_00316558:
    c.f[1] = ld32((c.r[16].w[0] + 1004u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (t) { goto L_003165BC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[2], 0u - 73u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 1308u), 0u);
    st32((c.r[16].w[0] + 1304u), 0u);
    st8((c.r[16].w[0] + 736u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003165BCu); st32((c.r[16].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_0086(c, 210u, depth + 1u); else { c.pc = 0x0031B2D0u; return; } if (c.pc != 0x003165BCu) [[unlikely]] return; }
L_003165BC:
    c.f[1] = ld32((c.r[16].w[0] + 108u));
    c.budget -= 1;
L_003165C0:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[2] = 0u;
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 68u));
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003165FC; } }
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 2;
L_003165FC:
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00316628; } }
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 4;
L_00316628:
    c.f[12] = ld32((c.r[16].w[0] + 104u));
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316638u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 313u, depth + 1u); else { c.pc = 0x0034B7E0u; return; } if (c.pc != 0x00316638u) [[unlikely]] return; }
L_00316638:
    c.f[12] = ld32((c.r[16].w[0] + 52u));
    set32(c.r[5], c.r[16].w[0] + 1440u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316648u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 313u, depth + 1u); else { c.pc = 0x0034B7E0u; return; } if (c.pc != 0x00316648u) [[unlikely]] return; }
L_00316648:
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[3].d[0] = c.r[3].d[0] | 4719ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00316748; } }
    c.f[12] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00316700; } }
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316694u); set32(c.r[5], c.r[16].w[0] + 1424u);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x00316694u) [[unlikely]] return; }
L_00316694:
    c.f[12] = ld32((c.r[16].w[0] + 52u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003166A4u); set32(c.r[5], c.r[16].w[0] + 1440u);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x003166A4u) [[unlikely]] return; }
L_003166A4:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003166B0u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x003166B0u) [[unlikely]] return; }
L_003166B0:
    c.f[0] = ld32((c.r[16].w[0] + 8336u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8340u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8344u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 1024u));
    c.f[0] = ld32((c.r[16].w[0] + 1004u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003166E0u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 306u, depth + 1u); else { c.pc = 0x0026FAE0u; return; } if (c.pc != 0x003166E0u) [[unlikely]] return; }
L_003166E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[16].w[0] + 1424u);
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003166F8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 296u, depth + 1u); else { c.pc = 0x0034B590u; return; } if (c.pc != 0x003166F8u) [[unlikely]] return; }
L_003166F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0031674C; } }
L_00316700:
    c.f[0] = ld32((c.r[16].w[0] + 8336u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[16].w[0] + 1440u);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8340u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8344u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 1024u));
    c.f[0] = ld32((c.r[16].w[0] + 1004u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316730u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 306u, depth + 1u); else { c.pc = 0x0026FAE0u; return; } if (c.pc != 0x00316730u) [[unlikely]] return; }
L_00316730:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[16].w[0] + 1424u);
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316748u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 296u, depth + 1u); else { c.pc = 0x0034B590u; return; } if (c.pc != 0x00316748u) [[unlikely]] return; }
L_00316748:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0031674C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00316760:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_003167E4; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], c.r[3].w[0] + 1u);  goto L_00316794; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_00316A50; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00316794:
    st8((c.r[17].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 1216u), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    set32(c.r[3], 0u - 261u);
    set32(c.r[2], 0u + 9u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st16((c.r[17].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[17].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 756u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003167D0u); st8((c.r[17].w[0] + 763u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0077(c, 234u, depth + 1u); else { c.pc = 0x002DEB00u; return; } if (c.pc != 0x003167D0u) [[unlikely]] return; }
L_003167D0:
    st32((c.r[17].w[0] + 68u), 0u);
    st32((c.r[17].w[0] + 52u), 0u);
    st32((c.r[17].w[0] + 108u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), 0u);  if (t) { goto L_00316A4C; } }
L_003167E4:
    c.f[1] = ld32((c.r[17].w[0] + 7780u));
    c.f[0] = ld32((c.r[17].w[0] + 1216u));
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 1216u), c.f[0]);  if (t) { goto L_00316A4C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 732u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316818u); c.r[5].d[0] = ld16((c.r[17].w[0] + 850u));  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x00316818u) [[unlikely]] return; }
L_00316818:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 28288u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[2].w[0] - 28284u);
    set32(c.r[16], c.r[29].w[0] + 120u);
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 7);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[4], c.r[17].w[0] + 8320u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28280u);
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316898u); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 196u, depth + 1u); else { c.pc = 0x0026EC30u; return; } if (c.pc != 0x00316898u) [[unlikely]] return; }
L_00316898:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[17].w[0] + 1408u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003168A8u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_005B(c, 147u, depth + 1u); else { c.pc = 0x0026E4D0u; return; } if (c.pc != 0x003168A8u) [[unlikely]] return; }
L_003168A8:
    c.f[12] = ld32((c.r[29].w[0] + 112u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003168B4u); c.f[13] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x003168B4u) [[unlikely]] return; }
L_003168B4:
    st32((c.r[17].w[0] + 1304u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 1304u)));
    c.r[1].d[0] = 0ull | 32769ull;
    set32(c.r[2], c.r[2].w[0] + 8192u);
    c.r[2].d[0] = c.r[2].d[0] & 49152ull;
    st32((c.r[17].w[0] + 1308u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 1304u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003168E8; } }
    set32(c.r[2], c.r[2].w[0] - 32768u);
    set32(c.r[2], c.r[2].w[0] - 32768u);
    st32((c.r[17].w[0] + 1304u), c.r[2].w[0]);
    c.budget -= 3;
L_003168E8:
    c.f[3] = ld32((c.r[17].w[0] + 1408u));
    c.f[2] = ld32((c.r[17].w[0] + 1412u));
    c.f[1] = ld32((c.r[17].w[0] + 1416u));
    c.f[0] = ld32((c.r[17].w[0] + 1420u));
    st32((c.r[17].w[0] + 1424u), c.f[3]);
    st32((c.r[17].w[0] + 1428u), c.f[2]);
    st32((c.r[17].w[0] + 1432u), c.f[1]);
    st32((c.r[17].w[0] + 1436u), c.f[0]);
    c.f[3] = ld32((c.r[17].w[0] + 1424u));
    c.f[2] = ld32((c.r[17].w[0] + 1428u));
    c.f[1] = ld32((c.r[17].w[0] + 1432u));
    c.f[0] = ld32((c.r[17].w[0] + 1436u));
    st32((c.r[17].w[0] + 1456u), c.f[3]);
    st32((c.r[17].w[0] + 1460u), c.f[2]);
    st32((c.r[17].w[0] + 1464u), c.f[1]);
    st32((c.r[17].w[0] + 1468u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 1308u)));
    c.budget -= 19;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 14));  if (t) { goto L_0031693C; } }
    set32(c.r[2], c.r[3].w[0] + 16383u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 14));
    c.budget -= 2;
L_0031693C:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    st16((c.r[17].w[0] + 848u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 1300u)));
    set32(c.r[2], 0u + 41u);
    st32((c.r[17].w[0] + 1312u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0031697C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 848u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] - 3360u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] + 64u);  if (t) { goto L_00316990; } }
L_0031697C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 848u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] - 3360u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_00316990:
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[12] = 0u;
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    st32((c.r[17].w[0] + 108u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 1216u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 7u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 1220u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 848u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003169E0u); set32(c.r[6], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_0059(c, 90u, depth + 1u); else { c.pc = 0x00264D10u; return; } if (c.pc != 0x003169E0u) [[unlikely]] return; }
L_003169E0:
    set32(c.r[5], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003169ECu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x003169ECu) [[unlikely]] return; }
L_003169EC:
    set32(c.r[5], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003169F8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x003169F8u) [[unlikely]] return; }
L_003169F8:
    set32(c.r[6], 0u + 2u);
    st8((c.r[17].w[0] + 274u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[17].w[0] + 276u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 848u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[4].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_00316A28; } }
    set32(c.r[3], 0u + 6u);
    st8((c.r[17].w[0] + 275u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 277u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_00316A4C; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_00316A28:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_00316A44; } }
    set32(c.r[3], 0u + 5u);
    st8((c.r[17].w[0] + 275u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 277u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00316A4C; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_00316A44:
    st8((c.r[17].w[0] + 275u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 277u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00316A4C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00316A50:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00316A60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 2u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316A80u); st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_0075(c, 164u, depth + 1u); else { c.pc = 0x002D6120u; return; } if (c.pc != 0x00316A80u) [[unlikely]] return; }
L_00316A80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], 0u + 11u);  if (t) { goto L_00316BB8; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00316B70; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00316B08; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00316AEC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_00316AC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));  if (t) { goto L_00316BC4; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00316AC8:
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 850u)));
    c.r[2].d[0] = c.r[2].d[0] & 3072ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00316AE8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00316AE8:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00316AEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316AF4u);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x00316AF4u) [[unlikely]] return; }
L_00316AF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00316BC0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00316B08:
    c.f[1] = ld32((c.r[16].w[0] + 1004u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 1004u));
    c.f[0] = ld32((c.r[16].w[0] + 1220u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 1220u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00316BC0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 1220u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00316BC0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00316BC0; } }
L_00316B70:
    c.f[2] = ld32((c.r[16].w[0] + 1004u));
    c.f[1] = ld32((c.r[16].w[0] + 1220u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 1220u), c.f[1]);  if (t) { goto L_00316BA8; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 850u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00316BC0; } }
L_00316BA8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 11u);
    c.budget -= 4;
L_00316BB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316BC0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x00316BC0u) [[unlikely]] return; }
L_00316BC0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.budget -= 1;
L_00316BC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] + 1424u);  if (t) { goto L_00316D20; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1524u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00316D1C; } }
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316BE4u); set32(c.r[5], c.r[16].w[0] + 1344u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x00316BE4u) [[unlikely]] return; }
L_00316BE4:
    c.f[1] = ld32((c.r[16].w[0] + 1248u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00316C1C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 850u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], 0u - 15360u);  if (t) { goto L_00316C14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 15360u);  if (t) { goto L_00316C74; } }
    set32(c.r[17], 0u - 15360u);
    c.budget -= 1;
L_00316C14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00316C74; } }
L_00316C1C:
    c.f[1] = ld32((c.r[16].w[0] + 1252u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00316C54; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 850u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00316C48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1256u)));  if (t) { goto L_00316C74; } }
L_00316C48:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1256u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u - c.r[2].w[0]);  if (t) { goto L_00316C74; } }
L_00316C54:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 850u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00316C6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1258u)));  if (t) { goto L_00316C74; } }
L_00316C6C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1258u)));
    set32(c.r[17], 0u - c.r[2].w[0]);
    c.budget -= 2;
L_00316C74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316C7Cu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00316C7Cu) [[unlikely]] return; }
L_00316C7C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316CA4u); set32(c.r[4], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0013C000u; return; } if (c.pc != 0x00316CA4u) [[unlikely]] return; }
L_00316CA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 28272u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[2].w[0] - 28268u);
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 7);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28264u);
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316D1Cu); st32((c.r[29].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x00316D1Cu) [[unlikely]] return; }
L_00316D1C:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 1;
L_00316D20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316D28u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 310u, depth + 1u); else { c.pc = 0x0034B780u; return; } if (c.pc != 0x00316D28u) [[unlikely]] return; }
L_00316D28:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[2].w[0] + 144u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316D54u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_005B(c, 147u, depth + 1u); else { c.pc = 0x0026E4D0u; return; } if (c.pc != 0x00316D54u) [[unlikely]] return; }
L_00316D54:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316D78u); set32(c.r[4], c.r[2].w[0] + 144u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00316D78u) [[unlikely]] return; }
L_00316D78:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 848u)));
    set32(c.r[2], c.r[2].w[0] << 14);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316D88u); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00316D88u) [[unlikely]] return; }
L_00316D88:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316D94u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x00316D94u) [[unlikely]] return; }
L_00316D94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316DACu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 288u, depth + 1u); else { c.pc = 0x0034B410u; return; } if (c.pc != 0x00316DACu) [[unlikely]] return; }
L_00316DAC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00316DC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316DDCu); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 164u, depth + 1u); else { c.pc = 0x002D6120u; return; } if (c.pc != 0x00316DDCu) [[unlikely]] return; }
L_00316DDC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00316F64; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[4].d[0]) { set32(c.r[2], 0u + 2u);  goto L_00316F08; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_00316EB8; }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_00316E18; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));  if (t) { goto L_00316F70; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_00316E18:
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[2], 0u + 41u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00316E48; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 848u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] - 3360u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[2].w[0] + 64u);  if (t) { goto L_00316E5C; } }
L_00316E48:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 848u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] - 3360u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[7], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_00316E5C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[12] = 0u;
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(0u));
    c.f[2] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 3u)));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316EACu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 90u, depth + 1u); else { c.pc = 0x00264D10u; return; } if (c.pc != 0x00316EACu) [[unlikely]] return; }
L_00316EAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00316F6C; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_00316EB8:
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 848u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00316EE0; } }
    set32(c.r[2], 0u + 5u);
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00316F04; } }
L_00316EE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_00316EFC; } }
    set32(c.r[2], 0u + 6u);
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00316F04; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_00316EFC:
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00316F04:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00316F08:
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316F24u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x00316F24u) [[unlikely]] return; }
L_00316F24:
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00316F6C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7813u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00316F6C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
L_00316F64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316F6Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0086(c, 210u, depth + 1u); else { c.pc = 0x0031B2D0u; return; } if (c.pc != 0x00316F6Cu) [[unlikely]] return; }
L_00316F6C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.budget -= 1;
L_00316F70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] + 1424u);  if (t) { goto L_003170CC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1524u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003170C8; } }
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00316F90u); set32(c.r[5], c.r[16].w[0] + 1344u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x00316F90u) [[unlikely]] return; }
L_00316F90:
    c.f[1] = ld32((c.r[16].w[0] + 1248u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00316FC8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 850u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], 0u - 15360u);  if (t) { goto L_00316FC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 15360u);  if (t) { goto L_00317020; } }
    set32(c.r[17], 0u - 15360u);
    c.budget -= 1;
L_00316FC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00317020; } }
L_00316FC8:
    c.f[1] = ld32((c.r[16].w[0] + 1252u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00317000; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 850u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00316FF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1256u)));  if (t) { goto L_00317020; } }
L_00316FF4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1256u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u - c.r[2].w[0]);  if (t) { goto L_00317020; } }
L_00317000:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 850u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00317018; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1258u)));  if (t) { goto L_00317020; } }
L_00317018:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1258u)));
    set32(c.r[17], 0u - c.r[2].w[0]);
    c.budget -= 2;
L_00317020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317028u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00317028u) [[unlikely]] return; }
L_00317028:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317050u); set32(c.r[4], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0013C000u; return; } if (c.pc != 0x00317050u) [[unlikely]] return; }
L_00317050:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 28272u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[2].w[0] - 28268u);
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 7);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28264u);
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003170C8u); st32((c.r[29].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x003170C8u) [[unlikely]] return; }
L_003170C8:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 1;
L_003170CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003170D4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 310u, depth + 1u); else { c.pc = 0x0034B780u; return; } if (c.pc != 0x003170D4u) [[unlikely]] return; }
L_003170D4:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003170F8; } }
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 2;
L_003170F8:
    set32(c.r[3], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 13));  if (t) { goto L_0031710C; } }
    set32(c.r[2], c.r[3].w[0] + 8191u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 13));
    c.budget -= 2;
L_0031710C:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 816u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    set32(c.r[3], c.r[29].w[0] + 48u);
    st32((c.r[3].w[0]), c.f[3]);
    st32((c.r[3].w[0] + 4u), c.f[2]);
    st32((c.r[3].w[0] + 8u), c.f[1]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031716Cu); set32(c.r[4], c.r[2].w[0] + 144u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0031716Cu) [[unlikely]] return; }
L_0031716C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 848u)));
    set32(c.r[2], c.r[2].w[0] << 14);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031717Cu); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0031717Cu) [[unlikely]] return; }
L_0031717C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317188u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x00317188u) [[unlikely]] return; }
L_00317188:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003171A0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 288u, depth + 1u); else { c.pc = 0x0034B410u; return; } if (c.pc != 0x003171A0u) [[unlikely]] return; }
L_003171A0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003171C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003171D8u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 164u, depth + 1u); else { c.pc = 0x002D6120u; return; } if (c.pc != 0x003171D8u) [[unlikely]] return; }
L_003171D8:
    set32(c.r[7], 0u + 10u);
    st8((c.r[16].w[0] + 785u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    if (c.r[2].d[0] == c.r[6].d[0]) { set32(c.r[5], c.r[16].w[0] + 1424u);  goto L_003172DC; }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_00317204; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 876u)));  if (t) { goto L_00317370; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_00317204:
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.r[2].d[0] = c.r[3].d[0] | 64ull;
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[16].w[0] + 736u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 108u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031724Cu); c.r[5].d[0] = ld16((c.r[16].w[0] + 704u));  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x0031724Cu) [[unlikely]] return; }
L_0031724C:
    set32(c.r[2], ld32((c.r[16].w[0] + 1308u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 13));  if (t) { goto L_00317260; } }
    set32(c.r[2], c.r[2].w[0] + 8191u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 13));
    c.budget -= 2;
L_00317260:
    set32(c.r[2], c.r[28].w[0] - 27568u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_00317284; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0031729C; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_00317284:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_0031729C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 1304u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003172D0u);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x003172D0u) [[unlikely]] return; }
L_003172D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 876u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0031736C; } }
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 1;
L_003172DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003172E4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 310u, depth + 1u); else { c.pc = 0x0034B780u; return; } if (c.pc != 0x003172E4u) [[unlikely]] return; }
L_003172E4:
    c.f[1] = ld32((c.r[16].w[0] + 1004u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.f[12] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (t) { goto L_0031736C; } }
    c.f[0] = ld32((c.r[16].w[0] + 1048u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 640u);
    set32(c.r[6], 0u + 6u);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1040u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    c.f[3] = ld32((c.r[16].w[0] + 1408u));
    c.f[2] = ld32((c.r[16].w[0] + 1412u));
    c.f[1] = ld32((c.r[16].w[0] + 1416u));
    c.f[0] = ld32((c.r[16].w[0] + 1420u));
    st32((c.r[16].w[0] + 1424u), c.f[3]);
    st32((c.r[16].w[0] + 1428u), c.f[2]);
    st32((c.r[16].w[0] + 1432u), c.f[1]);
    st32((c.r[16].w[0] + 1436u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317360u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 90u, depth + 1u); else { c.pc = 0x00264D10u; return; } if (c.pc != 0x00317360u) [[unlikely]] return; }
L_00317360:
    set32(c.r[5], 0u + 13u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031736Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x0031736Cu) [[unlikely]] return; }
L_0031736C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 876u)));
    c.budget -= 1;
L_00317370:
    c.f[0] = ld32((c.r[16].w[0] + 1004u));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317388u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00317388u) [[unlikely]] return; }
L_00317388:
    set32(c.r[5], c.r[16].w[0] + 1408u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317398u); mmi::paddub(c.r[6], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 292u, depth + 1u); else { c.pc = 0x0034B4D0u; return; } if (c.pc != 0x00317398u) [[unlikely]] return; }
L_00317398:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003173B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003173C4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x003173C4u) [[unlikely]] return; }
L_003173C4:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 10u);
    set32(c.r[5], 0u + 1u);
    st8((c.r[16].w[0] + 785u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003173E0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 164u, depth + 1u); else { c.pc = 0x002D6120u; return; } if (c.pc != 0x003173E0u) [[unlikely]] return; }
L_003173E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003174A0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0031743C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_00317410; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld16((c.r[16].w[0] + 704u));  if (t) { goto L_003174A4; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00317410:
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 11u);
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 1044u));
    set32(c.r[2], 0u + 4u);
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    st8((c.r[16].w[0] + 763u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 778u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 11;
L_0031743C:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00317460; } }
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 2;
L_00317460:
    c.f[2] = ld32((c.r[16].w[0] + 1216u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1216u), c.f[1]);  if (t) { goto L_003174A0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 778u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 6;
L_003174A0:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 704u));
    c.budget -= 1;
L_003174A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003174ACu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x003174ACu) [[unlikely]] return; }
L_003174AC:
    c.f[1] = ld32((c.r[16].w[0] + 1028u));
    c.f[0] = ld32((c.r[16].w[0] + 1004u));
    set32(c.r[5], c.r[16].w[0] + 1408u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003174C4u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0092(c, 288u, depth + 1u); else { c.pc = 0x0034B410u; return; } if (c.pc != 0x003174C4u) [[unlikely]] return; }
L_003174C4:
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003174D0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x003174D0u) [[unlikely]] return; }
L_003174D0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[2].w[0] + 144u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003174FCu); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 147u, depth + 1u); else { c.pc = 0x0026E4D0u; return; } if (c.pc != 0x003174FCu) [[unlikely]] return; }
L_003174FC:
    set32(c.r[2], c.r[29].w[0] + 36u);
    c.f[0] = 0u;
    st32((c.r[2].w[0]), 0u);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[29].w[0] + 32u));
    c.f[3] = ld32((c.r[29].w[0] + 40u));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[16].w[0] + 1424u);  if (t) { goto L_0031758C; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317558u); set32(c.r[4], c.r[2].w[0] + 144u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00317558u) [[unlikely]] return; }
L_00317558:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317564u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x00317564u) [[unlikely]] return; }
L_00317564:
    set32(c.r[2], c.r[29].w[0] + 32u);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[16].w[0] + 1424u), c.f[3]);
    st32((c.r[16].w[0] + 1428u), c.f[2]);
    st32((c.r[16].w[0] + 1432u), c.f[1]);
    st32((c.r[16].w[0] + 1436u), c.f[0]);
    set32(c.r[4], c.r[16].w[0] + 1424u);
    c.budget -= 10;
L_0031758C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317594u);  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013CBB0u; return; } if (c.pc != 0x00317594u) [[unlikely]] return; }
L_00317594:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    set32(c.r[5], c.r[16].w[0] + 1424u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003175A8u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0092(c, 313u, depth + 1u); else { c.pc = 0x0034B7E0u; return; } if (c.pc != 0x003175A8u) [[unlikely]] return; }
L_003175A8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003175C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_003176E4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00317698; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_003175FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[16].w[0] + 785u));  if (t) { goto L_003176F4; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_003175FC:
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 1308u), 0u);
    st32((c.r[16].w[0] + 1304u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[2].w[0] + 641u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[3], 0u + 4u);
    c.f[1] = c.r[6].w[0];
    set32(c.r[2], 0u + 10u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[16].w[0] + 1216u), c.f[1]);
    c.f[1] = fp::add(c.f[0], c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 836u)));
    st16((c.r[16].w[0] + 834u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 785u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317678u); c.f[12] = ld32((c.r[16].w[0] + 1216u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00317678u) [[unlikely]] return; }
L_00317678:
    c.f[12] = 0u;
    mmi::paddub(c.r[7], c.r[2], c.r[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317690u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 90u, depth + 1u); else { c.pc = 0x00264D10u; return; } if (c.pc != 0x00317690u) [[unlikely]] return; }
L_00317690:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003176F0; } }
L_00317698:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003176A0u);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x003176A0u) [[unlikely]] return; }
L_003176A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003176F0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[3], 0u + 8u);
    set32(c.r[2], 0u - 73u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 736u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 785u), static_cast<std::uint8_t>(0u));
    c.budget -= 15;
L_003176E4:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003176F0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0086(c, 210u, depth + 1u); else { c.pc = 0x0031B2D0u; return; } if (c.pc != 0x003176F0u) [[unlikely]] return; }
L_003176F0:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 785u));
    c.budget -= 1;
L_003176F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] + 1424u);  if (t) { goto L_00317708; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 785u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
L_00317708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317710u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 310u, depth + 1u); else { c.pc = 0x0034B780u; return; } if (c.pc != 0x00317710u) [[unlikely]] return; }
L_00317710:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00317734; } }
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 2;
L_00317734:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00317750:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0031786C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_00317834; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { mmi::paddub(c.r[4], c.r[16], c.r[0]);  goto L_003177CC; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_00317798; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_003178E8; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00317798:
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[7], 0u + 10u);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003177C8u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 90u, depth + 1u); else { c.pc = 0x00264D10u; return; } if (c.pc != 0x003177C8u) [[unlikely]] return; }
L_003177C8:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_003177CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003177D4u);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x003177D4u) [[unlikely]] return; }
L_003177D4:
    c.f[2] = ld32((c.r[16].w[0] + 1216u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1216u), c.f[1]);  if (t) { goto L_003178E4; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[5], 0u + 5u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 791u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 739u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_00317828; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317828u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 227u, depth + 1u); else { c.pc = 0x001F3160u; return; } if (c.pc != 0x00317828u) [[unlikely]] return; }
L_00317828:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 791u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003178E4; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00317834:
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[3], 0u - 389u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] + 8448u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 759u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 14;
L_0031786C:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031787Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x0031787Cu) [[unlikely]] return; }
L_0031787C:
    set32(c.r[6], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[5], c.r[16].w[0] + 1328u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031788Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 283u, depth + 1u); else { c.pc = 0x0034B360u; return; } if (c.pc != 0x0031788Cu) [[unlikely]] return; }
L_0031788C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003178E4; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 739u)));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003178E4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[5], 0u + 16u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 1308u), 0u);
    st32((c.r[16].w[0] + 1304u), 0u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003178D0u); st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x003178D0u) [[unlikely]] return; }
L_003178D0:
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003178DCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 227u, depth + 1u); else { c.pc = 0x001F3160u; return; } if (c.pc != 0x003178DCu) [[unlikely]] return; }
L_003178DC:
    st32((c.r[16].w[0] + 972u), 0u);
    st32((c.r[16].w[0] + 968u), 0u);
    c.budget -= 2;
L_003178E4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_003178E8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00317900:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 2u);
    st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 4u);
    st8((c.r[4].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 276u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031792Cu); st8((c.r[4].w[0] + 277u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x0031792Cu) [[unlikely]] return; }
L_0031792C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[16].w[0] + 1328u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317944u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 278u, depth + 1u); else { c.pc = 0x0034B2B0u; return; } if (c.pc != 0x00317944u) [[unlikely]] return; }
L_00317944:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00317960:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_003179F4; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], c.r[3].w[0] + 1u);  goto L_00317990; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00317A54; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00317990:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317998u); st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003C(c, 227u, depth + 1u); else { c.pc = 0x001F3160u; return; } if (c.pc != 0x00317998u) [[unlikely]] return; }
L_00317998:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[2].w[0] + 673u);
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 673u);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003179ECu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 90u, depth + 1u); else { c.pc = 0x00264D10u; return; } if (c.pc != 0x003179ECu) [[unlikely]] return; }
L_003179EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00317A50; } }
L_003179F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003179FCu);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x003179FCu) [[unlikely]] return; }
L_003179FC:
    c.f[2] = ld32((c.r[16].w[0] + 1004u));
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1216u), c.f[1]);  if (t) { goto L_00317A50; } }
    st8((c.r[16].w[0] + 741u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[2], 0u - 33u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317A44u); st8((c.r[16].w[0] + 755u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0086(c, 210u, depth + 1u); else { c.pc = 0x0031B2D0u; return; } if (c.pc != 0x00317A44u) [[unlikely]] return; }
L_00317A44:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317A50u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0086(c, 207u, depth + 1u); else { c.pc = 0x0031B260u; return; } if (c.pc != 0x00317A50u) [[unlikely]] return; }
L_00317A50:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00317A54:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00317A60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[2].w[0] - 28448u);
    set32(c.r[2], 0u + 2u);
    st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 7);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[2].w[0] + 144u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317AA4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 164u, depth + 1u); else { c.pc = 0x002D6120u; return; } if (c.pc != 0x00317AA4u) [[unlikely]] return; }
L_00317AA4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 732u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00317BE8; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_00317BB8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_00317AD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[17].w[0] + 704u));  if (t) { goto L_00317C44; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00317AD4:
    st8((c.r[17].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 6u);
    st8((c.r[17].w[0] + 794u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 741u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    set32(c.r[3], 0u - 453u);
    set32(c.r[2], 0u + 4u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st16((c.r[17].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st16((c.r[17].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 736u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[17].w[0] + 785u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 276u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 277u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317B28u); set32(c.r[5], c.r[17].w[0] + 1424u);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x00317B28u) [[unlikely]] return; }
L_00317B28:
    c.f[12] = ld32((c.r[17].w[0] + 52u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317B38u); set32(c.r[5], c.r[17].w[0] + 1440u);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x00317B38u) [[unlikely]] return; }
L_00317B38:
    set32(c.r[4], c.r[17].w[0] + 1424u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317B48u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x00317B48u) [[unlikely]] return; }
L_00317B48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317B50u); set32(c.r[4], c.r[17].w[0] + 1424u);  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013CBB0u; return; } if (c.pc != 0x00317B50u) [[unlikely]] return; }
L_00317B50:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_00317B74; } }
    set32(c.r[5], c.r[17].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317B74u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x00317B74u) [[unlikely]] return; }
L_00317B74:
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 608u);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[17].w[0] + 108u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1216u), c.f[0]);  if (t) { goto L_00317C40; } }
L_00317BB8:
    c.f[2] = ld32((c.r[17].w[0] + 1004u));
    c.f[1] = ld32((c.r[17].w[0] + 1216u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 1216u), c.f[1]);  if (t) { goto L_00317C40; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 732u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00317BE8:
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[4], c.r[17].w[0] + 1440u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    st32((c.r[17].w[0] + 1440u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    st32((c.r[17].w[0] + 1444u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317C14u); st32((c.r[17].w[0] + 1448u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x00317C14u) [[unlikely]] return; }
L_00317C14:
    c.f[3] = ld32((c.r[17].w[0] + 1440u));
    c.f[2] = ld32((c.r[17].w[0] + 1444u));
    c.f[1] = ld32((c.r[17].w[0] + 1448u));
    c.f[0] = ld32((c.r[17].w[0] + 1452u));
    set32(c.r[5], 0u + 19u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    st32((c.r[17].w[0] + 1456u), c.f[3]);
    st32((c.r[17].w[0] + 1460u), c.f[2]);
    st32((c.r[17].w[0] + 1464u), c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317C40u); st32((c.r[17].w[0] + 1468u), c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x00317C40u) [[unlikely]] return; }
L_00317C40:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 704u));
    c.budget -= 1;
L_00317C44:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.r[2].d[0] = c.r[2].d[0] & 11264ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317C54u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x00317C54u) [[unlikely]] return; }
L_00317C54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00317C84; } }
    c.f[3] = ld32((c.r[17].w[0] + 1408u));
    c.f[2] = ld32((c.r[17].w[0] + 1412u));
    c.f[1] = ld32((c.r[17].w[0] + 1416u));
    c.f[0] = ld32((c.r[17].w[0] + 1420u));
    set32(c.r[2], c.r[29].w[0] + 48u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), c.f[0]);  if (t) { goto L_00317C9C; } }
L_00317C84:
    c.f[0] = ld32((c.r[17].w[0] + 8352u));
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8356u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8360u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.budget -= 6;
L_00317C9C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317CCCu); set32(c.r[5], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x00317CCCu) [[unlikely]] return; }
L_00317CCC:
    c.f[1] = ld32((c.r[17].w[0] + 1024u));
    c.f[0] = ld32((c.r[17].w[0] + 1004u));
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317CE8u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0092(c, 296u, depth + 1u); else { c.pc = 0x0034B590u; return; } if (c.pc != 0x00317CE8u) [[unlikely]] return; }
L_00317CE8:
    set32(c.r[5], c.r[17].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317CF4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00317CF4u) [[unlikely]] return; }
L_00317CF4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00317D10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[2].w[0] - 28448u);
    set32(c.r[2], 0u + 2u);
    st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 7);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[2].w[0] + 144u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317D54u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 164u, depth + 1u); else { c.pc = 0x002D6120u; return; } if (c.pc != 0x00317D54u) [[unlikely]] return; }
L_00317D54:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 732u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_00317D68; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00317DF8; } }
L_00317D68:
    st8((c.r[17].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 1056u));
    set32(c.r[3], 0u + 7u);
    set32(c.r[2], 0u + 4u);
    set32(c.r[5], c.r[17].w[0] + 1424u);
    st32((c.r[17].w[0] + 1216u), c.f[0]);
    st8((c.r[17].w[0] + 741u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 778u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 276u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317D9Cu); st8((c.r[17].w[0] + 277u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x00317D9Cu) [[unlikely]] return; }
L_00317D9C:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 704u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317DA8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x00317DA8u) [[unlikely]] return; }
L_00317DA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00317DE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317DB8u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 856u)));  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x00317DB8u) [[unlikely]] return; }
L_00317DB8:
    c.f[2] = ld32((c.r[17].w[0] + 992u));
    c.f[1] = ld32((c.r[17].w[0] + 1136u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317DD4u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 856u)));  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x00317DD4u) [[unlikely]] return; }
L_00317DD4:
    c.f[1] = ld32((c.r[17].w[0] + 992u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), c.f[0]);  if (t) { goto L_00317DF0; } }
L_00317DE4:
    st32((c.r[17].w[0] + 104u), 0u);
    c.f[0] = ld32((c.r[17].w[0] + 992u));
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.budget -= 3;
L_00317DF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 108u), 0u);  if (t) { goto L_00317E00; } }
L_00317DF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317E00u);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x00317E00u) [[unlikely]] return; }
L_00317E00:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 704u));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.r[2].d[0] = c.r[2].d[0] & 11264ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317E14u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0075(c, 91u, depth + 1u); else { c.pc = 0x002D52F0u; return; } if (c.pc != 0x00317E14u) [[unlikely]] return; }
L_00317E14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00317F84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317E24u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 856u)));  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x00317E24u) [[unlikely]] return; }
L_00317E24:
    c.f[3] = ld32((c.r[17].w[0] + 996u));
    c.f[2] = ld32((c.r[17].w[0] + 1136u));
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317E48u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 856u)));  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x00317E48u) [[unlikely]] return; }
L_00317E48:
    c.f[2] = ld32((c.r[17].w[0] + 996u));
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.f[1] = ld32((c.r[17].w[0] + 1060u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00317E78; } }
    st32((c.r[17].w[0] + 104u), c.f[1]);
    c.budget -= 1;
L_00317E78:
    c.f[1] = ld32((c.r[17].w[0] + 1024u));
    c.f[0] = ld32((c.r[17].w[0] + 1004u));
    set32(c.r[5], c.r[17].w[0] + 1424u);
    set32(c.r[6], c.r[17].w[0] + 1408u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317E94u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0092(c, 327u, depth + 1u); else { c.pc = 0x0034BA10u; return; } if (c.pc != 0x00317E94u) [[unlikely]] return; }
L_00317E94:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);  if (t) { goto L_00317F48; } }
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317EE8u); st32((c.r[29].w[0] + 72u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x00317EE8u) [[unlikely]] return; }
L_00317EE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317EFCu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x00317EFCu) [[unlikely]] return; }
L_00317EFC:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317F08u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x00317F08u) [[unlikely]] return; }
L_00317F08:
    c.f[1] = ld32((c.r[17].w[0] + 1024u));
    c.f[0] = ld32((c.r[17].w[0] + 1004u));
    set32(c.r[4], c.r[17].w[0] + 1440u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317F20u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 306u, depth + 1u); else { c.pc = 0x0026FAE0u; return; } if (c.pc != 0x00317F20u) [[unlikely]] return; }
L_00317F20:
    set32(c.r[2], c.r[29].w[0] + 64u);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[17].w[0] + 1456u), c.f[3]);
    st32((c.r[17].w[0] + 1460u), c.f[2]);
    st32((c.r[17].w[0] + 1464u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1468u), c.f[0]);  if (t) { goto L_00317FD8; } }
L_00317F48:
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317F58u); set32(c.r[5], c.r[17].w[0] + 1408u);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x00317F58u) [[unlikely]] return; }
L_00317F58:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317F64u); set32(c.r[5], c.r[17].w[0] + 1456u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x00317F64u) [[unlikely]] return; }
L_00317F64:
    c.f[1] = ld32((c.r[17].w[0] + 1024u));
    c.f[0] = ld32((c.r[17].w[0] + 1004u));
    set32(c.r[4], c.r[17].w[0] + 1440u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317F7Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 306u, depth + 1u); else { c.pc = 0x0026FAE0u; return; } if (c.pc != 0x00317F7Cu) [[unlikely]] return; }
L_00317F7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[17].w[0] + 52u));  if (t) { goto L_00317FDC; } }
L_00317F84:
    c.f[1] = ld32((c.r[17].w[0] + 1000u));
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.f[2] = 0u;
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 996u));
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00317FC0; } }
    st32((c.r[17].w[0] + 104u), 0u);
    c.budget -= 1;
L_00317FC0:
    c.f[1] = ld32((c.r[17].w[0] + 1024u));
    c.f[0] = ld32((c.r[17].w[0] + 1004u));
    set32(c.r[4], c.r[17].w[0] + 1440u);
    set32(c.r[5], c.r[17].w[0] + 1456u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00317FD8u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 306u, depth + 1u); else { c.pc = 0x0026FAE0u; return; } if (c.pc != 0x00317FD8u) [[unlikely]] return; }
L_00317FD8:
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.budget -= 1;
L_00317FDC:
    c.f[1] = ld32((c.r[17].w[0] + 1064u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00317FF4; } }
    st32((c.r[17].w[0] + 52u), c.f[1]);
    c.budget -= 1;
L_00317FF4:
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    set32(c.r[5], c.r[17].w[0] + 1424u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00318004u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 313u, depth + 1u); else { c.pc = 0x0034B7E0u; return; } if (c.pc != 0x00318004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0086(c, 2u, depth);
}

}
