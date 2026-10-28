#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_004F[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 21,
    0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0,
    29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0,
    0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0,
    0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0,
    0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0,
    50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 52, 0,
    0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 63, 64, 65, 66, 67, 68, 69, 70,
    71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102,
    103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 0, 128, 0, 0, 0, 0, 129,
    0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0,
    0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166,
    0, 0, 167, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0,
    175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 180, 0, 181, 0, 0, 0, 182, 0, 183, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    185, 0, 0, 0, 0, 0, 186, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 200,
    0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0,
    0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0,
    211, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215,
    0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0,
    222, 0, 0, 223, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 238, 0, 239, 0, 240, 0, 241, 0,
    242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 244, 0, 245, 0, 0, 246, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 248, 0, 249, 0, 250, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0,
    0, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 264, 0, 0, 0, 265, 0, 0, 266,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 268, 0, 269, 0, 270, 0, 271, 0, 272, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 275, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0,
    279, 0, 0, 0, 0, 0, 280, 0, 0, 281, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 287, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 289, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 292, 0, 293, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 297, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0,
    0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305,
    0, 306, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 310, 311, 312, 313, 314, 315, 316, 317, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0,
    0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0,
    0, 332, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0,
    336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0,
    0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    346, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0,
    352, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 363, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0,
    0, 0, 0, 0, 0, 0, 0, 366, 0, 367, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 370, 0, 371, 0, 0, 0, 0,
    0, 0, 372, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    377, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_004F(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0023C000;
    case 2u: goto L_0023C018;
    case 3u: goto L_0023C170;
    case 4u: goto L_0023C230;
    case 5u: goto L_0023C2D0;
    case 6u: goto L_0023C2E0;
    case 7u: goto L_0023C2F0;
    case 8u: goto L_0023C33C;
    case 9u: goto L_0023C37C;
    case 10u: goto L_0023C3E4;
    case 11u: goto L_0023C3F8;
    case 12u: goto L_0023C498;
    case 13u: goto L_0023C4E0;
    case 14u: goto L_0023C51C;
    case 15u: goto L_0023C528;
    case 16u: goto L_0023C584;
    case 17u: goto L_0023C5C0;
    case 18u: goto L_0023C5E0;
    case 19u: goto L_0023C668;
    case 20u: goto L_0023C674;
    case 21u: goto L_0023C67C;
    case 22u: goto L_0023C694;
    case 23u: goto L_0023C69C;
    case 24u: goto L_0023C6B0;
    case 25u: goto L_0023C714;
    case 26u: goto L_0023C754;
    case 27u: goto L_0023C7B8;
    case 28u: goto L_0023C7F0;
    case 29u: goto L_0023C800;
    case 30u: goto L_0023C810;
    case 31u: goto L_0023C86C;
    case 32u: goto L_0023C8A8;
    case 33u: goto L_0023C8F4;
    case 34u: goto L_0023C970;
    case 35u: goto L_0023C9A0;
    case 36u: goto L_0023C9B8;
    case 37u: goto L_0023C9C0;
    case 38u: goto L_0023C9F0;
    case 39u: goto L_0023CA1C;
    case 40u: goto L_0023CA30;
    case 41u: goto L_0023CA70;
    case 42u: goto L_0023CA88;
    case 43u: goto L_0023CAD0;
    case 44u: goto L_0023CAEC;
    case 45u: goto L_0023CB10;
    case 46u: goto L_0023CC54;
    case 47u: goto L_0023CC70;
    case 48u: goto L_0023CC90;
    case 49u: goto L_0023CCE0;
    case 50u: goto L_0023CD00;
    case 51u: goto L_0023CD6C;
    case 52u: goto L_0023CD78;
    case 53u: goto L_0023CD88;
    case 54u: goto L_0023CDA4;
    case 55u: goto L_0023CDB0;
    case 56u: goto L_0023CE24;
    case 57u: goto L_0023CE60;
    case 58u: goto L_0023CEBC;
    case 59u: goto L_0023CEC8;
    case 60u: goto L_0023CF70;
    case 61u: goto L_0023D0C0;
    case 62u: goto L_0023D0D0;
    case 63u: goto L_0023D0E0;
    case 64u: goto L_0023D0E4;
    case 65u: goto L_0023D0E8;
    case 66u: goto L_0023D0EC;
    case 67u: goto L_0023D0F0;
    case 68u: goto L_0023D0F4;
    case 69u: goto L_0023D0F8;
    case 70u: goto L_0023D0FC;
    case 71u: goto L_0023D100;
    case 72u: goto L_0023D104;
    case 73u: goto L_0023D108;
    case 74u: goto L_0023D10C;
    case 75u: goto L_0023D110;
    case 76u: goto L_0023D114;
    case 77u: goto L_0023D118;
    case 78u: goto L_0023D11C;
    case 79u: goto L_0023D120;
    case 80u: goto L_0023D124;
    case 81u: goto L_0023D128;
    case 82u: goto L_0023D12C;
    case 83u: goto L_0023D130;
    case 84u: goto L_0023D134;
    case 85u: goto L_0023D138;
    case 86u: goto L_0023D13C;
    case 87u: goto L_0023D140;
    case 88u: goto L_0023D144;
    case 89u: goto L_0023D148;
    case 90u: goto L_0023D14C;
    case 91u: goto L_0023D150;
    case 92u: goto L_0023D154;
    case 93u: goto L_0023D158;
    case 94u: goto L_0023D15C;
    case 95u: goto L_0023D160;
    case 96u: goto L_0023D164;
    case 97u: goto L_0023D168;
    case 98u: goto L_0023D16C;
    case 99u: goto L_0023D170;
    case 100u: goto L_0023D174;
    case 101u: goto L_0023D178;
    case 102u: goto L_0023D17C;
    case 103u: goto L_0023D180;
    case 104u: goto L_0023D184;
    case 105u: goto L_0023D188;
    case 106u: goto L_0023D18C;
    case 107u: goto L_0023D190;
    case 108u: goto L_0023D194;
    case 109u: goto L_0023D198;
    case 110u: goto L_0023D19C;
    case 111u: goto L_0023D1A0;
    case 112u: goto L_0023D1A4;
    case 113u: goto L_0023D1A8;
    case 114u: goto L_0023D1AC;
    case 115u: goto L_0023D1B0;
    case 116u: goto L_0023D1B4;
    case 117u: goto L_0023D1B8;
    case 118u: goto L_0023D1BC;
    case 119u: goto L_0023D1C0;
    case 120u: goto L_0023D1C4;
    case 121u: goto L_0023D1C8;
    case 122u: goto L_0023D1CC;
    case 123u: goto L_0023D1D0;
    case 124u: goto L_0023D1D4;
    case 125u: goto L_0023D1D8;
    case 126u: goto L_0023D1DC;
    case 127u: goto L_0023D1E0;
    case 128u: goto L_0023D1E8;
    case 129u: goto L_0023D1FC;
    case 130u: goto L_0023D220;
    case 131u: goto L_0023D278;
    case 132u: goto L_0023D284;
    case 133u: goto L_0023D2C0;
    case 134u: goto L_0023D2E0;
    case 135u: goto L_0023D350;
    case 136u: goto L_0023D370;
    case 137u: goto L_0023D3C4;
    case 138u: goto L_0023D408;
    case 139u: goto L_0023D448;
    case 140u: goto L_0023D450;
    case 141u: goto L_0023D480;
    case 142u: goto L_0023D4BC;
    case 143u: goto L_0023D4F0;
    case 144u: goto L_0023D544;
    case 145u: goto L_0023D54C;
    case 146u: goto L_0023D554;
    case 147u: goto L_0023D580;
    case 148u: goto L_0023D600;
    case 149u: goto L_0023D700;
    case 150u: goto L_0023D7D0;
    case 151u: goto L_0023D7E0;
    case 152u: goto L_0023D7F0;
    case 153u: goto L_0023D838;
    case 154u: goto L_0023D878;
    case 155u: goto L_0023D914;
    case 156u: goto L_0023D9BC;
    case 157u: goto L_0023D9D0;
    case 158u: goto L_0023DA10;
    case 159u: goto L_0023DA28;
    case 160u: goto L_0023DAA4;
    case 161u: goto L_0023DAB0;
    case 162u: goto L_0023DAD0;
    case 163u: goto L_0023DB30;
    case 164u: goto L_0023DB38;
    case 165u: goto L_0023DB64;
    case 166u: goto L_0023DB7C;
    case 167u: goto L_0023DB88;
    case 168u: goto L_0023DB90;
    case 169u: goto L_0023DBA0;
    case 170u: goto L_0023DBE8;
    case 171u: goto L_0023DC20;
    case 172u: goto L_0023DC3C;
    case 173u: goto L_0023DC54;
    case 174u: goto L_0023DC70;
    case 175u: goto L_0023DC80;
    case 176u: goto L_0023DC90;
    case 177u: goto L_0023DD38;
    case 178u: goto L_0023DD90;
    case 179u: goto L_0023DDA0;
    case 180u: goto L_0023DDA8;
    case 181u: goto L_0023DDB0;
    case 182u: goto L_0023DDC0;
    case 183u: goto L_0023DDC8;
    case 184u: goto L_0023DDD4;
    case 185u: goto L_0023DE00;
    case 186u: goto L_0023DE18;
    case 187u: goto L_0023DE20;
    case 188u: goto L_0023DE50;
    case 189u: goto L_0023DE88;
    case 190u: goto L_0023DEA0;
    case 191u: goto L_0023DEE0;
    case 192u: goto L_0023DEF0;
    case 193u: goto L_0023DF30;
    case 194u: goto L_0023DF4C;
    case 195u: goto L_0023DF70;
    case 196u: goto L_0023E004;
    case 197u: goto L_0023E018;
    case 198u: goto L_0023E040;
    case 199u: goto L_0023E074;
    case 200u: goto L_0023E07C;
    case 201u: goto L_0023E0A0;
    case 202u: goto L_0023E0C4;
    case 203u: goto L_0023E0D8;
    case 204u: goto L_0023E208;
    case 205u: goto L_0023E244;
    case 206u: goto L_0023E260;
    case 207u: goto L_0023E284;
    case 208u: goto L_0023E298;
    case 209u: goto L_0023E320;
    case 210u: goto L_0023E35C;
    case 211u: goto L_0023E380;
    case 212u: goto L_0023E3A4;
    case 213u: goto L_0023E3B8;
    case 214u: goto L_0023E440;
    case 215u: goto L_0023E47C;
    case 216u: goto L_0023E4A0;
    case 217u: goto L_0023E4C0;
    case 218u: goto L_0023E4D4;
    case 219u: goto L_0023E50C;
    case 220u: goto L_0023E548;
    case 221u: goto L_0023E560;
    case 222u: goto L_0023E580;
    case 223u: goto L_0023E58C;
    case 224u: goto L_0023E598;
    case 225u: goto L_0023E5AC;
    case 226u: goto L_0023E5E4;
    case 227u: goto L_0023E620;
    case 228u: goto L_0023E640;
    case 229u: goto L_0023E660;
    case 230u: goto L_0023E6C4;
    case 231u: goto L_0023E700;
    case 232u: goto L_0023E72C;
    case 233u: goto L_0023E79C;
    case 234u: goto L_0023E7BC;
    case 235u: goto L_0023E7E0;
    case 236u: goto L_0023E810;
    case 237u: goto L_0023E858;
    case 238u: goto L_0023E860;
    case 239u: goto L_0023E868;
    case 240u: goto L_0023E870;
    case 241u: goto L_0023E878;
    case 242u: goto L_0023E880;
    case 243u: goto L_0023E89C;
    case 244u: goto L_0023E8A8;
    case 245u: goto L_0023E8B0;
    case 246u: goto L_0023E8BC;
    case 247u: goto L_0023E8C8;
    case 248u: goto L_0023E8E8;
    case 249u: goto L_0023E8F0;
    case 250u: goto L_0023E8F8;
    case 251u: goto L_0023E920;
    case 252u: goto L_0023E92C;
    case 253u: goto L_0023E95C;
    case 254u: goto L_0023E96C;
    case 255u: goto L_0023E99C;
    case 256u: goto L_0023E9F8;
    case 257u: goto L_0023EA14;
    case 258u: goto L_0023EA20;
    case 259u: goto L_0023EA2C;
    case 260u: goto L_0023EA50;
    case 261u: goto L_0023EA70;
    case 262u: goto L_0023EB3C;
    case 263u: goto L_0023EB54;
    case 264u: goto L_0023EB60;
    case 265u: goto L_0023EB70;
    case 266u: goto L_0023EB7C;
    case 267u: goto L_0023EBA4;
    case 268u: goto L_0023EBAC;
    case 269u: goto L_0023EBB4;
    case 270u: goto L_0023EBBC;
    case 271u: goto L_0023EBC4;
    case 272u: goto L_0023EBCC;
    case 273u: goto L_0023EBD4;
    case 274u: goto L_0023EC28;
    case 275u: goto L_0023EC30;
    case 276u: goto L_0023EC38;
    case 277u: goto L_0023EC60;
    case 278u: goto L_0023EC70;
    case 279u: goto L_0023EC80;
    case 280u: goto L_0023EC98;
    case 281u: goto L_0023ECA4;
    case 282u: goto L_0023ECAC;
    case 283u: goto L_0023ECC0;
    case 284u: goto L_0023ECF0;
    case 285u: goto L_0023ED80;
    case 286u: goto L_0023EDB0;
    case 287u: goto L_0023EE14;
    case 288u: goto L_0023EE20;
    case 289u: goto L_0023EE84;
    case 290u: goto L_0023EEA0;
    case 291u: goto L_0023EEB0;
    case 292u: goto L_0023EEBC;
    case 293u: goto L_0023EEC4;
    case 294u: goto L_0023EECC;
    case 295u: goto L_0023EF00;
    case 296u: goto L_0023EFC8;
    case 297u: goto L_0023EFD4;
    case 298u: goto L_0023EFF0;
    case 299u: goto L_0023F020;
    case 300u: goto L_0023F0C0;
    case 301u: goto L_0023F0D0;
    case 302u: goto L_0023F0E0;
    case 303u: goto L_0023F0F8;
    case 304u: goto L_0023F108;
    case 305u: goto L_0023F17C;
    case 306u: goto L_0023F184;
    case 307u: goto L_0023F18C;
    case 308u: goto L_0023F1A0;
    case 309u: goto L_0023F1C8;
    case 310u: goto L_0023F220;
    case 311u: goto L_0023F224;
    case 312u: goto L_0023F228;
    case 313u: goto L_0023F22C;
    case 314u: goto L_0023F230;
    case 315u: goto L_0023F234;
    case 316u: goto L_0023F238;
    case 317u: goto L_0023F23C;
    case 318u: goto L_0023F250;
    case 319u: goto L_0023F280;
    case 320u: goto L_0023F2C0;
    case 321u: goto L_0023F2E4;
    case 322u: goto L_0023F2F8;
    case 323u: goto L_0023F320;
    case 324u: goto L_0023F340;
    case 325u: goto L_0023F360;
    case 326u: goto L_0023F3F8;
    case 327u: goto L_0023F418;
    case 328u: goto L_0023F448;
    case 329u: goto L_0023F470;
    case 330u: goto L_0023F4A0;
    case 331u: goto L_0023F4E0;
    case 332u: goto L_0023F504;
    case 333u: goto L_0023F518;
    case 334u: goto L_0023F540;
    case 335u: goto L_0023F560;
    case 336u: goto L_0023F580;
    case 337u: goto L_0023F618;
    case 338u: goto L_0023F63C;
    case 339u: goto L_0023F66C;
    case 340u: goto L_0023F690;
    case 341u: goto L_0023F6C0;
    case 342u: goto L_0023F6F4;
    case 343u: goto L_0023F728;
    case 344u: goto L_0023F740;
    case 345u: goto L_0023F758;
    case 346u: goto L_0023F780;
    case 347u: goto L_0023F794;
    case 348u: goto L_0023F7D0;
    case 349u: goto L_0023F800;
    case 350u: goto L_0023F834;
    case 351u: goto L_0023F868;
    case 352u: goto L_0023F880;
    case 353u: goto L_0023F898;
    case 354u: goto L_0023F8C0;
    case 355u: goto L_0023F8D4;
    case 356u: goto L_0023F910;
    case 357u: goto L_0023F920;
    case 358u: goto L_0023F930;
    case 359u: goto L_0023F978;
    case 360u: goto L_0023F9B4;
    case 361u: goto L_0023FC18;
    case 362u: goto L_0023FC44;
    case 363u: goto L_0023FC88;
    case 364u: goto L_0023FCA4;
    case 365u: goto L_0023FCF8;
    case 366u: goto L_0023FD1C;
    case 367u: goto L_0023FD24;
    case 368u: goto L_0023FD2C;
    case 369u: goto L_0023FD58;
    case 370u: goto L_0023FD64;
    case 371u: goto L_0023FD6C;
    case 372u: goto L_0023FD88;
    case 373u: goto L_0023FD9C;
    case 374u: goto L_0023FDD0;
    case 375u: goto L_0023FDF0;
    case 376u: goto L_0023FE2C;
    case 377u: goto L_0023FE80;
    case 378u: goto L_0023FE9C;
    case 379u: goto L_0023FF90;
    case 380u: goto L_0023FFB8;
    default: bad_entry(c, 0x0023C000u); return;
    }
L_0023C000:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_0023C018; } }
    set32(c.r[3], c.r[7].w[0] - 19u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023C048; } }
L_0023C018:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; c.r[7].d[0] = c.r[3].d[0] & 1ull;  if (t) { goto L_0023C030; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[3], c.r[28].w[0] - 29312u);  if (t) { goto L_0023C034; } }
    set32(c.r[7], c.r[7].w[0] - 2u);
    c.budget -= 1;
L_0023C030:
    set32(c.r[3], c.r[28].w[0] - 29312u);
    c.budget -= 1;
L_0023C034:
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.r[7].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[3], c.r[6].w[0] + c.r[5].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 148u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { goto L_0023C074; } }
L_0023C048:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; c.r[7].d[0] = c.r[3].d[0] & 1ull;  if (t) { goto L_0023C060; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[3], c.r[28].w[0] - 29310u);  if (t) { goto L_0023C064; } }
    set32(c.r[7], c.r[7].w[0] - 2u);
    c.budget -= 1;
L_0023C060:
    set32(c.r[3], c.r[28].w[0] - 29310u);
    c.budget -= 1;
L_0023C064:
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.r[7].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[3], c.r[6].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0] + 148u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 4;
L_0023C074:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0023C168; } }
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[3].sd[0] < 11ll ? 1ull : 0ull;  if (t) { goto L_0023C0CC; } }
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[7], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[7].w[0] + 16u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3EAA0000u);
    c.r[3].d[0] = c.r[3].d[0] | 43691ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[7].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 20u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 20u), c.f[0]);  if (t) { goto L_0023C138; } }
    c.r[1].d[0] = c.r[3].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 1;
L_0023C0CC:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[6].w[0] << 3);  if (t) { goto L_0023C10C; } }
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[7], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[7].w[0] + 16u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52432ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[7].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 20u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 20u), c.f[0]);  if (t) { goto L_0023C138; } }
    set32(c.r[3], c.r[6].w[0] << 3);
    c.budget -= 1;
L_0023C10C:
    set32(c.r[7], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[7].w[0] + 16u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBDF50000u);
    c.r[3].d[0] = c.r[3].d[0] | 49808ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[7].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 20u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[7].w[0] + 20u), c.f[0]);
    c.budget -= 11;
L_0023C138:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0023C168; } }
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 92u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBE000000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 92u), c.f[0]);
    c.budget -= 8;
L_0023C168:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0023C170:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0023C228; } }
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[6].w[0] << 3);  if (t) { goto L_0023C1C8; } }
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[7], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[7].w[0] + 16u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[7].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 20u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 20u), c.f[0]);  if (t) { goto L_0023C1F4; } }
    set32(c.r[3], c.r[6].w[0] << 3);
    c.budget -= 1;
L_0023C1C8:
    set32(c.r[7], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[7].w[0] + 16u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55051ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[7].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 20u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[7].w[0] + 20u), c.f[0]);
    c.budget -= 11;
L_0023C1F4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0023C228; } }
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 92u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 92u), c.f[0]);
    c.budget -= 9;
L_0023C228:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0023C230:
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[8], c.r[3].w[0] + 134u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 134u)));
    c.budget -= 7;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_0023C2C4; } }
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[7], c.r[3].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[7].w[0] + 16u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CEA0000u);
    c.r[3].d[0] = c.r[3].d[0] | 3749ull;
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E5B0000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | 28087ull;
    st32((c.r[7].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[7].w[0] + 20u));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[7].w[0] + 20u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0023C2C4; } }
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 92u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBEAA0000u);
    c.r[3].d[0] = c.r[3].d[0] | 43691ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 92u), c.f[0]);
    c.budget -= 9;
L_0023C2C4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0023C2D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0023C2E0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_0023C2F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[18].w[0] + 32u);
    set32(c.r[16], c.r[18].w[0] + 320u);
    set32(c.r[2], c.r[29].w[0] + 64u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    vu::move(c.vu0, 1u, 4u, 0u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[28].w[0] - 29308u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C33Cu); st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001E(c, 201u, depth + 1u); else { c.pc = 0x0017BBC0u; return; } if (c.pc != 0x0023C33Cu) [[unlikely]] return; }
L_0023C33C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[3].w[0]);
    set32(c.r[3], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20352u), 0u);
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_0023C4A8; } }
    c.r[4].d[0] = c.r[17].d[0] << 56;
    c.budget -= 1;
L_0023C37C:
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], c.r[4].w[0] + c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 162u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] + 1u);  if (t) { goto L_0023C49C; } }
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 92u));
    set32(c.r[5], c.r[28].w[0] - 29308u);
    c.f[1] = 0u;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = fp::max(c.f[1], c.f[0]);
    c.f[1] = c.r[8].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[8], c.f[0]);
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[2].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023C3F0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 88u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C3E4u); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 277u, depth + 1u); else { c.pc = 0x0013B2D0u; return; } if (c.pc != 0x0023C3E4u) [[unlikely]] return; }
L_0023C3E4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20372u), c.f[0]);  if (t) { goto L_0023C400; } }
L_0023C3F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C3F8u); set32(c.r[4], ld32((c.r[18].w[0] + 88u)));  if (depth < kMaxDepth) unit_000E(c, 277u, depth + 1u); else { c.pc = 0x0013B2D0u; return; } if (c.pc != 0x0023C3F8u) [[unlikely]] return; }
L_0023C3F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20372u), c.f[0]);
    c.budget -= 2;
L_0023C400:
    c.r[4].d[0] = c.r[17].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[2], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[6], c.r[2].w[0] - 26160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    st32((c.r[1].w[0] - 20416u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    set32(c.r[5], c.r[2].w[0] - 26032u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[7], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[2].w[0] - 25904u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20412u), c.f[0]);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.r[2].d[0] = ld8((c.r[7].w[0] + 148u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 138u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] - 20384u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[7].w[0] + 148u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 138u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] - 20388u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[7].w[0] + 148u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 138u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 38;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C498u); st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001C(c, 51u, depth + 1u); else { c.pc = 0x001712A0u; return; } if (c.pc != 0x0023C498u) [[unlikely]] return; }
L_0023C498:
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0023C49C:
    c.r[17].d[0] = c.r[3].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 3;
L_0023C4A8:
    c.r[3].d[0] = c.r[17].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] << 56;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023C37Cu | kUnwind; return; } goto L_0023C37C; } }
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0023C4E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] - 14160u);
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_0023C590; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 1;
L_0023C51C:
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C528u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x0023C528u) [[unlikely]] return; }
L_0023C528:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (t) { goto L_0023C588; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[5], 0u + 19u);
    set32(c.r[3], 0u + 40u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[2], c.r[2].w[0] - 14912u);
    st32((c.r[4].w[0] + 28u), c.r[19].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[2], c.r[2].w[0] - 14320u);
    st32((c.r[4].w[0] + 168u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[2].w[0] - 11344u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C584u); set32(c.r[7], 0u + 110u);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x0023C584u) [[unlikely]] return; }
L_0023C584:
    c.budget -= 1;
L_0023C588:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_0023C590:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], 0u + 3u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023C51Cu | kUnwind; return; } goto L_0023C51C; } }
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0023C5C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] - 13232u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0023C000u < 16384u) { entry = entries_004F[(t - 0x0023C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0023C5E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 164u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0023C69C; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 3u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[4], c.r[2].w[0] - 14156u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 11u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[29].w[0] + 32u), c.f[0]);
    st32((c.r[29].w[0] + 36u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0] + 40u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C668u); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0023C668u) [[unlikely]] return; }
L_0023C668:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C674u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x0023C674u) [[unlikely]] return; }
L_0023C674:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C67Cu); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0045(c, 192u, depth + 1u); else { c.pc = 0x00217510u; return; } if (c.pc != 0x0023C67Cu) [[unlikely]] return; }
L_0023C67C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40200000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[16].w[0] + 320u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C694u); st32((c.r[16].w[0] + 36u), c.f[0]);  if (depth < kMaxDepth) unit_004F(c, 35u, depth + 1u); else { c.pc = 0x0023C9A0u; return; } if (c.pc != 0x0023C694u) [[unlikely]] return; }
L_0023C694:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C69Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_004F(c, 24u, depth + 1u); else { c.pc = 0x0023C6B0u; return; } if (c.pc != 0x0023C69Cu) [[unlikely]] return; }
L_0023C69C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0023C6B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_0023C6E4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 11u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 11u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0023C6E4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0023C7B0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 11u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023C7AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C714u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0023C714u) [[unlikely]] return; }
L_0023C714:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[3].d[0] & 7ull;
    set32(c.r[4], c.r[2].w[0] + 8u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[2], 0u + 6u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    set32(c.r[2], c.r[5].w[0] + 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.hi.d[0];
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[4].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C754u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (depth < kMaxDepth) unit_004F(c, 41u, depth + 1u); else { c.pc = 0x0023CA70u; return; } if (c.pc != 0x0023C754u) [[unlikely]] return; }
L_0023C754:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023C7AC; } }
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = 0ull << 48;
    st16((c.r[2].w[0] + 2u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[5], 0u + 273u);
    set32(c.r[4], 0u - 273u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[6].d[0] = c.r[6].d[0] & 1ull;
    if (c.r[6].d[0] == 0) c.r[5].d[0] = c.r[4].d[0];
    st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    set32(c.r[4], c.r[3].w[0] - 13260u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 20;
L_0023C7AC:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0023C7B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C7B8u);  if (depth < kMaxDepth) unit_004F(c, 38u, depth + 1u); else { c.pc = 0x0023C9F0u; return; } if (c.pc != 0x0023C7B8u) [[unlikely]] return; }
L_0023C7B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023C7CC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0023C7D8; } }
L_0023C7CC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0023C7D8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0023C7F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0023C800:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_0023C810:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[4].w[0] + 32u);
    set32(c.r[16], c.r[4].w[0] + 320u);
    set32(c.r[2], c.r[29].w[0] + 64u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    vu::move(c.vu0, 1u, 4u, 0u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] - 12976u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 256u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C86Cu); st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001E(c, 201u, depth + 1u); else { c.pc = 0x0017BBC0u; return; } if (c.pc != 0x0023C86Cu) [[unlikely]] return; }
L_0023C86C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    set32(c.r[4], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[4].w[0]);
    set32(c.r[3], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[29].w[0] + 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20352u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_0023C978; } }
L_0023C8A8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], c.r[17].w[0] << 4);
    set32(c.r[18], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 256u)));
    set32(c.r[2], c.r[2].w[0] - 12976u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[8].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[8], c.f[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C8F4u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 4u)));  if (depth < kMaxDepth) unit_000E(c, 277u, depth + 1u); else { c.pc = 0x0013B2D0u; return; } if (c.pc != 0x0023C8F4u) [[unlikely]] return; }
L_0023C8F4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20372u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[6], c.r[2].w[0] - 13216u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    st32((c.r[1].w[0] - 20412u), c.f[0]);
    set32(c.r[5], c.r[2].w[0] - 13120u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20416u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[2].w[0] - 13024u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[7].w[0] << 4);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] - 20384u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] - 20388u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C970u); st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001C(c, 51u, depth + 1u); else { c.pc = 0x001712A0u; return; } if (c.pc != 0x0023C970u) [[unlikely]] return; }
L_0023C970:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_0023C978:
    c.r[3].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023C8A8u | kUnwind; return; } goto L_0023C8A8; } }
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0023C9A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 6;
L_0023C9B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023C9C0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_004F(c, 43u, depth + 1u); else { c.pc = 0x0023CAD0u; return; } if (c.pc != 0x0023C9C0u) [[unlikely]] return; }
L_0023C9C0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023C9B8u | kUnwind; return; } goto L_0023C9B8; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0023C9F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.r[1].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_0023CA48; } }
    set32(c.r[2], c.r[16].w[0] << 4);
    set32(c.r[18], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_0023CA1C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0023CA3C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023CA30u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_004F(c, 45u, depth + 1u); else { c.pc = 0x0023CB10u; return; } if (c.pc != 0x0023CA30u) [[unlikely]] return; }
L_0023CA30:
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 3;
L_0023CA3C:
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023CA1Cu | kUnwind; return; } goto L_0023CA1C; } }
L_0023CA48:
    mmi::paddub(c.r[2], c.r[17], c.r[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0023CA70:
    c.r[3].d[0] = c.r[5].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0023CAC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (t) { goto L_0023CAA8; } }
L_0023CA88:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[3].sd[0] >= 0) { set32(c.r[4], c.r[4].w[0] + 16u);  goto L_0023CAA4; }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    mmi::paddub(c.r[2], c.r[4], c.r[0]);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 4;
L_0023CAA4:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0023CAA8:
    c.r[1].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023CAC0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023CA88u | kUnwind; return; } goto L_0023CA88; } }
    c.budget -= 1;
L_0023CAC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0023CAD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 16u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023CAECu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0023CAECu) [[unlikely]] return; }
L_0023CAEC:
    set32(c.r[3], 0u - 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0023CB10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[2].w[0] - 13256u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    c.budget -= 14;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0023CC4C; } }
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0023CC4C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] - 13252u);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.f[2] = ld32((c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] - 13260u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] - 13264u);
    c.f[2] = fp::sub(c.f[2], c.f[1]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[6].w[0] - c.r[3].w[0]);
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[2], c.r[2].w[0] - 13256u);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 30;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023CBE4; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0023CBE4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2u)));
    c.r[1].d[0] = c.r[3].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0023CC34; } }
    set32(c.r[2], 0u + 20u);
    c.f[0] = 0u;
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.f[1] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = c.r[2].w[0];
    fpu_div(c, 1u, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 12u), c.f[1]);  if (t) { goto L_0023CC34; } }
    st32((c.r[4].w[0] + 12u), 0u);
    c.budget -= 1;
L_0023CC34:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 6u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0023CC58; } }
L_0023CC4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023CC54u);  if (depth < kMaxDepth) unit_004F(c, 43u, depth + 1u); else { c.pc = 0x0023CAD0u; return; } if (c.pc != 0x0023CC54u) [[unlikely]] return; }
L_0023CC54:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0023CC58:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0023CC70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023CC90u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x0023CC90u) [[unlikely]] return; }
L_0023CC90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023CCD0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 41u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] - 13088u);
    st32((c.r[2].w[0] + 24u), c.r[16].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[3], c.r[3].w[0] - 12064u);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 14;
L_0023CCD0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0023CCE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] - 12800u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0023C000u < 16384u) { entry = entries_004F[(t - 0x0023C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0023CD00:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st32((c.r[29].w[0] + 160u), c.r[4].w[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[30], c.r[2].w[0] + 320u);
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[18], c.r[2].w[0] - 12880u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    mmi::paddub(c.r[23], c.r[0], c.r[0]);
    mmi::paddub(c.r[17], c.r[30], c.r[0]);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[19], c.r[30], c.r[0]);
    mmi::paddub(c.r[20], c.r[30], c.r[0]);
    c.budget -= 26;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[21], c.r[30], c.r[0]);  if (t) { goto L_0023CE00; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_0023CD6C:
    st32((c.r[17].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023CD78u); c.f[12] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x0023CD78u) [[unlikely]] return; }
L_0023CD78:
    set32(c.r[22], c.r[30].w[0] + c.r[22].w[0]);
    st8((c.r[22].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023CD88u); c.f[12] = ld32((c.r[18].w[0] + 4u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0023CD88u) [[unlikely]] return; }
L_0023CD88:
    st8((c.r[22].w[0] + 99u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    st32((c.r[19].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    st32((c.r[19].w[0] + 52u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023CDA4u); c.f[12] = ld32((c.r[18].w[0] + 16u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0023CDA4u) [[unlikely]] return; }
L_0023CDA4:
    st16((c.r[20].w[0] + 84u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023CDB0u); c.f[12] = ld32((c.r[18].w[0] + 20u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0023CDB0u) [[unlikely]] return; }
L_0023CDB0:
    st16((c.r[20].w[0] + 90u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[18], c.r[18].w[0] + 24u);
    st32((c.r[21].w[0]), c.f[3]);
    st32((c.r[21].w[0] + 4u), c.f[2]);
    st32((c.r[21].w[0] + 8u), c.f[1]);
    st32((c.r[21].w[0] + 12u), c.f[0]);
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], c.r[23].w[0] + 1u);
    c.r[23].d[0] = c.r[2].d[0] << 56;
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[20], c.r[20].w[0] + 2u);
    set32(c.r[21], c.r[21].w[0] + 16u);
    c.r[23].d[0] = static_cast<std::uint64_t>(c.r[23].sd[0] >> 56);
    c.budget -= 20;
L_0023CE00:
    c.r[22].d[0] = c.r[23].d[0] << 56;
    c.r[22].d[0] = static_cast<std::uint64_t>(c.r[22].sd[0] >> 56);
    c.r[2].d[0] = c.r[22].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023CD6Cu | kUnwind; return; } goto L_0023CD6C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023CE24u); st8((c.r[30].w[0] + 102u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004F(c, 57u, depth + 1u); else { c.pc = 0x0023CE60u; return; } if (c.pc != 0x0023CE24u) [[unlikely]] return; }
L_0023CE24:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0023CE60:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 24u)));
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    set32(c.r[16], c.r[20].w[0] + 320u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 783u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[19], c.r[0], c.r[0]);  if (t) { goto L_0023CEA8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; mmi::paddub(c.r[18], c.r[0], c.r[0]);  if (t) { goto L_0023CEB0; } }
L_0023CEA8:
    st8((c.r[16].w[0] + 102u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 2;
L_0023CEB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[18].d[0] << 56;  if (t) { goto L_0023CEFC; } }
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 1;
L_0023CEBC:
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023CEC8u); mmi::paddub(c.r[6], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_004F(c, 60u, depth + 1u); else { c.pc = 0x0023CF70u; return; } if (c.pc != 0x0023CEC8u) [[unlikely]] return; }
L_0023CEC8:
    set32(c.r[3], c.r[16].w[0] + c.r[21].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 99u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[18].w[0] + 1u);  if (t) { goto L_0023CEEC; } }
    set32(c.r[3], c.r[19].w[0] + 1u);
    c.r[19].d[0] = c.r[3].d[0] << 56;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);
    set32(c.r[3], c.r[18].w[0] + 1u);
    c.budget -= 5;
L_0023CEEC:
    c.r[18].d[0] = c.r[3].d[0] << 56;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    c.r[21].d[0] = c.r[18].d[0] << 56;
    c.budget -= 4;
L_0023CEFC:
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 56);
    c.r[3].d[0] = c.r[21].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023CEBCu | kUnwind; return; } goto L_0023CEBC; } }
    c.r[4].d[0] = c.r[19].d[0] << 56;
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023CF2C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[20].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0023CF2C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 760u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0023CF40; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[20].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0023CF40:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0023CF70:
    set32(c.r[7], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = c.r[6].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[6], c.r[3].w[0] << 1);
    set32(c.r[4], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[8], c.r[4].w[0] + 90u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 90u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[4], c.r[6].w[0] + c.r[5].w[0]);  if (t) { goto L_0023D000; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 102u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0023CFFC; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_0023D0B0; } }
    set32(c.r[6], 0u + 1u);
    st8((c.r[4].w[0] + 99u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.f[3] = ld32((c.r[7].w[0] + 32u));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);
    c.f[2] = ld32((c.r[7].w[0] + 36u));
    c.f[1] = ld32((c.r[7].w[0] + 40u));
    c.f[0] = ld32((c.r[7].w[0] + 44u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0023D0B0; } }
L_0023CFFC:
    set32(c.r[4], c.r[6].w[0] + c.r[5].w[0]);
    c.budget -= 1;
L_0023D000:
    set32(c.r[6], c.r[3].w[0] << 3);
    set32(c.r[7], c.r[6].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[7].w[0] + 48u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3D2A0000u);
    c.r[6].d[0] = c.r[6].d[0] | 43691ull;
    c.f[1] = c.r[6].w[0];
    set32(c.r[9], c.r[4].w[0] + 84u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    set32(c.r[10], c.r[7].w[0] + 48u);
    st32((c.r[7].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[7].w[0] + 52u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 84u)));
    c.r[1].d[0] = c.r[4].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[11], c.r[7].w[0] + 52u);  if (t) { goto L_0023D068; } }
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[4].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[6].w[0] + 72u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0xBD080000u);
    c.r[4].d[0] = c.r[4].d[0] | 34953ull;
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[6].w[0] + 72u), c.f[0]);
    c.budget -= 9;
L_0023D068:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st16((c.r[9].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[4], 0u + 30u);  if (t) { goto L_0023D0B0; } }
    st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], 0u + 60u);
    st16((c.r[9].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    st8((c.r[4].w[0] + 99u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0] + 72u), c.r[4].w[0]);
    st32((c.r[10].w[0]), c.r[4].w[0]);
    st32((c.r[11].w[0]), c.r[4].w[0]);
    c.budget -= 11;
L_0023D0B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0023D0C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0023D0D0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_0023D0E0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.budget -= 1;
L_0023D0E4:
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0023D0E8:
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 1;
L_0023D0EC:
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 1;
L_0023D0F0:
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    c.budget -= 1;
L_0023D0F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.budget -= 1;
L_0023D0F8:
    set32(c.r[16], c.r[4].w[0] + 320u);
    c.budget -= 1;
L_0023D0FC:
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_0023D100:
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.budget -= 1;
L_0023D104:
    c.f[0] = ld32((c.r[4].w[0] + 36u));
    c.budget -= 1;
L_0023D108:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_0023D10C:
    set32(c.r[3], c.r[28].w[0] - 29296u);
    c.budget -= 1;
L_0023D110:
    set32(c.r[2], c.r[2].w[0] - 12784u);
    c.budget -= 1;
L_0023D114:
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.budget -= 1;
L_0023D118:
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    c.budget -= 1;
L_0023D11C:
    set32(c.r[9], 0u + 225u);
    c.budget -= 1;
L_0023D120:
    set32(c.r[8], 0u + 193u);
    c.budget -= 1;
L_0023D124:
    set32(c.r[7], 0u + 254u);
    c.budget -= 1;
L_0023D128:
    st8((c.r[1].w[0] - 20348u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 1;
L_0023D12C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 1;
L_0023D130:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_0023D134:
    st32((c.r[1].w[0] - 20400u), c.r[4].w[0]);
    c.budget -= 1;
L_0023D138:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_0023D13C:
    st32((c.r[1].w[0] - 20380u), c.r[3].w[0]);
    c.budget -= 1;
L_0023D140:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_0023D144:
    st32((c.r[1].w[0] - 20384u), c.r[2].w[0]);
    c.budget -= 1;
L_0023D148:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.budget -= 1;
L_0023D14C:
    st16((c.r[29].w[0] + 136u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.budget -= 1;
L_0023D150:
    st16((c.r[29].w[0] + 138u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.budget -= 1;
L_0023D154:
    set32(c.r[2], c.r[2].w[0] - 12768u);
    c.budget -= 1;
L_0023D158:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_0023D15C:
    st32((c.r[1].w[0] - 20388u), c.r[2].w[0]);
    c.budget -= 1;
L_0023D160:
    set32(c.r[6], 0u + 222u);
    c.budget -= 1;
L_0023D164:
    st16((c.r[29].w[0] + 140u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.budget -= 1;
L_0023D168:
    set32(c.r[2], c.r[29].w[0] + 136u);
    c.budget -= 1;
L_0023D16C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_0023D170:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_0023D174:
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.budget -= 1;
L_0023D178:
    st32((c.r[29].w[0] + 60u), c.r[10].w[0]);
    c.budget -= 1;
L_0023D17C:
    st16((c.r[29].w[0] + 142u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 1;
L_0023D180:
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.budget -= 1;
L_0023D184:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D18Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001E(c, 201u, depth + 1u); else { c.pc = 0x0017BBC0u; return; } if (c.pc != 0x0023D18Cu) [[unlikely]] return; }
    goto L_0023D18C;
L_0023D188:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_0023D18C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_0023D190:
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    c.budget -= 1;
L_0023D194:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0023D198:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_0023D19C:
    st32((c.r[1].w[0] - 20360u), c.r[4].w[0]);
    c.budget -= 1;
L_0023D1A0:
    set32(c.r[3], 0u + 10u);
    c.budget -= 1;
L_0023D1A4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_0023D1A8:
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0023D1AC:
    set32(c.r[3], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_0023D1B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_0023D1B4:
    st32((c.r[1].w[0] - 20352u), c.r[3].w[0]);
    c.budget -= 1;
L_0023D1B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_0023D1BC:
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_0023D1C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_0023D298; } }
    goto L_0023D1C8;
L_0023D1C4:
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 1;
L_0023D1C8:
    c.r[3].d[0] = c.r[17].d[0] << 56;
    c.budget -= 1;
L_0023D1CC:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 1;
L_0023D1D0:
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 1;
L_0023D1D4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 99u)));
    c.budget -= 1;
L_0023D1D8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] + 1u);  if (t) { goto L_0023D28C; } }
    goto L_0023D1E0;
L_0023D1DC:
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0023D1E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D1E8u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x0023D1E8u) [[unlikely]] return; }
L_0023D1E8:
    c.r[2].d[0] = c.r[17].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D1FCu); set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x0023D1FCu) [[unlikely]] return; }
L_0023D1FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].d[0] = c.r[17].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[14] = ld32((c.r[2].w[0] + 52u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D220u); c.f[12] = ld32((c.r[2].w[0] + 48u));  if (depth < kMaxDepth) unit_000F(c, 18u, depth + 1u); else { c.pc = 0x0013C8A0u; return; } if (c.pc != 0x0023D220u) [[unlikely]] return; }
L_0023D220:
    c.r[3].d[0] = c.r[17].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    vu::move(c.vu0, 1u, 4u, 0u);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 72u));
    set32(c.r[2], c.r[28].w[0] - 29296u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[8].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[8], c.f[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D278u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0023D278u) [[unlikely]] return; }
L_0023D278:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D284u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 163u, depth + 1u); else { c.pc = 0x00172AB0u; return; } if (c.pc != 0x0023D284u) [[unlikely]] return; }
L_0023D284:
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_0023D28C:
    c.r[17].d[0] = c.r[3].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 3;
L_0023D298:
    c.r[3].d[0] = c.r[17].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[17].d[0] << 56;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023D1CCu | kUnwind; return; } goto L_0023D1CC; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0023D2C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D2E0u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x0023D2E0u) [[unlikely]] return; }
L_0023D2E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023D33C; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 42u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    set32(c.r[4], c.r[3].w[0] - 11440u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[3], c.r[3].w[0] - 10256u);
    st32((c.r[2].w[0] + 32u), c.f[3]);
    st32((c.r[2].w[0] + 36u), c.f[2]);
    st32((c.r[2].w[0] + 40u), c.f[1]);
    st32((c.r[2].w[0] + 44u), c.f[0]);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 21;
L_0023D33C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0023D350:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] - 12672u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0023C000u < 16384u) { entry = entries_004F[(t - 0x0023C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0023D370:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[19], c.r[2].w[0] - 12752u);
    mmi::paddub(c.r[22], c.r[4], c.r[0]);
    set32(c.r[16], c.r[22].w[0] + 320u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[18], c.r[16], c.r[0]);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    mmi::paddub(c.r[20], c.r[16], c.r[0]);
    mmi::paddub(c.r[21], c.r[16], c.r[0]);
    c.budget -= 21;
L_0023D3C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[16].w[0] + c.r[17].w[0]);
    st8((c.r[3].w[0] + 106u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[19].w[0]));
    c.r[1].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    st32((c.r[20].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    st32((c.r[20].w[0] + 4u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 8u)));
    st16((c.r[21].w[0] + 88u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 10u));
    c.budget -= 15;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[3].w[0] + 100u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0023D418; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D408u);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x0023D408u) [[unlikely]] return; }
L_0023D408:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    st32((c.r[18].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 4;
L_0023D418:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[19], c.r[19].w[0] + 12u);
    set32(c.r[20], c.r[20].w[0] + 8u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023D3C4u | kUnwind; return; } goto L_0023D3C4; } }
    set32(c.r[4], c.r[22].w[0] + 32u);
    set32(c.r[5], c.r[29].w[0] + 140u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D448u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_0048(c, 290u, depth + 1u); else { c.pc = 0x002235D0u; return; } if (c.pc != 0x0023D448u) [[unlikely]] return; }
L_0023D448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D450u); mmi::paddub(c.r[4], c.r[22], c.r[0]);  if (depth < kMaxDepth) unit_004F(c, 141u, depth + 1u); else { c.pc = 0x0023D480u; return; } if (c.pc != 0x0023D450u) [[unlikely]] return; }
L_0023D450:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0023D480:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    set32(c.r[16], c.r[21].w[0] + 320u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[20], c.r[2].w[0] - 12656u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    mmi::paddub(c.r[19], c.r[16], c.r[0]);
    c.budget -= 15;
L_0023D4BC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 88u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023D4DC; } }
    set32(c.r[2], c.r[16].w[0] + c.r[18].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 106u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0023D4F0; } }
L_0023D4DC:
    set32(c.r[2], ld32((c.r[20].w[0])));
    mmi::paddub(c.r[4], c.r[21], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D4F0u); mmi::paddub(c.r[6], c.r[18], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0023D4F0u) [[unlikely]] return; }
L_0023D4F0:
    set32(c.r[2], c.r[16].w[0] + c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 106u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0023D50C; }
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 3;
L_0023D50C:
    c.r[2].d[0] = c.r[18].sd[0] < 6ll ? 1ull : 0ull;
    set32(c.r[19], c.r[19].w[0] + 2u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023D4BCu | kUnwind; return; } goto L_0023D4BC; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 164u)));
    set32(c.r[2], 0u + 6u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; st16((c.r[21].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0023D53C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[21].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0023D53C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D544u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x0023D544u) [[unlikely]] return; }
L_0023D544:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D54Cu); set32(c.r[4], c.r[21].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x0023D54Cu) [[unlikely]] return; }
L_0023D54C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D554u); set32(c.r[4], c.r[21].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0023D554u) [[unlikely]] return; }
L_0023D554:
    set32(c.r[3], 0u + 1u);
    st8((c.r[21].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0023D580:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0023D5F0; } }
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[7], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    c.r[3].d[0] = c.r[3].d[0] | 13107ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[7].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[7].w[0] + 4u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0023D5F0; } }
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 64u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 64u), c.f[0]);
    c.budget -= 9;
L_0023D5F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0023D600:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0023D6F8; } }
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[3].sd[0] < 11ll ? 1ull : 0ull;  if (t) { goto L_0023D658; } }
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[7], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F950000u);
    c.r[3].d[0] = c.r[3].d[0] | 21845ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[7].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 4u), c.f[0]);  if (t) { goto L_0023D6C4; } }
    c.r[1].d[0] = c.r[3].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 1;
L_0023D658:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[6].w[0] << 3);  if (t) { goto L_0023D698; } }
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[7], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E120000u);
    c.r[3].d[0] = c.r[3].d[0] | 18725ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[7].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 4u), c.f[0]);  if (t) { goto L_0023D6C4; } }
    set32(c.r[3], c.r[6].w[0] << 3);
    c.budget -= 1;
L_0023D698:
    set32(c.r[7], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[7].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[7].w[0] + 4u), c.f[0]);
    c.budget -= 11;
L_0023D6C4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0023D6F8; } }
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 64u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBDCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 64u), c.f[0]);
    c.budget -= 9;
L_0023D6F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0023D700:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0023D7BC; } }
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[6].w[0] << 3);  if (t) { goto L_0023D74C; } }
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.f[0]);  if (t) { goto L_0023D784; } }
    set32(c.r[3], c.r[6].w[0] << 3);
    c.budget -= 1;
L_0023D74C:
    set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBDCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    st32((c.r[4].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.budget -= 14;
L_0023D784:
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[4].w[0] + 64u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0023D7B0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[3], c.r[3].w[0] + 182u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 40u), c.r[3].w[0]);  if (t) { goto L_0023D7BC; } }
L_0023D7B0:
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[3], c.r[3].w[0] - 182u);
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    c.budget -= 3;
L_0023D7BC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0023D7D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0023D7E0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_0023D7F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[4].w[0] + 32u);
    set32(c.r[16], c.r[4].w[0] + 320u);
    set32(c.r[2], c.r[29].w[0] + 64u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    vu::move(c.vu0, 1u, 4u, 0u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[28].w[0] - 29292u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D838u); st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001E(c, 201u, depth + 1u); else { c.pc = 0x0017BBC0u; return; } if (c.pc != 0x0023D838u) [[unlikely]] return; }
L_0023D838:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[3].w[0]);
    set32(c.r[3], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20352u), 0u);
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_0023D9E0; } }
    c.r[3].d[0] = c.r[17].d[0] << 56;
    c.budget -= 1;
L_0023D878:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 106u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] + 1u);  if (t) { goto L_0023D9D4; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 100u));
    set32(c.r[2], 0u + 146u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[18], c.r[0], c.r[0]);  if (t) { goto L_0023D8A0; } }
    set32(c.r[18], 0u + 1u);
    c.budget -= 1;
L_0023D8A0:
    c.r[2].d[0] = c.r[17].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 100u));
    set32(c.r[2], 0u + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] << 56;  if (t) { goto L_0023D8C4; } }
    set32(c.r[18], 0u + 2u);
    c.r[4].d[0] = c.r[17].d[0] << 56;
    c.budget -= 2;
L_0023D8C4:
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 64u));
    set32(c.r[5], c.r[28].w[0] - 29292u);
    c.f[1] = 0u;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = fp::max(c.f[1], c.f[0]);
    c.f[1] = c.r[8].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[8], c.f[0]);
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[2].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023D920; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D914u); set32(c.r[4], ld32((c.r[3].w[0] + 36u)));  if (depth < kMaxDepth) unit_000E(c, 277u, depth + 1u); else { c.pc = 0x0013B2D0u; return; } if (c.pc != 0x0023D914u) [[unlikely]] return; }
L_0023D914:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20372u), c.f[0]);  if (t) { goto L_0023D928; } }
L_0023D920:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20372u), 0u);
    c.budget -= 2;
L_0023D928:
    c.r[4].d[0] = c.r[17].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[2], c.r[4].w[0] << 3);
    set32(c.r[5], c.r[16].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[3].d[0] = c.r[18].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[4].w[0] + c.r[16].w[0]);
    st32((c.r[1].w[0] - 20416u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[6], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[3].w[0] - 12624u);
    set32(c.r[5], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[3].w[0] - 12576u);
    st32((c.r[1].w[0] - 20412u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20384u), c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20388u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[3].w[0] - 12528u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 100u));
    set32(c.r[2], 0u + 16u);
    c.budget -= 34;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0023D9C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D9BCu); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 51u, depth + 1u); else { c.pc = 0x001712A0u; return; } if (c.pc != 0x0023D9BCu) [[unlikely]] return; }
L_0023D9BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023D9D0; } }
L_0023D9C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023D9D0u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 64u, depth + 1u); else { c.pc = 0x00171620u; return; } if (c.pc != 0x0023D9D0u) [[unlikely]] return; }
L_0023D9D0:
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0023D9D4:
    c.r[17].d[0] = c.r[3].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 3;
L_0023D9E0:
    c.r[3].d[0] = c.r[17].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[17].d[0] << 56;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023D878u | kUnwind; return; } goto L_0023D878; } }
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0023DA10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023DA28u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x0023DA28u) [[unlikely]] return; }
L_0023DA28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (t) { goto L_0023DAA4; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[7], c.r[2].w[0] - 12496u);
    set32(c.r[5], 0u + 19u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[3], 0u + 43u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[5], c.r[2].w[0] - 9552u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[3], c.r[2].w[0] - 9072u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 256u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] - 16336u);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[6], 0u + 2u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 256u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023DAA4u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x0023DAA4u) [[unlikely]] return; }
L_0023DAA4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0023DAB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] - 12464u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0023C000u < 16384u) { entry = entries_004F[(t - 0x0023C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0023DAD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] - 12448u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[4].w[0] + 48u), c.f[3]);
    st32((c.r[4].w[0] + 52u), c.f[2]);
    st32((c.r[4].w[0] + 56u), c.f[1]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023DB30u); st32((c.r[4].w[0] + 60u), c.f[0]);  if (depth < kMaxDepth) unit_004F(c, 185u, depth + 1u); else { c.pc = 0x0023DE00u; return; } if (c.pc != 0x0023DB30u) [[unlikely]] return; }
L_0023DB30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023DB38u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x0023DB38u) [[unlikely]] return; }
L_0023DB38:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 369u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023DB6C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.f[12] = ld32((c.r[1].w[0] - 21936u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.f[13] = ld32((c.r[1].w[0] - 21932u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023DB64u); c.f[14] = ld32((c.r[1].w[0] - 21928u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0023DB64u) [[unlikely]] return; }
L_0023DB64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[16].w[0] + 192u);  if (t) { goto L_0023DB80; } }
L_0023DB6C:
    c.f[13] = ld32((c.r[3].w[0] + 596u));
    c.f[14] = ld32((c.r[3].w[0] + 600u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023DB7Cu); c.f[12] = ld32((c.r[3].w[0] + 592u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0023DB7Cu) [[unlikely]] return; }
L_0023DB7C:
    set32(c.r[4], c.r[16].w[0] + 192u);
    c.budget -= 1;
L_0023DB80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023DB88u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0023DB88u) [[unlikely]] return; }
L_0023DB88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023DB90u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_004F(c, 169u, depth + 1u); else { c.pc = 0x0023DBA0u; return; } if (c.pc != 0x0023DB90u) [[unlikely]] return; }
L_0023DB90:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0023DBA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[1].d[0] = c.r[2].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0023DC48; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { mmi::paddub(c.r[4], c.r[16], c.r[0]);  goto L_0023DC4C; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023DBE8u); st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004F(c, 191u, depth + 1u); else { c.pc = 0x0023DEE0u; return; } if (c.pc != 0x0023DBE8u) [[unlikely]] return; }
L_0023DBE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[17], c.r[2], c.r[0]);  if (t) { goto L_0023DC48; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 64u);  if (t) { goto L_0023DC10; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0023DC18; } }
    set32(c.r[2], 0u + 64u);
    c.budget -= 1;
L_0023DC10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0023DC28; } }
L_0023DC18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023DC20u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0023DC20u) [[unlikely]] return; }
L_0023DC20:
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0023DC28:
    set32(c.r[2], 0u + 4u);
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023DC3Cu); set32(c.r[5], c.r[17].w[0] + 2u);  if (depth < kMaxDepth) unit_004F(c, 198u, depth + 1u); else { c.pc = 0x0023E040u; return; } if (c.pc != 0x0023DC3Cu) [[unlikely]] return; }
L_0023DC3C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0023DC48:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0023DC4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023DC54u);  if (depth < kMaxDepth) unit_004F(c, 188u, depth + 1u); else { c.pc = 0x0023DE50u; return; } if (c.pc != 0x0023DC54u) [[unlikely]] return; }
L_0023DC54:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0023DC70:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0023DC80:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_0023DC90:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20348u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00800000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 20000u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[3], c.r[29].w[0] + 64u);
    set32(c.r[17], c.r[18].w[0] + 320u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20400u), c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[6], c.r[3].w[0] - 12288u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[28].w[0] - 29288u);
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[1].w[0] - 20388u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    set32(c.r[4], c.r[3].w[0] - 12368u);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    st32((c.r[1].w[0] - 20384u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[5].w[0]);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20352u), 0u);
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 42;
L_0023DD38:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0023DDDC; }
    set32(c.r[2], 0u + 64u);
    c.r[4].d[0] = c.r[3].d[0] & 96ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[3].d[0] = c.r[3].d[0] & 31ull;  if (t) { goto L_0023DD5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 18u);  if (t) { goto L_0023DD70; } }
L_0023DD5C:
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0023DD70; } }
    set32(c.r[3], c.r[3].w[0] + 12u);
    c.budget -= 2;
L_0023DD70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] - 12208u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[18].w[0] + 192u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023DD90u); st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0023DD90u) [[unlikely]] return; }
L_0023DD90:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023DDA0u); c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0023DDA0u) [[unlikely]] return; }
L_0023DDA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023DDA8u); c.r[4].d[0] = ld16((c.r[17].w[0] + 2u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x0023DDA8u) [[unlikely]] return; }
L_0023DDA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023DDB0u); c.r[4].d[0] = ld16((c.r[17].w[0] + 6u));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x0023DDB0u) [[unlikely]] return; }
L_0023DDB0:
    c.f[13] = ld32((c.r[18].w[0] + 52u));
    c.f[14] = ld32((c.r[18].w[0] + 56u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023DDC0u); c.f[12] = ld32((c.r[18].w[0] + 48u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0023DDC0u) [[unlikely]] return; }
L_0023DDC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023DDC8u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0023DDC8u) [[unlikely]] return; }
L_0023DDC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023DDD4u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 77u, depth + 1u); else { c.pc = 0x001719F0u; return; } if (c.pc != 0x0023DDD4u) [[unlikely]] return; }
L_0023DDD4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_0023DDDC:
    c.r[3].d[0] = c.r[16].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023DD38u | kUnwind; return; } goto L_0023DD38; } }
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0023DE00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[4].w[0] + 320u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 6;
L_0023DE18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023DE20u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_004F(c, 193u, depth + 1u); else { c.pc = 0x0023DF30u; return; } if (c.pc != 0x0023DE20u) [[unlikely]] return; }
L_0023DE20:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 16ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 8u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023DE18u | kUnwind; return; } goto L_0023DE18; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0023DE50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    c.r[1].d[0] = c.r[16].sd[0] < 16ll ? 1ull : 0ull;
    set32(c.r[3], c.r[19].w[0] + 320u);
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_0023DEB8; } }
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[18], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_0023DE88:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0023DEAC; }
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023DEA0u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_004F(c, 195u, depth + 1u); else { c.pc = 0x0023DF70u; return; } if (c.pc != 0x0023DEA0u) [[unlikely]] return; }
L_0023DEA0:
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 3;
L_0023DEAC:
    c.r[2].d[0] = c.r[16].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023DE88u | kUnwind; return; } goto L_0023DE88; } }
L_0023DEB8:
    mmi::paddub(c.r[2], c.r[17], c.r[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0023DEE0:
    set32(c.r[5], c.r[4].w[0] + 320u);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_0023DF10; } }
L_0023DEF0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    if (c.r[3].sd[0] >= 0) { set32(c.r[5], c.r[5].w[0] + 8u);  goto L_0023DF0C; }
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[2], c.r[5], c.r[0]);
    set32(c.r[5], c.r[5].w[0] + 8u);
    c.budget -= 4;
L_0023DF0C:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0023DF10:
    c.r[1].d[0] = c.r[4].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023DF28; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023DEF0u | kUnwind; return; } goto L_0023DEF0; } }
    c.budget -= 1;
L_0023DF28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0023DF30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 8u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023DF4Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0023DF4Cu) [[unlikely]] return; }
L_0023DF4C:
    set32(c.r[3], 0u - 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0023DF70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[17], c.r[5], c.r[0]);  if (t) { goto L_0023E020; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[2], 0u + 64u);
    set32(c.r[4], 0u + 12u);
    c.r[16].d[0] = c.r[3].d[0] & 96ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[19].d[0] = c.r[3].d[0] & 31ull;  if (t) { goto L_0023DFC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[4].w[0] - 1u);  if (t) { goto L_0023DFDC; } }
L_0023DFC8:
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0023DFD8; } }
    set32(c.r[4], 0u + 6u);
    c.budget -= 1;
L_0023DFD8:
    set32(c.r[2], c.r[4].w[0] - 1u);
    c.budget -= 1;
L_0023DFDC:
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[3], 0u + 4u);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0023E018; } }
    set32(c.r[2], 0u + 64u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0023E008; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E004u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0023E004u) [[unlikely]] return; }
L_0023E004:
    c.r[16].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 1;
L_0023E008:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[5], c.r[17].w[0] + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E018u); mmi::paddub(c.r[19], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_004F(c, 198u, depth + 1u); else { c.pc = 0x0023E040u; return; } if (c.pc != 0x0023E018u) [[unlikely]] return; }
L_0023E018:
    c.r[2].d[0] = c.r[16].d[0] | c.r[19].d[0];
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0023E020:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0023E040:
    c.r[2].d[0] = c.r[4].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], c.r[2].w[0] - 11968u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E074u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0023E074u) [[unlikely]] return; }
L_0023E074:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E07Cu);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0023E07Cu) [[unlikely]] return; }
L_0023E07C:
    set32(c.r[3], c.r[2].w[0] << 8);
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0023E0A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[5], 0u + 45u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E0C4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_004F(c, 228u, depth + 1u); else { c.pc = 0x0023E640u; return; } if (c.pc != 0x0023E0C4u) [[unlikely]] return; }
L_0023E0C4:
    set32(c.r[4], 0u + 70u);
    c.r[18].d[0] = c.r[2].d[0] << 48;
    set32(c.r[5], 0u + 290u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E0D8u); c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);  if (depth < kMaxDepth) unit_004F(c, 228u, depth + 1u); else { c.pc = 0x0023E640u; return; } if (c.pc != 0x0023E0D8u) [[unlikely]] return; }
L_0023E0D8:
    c.r[3].d[0] = c.r[18].d[0] << 48;
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (t) { goto L_0023E11C; } }
    c.r[1].d[0] = c.r[3].sd[0] < 18ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;  if (t) { goto L_0023E120; } }
    c.r[6].d[0] = c.r[16].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[2].d[0] = c.r[6].sd[0] < 170ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023E11C; } }
    c.r[1].d[0] = c.r[6].sd[0] < 186ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] + 20u);  if (t) { goto L_0023E1C8; } }
L_0023E11C:
    c.r[1].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 1;
L_0023E120:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;  if (t) { goto L_0023E158; } }
    c.r[1].d[0] = c.r[3].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023E154; } }
    c.r[6].d[0] = c.r[16].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[2].d[0] = c.r[6].sd[0] < 260ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023E154; } }
    c.r[1].d[0] = c.r[6].sd[0] < 276ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0023E1C4; } }
L_0023E154:
    c.r[1].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 1;
L_0023E158:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;  if (t) { goto L_0023E190; } }
    c.r[1].d[0] = c.r[3].sd[0] < 18ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023E18C; } }
    c.r[6].d[0] = c.r[16].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[2].d[0] = c.r[6].sd[0] < 180ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023E18C; } }
    c.r[1].d[0] = c.r[6].sd[0] < 199ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0023E1C4; } }
L_0023E18C:
    c.r[1].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 1;
L_0023E190:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0023E1D0; } }
    c.r[1].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023E1D0; } }
    c.r[3].d[0] = c.r[16].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[3].sd[0] < 75ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023E1D0; } }
    c.r[1].d[0] = c.r[3].sd[0] < 101ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023E1D0; } }
L_0023E1C4:
    set32(c.r[2], c.r[18].w[0] + 20u);
    c.budget -= 1;
L_0023E1C8:
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.budget -= 2;
L_0023E1D0:
    c.f[0] = c.r[18].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[1] = c.r[2].w[0];
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E208u);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0023E208u) [[unlikely]] return; }
L_0023E208:
    c.f[0] = c.r[16].w[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E244u);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0023E244u) [[unlikely]] return; }
L_0023E244:
    st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0023E260:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[4], 0u - 10u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E284u); set32(c.r[5], 0u + 45u);  if (depth < kMaxDepth) unit_004F(c, 228u, depth + 1u); else { c.pc = 0x0023E640u; return; } if (c.pc != 0x0023E284u) [[unlikely]] return; }
L_0023E284:
    set32(c.r[5], 0u + 360u);
    c.r[17].d[0] = c.r[2].d[0] << 48;
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E298u); c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (depth < kMaxDepth) unit_004F(c, 228u, depth + 1u); else { c.pc = 0x0023E640u; return; } if (c.pc != 0x0023E298u) [[unlikely]] return; }
L_0023E298:
    c.r[3].d[0] = c.r[17].d[0] << 48;
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[3].sd[0] < -3ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);  if (t) { goto L_0023E2E8; } }
    c.r[1].d[0] = c.r[3].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023E2E8; } }
    c.r[3].d[0] = c.r[18].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[3].sd[0] < 165ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023E2E8; } }
    c.r[1].d[0] = c.r[3].sd[0] < 196ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023E2E8; } }
    set32(c.r[2], c.r[18].w[0] + 180u);
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.budget -= 3;
L_0023E2E8:
    c.f[0] = c.r[17].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[1] = c.r[2].w[0];
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E320u);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0023E320u) [[unlikely]] return; }
L_0023E320:
    c.f[0] = c.r[18].w[0];
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E35Cu);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0023E35Cu) [[unlikely]] return; }
L_0023E35C:
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0023E380:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[4], 0u - 15u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E3A4u); set32(c.r[5], 0u + 35u);  if (depth < kMaxDepth) unit_004F(c, 228u, depth + 1u); else { c.pc = 0x0023E640u; return; } if (c.pc != 0x0023E3A4u) [[unlikely]] return; }
L_0023E3A4:
    set32(c.r[4], 0u + 140u);
    c.r[17].d[0] = c.r[2].d[0] << 48;
    set32(c.r[5], 0u + 220u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E3B8u); c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (depth < kMaxDepth) unit_004F(c, 228u, depth + 1u); else { c.pc = 0x0023E640u; return; } if (c.pc != 0x0023E3B8u) [[unlikely]] return; }
L_0023E3B8:
    c.r[3].d[0] = c.r[17].d[0] << 48;
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[3].sd[0] < -1ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);  if (t) { goto L_0023E408; } }
    c.r[1].d[0] = c.r[3].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023E408; } }
    c.r[3].d[0] = c.r[18].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[3].sd[0] < 165ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023E408; } }
    c.r[1].d[0] = c.r[3].sd[0] < 181ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023E408; } }
    set32(c.r[2], c.r[18].w[0] + 180u);
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.budget -= 3;
L_0023E408:
    c.f[0] = c.r[17].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[1] = c.r[2].w[0];
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E440u);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0023E440u) [[unlikely]] return; }
L_0023E440:
    c.f[0] = c.r[18].w[0];
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E47Cu);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0023E47Cu) [[unlikely]] return; }
L_0023E47C:
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0023E4A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[4], 0u - 90u);
    set32(c.r[5], 0u + 90u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E4C0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_004F(c, 228u, depth + 1u); else { c.pc = 0x0023E640u; return; } if (c.pc != 0x0023E4C0u) [[unlikely]] return; }
L_0023E4C0:
    set32(c.r[5], 0u + 360u);
    c.r[16].d[0] = c.r[2].d[0] << 48;
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E4D4u); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_004F(c, 228u, depth + 1u); else { c.pc = 0x0023E640u; return; } if (c.pc != 0x0023E4D4u) [[unlikely]] return; }
L_0023E4D4:
    c.f[0] = c.r[16].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.f[1] = c.r[3].w[0];
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    fpu_div(c, 12u, c.f[0], c.f[2]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E50Cu);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0023E50Cu) [[unlikely]] return; }
L_0023E50C:
    c.f[0] = c.r[16].w[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E548u);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0023E548u) [[unlikely]] return; }
L_0023E548:
    st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0023E560:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[4], 0u - 90u);
    set32(c.r[5], 0u + 90u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E580u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_004F(c, 228u, depth + 1u); else { c.pc = 0x0023E640u; return; } if (c.pc != 0x0023E580u) [[unlikely]] return; }
L_0023E580:
    set32(c.r[5], 0u + 360u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E58Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_004F(c, 228u, depth + 1u); else { c.pc = 0x0023E640u; return; } if (c.pc != 0x0023E58Cu) [[unlikely]] return; }
L_0023E58C:
    set32(c.r[4], 0u - 90u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E598u); set32(c.r[5], 0u + 90u);  if (depth < kMaxDepth) unit_004F(c, 228u, depth + 1u); else { c.pc = 0x0023E640u; return; } if (c.pc != 0x0023E598u) [[unlikely]] return; }
L_0023E598:
    set32(c.r[5], 0u + 360u);
    c.r[16].d[0] = c.r[2].d[0] << 48;
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E5ACu); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_004F(c, 228u, depth + 1u); else { c.pc = 0x0023E640u; return; } if (c.pc != 0x0023E5ACu) [[unlikely]] return; }
L_0023E5AC:
    c.f[0] = c.r[16].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.f[1] = c.r[3].w[0];
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    fpu_div(c, 12u, c.f[0], c.f[2]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E5E4u);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0023E5E4u) [[unlikely]] return; }
L_0023E5E4:
    c.f[0] = c.r[16].w[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E620u);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0023E620u) [[unlikely]] return; }
L_0023E620:
    st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0023E640:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] << 48;
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E660u); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0023E660u) [[unlikely]] return; }
L_0023E660:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0023E678; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0023E690; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_0023E678:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_0023E690:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.f[2] = fp::mul(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E6C4u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0023E6C4u) [[unlikely]] return; }
L_0023E6C4:
    c.r[3].d[0] = c.r[17].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0023E700:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E72Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x0023E72Cu) [[unlikely]] return; }
L_0023E72C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (t) { goto L_0023E73C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0023E7C0; } }
L_0023E73C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[4], 0u + 19u);
    set32(c.r[3], 0u + 44u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[4], c.r[2].w[0] - 4992u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[3], c.r[2].w[0] - 6176u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[16].w[0] + 168u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], 0u + 2u);
    c.budget -= 19;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; st32((c.r[16].w[0] + 28u), c.r[18].w[0]);  if (t) { goto L_0023E7A4; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 176u)));
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E79Cu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x0023E79Cu) [[unlikely]] return; }
L_0023E79C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_0023E7C0; } }
L_0023E7A4:
    set32(c.r[5], ld32((c.r[18].w[0] + 176u)));
    c.r[2].d[0] = c.r[17].d[0] ^ 1ull;
    set32(c.r[7], c.r[2].w[0] + 1u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E7BCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x0023E7BCu) [[unlikely]] return; }
L_0023E7BC:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 1;
L_0023E7C0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0023E7E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] - 11856u);
    set32(c.r[5], c.r[4].w[0] + 320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0023C000u < 16384u) { entry = entries_004F[(t - 0x0023C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0023E810:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[18], ld32((c.r[4].w[0] + 28u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[5].w[0] + 92u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E858u); st32((c.r[5].w[0] + 96u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x0023E858u) [[unlikely]] return; }
L_0023E858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E860u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0023E860u) [[unlikely]] return; }
L_0023E860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E868u); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0023E868u) [[unlikely]] return; }
L_0023E868:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E870u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x0023E870u) [[unlikely]] return; }
L_0023E870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E878u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x0023E878u) [[unlikely]] return; }
L_0023E878:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E880u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0023E880u) [[unlikely]] return; }
L_0023E880:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] - 11904u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E89Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x0023E89Cu) [[unlikely]] return; }
L_0023E89C:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E8A8u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x0023E8A8u) [[unlikely]] return; }
L_0023E8A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E8B0u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0023E8B0u) [[unlikely]] return; }
L_0023E8B0:
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E8BCu); c.r[18].d[0] = c.r[2].d[0] & 1023ull;  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0023E8BCu) [[unlikely]] return; }
L_0023E8BC:
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E8C8u); c.r[19].d[0] = c.r[2].d[0] & 4080ull;  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0023E8C8u) [[unlikely]] return; }
L_0023E8C8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_0023E8E0; } }
    set32(c.r[18], 0u - c.r[18].w[0]);
    set32(c.r[19], 0u - c.r[19].w[0]);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
L_0023E8E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E8E8u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x0023E8E8u) [[unlikely]] return; }
L_0023E8E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E8F0u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x0023E8F0u) [[unlikely]] return; }
L_0023E8F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E8F8u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0023E8F8u) [[unlikely]] return; }
L_0023E8F8:
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] - 11936u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[2].w[0]));
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E920u); set32(c.r[5], c.r[2].w[0] - 11920u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x0023E920u) [[unlikely]] return; }
L_0023E920:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E92Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x0023E92Cu) [[unlikely]] return; }
L_0023E92C:
    st32((c.r[17].w[0] + 64u), 0u);
    st32((c.r[17].w[0] + 72u), 0u);
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F770000u);
    c.r[2].d[0] = c.r[2].d[0] | 2621ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E95Cu); st32((c.r[17].w[0] + 68u), c.f[0]);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0023E95Cu) [[unlikely]] return; }
L_0023E95C:
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[2].d[0] = c.r[2].d[0] & 1008ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E96Cu); st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0023E96Cu) [[unlikely]] return; }
L_0023E96C:
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[2].d[0] = c.r[2].d[0] & 1008ull;
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E99Cu); st32((c.r[16].w[0] + 80u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0023E99Cu) [[unlikely]] return; }
L_0023E99C:
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = c.r[2].d[0] & 2ull;  goto L_0023E9C4; }
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[3], 0u - c.r[3].w[0]);
    st32((c.r[16].w[0] + 64u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], 0u - c.r[3].w[0]);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 7;
L_0023E9C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023E9E4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 6;
L_0023E9E4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_0023EA24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023E9F8u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0023E9F8u) [[unlikely]] return; }
L_0023E9F8:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0023EA20; } }
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EA14u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 21u, depth + 1u); else { c.pc = 0x0013CA20u; return; } if (c.pc != 0x0023EA14u) [[unlikely]] return; }
L_0023EA14:
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EA20u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_004C(c, 283u, depth + 1u); else { c.pc = 0x002335D0u; return; } if (c.pc != 0x0023EA20u) [[unlikely]] return; }
L_0023EA20:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_0023EA24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EA2Cu); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_004F(c, 260u, depth + 1u); else { c.pc = 0x0023EA50u; return; } if (c.pc != 0x0023EA2Cu) [[unlikely]] return; }
L_0023EA2C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0023EA50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EA70u); mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x0023EA70u) [[unlikely]] return; }
L_0023EA70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0023EA8C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_0023EA90; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_0023EA8C:
    st32((c.r[16].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 1;
L_0023EA90:
    c.f[1] = ld32((c.r[16].w[0] + 96u));
    c.f[0] = ld32((c.r[16].w[0] + 92u));
    c.f[3] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 92u), c.f[0]);  if (t) { goto L_0023EAC0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0023EC40; } }
L_0023EAC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[2] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0023EB00; } }
    c.f[1] = ld32((c.r[16].w[0] + 96u));
    c.f[0] = ld32((c.r[16].w[0] + 88u));
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 88u), c.f[0]);  if (t) { goto L_0023EB00; } }
    st32((c.r[16].w[0] + 88u), 0u);
    c.budget -= 1;
L_0023EB00:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] | 3584ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 256u)));
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023EB44; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EB3Cu); set32(c.r[5], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x0023EB3Cu) [[unlikely]] return; }
L_0023EB3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 48u);  if (t) { goto L_0023EB58; } }
L_0023EB44:
    c.f[12] = ld32((c.r[16].w[0] + 96u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EB54u); set32(c.r[5], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x0023EB54u) [[unlikely]] return; }
L_0023EB54:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 1;
L_0023EB58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EB60u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x0023EB60u) [[unlikely]] return; }
L_0023EB60:
    c.f[12] = ld32((c.r[16].w[0] + 96u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EB70u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x0023EB70u) [[unlikely]] return; }
L_0023EB70:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EB7Cu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x0023EB7Cu) [[unlikely]] return; }
L_0023EB7C:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EBA4u); st32((c.r[16].w[0] + 68u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x0023EBA4u) [[unlikely]] return; }
L_0023EBA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EBACu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x0023EBACu) [[unlikely]] return; }
L_0023EBAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EBB4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x0023EBB4u) [[unlikely]] return; }
L_0023EBB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EBBCu); set32(c.r[4], ld32((c.r[16].w[0] + 68u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0023EBBCu) [[unlikely]] return; }
L_0023EBBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EBC4u); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x0023EBC4u) [[unlikely]] return; }
L_0023EBC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EBCCu); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x0023EBCCu) [[unlikely]] return; }
L_0023EBCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EBD4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0023EBD4u) [[unlikely]] return; }
L_0023EBD4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[2].w[0] - 11904u);
    set32(c.r[2], c.r[29].w[0] + 48u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 48u));
    c.f[1] = ld32((c.r[29].w[0] + 52u));
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    c.f[12] = c.f[2] ^ fp::kSign;
    c.f[13] = c.f[1] ^ fp::kSign;
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EC28u); c.f[14] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0023EC28u) [[unlikely]] return; }
L_0023EC28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EC30u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0023EC30u) [[unlikely]] return; }
L_0023EC30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EC38u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x0023EC38u) [[unlikely]] return; }
L_0023EC38:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0023EC40:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0023EC60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0023EC70:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_0023EC80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EC98u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x0023EC98u) [[unlikely]] return; }
L_0023EC98:
    set32(c.r[5], ld32((c.r[16].w[0] + 188u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023ECA4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 92u, depth + 1u); else { c.pc = 0x0016DB00u; return; } if (c.pc != 0x0023ECA4u) [[unlikely]] return; }
L_0023ECA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023ECACu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x0023ECACu) [[unlikely]] return; }
L_0023ECAC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0023ECC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023ECF0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x0023ECF0u) [[unlikely]] return; }
L_0023ECF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023ED00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0023ED5C; } }
L_0023ED00:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 45u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[18].w[0]));
    set32(c.r[3], c.r[3].w[0] - 3872u);
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[3], c.r[3].w[0] - 4736u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 264u)));
    st32((c.r[2].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 184u)));
    st32((c.r[2].w[0] + 184u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 184u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[2].w[0] + 188u), c.r[3].w[0]);
    c.budget -= 23;
L_0023ED5C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0023ED80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] - 11584u);
    set32(c.r[5], c.r[4].w[0] + 320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0023C000u < 16384u) { entry = entries_004F[(t - 0x0023C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0023EDB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 112u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 116u), 0u);
    st32((c.r[4].w[0] + 120u), 0u);
    st32((c.r[4].w[0] + 160u), 0u);
    set32(c.r[6], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 13;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_0023EE04; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0023EE00; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0023EE0C; } }
L_0023EE00:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_0023EE04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0023EE14; } }
L_0023EE0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EE14u);  if (depth < kMaxDepth) unit_004F(c, 288u, depth + 1u); else { c.pc = 0x0023EE20u; return; } if (c.pc != 0x0023EE14u) [[unlikely]] return; }
L_0023EE14:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0023EE20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_0023EE58; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_0023EE5C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0023EE64; } }
L_0023EE58:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_0023EE5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0023EEE4; } }
L_0023EE64:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] - 11568u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EE84u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0023EE84u) [[unlikely]] return; }
L_0023EE84:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[4], c.r[16].w[0] + 192u);
    set32(c.r[2], c.r[2].w[0] - 11840u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EEA0u); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x0023EEA0u) [[unlikely]] return; }
L_0023EEA0:
    c.f[13] = ld32((c.r[16].w[0] + 4u));
    c.f[14] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EEB0u); c.f[12] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0023EEB0u) [[unlikely]] return; }
L_0023EEB0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EEBCu); set32(c.r[4], c.r[2].w[0] << 12);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0023EEBCu) [[unlikely]] return; }
L_0023EEBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EEC4u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0023EEC4u) [[unlikely]] return; }
L_0023EEC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EECCu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x0023EECCu) [[unlikely]] return; }
L_0023EECC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023EEE4; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0023EEE4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0023EF00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 160u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3BCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3A4C0000u);
    c.facc = fp::mul(c.f[0], c.f[1]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.r[6].d[0] = c.r[3].d[0] | 52429ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBA660000u);
    c.r[5].d[0] = c.r[3].d[0] | 26214ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3B4C0000u);
    c.f[0] = c.r[6].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[1]));
    st32((c.r[4].w[0] + 116u), c.f[0]);
    c.f[5] = ld32((c.r[4].w[0] + 160u));
    c.f[2] = c.r[3].w[0];
    c.f[3] = c.r[5].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[4] = fp::mul(c.f[5], c.f[5]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.facc = fp::mul(c.f[3], c.f[4]);
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[2], c.f[5]));
    st32((c.r[4].w[0] + 120u), c.f[2]);
    c.f[2] = c.f[2] ^ fp::kSign;
    st32((c.r[4].w[0] + 120u), c.f[2]);
    c.f[2] = ld32((c.r[4].w[0] + 160u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 39;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 160u), c.f[1]);  if (t) { goto L_0023EFD4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023EFC8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 264u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 8386u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EFC8u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0026(c, 35u, depth + 1u); else { c.pc = 0x00198550u; return; } if (c.pc != 0x0023EFC8u) [[unlikely]] return; }
L_0023EFC8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023EFD4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0050(c, 402u, depth + 1u); else { c.pc = 0x00242F90u; return; } if (c.pc != 0x0023EFD4u) [[unlikely]] return; }
L_0023EFD4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0023EFF0:
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], 0u + 4u);
    set32(c.r[5], ld32((c.r[5].w[0] + 352u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0023F018; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42000000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 5;
L_0023F018:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0023F020:
    c.f[1] = ld32((c.r[4].w[0] + 160u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3BCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3A4C0000u);
    c.facc = fp::mul(c.f[0], c.f[1]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.r[6].d[0] = c.r[3].d[0] | 52429ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBA660000u);
    c.r[5].d[0] = c.r[3].d[0] | 26214ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3B4C0000u);
    c.f[0] = c.r[6].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[1]));
    st32((c.r[4].w[0] + 116u), c.f[0]);
    c.f[5] = ld32((c.r[4].w[0] + 160u));
    c.f[2] = c.r[3].w[0];
    c.f[3] = c.r[5].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[4] = fp::mul(c.f[5], c.f[5]);
    c.facc = fp::mul(c.f[3], c.f[4]);
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[2], c.f[5]));
    st32((c.r[4].w[0] + 120u), c.f[2]);
    c.f[2] = c.f[2] ^ fp::kSign;
    st32((c.r[4].w[0] + 120u), c.f[2]);
    c.f[2] = ld32((c.r[4].w[0] + 160u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 33;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 160u), c.f[1]);  if (t) { goto L_0023F0B0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0023F0B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0023F0C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0023F0D0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_0023F0E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F0F8u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x0023F0F8u) [[unlikely]] return; }
L_0023F0F8:
    c.f[13] = ld32((c.r[16].w[0] + 116u));
    c.f[14] = ld32((c.r[16].w[0] + 120u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F108u); c.f[12] = ld32((c.r[16].w[0] + 112u));  if (depth < kMaxDepth) unit_000F(c, 18u, depth + 1u); else { c.pc = 0x0013C8A0u; return; } if (c.pc != 0x0023F108u) [[unlikely]] return; }
L_0023F108:
    c.f[12] = ld32((c.r[16].w[0] + 112u));
    c.f[1] = ld32((c.r[16].w[0] + 116u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = c.f[1];  if (t) { goto L_0023F12C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[12];  if (t) { goto L_0023F12C; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_0023F12C:
    c.f[2] = ld32((c.r[16].w[0] + 120u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_0023F144; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0023F144:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[12] = c.f[2];  goto L_0023F174; }
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[1]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[12] = c.f[1];  goto L_0023F168; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023F168; } }
    c.f[12] = c.f[1];
    c.budget -= 1;
L_0023F168:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023F174; } }
    c.f[12] = c.f[2];
    c.budget -= 1;
L_0023F174:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F17Cu);  if (depth < kMaxDepth) unit_000F(c, 48u, depth + 1u); else { c.pc = 0x0013D010u; return; } if (c.pc != 0x0023F17Cu) [[unlikely]] return; }
L_0023F17C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F184u); set32(c.r[4], ld32((c.r[16].w[0] + 188u)));  if (depth < kMaxDepth) unit_000F(c, 36u, depth + 1u); else { c.pc = 0x0013CD20u; return; } if (c.pc != 0x0023F184u) [[unlikely]] return; }
L_0023F184:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F18Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x0023F18Cu) [[unlikely]] return; }
L_0023F18C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0023F1A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F1C8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x0023F1C8u) [[unlikely]] return; }
L_0023F1C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023F20C; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 46u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] - 1744u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[3], c.r[3].w[0] - 3552u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    c.budget -= 15;
L_0023F20C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0023F220:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 1;
L_0023F224:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.budget -= 1;
L_0023F228:
    set32(c.r[2], c.r[2].w[0] - 10272u);
    c.budget -= 1;
L_0023F22C:
    set32(c.r[5], c.r[4].w[0] + 320u);
    c.budget -= 1;
L_0023F230:
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 1;
L_0023F234:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_0023F238:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_0023F23C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0023C000u < 16384u) { entry = entries_004F[(t - 0x0023C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0023F250:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] - 10256u);
    set32(c.r[5], c.r[4].w[0] + 320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0023C000u < 16384u) { entry = entries_004F[(t - 0x0023C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0023F280:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u - 1u);
    c.budget -= 16;
L_0023F2C0:
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[6].sd[0] < 24ll ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 8u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023F2C0u | kUnwind; return; } goto L_0023F2C0; } }
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 2;
L_0023F2E4:
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F2F8u); mmi::paddub(c.r[8], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_004F(c, 374u, depth + 1u); else { c.pc = 0x0023FDD0u; return; } if (c.pc != 0x0023F2F8u) [[unlikely]] return; }
L_0023F2F8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023F2E4u | kUnwind; return; } goto L_0023F2E4; } }
    set32(c.r[6], 0u + 8u);
    set32(c.r[7], 0u + 2u);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F320u); mmi::paddub(c.r[8], c.r[6], c.r[0]);  if (depth < kMaxDepth) unit_004F(c, 374u, depth + 1u); else { c.pc = 0x0023FDD0u; return; } if (c.pc != 0x0023F320u) [[unlikely]] return; }
L_0023F320:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0023F340:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F360u); mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_004F(c, 377u, depth + 1u); else { c.pc = 0x0023FE80u; return; } if (c.pc != 0x0023F360u) [[unlikely]] return; }
L_0023F360:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023F378; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0023F450; } }
L_0023F378:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], 0u + 5u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 144u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 144u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0023F44C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0023F3E4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0023F3E4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023F448; } }
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 1;
L_0023F3F8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    mmi::paddub(c.r[8], c.r[18], c.r[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F418u); c.r[7].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_004F(c, 374u, depth + 1u); else { c.pc = 0x0023FDD0u; return; } if (c.pc != 0x0023F418u) [[unlikely]] return; }
L_0023F418:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023F3F8u | kUnwind; return; } goto L_0023F3F8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    set32(c.r[7], 0u + 2u);
    set32(c.r[8], 0u + 8u);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[6], c.r[2].w[0] + 8u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F448u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_004F(c, 374u, depth + 1u); else { c.pc = 0x0023FDD0u; return; } if (c.pc != 0x0023F448u) [[unlikely]] return; }
L_0023F448:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0023F44C:
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0023F450:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0023F470:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] - 10240u);
    set32(c.r[5], c.r[4].w[0] + 320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0023C000u < 16384u) { entry = entries_004F[(t - 0x0023C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0023F4A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u - 1u);
    c.budget -= 16;
L_0023F4E0:
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[6].sd[0] < 24ll ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 8u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023F4E0u | kUnwind; return; } goto L_0023F4E0; } }
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    set32(c.r[8], c.r[18].w[0] + 4u);
    c.budget -= 2;
L_0023F504:
    set32(c.r[6], 0u + 4u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F518u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_004F(c, 374u, depth + 1u); else { c.pc = 0x0023FDD0u; return; } if (c.pc != 0x0023F518u) [[unlikely]] return; }
L_0023F518:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[8], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023F504u | kUnwind; return; } goto L_0023F504; } }
    set32(c.r[6], 0u + 10u);
    set32(c.r[7], 0u + 2u);
    set32(c.r[8], 0u + 9u);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F540u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_004F(c, 374u, depth + 1u); else { c.pc = 0x0023FDD0u; return; } if (c.pc != 0x0023F540u) [[unlikely]] return; }
L_0023F540:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0023F560:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F580u); mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_004F(c, 377u, depth + 1u); else { c.pc = 0x0023FE80u; return; } if (c.pc != 0x0023F580u) [[unlikely]] return; }
L_0023F580:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023F598; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0023F674; } }
L_0023F598:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], 0u + 5u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 144u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 144u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0023F670; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0023F604; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0023F604:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023F66C; } }
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 1;
L_0023F618:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[8], c.r[18].w[0] + 4u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    set32(c.r[6], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F63Cu); c.r[7].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_004F(c, 374u, depth + 1u); else { c.pc = 0x0023FDD0u; return; } if (c.pc != 0x0023F63Cu) [[unlikely]] return; }
L_0023F63C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023F618u | kUnwind; return; } goto L_0023F618; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    set32(c.r[7], 0u + 2u);
    set32(c.r[8], 0u + 9u);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[6], c.r[2].w[0] + 10u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F66Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_004F(c, 374u, depth + 1u); else { c.pc = 0x0023FDD0u; return; } if (c.pc != 0x0023F66Cu) [[unlikely]] return; }
L_0023F66C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0023F670:
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0023F674:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0023F690:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] - 10224u);
    set32(c.r[5], c.r[4].w[0] + 320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0023C000u < 16384u) { entry = entries_004F[(t - 0x0023C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0023F6C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u - 1u);
    c.budget -= 13;
L_0023F6F4:
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[6].sd[0] < 24ll ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 8u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023F6F4u | kUnwind; return; } goto L_0023F6F4; } }
    set32(c.r[6], 0u + 12u);
    set32(c.r[7], 0u + 3u);
    set32(c.r[8], 0u + 10u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F728u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_004F(c, 374u, depth + 1u); else { c.pc = 0x0023FDD0u; return; } if (c.pc != 0x0023F728u) [[unlikely]] return; }
L_0023F728:
    set32(c.r[6], 0u + 13u);
    set32(c.r[7], 0u + 4u);
    set32(c.r[8], 0u + 10u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F740u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_004F(c, 374u, depth + 1u); else { c.pc = 0x0023FDD0u; return; } if (c.pc != 0x0023F740u) [[unlikely]] return; }
L_0023F740:
    set32(c.r[6], 0u + 14u);
    set32(c.r[7], 0u + 5u);
    set32(c.r[8], 0u + 10u);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F758u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_004F(c, 374u, depth + 1u); else { c.pc = 0x0023FDD0u; return; } if (c.pc != 0x0023F758u) [[unlikely]] return; }
L_0023F758:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0023F780:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F794u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_004F(c, 377u, depth + 1u); else { c.pc = 0x0023FE80u; return; } if (c.pc != 0x0023F794u) [[unlikely]] return; }
L_0023F794:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023F7AC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0023F7C0; } }
L_0023F7AC:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_0023F7C0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0023F7D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] - 10208u);
    set32(c.r[5], c.r[4].w[0] + 320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0023C000u < 16384u) { entry = entries_004F[(t - 0x0023C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0023F800:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u - 1u);
    c.budget -= 13;
L_0023F834:
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[6].sd[0] < 24ll ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 8u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023F834u | kUnwind; return; } goto L_0023F834; } }
    set32(c.r[6], 0u + 12u);
    set32(c.r[7], 0u + 3u);
    set32(c.r[8], 0u + 11u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F868u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_004F(c, 374u, depth + 1u); else { c.pc = 0x0023FDD0u; return; } if (c.pc != 0x0023F868u) [[unlikely]] return; }
L_0023F868:
    set32(c.r[6], 0u + 13u);
    set32(c.r[7], 0u + 4u);
    set32(c.r[8], 0u + 11u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F880u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_004F(c, 374u, depth + 1u); else { c.pc = 0x0023FDD0u; return; } if (c.pc != 0x0023F880u) [[unlikely]] return; }
L_0023F880:
    set32(c.r[6], 0u + 14u);
    set32(c.r[7], 0u + 5u);
    set32(c.r[8], 0u + 11u);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F898u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_004F(c, 374u, depth + 1u); else { c.pc = 0x0023FDD0u; return; } if (c.pc != 0x0023F898u) [[unlikely]] return; }
L_0023F898:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0023F8C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F8D4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_004F(c, 377u, depth + 1u); else { c.pc = 0x0023FE80u; return; } if (c.pc != 0x0023F8D4u) [[unlikely]] return; }
L_0023F8D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0023F8EC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0023F900; } }
L_0023F8EC:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_0023F900:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0023F910:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0023F920:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_0023F930:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[29].w[0] + 188u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[3].w[0]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[3].w[0]);
    set32(c.r[3], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[16], c.r[18].w[0] + 320u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 18;
L_0023F978:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0023FDA4; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0023F9C0; } }
    set32(c.r[2], c.r[29].w[0] + 160u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 6u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023F9B4u); set32(c.r[4], c.r[2].w[0] << 12);  if (depth < kMaxDepth) unit_000E(c, 277u, depth + 1u); else { c.pc = 0x0013B2D0u; return; } if (c.pc != 0x0023F9B4u) [[unlikely]] return; }
L_0023F9B4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20372u), c.f[0]);  if (t) { goto L_0023F9D8; } }
L_0023F9C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20348u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[29].w[0] + 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20400u), c.r[2].w[0]);
    c.budget -= 6;
L_0023F9D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[6], c.r[2].w[0] - 11552u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[2].w[0] - 11408u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[7].w[0] << 4);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] - 20388u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[8], c.r[2].w[0] - 10528u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[7], c.r[2].w[0] - 10336u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[6].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] - 20384u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[6], c.r[2].w[0] - 19488u);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[2].w[0] - 10312u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[9].w[0] << 3);
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 10976u);
    set32(c.r[8], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    st32((c.r[1].w[0] - 20364u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20352u), 0u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[7], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[8], ld32((c.r[7].w[0])));
    c.budget -= 57;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0023FAC8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0023FAD4; } }
    c.budget -= 1;
L_0023FAC8:
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[7].w[0] + 4u));  if (t) { goto L_0023FB50; } }
L_0023FAD4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7u)));
    c.r[2].d[0] = c.r[8].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023FB40; } }
    set32(c.r[2], ld32((c.r[7].w[0] - 12u)));
    c.f[4] = ld32((c.r[7].w[0] - 8u));
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    c.f[5] = ld32((c.r[7].w[0] - 4u));
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.f[3] = c.r[3].w[0];
    set32(c.r[2], c.r[8].w[0] - c.r[2].w[0]);
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[1] = fp::sub(c.f[1], c.f[4]);
    c.f[0] = fp::sub(c.f[0], c.f[5]);
    c.f[2] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[1] = fp::add(c.f[4], c.f[1]);
    c.budget -= 23;
    { const bool t = 0ull == 0ull; c.f[0] = fp::add(c.f[5], c.f[0]);  if (t) { goto L_0023FB50; } }
L_0023FB40:
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    c.budget -= 4;
L_0023FB50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20416u), c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20412u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[2].w[0] - 10752u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[6].w[0])));
    c.budget -= 16;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_0023FB98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[3] = ld32((c.r[6].w[0] + 4u));  if (t) { goto L_0023FBF8; } }
L_0023FB98:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7u)));
    c.r[2].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0023FBF0; } }
    set32(c.r[2], ld32((c.r[6].w[0] - 8u)));
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.f[2] = ld32((c.r[6].w[0] - 4u));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[3] = fp::sub(c.f[0], c.f[2]);
    set32(c.r[2], c.r[7].w[0] - c.r[2].w[0]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[3] = fp::mul(c.f[3], c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 3u, c.f[3], c.f[0]);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; c.f[3] = fp::add(c.f[3], c.f[2]);  if (t) { goto L_0023FBF8; } }
L_0023FBF0:
    c.f[3] = ld32((c.r[6].w[0] + 4u));
    c.budget -= 2;
L_0023FBF8:
    set32(c.r[2], 0u + 128u);
    st8((c.r[29].w[0] + 190u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 189u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 188u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FC18u); c.f[12] = fp::mul(c.f[0], c.f[3]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x0023FC18u) [[unlikely]] return; }
L_0023FC18:
    st8((c.r[29].w[0] + 191u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[2].w[0] - 10368u);
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FC44u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0023FC44u) [[unlikely]] return; }
L_0023FC44:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0023FCAC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[5], c.r[2].w[0] - 10288u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FC88u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x0023FC88u) [[unlikely]] return; }
L_0023FC88:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] - 10720u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FCA4u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x0023FCA4u) [[unlikely]] return; }
L_0023FCA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[29].w[0] + 144u));  if (t) { goto L_0023FCEC; } }
L_0023FCAC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[2].w[0] - 10720u);
    set32(c.r[2], c.r[29].w[0] + 144u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.f[12] = ld32((c.r[29].w[0] + 144u));
    c.budget -= 16;
L_0023FCEC:
    c.f[14] = ld32((c.r[29].w[0] + 152u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FCF8u); c.f[13] = ld32((c.r[29].w[0] + 148u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0023FCF8u) [[unlikely]] return; }
L_0023FCF8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] - 10448u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FD1Cu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 2u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0023FD1Cu) [[unlikely]] return; }
L_0023FD1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FD24u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x0023FD24u) [[unlikely]] return; }
L_0023FD24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FD2Cu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 4u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x0023FD2Cu) [[unlikely]] return; }
L_0023FD2C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 80u);  if (t) { goto L_0023FD5C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.f[12] = ld32((c.r[1].w[0] - 20416u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FD58u); c.f[13] = ld32((c.r[1].w[0] - 20412u));  if (depth < kMaxDepth) unit_000F(c, 18u, depth + 1u); else { c.pc = 0x0013C8A0u; return; } if (c.pc != 0x0023FD58u) [[unlikely]] return; }
L_0023FD58:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_0023FD5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FD64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0023FD64u) [[unlikely]] return; }
L_0023FD64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FD6Cu); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x0023FD6Cu) [[unlikely]] return; }
L_0023FD6C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0023FD90; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FD88u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 51u, depth + 1u); else { c.pc = 0x001712A0u; return; } if (c.pc != 0x0023FD88u) [[unlikely]] return; }
L_0023FD88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023FDA0; } }
L_0023FD90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FD9Cu); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 77u, depth + 1u); else { c.pc = 0x001719F0u; return; } if (c.pc != 0x0023FD9Cu) [[unlikely]] return; }
L_0023FD9C:
    c.budget -= 1;
L_0023FDA0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0023FDA4:
    c.r[3].d[0] = c.r[17].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023F978u | kUnwind; return; } goto L_0023F978; } }
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0023FDD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[4], 0u - 1u);
    c.budget -= 8;
L_0023FDF0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[4].d[0]) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_0023FE54; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] - 10352u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FE2Cu); st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x0023FE2Cu) [[unlikely]] return; }
L_0023FE2C:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0023FE60; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0023FE54:
    c.r[3].d[0] = c.r[5].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023FDF0u | kUnwind; return; } goto L_0023FDF0; } }
L_0023FE60:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0023FE80:
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[11], c.r[3].w[0] - 10752u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] - 10976u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[8], 0u + 8u);
    c.budget -= 7;
L_0023FE9C:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[3].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_0023FF74; }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 7u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[5].w[0] + 7u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0])));
    set32(c.r[9], c.r[10].w[0] << 1);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[9].w[0]);
    set32(c.r[9], ld32((c.r[7].w[0])));
    c.budget -= 15;
    { const bool t = c.r[9].sd[0] < 0;  if (t) { goto L_0023FF00; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 7u)));
    c.r[1].d[0] = c.r[9].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023FF00; } }
    set32(c.r[7], c.r[10].w[0] + 1u);
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 3;
L_0023FF00:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[11].w[0] + c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0])));
    set32(c.r[9], c.r[10].w[0] << 3);
    set32(c.r[9], c.r[7].w[0] + c.r[9].w[0]);
    set32(c.r[12], ld32((c.r[9].w[0])));
    c.budget -= 10;
    { const bool t = c.r[12].sd[0] < 0;  if (t) { goto L_0023FF48; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 7u)));
    c.r[1].d[0] = c.r[12].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023FF48; } }
    set32(c.r[7], c.r[10].w[0] + 1u);
    set32(c.r[9], c.r[9].w[0] + 8u);
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 4;
L_0023FF48:
    set32(c.r[7], ld32((c.r[9].w[0])));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_0023FF70; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[8].d[0];  if (t) { goto L_0023FF70; } }
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7u)));
    set32(c.r[7], c.r[7].w[0] - 1u);
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 4;
L_0023FF70:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0023FF74:
    c.r[7].d[0] = c.r[6].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023FE9Cu | kUnwind; return; } goto L_0023FE9C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0023FF90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023FFB8u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x0023FFB8u) [[unlikely]] return; }
L_0023FFB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0050(c, 2u, depth); } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 47u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.f[3] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    set32(c.r[4], c.r[3].w[0] + 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[3], c.r[3].w[0] + 512u);
    c.budget -= 16;
    [[clang::musttail]] return unit_0050(c, 1u, depth);
}

}
