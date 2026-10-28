#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0025[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0,
    6, 0, 7, 0, 8, 0, 9, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 0,
    14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 24, 0, 25, 0, 26,
    0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0,
    0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 35, 0, 36,
    0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0,
    41, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0,
    0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0,
    54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 70, 0, 0, 71, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75,
    0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0,
    0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95,
    0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 111, 0, 112, 0, 0, 113,
    0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 122, 0, 123, 0, 124, 0, 0, 125, 0, 126, 0, 0, 0, 127,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 135, 0,
    0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 141,
    0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    155, 0, 0, 0, 0, 0, 156, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164,
    0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0,
    169, 0, 0, 0, 0, 0, 0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0,
    0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0,
    198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0,
    0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 207, 0, 0, 208, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0,
    0, 215, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    220, 0, 0, 221, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    224, 0, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 229, 0, 230, 0, 0, 231, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 233, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 237, 0, 0, 0, 0, 0,
    238, 0, 0, 0, 239, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0,
    250, 0, 0, 0, 0, 0, 0, 251, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0,
    266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0,
    273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0,
    0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 290, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0,
    0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0,
    306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 311,
    0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0,
    0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 327,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0,
    0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0,
    334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 339,
    0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0,
    0, 354, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    359, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0,
    0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 0,
};

void unit_0025(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00194000;
    case 2u: goto L_0019403C;
    case 3u: goto L_00194044;
    case 4u: goto L_00194050;
    case 5u: goto L_00194070;
    case 6u: goto L_00194080;
    case 7u: goto L_00194088;
    case 8u: goto L_00194090;
    case 9u: goto L_00194098;
    case 10u: goto L_001940A0;
    case 11u: goto L_001940B0;
    case 12u: goto L_001940D8;
    case 13u: goto L_001940E4;
    case 14u: goto L_00194100;
    case 15u: goto L_0019412C;
    case 16u: goto L_00194138;
    case 17u: goto L_00194140;
    case 18u: goto L_0019414C;
    case 19u: goto L_00194170;
    case 20u: goto L_0019419C;
    case 21u: goto L_001941B0;
    case 22u: goto L_001941D4;
    case 23u: goto L_001941E4;
    case 24u: goto L_001941EC;
    case 25u: goto L_001941F4;
    case 26u: goto L_001941FC;
    case 27u: goto L_00194214;
    case 28u: goto L_00194220;
    case 29u: goto L_00194250;
    case 30u: goto L_001942F0;
    case 31u: goto L_00194310;
    case 32u: goto L_00194324;
    case 33u: goto L_00194354;
    case 34u: goto L_0019436C;
    case 35u: goto L_00194374;
    case 36u: goto L_0019437C;
    case 37u: goto L_00194394;
    case 38u: goto L_001943B4;
    case 39u: goto L_001943CC;
    case 40u: goto L_001943E0;
    case 41u: goto L_00194400;
    case 42u: goto L_0019440C;
    case 43u: goto L_00194420;
    case 44u: goto L_00194438;
    case 45u: goto L_00194480;
    case 46u: goto L_001944A8;
    case 47u: goto L_001944C0;
    case 48u: goto L_001944F0;
    case 49u: goto L_00194508;
    case 50u: goto L_00194514;
    case 51u: goto L_001945B8;
    case 52u: goto L_001945D0;
    case 53u: goto L_001945E8;
    case 54u: goto L_00194600;
    case 55u: goto L_00194620;
    case 56u: goto L_00194640;
    case 57u: goto L_00194670;
    case 58u: goto L_001946BC;
    case 59u: goto L_001946D0;
    case 60u: goto L_00194750;
    case 61u: goto L_001947D8;
    case 62u: goto L_0019482C;
    case 63u: goto L_00194884;
    case 64u: goto L_001948A0;
    case 65u: goto L_001948E0;
    case 66u: goto L_00194910;
    case 67u: goto L_00194938;
    case 68u: goto L_00194944;
    case 69u: goto L_00194960;
    case 70u: goto L_0019498C;
    case 71u: goto L_00194998;
    case 72u: goto L_001949A0;
    case 73u: goto L_001949AC;
    case 74u: goto L_001949D0;
    case 75u: goto L_001949FC;
    case 76u: goto L_00194A10;
    case 77u: goto L_00194A68;
    case 78u: goto L_00194A90;
    case 79u: goto L_00194AC0;
    case 80u: goto L_00194AE8;
    case 81u: goto L_00194AF4;
    case 82u: goto L_00194B10;
    case 83u: goto L_00194B30;
    case 84u: goto L_00194B58;
    case 85u: goto L_00194B70;
    case 86u: goto L_00194BA0;
    case 87u: goto L_00194BB8;
    case 88u: goto L_00194BC4;
    case 89u: goto L_00194C20;
    case 90u: goto L_00194C30;
    case 91u: goto L_00194CB0;
    case 92u: goto L_00194CD0;
    case 93u: goto L_00194CF0;
    case 94u: goto L_00194D30;
    case 95u: goto L_00194D7C;
    case 96u: goto L_00194D90;
    case 97u: goto L_00194DE0;
    case 98u: goto L_00194E38;
    case 99u: goto L_00194EB4;
    case 100u: goto L_00194EF8;
    case 101u: goto L_00194F40;
    case 102u: goto L_00194F88;
    case 103u: goto L_00195048;
    case 104u: goto L_00195070;
    case 105u: goto L_001950B0;
    case 106u: goto L_001950E0;
    case 107u: goto L_00195108;
    case 108u: goto L_00195114;
    case 109u: goto L_00195130;
    case 110u: goto L_0019515C;
    case 111u: goto L_00195168;
    case 112u: goto L_00195170;
    case 113u: goto L_0019517C;
    case 114u: goto L_001951A0;
    case 115u: goto L_001951CC;
    case 116u: goto L_001951E0;
    case 117u: goto L_00195230;
    case 118u: goto L_00195240;
    case 119u: goto L_00195270;
    case 120u: goto L_001952B0;
    case 121u: goto L_001952C0;
    case 122u: goto L_001952C8;
    case 123u: goto L_001952D0;
    case 124u: goto L_001952D8;
    case 125u: goto L_001952E4;
    case 126u: goto L_001952EC;
    case 127u: goto L_001952FC;
    case 128u: goto L_0019532C;
    case 129u: goto L_0019538C;
    case 130u: goto L_001953E0;
    case 131u: goto L_00195434;
    case 132u: goto L_0019544C;
    case 133u: goto L_00195458;
    case 134u: goto L_00195470;
    case 135u: goto L_00195478;
    case 136u: goto L_00195490;
    case 137u: goto L_001954A0;
    case 138u: goto L_001954C0;
    case 139u: goto L_001954E8;
    case 140u: goto L_001954F4;
    case 141u: goto L_001954FC;
    case 142u: goto L_0019551C;
    case 143u: goto L_0019552C;
    case 144u: goto L_0019553C;
    case 145u: goto L_00195548;
    case 146u: goto L_00195560;
    case 147u: goto L_0019559C;
    case 148u: goto L_001955CC;
    case 149u: goto L_001955D8;
    case 150u: goto L_001955F0;
    case 151u: goto L_0019561C;
    case 152u: goto L_0019562C;
    case 153u: goto L_00195638;
    case 154u: goto L_00195650;
    case 155u: goto L_00195680;
    case 156u: goto L_00195698;
    case 157u: goto L_001956A4;
    case 158u: goto L_001956F0;
    case 159u: goto L_00195720;
    case 160u: goto L_00195730;
    case 161u: goto L_00195750;
    case 162u: goto L_00195780;
    case 163u: goto L_001957B4;
    case 164u: goto L_001957FC;
    case 165u: goto L_00195810;
    case 166u: goto L_00195854;
    case 167u: goto L_0019585C;
    case 168u: goto L_00195870;
    case 169u: goto L_00195880;
    case 170u: goto L_0019589C;
    case 171u: goto L_001958A4;
    case 172u: goto L_001958C0;
    case 173u: goto L_00195928;
    case 174u: goto L_00195984;
    case 175u: goto L_001959A4;
    case 176u: goto L_00195A18;
    case 177u: goto L_00195A40;
    case 178u: goto L_00195A8C;
    case 179u: goto L_00195AA0;
    case 180u: goto L_00195B94;
    case 181u: goto L_00195BA0;
    case 182u: goto L_00195BD0;
    case 183u: goto L_00195C30;
    case 184u: goto L_00195CF8;
    case 185u: goto L_00195D04;
    case 186u: goto L_00195EAC;
    case 187u: goto L_00195EC0;
    case 188u: goto L_00195EF0;
    case 189u: goto L_00195F30;
    case 190u: goto L_00195FD0;
    case 191u: goto L_00196054;
    case 192u: goto L_001960B8;
    case 193u: goto L_001961B0;
    case 194u: goto L_001961F0;
    case 195u: goto L_00196330;
    case 196u: goto L_00196360;
    case 197u: goto L_001963F0;
    case 198u: goto L_00196400;
    case 199u: goto L_00196470;
    case 200u: goto L_001964F0;
    case 201u: goto L_00196508;
    case 202u: goto L_00196520;
    case 203u: goto L_00196530;
    case 204u: goto L_00196560;
    case 205u: goto L_00196590;
    case 206u: goto L_0019659C;
    case 207u: goto L_001965A8;
    case 208u: goto L_001965B4;
    case 209u: goto L_001965BC;
    case 210u: goto L_001965E8;
    case 211u: goto L_00196614;
    case 212u: goto L_00196640;
    case 213u: goto L_00196664;
    case 214u: goto L_00196674;
    case 215u: goto L_00196684;
    case 216u: goto L_00196694;
    case 217u: goto L_001966A4;
    case 218u: goto L_001966C0;
    case 219u: goto L_001966C8;
    case 220u: goto L_00196700;
    case 221u: goto L_0019670C;
    case 222u: goto L_00196718;
    case 223u: goto L_00196750;
    case 224u: goto L_00196780;
    case 225u: goto L_001967A0;
    case 226u: goto L_001967A8;
    case 227u: goto L_001967C0;
    case 228u: goto L_001967D0;
    case 229u: goto L_001967D8;
    case 230u: goto L_001967E0;
    case 231u: goto L_001967EC;
    case 232u: goto L_0019682C;
    case 233u: goto L_00196834;
    case 234u: goto L_0019683C;
    case 235u: goto L_00196850;
    case 236u: goto L_00196860;
    case 237u: goto L_00196868;
    case 238u: goto L_00196880;
    case 239u: goto L_00196890;
    case 240u: goto L_00196898;
    case 241u: goto L_001968B0;
    case 242u: goto L_001968D4;
    case 243u: goto L_001968E0;
    case 244u: goto L_00196948;
    case 245u: goto L_00196958;
    case 246u: goto L_00196968;
    case 247u: goto L_00196994;
    case 248u: goto L_001969BC;
    case 249u: goto L_001969DC;
    case 250u: goto L_00196A00;
    case 251u: goto L_00196A1C;
    case 252u: goto L_00196A24;
    case 253u: goto L_00196A40;
    case 254u: goto L_00196A50;
    case 255u: goto L_00196A70;
    case 256u: goto L_00196AEC;
    case 257u: goto L_00196B18;
    case 258u: goto L_00196B28;
    case 259u: goto L_00196B40;
    case 260u: goto L_00196B50;
    case 261u: goto L_00196BB0;
    case 262u: goto L_00196BF0;
    case 263u: goto L_00196CA0;
    case 264u: goto L_00196CD4;
    case 265u: goto L_00196CE4;
    case 266u: goto L_00196D00;
    case 267u: goto L_00196D2C;
    case 268u: goto L_00196D50;
    case 269u: goto L_00196E0C;
    case 270u: goto L_00196E30;
    case 271u: goto L_00196E40;
    case 272u: goto L_00196E60;
    case 273u: goto L_00196E80;
    case 274u: goto L_00196EB0;
    case 275u: goto L_00196ED0;
    case 276u: goto L_00196F28;
    case 277u: goto L_00196F38;
    case 278u: goto L_00196F60;
    case 279u: goto L_00196FA0;
    case 280u: goto L_00196FB0;
    case 281u: goto L_00196FF4;
    case 282u: goto L_00197008;
    case 283u: goto L_00197030;
    case 284u: goto L_00197090;
    case 285u: goto L_001970F0;
    case 286u: goto L_00197140;
    case 287u: goto L_00197150;
    case 288u: goto L_001971B0;
    case 289u: goto L_001971C0;
    case 290u: goto L_00197214;
    case 291u: goto L_00197220;
    case 292u: goto L_00197258;
    case 293u: goto L_00197270;
    case 294u: goto L_001972DC;
    case 295u: goto L_001972F0;
    case 296u: goto L_00197320;
    case 297u: goto L_00197334;
    case 298u: goto L_00197344;
    case 299u: goto L_00197360;
    case 300u: goto L_001973C4;
    case 301u: goto L_001973EC;
    case 302u: goto L_00197410;
    case 303u: goto L_00197440;
    case 304u: goto L_00197454;
    case 305u: goto L_00197464;
    case 306u: goto L_00197480;
    case 307u: goto L_001974E4;
    case 308u: goto L_00197510;
    case 309u: goto L_00197530;
    case 310u: goto L_00197568;
    case 311u: goto L_0019757C;
    case 312u: goto L_0019758C;
    case 313u: goto L_001975A8;
    case 314u: goto L_0019760C;
    case 315u: goto L_00197640;
    case 316u: goto L_00197670;
    case 317u: goto L_001976A0;
    case 318u: goto L_001976B4;
    case 319u: goto L_001976C4;
    case 320u: goto L_001976E0;
    case 321u: goto L_00197744;
    case 322u: goto L_0019776C;
    case 323u: goto L_00197790;
    case 324u: goto L_001977C0;
    case 325u: goto L_001977D0;
    case 326u: goto L_001977E0;
    case 327u: goto L_001977FC;
    case 328u: goto L_00197850;
    case 329u: goto L_0019786C;
    case 330u: goto L_00197890;
    case 331u: goto L_001978C0;
    case 332u: goto L_001978D4;
    case 333u: goto L_001978E4;
    case 334u: goto L_00197900;
    case 335u: goto L_00197964;
    case 336u: goto L_0019798C;
    case 337u: goto L_001979B0;
    case 338u: goto L_001979E8;
    case 339u: goto L_001979FC;
    case 340u: goto L_00197A0C;
    case 341u: goto L_00197A28;
    case 342u: goto L_00197A90;
    case 343u: goto L_00197ABC;
    case 344u: goto L_00197AE0;
    case 345u: goto L_00197B20;
    case 346u: goto L_00197B34;
    case 347u: goto L_00197B44;
    case 348u: goto L_00197B60;
    case 349u: goto L_00197BC8;
    case 350u: goto L_00197BFC;
    case 351u: goto L_00197C30;
    case 352u: goto L_00197C60;
    case 353u: goto L_00197C74;
    case 354u: goto L_00197C84;
    case 355u: goto L_00197CA0;
    case 356u: goto L_00197D04;
    case 357u: goto L_00197D2C;
    case 358u: goto L_00197D50;
    case 359u: goto L_00197D80;
    case 360u: goto L_00197D94;
    case 361u: goto L_00197DA4;
    case 362u: goto L_00197DC0;
    case 363u: goto L_00197E24;
    case 364u: goto L_00197E50;
    case 365u: goto L_00197E70;
    case 366u: goto L_00197EA0;
    case 367u: goto L_00197EB4;
    case 368u: goto L_00197EC4;
    case 369u: goto L_00197EE0;
    case 370u: goto L_00197F44;
    case 371u: goto L_00197F6C;
    case 372u: goto L_00197F90;
    case 373u: goto L_00197FC8;
    case 374u: goto L_00197FDC;
    case 375u: goto L_00197FEC;
    default: bad_entry(c, 0x00194000u); return;
    }
L_00194000:
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[3], 0u - 16u);
    set32(c.r[2], 0u - 8u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[6], c.r[6].w[0] + 15u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st32((c.r[17].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[5], c.r[17].w[0] + 64u);
    set32(c.r[6], 0u + 39u);
    set32(c.r[3], c.r[3].w[0] + 7u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019403Cu); st32((c.r[17].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0029(c, 108u, depth + 1u); else { c.pc = 0x001A56D0u; return; } if (c.pc != 0x0019403Cu) [[unlikely]] return; }
L_0019403C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00194044u);  if (depth < kMaxDepth) unit_0024(c, 223u, depth + 1u); else { c.pc = 0x001938C0u; return; } if (c.pc != 0x00194044u) [[unlikely]] return; }
L_00194044:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00194050u); c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);  if (depth < kMaxDepth) unit_000D(c, 49u, depth + 1u); else { c.pc = 0x00134A60u; return; } if (c.pc != 0x00194050u) [[unlikely]] return; }
L_00194050:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00194070:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00194080u);  if (depth < kMaxDepth) unit_0024(c, 219u, depth + 1u); else { c.pc = 0x001937D0u; return; } if (c.pc != 0x00194080u) [[unlikely]] return; }
L_00194080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00194088u);  if (depth < kMaxDepth) unit_0024(c, 188u, depth + 1u); else { c.pc = 0x00193040u; return; } if (c.pc != 0x00194088u) [[unlikely]] return; }
L_00194088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00194090u);  if (depth < kMaxDepth) unit_0024(c, 211u, depth + 1u); else { c.pc = 0x001935D0u; return; } if (c.pc != 0x00194090u) [[unlikely]] return; }
L_00194090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00194098u);  if (depth < kMaxDepth) unit_0024(c, 213u, depth + 1u); else { c.pc = 0x00193650u; return; } if (c.pc != 0x00194098u) [[unlikely]] return; }
L_00194098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001940A0u);  if (depth < kMaxDepth) unit_0024(c, 220u, depth + 1u); else { c.pc = 0x00193810u; return; } if (c.pc != 0x001940A0u) [[unlikely]] return; }
L_001940A0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001940B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[17], c.r[2].w[0] + 3344u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], c.r[2].w[0] + 30432u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 10;
L_001940D8:
    c.r[5].d[0] = ld16((c.r[17].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001940E4u); set32(c.r[4], c.r[18].w[0] + 64u);  if (depth < kMaxDepth) unit_0033(c, 21u, depth + 1u); else { c.pc = 0x001CC4E0u; return; } if (c.pc != 0x001940E4u) [[unlikely]] return; }
L_001940E4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 20u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001940D8u | kUnwind; return; } goto L_001940D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00194100u);  if (depth < kMaxDepth) unit_0080(c, 308u, depth + 1u); else { c.pc = 0x00303FA0u; return; } if (c.pc != 0x00194100u) [[unlikely]] return; }
L_00194100:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[4], c.r[2].w[0] + 30432u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] + 1152u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019412Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019412Cu) [[unlikely]] return; }
L_0019412C:
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00194138u); mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 287u, depth + 1u); else { c.pc = 0x00303B80u; return; } if (c.pc != 0x00194138u) [[unlikely]] return; }
L_00194138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00194140u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_0080(c, 295u, depth + 1u); else { c.pc = 0x00303D30u; return; } if (c.pc != 0x00194140u) [[unlikely]] return; }
L_00194140:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019414Cu); set32(c.r[4], c.r[2].w[0] + 15904u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x0019414Cu) [[unlikely]] return; }
L_0019414C:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00194170:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] + 1168u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019419Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019419Cu) [[unlikely]] return; }
L_0019419C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001941B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001941D4u); st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0080(c, 270u, depth + 1u); else { c.pc = 0x003036C0u; return; } if (c.pc != 0x001941D4u) [[unlikely]] return; }
L_001941D4:
    set32(c.r[6], 0u + 6656u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001941E4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001941E4u) [[unlikely]] return; }
L_001941E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001941ECu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 140u, depth + 1u); else { c.pc = 0x0015B6C0u; return; } if (c.pc != 0x001941ECu) [[unlikely]] return; }
L_001941EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001941F4u);  if (depth < kMaxDepth) unit_0025(c, 5u, depth + 1u); else { c.pc = 0x00194070u; return; } if (c.pc != 0x001941F4u) [[unlikely]] return; }
L_001941F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001941FCu);  if (depth < kMaxDepth) unit_000E(c, 28u, depth + 1u); else { c.pc = 0x00138590u; return; } if (c.pc != 0x001941FCu) [[unlikely]] return; }
L_001941FC:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_00194218; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00194214u);  if (depth < kMaxDepth) unit_0026(c, 121u, depth + 1u); else { c.pc = 0x00199C40u; return; } if (c.pc != 0x00194214u) [[unlikely]] return; }
L_00194214:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_00194218:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00194220u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001E(c, 216u, depth + 1u); else { c.pc = 0x0017BE40u; return; } if (c.pc != 0x00194220u) [[unlikely]] return; }
L_00194220:
    c.r[8].d[0] = 0ull << 56;
    st8((c.r[16].w[0] + 58u), static_cast<std::uint8_t>(0u));
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    st8((c.r[16].w[0] + 59u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 62u), static_cast<std::uint8_t>(0u));
    c.r[1].d[0] = c.r[8].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[16].w[0] + 61u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001942B8; } }
    set32(c.r[3], c.r[8].w[0] << 1);
    set32(c.r[9], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u - 1u);
    c.budget -= 4;
L_00194250:
    set32(c.r[4], c.r[16].w[0] + c.r[8].w[0]);
    st16((c.r[9].w[0]), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 260u)));
    c.budget -= 9;
    if (c.r[3].d[0] == c.r[7].d[0]) { c.r[3].d[0] = c.r[8].d[0] & 1ull;  goto L_00194280; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001942A8; } }
    c.r[3].d[0] = c.r[8].d[0] & 1ull;
    c.budget -= 1;
L_00194280:
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], c.r[6].w[0] << (c.r[8].w[0] & 31u));
    c.r[5].d[0] = ~(c.r[3].d[0] | 0ull);
    set32(c.r[3], c.r[4].w[0] + c.r[8].w[0]);
    st8((c.r[3].w[0] + 396u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 400u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    st8((c.r[4].w[0] + 400u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 10;
L_001942A8:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00194250u | kUnwind; return; } goto L_00194250; } }
L_001942B8:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 265u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[4].w[0] + 264u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001942F0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 455u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001942F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001942F0u); set32(c.r[4], 0u + 10u);  if (depth < kMaxDepth) unit_0025(c, 255u, depth + 1u); else { c.pc = 0x00196A70u; return; } if (c.pc != 0x001942F0u) [[unlikely]] return; }
L_001942F0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[3].w[0] + 455u), static_cast<std::uint8_t>(0u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00194310:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00194324u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 300u, depth + 1u); else { c.pc = 0x0034FD20u; return; } if (c.pc != 0x00194324u) [[unlikely]] return; }
L_00194324:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001943CC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00194354; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00194354u);  if (depth < kMaxDepth) unit_001E(c, 223u, depth + 1u); else { c.pc = 0x0017BFF0u; return; } if (c.pc != 0x00194354u) [[unlikely]] return; }
L_00194354:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00190000u);
    set32(c.r[4], c.r[2].w[0] + 25888u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[16].w[0] + 132u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019436Cu); st8((c.r[16].w[0] + 132u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0093(c, 253u, depth + 1u); else { c.pc = 0x0034F7F0u; return; } if (c.pc != 0x0019436Cu) [[unlikely]] return; }
L_0019436C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00194374u);  if (depth < kMaxDepth) unit_001F(c, 235u, depth + 1u); else { c.pc = 0x0017F320u; return; } if (c.pc != 0x00194374u) [[unlikely]] return; }
L_00194374:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019437Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_001F(c, 240u, depth + 1u); else { c.pc = 0x0017F370u; return; } if (c.pc != 0x0019437Cu) [[unlikely]] return; }
L_0019437C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00190000u);
    set32(c.r[4], c.r[2].w[0] + 25888u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[16].w[0] + 133u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00194394u); st8((c.r[16].w[0] + 133u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0093(c, 253u, depth + 1u); else { c.pc = 0x0034F7F0u; return; } if (c.pc != 0x00194394u) [[unlikely]] return; }
L_00194394:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001943CC; } }
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 18u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001943B4u); st32((c.r[16].w[0] + 128u), 0u);  if (depth < kMaxDepth) unit_001E(c, 216u, depth + 1u); else { c.pc = 0x0017BE40u; return; } if (c.pc != 0x001943B4u) [[unlikely]] return; }
L_001943B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00190000u);
    set32(c.r[4], c.r[2].w[0] + 25904u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[7], 0u + 18u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001943CCu); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 253u, depth + 1u); else { c.pc = 0x0034F7F0u; return; } if (c.pc != 0x001943CCu) [[unlikely]] return; }
L_001943CC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001943E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00194400u); st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0034(c, 130u, depth + 1u); else { c.pc = 0x001D0960u; return; } if (c.pc != 0x00194400u) [[unlikely]] return; }
L_00194400:
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019440Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 50u, depth + 1u); else { c.pc = 0x0016CF10u; return; } if (c.pc != 0x0019440Cu) [[unlikely]] return; }
L_0019440C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00194420:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00194438u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x00194438u) [[unlikely]] return; }
L_00194438:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00194464; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 62u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 62u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
L_00194464:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00194480:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], c.r[28].w[0] - 30760u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001944A8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001944A8u) [[unlikely]] return; }
L_001944A8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001944C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 58u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001944E8; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 62u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 62u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_001944E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001944F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 6;
L_00194508:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00194514u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 57u, depth + 1u); else { c.pc = 0x00194670u; return; } if (c.pc != 0x00194514u) [[unlikely]] return; }
L_00194514:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00194508u | kUnwind; return; } goto L_00194508; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 59u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 87u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001945E8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 264u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00194584; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 265u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00194584; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 260u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 301u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00194598; } }
L_00194584:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 260u)));
    st8((c.r[3].w[0] + 301u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_00194598:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001945D0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 302u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001945B8u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 260u)));  if (depth < kMaxDepth) unit_001F(c, 3u, depth + 1u); else { c.pc = 0x0017C030u; return; } if (c.pc != 0x001945B8u) [[unlikely]] return; }
L_001945B8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 302u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 260u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001945D0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_001E(c, 216u, depth + 1u); else { c.pc = 0x0017BE40u; return; } if (c.pc != 0x001945D0u) [[unlikely]] return; }
L_001945D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00190000u);
    set32(c.r[6], c.r[16].w[0] + 134u);
    set32(c.r[4], c.r[2].w[0] + 25888u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001945E8u); st8((c.r[16].w[0] + 134u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0093(c, 253u, depth + 1u); else { c.pc = 0x0034F7F0u; return; } if (c.pc != 0x001945E8u) [[unlikely]] return; }
L_001945E8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00194600:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], c.r[28].w[0] - 30752u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00194000u < 16384u) { entry = entries_0025[(t - 0x00194000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00194620:
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 32u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 8;
    { st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));  goto L_00194640; }
L_00194640:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  c.pc = t; return; }
L_00194670:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[5].w[0] & 31u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 87u)));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001946BC; } }
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] + 1184u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001946BCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001946BCu) [[unlikely]] return; }
L_001946BC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001946D0:
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 260u)));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[5].w[0] << 1);  if (t) { goto L_00194720; } }
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[6], 0u + 3u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 260u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 264u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 264u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0019473C; } }
    set32(c.r[3], c.r[5].w[0] << 1);
    c.budget -= 1;
L_00194720:
    set32(c.r[7], c.r[4].w[0] + c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = c.r[5].d[0] & 1ull;
    set32(c.r[5], c.r[6].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[3].w[0] + 28u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 7;
L_0019473C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00194750:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[5].w[0] << 5);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[5].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    c.r[5].d[0] = ld16((c.r[3].w[0] + 68u));
    set32(c.r[17], c.r[3].w[0] + 68u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 28u)));
    c.r[3].d[0] = c.r[5].d[0] & 2048ull;
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[6].w[0] + 28u);  if (t) { goto L_001947A4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].d[0] = c.r[5].d[0] & 1024ull;  if (t) { goto L_001947A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_001947C0; } }
L_001947A4:
    c.r[3].d[0] = c.r[5].d[0] & 1024ull;
    c.budget -= 1;
L_001947A8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001947C0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001947C0; } }
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001947C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001947D8; } }
    set32(c.r[5], 0u + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001947D8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001947D8u) [[unlikely]] return; }
L_001947D8:
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].d[0] = ld16((c.r[17].w[0]));
    set32(c.r[7], 0u + 32u);
    c.r[4].d[0] = 0ull | 33776ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    if (c.r[5].d[0] != 0) c.r[4].d[0] = c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00194884; } }
    set32(c.r[2], c.r[18].w[0] << 1);
    set32(c.r[6], c.r[19].w[0] + c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[18].w[0] + c.r[19].w[0]);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[6].w[0] + 8u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[5], 0u + 4u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019482Cu); st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0019482Cu) [[unlikely]] return; }
L_0019482C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 260u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 264u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 264u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 61u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st8((c.r[19].w[0] + 61u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[4].w[0] + c.r[19].w[0]);
    st8((c.r[3].w[0] + 24u), static_cast<std::uint8_t>(c.r[18].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 18;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00194884; } }
    c.r[4].d[0] = c.r[18].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00194884u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0082(c, 91u, depth + 1u); else { c.pc = 0x0030A510u; return; } if (c.pc != 0x00194884u) [[unlikely]] return; }
L_00194884:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001948A0:
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001948D0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001948D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001948E0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 59u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[3].w[0] << (c.r[5].w[0] & 31u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00194900; } }
    c.r[3].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 59u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00194900:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00194910:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[17], c.r[2].w[0] + 3344u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], c.r[2].w[0] + 30432u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 10;
L_00194938:
    c.r[5].d[0] = ld16((c.r[17].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00194944u); set32(c.r[4], c.r[18].w[0] + 64u);  if (depth < kMaxDepth) unit_0033(c, 21u, depth + 1u); else { c.pc = 0x001CC4E0u; return; } if (c.pc != 0x00194944u) [[unlikely]] return; }
L_00194944:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 20u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00194938u | kUnwind; return; } goto L_00194938; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00194960u);  if (depth < kMaxDepth) unit_0080(c, 308u, depth + 1u); else { c.pc = 0x00303FA0u; return; } if (c.pc != 0x00194960u) [[unlikely]] return; }
L_00194960:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[4], c.r[2].w[0] + 30432u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] + 1200u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019498Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019498Cu) [[unlikely]] return; }
L_0019498C:
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00194998u); mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 287u, depth + 1u); else { c.pc = 0x00303B80u; return; } if (c.pc != 0x00194998u) [[unlikely]] return; }
L_00194998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001949A0u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_0080(c, 295u, depth + 1u); else { c.pc = 0x00303D30u; return; } if (c.pc != 0x001949A0u) [[unlikely]] return; }
L_001949A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001949ACu); set32(c.r[4], c.r[2].w[0] + 15904u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x001949ACu) [[unlikely]] return; }
L_001949AC:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001949D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] + 1216u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001949FCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001949FCu) [[unlikely]] return; }
L_001949FC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00194A10:
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u - 1u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 5u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 58u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 59u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 62u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 56u), static_cast<std::uint8_t>(0u));
    set32(c.r[7], ld32((c.r[28].w[0] - 26304u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 24u)));
    set32(c.r[5], c.r[6].w[0] + c.r[7].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 260u)));
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 288u)));
    c.budget -= 17;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (t) { goto L_00194A64; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[6].w[0] & 31u));
    st8((c.r[4].w[0] + 60u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
L_00194A64:
    mmi::paddub(c.r[6], c.r[4], c.r[0]);
    c.budget -= 1;
L_00194A68:
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(0u));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[3].w[0] + 16u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = c.r[5].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00194A68u | kUnwind; return; } goto L_00194A68; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00194A90:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00194AAC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00194AAC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00194AC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[4], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00194AE8u); st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0034(c, 130u, depth + 1u); else { c.pc = 0x001D0960u; return; } if (c.pc != 0x00194AE8u) [[unlikely]] return; }
L_00194AE8:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00194AF4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 196u, depth + 1u); else { c.pc = 0x00196360u; return; } if (c.pc != 0x00194AF4u) [[unlikely]] return; }
L_00194AF4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00194B10:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00194B30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], c.r[28].w[0] - 30744u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00194B58u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00194B58u) [[unlikely]] return; }
L_00194B58:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00194B70:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 58u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00194B98; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 62u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 62u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_00194B98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00194BA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 6;
L_00194BB8:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00194BC4u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 94u, depth + 1u); else { c.pc = 0x00194D30u; return; } if (c.pc != 0x00194BC4u) [[unlikely]] return; }
L_00194BC4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00194BB8u | kUnwind; return; } goto L_00194BB8; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 59u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 87u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00194C98; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 264u)));
    c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00194C18; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 265u)));
    c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00194C18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00194C20u);  if (depth < kMaxDepth) unit_001D(c, 398u, depth + 1u); else { c.pc = 0x001779B0u; return; } if (c.pc != 0x00194C20u) [[unlikely]] return; }
L_00194C20:
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], 0u + 4u);
    set32(c.r[6], 0u - 1u);
    c.budget -= 4;
L_00194C30:
    set32(c.r[8], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[8].w[0] + c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 264u)));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_00194C8C; }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[9], c.r[3].w[0] + 288u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 288u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_00194C88; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 257u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00194C70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00194C78; } }
L_00194C70:
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 2;
L_00194C78:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    st8((c.r[3].w[0] + 290u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00194C88:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_00194C8C:
    c.r[3].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00194C30u | kUnwind; return; } goto L_00194C30; } }
L_00194C98:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00194CB0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], c.r[28].w[0] - 30736u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00194000u < 16384u) { entry = entries_0025[(t - 0x00194000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00194CD0:
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 32u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 8;
    { st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));  goto L_00194CF0; }
L_00194CF0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] > 0; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00194D28; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 133u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00194D24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00194D28; } }
L_00194D24:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_00194D28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00194D30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[5].w[0] & 31u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 87u)));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00194D7C; } }
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] + 1232u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00194D7Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00194D7Cu) [[unlikely]] return; }
L_00194D7C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00194D90:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 60u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[7], c.r[3].w[0] << (c.r[5].w[0] & 31u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[7].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] << 1);  if (t) { goto L_00194DC0; } }
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], 0u + 3u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00194DD4; } }
    set32(c.r[3], c.r[5].w[0] << 1);
    c.budget -= 1;
L_00194DC0:
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 60u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 5;
L_00194DD4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00194DE0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 56u)));
    mmi::paddub(c.r[20], c.r[5], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 264u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[21], c.r[4], c.r[0]);  if (t) { goto L_00194E2C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 265u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], 0u + 4u);  if (t) { goto L_00194E30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 24u);  if (t) { goto L_00194E30; } }
L_00194E2C:
    set32(c.r[16], 0u + 4u);
    c.budget -= 1;
L_00194E30:
    set32(c.r[19], c.r[20].w[0] << 5);
    set32(c.r[18], c.r[21].w[0] + c.r[19].w[0]);
    c.budget -= 2;
L_00194E38:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 72u));
    c.r[2].d[0] = c.r[3].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 1024ull;  if (t) { goto L_00194E74; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[21].w[0] + 56u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0; mmi::paddub(c.r[4], c.r[21], c.r[0]);  if (t) { goto L_00194EAC; } }
    set32(c.r[2], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 56u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00194EA8; } }
    c.r[2].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 1;
L_00194E74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00194EA8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 56u)));
    set32(c.r[2], c.r[16].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[21].w[0] + 56u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00194EA8; } }
    st8((c.r[21].w[0] + 56u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00194EA8:
    mmi::paddub(c.r[4], c.r[21], c.r[0]);
    c.budget -= 1;
L_00194EAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00194EB4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 196u, depth + 1u); else { c.pc = 0x00196360u; return; } if (c.pc != 0x00194EB4u) [[unlikely]] return; }
L_00194EB4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 57u)));
    set32(c.r[3], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00194E38u | kUnwind; return; } goto L_00194E38; } }
    c.r[3].d[0] = c.r[4].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00194EE0; } }
    c.r[1].d[0] = c.r[4].sd[0] < 23ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00194E38u | kUnwind; return; } goto L_00194E38; } }
    c.budget -= 1;
L_00194EE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[17].d[0]; set32(c.r[3], c.r[19].w[0] + c.r[21].w[0]);  if (t) { goto L_00194EFC; } }
    set32(c.r[5], 0u + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00194EF8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x00194EF8u) [[unlikely]] return; }
L_00194EF8:
    set32(c.r[3], c.r[19].w[0] + c.r[21].w[0]);
    c.budget -= 1;
L_00194EFC:
    c.r[3].d[0] = ld16((c.r[3].w[0] + 68u));
    c.r[3].d[0] = c.r[3].d[0] & 33776ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00195030; } }
    set32(c.r[2], c.r[20].w[0] << 1);
    set32(c.r[6], c.r[21].w[0] + c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[4], 0u + 32u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[20].w[0] + c.r[21].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[6].w[0] + 8u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[5], 0u + 4u);
    st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00194F40u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x00194F40u) [[unlikely]] return; }
L_00194F40:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 264u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00194FD0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 265u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00194FD0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[3], c.r[3].w[0] + 1248u);
    ld128((c.r[3].w[0]) & ~15u, c.r[4]);
    set32(c.r[5], c.r[29].w[0] + 112u);
    st128((c.r[5].w[0]) & ~15u, c.r[4]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 56u)));
    set32(c.r[3], 0u + 23u);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00194FAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00194F88u);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x00194F88u) [[unlikely]] return; }
L_00194F88:
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0; c.r[3].d[0] = c.r[4].d[0] & 15ull;  if (t) { goto L_00194FA0; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);  goto L_00194FA4; }
    set32(c.r[3], c.r[3].w[0] - 16u);
    c.budget -= 1;
L_00194FA0:
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    c.budget -= 1;
L_00194FA4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 112u)));
    st8((c.r[21].w[0] + 56u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00194FAC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[3].w[0] + 294u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], c.r[20].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 260u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 292u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00195030; } }
L_00194FD0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[20].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 260u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0] + 288u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], c.r[20].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 260u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0] + 290u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], c.r[20].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 260u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 288u)));
    st8((c.r[4].w[0] + 296u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], c.r[20].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 260u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 290u)));
    st8((c.r[4].w[0] + 297u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 24;
L_00195030:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[17].d[0];  if (t) { goto L_00195048; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00195048u); mmi::paddub(c.r[4], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 196u, depth + 1u); else { c.pc = 0x00196360u; return; } if (c.pc != 0x00195048u) [[unlikely]] return; }
L_00195048:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00195070:
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001950A0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001950A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001950B0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 59u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[3].w[0] << (c.r[5].w[0] & 31u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001950D0; } }
    c.r[3].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 59u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001950D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001950E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[17], c.r[2].w[0] + 3344u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], c.r[2].w[0] + 30432u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 10;
L_00195108:
    c.r[5].d[0] = ld16((c.r[17].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00195114u); set32(c.r[4], c.r[18].w[0] + 64u);  if (depth < kMaxDepth) unit_0033(c, 21u, depth + 1u); else { c.pc = 0x001CC4E0u; return; } if (c.pc != 0x00195114u) [[unlikely]] return; }
L_00195114:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 20u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00195108u | kUnwind; return; } goto L_00195108; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00195130u);  if (depth < kMaxDepth) unit_0080(c, 308u, depth + 1u); else { c.pc = 0x00303FA0u; return; } if (c.pc != 0x00195130u) [[unlikely]] return; }
L_00195130:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[4], c.r[2].w[0] + 30432u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] + 1264u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019515Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019515Cu) [[unlikely]] return; }
L_0019515C:
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00195168u); mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 287u, depth + 1u); else { c.pc = 0x00303B80u; return; } if (c.pc != 0x00195168u) [[unlikely]] return; }
L_00195168:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00195170u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_0080(c, 295u, depth + 1u); else { c.pc = 0x00303D30u; return; } if (c.pc != 0x00195170u) [[unlikely]] return; }
L_00195170:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019517Cu); set32(c.r[4], c.r[2].w[0] + 15904u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x0019517Cu) [[unlikely]] return; }
L_0019517C:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001951A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] + 1280u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001951CCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001951CCu) [[unlikely]] return; }
L_001951CC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001951E0:
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 371u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00195218; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 63u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00195218; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 5u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 84u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00195224; } }
L_00195218:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00195224:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00195230:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00195240u);  if (depth < kMaxDepth) unit_0093(c, 300u, depth + 1u); else { c.pc = 0x0034FD20u; return; } if (c.pc != 0x00195240u) [[unlikely]] return; }
L_00195240:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00195258; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00195258:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00195270:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 371u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_001952EC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 63u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001952EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001952B0u);  if (depth < kMaxDepth) unit_0080(c, 270u, depth + 1u); else { c.pc = 0x003036C0u; return; } if (c.pc != 0x001952B0u) [[unlikely]] return; }
L_001952B0:
    set32(c.r[6], 0u + 6656u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001952C0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001952C0u) [[unlikely]] return; }
L_001952C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001952C8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 140u, depth + 1u); else { c.pc = 0x0015B6C0u; return; } if (c.pc != 0x001952C8u) [[unlikely]] return; }
L_001952C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001952D0u);  if (depth < kMaxDepth) unit_0025(c, 5u, depth + 1u); else { c.pc = 0x00194070u; return; } if (c.pc != 0x001952D0u) [[unlikely]] return; }
L_001952D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001952D8u);  if (depth < kMaxDepth) unit_000E(c, 28u, depth + 1u); else { c.pc = 0x00138590u; return; } if (c.pc != 0x001952D8u) [[unlikely]] return; }
L_001952D8:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001952E4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001E(c, 216u, depth + 1u); else { c.pc = 0x0017BE40u; return; } if (c.pc != 0x001952E4u) [[unlikely]] return; }
L_001952E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001952ECu);  if (depth < kMaxDepth) unit_0017(c, 268u, depth + 1u); else { c.pc = 0x0015E810u; return; } if (c.pc != 0x001952ECu) [[unlikely]] return; }
L_001952EC:
    st8((c.r[16].w[0] + 58u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 59u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 62u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
L_001952FC:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], c.r[16].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld8((c.r[2].w[0] + 148u));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[3].w[0] + 136u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001952FCu | kUnwind; return; } goto L_001952FC; } }
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    set32(c.r[4], 0u + 6u);
    set32(c.r[3], 0u + 8u);
    c.budget -= 4;
L_0019532C:
    set32(c.r[2], c.r[16].w[0] + c.r[6].w[0]);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(0u));
    st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 260u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019535C; } }
    st8((c.r[5].w[0] + 33u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 32u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00195368; } }
L_0019535C:
    st8((c.r[5].w[0] + 33u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 32u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00195368:
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[5].w[0] + 41u), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 40u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019532Cu | kUnwind; return; } goto L_0019532C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019538Cu); c.r[4].d[0] = c.r[2].d[0] | 4896ull;  if (depth < kMaxDepth) unit_0029(c, 85u, depth + 1u); else { c.pc = 0x001A5160u; return; } if (c.pc != 0x0019538Cu) [[unlikely]] return; }
L_0019538C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[3].d[0] = c.r[3].d[0] | 4896ull;
    st32((c.r[28].w[0] - 26224u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E610000u);
    st32((c.r[1].w[0] + 5288u), 0u);
    c.r[5].d[0] = c.r[3].d[0] | 18350ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 26224u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[3].w[0] + 404u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26224u)));
    st32((c.r[3].w[0] + 408u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26224u)));
    st8((c.r[3].w[0] + 432u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26224u)));
    st8((c.r[3].w[0] + 433u), static_cast<std::uint8_t>(0u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001953E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 371u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00195490; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 63u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00195490; } }
    st32((c.r[16].w[0] + 128u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 302u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00195434u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 260u)));  if (depth < kMaxDepth) unit_001F(c, 3u, depth + 1u); else { c.pc = 0x0017C030u; return; } if (c.pc != 0x00195434u) [[unlikely]] return; }
L_00195434:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 302u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 260u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019544Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_001E(c, 216u, depth + 1u); else { c.pc = 0x0017BE40u; return; } if (c.pc != 0x0019544Cu) [[unlikely]] return; }
L_0019544C:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00195458u); set32(c.r[5], 0u + 18u);  if (depth < kMaxDepth) unit_001E(c, 216u, depth + 1u); else { c.pc = 0x0017BE40u; return; } if (c.pc != 0x00195458u) [[unlikely]] return; }
L_00195458:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00190000u);
    set32(c.r[4], c.r[2].w[0] + 25904u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[7], 0u + 18u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00195470u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 253u, depth + 1u); else { c.pc = 0x0034F7F0u; return; } if (c.pc != 0x00195470u) [[unlikely]] return; }
L_00195470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00195478u);  if (depth < kMaxDepth) unit_0026(c, 121u, depth + 1u); else { c.pc = 0x00199C40u; return; } if (c.pc != 0x00195478u) [[unlikely]] return; }
L_00195478:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00190000u);
    set32(c.r[6], c.r[16].w[0] + 134u);
    set32(c.r[4], c.r[2].w[0] + 25888u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00195490u); st8((c.r[16].w[0] + 134u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0093(c, 253u, depth + 1u); else { c.pc = 0x0034F7F0u; return; } if (c.pc != 0x00195490u) [[unlikely]] return; }
L_00195490:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001954A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 134u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0019553C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001954C0u);  if (depth < kMaxDepth) unit_0093(c, 279u, depth + 1u); else { c.pc = 0x0034FB40u; return; } if (c.pc != 0x001954C0u) [[unlikely]] return; }
L_001954C0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 371u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_00195514; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001954E8u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0034(c, 130u, depth + 1u); else { c.pc = 0x001D0960u; return; } if (c.pc != 0x001954E8u) [[unlikely]] return; }
L_001954E8:
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001954F4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 50u, depth + 1u); else { c.pc = 0x0016CF10u; return; } if (c.pc != 0x001954F4u) [[unlikely]] return; }
L_001954F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001954FCu); set32(c.r[4], 0u + 10u);  if (depth < kMaxDepth) unit_0025(c, 255u, depth + 1u); else { c.pc = 0x00196A70u; return; } if (c.pc != 0x001954FCu) [[unlikely]] return; }
L_001954FC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 63u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00195510; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 84u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00195510:
    set32(c.r[4], 0u + 3u);
    c.budget -= 1;
L_00195514:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019551Cu);  if (depth < kMaxDepth) unit_0034(c, 130u, depth + 1u); else { c.pc = 0x001D0960u; return; } if (c.pc != 0x0019551Cu) [[unlikely]] return; }
L_0019551C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 302u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019552Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 198u, depth + 1u); else { c.pc = 0x00196400u; return; } if (c.pc != 0x0019552Cu) [[unlikely]] return; }
L_0019552C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 302u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019553Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 199u, depth + 1u); else { c.pc = 0x00196470u; return; } if (c.pc != 0x0019553Cu) [[unlikely]] return; }
L_0019553C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00195548u); c.r[4].d[0] = c.r[2].d[0] | 4896ull;  if (depth < kMaxDepth) unit_0029(c, 92u, depth + 1u); else { c.pc = 0x001A52A0u; return; } if (c.pc != 0x00195548u) [[unlikely]] return; }
L_00195548:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00195560:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 371u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00195594; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001955BC; } }
L_00195594:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019559Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x0019559Cu) [[unlikely]] return; }
L_0019559C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001955BC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_001955BC:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 302u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001955CCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 199u, depth + 1u); else { c.pc = 0x00196470u; return; } if (c.pc != 0x001955CCu) [[unlikely]] return; }
L_001955CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001955D8u); c.r[4].d[0] = c.r[2].d[0] | 4896ull;  if (depth < kMaxDepth) unit_0029(c, 92u, depth + 1u); else { c.pc = 0x001A52A0u; return; } if (c.pc != 0x001955D8u) [[unlikely]] return; }
L_001955D8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001955F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], c.r[28].w[0] - 30728u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0019561Cu); mmi::paddub(c.r[16], c.r[4], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0019561Cu) [[unlikely]] return; }
L_0019561C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 302u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019562Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 199u, depth + 1u); else { c.pc = 0x00196470u; return; } if (c.pc != 0x0019562Cu) [[unlikely]] return; }
L_0019562C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00195638u); c.r[4].d[0] = c.r[2].d[0] | 4896ull;  if (depth < kMaxDepth) unit_0029(c, 92u, depth + 1u); else { c.pc = 0x001A52A0u; return; } if (c.pc != 0x00195638u) [[unlikely]] return; }
L_00195638:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00195650:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 58u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00195678; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 62u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 62u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_00195678:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00195680:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 6;
L_00195698:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001956A4u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 177u, depth + 1u); else { c.pc = 0x00195A40u; return; } if (c.pc != 0x001956A4u) [[unlikely]] return; }
L_001956A4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00195698u | kUnwind; return; } goto L_00195698; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 59u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 87u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001956DC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_001956DC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001956F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] + 1312u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00195720u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00195720u) [[unlikely]] return; }
L_00195720:
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00195730u); c.r[4].d[0] = c.r[2].d[0] | 4896ull;  if (depth < kMaxDepth) unit_0029(c, 92u, depth + 1u); else { c.pc = 0x001A52A0u; return; } if (c.pc != 0x00195730u) [[unlikely]] return; }
L_00195730:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00195750:
    set32(c.r[3], ld32((c.r[4].w[0] + 128u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00195778; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 5;
L_00195778:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00195780:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 192u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 100u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 5u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[7].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001957B4u); st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0025(c, 284u, depth + 1u); else { c.pc = 0x00197090u; return; } if (c.pc != 0x001957B4u) [[unlikely]] return; }
L_001957B4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 302u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 404u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001957FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] - 23712u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_001957FC; } }
    set32(c.r[6], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[4], c.r[2].w[0] + 29152u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001957FCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0025(c, 262u, depth + 1u); else { c.pc = 0x00196BF0u; return; } if (c.pc != 0x001957FCu) [[unlikely]] return; }
L_001957FC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00195810:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019585C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 8u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00195854u); st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_001B(c, 50u, depth + 1u); else { c.pc = 0x0016CF10u; return; } if (c.pc != 0x00195854u) [[unlikely]] return; }
L_00195854:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019585Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x0019585Cu) [[unlikely]] return; }
L_0019585C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00195870:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00195880u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x00195880u) [[unlikely]] return; }
L_00195880:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001958A4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019589Cu); st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0080(c, 270u, depth + 1u); else { c.pc = 0x003036C0u; return; } if (c.pc != 0x0019589Cu) [[unlikely]] return; }
L_0019589C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001958A4u);  if (depth < kMaxDepth) unit_0025(c, 235u, depth + 1u); else { c.pc = 0x00196850u; return; } if (c.pc != 0x001958A4u) [[unlikely]] return; }
L_001958A4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001958C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 302u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 300u)));
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    set32(c.r[3], c.r[6].w[0] << (c.r[3].w[0] & 31u));
    c.r[3].d[0] = ~(c.r[3].d[0] | 0ull);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st8((c.r[5].w[0] + 300u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 302u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 371u)));
    set32(c.r[5], c.r[6].w[0] << (c.r[5].w[0] & 31u));
    c.r[5].d[0] = ~(c.r[5].d[0] | 0ull);
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    st8((c.r[3].w[0] + 371u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0] + 302u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 26;
L_00195928:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], c.r[6].w[0] << (c.r[7].w[0] & 31u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 371u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_0019595C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], c.r[2].w[0] + 302u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 302u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_00195958; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 1;
L_00195958:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_0019595C:
    c.r[2].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00195928u | kUnwind; return; } goto L_00195928; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 302u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001959CC; } }
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    mmi::paddub(c.r[17], c.r[16], c.r[0]);
    c.budget -= 2;
L_00195984:
    set32(c.r[4], ld32((c.r[17].w[0] + 400u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_001959B4; }
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_001959AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001959A4u);  if (depth < kMaxDepth) unit_000E(c, 100u, depth + 1u); else { c.pc = 0x00139720u; return; } if (c.pc != 0x001959A4u) [[unlikely]] return; }
L_001959A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001959B0; } }
L_001959AC:
    st32((c.r[17].w[0] + 400u), 0u);
    c.budget -= 1;
L_001959B0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001959B4:
    c.r[2].d[0] = c.r[18].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00195984u | kUnwind; return; } goto L_00195984; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 63u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00195A24; } }
L_001959CC:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u + 1u);
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st64((c.r[2].w[0] + 8u), 0ull);
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 302u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 87u)));
    set32(c.r[4], c.r[5].w[0] << (c.r[4].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[3].w[0] + 87u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 302u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 300u)));
    set32(c.r[3], c.r[5].w[0] << (c.r[3].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00195A18u); st8((c.r[4].w[0] + 300u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0017(c, 118u, depth + 1u); else { c.pc = 0x0015D080u; return; } if (c.pc != 0x00195A18u) [[unlikely]] return; }
L_00195A18:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 63u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 3;
L_00195A24:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00195A40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[5].w[0] & 31u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 87u)));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00195A8C; } }
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] + 1344u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00195A8Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00195A8Cu) [[unlikely]] return; }
L_00195A8C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00195AA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[7], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[6], 0u - 1u);
    set32(c.r[7], c.r[3].w[0] + c.r[7].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 264u)));
    c.budget -= 9;
    { const bool t = c.r[7].d[0] == c.r[6].d[0]; set32(c.r[9], c.r[4].w[0] + c.r[3].w[0]);  if (t) { goto L_00195AD8; } }
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00195B94; } }
    set32(c.r[9], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_00195AD8:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[6], c.r[2].w[0] + 1136u);
    set32(c.r[7], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[8].w[0] + 1u);
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[9].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[7].w[0] + 20u), static_cast<std::uint8_t>(0u));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 20u)));
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[8], c.r[2].w[0] + 384u);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    st32((c.r[2].w[0] + 384u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 260u)));
    set32(c.r[2], c.r[6].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 136u)));
    c.budget -= 23;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00195B54; } }
    set32(c.r[7], c.r[6].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[6], c.r[2].w[0] + 1144u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[8].w[0])));
    set32(c.r[6], ld32((c.r[6].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    st32((c.r[8].w[0]), c.r[2].w[0]);
    c.budget -= 8;
L_00195B54:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 260u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_00195B80; } }
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], 0u + 6u);
    st8((c.r[2].w[0] + 33u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 32u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00195B8C; } }
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 1;
L_00195B80:
    set32(c.r[3], 0u + 8u);
    st8((c.r[2].w[0] + 33u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 32u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00195B8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00195B94u);  if (depth < kMaxDepth) unit_0025(c, 198u, depth + 1u); else { c.pc = 0x00196400u; return; } if (c.pc != 0x00195B94u) [[unlikely]] return; }
L_00195B94:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00195BA0:
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] + 1360u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00194000u < 16384u) { entry = entries_0025[(t - 0x00194000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00195BD0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[7], c.r[5].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], c.r[5].w[0] << 1);
    set32(c.r[6], c.r[16].w[0] + c.r[4].w[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 20u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[17], c.r[6].w[0] + 32u);
    set32(c.r[8], c.r[4].w[0] + c.r[3].w[0]);
    mmi::paddub(c.r[20], c.r[5], c.r[0]);
    set32(c.r[19], c.r[5].w[0] << 5);
    set32(c.r[5], c.r[4].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[17].w[0] + c.r[9].w[0]);
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[18], c.r[7].w[0] + 20u);
    set32(c.r[3], 0u + 21u);
    set32(c.r[11], 0u + 1u);
    c.budget -= 24;
L_00195C30:
    c.r[10].d[0] = ld16((c.r[5].w[0] + 72u));
    c.r[9].d[0] = c.r[10].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[9].d[0] == 0ull; c.r[9].d[0] = c.r[10].d[0] & 1024ull;  if (t) { goto L_00195C78; } }
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 20u)));
    set32(c.r[10], c.r[6].w[0] + c.r[9].w[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 32u)));
    set32(c.r[9], c.r[9].w[0] - 1u);
    st8((c.r[10].w[0] + 32u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = c.r[9].d[0] << 56;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 56);
    c.budget -= 9;
    { const bool t = c.r[9].sd[0] >= 0;  if (t) { goto L_00195CB8; } }
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 20u)));
    set32(c.r[9], c.r[6].w[0] + c.r[9].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0] + 32u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00195CB8; } }
    c.r[9].d[0] = c.r[10].d[0] & 1024ull;
    c.budget -= 1;
L_00195C78:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_00195CB8; } }
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 20u)));
    set32(c.r[10], c.r[6].w[0] + c.r[9].w[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 32u)));
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[10].w[0] + 32u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = c.r[9].d[0] << 56;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 56);
    c.r[1].d[0] = c.r[9].sd[0] < 22ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00195CB8; } }
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 20u)));
    set32(c.r[9], c.r[6].w[0] + c.r[9].w[0]);
    st8((c.r[9].w[0] + 32u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00195CB8:
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 20u)));
    set32(c.r[9], ld32((c.r[8].w[0] + 384u)));
    set32(c.r[10], c.r[6].w[0] + c.r[10].w[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 32u)));
    set32(c.r[10], c.r[11].w[0] << (c.r[10].w[0] & 31u));
    c.r[9].d[0] = c.r[9].d[0] & c.r[10].d[0];
    c.budget -= 8;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00195C30u | kUnwind; return; } goto L_00195C30; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; set32(c.r[3], c.r[19].w[0] + c.r[21].w[0]);  if (t) { goto L_00195D08; } }
    mmi::paddub(c.r[4], c.r[21], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00195CF8u); mmi::paddub(c.r[5], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 198u, depth + 1u); else { c.pc = 0x00196400u; return; } if (c.pc != 0x00195CF8u) [[unlikely]] return; }
L_00195CF8:
    set32(c.r[5], 0u + 41u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00195D04u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x00195D04u) [[unlikely]] return; }
L_00195D04:
    set32(c.r[3], c.r[19].w[0] + c.r[21].w[0]);
    c.budget -= 1;
L_00195D08:
    c.r[3].d[0] = ld16((c.r[3].w[0] + 68u));
    c.r[3].d[0] = c.r[3].d[0] & 33776ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00195EC0; } }
    set32(c.r[12], c.r[16].w[0] + c.r[21].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0] + 1u)));
    set32(c.r[6], 0u + 32u);
    set32(c.r[10], c.r[20].w[0] + c.r[21].w[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[12].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st16((c.r[12].w[0] + 8u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 16u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[9], c.r[7].w[0] + 1056u);
    set32(c.r[4], c.r[12].w[0] + 1u);
    set32(c.r[7], c.r[11].w[0] << 1);
    set32(c.r[7], c.r[3].w[0] << (c.r[7].w[0] & 31u));
    c.r[7].d[0] = c.r[8].d[0] | c.r[7].d[0];
    st8((c.r[10].w[0] + 16u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[5], c.r[12].w[0] + 8u);
    set32(c.r[6], c.r[10].w[0] + 16u);
    set32(c.r[8], c.r[8].w[0] + c.r[12].w[0]);
    st8((c.r[8].w[0] + 40u), static_cast<std::uint8_t>(0u));
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[8], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[7], c.r[7].w[0] + 1057u);
    set32(c.r[10], c.r[17].w[0] + c.r[12].w[0]);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    set32(c.r[8], c.r[16].w[0] + c.r[8].w[0]);
    set32(c.r[8], c.r[12].w[0] + c.r[8].w[0]);
    set32(c.r[10], c.r[11].w[0] << 1);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    st8((c.r[8].w[0] + 264u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[8], c.r[17].w[0] + c.r[8].w[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    set32(c.r[8], c.r[9].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 44;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_00195E60; } }
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[8], 0u + 64u);
    set32(c.r[7], c.r[7].w[0] + 1057u);
    set32(c.r[9], c.r[9].w[0] + 2u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1058u);
    set32(c.r[8], c.r[8].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[8].w[0] & 31u));
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[5], c.r[17].w[0] + c.r[8].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    st8((c.r[3].w[0] + 272u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[5], c.r[17].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    st8((c.r[3].w[0] + 280u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 38;
L_00195E60:
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[4], c.r[3].w[0] + 16528u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[6], c.r[16].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 264u)));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00195EC0; } }
    c.r[1].d[0] = c.r[6].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_00195EB8; } }
    c.r[5].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00195EACu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 351u, depth + 1u); else { c.pc = 0x00197C30u; return; } if (c.pc != 0x00195EACu) [[unlikely]] return; }
L_00195EAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);  if (t) { goto L_00195EC4; } }
    c.r[5].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 1;
L_00195EB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00195EC0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 330u, depth + 1u); else { c.pc = 0x00197890u; return; } if (c.pc != 0x00195EC0u) [[unlikely]] return; }
L_00195EC0:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00195EC4:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00195EF0:
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00195F20; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00195F20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00195F30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], c.r[5].w[0] << 5);
    set32(c.r[3], c.r[16].w[0] + c.r[4].w[0]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.r[4].d[0] = ld16((c.r[3].w[0] + 72u));
    c.r[3].d[0] = c.r[4].d[0] & 8192ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[17], c.r[5], c.r[0]);  if (t) { goto L_00195FD8; } }
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[4], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[17].w[0] + c.r[18].w[0]);
    set32(c.r[5], c.r[2].w[0] + 20u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    set32(c.r[6], c.r[4].w[0] + 40u);
    set32(c.r[3], c.r[6].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 14;
    if (c.r[2].sd[0] >= 0) { set32(c.r[5], 0u + 43u);  goto L_00195FC8; }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[3], c.r[2].w[0] + 1057u);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[6].w[0] + c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 32u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], 0u + 43u);
    c.budget -= 12;
L_00195FC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00195FD0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x00195FD0u) [[unlikely]] return; }
L_00195FD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[16].w[0] + c.r[18].w[0]);  if (t) { goto L_00196058; } }
L_00195FD8:
    c.r[3].d[0] = c.r[4].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00196054; } }
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[4], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[17].w[0] + c.r[18].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    set32(c.r[8], c.r[2].w[0] + 20u);
    set32(c.r[7], c.r[4].w[0] + 40u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[3], c.r[2].w[0] + 1057u);
    set32(c.r[2], c.r[5].w[0] + c.r[4].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 32u)));
    set32(c.r[4], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[3].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 22;
    { const bool t = c.r[2].d[0] == 0ull; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00196048; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_00196048:
    set32(c.r[5], 0u + 43u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00196054u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x00196054u) [[unlikely]] return; }
L_00196054:
    set32(c.r[3], c.r[16].w[0] + c.r[18].w[0]);
    c.budget -= 1;
L_00196058:
    c.r[3].d[0] = ld16((c.r[3].w[0] + 68u));
    c.r[3].d[0] = c.r[3].d[0] & 33776ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00196190; } }
    set32(c.r[16], c.r[17].w[0] << 1);
    set32(c.r[5], c.r[16].w[0] + c.r[18].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[7], c.r[17].w[0] + c.r[18].w[0]);
    set32(c.r[2], 0u + 64u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[5].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 16u)));
    set32(c.r[17], c.r[7].w[0] + 20u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[6].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001960B8u); st8((c.r[7].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x001960B8u) [[unlikely]] return; }
L_001960B8:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[8], c.r[16].w[0] + c.r[18].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], c.r[3].w[0] + 1058u);
    set32(c.r[3], c.r[7].w[0] + c.r[8].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 40u)));
    set32(c.r[3], c.r[16].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 272u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[5], c.r[7].w[0] + c.r[8].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 32u)));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    st8((c.r[3].w[0] + 280u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[3], c.r[16].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 264u)));
    c.budget -= 28;
    if (c.r[8].d[0] != 0ull) { set32(c.r[3], 0u + 4u);  goto L_00196150; }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 272u)));
    set32(c.r[7], c.r[3].w[0] + 272u);
    set32(c.r[3], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0019614C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00196190; } }
L_0019614C:
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_00196150:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[3].d[0];  if (t) { goto L_00196190; } }
    set32(c.r[3], c.r[16].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 272u)));
    set32(c.r[5], c.r[3].w[0] + 272u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00196190; } }
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0] + 280u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 7;
L_00196190:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001961B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[7], c.r[3].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 8u)));
    set32(c.r[6], c.r[6].w[0] - 1u);
    st16((c.r[7].w[0] + 8u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = c.r[6].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.budget -= 11;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[8], c.r[7].w[0] + 8u);  if (t) { goto L_001961F8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001961F0u); st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0025(c, 198u, depth + 1u); else { c.pc = 0x00196400u; return; } if (c.pc != 0x001961F0u) [[unlikely]] return; }
L_001961F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00196328; } }
L_001961F8:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    set32(c.r[6], 0u + 32u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_00196324; } }
    set32(c.r[7], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[7].w[0] + 20u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_00196324; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[9], c.r[7].w[0] + 1136u);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[7], c.r[5].w[0] << 2);
    set32(c.r[8], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[7], c.r[10].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[7], c.r[8].w[0] + 384u);
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[9], ld32((c.r[9].w[0])));
    st32((c.r[8].w[0] + 384u), c.r[9].w[0]);
    set32(c.r[8], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[8], c.r[5].w[0] + c.r[8].w[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 260u)));
    set32(c.r[8], c.r[9].w[0] + c.r[4].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 136u)));
    c.budget -= 20;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_0019628C; } }
    set32(c.r[10], c.r[9].w[0] << 2);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[9], c.r[8].w[0] + 1144u);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[8], ld32((c.r[7].w[0])));
    set32(c.r[9], ld32((c.r[9].w[0])));
    c.r[8].d[0] = c.r[8].d[0] & c.r[9].d[0];
    st32((c.r[7].w[0]), c.r[8].w[0]);
    c.budget -= 8;
L_0019628C:
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[9], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[12], c.r[9].w[0] + 32u);
    set32(c.r[8], 0u + 12u);
    set32(c.r[9], c.r[11].w[0] + c.r[9].w[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 31u)));
    set32(c.r[9], c.r[12].w[0] + c.r[11].w[0]);
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[10], c.r[12].w[0] + c.r[9].w[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    c.budget -= 13;
    { const bool t = c.r[9].d[0] != c.r[8].d[0];  if (t) { goto L_001962C8; } }
    set32(c.r[8], 0u + 13u);
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.budget -= 2;
L_001962C8:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[7], ld32((c.r[7].w[0])));
    set32(c.r[8], 0u + 1u);
    set32(c.r[10], c.r[12].w[0] + c.r[9].w[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    set32(c.r[8], c.r[8].w[0] << (c.r[9].w[0] & 31u));
    c.r[7].d[0] = c.r[7].d[0] & c.r[8].d[0];
    c.budget -= 9;
    if (c.r[7].d[0] != 0ull) { set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);  goto L_00196318; }
    set32(c.r[7], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 260u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[5], 0u + 8u);  if (t) { goto L_00196310; } }
    set32(c.r[5], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00196314; } }
    set32(c.r[5], 0u + 8u);
    c.budget -= 1;
L_00196310:
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 1;
L_00196314:
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 1;
L_00196318:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0] + 40u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_00196324:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00196328:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00196330:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 59u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[3].w[0] << (c.r[5].w[0] & 31u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00196350; } }
    c.r[3].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 59u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00196350:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00196360:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 264u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001963B4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 265u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001963B4; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 56u)));
    set32(c.r[3], 0u + 23u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; st8((c.r[4].w[0] + 57u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_001963D4; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 56u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 15124u)));
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 57u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001963D4; } }
L_001963B4:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 56u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[3].w[0] + 15108u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[4].w[0] + 57u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_001963D4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001963F0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 57u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 444u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F30000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001963F0u); c.r[4].d[0] = c.r[2].d[0] | 22528ull;  if (depth < kMaxDepth) unit_000D(c, 287u, depth + 1u); else { c.pc = 0x00137FA0u; return; } if (c.pc != 0x001963F0u) [[unlikely]] return; }
L_001963F0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00196400:
    set32(c.r[8], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[5], c.r[2].w[0] + 1056u);
    set32(c.r[9], c.r[3].w[0] + 48u);
    set32(c.r[2], c.r[6].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 32u)));
    set32(c.r[3], c.r[9].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[2], 0u + 33u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 20u)));
    set32(c.r[3], c.r[9].w[0] + c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 21;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_00196458; } }
    set32(c.r[6], 0u + 21u);
    c.budget -= 1;
L_00196458:
    set32(c.r[5], ld32((c.r[4].w[0] + 444u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x010C0000u);
    c.budget -= 4;
    { c.r[4].d[0] = c.r[2].d[0] | 8192ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00137FA0u | kUnwind; return; } [[clang::musttail]] return unit_000D(c, 287u, depth); }
L_00196470:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], c.r[5].w[0] << 1);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 48u)));
    set32(c.r[3], 0u + 33u);
    c.budget -= 14;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001964AC; } }
    set32(c.r[4], 0u + 21u);
    c.budget -= 1;
L_001964AC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[3], c.r[3].w[0] + 1376u);
    set32(c.r[5], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00196508; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[17].w[0] & 31u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00196508; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001964F0u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_001E(c, 216u, depth + 1u); else { c.pc = 0x0017BE40u; return; } if (c.pc != 0x001964F0u) [[unlikely]] return; }
L_001964F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00190000u);
    set32(c.r[4], c.r[2].w[0] + 25904u);
    set32(c.r[5], 0u + 2u);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00196508u); mmi::paddub(c.r[7], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 253u, depth + 1u); else { c.pc = 0x0034F7F0u; return; } if (c.pc != 0x00196508u) [[unlikely]] return; }
L_00196508:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00196520:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00196530:
    set32(c.r[6], ld32((c.r[4].w[0] + 128u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[3].w[0] << (c.r[5].w[0] & 31u));
    c.r[3].d[0] = c.r[6].d[0] << 33;
    c.r[3].d[0] = c.r[3].d[0] >> 33;
    st32((c.r[4].w[0] + 128u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 128u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 128u), c.r[3].w[0]);  c.pc = t; return; }
L_00196560:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[16], c.r[2].w[0] - 6096u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[2].w[0] - 6096u);
    set32(c.r[6], 0u + 1284u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00196590u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00196590u) [[unlikely]] return; }
L_00196590:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019659Cu); set32(c.r[4], c.r[2].w[0] - 6096u);  if (depth < kMaxDepth) unit_0025(c, 218u, depth + 1u); else { c.pc = 0x001966C0u; return; } if (c.pc != 0x0019659Cu) [[unlikely]] return; }
L_0019659C:
    c.r[4].d[0] = c.r[17].d[0] << 56;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001965A8u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (depth < kMaxDepth) unit_0025(c, 224u, depth + 1u); else { c.pc = 0x00196780u; return; } if (c.pc != 0x001965A8u) [[unlikely]] return; }
L_001965A8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001965B4u); st32((c.r[28].w[0] - 26604u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0025(c, 235u, depth + 1u); else { c.pc = 0x00196850u; return; } if (c.pc != 0x001965B4u) [[unlikely]] return; }
L_001965B4:
    set32(c.r[4], 0u + 5u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_001965BC:
    set32(c.r[2], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st8((c.r[2].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001965BCu | kUnwind; return; } goto L_001965BC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[3], c.r[2].w[0] - 4748u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
L_001965E8:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001965E8u | kUnwind; return; } goto L_001965E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], 0u + 10u);
    set32(c.r[3], c.r[2].w[0] - 4782u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
L_00196614:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00196614u | kUnwind; return; } goto L_00196614; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], 0u + 13u);
    set32(c.r[3], c.r[2].w[0] - 4795u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
L_00196640:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00196640u | kUnwind; return; } goto L_00196640; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00196664u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 220u, depth + 1u); else { c.pc = 0x00196700u; return; } if (c.pc != 0x00196664u) [[unlikely]] return; }
L_00196664:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C10000u);
    set32(c.r[4], 0u + 1578u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00196674u); c.r[5].d[0] = c.r[2].d[0] | 14336ull;  if (depth < kMaxDepth) unit_000D(c, 71u, depth + 1u); else { c.pc = 0x00135140u; return; } if (c.pc != 0x00196674u) [[unlikely]] return; }
L_00196674:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C10000u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00196684u); c.r[4].d[0] = c.r[2].d[0] | 14336ull;  if (depth < kMaxDepth) unit_000C(c, 430u, depth + 1u); else { c.pc = 0x001336F0u; return; } if (c.pc != 0x00196684u) [[unlikely]] return; }
L_00196684:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C10000u);
    set32(c.r[4], 0u + 1582u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00196694u); c.r[5].d[0] = c.r[2].d[0] | 14336ull;  if (depth < kMaxDepth) unit_000D(c, 71u, depth + 1u); else { c.pc = 0x00135140u; return; } if (c.pc != 0x00196694u) [[unlikely]] return; }
L_00196694:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C10000u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001966A4u); c.r[4].d[0] = c.r[2].d[0] | 14336ull;  if (depth < kMaxDepth) unit_000C(c, 430u, depth + 1u); else { c.pc = 0x001336F0u; return; } if (c.pc != 0x001966A4u) [[unlikely]] return; }
L_001966A4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001966C0:
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    c.budget -= 2;
L_001966C8:
    st32((c.r[4].w[0] + 548u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 552u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 556u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 560u), 0u);
    st8((c.r[4].w[0] + 564u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 565u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 568u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = c.r[6].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001966C8u | kUnwind; return; } goto L_001966C8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00196700:
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[8], c.r[4], c.r[0]);
    c.budget -= 3;
L_0019670C:
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[8], c.r[0]);
    c.budget -= 3;
L_00196718:
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[7].w[0] + 652u), 0u);
    c.r[3].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00196718u | kUnwind; return; } goto L_00196718; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0019670Cu | kUnwind; return; } goto L_0019670C; } }
    st8((c.r[4].w[0] + 30u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 29u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 3;
L_00196750:
    set32(c.r[5], c.r[5].w[0] + 2u);
    st32((c.r[4].w[0] + 1228u), 0u);
    st32((c.r[4].w[0] + 1244u), 0u);
    c.r[3].d[0] = c.r[5].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00196750u | kUnwind; return; } goto L_00196750; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00196780:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001967A0u); st32((c.r[1].w[0] - 6088u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_000C(c, 427u, depth + 1u); else { c.pc = 0x001336B0u; return; } if (c.pc != 0x001967A0u) [[unlikely]] return; }
L_001967A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001967A8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000A(c, 26u, depth + 1u); else { c.pc = 0x00128308u; return; } if (c.pc != 0x001967A8u) [[unlikely]] return; }
L_001967A8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001967C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001967D0u);  if (depth < kMaxDepth) unit_0026(c, 67u, depth + 1u); else { c.pc = 0x00198E90u; return; } if (c.pc != 0x001967D0u) [[unlikely]] return; }
L_001967D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001967D8u);  if (depth < kMaxDepth) unit_0026(c, 71u, depth + 1u); else { c.pc = 0x00198F60u; return; } if (c.pc != 0x001967D8u) [[unlikely]] return; }
L_001967D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001967E0u);  if (depth < kMaxDepth) unit_0026(c, 80u, depth + 1u); else { c.pc = 0x00199170u; return; } if (c.pc != 0x001967E0u) [[unlikely]] return; }
L_001967E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[2].w[0] - 6096u);
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.budget -= 3;
L_001967EC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] + 1u);  goto L_00196804; }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[4].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
L_00196804:
    c.r[2].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001967ECu | kUnwind; return; } goto L_001967EC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 88u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0019682C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019682Cu); set32(c.r[4], c.r[2].w[0] - 6096u);  if (depth < kMaxDepth) unit_0026(c, 61u, depth + 1u); else { c.pc = 0x00198D50u; return; } if (c.pc != 0x0019682Cu) [[unlikely]] return; }
L_0019682C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00196834u);  if (depth < kMaxDepth) unit_0026(c, 90u, depth + 1u); else { c.pc = 0x00199410u; return; } if (c.pc != 0x00196834u) [[unlikely]] return; }
L_00196834:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019683Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 278u, depth + 1u); else { c.pc = 0x001A3B60u; return; } if (c.pc != 0x0019683Cu) [[unlikely]] return; }
L_0019683C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00196850:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00196860u);  if (depth < kMaxDepth) unit_0025(c, 238u, depth + 1u); else { c.pc = 0x00196880u; return; } if (c.pc != 0x00196860u) [[unlikely]] return; }
L_00196860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00196868u);  if (depth < kMaxDepth) unit_0025(c, 250u, depth + 1u); else { c.pc = 0x00196A00u; return; } if (c.pc != 0x00196868u) [[unlikely]] return; }
L_00196868:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00196880:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00196890u);  if (depth < kMaxDepth) unit_0025(c, 241u, depth + 1u); else { c.pc = 0x001968B0u; return; } if (c.pc != 0x00196890u) [[unlikely]] return; }
L_00196890:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00196898u);  if (depth < kMaxDepth) unit_000C(c, 439u, depth + 1u); else { c.pc = 0x001338D0u; return; } if (c.pc != 0x00196898u) [[unlikely]] return; }
L_00196898:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001968B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[19], c.r[3].w[0] - 6096u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 9;
L_001968D4:
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[18], c.r[19], c.r[0]);
    c.budget -= 3;
L_001968E0:
    set32(c.r[4], ld32((c.r[18].w[0] + 652u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[6], c.r[18].w[0] + 644u);  if (t) { goto L_00196968; } }
    c.r[5].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[3], 0u + 255u);
    c.budget -= 4;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0019696C; }
    c.r[4].d[0] = ld16((c.r[4].w[0] + 2u));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00196960; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00196950; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00196940; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00196940; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00196940; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00196968; } }
L_00196940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00196948u); set32(c.r[4], ld32((c.r[6].w[0] + 12u)));  if (depth < kMaxDepth) unit_0026(c, 23u, depth + 1u); else { c.pc = 0x00198350u; return; } if (c.pc != 0x00196948u) [[unlikely]] return; }
L_00196948:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00196968; } }
L_00196950:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00196958u); set32(c.r[4], ld32((c.r[6].w[0] + 12u)));  if (depth < kMaxDepth) unit_0025(c, 358u, depth + 1u); else { c.pc = 0x00197D50u; return; } if (c.pc != 0x00196958u) [[unlikely]] return; }
L_00196958:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00196968; } }
L_00196960:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00196968u); set32(c.r[4], ld32((c.r[6].w[0] + 12u)));  if (depth < kMaxDepth) unit_0025(c, 302u, depth + 1u); else { c.pc = 0x00197410u; return; } if (c.pc != 0x00196968u) [[unlikely]] return; }
L_00196968:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0019696C:
    c.r[3].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001968E0u | kUnwind; return; } goto L_001968E0; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001968D4u | kUnwind; return; } goto L_001968D4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[16], c.r[3].w[0] - 6096u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 3;
L_00196994:
    set32(c.r[3], ld32((c.r[16].w[0] + 1228u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_001969C4; }
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1u));
    set32(c.r[3], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001969C0; } }
    c.r[6].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001969BCu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 337u, depth + 1u); else { c.pc = 0x001979B0u; return; } if (c.pc != 0x001969BCu) [[unlikely]] return; }
L_001969BC:
    c.budget -= 1;
L_001969C0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001969C4:
    c.r[3].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00196994u | kUnwind; return; } goto L_00196994; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001969DCu); set32(c.r[4], c.r[3].w[0] - 6096u);  if (depth < kMaxDepth) unit_0025(c, 220u, depth + 1u); else { c.pc = 0x00196700u; return; } if (c.pc != 0x001969DCu) [[unlikely]] return; }
L_001969DC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00196A00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[16], c.r[2].w[0] - 6096u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 7;
L_00196A1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00196A24u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 278u, depth + 1u); else { c.pc = 0x00196F60u; return; } if (c.pc != 0x00196A24u) [[unlikely]] return; }
L_00196A24:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00196A1Cu | kUnwind; return; } goto L_00196A1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00196A40u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 218u, depth + 1u); else { c.pc = 0x001966C0u; return; } if (c.pc != 0x00196A40u) [[unlikely]] return; }
L_00196A40:
    st32((c.r[16].w[0] + 4u), 0u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00196A50u); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_0025(c, 220u, depth + 1u); else { c.pc = 0x00196700u; return; } if (c.pc != 0x00196A50u) [[unlikely]] return; }
L_00196A50:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00196A70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.f[1] = 0u;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[16], c.r[2].w[0] - 5484u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] + 1488u);
    set32(c.r[17], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[12] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[12]));
    c.budget -= 17;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00196ABC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42D60000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 2;
L_00196ABC:
    st32((c.r[16].w[0] + 8u), c.f[12]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5172u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] + 1568u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00196AECu); st32((c.r[16].w[0] + 4u), c.f[12]);  if (depth < kMaxDepth) unit_0026(c, 95u, depth + 1u); else { c.pc = 0x001995B0u; return; } if (c.pc != 0x00196AECu) [[unlikely]] return; }
L_00196AEC:
    st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 12u), 0u);
    st8((c.r[16].w[0] + 17u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] + 1408u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    set32(c.r[5], 0u + 2u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00196B18u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 66u, depth + 1u); else { c.pc = 0x00198E10u; return; } if (c.pc != 0x00196B18u) [[unlikely]] return; }
L_00196B18:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00196B28u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 66u, depth + 1u); else { c.pc = 0x00198E10u; return; } if (c.pc != 0x00196B28u) [[unlikely]] return; }
L_00196B28:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00196B40:
    set32(c.r[4], 0u + 2u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 4;
    { mmi::paddub(c.r[6], c.r[0], c.r[0]);  [[clang::musttail]] return unit_0026(c, 66u, depth); }
L_00196B50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5172u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] + 1568u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] < 0; set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_00196B78; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00196B94; } }
L_00196B78:
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_00196B94:
    c.f[0] = ld32((c.r[5].w[0]));
    set32(c.r[4], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.f[12] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 6;
    { st32((c.r[1].w[0] - 5480u), c.f[12]);  [[clang::musttail]] return unit_0026(c, 95u, depth); }
L_00196BB0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5172u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[5], c.r[2].w[0] - 5484u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] + 1568u);
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[4], 0u + 2u);
    c.f[12] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 14;
    { st32((c.r[5].w[0] + 4u), c.f[12]);  [[clang::musttail]] return unit_0026(c, 95u, depth); }
L_00196BF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.f[1] = 0u;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[6].w[0] << 2);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[6], c.r[7].w[0] << 3);
    set32(c.r[3], c.r[5].w[0] << 5);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[2], c.r[2].w[0] - 6096u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[4].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[12]));
    c.budget -= 24;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[17], c.r[3].w[0] + 548u);  if (t) { goto L_00196C58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 2;
L_00196C58:
    st32((c.r[17].w[0] + 8u), c.f[12]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5174u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] + 1600u);
    c.f[0] = 0u;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[12] = fp::mul(c.f[12], c.f[1]);
    st32((c.r[17].w[0] + 4u), c.f[12]);
    c.f[1] = ld32((c.r[17].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_00196CAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00196CA0u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 95u, depth + 1u); else { c.pc = 0x001995B0u; return; } if (c.pc != 0x00196CA0u) [[unlikely]] return; }
L_00196CA0:
    st8((c.r[17].w[0] + 16u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 12u), 0u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
L_00196CAC:
    st8((c.r[17].w[0] + 17u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u - 1u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    st8((c.r[17].w[0] + 23u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 22u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00196CD4u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 66u, depth + 1u); else { c.pc = 0x00198E10u; return; } if (c.pc != 0x00196CD4u) [[unlikely]] return; }
L_00196CD4:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00196CE4u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 66u, depth + 1u); else { c.pc = 0x00198E10u; return; } if (c.pc != 0x00196CE4u) [[unlikely]] return; }
L_00196CE4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00196D00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00196D2Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0025(c, 271u, depth + 1u); else { c.pc = 0x00196E40u; return; } if (c.pc != 0x00196D2Cu) [[unlikely]] return; }
L_00196D2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00196D48; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0] + 532u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0] + 534u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
L_00196D48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00196D50u);  if (depth < kMaxDepth) unit_0025(c, 271u, depth + 1u); else { c.pc = 0x00196E40u; return; } if (c.pc != 0x00196D50u) [[unlikely]] return; }
L_00196D50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00196D68; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0] + 533u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0] + 535u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00196D68:
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], c.r[18].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 532u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; set32(c.r[5], c.r[6].w[0] + 532u);  if (t) { goto L_00196D94; } }
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 7u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 534u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00196DF8; } }
L_00196D94:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 533u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; set32(c.r[7], c.r[6].w[0] + 533u);  if (t) { goto L_00196DB8; } }
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 7u);
    set32(c.r[16], 0u + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 535u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00196DF8; } }
L_00196DB8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 534u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 535u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00196DE4; } }
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 7u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 534u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00196DF8; } }
L_00196DE4:
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 7u);
    set32(c.r[16], 0u + 1u);
    st8((c.r[2].w[0] + 535u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_00196DF8:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    mmi::paddub(c.r[6], c.r[18], c.r[0]);
    mmi::paddub(c.r[7], c.r[17], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00196E0Cu); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 262u, depth + 1u); else { c.pc = 0x00196BF0u; return; } if (c.pc != 0x00196E0Cu) [[unlikely]] return; }
L_00196E0C:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00196E30:
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { mmi::paddub(c.r[6], c.r[0], c.r[0]);  [[clang::musttail]] return unit_0026(c, 66u, depth); }
L_00196E40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[2], c.r[2].w[0] - 5531u);
    set32(c.r[3], c.r[4].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  c.pc = t; return; }
L_00196E60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[2], c.r[2].w[0] - 5527u);
    set32(c.r[3], c.r[4].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  c.pc = t; return; }
L_00196E80:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] - 14832u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull; mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (t) { goto L_00196EB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00196EB0u);  if (depth < kMaxDepth) unit_0009(c, 523u, depth + 1u); else { c.pc = 0x00127418u; return; } if (c.pc != 0x00196EB0u) [[unlikely]] return; }
L_00196EB0:
    st32((c.r[28].w[0] - 26604u), c.r[16].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00196ED0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[3].w[0] - 6096u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], c.r[4].w[0] << 5);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26604u)));
    c.budget -= 11;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[16], c.r[5].w[0] + 548u);  if (t) { goto L_00196F48; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] - 14832u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_00196F44; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 26316u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00196F28u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0009(c, 603u, depth + 1u); else { c.pc = 0x00127D80u; return; } if (c.pc != 0x00196F28u) [[unlikely]] return; }
L_00196F28:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[6], ld32((c.r[28].w[0] - 26604u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00196F38u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000A(c, 27u, depth + 1u); else { c.pc = 0x00128310u; return; } if (c.pc != 0x00196F38u) [[unlikely]] return; }
L_00196F38:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 26604u)));
    st16((c.r[16].w[0] + 18u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
L_00196F44:
    st32((c.r[28].w[0] - 26604u), c.r[3].w[0]);
    c.budget -= 1;
L_00196F48:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00196F60:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[3], c.r[3].w[0] - 6096u);
    set32(c.r[5], c.r[4].w[0] << 5);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    st8((c.r[3].w[0] + 565u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] - 14832u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00196FA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00196FA0u);  if (depth < kMaxDepth) unit_0009(c, 523u, depth + 1u); else { c.pc = 0x00127418u; return; } if (c.pc != 0x00196FA0u) [[unlikely]] return; }
L_00196FA0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00196FB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[4], c.r[3].w[0] + 88u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 88u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_00197018; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[18], c.r[3].w[0] - 14832u);
    st8((c.r[1].w[0] - 5528u), static_cast<std::uint8_t>(c.r[16].w[0]));
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 6;
L_00196FF4:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0019700C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00197008u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0009(c, 603u, depth + 1u); else { c.pc = 0x00127D80u; return; } if (c.pc != 0x00197008u) [[unlikely]] return; }
L_00197008:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0019700C:
    c.r[3].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00196FF4u | kUnwind; return; } goto L_00196FF4; } }
L_00197018:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00197030:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[2], c.r[2].w[0] - 6096u);
    set32(c.r[3], c.r[4].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[5].sd[0] < 0; set32(c.r[6], c.r[2].w[0] + 548u);  if (t) { goto L_00197054; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00197070; } }
L_00197054:
    set32(c.r[3], c.r[5].w[0] >> 1);
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_00197070:
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.f[12] = 0u;
    set32(c.r[4], 0u + 2u);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.budget -= 8;
    { st32((c.r[6].w[0] + 12u), c.f[0]);  [[clang::musttail]] return unit_0026(c, 95u, depth); }
L_00197090:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[3], c.r[3].w[0] - 6096u);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = c.r[5].sd[0] < 0; set32(c.r[7], c.r[3].w[0] + 548u);  if (t) { goto L_001970B4; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001970D0; } }
L_001970B4:
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_001970D0:
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[7].w[0] + 12u), c.f[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[7].w[0] + 16u), static_cast<std::uint8_t>(c.r[6].w[0]));  c.pc = t; return; }
L_001970F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[7], c.r[3].w[0] - 6096u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 6067u)));
    c.r[1].d[0] = c.r[3].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00197130; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 29u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 964u), c.r[4].w[0]);
    st8((c.r[3].w[0] + 968u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[3].w[0] + 969u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 29u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[7].w[0] + 29u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
L_00197130:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00197140:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[1].w[0] - 6067u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00197150:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 65u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[8], c.r[4], c.r[0]);  if (t) { goto L_0019717C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 64u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001971B0; } }
L_0019717C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 650u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[6].d[0] & 65280ull;  if (t) { goto L_0019719C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 523u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001971B0; } }
    c.r[3].d[0] = c.r[6].d[0] & 65280ull;
    c.budget -= 1;
L_0019719C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001971B0; } }
    mmi::paddub(c.r[4], c.r[5], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001971B0u); mmi::paddub(c.r[5], c.r[8], c.r[0]);  if (depth < kMaxDepth) unit_000C(c, 442u, depth + 1u); else { c.pc = 0x00133920u; return; } if (c.pc != 0x001971B0u) [[unlikely]] return; }
L_001971B0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001971C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 65u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[8], c.r[4], c.r[0]);  if (t) { goto L_001971EC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 64u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00197214; } }
L_001971EC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 650u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[4], c.r[5], c.r[0]);  if (t) { goto L_0019720C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 523u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00197214; } }
    mmi::paddub(c.r[4], c.r[5], c.r[0]);
    c.budget -= 1;
L_0019720C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00197214u); mmi::paddub(c.r[5], c.r[8], c.r[0]);  if (depth < kMaxDepth) unit_000C(c, 442u, depth + 1u); else { c.pc = 0x00133920u; return; } if (c.pc != 0x00197214u) [[unlikely]] return; }
L_00197214:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00197220:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 65u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[7], c.r[4], c.r[0]);  if (t) { goto L_0019724C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 64u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00197258; } }
L_0019724C:
    mmi::paddub(c.r[4], c.r[5], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00197258u); mmi::paddub(c.r[5], c.r[7], c.r[0]);  if (depth < kMaxDepth) unit_000C(c, 442u, depth + 1u); else { c.pc = 0x00133920u; return; } if (c.pc != 0x00197258u) [[unlikely]] return; }
L_00197258:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00197270:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 65u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[8], c.r[4], c.r[0]);  if (t) { goto L_0019729C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 64u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001972DC; } }
L_0019729C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 650u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = c.r[6].d[0] & 65280ull;  goto L_001972BC; }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 523u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001972DC; } }
    c.r[2].d[0] = c.r[6].d[0] & 65280ull;
    c.budget -= 1;
L_001972BC:
    set32(c.r[3], c.r[2].w[0] >> 8);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    mmi::paddub(c.r[4], c.r[5], c.r[0]);
    set32(c.r[7], c.r[2].w[0] >> 16);
    mmi::paddub(c.r[6], c.r[3], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001972DCu); mmi::paddub(c.r[5], c.r[8], c.r[0]);  if (depth < kMaxDepth) unit_000C(c, 437u, depth + 1u); else { c.pc = 0x00133830u; return; } if (c.pc != 0x001972DCu) [[unlikely]] return; }
L_001972DC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001972F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    c.r[17].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[4], 0u + 1u);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00197320u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000C(c, 440u, depth + 1u); else { c.pc = 0x001338E0u; return; } if (c.pc != 0x00197320u) [[unlikely]] return; }
L_00197320:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0019736C; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00197334u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000C(c, 441u, depth + 1u); else { c.pc = 0x00133900u; return; } if (c.pc != 0x00197334u) [[unlikely]] return; }
L_00197334:
    set32(c.r[4], c.r[18].w[0] + 32u);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00197344u); c.r[17].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0026(c, 98u, depth + 1u); else { c.pc = 0x00199640u; return; } if (c.pc != 0x00197344u) [[unlikely]] return; }
L_00197344:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00197364; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00197360u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0026(c, 102u, depth + 1u); else { c.pc = 0x00199760u; return; } if (c.pc != 0x00197360u) [[unlikely]] return; }
L_00197360:
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00197364:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = ld8((c.r[18].w[0] + 268u));  if (t) { goto L_00197374; } }
L_0019736C:
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 2;
L_00197374:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5173u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] + 1632u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 7;
    { const bool t = c.r[16].sd[0] < 0; set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_0019739C; } }
    c.f[0] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001973B8; } }
L_0019739C:
    set32(c.r[3], c.r[16].w[0] >> 1);
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_001973B8:
    c.f[0] = ld32((c.r[6].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001973C4u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001973C4u) [[unlikely]] return; }
L_001973C4:
    c.r[3].d[0] = c.r[18].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[5], c.r[3].w[0] << 16);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[2].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[19].d[0] & 255ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001973ECu); c.r[6].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0025(c, 287u, depth + 1u); else { c.pc = 0x00197150u; return; } if (c.pc != 0x001973ECu) [[unlikely]] return; }
L_001973EC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00197410:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    c.r[17].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[4], 0u + 1u);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00197440u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000C(c, 440u, depth + 1u); else { c.pc = 0x001338E0u; return; } if (c.pc != 0x00197440u) [[unlikely]] return; }
L_00197440:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0019748C; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00197454u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000C(c, 441u, depth + 1u); else { c.pc = 0x00133900u; return; } if (c.pc != 0x00197454u) [[unlikely]] return; }
L_00197454:
    set32(c.r[4], c.r[18].w[0] + 32u);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00197464u); c.r[17].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0026(c, 98u, depth + 1u); else { c.pc = 0x00199640u; return; } if (c.pc != 0x00197464u) [[unlikely]] return; }
L_00197464:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00197484; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00197480u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0026(c, 102u, depth + 1u); else { c.pc = 0x00199760u; return; } if (c.pc != 0x00197480u) [[unlikely]] return; }
L_00197480:
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00197484:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = ld8((c.r[18].w[0] + 268u));  if (t) { goto L_00197494; } }
L_0019748C:
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 2;
L_00197494:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5173u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] + 1632u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 7;
    { const bool t = c.r[16].sd[0] < 0; set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001974BC; } }
    c.f[0] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001974D8; } }
L_001974BC:
    set32(c.r[3], c.r[16].w[0] >> 1);
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_001974D8:
    c.f[0] = ld32((c.r[6].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001974E4u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001974E4u) [[unlikely]] return; }
L_001974E4:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 16);
    set32(c.r[2], c.r[4].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    c.r[16].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[19].d[0] & 255ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00197510u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 289u, depth + 1u); else { c.pc = 0x001971C0u; return; } if (c.pc != 0x00197510u) [[unlikely]] return; }
L_00197510:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00197530:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[20], c.r[5], c.r[0]);
    c.r[17].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[4], 0u + 1u);
    mmi::paddub(c.r[19], c.r[6], c.r[0]);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00197568u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000C(c, 440u, depth + 1u); else { c.pc = 0x001338E0u; return; } if (c.pc != 0x00197568u) [[unlikely]] return; }
L_00197568:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_001975B4; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019757Cu); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000C(c, 441u, depth + 1u); else { c.pc = 0x00133900u; return; } if (c.pc != 0x0019757Cu) [[unlikely]] return; }
L_0019757C:
    set32(c.r[4], c.r[18].w[0] + 32u);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019758Cu); c.r[17].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0026(c, 98u, depth + 1u); else { c.pc = 0x00199640u; return; } if (c.pc != 0x0019758Cu) [[unlikely]] return; }
L_0019758C:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001975AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001975A8u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0026(c, 102u, depth + 1u); else { c.pc = 0x00199760u; return; } if (c.pc != 0x001975A8u) [[unlikely]] return; }
L_001975A8:
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_001975AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = ld8((c.r[18].w[0] + 268u));  if (t) { goto L_001975BC; } }
L_001975B4:
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 2;
L_001975BC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5173u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] + 1632u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 7;
    { const bool t = c.r[16].sd[0] < 0; set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001975E4; } }
    c.f[0] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00197600; } }
L_001975E4:
    set32(c.r[3], c.r[16].w[0] >> 1);
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_00197600:
    c.f[0] = ld32((c.r[6].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019760Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x0019760Cu) [[unlikely]] return; }
L_0019760C:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 16);
    set32(c.r[2], c.r[4].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    c.r[16].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == c.r[19].d[0]; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_00197644; } }
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[20].d[0] & 255ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00197640u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 293u, depth + 1u); else { c.pc = 0x00197270u; return; } if (c.pc != 0x00197640u) [[unlikely]] return; }
L_00197640:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 1;
L_00197644:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00197670:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    c.r[17].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[4], 0u + 1u);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001976A0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000C(c, 440u, depth + 1u); else { c.pc = 0x001338E0u; return; } if (c.pc != 0x001976A0u) [[unlikely]] return; }
L_001976A0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_001976EC; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001976B4u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000C(c, 441u, depth + 1u); else { c.pc = 0x00133900u; return; } if (c.pc != 0x001976B4u) [[unlikely]] return; }
L_001976B4:
    set32(c.r[4], c.r[18].w[0] + 32u);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001976C4u); c.r[17].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0026(c, 98u, depth + 1u); else { c.pc = 0x00199640u; return; } if (c.pc != 0x001976C4u) [[unlikely]] return; }
L_001976C4:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001976E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001976E0u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0026(c, 102u, depth + 1u); else { c.pc = 0x00199760u; return; } if (c.pc != 0x001976E0u) [[unlikely]] return; }
L_001976E0:
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_001976E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = ld8((c.r[18].w[0] + 268u));  if (t) { goto L_001976F4; } }
L_001976EC:
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 2;
L_001976F4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5173u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] + 1632u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 7;
    { const bool t = c.r[16].sd[0] < 0; set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_0019771C; } }
    c.f[0] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00197738; } }
L_0019771C:
    set32(c.r[3], c.r[16].w[0] >> 1);
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_00197738:
    c.f[0] = ld32((c.r[6].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00197744u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00197744u) [[unlikely]] return; }
L_00197744:
    c.r[3].d[0] = c.r[18].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[5], c.r[3].w[0] << 16);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[2].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[19].d[0] & 255ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019776Cu); c.r[6].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0025(c, 291u, depth + 1u); else { c.pc = 0x00197220u; return; } if (c.pc != 0x0019776Cu) [[unlikely]] return; }
L_0019776C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00197790:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    c.r[16].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001977C0u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000C(c, 440u, depth + 1u); else { c.pc = 0x001338E0u; return; } if (c.pc != 0x001977C0u) [[unlikely]] return; }
L_001977C0:
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001977D0u); c.r[16].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_000C(c, 441u, depth + 1u); else { c.pc = 0x00133900u; return; } if (c.pc != 0x001977D0u) [[unlikely]] return; }
L_001977D0:
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001977E0u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 98u, depth + 1u); else { c.pc = 0x00199640u; return; } if (c.pc != 0x001977E0u) [[unlikely]] return; }
L_001977E0:
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00197800; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001977FCu); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 102u, depth + 1u); else { c.pc = 0x00199760u; return; } if (c.pc != 0x001977FCu) [[unlikely]] return; }
L_001977FC:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00197800:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5173u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] + 1632u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 7;
    { const bool t = c.r[17].sd[0] < 0; set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_00197828; } }
    c.f[0] = c.r[17].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00197844; } }
L_00197828:
    set32(c.r[3], c.r[17].w[0] >> 1);
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_00197844:
    c.f[0] = ld32((c.r[6].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00197850u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00197850u) [[unlikely]] return; }
L_00197850:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[18].d[0] & 255ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019786Cu); c.r[6].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (depth < kMaxDepth) unit_0025(c, 287u, depth + 1u); else { c.pc = 0x00197150u; return; } if (c.pc != 0x0019786Cu) [[unlikely]] return; }
L_0019786C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00197890:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    c.r[17].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[4], 0u + 2u);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001978C0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000C(c, 440u, depth + 1u); else { c.pc = 0x001338E0u; return; } if (c.pc != 0x001978C0u) [[unlikely]] return; }
L_001978C0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0019790C; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001978D4u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000C(c, 441u, depth + 1u); else { c.pc = 0x00133900u; return; } if (c.pc != 0x001978D4u) [[unlikely]] return; }
L_001978D4:
    set32(c.r[4], c.r[18].w[0] + 32u);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001978E4u); c.r[17].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0026(c, 98u, depth + 1u); else { c.pc = 0x00199640u; return; } if (c.pc != 0x001978E4u) [[unlikely]] return; }
L_001978E4:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00197904; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00197900u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0026(c, 102u, depth + 1u); else { c.pc = 0x00199760u; return; } if (c.pc != 0x00197900u) [[unlikely]] return; }
L_00197900:
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00197904:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = ld8((c.r[18].w[0] + 268u));  if (t) { goto L_00197914; } }
L_0019790C:
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 2;
L_00197914:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5173u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] + 1632u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 7;
    { const bool t = c.r[16].sd[0] < 0; set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_0019793C; } }
    c.f[0] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00197958; } }
L_0019793C:
    set32(c.r[3], c.r[16].w[0] >> 1);
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_00197958:
    c.f[0] = ld32((c.r[6].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00197964u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00197964u) [[unlikely]] return; }
L_00197964:
    c.r[3].d[0] = c.r[18].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[5], c.r[3].w[0] << 16);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[2].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[5], 0u + 2u);
    c.r[4].d[0] = c.r[19].d[0] & 255ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0019798Cu); c.r[6].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0025(c, 287u, depth + 1u); else { c.pc = 0x00197150u; return; } if (c.pc != 0x0019798Cu) [[unlikely]] return; }
L_0019798C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001979B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    c.r[17].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[4], 0u + 2u);
    mmi::paddub(c.r[18], c.r[6], c.r[0]);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001979E8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000C(c, 440u, depth + 1u); else { c.pc = 0x001338E0u; return; } if (c.pc != 0x001979E8u) [[unlikely]] return; }
L_001979E8:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_00197A38; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001979FCu); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000C(c, 441u, depth + 1u); else { c.pc = 0x00133900u; return; } if (c.pc != 0x001979FCu) [[unlikely]] return; }
L_001979FC:
    set32(c.r[4], c.r[20].w[0] + 32u);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00197A0Cu); c.r[17].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0026(c, 98u, depth + 1u); else { c.pc = 0x00199640u; return; } if (c.pc != 0x00197A0Cu) [[unlikely]] return; }
L_00197A0C:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[18].d[0] = c.r[18].d[0] & 255ull;  goto L_00197A30; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00197A28u); set32(c.r[4], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_0026(c, 102u, depth + 1u); else { c.pc = 0x00199760u; return; } if (c.pc != 0x00197A28u) [[unlikely]] return; }
L_00197A28:
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.r[18].d[0] = c.r[18].d[0] & 255ull;
    c.budget -= 2;
L_00197A30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00197A40; } }
L_00197A38:
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 2;
L_00197A40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5173u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] + 1632u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 7;
    { const bool t = c.r[16].sd[0] < 0; set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_00197A68; } }
    c.f[0] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00197A84; } }
L_00197A68:
    set32(c.r[3], c.r[16].w[0] >> 1);
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_00197A84:
    c.f[0] = ld32((c.r[6].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00197A90u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00197A90u) [[unlikely]] return; }
L_00197A90:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 16);
    set32(c.r[2], c.r[4].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    c.r[16].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[5], 0u + 2u);
    c.r[4].d[0] = c.r[19].d[0] & 255ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00197ABCu); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 289u, depth + 1u); else { c.pc = 0x001971C0u; return; } if (c.pc != 0x00197ABCu) [[unlikely]] return; }
L_00197ABC:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00197AE0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    mmi::paddub(c.r[20], c.r[5], c.r[0]);
    c.r[17].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[4], 0u + 2u);
    mmi::paddub(c.r[18], c.r[6], c.r[0]);
    mmi::paddub(c.r[19], c.r[7], c.r[0]);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00197B20u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000C(c, 440u, depth + 1u); else { c.pc = 0x001338E0u; return; } if (c.pc != 0x00197B20u) [[unlikely]] return; }
L_00197B20:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_00197B70; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00197B34u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000C(c, 441u, depth + 1u); else { c.pc = 0x00133900u; return; } if (c.pc != 0x00197B34u) [[unlikely]] return; }
L_00197B34:
    set32(c.r[4], c.r[21].w[0] + 32u);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00197B44u); c.r[17].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0026(c, 98u, depth + 1u); else { c.pc = 0x00199640u; return; } if (c.pc != 0x00197B44u) [[unlikely]] return; }
L_00197B44:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[18].d[0] = c.r[18].d[0] & 255ull;  goto L_00197B68; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00197B60u); set32(c.r[4], c.r[21].w[0] + 32u);  if (depth < kMaxDepth) unit_0026(c, 102u, depth + 1u); else { c.pc = 0x00199760u; return; } if (c.pc != 0x00197B60u) [[unlikely]] return; }
L_00197B60:
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.r[18].d[0] = c.r[18].d[0] & 255ull;
    c.budget -= 2;
L_00197B68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00197B78; } }
L_00197B70:
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 2;
L_00197B78:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5173u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] + 1632u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 7;
    { const bool t = c.r[16].sd[0] < 0; set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_00197BA0; } }
    c.f[0] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00197BBC; } }
L_00197BA0:
    set32(c.r[3], c.r[16].w[0] >> 1);
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_00197BBC:
    c.f[0] = ld32((c.r[6].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00197BC8u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00197BC8u) [[unlikely]] return; }
L_00197BC8:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 16);
    set32(c.r[2], c.r[4].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    c.r[16].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == c.r[19].d[0]; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_00197C00; } }
    set32(c.r[5], 0u + 2u);
    c.r[4].d[0] = c.r[20].d[0] & 255ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00197BFCu); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 293u, depth + 1u); else { c.pc = 0x00197270u; return; } if (c.pc != 0x00197BFCu) [[unlikely]] return; }
L_00197BFC:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 1;
L_00197C00:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00197C30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    c.r[17].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[4], 0u + 3u);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00197C60u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000C(c, 440u, depth + 1u); else { c.pc = 0x001338E0u; return; } if (c.pc != 0x00197C60u) [[unlikely]] return; }
L_00197C60:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_00197CAC; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00197C74u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000C(c, 441u, depth + 1u); else { c.pc = 0x00133900u; return; } if (c.pc != 0x00197C74u) [[unlikely]] return; }
L_00197C74:
    set32(c.r[4], c.r[18].w[0] + 32u);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00197C84u); c.r[17].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0026(c, 98u, depth + 1u); else { c.pc = 0x00199640u; return; } if (c.pc != 0x00197C84u) [[unlikely]] return; }
L_00197C84:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00197CA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00197CA0u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0026(c, 102u, depth + 1u); else { c.pc = 0x00199760u; return; } if (c.pc != 0x00197CA0u) [[unlikely]] return; }
L_00197CA0:
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00197CA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = ld8((c.r[18].w[0] + 268u));  if (t) { goto L_00197CB4; } }
L_00197CAC:
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 2;
L_00197CB4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5173u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] + 1632u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 7;
    { const bool t = c.r[16].sd[0] < 0; set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_00197CDC; } }
    c.f[0] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00197CF8; } }
L_00197CDC:
    set32(c.r[3], c.r[16].w[0] >> 1);
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_00197CF8:
    c.f[0] = ld32((c.r[6].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00197D04u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00197D04u) [[unlikely]] return; }
L_00197D04:
    c.r[3].d[0] = c.r[18].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[5], c.r[3].w[0] << 16);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[2].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[5], 0u + 3u);
    c.r[4].d[0] = c.r[19].d[0] & 255ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00197D2Cu); c.r[6].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0025(c, 287u, depth + 1u); else { c.pc = 0x00197150u; return; } if (c.pc != 0x00197D2Cu) [[unlikely]] return; }
L_00197D2C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00197D50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    c.r[17].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[4], 0u + 3u);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00197D80u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000C(c, 440u, depth + 1u); else { c.pc = 0x001338E0u; return; } if (c.pc != 0x00197D80u) [[unlikely]] return; }
L_00197D80:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_00197DCC; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00197D94u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000C(c, 441u, depth + 1u); else { c.pc = 0x00133900u; return; } if (c.pc != 0x00197D94u) [[unlikely]] return; }
L_00197D94:
    set32(c.r[4], c.r[18].w[0] + 32u);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00197DA4u); c.r[17].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0026(c, 98u, depth + 1u); else { c.pc = 0x00199640u; return; } if (c.pc != 0x00197DA4u) [[unlikely]] return; }
L_00197DA4:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00197DC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00197DC0u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0026(c, 102u, depth + 1u); else { c.pc = 0x00199760u; return; } if (c.pc != 0x00197DC0u) [[unlikely]] return; }
L_00197DC0:
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00197DC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = ld8((c.r[18].w[0] + 268u));  if (t) { goto L_00197DD4; } }
L_00197DCC:
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 2;
L_00197DD4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5173u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] + 1632u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 7;
    { const bool t = c.r[16].sd[0] < 0; set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_00197DFC; } }
    c.f[0] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00197E18; } }
L_00197DFC:
    set32(c.r[3], c.r[16].w[0] >> 1);
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_00197E18:
    c.f[0] = ld32((c.r[6].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00197E24u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00197E24u) [[unlikely]] return; }
L_00197E24:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 16);
    set32(c.r[2], c.r[4].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    c.r[16].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[5], 0u + 3u);
    c.r[4].d[0] = c.r[19].d[0] & 255ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00197E50u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 289u, depth + 1u); else { c.pc = 0x001971C0u; return; } if (c.pc != 0x00197E50u) [[unlikely]] return; }
L_00197E50:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00197E70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    c.r[17].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[4], 0u + 6u);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00197EA0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000C(c, 440u, depth + 1u); else { c.pc = 0x001338E0u; return; } if (c.pc != 0x00197EA0u) [[unlikely]] return; }
L_00197EA0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_00197EEC; } }
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00197EB4u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000C(c, 441u, depth + 1u); else { c.pc = 0x00133900u; return; } if (c.pc != 0x00197EB4u) [[unlikely]] return; }
L_00197EB4:
    set32(c.r[4], c.r[18].w[0] + 32u);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00197EC4u); c.r[17].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0026(c, 98u, depth + 1u); else { c.pc = 0x00199640u; return; } if (c.pc != 0x00197EC4u) [[unlikely]] return; }
L_00197EC4:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00197EE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00197EE0u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0026(c, 102u, depth + 1u); else { c.pc = 0x00199760u; return; } if (c.pc != 0x00197EE0u) [[unlikely]] return; }
L_00197EE0:
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00197EE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = ld8((c.r[18].w[0] + 268u));  if (t) { goto L_00197EF4; } }
L_00197EEC:
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 2;
L_00197EF4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5173u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] + 1632u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 7;
    { const bool t = c.r[16].sd[0] < 0; set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_00197F1C; } }
    c.f[0] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00197F38; } }
L_00197F1C:
    set32(c.r[3], c.r[16].w[0] >> 1);
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_00197F38:
    c.f[0] = ld32((c.r[6].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00197F44u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00197F44u) [[unlikely]] return; }
L_00197F44:
    c.r[3].d[0] = c.r[18].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[5], c.r[3].w[0] << 16);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[2].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[5], 0u + 6u);
    c.r[4].d[0] = c.r[19].d[0] & 255ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00197F6Cu); c.r[6].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0025(c, 287u, depth + 1u); else { c.pc = 0x00197150u; return; } if (c.pc != 0x00197F6Cu) [[unlikely]] return; }
L_00197F6C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00197F90:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[20], c.r[5], c.r[0]);
    c.r[17].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[4], 0u + 3u);
    mmi::paddub(c.r[19], c.r[6], c.r[0]);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00197FC8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000C(c, 440u, depth + 1u); else { c.pc = 0x001338E0u; return; } if (c.pc != 0x00197FC8u) [[unlikely]] return; }
L_00197FC8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] & 255ull;  if (t) { [[clang::musttail]] return unit_0026(c, 4u, depth); } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00197FDCu); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000C(c, 441u, depth + 1u); else { c.pc = 0x00133900u; return; } if (c.pc != 0x00197FDCu) [[unlikely]] return; }
L_00197FDC:
    set32(c.r[4], c.r[18].w[0] + 32u);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00197FECu); c.r[17].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0026(c, 98u, depth + 1u); else { c.pc = 0x00199640u; return; } if (c.pc != 0x00197FECu) [[unlikely]] return; }
L_00197FEC:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0026(c, 3u, depth); } }
    [[clang::musttail]] return unit_0026(c, 1u, depth);
}

}
