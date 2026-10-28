#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_003D[4096] = {
    1, 2, 0, 0, 3, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 6, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 44, 0, 0, 0, 45,
    0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 49, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 53, 0,
    54, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0,
    0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 0, 65, 0, 0, 66,
    0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 69, 0, 70, 0, 0, 71, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0,
    0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 85, 0, 86,
    0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0,
    93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0,
    0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0,
    0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0,
    0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 109, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0,
    0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 124, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0,
    0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 131, 0, 0, 132, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0,
    135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0,
    0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0,
    0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0,
    0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 160, 0, 0, 161, 0, 0,
    0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 169, 0, 0, 170, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0,
    174, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 183, 0, 0, 0, 184, 0,
    0, 0, 185, 0, 186, 0, 187, 0, 0, 188, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0,
    191, 0, 0, 0, 192, 0, 193, 0, 194, 0, 0, 0, 195, 0, 196, 0, 0, 0, 197, 0, 198, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 213, 0, 0, 0, 0, 214,
    0, 0, 0, 215, 0, 0, 0, 216, 0, 217, 0, 218, 0, 0, 0, 219, 0, 220, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0,
    223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0,
    0, 0, 0, 229, 0, 0, 230, 0, 0, 231, 0, 0, 0, 232, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 236, 0, 237, 0, 0, 238, 0, 239, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242,
    0, 243, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0,
    0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 260, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 261, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 267, 0, 268, 0, 269, 0, 270, 0, 0, 271, 0, 0,
    272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 276, 0, 0, 0, 0,
    277, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 281, 0, 0, 0, 0, 0, 0, 0,
    0, 282, 0, 283, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 287, 0, 0, 288, 0, 289, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 292, 0, 293, 0, 294, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 295, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 307, 0, 308, 0, 309, 0, 310, 0, 311, 0, 312, 0, 0, 0, 313,
    0, 314, 0, 315, 0, 316, 0, 317, 0, 318, 0, 0, 0, 0, 0, 0, 0, 319, 0, 320, 0, 321, 0, 322, 0, 323, 0, 0, 324, 0, 325, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 327, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 329, 0, 0, 330, 0, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 334, 0, 335, 0, 336, 0, 337, 0, 338, 339, 340, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 344, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 348, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 353, 0, 354, 0, 355,
    0, 356, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 362, 0, 363, 0, 364, 0, 365, 0, 0,
    0, 0, 0, 0, 0, 366, 0, 367, 0, 368, 0, 369, 0, 370, 0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 375, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0,
    0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 381, 0, 382, 0, 383, 0, 384, 0, 385, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 388, 0, 0, 0, 0, 0,
    0, 0, 0, 389, 0, 390, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 393,
    0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 397, 0, 398, 0, 399, 0, 400, 0, 401, 0, 402, 0, 0, 403, 0, 0, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 406,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 407, 0, 408, 0, 409, 0, 0, 0, 0, 0, 0, 0, 410, 0, 411, 0, 412, 0, 413, 0, 414, 0, 0, 415, 0, 416,
    0, 0, 0, 0, 417, 0, 418, 0, 419, 0, 420, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_003D(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001F4000;
    case 2u: goto L_001F4004;
    case 3u: goto L_001F4010;
    case 4u: goto L_001F4014;
    case 5u: goto L_001F406C;
    case 6u: goto L_001F4070;
    case 7u: goto L_001F40A0;
    case 8u: goto L_001F40F8;
    case 9u: goto L_001F4150;
    case 10u: goto L_001F419C;
    case 11u: goto L_001F41DC;
    case 12u: goto L_001F4218;
    case 13u: goto L_001F427C;
    case 14u: goto L_001F42AC;
    case 15u: goto L_001F4334;
    case 16u: goto L_001F43F8;
    case 17u: goto L_001F444C;
    case 18u: goto L_001F4488;
    case 19u: goto L_001F44CC;
    case 20u: goto L_001F45B0;
    case 21u: goto L_001F45D0;
    case 22u: goto L_001F4670;
    case 23u: goto L_001F46A0;
    case 24u: goto L_001F4710;
    case 25u: goto L_001F4834;
    case 26u: goto L_001F48C8;
    case 27u: goto L_001F4950;
    case 28u: goto L_001F4A00;
    case 29u: goto L_001F4B10;
    case 30u: goto L_001F4B80;
    case 31u: goto L_001F4BC0;
    case 32u: goto L_001F4BC8;
    case 33u: goto L_001F4C58;
    case 34u: goto L_001F4C84;
    case 35u: goto L_001F4D4C;
    case 36u: goto L_001F4D58;
    case 37u: goto L_001F4D70;
    case 38u: goto L_001F4DDC;
    case 39u: goto L_001F4E20;
    case 40u: goto L_001F4E30;
    case 41u: goto L_001F4E38;
    case 42u: goto L_001F4E58;
    case 43u: goto L_001F4E60;
    case 44u: goto L_001F4E6C;
    case 45u: goto L_001F4E7C;
    case 46u: goto L_001F4E8C;
    case 47u: goto L_001F4E9C;
    case 48u: goto L_001F4EB8;
    case 49u: goto L_001F4EC0;
    case 50u: goto L_001F4ECC;
    case 51u: goto L_001F4EDC;
    case 52u: goto L_001F4EEC;
    case 53u: goto L_001F4EF8;
    case 54u: goto L_001F4F00;
    case 55u: goto L_001F4F18;
    case 56u: goto L_001F4F24;
    case 57u: goto L_001F4F38;
    case 58u: goto L_001F4F4C;
    case 59u: goto L_001F4F70;
    case 60u: goto L_001F4FD8;
    case 61u: goto L_001F4FF0;
    case 62u: goto L_001F500C;
    case 63u: goto L_001F505C;
    case 64u: goto L_001F5064;
    case 65u: goto L_001F5070;
    case 66u: goto L_001F507C;
    case 67u: goto L_001F5098;
    case 68u: goto L_001F50A8;
    case 69u: goto L_001F50B0;
    case 70u: goto L_001F50B8;
    case 71u: goto L_001F50C4;
    case 72u: goto L_001F50D4;
    case 73u: goto L_001F50E0;
    case 74u: goto L_001F50F8;
    case 75u: goto L_001F5114;
    case 76u: goto L_001F5124;
    case 77u: goto L_001F5150;
    case 78u: goto L_001F51D8;
    case 79u: goto L_001F5208;
    case 80u: goto L_001F5220;
    case 81u: goto L_001F5240;
    case 82u: goto L_001F5248;
    case 83u: goto L_001F5254;
    case 84u: goto L_001F5264;
    case 85u: goto L_001F5274;
    case 86u: goto L_001F527C;
    case 87u: goto L_001F5288;
    case 88u: goto L_001F5298;
    case 89u: goto L_001F52A8;
    case 90u: goto L_001F52C0;
    case 91u: goto L_001F52D4;
    case 92u: goto L_001F52E4;
    case 93u: goto L_001F5300;
    case 94u: goto L_001F5368;
    case 95u: goto L_001F538C;
    case 96u: goto L_001F53F0;
    case 97u: goto L_001F5414;
    case 98u: goto L_001F542C;
    case 99u: goto L_001F5450;
    case 100u: goto L_001F545C;
    case 101u: goto L_001F546C;
    case 102u: goto L_001F5490;
    case 103u: goto L_001F54FC;
    case 104u: goto L_001F5540;
    case 105u: goto L_001F558C;
    case 106u: goto L_001F559C;
    case 107u: goto L_001F55AC;
    case 108u: goto L_001F55C8;
    case 109u: goto L_001F55D0;
    case 110u: goto L_001F55DC;
    case 111u: goto L_001F55EC;
    case 112u: goto L_001F5604;
    case 113u: goto L_001F5614;
    case 114u: goto L_001F5630;
    case 115u: goto L_001F5660;
    case 116u: goto L_001F56A8;
    case 117u: goto L_001F56C8;
    case 118u: goto L_001F5710;
    case 119u: goto L_001F5750;
    case 120u: goto L_001F57B8;
    case 121u: goto L_001F57D0;
    case 122u: goto L_001F57EC;
    case 123u: goto L_001F5838;
    case 124u: goto L_001F5840;
    case 125u: goto L_001F584C;
    case 126u: goto L_001F5858;
    case 127u: goto L_001F5874;
    case 128u: goto L_001F5884;
    case 129u: goto L_001F5898;
    case 130u: goto L_001F58B8;
    case 131u: goto L_001F58C0;
    case 132u: goto L_001F58CC;
    case 133u: goto L_001F58DC;
    case 134u: goto L_001F58E8;
    case 135u: goto L_001F5900;
    case 136u: goto L_001F591C;
    case 137u: goto L_001F592C;
    case 138u: goto L_001F5940;
    case 139u: goto L_001F5990;
    case 140u: goto L_001F5A1C;
    case 141u: goto L_001F5A4C;
    case 142u: goto L_001F5A64;
    case 143u: goto L_001F5A88;
    case 144u: goto L_001F5AA8;
    case 145u: goto L_001F5AC8;
    case 146u: goto L_001F5AE8;
    case 147u: goto L_001F5B0C;
    case 148u: goto L_001F5B24;
    case 149u: goto L_001F5B2C;
    case 150u: goto L_001F5B4C;
    case 151u: goto L_001F5B60;
    case 152u: goto L_001F5B68;
    case 153u: goto L_001F5B88;
    case 154u: goto L_001F5C70;
    case 155u: goto L_001F5CAC;
    case 156u: goto L_001F5D84;
    case 157u: goto L_001F5DA8;
    case 158u: goto L_001F5DC0;
    case 159u: goto L_001F5DE0;
    case 160u: goto L_001F5DE8;
    case 161u: goto L_001F5DF4;
    case 162u: goto L_001F5E04;
    case 163u: goto L_001F5E18;
    case 164u: goto L_001F5E30;
    case 165u: goto L_001F5EA0;
    case 166u: goto L_001F5EB8;
    case 167u: goto L_001F5EEC;
    case 168u: goto L_001F5F28;
    case 169u: goto L_001F5F34;
    case 170u: goto L_001F5F40;
    case 171u: goto L_001F5F4C;
    case 172u: goto L_001F5F5C;
    case 173u: goto L_001F5F6C;
    case 174u: goto L_001F5F80;
    case 175u: goto L_001F5F88;
    case 176u: goto L_001F5FBC;
    case 177u: goto L_001F5FD8;
    case 178u: goto L_001F5FF0;
    case 179u: goto L_001F6028;
    case 180u: goto L_001F6070;
    case 181u: goto L_001F60A0;
    case 182u: goto L_001F60E0;
    case 183u: goto L_001F60E8;
    case 184u: goto L_001F60F8;
    case 185u: goto L_001F6108;
    case 186u: goto L_001F6110;
    case 187u: goto L_001F6118;
    case 188u: goto L_001F6124;
    case 189u: goto L_001F612C;
    case 190u: goto L_001F6178;
    case 191u: goto L_001F6180;
    case 192u: goto L_001F6190;
    case 193u: goto L_001F6198;
    case 194u: goto L_001F61A0;
    case 195u: goto L_001F61B0;
    case 196u: goto L_001F61B8;
    case 197u: goto L_001F61C8;
    case 198u: goto L_001F61D0;
    case 199u: goto L_001F61D8;
    case 200u: goto L_001F61F0;
    case 201u: goto L_001F6218;
    case 202u: goto L_001F6280;
    case 203u: goto L_001F62A0;
    case 204u: goto L_001F62DC;
    case 205u: goto L_001F64C0;
    case 206u: goto L_001F65A4;
    case 207u: goto L_001F6748;
    case 208u: goto L_001F68AC;
    case 209u: goto L_001F6A20;
    case 210u: goto L_001F6AA0;
    case 211u: goto L_001F6AD4;
    case 212u: goto L_001F6AE0;
    case 213u: goto L_001F6AE8;
    case 214u: goto L_001F6AFC;
    case 215u: goto L_001F6B0C;
    case 216u: goto L_001F6B1C;
    case 217u: goto L_001F6B24;
    case 218u: goto L_001F6B2C;
    case 219u: goto L_001F6B3C;
    case 220u: goto L_001F6B44;
    case 221u: goto L_001F6B4C;
    case 222u: goto L_001F6B70;
    case 223u: goto L_001F6B80;
    case 224u: goto L_001F6B90;
    case 225u: goto L_001F6BD8;
    case 226u: goto L_001F6C54;
    case 227u: goto L_001F6C68;
    case 228u: goto L_001F6C78;
    case 229u: goto L_001F6C8C;
    case 230u: goto L_001F6C98;
    case 231u: goto L_001F6CA4;
    case 232u: goto L_001F6CB4;
    case 233u: goto L_001F6CBC;
    case 234u: goto L_001F6CD0;
    case 235u: goto L_001F6D48;
    case 236u: goto L_001F6D98;
    case 237u: goto L_001F6DA0;
    case 238u: goto L_001F6DAC;
    case 239u: goto L_001F6DB4;
    case 240u: goto L_001F6DBC;
    case 241u: goto L_001F6DC8;
    case 242u: goto L_001F6DFC;
    case 243u: goto L_001F6E04;
    case 244u: goto L_001F6E10;
    case 245u: goto L_001F6E70;
    case 246u: goto L_001F6E9C;
    case 247u: goto L_001F6ED4;
    case 248u: goto L_001F6EF0;
    case 249u: goto L_001F6F10;
    case 250u: goto L_001F6F30;
    case 251u: goto L_001F6F50;
    case 252u: goto L_001F700C;
    case 253u: goto L_001F7028;
    case 254u: goto L_001F7040;
    case 255u: goto L_001F7070;
    case 256u: goto L_001F70A8;
    case 257u: goto L_001F70BC;
    case 258u: goto L_001F70C4;
    case 259u: goto L_001F70DC;
    case 260u: goto L_001F70E8;
    case 261u: goto L_001F711C;
    case 262u: goto L_001F7124;
    case 263u: goto L_001F7134;
    case 264u: goto L_001F7168;
    case 265u: goto L_001F719C;
    case 266u: goto L_001F71C8;
    case 267u: goto L_001F71D0;
    case 268u: goto L_001F71D8;
    case 269u: goto L_001F71E0;
    case 270u: goto L_001F71E8;
    case 271u: goto L_001F71F4;
    case 272u: goto L_001F7200;
    case 273u: goto L_001F7230;
    case 274u: goto L_001F7240;
    case 275u: goto L_001F7264;
    case 276u: goto L_001F726C;
    case 277u: goto L_001F7280;
    case 278u: goto L_001F728C;
    case 279u: goto L_001F72A0;
    case 280u: goto L_001F72D8;
    case 281u: goto L_001F72E0;
    case 282u: goto L_001F7304;
    case 283u: goto L_001F730C;
    case 284u: goto L_001F7314;
    case 285u: goto L_001F7344;
    case 286u: goto L_001F734C;
    case 287u: goto L_001F7384;
    case 288u: goto L_001F7390;
    case 289u: goto L_001F7398;
    case 290u: goto L_001F73A0;
    case 291u: goto L_001F73C4;
    case 292u: goto L_001F73D0;
    case 293u: goto L_001F73D8;
    case 294u: goto L_001F73E0;
    case 295u: goto L_001F7410;
    case 296u: goto L_001F7418;
    case 297u: goto L_001F7450;
    case 298u: goto L_001F745C;
    case 299u: goto L_001F7470;
    case 300u: goto L_001F74A0;
    case 301u: goto L_001F74AC;
    case 302u: goto L_001F74C0;
    case 303u: goto L_001F74D0;
    case 304u: goto L_001F7510;
    case 305u: goto L_001F7540;
    case 306u: goto L_001F75BC;
    case 307u: goto L_001F75C4;
    case 308u: goto L_001F75CC;
    case 309u: goto L_001F75D4;
    case 310u: goto L_001F75DC;
    case 311u: goto L_001F75E4;
    case 312u: goto L_001F75EC;
    case 313u: goto L_001F75FC;
    case 314u: goto L_001F7604;
    case 315u: goto L_001F760C;
    case 316u: goto L_001F7614;
    case 317u: goto L_001F761C;
    case 318u: goto L_001F7624;
    case 319u: goto L_001F7644;
    case 320u: goto L_001F764C;
    case 321u: goto L_001F7654;
    case 322u: goto L_001F765C;
    case 323u: goto L_001F7664;
    case 324u: goto L_001F7670;
    case 325u: goto L_001F7678;
    case 326u: goto L_001F76A0;
    case 327u: goto L_001F76AC;
    case 328u: goto L_001F76C0;
    case 329u: goto L_001F7708;
    case 330u: goto L_001F7714;
    case 331u: goto L_001F7720;
    case 332u: goto L_001F773C;
    case 333u: goto L_001F77CC;
    case 334u: goto L_001F781C;
    case 335u: goto L_001F7824;
    case 336u: goto L_001F782C;
    case 337u: goto L_001F7834;
    case 338u: goto L_001F783C;
    case 339u: goto L_001F7840;
    case 340u: goto L_001F7844;
    case 341u: goto L_001F7854;
    case 342u: goto L_001F7880;
    case 343u: goto L_001F78B8;
    case 344u: goto L_001F78C0;
    case 345u: goto L_001F78D0;
    case 346u: goto L_001F7918;
    case 347u: goto L_001F7948;
    case 348u: goto L_001F7954;
    case 349u: goto L_001F7960;
    case 350u: goto L_001F7990;
    case 351u: goto L_001F79B8;
    case 352u: goto L_001F79E4;
    case 353u: goto L_001F79EC;
    case 354u: goto L_001F79F4;
    case 355u: goto L_001F79FC;
    case 356u: goto L_001F7A04;
    case 357u: goto L_001F7A10;
    case 358u: goto L_001F7A20;
    case 359u: goto L_001F7A30;
    case 360u: goto L_001F7A3C;
    case 361u: goto L_001F7AD4;
    case 362u: goto L_001F7ADC;
    case 363u: goto L_001F7AE4;
    case 364u: goto L_001F7AEC;
    case 365u: goto L_001F7AF4;
    case 366u: goto L_001F7B14;
    case 367u: goto L_001F7B1C;
    case 368u: goto L_001F7B24;
    case 369u: goto L_001F7B2C;
    case 370u: goto L_001F7B34;
    case 371u: goto L_001F7B40;
    case 372u: goto L_001F7B58;
    case 373u: goto L_001F7B70;
    case 374u: goto L_001F7BB8;
    case 375u: goto L_001F7BC4;
    case 376u: goto L_001F7BD0;
    case 377u: goto L_001F7BF8;
    case 378u: goto L_001F7C08;
    case 379u: goto L_001F7C28;
    case 380u: goto L_001F7C44;
    case 381u: goto L_001F7C8C;
    case 382u: goto L_001F7C94;
    case 383u: goto L_001F7C9C;
    case 384u: goto L_001F7CA4;
    case 385u: goto L_001F7CAC;
    case 386u: goto L_001F7CBC;
    case 387u: goto L_001F7CE0;
    case 388u: goto L_001F7CE8;
    case 389u: goto L_001F7D0C;
    case 390u: goto L_001F7D14;
    case 391u: goto L_001F7D20;
    case 392u: goto L_001F7D70;
    case 393u: goto L_001F7D7C;
    case 394u: goto L_001F7D90;
    case 395u: goto L_001F7DC0;
    case 396u: goto L_001F7DE8;
    case 397u: goto L_001F7E14;
    case 398u: goto L_001F7E1C;
    case 399u: goto L_001F7E24;
    case 400u: goto L_001F7E2C;
    case 401u: goto L_001F7E34;
    case 402u: goto L_001F7E3C;
    case 403u: goto L_001F7E48;
    case 404u: goto L_001F7E60;
    case 405u: goto L_001F7E70;
    case 406u: goto L_001F7E7C;
    case 407u: goto L_001F7F18;
    case 408u: goto L_001F7F20;
    case 409u: goto L_001F7F28;
    case 410u: goto L_001F7F48;
    case 411u: goto L_001F7F50;
    case 412u: goto L_001F7F58;
    case 413u: goto L_001F7F60;
    case 414u: goto L_001F7F68;
    case 415u: goto L_001F7F74;
    case 416u: goto L_001F7F7C;
    case 417u: goto L_001F7F90;
    case 418u: goto L_001F7F98;
    case 419u: goto L_001F7FA0;
    case 420u: goto L_001F7FA8;
    case 421u: goto L_001F7FC0;
    default: bad_entry(c, 0x001F4000u); return;
    }
L_001F4000:
    c.budget -= 1;
L_001F4004:
    c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8384u)));
    set32(c.r[20], 0u + 1u);
    c.f[20] = c.f[0];
    c.budget -= 3;
L_001F4010:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_001F4014:
    c.r[2].d[0] = c.r[22].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 8448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F3F94u | kUnwind; return; } [[clang::musttail]] return unit_003C(c, 290u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull; c.r[3].d[0] = c.r[18].d[0] << 56;  if (t) { goto L_001F4034; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001F406C; } }
    c.r[3].d[0] = c.r[18].d[0] << 56;
    c.budget -= 1;
L_001F4034:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 8);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[2], c.r[2].w[0] + 26144u);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[16].w[0] + 787u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st32((c.r[16].w[0] + 1532u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8385u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 279u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 279u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 14;
L_001F406C:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001F4070:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001F40A0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 791u));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[20], c.r[0], c.r[0]);  if (t) { goto L_001F40E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001F457C; } }
L_001F40E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[18], c.r[2].w[0] + 26144u);
    mmi::paddub(c.r[22], c.r[0], c.r[0]);
    mmi::paddub(c.r[21], c.r[0], c.r[0]);
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    c.budget -= 5;
L_001F40F8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8385u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 279u)));
    c.r[3].d[0] = ~(c.r[3].d[0] | 0ull);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st8((c.r[18].w[0] + 279u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_001F4174; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F4170; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 531u));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 531u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001F4170; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 762u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 1u);  if (t) { goto L_001F4168; } }
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4150u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 168u, depth + 1u); else { c.pc = 0x002D6270u; return; } if (c.pc != 0x001F4150u) [[unlikely]] return; }
L_001F4150:
    c.f[1] = ld32((c.r[16].w[0] + 1604u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F4170; } }
    c.budget -= 1;
L_001F4168:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 2;
L_001F4170:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_001F4174:
    c.r[2].d[0] = c.r[19].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 8448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F40F8u | kUnwind; return; } goto L_001F40F8; } }
    c.r[2].d[0] = ld16((c.r[28].w[0] - 26576u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_001F41D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[5], c.r[2].w[0] - 14816u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (t) { goto L_001F41C0; } }
L_001F419C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8385u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[4].d[0] = ~(c.r[2].d[0] | 0ull);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 279u)));
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st8((c.r[3].w[0] + 279u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
L_001F41C0:
    c.r[2].d[0] = ld16((c.r[28].w[0] - 26576u));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F419Cu | kUnwind; return; } goto L_001F419C; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_001F41D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F41DCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_003D(c, 22u, depth + 1u); else { c.pc = 0x001F4670u; return; } if (c.pc != 0x001F41DCu) [[unlikely]] return; }
L_001F41DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F4230; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F4230; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F4230; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 762u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 1u);  if (t) { goto L_001F422C; } }
    set32(c.r[5], c.r[2].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4218u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 168u, depth + 1u); else { c.pc = 0x002D6270u; return; } if (c.pc != 0x001F4218u) [[unlikely]] return; }
L_001F4218:
    c.f[1] = ld32((c.r[16].w[0] + 1604u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F4230; } }
L_001F422C:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_001F4230:
    set32(c.r[2], ld32((c.r[16].w[0] + 1524u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x47C30000u);  goto L_001F43E0; }
    set32(c.r[3], ld32((c.r[16].w[0] + 1532u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { mmi::paddub(c.r[3], c.r[2], c.r[0]);  goto L_001F4254; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));  if (t) { goto L_001F4258; } }
    mmi::paddub(c.r[3], c.r[2], c.r[0]);
    c.budget -= 1;
L_001F4254:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.budget -= 1;
L_001F4258:
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 255u);  if (t) { goto L_001F4274; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 8384u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 787u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001F4278; } }
    set32(c.r[2], 0u + 255u);
    c.budget -= 1;
L_001F4274:
    st8((c.r[16].w[0] + 787u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001F4278:
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 1;
L_001F427C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 787u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 787u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F42BC; } }
    set32(c.r[2], 0u + 255u);
    set32(c.r[5], 0u + 1u);
    st8((c.r[16].w[0] + 787u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F42ACu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_003D(c, 22u, depth + 1u); else { c.pc = 0x001F4670u; return; } if (c.pc != 0x001F42ACu) [[unlikely]] return; }
L_001F42AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[17], c.r[2], c.r[0]);  if (t) { goto L_001F4374; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1532u), c.r[17].w[0]);  if (t) { goto L_001F435C; } }
L_001F42BC:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 787u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[2], c.r[2].w[0] + 26144u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 531u));
    set32(c.r[4], c.r[5].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 8);
    set32(c.r[17], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 531u));
    c.budget -= 11;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_001F4378; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F4374; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1524u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_001F4374; } }
    c.r[2].d[0] = c.r[21].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F4358; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 762u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F4348; } }
    c.r[2].d[0] = c.r[22].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F4348; } }
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4334u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 168u, depth + 1u); else { c.pc = 0x002D6270u; return; } if (c.pc != 0x001F4334u) [[unlikely]] return; }
L_001F4334:
    c.f[1] = ld32((c.r[16].w[0] + 1604u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F4374; } }
L_001F4348:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 644u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F4374; } }
    c.budget -= 1;
L_001F4358:
    st32((c.r[16].w[0] + 1532u), c.r[17].w[0]);
    c.budget -= 1;
L_001F435C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 279u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8385u)));
    set32(c.r[20], 0u + 1u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 279u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001F4388; } }
L_001F4374:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001F4378:
    c.r[2].d[0] = c.r[18].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F427Cu | kUnwind; return; } goto L_001F427C; } }
    c.budget -= 1;
L_001F4388:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_001F4398; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F457C; } }
L_001F4398:
    set32(c.r[5], ld32((c.r[16].w[0] + 1524u)));
    st32((c.r[16].w[0] + 1532u), c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 255u);  if (t) { goto L_001F43C0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8384u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 787u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001F43C4; } }
    set32(c.r[2], 0u + 255u);
    c.budget -= 1;
L_001F43C0:
    st8((c.r[16].w[0] + 787u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001F43C4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8385u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 279u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 279u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F457C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47C30000u);
    c.budget -= 1;
L_001F43E0:
    c.r[2].d[0] = c.r[2].d[0] | 20480ull;
    c.f[20] = c.r[2].w[0];
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[19], c.r[2].w[0] + 26144u);
    mmi::paddub(c.r[22], c.r[0], c.r[0]);
    c.budget -= 6;
L_001F43F8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 531u));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 531u));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[22], c.r[22].w[0] + 1u);  goto L_001F446C; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F4468; } }
    c.r[1].d[0] = c.r[21].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] + 32u);  if (t) { goto L_001F4444; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 348u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F4440; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1532u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_001F4468; } }
    c.budget -= 1;
L_001F4440:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 1;
L_001F4444:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F444Cu); set32(c.r[5], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001F444Cu) [[unlikely]] return; }
L_001F444C:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F4468; } }
    c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8384u)));
    set32(c.r[20], 0u + 1u);
    c.f[20] = c.f[0];
    c.budget -= 3;
L_001F4468:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_001F446C:
    c.r[2].d[0] = c.r[22].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 8448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F43F8u | kUnwind; return; } goto L_001F43F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[19], c.r[2].w[0] - 14816u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[22], c.r[0], c.r[0]);  if (t) { goto L_001F44F8; } }
L_001F4488:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 531u));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 531u));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[19], c.r[19].w[0] + 4u);  goto L_001F44F4; }
    c.r[1].d[0] = c.r[21].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[5], c.r[4].w[0] + 32u);  if (t) { goto L_001F44C4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 348u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F44C0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1532u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001F44F0; } }
L_001F44C0:
    set32(c.r[5], c.r[4].w[0] + 32u);
    c.budget -= 1;
L_001F44C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F44CCu); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001F44CCu) [[unlikely]] return; }
L_001F44CC:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F44F0; } }
    set32(c.r[20], 0u + 1u);
    c.f[20] = c.f[0];
    set32(c.r[18], 0u - 1u);
    st8((c.r[16].w[0] + 786u), static_cast<std::uint8_t>(c.r[22].w[0]));
    c.budget -= 5;
L_001F44F0:
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.budget -= 1;
L_001F44F4:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_001F44F8:
    c.r[2].d[0] = ld16((c.r[28].w[0] - 26576u));
    c.r[2].d[0] = c.r[22].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F4488u | kUnwind; return; } goto L_001F4488; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull; c.r[3].d[0] = c.r[18].d[0] << 56;  if (t) { goto L_001F451C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001F457C; } }
    c.r[3].d[0] = c.r[18].d[0] << 56;
    c.budget -= 1;
L_001F451C:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_001F4544; } }
    set32(c.r[2], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 8);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[2], c.r[2].w[0] + 26144u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001F4560; } }
L_001F4544:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 786u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] - 14816u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 7;
L_001F4560:
    st8((c.r[16].w[0] + 787u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st32((c.r[16].w[0] + 1532u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8385u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 279u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 279u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_001F457C:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001F45B0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 640u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F45C8; } }
    st16((c.r[28].w[0] - 26580u), static_cast<std::uint16_t>(0u));
    st16((c.r[28].w[0] - 26576u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_001F45C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F45D0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 640u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F45E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F4660; } }
L_001F45E8:
    c.r[5].d[0] = ld16((c.r[28].w[0] - 26576u));
    c.r[2].d[0] = c.r[5].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F4600; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F4660; } }
L_001F4600:
    c.r[3].d[0] = ld16((c.r[28].w[0] - 26580u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] - 15072u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.r[2].d[0] = ld16((c.r[28].w[0] - 26580u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[28].w[0] - 26580u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 644u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].d[0] & 65535ull;  if (t) { goto L_001F463C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F4660; } }
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 1;
L_001F463C:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] - 14816u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[28].w[0] - 26576u));
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[28].w[0] - 26576u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 9;
L_001F4660:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F4670:
    c.r[11].d[0] = ld16((c.r[28].w[0] - 26576u));
    c.budget -= 3;
    { const bool t = c.r[11].d[0] != 0ull;  if (t) { goto L_001F4684; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001F4704; } }
L_001F4684:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 786u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[7], c.r[3].w[0] - 14816u);
    mmi::paddub(c.r[9], c.r[0], c.r[0]);
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[6].w[0] + 1u);  if (t) { goto L_001F46F0; } }
L_001F46A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[10].w[0] << 2);  if (t) { goto L_001F46B4; } }
    mmi::paddub(c.r[10], c.r[0], c.r[0]);
    set32(c.r[2], c.r[10].w[0] << 2);
    c.budget -= 3;
L_001F46B4:
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 531u));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 531u));
    c.budget -= 6;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_001F46EC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 1524u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001F46E8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[9], 0u + 1u);  if (t) { goto L_001F4700; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 786u), static_cast<std::uint8_t>(c.r[10].w[0]));  if (t) { goto L_001F4700; } }
L_001F46E8:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_001F46EC:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 1;
L_001F46F0:
    c.r[3].d[0] = c.r[8].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = c.r[10].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F46A0u | kUnwind; return; } goto L_001F46A0; }
    c.budget -= 1;
L_001F4700:
    if (c.r[9].d[0] == 0) c.r[2].d[0] = 0ull;
    c.budget -= 1;
L_001F4704:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F4710:
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 87u)));
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (t) { goto L_001F4734; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 3268u));
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 4;
L_001F4734:
    c.r[3].d[0] = c.r[4].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F4750; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 3288u));
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 4;
L_001F4750:
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001F4AFC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 524u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F4AFC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F4AFC; } }
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    c.r[3].d[0] = c.r[5].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[5].d[0] & 256ull;  if (t) { goto L_001F47A8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00860000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 26144u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F47A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 526u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001F49B8; } }
L_001F47A4:
    c.r[3].d[0] = c.r[5].d[0] & 256ull;
    c.budget -= 1;
L_001F47A8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[5].d[0] & 64ull;  if (t) { goto L_001F47D0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 30944u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F47CC; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 526u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F49B8; } }
L_001F47CC:
    c.r[3].d[0] = c.r[5].d[0] & 64ull;
    c.budget -= 1;
L_001F47D0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[5].d[0] & 32ull;  if (t) { goto L_001F47F8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 22496u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F47F4; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 526u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F49B8; } }
L_001F47F4:
    c.r[3].d[0] = c.r[5].d[0] & 32ull;
    c.budget -= 1;
L_001F47F8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[5].d[0] & 144ull;  if (t) { goto L_001F4820; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 14048u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F481C; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 526u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F49B8; } }
L_001F481C:
    c.r[3].d[0] = c.r[5].d[0] & 144ull;
    c.budget -= 1;
L_001F4820:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[5].d[0] & 9216ull;  if (t) { goto L_001F48B4; } }
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[4], c.r[3].w[0] + 26144u);
    c.budget -= 3;
L_001F4834:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[7], c.r[3].w[0] + 525u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 525u)));
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[5].sd[0] >= 0; c.r[3].d[0] = c.r[5].d[0] & 3ull;  if (t) { goto L_001F4858; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F4858; } }
    set32(c.r[3], c.r[3].w[0] - 4u);
    c.budget -= 1;
L_001F4858:
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[7], ld32((c.r[28].w[0] - 26304u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 525u)));
    set32(c.r[3], c.r[5].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F4890; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F4834u | kUnwind; return; } goto L_001F4834; } }
L_001F4890:
    st8((c.r[7].w[0] + 526u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], 0u + 180u);
    st8((c.r[3].w[0] + 527u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 528u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_001F49B8; } }
    c.r[3].d[0] = c.r[5].d[0] & 9216ull;
    c.budget -= 1;
L_001F48B4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[5].d[0] & 6144ull;  if (t) { goto L_001F4938; } }
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[4], c.r[3].w[0] + 26144u);
    c.budget -= 3;
L_001F48C8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[6], c.r[3].w[0] + 525u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 525u)));
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[5].sd[0] >= 0; c.r[3].d[0] = c.r[5].d[0] & 3ull;  if (t) { goto L_001F48EC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F48EC; } }
    set32(c.r[3], c.r[3].w[0] - 4u);
    c.budget -= 1;
L_001F48EC:
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 525u)));
    set32(c.r[3], c.r[5].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_001F492C; } }
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F48C8u | kUnwind; return; } goto L_001F48C8; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_001F492C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 526u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F49B8; } }
    c.r[3].d[0] = c.r[5].d[0] & 6144ull;
    c.budget -= 1;
L_001F4938:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F49B8; } }
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], c.r[3].w[0] + 26144u);
    c.budget -= 4;
L_001F4950:
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 525u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[6].w[0] + 525u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[6], c.r[3].w[0] + 525u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 525u)));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_001F4978; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 1;
L_001F4978:
    set32(c.r[7], ld32((c.r[28].w[0] - 26304u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 525u)));
    set32(c.r[3], c.r[6].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] + 1u);  if (t) { goto L_001F49B4; } }
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F4950u | kUnwind; return; } goto L_001F4950; } }
    set32(c.r[3], c.r[6].w[0] + 1u);
    c.budget -= 2;
L_001F49B4:
    st8((c.r[7].w[0] + 526u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001F49B8:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 526u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_001F4AF8; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 528u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 528u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001F4AFC; } }
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[7], c.r[4].w[0] + 26144u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[9], c.r[4].w[0] + 26144u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
L_001F4A00:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F4A60; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 525u)));
    set32(c.r[10], c.r[4].w[0] + 525u);
    set32(c.r[4], c.r[8].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[4], c.r[4].w[0] << 8);
    set32(c.r[4], c.r[9].w[0] + c.r[4].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1520u)));
    c.budget -= 10;
    if (c.r[11].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] + 1u);  goto L_001F4ACC; }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 1u)));
    c.r[1].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F4AC8; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 8384u)));
    c.budget -= 3;
    { const bool t = c.r[8].sd[0] >= 0; c.r[4].d[0] = c.r[8].d[0] & 3ull;  if (t) { goto L_001F4A58; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F4A58; } }
    set32(c.r[4], c.r[4].w[0] - 4u);
    c.budget -= 1;
L_001F4A58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001F4AA0; } }
L_001F4A60:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[10], c.r[4].w[0] + 525u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 525u)));
    set32(c.r[8], c.r[4].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[8].sd[0] >= 0; c.r[4].d[0] = c.r[8].d[0] & 3ull;  if (t) { goto L_001F4A84; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F4A84; } }
    set32(c.r[4], c.r[4].w[0] - 4u);
    c.budget -= 1;
L_001F4A84:
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 525u)));
    set32(c.r[4], c.r[8].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[4], c.r[4].w[0] << 8);
    set32(c.r[11], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 7;
L_001F4AA0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F4AC8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[6].d[0];  if (t) { goto L_001F4AC8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_001F4AD8; } }
    c.budget -= 1;
L_001F4AC8:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_001F4ACC:
    c.r[4].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F4A00u | kUnwind; return; } goto L_001F4A00; } }
L_001F4AD8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[5], 0u + 180u);
    set32(c.r[4], 0u + 1u);
    st16((c.r[3].w[0] + 528u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 527u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001F4AFC; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_001F4AF8:
    st8((c.r[4].w[0] + 525u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001F4AFC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F4B10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[16], c.r[3].w[0] - 26912u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[4], c.r[3].w[0] + 26144u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 525u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 526u)));
    set32(c.r[5], c.r[6].w[0] << 5);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 8);
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[4].w[0] + c.r[5].w[0]);  if (t) { goto L_001F4D58; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001F4BC8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[6], 0u + 384u);  if (t) { goto L_001F4B74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));  if (t) { goto L_001F4C0C; } }
    set32(c.r[6], 0u + 384u);
    c.budget -= 1;
L_001F4B74:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4B80u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001F4B80u) [[unlikely]] return; }
L_001F4B80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F4BB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 208u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001F4BB4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001F4BB0:
    st8((c.r[16].w[0] + 208u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001F4BB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4BC0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001F4BC0u) [[unlikely]] return; }
L_001F4BC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4BC8u); set32(c.r[4], c.r[16].w[0] + 144u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001F4BC8u) [[unlikely]] return; }
L_001F4BC8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    st8((c.r[16].w[0] + 346u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 369u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_001F4C04; } }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 347u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F4C08; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_001F4C04:
    st8((c.r[16].w[0] + 347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001F4C08:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 1;
L_001F4C0C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 527u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F4C28; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 346u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001F4CE0; } }
L_001F4C28:
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0] + 527u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    st8((c.r[16].w[0] + 346u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F4C7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4C58u);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x001F4C58u) [[unlikely]] return; }
L_001F4C58:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[4].d[0] = c.r[3].d[0] & 15ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 30464u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 347u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F4CA0; } }
L_001F4C7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4C84u);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x001F4C84u) [[unlikely]] return; }
L_001F4C84:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[4].d[0] = c.r[3].d[0] & 15ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 30448u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[16].w[0] + 347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_001F4CA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F4CBC; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    set32(c.r[3], 0u + 33u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F4CE0; } }
L_001F4CBC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 347u)));
    set32(c.r[3], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u - 1u);  if (t) { goto L_001F4CDC; } }
    set32(c.r[3], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F4CE0; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_001F4CDC:
    st8((c.r[16].w[0] + 347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001F4CE0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001F4D00; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 528u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_001F4D58; } }
L_001F4D00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 347u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_001F4D50; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 28928u);
    set32(c.r[3], c.r[3].w[0] << 2);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[2].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 30480u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 15;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4D4Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F4D4Cu) [[unlikely]] return; }
L_001F4D4C:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_001F4D50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4D58u);  if (depth < kMaxDepth) unit_003D(c, 181u, depth + 1u); else { c.pc = 0x001F60A0u; return; } if (c.pc != 0x001F4D58u) [[unlikely]] return; }
L_001F4D58:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F4D70:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 30544u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 64u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[5].w[0] + 2096u));
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 2100u));
    st32((c.r[4].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 2104u));
    st32((c.r[4].w[0] + 56u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (t) { goto L_001F4DC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 16u);  if (t) { goto L_001F4F44; } }
L_001F4DC8:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4DDCu); st32((c.r[17].w[0] + 332u), c.f[0]);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x001F4DDCu) [[unlikely]] return; }
L_001F4DDC:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F4E04; } }
    c.f[0] = ld32((c.r[17].w[0] + 332u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 332u), c.f[0]);
    c.budget -= 6;
L_001F4E04:
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F4E94; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4E20u); set32(c.r[6], c.r[16].w[0] + 1328u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001F4E20u) [[unlikely]] return; }
L_001F4E20:
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[4], c.r[16].w[0] + 8320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4E30u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 147u, depth + 1u); else { c.pc = 0x0026E4D0u; return; } if (c.pc != 0x001F4E30u) [[unlikely]] return; }
L_001F4E30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4E38u);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x001F4E38u) [[unlikely]] return; }
L_001F4E38:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] - 8192u);
    set32(c.r[4], c.r[16].w[0] + 8320u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4E58u); c.r[18].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001F4E58u) [[unlikely]] return; }
L_001F4E58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4E60u); c.r[4].d[0] = c.r[18].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F4E60u) [[unlikely]] return; }
L_001F4E60:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4E6Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001F4E6Cu) [[unlikely]] return; }
L_001F4E6C:
    c.f[12] = ld32((c.r[17].w[0] + 332u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4E7Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001F4E7Cu) [[unlikely]] return; }
L_001F4E7C:
    set32(c.r[4], c.r[17].w[0] + 16u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4E8Cu); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001F4E8Cu) [[unlikely]] return; }
L_001F4E8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[16].w[0] + 8320u);  if (t) { goto L_001F4EF0; } }
L_001F4E94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4E9Cu);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x001F4E9Cu) [[unlikely]] return; }
L_001F4E9C:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[4], c.r[16].w[0] + 8320u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4EB8u); c.r[18].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001F4EB8u) [[unlikely]] return; }
L_001F4EB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4EC0u); c.r[4].d[0] = c.r[18].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F4EC0u) [[unlikely]] return; }
L_001F4EC0:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4ECCu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001F4ECCu) [[unlikely]] return; }
L_001F4ECC:
    c.f[12] = ld32((c.r[17].w[0] + 332u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4EDCu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001F4EDCu) [[unlikely]] return; }
L_001F4EDC:
    set32(c.r[4], c.r[17].w[0] + 16u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4EECu); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001F4EECu) [[unlikely]] return; }
L_001F4EEC:
    set32(c.r[4], c.r[16].w[0] + 8320u);
    c.budget -= 1;
L_001F4EF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4EF8u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001F4EF8u) [[unlikely]] return; }
L_001F4EF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4F00u);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x001F4F00u) [[unlikely]] return; }
L_001F4F00:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4F18u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F4F18u) [[unlikely]] return; }
L_001F4F18:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4F24u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001F4F24u) [[unlikely]] return; }
L_001F4F24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], c.r[17].w[0] + 288u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4F38u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001F4F38u) [[unlikely]] return; }
L_001F4F38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_001F4F50; } }
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 1;
L_001F4F44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4F4Cu); set32(c.r[5], c.r[17].w[0] + 288u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001F4F4Cu) [[unlikely]] return; }
L_001F4F4C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001F4F50:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001F4F70:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[3] = ld32((c.r[5].w[0] + 32u));
    c.f[2] = ld32((c.r[5].w[0] + 36u));
    c.f[1] = ld32((c.r[5].w[0] + 40u));
    c.f[0] = ld32((c.r[5].w[0] + 44u));
    mmi::paddub(c.r[18], c.r[6], c.r[0]);
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    st32((c.r[4].w[0] + 48u), c.f[3]);
    st32((c.r[4].w[0] + 52u), c.f[2]);
    st32((c.r[4].w[0] + 56u), c.f[1]);
    st32((c.r[4].w[0] + 60u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 21;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[19], c.r[5], c.r[0]);  if (t) { goto L_001F4FCC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[20].w[0] + 304u);  if (t) { goto L_001F510C; } }
L_001F4FCC:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4FD8u); st8((c.r[20].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x001F4FD8u) [[unlikely]] return; }
L_001F4FD8:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4FF0u); c.r[16].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x001F4FF0u) [[unlikely]] return; }
L_001F4FF0:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.r[17].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F500Cu); c.r[16].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x001F500Cu) [[unlikely]] return; }
L_001F500C:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & 31ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + 2048u);
    c.r[21].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[20].w[0] + 308u), 0u);
    st32((c.r[20].w[0] + 304u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[20].w[0] + 312u), c.r[2].w[0]);
    c.f[3] = ld32((c.r[20].w[0] + 304u));
    c.f[2] = ld32((c.r[20].w[0] + 308u));
    c.f[1] = ld32((c.r[20].w[0] + 312u));
    c.f[0] = ld32((c.r[20].w[0] + 316u));
    set32(c.r[4], c.r[19].w[0] + 8320u);
    st32((c.r[20].w[0] + 288u), c.f[3]);
    st32((c.r[20].w[0] + 292u), c.f[2]);
    st32((c.r[20].w[0] + 296u), c.f[1]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F505Cu); st32((c.r[20].w[0] + 300u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001F505Cu) [[unlikely]] return; }
L_001F505C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5064u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F5064u) [[unlikely]] return; }
L_001F5064:
    c.r[2].d[0] = c.r[21].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5070u); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001F5070u) [[unlikely]] return; }
L_001F5070:
    set32(c.r[4], c.r[20].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F507Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001F507Cu) [[unlikely]] return; }
L_001F507C:
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[20].w[0] + 304u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5098u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001F5098u) [[unlikely]] return; }
L_001F5098:
    set32(c.r[4], c.r[20].w[0] + 16u);
    set32(c.r[5], c.r[20].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F50A8u); set32(c.r[6], c.r[20].w[0] + 304u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001F50A8u) [[unlikely]] return; }
L_001F50A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F50B0u); set32(c.r[4], c.r[19].w[0] + 8320u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001F50B0u) [[unlikely]] return; }
L_001F50B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F50B8u); c.r[4].d[0] = c.r[16].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F50B8u) [[unlikely]] return; }
L_001F50B8:
    set32(c.r[4], c.r[20].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F50C4u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001F50C4u) [[unlikely]] return; }
L_001F50C4:
    c.f[12] = ld32((c.r[18].w[0]));
    set32(c.r[4], c.r[20].w[0] + 288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F50D4u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001F50D4u) [[unlikely]] return; }
L_001F50D4:
    set32(c.r[4], c.r[20].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F50E0u); set32(c.r[5], c.r[20].w[0] + 304u);  if (depth < kMaxDepth) unit_000F(c, 25u, depth + 1u); else { c.pc = 0x0013CB10u; return; } if (c.pc != 0x001F50E0u) [[unlikely]] return; }
L_001F50E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C360000u);
    set32(c.r[4], c.r[20].w[0] + 288u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F50F8u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001F50F8u) [[unlikely]] return; }
L_001F50F8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], 0u + 90u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 528u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_001F5124; } }
    set32(c.r[4], c.r[20].w[0] + 304u);
    c.budget -= 1;
L_001F510C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5114u); set32(c.r[5], c.r[20].w[0] + 288u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001F5114u) [[unlikely]] return; }
L_001F5114:
    set32(c.r[4], c.r[20].w[0] + 16u);
    set32(c.r[5], c.r[20].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5124u); set32(c.r[6], c.r[20].w[0] + 304u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001F5124u) [[unlikely]] return; }
L_001F5124:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001F5150:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 30560u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 80u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    c.f[3] = ld32((c.r[5].w[0] + 32u));
    c.f[2] = ld32((c.r[5].w[0] + 36u));
    c.f[1] = ld32((c.r[5].w[0] + 40u));
    c.f[0] = ld32((c.r[5].w[0] + 44u));
    st32((c.r[4].w[0] + 48u), c.f[3]);
    st32((c.r[4].w[0] + 52u), c.f[2]);
    st32((c.r[4].w[0] + 56u), c.f[1]);
    st32((c.r[4].w[0] + 60u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 23;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (t) { goto L_001F51B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 304u);  if (t) { goto L_001F52CC; } }
L_001F51B4:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F51D8u); st32((c.r[17].w[0] + 332u), c.f[0]);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x001F51D8u) [[unlikely]] return; }
L_001F51D8:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F5200; } }
    c.f[0] = ld32((c.r[17].w[0] + 332u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 332u), c.f[0]);
    c.budget -= 6;
L_001F5200:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5208u);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x001F5208u) [[unlikely]] return; }
L_001F5208:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5220u); c.r[18].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x001F5220u) [[unlikely]] return; }
L_001F5220:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & 31ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + 20480u);
    set32(c.r[4], c.r[16].w[0] + 8320u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5240u); c.r[19].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001F5240u) [[unlikely]] return; }
L_001F5240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5248u); c.r[4].d[0] = c.r[18].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F5248u) [[unlikely]] return; }
L_001F5248:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5254u); set32(c.r[5], c.r[17].w[0] + 304u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001F5254u) [[unlikely]] return; }
L_001F5254:
    c.f[12] = ld32((c.r[17].w[0] + 332u));
    set32(c.r[4], c.r[17].w[0] + 304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5264u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001F5264u) [[unlikely]] return; }
L_001F5264:
    set32(c.r[4], c.r[17].w[0] + 16u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5274u); set32(c.r[6], c.r[17].w[0] + 304u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001F5274u) [[unlikely]] return; }
L_001F5274:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F527Cu); c.r[4].d[0] = c.r[19].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F527Cu) [[unlikely]] return; }
L_001F527C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5288u); set32(c.r[5], c.r[17].w[0] + 288u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001F5288u) [[unlikely]] return; }
L_001F5288:
    c.f[12] = ld32((c.r[17].w[0] + 332u));
    set32(c.r[4], c.r[17].w[0] + 288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5298u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001F5298u) [[unlikely]] return; }
L_001F5298:
    set32(c.r[4], c.r[17].w[0] + 288u);
    set32(c.r[6], c.r[17].w[0] + 304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F52A8u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001F52A8u) [[unlikely]] return; }
L_001F52A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3BB60000u);
    set32(c.r[4], c.r[17].w[0] + 288u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F52C0u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001F52C0u) [[unlikely]] return; }
L_001F52C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_001F52E8; } }
    set32(c.r[4], c.r[17].w[0] + 304u);
    c.budget -= 1;
L_001F52CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F52D4u); set32(c.r[5], c.r[17].w[0] + 288u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001F52D4u) [[unlikely]] return; }
L_001F52D4:
    set32(c.r[4], c.r[17].w[0] + 16u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F52E4u); set32(c.r[6], c.r[17].w[0] + 304u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001F52E4u) [[unlikely]] return; }
L_001F52E4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001F52E8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001F5300:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[17], c.r[5], c.r[0]);  if (t) { goto L_001F5394; } }
    c.f[0] = ld32((c.r[17].w[0] + 8336u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[1] = c.r[2].w[0];
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8340u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8344u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5368u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001F5368u) [[unlikely]] return; }
L_001F5368:
    c.f[0] = ld32((c.r[17].w[0] + 2032u));
    set32(c.r[4], c.r[18].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    st32((c.r[18].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 2036u));
    st32((c.r[18].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 2040u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F538Cu); st32((c.r[18].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001F538Cu) [[unlikely]] return; }
L_001F538C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));  if (t) { goto L_001F53B8; } }
L_001F5394:
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[18].w[0] + 48u), c.f[3]);
    st32((c.r[18].w[0] + 52u), c.f[2]);
    st32((c.r[18].w[0] + 56u), c.f[1]);
    st32((c.r[18].w[0] + 60u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    c.budget -= 9;
L_001F53B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_001F53CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 8320u);  if (t) { goto L_001F5448; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_001F53CC:
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F53F0u); st32((c.r[18].w[0] + 332u), c.f[0]);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x001F53F0u) [[unlikely]] return; }
L_001F53F0:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] - 8192u);
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5414u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x001F5414u) [[unlikely]] return; }
L_001F5414:
    c.f[1] = ld32((c.r[18].w[0] + 332u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 304u), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F542Cu); st32((c.r[18].w[0] + 308u), 0u);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x001F542Cu) [[unlikely]] return; }
L_001F542C:
    c.f[1] = ld32((c.r[18].w[0] + 332u));
    set32(c.r[3], 0u + 60u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 312u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st16((c.r[2].w[0] + 528u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[17].w[0] + 8320u);
    c.budget -= 7;
L_001F5448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5450u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001F5450u) [[unlikely]] return; }
L_001F5450:
    set32(c.r[4], c.r[18].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F545Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001F545Cu) [[unlikely]] return; }
L_001F545C:
    set32(c.r[4], c.r[18].w[0] + 16u);
    set32(c.r[5], c.r[18].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F546Cu); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001F546Cu) [[unlikely]] return; }
L_001F546C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001F5490:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[5].w[0] + 2096u));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 2100u));
    st32((c.r[4].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 2104u));
    st32((c.r[4].w[0] + 56u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[17], c.r[5], c.r[0]);  if (t) { goto L_001F54D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));  if (t) { goto L_001F56D4; } }
L_001F54D8:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F54FCu); st32((c.r[18].w[0] + 332u), c.f[0]);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x001F54FCu) [[unlikely]] return; }
L_001F54FC:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F5524; } }
    c.f[0] = ld32((c.r[18].w[0] + 332u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40200000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 332u), c.f[0]);
    c.budget -= 6;
L_001F5524:
    set32(c.r[2], ld32((c.r[17].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F560C; } }
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5540u); set32(c.r[6], c.r[17].w[0] + 1328u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001F5540u) [[unlikely]] return; }
L_001F5540:
    set32(c.r[16], c.r[29].w[0] + 100u);
    st32((c.r[16].w[0]), 0u);
    c.f[1] = ld32((c.r[29].w[0] + 96u));
    c.f[0] = ld32((c.r[16].w[0]));
    set32(c.r[19], c.r[29].w[0] + 104u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x37270000u);
    c.f[2] = ld32((c.r[19].w[0]));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.r[2].d[0] = c.r[2].d[0] | 50604ull;
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 17;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F55A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F558Cu); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x001F558Cu) [[unlikely]] return; }
L_001F558C:
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F559Cu); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x001F559Cu) [[unlikely]] return; }
L_001F559C:
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[19].w[0]), c.f[0]);
    c.budget -= 2;
L_001F55A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F55ACu);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x001F55ACu) [[unlikely]] return; }
L_001F55AC:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & 127ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] - 16384u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F55C8u); c.r[19].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001F55C8u) [[unlikely]] return; }
L_001F55C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F55D0u); c.r[4].d[0] = c.r[19].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F55D0u) [[unlikely]] return; }
L_001F55D0:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F55DCu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001F55DCu) [[unlikely]] return; }
L_001F55DC:
    c.f[12] = ld32((c.r[18].w[0] + 332u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F55ECu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001F55ECu) [[unlikely]] return; }
L_001F55EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], c.r[18].w[0] + 16u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5604u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001F5604u) [[unlikely]] return; }
L_001F5604:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));  if (t) { goto L_001F5678; } }
L_001F560C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5614u);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x001F5614u) [[unlikely]] return; }
L_001F5614:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5630u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x001F5630u) [[unlikely]] return; }
L_001F5630:
    c.f[3] = ld32((c.r[18].w[0] + 332u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5660u); st32((c.r[18].w[0] + 20u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x001F5660u) [[unlikely]] return; }
L_001F5660:
    c.f[2] = ld32((c.r[18].w[0] + 332u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 24u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.budget -= 6;
L_001F5678:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[4], c.r[18].w[0] + 16u);  if (t) { goto L_001F56A0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[6], c.r[18].w[0] + 16u);  if (t) { goto L_001F56B8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F56B4; } }
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 1;
L_001F56A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F56A8u);  if (depth < kMaxDepth) unit_0045(c, 192u, depth + 1u); else { c.pc = 0x00217510u; return; } if (c.pc != 0x001F56A8u) [[unlikely]] return; }
L_001F56A8:
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.budget -= 3;
L_001F56B4:
    set32(c.r[6], c.r[18].w[0] + 16u);
    c.budget -= 1;
L_001F56B8:
    set32(c.r[7], c.r[18].w[0] + 48u);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F56C8u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 146u, depth + 1u); else { c.pc = 0x001F22E0u; return; } if (c.pc != 0x001F56C8u) [[unlikely]] return; }
L_001F56C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_001F572C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 1;
L_001F56D4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 528u)));
    c.r[1].d[0] = c.r[3].sd[0] < 161ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F5728; } }
    c.f[3] = ld32((c.r[18].w[0] + 16u));
    c.f[2] = ld32((c.r[18].w[0] + 20u));
    c.f[1] = ld32((c.r[18].w[0] + 24u));
    c.f[0] = ld32((c.r[18].w[0] + 28u));
    set32(c.r[6], c.r[29].w[0] + 80u);
    set32(c.r[7], c.r[18].w[0] + 48u);
    st32((c.r[6].w[0]), c.f[3]);
    st32((c.r[6].w[0] + 4u), c.f[2]);
    st32((c.r[6].w[0] + 8u), c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5710u); st32((c.r[6].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_003C(c, 196u, depth + 1u); else { c.pc = 0x001F2B00u; return; } if (c.pc != 0x001F5710u) [[unlikely]] return; }
L_001F5710:
    c.r[3].d[0] = c.r[2].d[0] & 6ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F5728; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], 0u + 1u);
    st16((c.r[3].w[0] + 528u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 3;
L_001F5728:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001F572C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001F5750:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[5].w[0] + 32u));
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[1] = ld32((c.r[5].w[0] + 36u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 40u));
    st32((c.r[4].w[0] + 56u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 21;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[18], c.r[6], c.r[0]);  if (t) { goto L_001F57AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[20].w[0] + 304u);  if (t) { goto L_001F5914; } }
L_001F57AC:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F57B8u); st8((c.r[20].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x001F57B8u) [[unlikely]] return; }
L_001F57B8:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F57D0u); c.r[16].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x001F57D0u) [[unlikely]] return; }
L_001F57D0:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.r[17].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F57ECu); c.r[16].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x001F57ECu) [[unlikely]] return; }
L_001F57EC:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & 31ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + 2048u);
    c.r[21].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[20].w[0] + 308u), 0u);
    st32((c.r[20].w[0] + 304u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[20].w[0] + 312u), c.r[2].w[0]);
    c.f[3] = ld32((c.r[20].w[0] + 304u));
    c.f[2] = ld32((c.r[20].w[0] + 308u));
    c.f[1] = ld32((c.r[20].w[0] + 312u));
    c.f[0] = ld32((c.r[20].w[0] + 316u));
    st32((c.r[20].w[0] + 288u), c.f[3]);
    st32((c.r[20].w[0] + 292u), c.f[2]);
    st32((c.r[20].w[0] + 296u), c.f[1]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5838u); st32((c.r[20].w[0] + 300u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001F5838u) [[unlikely]] return; }
L_001F5838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5840u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F5840u) [[unlikely]] return; }
L_001F5840:
    c.r[2].d[0] = c.r[21].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F584Cu); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001F584Cu) [[unlikely]] return; }
L_001F584C:
    set32(c.r[4], c.r[20].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5858u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001F5858u) [[unlikely]] return; }
L_001F5858:
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[20].w[0] + 304u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5874u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001F5874u) [[unlikely]] return; }
L_001F5874:
    set32(c.r[4], c.r[20].w[0] + 16u);
    set32(c.r[5], c.r[20].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5884u); set32(c.r[6], c.r[20].w[0] + 304u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001F5884u) [[unlikely]] return; }
L_001F5884:
    set32(c.r[6], c.r[20].w[0] + 16u);
    set32(c.r[7], c.r[20].w[0] + 48u);
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5898u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 196u, depth + 1u); else { c.pc = 0x001F2B00u; return; } if (c.pc != 0x001F5898u) [[unlikely]] return; }
L_001F5898:
    c.r[3].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F58B0; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 347u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F596C; } }
L_001F58B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F58B8u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001F58B8u) [[unlikely]] return; }
L_001F58B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F58C0u); c.r[4].d[0] = c.r[16].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F58C0u) [[unlikely]] return; }
L_001F58C0:
    set32(c.r[4], c.r[20].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F58CCu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001F58CCu) [[unlikely]] return; }
L_001F58CC:
    c.f[12] = ld32((c.r[18].w[0]));
    set32(c.r[4], c.r[20].w[0] + 288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F58DCu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001F58DCu) [[unlikely]] return; }
L_001F58DC:
    set32(c.r[4], c.r[20].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F58E8u); set32(c.r[5], c.r[20].w[0] + 304u);  if (depth < kMaxDepth) unit_000F(c, 25u, depth + 1u); else { c.pc = 0x0013CB10u; return; } if (c.pc != 0x001F58E8u) [[unlikely]] return; }
L_001F58E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C360000u);
    set32(c.r[4], c.r[20].w[0] + 288u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5900u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001F5900u) [[unlikely]] return; }
L_001F5900:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], 0u + 90u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 528u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_001F596C; } }
    set32(c.r[4], c.r[20].w[0] + 304u);
    c.budget -= 1;
L_001F5914:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F591Cu); set32(c.r[5], c.r[20].w[0] + 288u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001F591Cu) [[unlikely]] return; }
L_001F591C:
    set32(c.r[4], c.r[20].w[0] + 16u);
    set32(c.r[5], c.r[20].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F592Cu); set32(c.r[6], c.r[20].w[0] + 304u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001F592Cu) [[unlikely]] return; }
L_001F592C:
    set32(c.r[6], c.r[20].w[0] + 16u);
    set32(c.r[7], c.r[20].w[0] + 48u);
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5940u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 196u, depth + 1u); else { c.pc = 0x001F2B00u; return; } if (c.pc != 0x001F5940u) [[unlikely]] return; }
L_001F5940:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], c.r[3].w[0] + 528u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 528u)));
    c.r[1].d[0] = c.r[3].sd[0] < 81ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F596C; } }
    c.r[3].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F596C; } }
    set32(c.r[3], 0u + 1u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001F596C:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001F5990:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.f[20] = ld32((c.r[1].w[0] - 21936u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[0] = ld32((c.r[5].w[0] + 32u));
    c.f[1] = c.r[2].w[0];
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.f[21] = ld32((c.r[1].w[0] - 21928u));
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[2] = ld32((c.r[5].w[0] + 36u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[4].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 40u));
    st32((c.r[4].w[0] + 56u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 28;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (t) { goto L_001F5A08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 16u);  if (t) { goto L_001F5B58; } }
L_001F5A08:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5A1Cu); st32((c.r[17].w[0] + 332u), c.f[0]);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x001F5A1Cu) [[unlikely]] return; }
L_001F5A1C:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F5A44; } }
    c.f[0] = ld32((c.r[17].w[0] + 332u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40200000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 332u), c.f[0]);
    c.budget -= 6;
L_001F5A44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5A4Cu);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x001F5A4Cu) [[unlikely]] return; }
L_001F5A4C:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5A64u); c.r[18].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x001F5A64u) [[unlikely]] return; }
L_001F5A64:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 127ull;
    c.r[19].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 4096u);
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5A88u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x001F5A88u) [[unlikely]] return; }
L_001F5A88:
    c.f[2] = ld32((c.r[17].w[0] + 332u));
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5AA8u); st32((c.r[17].w[0] + 20u), 0u);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x001F5AA8u) [[unlikely]] return; }
L_001F5AA8:
    c.f[2] = ld32((c.r[17].w[0] + 332u));
    c.r[18].d[0] = c.r[18].d[0] & 65535ull;
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5AC8u); st32((c.r[17].w[0] + 24u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x001F5AC8u) [[unlikely]] return; }
L_001F5AC8:
    c.f[2] = ld32((c.r[17].w[0] + 332u));
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5AE8u); st32((c.r[29].w[0] + 100u), 0u);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x001F5AE8u) [[unlikely]] return; }
L_001F5AE8:
    c.f[2] = ld32((c.r[17].w[0] + 332u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    set32(c.r[4], c.r[17].w[0] + 288u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    set32(c.r[6], c.r[17].w[0] + 16u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5B0Cu); st32((c.r[29].w[0] + 104u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001F5B0Cu) [[unlikely]] return; }
L_001F5B0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3BB60000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    set32(c.r[4], c.r[17].w[0] + 288u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5B24u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001F5B24u) [[unlikely]] return; }
L_001F5B24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5B2Cu); set32(c.r[4], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0045(c, 192u, depth + 1u); else { c.pc = 0x00217510u; return; } if (c.pc != 0x001F5B2Cu) [[unlikely]] return; }
L_001F5B2C:
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    set32(c.r[6], c.r[17].w[0] + 16u);
    set32(c.r[7], c.r[17].w[0] + 48u);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5B4Cu); st32((c.r[17].w[0] + 20u), c.f[0]);  if (depth < kMaxDepth) unit_003C(c, 146u, depth + 1u); else { c.pc = 0x001F22E0u; return; } if (c.pc != 0x001F5B4Cu) [[unlikely]] return; }
L_001F5B4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);  if (t) { goto L_001F5C44; } }
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 1;
L_001F5B58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5B60u); set32(c.r[5], c.r[17].w[0] + 288u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001F5B60u) [[unlikely]] return; }
L_001F5B60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5B68u); set32(c.r[4], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0045(c, 192u, depth + 1u); else { c.pc = 0x00217510u; return; } if (c.pc != 0x001F5B68u) [[unlikely]] return; }
L_001F5B68:
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    set32(c.r[6], c.r[17].w[0] + 16u);
    set32(c.r[7], c.r[17].w[0] + 48u);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5B88u); st32((c.r[17].w[0] + 20u), c.f[0]);  if (depth < kMaxDepth) unit_003C(c, 196u, depth + 1u); else { c.pc = 0x001F2B00u; return; } if (c.pc != 0x001F5B88u) [[unlikely]] return; }
L_001F5B88:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[5], c.r[3].w[0] + 528u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 528u)));
    c.r[1].d[0] = c.r[3].sd[0] < 161ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F5C40; } }
    c.f[3] = ld32((c.r[17].w[0] + 16u));
    c.f[2] = ld32((c.r[17].w[0] + 20u));
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[3].d[0] = c.r[2].d[0] & 2ull;
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0] + 12u), c.f[0]);  if (t) { goto L_001F5BD4; } }
    set32(c.r[3], 0u + 1u);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001F5BD4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43F50000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = ld32((c.r[29].w[0] + 96u));
    c.f[0] = fp::add(c.f[2], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F5C34; } }
    c.f[0] = fp::sub(c.f[20], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F5C34; } }
    c.f[1] = ld32((c.r[29].w[0] + 104u));
    c.f[0] = fp::add(c.f[2], c.f[21]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F5C34; } }
    c.f[0] = fp::sub(c.f[21], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F5C40; } }
L_001F5C34:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], 0u + 1u);
    st16((c.r[3].w[0] + 528u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 3;
L_001F5C40:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001F5C44:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001F5C70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 812u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (t) { goto L_001F5CB4; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5CACu); st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_003D(c, 139u, depth + 1u); else { c.pc = 0x001F5990u; return; } if (c.pc != 0x001F5CACu) [[unlikely]] return; }
L_001F5CAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_001F5E1C; } }
L_001F5CB4:
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    st32((c.r[17].w[0] + 56u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F5CF8; } }
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.f[1] = c.r[2].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), c.f[0]);  if (t) { goto L_001F5D18; } }
L_001F5CF8:
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.budget -= 8;
L_001F5D18:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_001F5D30; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F5DD8; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_001F5D30:
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F5D64; } }
    c.f[0] = ld32((c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 332u), c.f[0]);  if (t) { goto L_001F5D7C; } }
L_001F5D64:
    c.f[0] = ld32((c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 332u), c.f[0]);
    c.budget -= 6;
L_001F5D7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5D84u);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x001F5D84u) [[unlikely]] return; }
L_001F5D84:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] - 8192u);
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5DA8u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x001F5DA8u) [[unlikely]] return; }
L_001F5DA8:
    c.f[1] = ld32((c.r[17].w[0] + 332u));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 304u), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5DC0u); st32((c.r[17].w[0] + 308u), 0u);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x001F5DC0u) [[unlikely]] return; }
L_001F5DC0:
    c.f[1] = ld32((c.r[17].w[0] + 332u));
    set32(c.r[3], 0u + 60u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 312u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st16((c.r[2].w[0] + 528u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_001F5DD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5DE0u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001F5DE0u) [[unlikely]] return; }
L_001F5DE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5DE8u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F5DE8u) [[unlikely]] return; }
L_001F5DE8:
    set32(c.r[4], c.r[17].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5DF4u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001F5DF4u) [[unlikely]] return; }
L_001F5DF4:
    set32(c.r[4], c.r[17].w[0] + 16u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5E04u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001F5E04u) [[unlikely]] return; }
L_001F5E04:
    set32(c.r[6], c.r[17].w[0] + 16u);
    set32(c.r[7], c.r[17].w[0] + 48u);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5E18u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 146u, depth + 1u); else { c.pc = 0x001F22E0u; return; } if (c.pc != 0x001F5E18u) [[unlikely]] return; }
L_001F5E18:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001F5E1C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001F5E30:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[5].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[2] = ld32((c.r[5].w[0] + 36u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[4].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 40u));
    st32((c.r[4].w[0] + 56u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 23;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[16], c.r[6], c.r[0]);  if (t) { goto L_001F5E94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));  if (t) { goto L_001F6014; } }
L_001F5E94:
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5EA0u); st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x001F5EA0u) [[unlikely]] return; }
L_001F5EA0:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5EB8u); c.r[17].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x001F5EB8u) [[unlikely]] return; }
L_001F5EB8:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[2], c.r[2].w[0] + 3072u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5EECu); st32((c.r[19].w[0] + 332u), c.f[0]);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x001F5EECu) [[unlikely]] return; }
L_001F5EEC:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F5F14; } }
    c.f[0] = ld32((c.r[19].w[0] + 332u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 332u), c.f[0]);
    c.budget -= 6;
L_001F5F14:
    st32((c.r[19].w[0] + 308u), 0u);
    st32((c.r[19].w[0] + 304u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5F28u); st32((c.r[19].w[0] + 312u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001F5F28u) [[unlikely]] return; }
L_001F5F28:
    c.r[17].d[0] = c.r[17].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5F34u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F5F34u) [[unlikely]] return; }
L_001F5F34:
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5F40u); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001F5F40u) [[unlikely]] return; }
L_001F5F40:
    set32(c.r[4], c.r[19].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5F4Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001F5F4Cu) [[unlikely]] return; }
L_001F5F4C:
    c.f[12] = ld32((c.r[19].w[0] + 332u));
    set32(c.r[4], c.r[19].w[0] + 304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5F5Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001F5F5Cu) [[unlikely]] return; }
L_001F5F5C:
    set32(c.r[4], c.r[19].w[0] + 16u);
    set32(c.r[5], c.r[19].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5F6Cu); set32(c.r[6], c.r[19].w[0] + 304u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001F5F6Cu) [[unlikely]] return; }
L_001F5F6C:
    set32(c.r[6], c.r[19].w[0] + 16u);
    set32(c.r[7], c.r[19].w[0] + 48u);
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5F80u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 196u, depth + 1u); else { c.pc = 0x001F2B00u; return; } if (c.pc != 0x001F5F80u) [[unlikely]] return; }
L_001F5F80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5F88u);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x001F5F88u) [[unlikely]] return; }
L_001F5F88:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] + 32767u);  if (t) { goto L_001F5FA8; } }
    set32(c.r[2], c.r[17].w[0] + 32256u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_001F5FB0; } }
    set32(c.r[2], c.r[17].w[0] + 32767u);
    c.budget -= 1;
L_001F5FA8:
    set32(c.r[2], c.r[2].w[0] + 513u);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_001F5FB0:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5FBCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x001F5FBCu) [[unlikely]] return; }
L_001F5FBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 288u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5FD8u); st32((c.r[19].w[0] + 292u), 0u);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x001F5FD8u) [[unlikely]] return; }
L_001F5FD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5FF0u); st32((c.r[19].w[0] + 296u), c.f[0]);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x001F5FF0u) [[unlikely]] return; }
L_001F5FF0:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    st8((c.r[19].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], 0u + 90u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 528u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_001F6084; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    c.budget -= 1;
L_001F6014:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F6028; } }
    set32(c.r[4], c.r[19].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6028u); set32(c.r[5], c.r[19].w[0] + 288u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001F6028u) [[unlikely]] return; }
L_001F6028:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 528u)));
    c.r[1].d[0] = c.r[3].sd[0] < 81ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F6084; } }
    c.f[3] = ld32((c.r[19].w[0] + 16u));
    c.f[2] = ld32((c.r[19].w[0] + 20u));
    c.f[1] = ld32((c.r[19].w[0] + 24u));
    c.f[0] = ld32((c.r[19].w[0] + 28u));
    set32(c.r[6], c.r[29].w[0] + 80u);
    set32(c.r[7], c.r[19].w[0] + 48u);
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    st32((c.r[6].w[0]), c.f[3]);
    st32((c.r[6].w[0] + 4u), c.f[2]);
    st32((c.r[6].w[0] + 8u), c.f[1]);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6070u); st32((c.r[6].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_003C(c, 146u, depth + 1u); else { c.pc = 0x001F22E0u; return; } if (c.pc != 0x001F6070u) [[unlikely]] return; }
L_001F6070:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F6084; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], 0u + 1u);
    st16((c.r[3].w[0] + 528u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 3;
L_001F6084:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001F60A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 144u);  if (t) { goto L_001F61A8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 9u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_001F614C; }
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F60E0u); set32(c.r[6], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001F60E0u) [[unlikely]] return; }
L_001F60E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F60E8u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x001F60E8u) [[unlikely]] return; }
L_001F60E8:
    set32(c.r[5], c.r[29].w[0] + 48u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F60F8u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 147u, depth + 1u); else { c.pc = 0x0026E4D0u; return; } if (c.pc != 0x001F60F8u) [[unlikely]] return; }
L_001F60F8:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 72u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6108u); set32(c.r[6], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_005B(c, 158u, depth + 1u); else { c.pc = 0x0026E5D0u; return; } if (c.pc != 0x001F6108u) [[unlikely]] return; }
L_001F6108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6110u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001F6110u) [[unlikely]] return; }
L_001F6110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6118u); set32(c.r[4], ld32((c.r[29].w[0] + 76u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F6118u) [[unlikely]] return; }
L_001F6118:
    set32(c.r[2], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6124u); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001F6124u) [[unlikely]] return; }
L_001F6124:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F612Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001F612Cu) [[unlikely]] return; }
L_001F612C:
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    st32((c.r[17].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    st32((c.r[17].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 72u), c.f[0]);  if (t) { goto L_001F6150; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_001F614C:
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001F6150:
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], 0u + 2u);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    st32((c.r[16].w[0] + 56u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6178u); st32((c.r[16].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 316u, depth + 1u); else { c.pc = 0x0013B910u; return; } if (c.pc != 0x001F6178u) [[unlikely]] return; }
L_001F6178:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6180u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001F6180u) [[unlikely]] return; }
L_001F6180:
    set32(c.r[4], c.r[17].w[0] + 16u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6190u); set32(c.r[6], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 301u, depth + 1u); else { c.pc = 0x0013B6D0u; return; } if (c.pc != 0x001F6190u) [[unlikely]] return; }
L_001F6190:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6198u); set32(c.r[4], c.r[17].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001F6198u) [[unlikely]] return; }
L_001F6198:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F61A0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 316u, depth + 1u); else { c.pc = 0x0013B910u; return; } if (c.pc != 0x001F61A0u) [[unlikely]] return; }
L_001F61A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_001F61DC; } }
L_001F61A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F61B0u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_000E(c, 316u, depth + 1u); else { c.pc = 0x0013B910u; return; } if (c.pc != 0x001F61B0u) [[unlikely]] return; }
L_001F61B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F61B8u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001F61B8u) [[unlikely]] return; }
L_001F61B8:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 14u)));
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F61C8u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_000E(c, 298u, depth + 1u); else { c.pc = 0x0013B660u; return; } if (c.pc != 0x001F61C8u) [[unlikely]] return; }
L_001F61C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F61D0u); set32(c.r[4], c.r[17].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001F61D0u) [[unlikely]] return; }
L_001F61D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F61D8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 316u, depth + 1u); else { c.pc = 0x0013B910u; return; } if (c.pc != 0x001F61D8u) [[unlikely]] return; }
L_001F61D8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001F61DC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001F61F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6218u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x001F6218u) [[unlikely]] return; }
L_001F6218:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F6260; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 12u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[2].w[0] + 24u), c.r[17].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] + 25216u);
    st16((c.r[2].w[0] + 164u), static_cast<std::uint16_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    set32(c.r[3], c.r[3].w[0] + 27536u);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 16;
L_001F6260:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F6280:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 31456u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001F4000u < 16384u) { entry = entries_003D[(t - 0x001F4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001F62A0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[4].w[0] + 320u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[8], c.r[3].w[0] + 31424u);
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], 0u + 10u);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    mmi::paddub(c.r[9], c.r[2], c.r[0]);
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[10], c.r[2], c.r[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_001F6320; } }
    set32(c.r[11], c.r[2].w[0] + c.r[11].w[0]);
    c.budget -= 1;
L_001F62DC:
    st8((c.r[11].w[0] + 114u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[11].w[0] + 112u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.f[0] = ld32((c.r[8].w[0]));
    set32(c.r[3], c.r[7].w[0] + 1u);
    c.r[7].d[0] = c.r[3].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    st32((c.r[9].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 4u));
    st32((c.r[9].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 8u));
    st32((c.r[9].w[0] + 72u), c.f[0]);
    st32((c.r[10].w[0] + 104u), c.r[5].w[0]);
    set32(c.r[8], c.r[8].w[0] + 12u);
    set32(c.r[9], c.r[9].w[0] + 16u);
    set32(c.r[10], c.r[10].w[0] + 4u);
    st8((c.r[11].w[0] + 116u), static_cast<std::uint8_t>(0u));
    c.budget -= 17;
L_001F6320:
    c.r[11].d[0] = c.r[7].d[0] << 56;
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 56);
    c.r[3].d[0] = c.r[11].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[11], c.r[2].w[0] + c.r[11].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F62DCu | kUnwind; return; } goto L_001F62DC; }
    st32((c.r[2].w[0] + 96u), 0u);
    st32((c.r[2].w[0] + 100u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[6], c.r[3].w[0] + 30576u);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], c.r[3].w[0] + 30577u);
    set32(c.r[3], c.r[7].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[11], c.r[3].w[0] + 30580u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[10], c.r[3].w[0] + 30580u);
    st8((c.r[2].w[0] + 120u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[9], c.r[3].w[0] + 30580u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[8], c.r[3].w[0] + 30584u);
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[2].w[0] + 118u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[13].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[7], c.r[3].w[0] + 30588u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[6], c.r[3].w[0] + 30592u);
    set32(c.r[12], c.r[13].w[0] << 3);
    set32(c.r[12], c.r[12].w[0] - c.r[13].w[0]);
    set32(c.r[12], c.r[12].w[0] << 2);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    c.f[0] = ld32((c.r[11].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], c.r[2].w[0] + 30596u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].d[0] = 0ull | 65535ull;
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + 30600u);
    set32(c.r[11], c.r[12].w[0] << 3);
    set32(c.r[11], c.r[11].w[0] - c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    c.f[0] = ld32((c.r[10].w[0]));
    st32((c.r[4].w[0] + 116u), c.f[0]);
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[10], c.r[11].w[0] << 3);
    set32(c.r[10], c.r[10].w[0] - c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    c.f[0] = ld32((c.r[9].w[0]));
    st32((c.r[4].w[0] + 120u), c.f[0]);
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[9], c.r[10].w[0] << 3);
    set32(c.r[9], c.r[9].w[0] - c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.f[0] = ld32((c.r[8].w[0]));
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[8], c.r[9].w[0] << 3);
    set32(c.r[8], c.r[8].w[0] - c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    st32((c.r[4].w[0] + 52u), c.f[0]);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[7], c.r[8].w[0] << 3);
    set32(c.r[7], c.r[7].w[0] - c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[4].w[0] + 56u), c.f[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[6], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[5], c.r[5].w[0] + 32767u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 80u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 97;
    { st32((c.r[4].w[0] + 88u), c.r[2].w[0]);  goto L_001F64C0; }
L_001F64C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[4].w[0] + 320u);  if (t) { goto L_001F64F4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F64EC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001F64EC:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 274u)));
    c.budget -= 2;
L_001F64F4:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[3].d[0];  if (t) { goto L_001F69FC; } }
    set32(c.r[7], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[7].d[0]; c.r[10].sd[0] = static_cast<std::int32_t>(0xBE190000u);  if (t) { goto L_001F6860; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[3].d[0];  if (t) { goto L_001F66EC; } }
    set32(c.r[7], 0u + 1u);
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[7].d[0]) { c.r[8].sd[0] = static_cast<std::int32_t>(0xBD990000u);  goto L_001F6554; }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_001F6538; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));  if (t) { goto L_001F6A7C; } }
L_001F6538:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_001F6A78; } }
    set32(c.r[3], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 116u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[5].w[0] + 117u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[8].sd[0] = static_cast<std::int32_t>(0xBD990000u);
    c.budget -= 5;
L_001F6554:
    c.r[8].d[0] = c.r[8].d[0] | 39322ull;
    c.f[4] = c.r[8].w[0];
    set32(c.r[11], 0u + 1u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3F200000u);
    c.f[3] = c.r[8].w[0];
    set32(c.r[10], 0u + 2u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[8].d[0] = c.r[8].d[0] | 52429ull;
    c.f[2] = c.r[8].w[0];
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0xBE800000u);
    c.f[1] = c.r[8].w[0];
    mmi::paddub(c.r[7], c.r[5], c.r[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[5] = c.r[8].w[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0xBE000000u);
    c.f[6] = c.r[8].w[0];
    c.budget -= 19;
    { const bool t = 0ull == 0ull; c.r[9].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_001F66D0; } }
    set32(c.r[12], c.r[5].w[0] + c.r[12].w[0]);
    c.budget -= 1;
L_001F65A4:
    c.r[8].d[0] = ld8((c.r[12].w[0] + 114u));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[11].d[0];  if (t) { goto L_001F6650; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_001F65C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { goto L_001F66C4; } }
L_001F65C0:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0] + 112u)));
    c.r[1].d[0] = c.r[8].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[13], c.r[12].w[0] + 112u);  if (t) { goto L_001F65F8; } }
    c.f[0] = ld32((c.r[7].w[0] + 64u));
    c.f[0] = fp::add(c.f[0], c.f[5]);
    st32((c.r[7].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 68u));
    c.f[0] = fp::add(c.f[0], c.f[5]);
    st32((c.r[7].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 72u));
    c.f[0] = fp::add(c.f[0], c.f[5]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 72u), c.f[0]);  if (t) { goto L_001F6620; } }
L_001F65F8:
    c.f[0] = ld32((c.r[7].w[0] + 64u));
    c.f[0] = fp::add(c.f[0], c.f[6]);
    st32((c.r[7].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 68u));
    c.f[0] = fp::add(c.f[0], c.f[6]);
    st32((c.r[7].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 72u));
    c.f[0] = fp::add(c.f[0], c.f[6]);
    st32((c.r[7].w[0] + 72u), c.f[0]);
    c.budget -= 10;
L_001F6620:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0])));
    set32(c.r[8], c.r[8].w[0] - 1u);
    st8((c.r[13].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = c.r[8].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_001F66C0; } }
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st32((c.r[7].w[0] + 64u), c.r[9].w[0]);
    st32((c.r[7].w[0] + 68u), c.r[9].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 72u), c.r[9].w[0]);  if (t) { goto L_001F66C0; } }
L_001F6650:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0] + 112u)));
    c.r[1].d[0] = c.r[8].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[13], c.r[12].w[0] + 112u);  if (t) { goto L_001F667C; } }
    c.f[0] = ld32((c.r[7].w[0] + 64u));
    c.f[0] = fp::add(c.f[0], c.f[4]);
    st32((c.r[7].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 68u));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 68u), c.f[0]);  if (t) { goto L_001F6698; } }
L_001F667C:
    c.f[0] = ld32((c.r[7].w[0] + 64u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[7].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 68u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[7].w[0] + 68u), c.f[0]);
    c.budget -= 7;
L_001F6698:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0])));
    set32(c.r[8], c.r[8].w[0] - 1u);
    st8((c.r[13].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = c.r[8].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_001F66C0; } }
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st32((c.r[7].w[0] + 64u), c.r[9].w[0]);
    st32((c.r[7].w[0] + 72u), c.r[9].w[0]);
    c.budget -= 3;
L_001F66C0:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_001F66C4:
    c.r[3].d[0] = c.r[3].d[0] << 56;
    set32(c.r[7], c.r[7].w[0] + 16u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 3;
L_001F66D0:
    c.r[12].d[0] = c.r[3].d[0] << 56;
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 56);
    c.r[8].d[0] = c.r[12].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[8].d[0] != 0ull) { set32(c.r[12], c.r[5].w[0] + c.r[12].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F65A4u | kUnwind; return; } goto L_001F65A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F6A78; } }
L_001F66EC:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != 0ull; c.r[7].sd[0] = static_cast<std::int32_t>(0xBE190000u);  if (t) { goto L_001F6710; } }
    set32(c.r[3], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 10u);
    st8((c.r[5].w[0] + 112u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 113u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F6A78; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0xBE190000u);
    c.budget -= 1;
L_001F6710:
    c.r[7].d[0] = c.r[7].d[0] | 39322ull;
    c.f[3] = c.r[7].w[0];
    set32(c.r[9], 0u + 1u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[7].d[0] = c.r[7].d[0] | 39322ull;
    c.f[4] = c.r[7].w[0];
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[2] = c.r[7].w[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0xBE800000u);
    c.f[1] = c.r[7].w[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[10], c.r[5], c.r[0]);  if (t) { goto L_001F6840; } }
    set32(c.r[11], c.r[5].w[0] + c.r[8].w[0]);
    c.budget -= 1;
L_001F6748:
    c.r[7].d[0] = ld8((c.r[11].w[0] + 114u));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_001F67D8; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 112u)));
    set32(c.r[7], c.r[8].w[0] + 1u);
    st8((c.r[11].w[0] + 112u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = c.r[8].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[7].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] + 1u);  goto L_001F6834; }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.budget -= 3;
    if (c.r[7].d[0] != 0ull) { c.r[7].d[0] = c.r[7].d[0] ^ 1ull;  goto L_001F67AC; }
    c.r[7].d[0] = c.r[7].d[0] ^ 1ull;
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.f[0] = ld32((c.r[10].w[0] + 64u));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[10].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[10].w[0] + 68u));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[10].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[10].w[0] + 72u));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[10].w[0] + 72u), c.f[0]);  if (t) { goto L_001F6830; } }
    c.r[7].d[0] = c.r[7].d[0] ^ 1ull;
    c.budget -= 1;
L_001F67AC:
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.f[0] = ld32((c.r[10].w[0] + 64u));
    c.f[0] = fp::add(c.f[0], c.f[4]);
    st32((c.r[10].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[10].w[0] + 68u));
    c.f[0] = fp::add(c.f[0], c.f[4]);
    st32((c.r[10].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[10].w[0] + 72u));
    c.f[0] = fp::add(c.f[0], c.f[4]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[10].w[0] + 72u), c.f[0]);  if (t) { goto L_001F6830; } }
L_001F67D8:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[9].d[0];  if (t) { goto L_001F6830; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 112u)));
    set32(c.r[7], c.r[8].w[0] + 1u);
    st8((c.r[11].w[0] + 112u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = c.r[8].d[0] & 3ull;
    c.r[1].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F6818; } }
    c.f[0] = ld32((c.r[10].w[0] + 64u));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[10].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[10].w[0] + 68u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[10].w[0] + 68u), c.f[0]);  if (t) { goto L_001F6830; } }
L_001F6818:
    c.f[0] = ld32((c.r[10].w[0] + 64u));
    c.f[0] = fp::add(c.f[0], c.f[4]);
    st32((c.r[10].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[10].w[0] + 68u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[10].w[0] + 68u), c.f[0]);
    c.budget -= 6;
L_001F6830:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_001F6834:
    c.r[3].d[0] = c.r[3].d[0] << 56;
    set32(c.r[10], c.r[10].w[0] + 16u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 3;
L_001F6840:
    c.r[8].d[0] = c.r[3].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.r[7].d[0] = c.r[8].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[11], c.r[5].w[0] + c.r[8].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F6748u | kUnwind; return; } goto L_001F6748; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F6A78; } }
    c.r[10].sd[0] = static_cast<std::int32_t>(0xBE190000u);
    c.budget -= 1;
L_001F6860:
    c.r[10].d[0] = c.r[10].d[0] | 39322ull;
    c.f[0] = c.r[10].w[0];
    mmi::paddub(c.r[9], c.r[0], c.r[0]);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[8] = c.r[10].w[0];
    mmi::paddub(c.r[7], c.r[5], c.r[0]);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[10].d[0] = c.r[10].d[0] | 39322ull;
    c.f[1] = c.r[10].w[0];
    c.r[10].sd[0] = static_cast<std::int32_t>(0xBE800000u);
    c.f[7] = c.r[10].w[0];
    c.r[10].sd[0] = static_cast<std::int32_t>(0xBE120000u);
    c.r[10].d[0] = c.r[10].d[0] | 18725ull;
    c.f[6] = c.r[10].w[0];
    c.r[10].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[5] = c.r[10].w[0];
    c.budget -= 18;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[8], c.r[5], c.r[0]);  if (t) { goto L_001F69E0; } }
    set32(c.r[11], c.r[5].w[0] + c.r[11].w[0]);
    c.budget -= 1;
L_001F68AC:
    c.r[10].d[0] = ld8((c.r[11].w[0] + 114u));
    c.budget -= 3;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { goto L_001F6954; } }
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 112u)));
    c.r[10].d[0] = c.r[10].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[10].d[0] == 0ull; set32(c.r[12], c.r[11].w[0] + 112u);  if (t) { goto L_001F6930; } }
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.budget -= 3;
    if (c.r[10].d[0] != 0ull) { c.r[10].d[0] = c.r[10].d[0] ^ 1ull;  goto L_001F6908; }
    c.r[10].d[0] = c.r[10].d[0] ^ 1ull;
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.f[2] = ld32((c.r[7].w[0] + 64u));
    c.f[2] = fp::add(c.f[2], c.f[0]);
    st32((c.r[7].w[0] + 64u), c.f[2]);
    c.f[2] = ld32((c.r[7].w[0] + 68u));
    c.f[2] = fp::add(c.f[2], c.f[8]);
    st32((c.r[7].w[0] + 68u), c.f[2]);
    c.f[2] = ld32((c.r[7].w[0] + 72u));
    c.f[2] = fp::add(c.f[2], c.f[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 72u), c.f[2]);  if (t) { goto L_001F6930; } }
    c.r[10].d[0] = c.r[10].d[0] ^ 1ull;
    c.budget -= 1;
L_001F6908:
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.f[2] = ld32((c.r[7].w[0] + 64u));
    c.f[2] = fp::add(c.f[2], c.f[1]);
    st32((c.r[7].w[0] + 64u), c.f[2]);
    c.f[2] = ld32((c.r[7].w[0] + 68u));
    c.f[2] = fp::add(c.f[2], c.f[7]);
    st32((c.r[7].w[0] + 68u), c.f[2]);
    c.f[2] = ld32((c.r[7].w[0] + 72u));
    c.f[2] = fp::add(c.f[2], c.f[1]);
    st32((c.r[7].w[0] + 72u), c.f[2]);
    c.budget -= 10;
L_001F6930:
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0])));
    set32(c.r[10], c.r[11].w[0] - 1u);
    c.r[1].d[0] = c.r[11].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[12].w[0]), static_cast<std::uint8_t>(c.r[10].w[0]));  if (t) { goto L_001F69C8; } }
    c.f[2] = ld32((c.r[8].w[0] + 104u));
    c.f[2] = fp::add(c.f[2], c.f[6]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0] + 104u), c.f[2]);  if (t) { goto L_001F69C8; } }
L_001F6954:
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[10].d[0] == 0ull; set32(c.r[12], c.r[11].w[0] + 112u);  if (t) { goto L_001F69C4; } }
    c.f[4] = ld32((c.r[7].w[0] + 64u));
    c.f[2] = c.r[10].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[3] = fp::sub(c.f[5], c.f[4]);
    fpu_div(c, 2u, c.f[3], c.f[2]);
    c.f[2] = fp::add(c.f[4], c.f[2]);
    st32((c.r[7].w[0] + 64u), c.f[2]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0])));
    c.f[4] = ld32((c.r[7].w[0] + 68u));
    c.f[2] = c.r[10].w[0];
    c.f[3] = c.f[4] ^ fp::kSign;
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 2u, c.f[3], c.f[2]);
    c.f[2] = fp::add(c.f[4], c.f[2]);
    st32((c.r[7].w[0] + 68u), c.f[2]);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0])));
    set32(c.r[10], c.r[11].w[0] - 1u);
    c.r[1].d[0] = c.r[11].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 21;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[12].w[0]), static_cast<std::uint8_t>(c.r[10].w[0]));  if (t) { goto L_001F69C8; } }
    c.f[2] = ld32((c.r[8].w[0] + 104u));
    c.f[2] = fp::add(c.f[2], c.f[6]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0] + 104u), c.f[2]);  if (t) { goto L_001F69C8; } }
L_001F69C4:
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001F69C8:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[9].d[0] = c.r[9].d[0] << 56;
    set32(c.r[7], c.r[7].w[0] + 16u);
    set32(c.r[8], c.r[8].w[0] + 4u);
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 56);
    c.budget -= 6;
L_001F69E0:
    c.r[11].d[0] = c.r[9].d[0] << 56;
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 56);
    c.r[10].d[0] = c.r[11].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[10].d[0] != 0ull) { set32(c.r[11], c.r[5].w[0] + c.r[11].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F68ACu | kUnwind; return; } goto L_001F68AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F6A78; } }
L_001F69FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[9], c.r[3].w[0] + 31424u);
    set32(c.r[8], 0u + 10u);
    mmi::paddub(c.r[13], c.r[0], c.r[0]);
    mmi::paddub(c.r[10], c.r[5], c.r[0]);
    mmi::paddub(c.r[11], c.r[5], c.r[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[7].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_001F6A60; } }
    set32(c.r[12], c.r[5].w[0] + c.r[12].w[0]);
    c.budget -= 1;
L_001F6A20:
    st8((c.r[12].w[0] + 112u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.f[0] = ld32((c.r[9].w[0]));
    set32(c.r[3], c.r[13].w[0] + 1u);
    c.r[13].d[0] = c.r[3].d[0] << 56;
    c.r[13].d[0] = static_cast<std::uint64_t>(c.r[13].sd[0] >> 56);
    st32((c.r[10].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[9].w[0] + 4u));
    st32((c.r[10].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[9].w[0] + 8u));
    st32((c.r[10].w[0] + 72u), c.f[0]);
    st32((c.r[11].w[0] + 104u), c.r[7].w[0]);
    set32(c.r[9], c.r[9].w[0] + 12u);
    set32(c.r[10], c.r[10].w[0] + 16u);
    set32(c.r[11], c.r[11].w[0] + 4u);
    st8((c.r[12].w[0] + 116u), static_cast<std::uint8_t>(0u));
    c.budget -= 16;
L_001F6A60:
    c.r[12].d[0] = c.r[13].d[0] << 56;
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 56);
    c.r[3].d[0] = c.r[12].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[12], c.r[5].w[0] + c.r[12].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F6A20u | kUnwind; return; } goto L_001F6A20; }
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001F6A78:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 1;
L_001F6A7C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001F6A94; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 760u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F6A98; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001F6A94:
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001F6A98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F6AA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 118u)));
    set32(c.r[18], ld32((c.r[4].w[0] + 24u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6AD4u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001F6AD4u) [[unlikely]] return; }
L_001F6AD4:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6AE0u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x001F6AE0u) [[unlikely]] return; }
L_001F6AE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6AE8u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001F6AE8u) [[unlikely]] return; }
L_001F6AE8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 118u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6AFCu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x001F6AFCu) [[unlikely]] return; }
L_001F6AFC:
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6B0Cu); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001F6B0Cu) [[unlikely]] return; }
L_001F6B0C:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6B1Cu); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x001F6B1Cu) [[unlikely]] return; }
L_001F6B1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6B24u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001F6B24u) [[unlikely]] return; }
L_001F6B24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6B2Cu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001F6B2Cu) [[unlikely]] return; }
L_001F6B2C:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6B3Cu); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x001F6B3Cu) [[unlikely]] return; }
L_001F6B3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6B44u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x001F6B44u) [[unlikely]] return; }
L_001F6B44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6B4Cu); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001F6B4Cu) [[unlikely]] return; }
L_001F6B4C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F6B70:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001F6B80:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_001F6B90:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 440u)));
    set32(c.r[16], c.r[21].w[0] + 320u);
    set32(c.r[2], c.r[28].w[0] - 29812u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 18;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6BD8u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F6BD8u) [[unlikely]] return; }
L_001F6BD8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 31472u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20340u), c.r[3].w[0]);
    set32(c.r[3], c.r[29].w[0] + 160u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20400u), c.r[3].w[0]);
    set32(c.r[3], c.r[29].w[0] + 128u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[3].w[0]);
    set32(c.r[3], c.r[28].w[0] - 29816u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20372u), 0u);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[3].w[0]);
    set32(c.r[3], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20352u), 0u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[18], c.r[16], c.r[0]);
    c.budget -= 30;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[19], c.r[16], c.r[0]);  if (t) { goto L_001F6E28; } }
    set32(c.r[20], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 1;
L_001F6C54:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] + 1u);  if (t) { goto L_001F6E14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6C68u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001F6C68u) [[unlikely]] return; }
L_001F6C68:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6C78u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 210u, depth + 1u); else { c.pc = 0x00102500u; return; } if (c.pc != 0x001F6C78u) [[unlikely]] return; }
L_001F6C78:
    set32(c.r[2], ld32((c.r[28].w[0] - 26224u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[21].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6C8Cu); set32(c.r[5], c.r[2].w[0] + 384u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001F6C8Cu) [[unlikely]] return; }
L_001F6C8C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6C98u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001F6C98u) [[unlikely]] return; }
L_001F6C98:
    c.f[13] = ld32((c.r[29].w[0] + 152u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6CA4u); c.f[12] = ld32((c.r[29].w[0] + 144u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x001F6CA4u) [[unlikely]] return; }
L_001F6CA4:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[21].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6CB4u); st32((c.r[21].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001F6CB4u) [[unlikely]] return; }
L_001F6CB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6CBCu); set32(c.r[4], ld32((c.r[21].w[0] + 84u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F6CBCu) [[unlikely]] return; }
L_001F6CBC:
    c.f[0] = ld32((c.r[18].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6CD0u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001F6CD0u) [[unlikely]] return; }
L_001F6CD0:
    st8((c.r[28].w[0] - 29813u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[2].w[0] - 32224u);
    c.r[5].d[0] = ld8((c.r[20].w[0] + 114u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], c.r[2].w[0] - 32272u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] - 20388u), c.r[2].w[0]);
    c.r[5].d[0] = ld8((c.r[20].w[0] + 114u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[2].w[0] - 32176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[1].w[0] - 20384u), c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[20].w[0] + 114u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 32152u);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[20].w[0] + 114u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6D48u); set32(c.r[22], c.r[20].w[0] + 114u);  if (depth < kMaxDepth) unit_001E(c, 201u, depth + 1u); else { c.pc = 0x0017BBC0u; return; } if (c.pc != 0x001F6D48u) [[unlikely]] return; }
L_001F6D48:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[22].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F6DD0; } }
    set32(c.r[2], 0u + 28u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20354u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20348u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 64u));
    c.f[2] = ld32((c.r[21].w[0] + 112u));
    c.f[1] = ld32((c.r[19].w[0] + 72u));
    c.f[0] = ld32((c.r[21].w[0] + 120u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.f[12] = fp::mul(c.f[3], c.f[2]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6D98u); c.f[14] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 18u, depth + 1u); else { c.pc = 0x0013C8A0u; return; } if (c.pc != 0x001F6D98u) [[unlikely]] return; }
L_001F6D98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6DA0u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001F6DA0u) [[unlikely]] return; }
L_001F6DA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6DACu); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 162u, depth + 1u); else { c.pc = 0x0016EA60u; return; } if (c.pc != 0x001F6DACu) [[unlikely]] return; }
L_001F6DAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6DB4u); c.r[4].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001F6DB4u) [[unlikely]] return; }
L_001F6DB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6DBCu); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001F6DBCu) [[unlikely]] return; }
L_001F6DBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6DC8u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 162u, depth + 1u); else { c.pc = 0x0016EA60u; return; } if (c.pc != 0x001F6DC8u) [[unlikely]] return; }
L_001F6DC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F6E10; } }
L_001F6DD0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20348u), static_cast<std::uint8_t>(0u));
    c.f[3] = ld32((c.r[19].w[0] + 64u));
    c.f[2] = ld32((c.r[21].w[0] + 112u));
    c.f[1] = ld32((c.r[19].w[0] + 68u));
    c.f[0] = ld32((c.r[21].w[0] + 116u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.f[12] = fp::mul(c.f[3], c.f[2]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6DFCu); c.f[13] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 18u, depth + 1u); else { c.pc = 0x0013C8A0u; return; } if (c.pc != 0x001F6DFCu) [[unlikely]] return; }
L_001F6DFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6E04u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001F6E04u) [[unlikely]] return; }
L_001F6E04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6E10u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 77u, depth + 1u); else { c.pc = 0x001719F0u; return; } if (c.pc != 0x001F6E10u) [[unlikely]] return; }
L_001F6E10:
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001F6E14:
    c.r[17].d[0] = c.r[3].d[0] << 56;
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[19], c.r[19].w[0] + 16u);
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 5;
L_001F6E28:
    c.r[4].d[0] = c.r[17].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[3].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[20], c.r[16].w[0] + c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F6C54u | kUnwind; return; } goto L_001F6C54; } }
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_001F6E70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 9328u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    st32((c.r[28].w[0] - 25300u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 25300u)));
    set32(c.r[6], 0u + 64u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6E9Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001F6E9Cu) [[unlikely]] return; }
L_001F6E9C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    st32((c.r[1].w[0] - 16720u), c.r[16].w[0]);
    set32(c.r[2], 0u + 18000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    st16((c.r[1].w[0] + 5112u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    st16((c.r[1].w[0] + 5114u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    st8((c.r[1].w[0] + 5129u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6ED4u); st8((c.r[1].w[0] + 5130u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0023(c, 175u, depth + 1u); else { c.pc = 0x0018E1A0u; return; } if (c.pc != 0x001F6ED4u) [[unlikely]] return; }
L_001F6ED4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F6EF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[16], c.r[2].w[0] + 5104u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6F10u); set32(c.r[4], c.r[2].w[0] + 5104u);  if (depth < kMaxDepth) unit_0023(c, 214u, depth + 1u); else { c.pc = 0x0018EE90u; return; } if (c.pc != 0x001F6F10u) [[unlikely]] return; }
L_001F6F10:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 4u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001F6F30; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6F30u); set32(c.r[4], c.r[2].w[0] + 28496u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x001F6F30u) [[unlikely]] return; }
L_001F6F30:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 25u)));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F6F50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 32128u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    set32(c.r[7], c.r[29].w[0] + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], 0u + 3u);
    st128((c.r[7].w[0]) & ~15u, c.r[6]);
    st32((c.r[1].w[0] - 20396u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[3].w[0]);
    set32(c.r[2], 0u + 12u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 5114u)));
    set32(c.r[3], 0u + 1u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[6].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[29].w[0] + 44u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20376u), c.r[3].w[0]);
    set32(c.r[3], c.r[29].w[0] + 40u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[3].d[0] = c.r[3].d[0] | 8224ull;
    st32((c.r[29].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[3], 0u + 10u);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 47;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F700Cu); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001F700Cu) [[unlikely]] return; }
L_001F700C:
    st8((c.r[29].w[0] + 43u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00E00000u);
    c.r[2].d[0] = c.r[2].d[0] | 640ull;
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7028u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 207u, depth + 1u); else { c.pc = 0x0016FA40u; return; } if (c.pc != 0x001F7028u) [[unlikely]] return; }
L_001F7028:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F7040:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 32080u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001F4000u < 16384u) { entry = entries_003D[(t - 0x001F4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001F7070:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st32((c.r[2].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st32((c.r[2].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F70A8u); st32((c.r[2].w[0] + 36u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0080(c, 270u, depth + 1u); else { c.pc = 0x003036C0u; return; } if (c.pc != 0x001F70A8u) [[unlikely]] return; }
L_001F70A8:
    set32(c.r[2], c.r[28].w[0] - 26488u);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F70BCu); st32((c.r[2].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_000E(c, 316u, depth + 1u); else { c.pc = 0x0013B910u; return; } if (c.pc != 0x001F70BCu) [[unlikely]] return; }
L_001F70BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F70C4u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001F70C4u) [[unlikely]] return; }
L_001F70C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], c.r[2].w[0] - 32112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[5], c.r[2].w[0] - 32096u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F70DCu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 298u, depth + 1u); else { c.pc = 0x0013B660u; return; } if (c.pc != 0x001F70DCu) [[unlikely]] return; }
L_001F70DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F70E8u); set32(c.r[4], c.r[2].w[0] - 14560u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001F70E8u) [[unlikely]] return; }
L_001F70E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[5], c.r[2].w[0] - 14560u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[2].w[0] + 100u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st32((c.r[2].w[0] + 96u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 105u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F711Cu); st8((c.r[2].w[0] + 104u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_000E(c, 316u, depth + 1u); else { c.pc = 0x0013B910u; return; } if (c.pc != 0x001F711Cu) [[unlikely]] return; }
L_001F711C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7124u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 140u, depth + 1u); else { c.pc = 0x0015B6C0u; return; } if (c.pc != 0x001F7124u) [[unlikely]] return; }
L_001F7124:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], c.r[28].w[0] - 29808u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[6], c.r[2].w[0] + 348u);
    c.budget -= 4;
L_001F7134:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.r[2].d[0] = c.r[4].sd[0] < 6ll ? 1ull : 0ull;
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F7134u | kUnwind; return; } goto L_001F7134; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], c.r[28].w[0] - 29800u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    set32(c.r[5], c.r[2].w[0] + 354u);
    c.budget -= 4;
L_001F7168:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.r[2].d[0] = c.r[6].sd[0] < 6ll ? 1ull : 0ull;
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F7168u | kUnwind; return; } goto L_001F7168; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], c.r[28].w[0] - 29792u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    set32(c.r[5], c.r[2].w[0] + 390u);
    c.budget -= 4;
L_001F719C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.r[2].d[0] = c.r[6].sd[0] < 6ll ? 1ull : 0ull;
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F719Cu | kUnwind; return; } goto L_001F719C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F71C8u);  if (depth < kMaxDepth) unit_000E(c, 28u, depth + 1u); else { c.pc = 0x00138590u; return; } if (c.pc != 0x001F71C8u) [[unlikely]] return; }
L_001F71C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F71D0u);  if (depth < kMaxDepth) unit_0025(c, 5u, depth + 1u); else { c.pc = 0x00194070u; return; } if (c.pc != 0x001F71D0u) [[unlikely]] return; }
L_001F71D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F71D8u);  if (depth < kMaxDepth) unit_0026(c, 117u, depth + 1u); else { c.pc = 0x00199B90u; return; } if (c.pc != 0x001F71D8u) [[unlikely]] return; }
L_001F71D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F71E0u);  if (depth < kMaxDepth) unit_001F(c, 190u, depth + 1u); else { c.pc = 0x0017EB40u; return; } if (c.pc != 0x001F71E0u) [[unlikely]] return; }
L_001F71E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F71E8u);  if (depth < kMaxDepth) unit_0025(c, 235u, depth + 1u); else { c.pc = 0x00196850u; return; } if (c.pc != 0x001F71E8u) [[unlikely]] return; }
L_001F71E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F71F4u); set32(c.r[4], c.r[2].w[0] - 31408u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x001F71F4u) [[unlikely]] return; }
L_001F71F4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001F7200:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 32056u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001F4000u < 16384u) { entry = entries_003D[(t - 0x001F4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001F7230:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7240u);  if (depth < kMaxDepth) unit_0093(c, 300u, depth + 1u); else { c.pc = 0x0034FD20u; return; } if (c.pc != 0x001F7240u) [[unlikely]] return; }
L_001F7240:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F7280; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7264u); st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_001F(c, 195u, depth + 1u); else { c.pc = 0x0017EBC0u; return; } if (c.pc != 0x001F7264u) [[unlikely]] return; }
L_001F7264:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F726Cu);  if (depth < kMaxDepth) unit_001F(c, 144u, depth + 1u); else { c.pc = 0x0017E2B0u; return; } if (c.pc != 0x001F726Cu) [[unlikely]] return; }
L_001F726C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[5], 0u + 16u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7280u); c.r[6].d[0] = c.r[2].d[0] | 65535ull;  if (depth < kMaxDepth) unit_001B(c, 51u, depth + 1u); else { c.pc = 0x0016CF60u; return; } if (c.pc != 0x001F7280u) [[unlikely]] return; }
L_001F7280:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F728Cu); set32(c.r[4], c.r[2].w[0] - 31408u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x001F728Cu) [[unlikely]] return; }
L_001F728C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001F72A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], 0u + 1u);  goto L_001F7468; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] + 24656u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001F4000u < 16384u) { entry = entries_003D[(t - 0x001F4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001F72D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F72E0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x001F72E0u) [[unlikely]] return; }
L_001F72E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F74A0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7304u); st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_001B(c, 50u, depth + 1u); else { c.pc = 0x0016CF10u; return; } if (c.pc != 0x001F7304u) [[unlikely]] return; }
L_001F7304:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F74A0; } }
L_001F730C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7314u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x001F7314u) [[unlikely]] return; }
L_001F7314:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F7338; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 180u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
L_001F7338:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7344u); set32(c.r[4], c.r[2].w[0] - 31856u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x001F7344u) [[unlikely]] return; }
L_001F7344:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F74A0; } }
L_001F734C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001F7384; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 4u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7384u); st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_001B(c, 50u, depth + 1u); else { c.pc = 0x0016CF10u; return; } if (c.pc != 0x001F7384u) [[unlikely]] return; }
L_001F7384:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7390u); set32(c.r[4], c.r[2].w[0] - 31856u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x001F7390u) [[unlikely]] return; }
L_001F7390:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F74A0; } }
L_001F7398:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F73A0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x001F73A0u) [[unlikely]] return; }
L_001F73A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F73C4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F73C4u); st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_001B(c, 50u, depth + 1u); else { c.pc = 0x0016CF10u; return; } if (c.pc != 0x001F73C4u) [[unlikely]] return; }
L_001F73C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F73D0u); set32(c.r[4], c.r[2].w[0] - 31856u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x001F73D0u) [[unlikely]] return; }
L_001F73D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F74A0; } }
L_001F73D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F73E0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x001F73E0u) [[unlikely]] return; }
L_001F73E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F7404; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 180u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
L_001F7404:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7410u); set32(c.r[4], c.r[2].w[0] - 31664u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x001F7410u) [[unlikely]] return; }
L_001F7410:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F74A0; } }
L_001F7418:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001F7450; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 4u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7450u); st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_001B(c, 50u, depth + 1u); else { c.pc = 0x0016CF10u; return; } if (c.pc != 0x001F7450u) [[unlikely]] return; }
L_001F7450:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F745Cu); set32(c.r[4], c.r[2].w[0] - 31664u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x001F745Cu) [[unlikely]] return; }
L_001F745C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F74A0; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_001F7468:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7470u);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x001F7470u) [[unlikely]] return; }
L_001F7470:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F7494; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001F74A0; } }
L_001F7494:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F74A0u); set32(c.r[4], c.r[2].w[0] - 31664u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x001F74A0u) [[unlikely]] return; }
L_001F74A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F74ACu); set32(c.r[4], c.r[2].w[0] - 31312u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x001F74ACu) [[unlikely]] return; }
L_001F74AC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001F74C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F74D0u);  if (depth < kMaxDepth) unit_0093(c, 300u, depth + 1u); else { c.pc = 0x0034FD20u; return; } if (c.pc != 0x001F74D0u) [[unlikely]] return; }
L_001F74D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F74F8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_001F74F8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001F7510:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 32032u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001F4000u < 16384u) { entry = entries_003D[(t - 0x001F4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001F7540:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], c.r[2].w[0] - 31696u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[2].w[0] - 31568u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[5], c.r[28].w[0] - 26488u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[2], c.r[2].w[0] - 31296u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[7].w[0] + 3u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[5].w[0]), 0u);
    st32((c.r[5].w[0] + 4u), 0u);
    st32((c.r[1].w[0] - 14128u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00730000u);
    st32((c.r[1].w[0] - 14124u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00730000u);
    st32((c.r[1].w[0] - 14120u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[28].w[0] - 26490u), static_cast<std::uint16_t>(0u));
    st16((c.r[28].w[0] - 26492u), static_cast<std::uint16_t>(0u));
    st16((c.r[28].w[0] - 26494u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[3], 0u + 10u);
    st16((c.r[28].w[0] - 26496u), static_cast<std::uint16_t>(0u));
    st32((c.r[1].w[0] - 14116u), 0u);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F75BCu); st8((c.r[2].w[0] + 373u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_000E(c, 28u, depth + 1u); else { c.pc = 0x00138590u; return; } if (c.pc != 0x001F75BCu) [[unlikely]] return; }
L_001F75BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F75C4u);  if (depth < kMaxDepth) unit_001F(c, 219u, depth + 1u); else { c.pc = 0x0017F090u; return; } if (c.pc != 0x001F75C4u) [[unlikely]] return; }
L_001F75C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F75CCu);  if (depth < kMaxDepth) unit_000E(c, 56u, depth + 1u); else { c.pc = 0x00138DD0u; return; } if (c.pc != 0x001F75CCu) [[unlikely]] return; }
L_001F75CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F75D4u);  if (depth < kMaxDepth) unit_001F(c, 203u, depth + 1u); else { c.pc = 0x0017EC50u; return; } if (c.pc != 0x001F75D4u) [[unlikely]] return; }
L_001F75D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F75DCu);  if (depth < kMaxDepth) unit_001F(c, 206u, depth + 1u); else { c.pc = 0x0017ECC0u; return; } if (c.pc != 0x001F75DCu) [[unlikely]] return; }
L_001F75DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F75E4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_001F(c, 212u, depth + 1u); else { c.pc = 0x0017EE10u; return; } if (c.pc != 0x001F75E4u) [[unlikely]] return; }
L_001F75E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F75ECu);  if (depth < kMaxDepth) unit_000E(c, 70u, depth + 1u); else { c.pc = 0x001390C0u; return; } if (c.pc != 0x001F75ECu) [[unlikely]] return; }
L_001F75EC:
    set32(c.r[2], 0u + 255u);
    st16((c.r[28].w[0] - 26508u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F75FCu); st16((c.r[28].w[0] - 26512u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0080(c, 270u, depth + 1u); else { c.pc = 0x003036C0u; return; } if (c.pc != 0x001F75FCu) [[unlikely]] return; }
L_001F75FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7604u);  if (depth < kMaxDepth) unit_0043(c, 23u, depth + 1u); else { c.pc = 0x0020C910u; return; } if (c.pc != 0x001F7604u) [[unlikely]] return; }
L_001F7604:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F760Cu);  if (depth < kMaxDepth) unit_003F(c, 84u, depth + 1u); else { c.pc = 0x001FD8C0u; return; } if (c.pc != 0x001F760Cu) [[unlikely]] return; }
L_001F760C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7614u);  if (depth < kMaxDepth) unit_0081(c, 147u, depth + 1u); else { c.pc = 0x003068B0u; return; } if (c.pc != 0x001F7614u) [[unlikely]] return; }
L_001F7614:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F761Cu);  if (depth < kMaxDepth) unit_003F(c, 87u, depth + 1u); else { c.pc = 0x001FD9C0u; return; } if (c.pc != 0x001F761Cu) [[unlikely]] return; }
L_001F761C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7624u);  if (depth < kMaxDepth) unit_0043(c, 25u, depth + 1u); else { c.pc = 0x0020C960u; return; } if (c.pc != 0x001F7624u) [[unlikely]] return; }
L_001F7624:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x497F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65320ull;
    c.f[13] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7644u);  if (depth < kMaxDepth) unit_0029(c, 100u, depth + 1u); else { c.pc = 0x001A5400u; return; } if (c.pc != 0x001F7644u) [[unlikely]] return; }
L_001F7644:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F764Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 140u, depth + 1u); else { c.pc = 0x0015B6C0u; return; } if (c.pc != 0x001F764Cu) [[unlikely]] return; }
L_001F764C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7654u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_002A(c, 276u, depth + 1u); else { c.pc = 0x001A9480u; return; } if (c.pc != 0x001F7654u) [[unlikely]] return; }
L_001F7654:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F765Cu);  if (depth < kMaxDepth) unit_001B(c, 40u, depth + 1u); else { c.pc = 0x0016CB50u; return; } if (c.pc != 0x001F765Cu) [[unlikely]] return; }
L_001F765C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7664u);  if (depth < kMaxDepth) unit_0024(c, 101u, depth + 1u); else { c.pc = 0x001917F0u; return; } if (c.pc != 0x001F7664u) [[unlikely]] return; }
L_001F7664:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7670u); c.r[4].d[0] = c.r[2].d[0] | 4896ull;  if (depth < kMaxDepth) unit_0029(c, 92u, depth + 1u); else { c.pc = 0x001A52A0u; return; } if (c.pc != 0x001F7670u) [[unlikely]] return; }
L_001F7670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7678u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 255u, depth + 1u); else { c.pc = 0x00196A70u; return; } if (c.pc != 0x001F7678u) [[unlikely]] return; }
L_001F7678:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 60u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[1].w[0] + 3344u));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F76A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F76A0u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0024(c, 185u, depth + 1u); else { c.pc = 0x00192F90u; return; } if (c.pc != 0x001F76A0u) [[unlikely]] return; }
L_001F76A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F76ACu); set32(c.r[4], c.r[2].w[0] - 31216u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x001F76ACu) [[unlikely]] return; }
L_001F76AC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001F76C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001F7700; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(0u));
    c.budget -= 6;
L_001F7700:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7708u);  if (depth < kMaxDepth) unit_003E(c, 50u, depth + 1u); else { c.pc = 0x001F8870u; return; } if (c.pc != 0x001F7708u) [[unlikely]] return; }
L_001F7708:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7714u); set32(c.r[4], c.r[2].w[0] - 31216u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x001F7714u) [[unlikely]] return; }
L_001F7714:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001F7720:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26482u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F77CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F773Cu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0024(c, 185u, depth + 1u); else { c.pc = 0x00192F90u; return; } if (c.pc != 0x001F773Cu) [[unlikely]] return; }
L_001F773C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26482u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F7784; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[2].w[0] + 8u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    c.r[1].d[0] = c.r[2].sd[0] < 61ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001F7784; } }
    set32(c.r[2], 0u + 60u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    st8((c.r[28].w[0] - 26482u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001F7784:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26482u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F77C0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 2u);
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[2].w[0] + 8u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_001F77C0; } }
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(0u));
    st8((c.r[28].w[0] - 26482u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001F77C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F77CCu); set32(c.r[4], c.r[2].w[0] - 31216u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x001F77CCu) [[unlikely]] return; }
L_001F77CC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26481u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F78B8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 60u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F78AC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[4], c.r[2].w[0] + 26144u);
    set32(c.r[5], 0u + 4u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F781Cu); st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0025(c, 365u, depth + 1u); else { c.pc = 0x00197E70u; return; } if (c.pc != 0x001F781Cu) [[unlikely]] return; }
L_001F781C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7824u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0080(c, 292u, depth + 1u); else { c.pc = 0x00303CB0u; return; } if (c.pc != 0x001F7824u) [[unlikely]] return; }
L_001F7824:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F782Cu); set32(c.r[4], 0u + 17u);  if (depth < kMaxDepth) unit_0080(c, 292u, depth + 1u); else { c.pc = 0x00303CB0u; return; } if (c.pc != 0x001F782Cu) [[unlikely]] return; }
L_001F782C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7834u); set32(c.r[4], 0u + 18u);  if (depth < kMaxDepth) unit_0080(c, 292u, depth + 1u); else { c.pc = 0x00303CB0u; return; } if (c.pc != 0x001F7834u) [[unlikely]] return; }
L_001F7834:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F783Cu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0080(c, 292u, depth + 1u); else { c.pc = 0x00303CB0u; return; } if (c.pc != 0x001F783Cu) [[unlikely]] return; }
L_001F783C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7844u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0080(c, 292u, depth + 1u); else { c.pc = 0x00303CB0u; return; } if (c.pc != 0x001F7844u) [[unlikely]] return; }
    goto L_001F7844;
L_001F7840:
    set32(c.r[4], 0u + 3u);
    c.budget -= 1;
L_001F7844:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], c.r[2].w[0] + 349u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
L_001F7854:
    set32(c.r[4], c.r[4].w[0] + 2u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F7854u | kUnwind; return; } goto L_001F7854; } }
    c.r[1].d[0] = c.r[4].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F78A0; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_001F7880:
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[4].sd[0] < 6ll ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F7880u | kUnwind; return; } goto L_001F7880; } }
    c.budget -= 1;
L_001F78A0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 2u);
    st16((c.r[2].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001F78AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F78B8u); set32(c.r[4], c.r[2].w[0] - 31216u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x001F78B8u) [[unlikely]] return; }
L_001F78B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F78C0u);  if (depth < kMaxDepth) unit_003E(c, 50u, depth + 1u); else { c.pc = 0x001F8870u; return; } if (c.pc != 0x001F78C0u) [[unlikely]] return; }
L_001F78C0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001F78D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 10u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001F7900; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[2].w[0] + 10u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_001F7900:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 10u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F7940; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7918u);  if (depth < kMaxDepth) unit_0093(c, 300u, depth + 1u); else { c.pc = 0x0034FD20u; return; } if (c.pc != 0x001F7918u) [[unlikely]] return; }
L_001F7918:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F7940; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_001F7940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7948u);  if (depth < kMaxDepth) unit_003E(c, 76u, depth + 1u); else { c.pc = 0x001F8960u; return; } if (c.pc != 0x001F7948u) [[unlikely]] return; }
L_001F7948:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7954u); set32(c.r[4], c.r[2].w[0] - 31216u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x001F7954u) [[unlikely]] return; }
L_001F7954:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001F7960:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 32016u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001F4000u < 16384u) { entry = entries_003D[(t - 0x001F4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001F7990:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] + 4u);  if (t) { goto L_001F79C0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F79B8u); st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000E(c, 28u, depth + 1u); else { c.pc = 0x00138590u; return; } if (c.pc != 0x001F79B8u) [[unlikely]] return; }
L_001F79B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F79FC; } }
L_001F79C0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F79E4u); st16((c.r[2].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_000E(c, 56u, depth + 1u); else { c.pc = 0x00138DD0u; return; } if (c.pc != 0x001F79E4u) [[unlikely]] return; }
L_001F79E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F79ECu);  if (depth < kMaxDepth) unit_001F(c, 206u, depth + 1u); else { c.pc = 0x0017ECC0u; return; } if (c.pc != 0x001F79ECu) [[unlikely]] return; }
L_001F79EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F79F4u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_001F(c, 212u, depth + 1u); else { c.pc = 0x0017EE10u; return; } if (c.pc != 0x001F79F4u) [[unlikely]] return; }
L_001F79F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F79FCu);  if (depth < kMaxDepth) unit_000E(c, 70u, depth + 1u); else { c.pc = 0x001390C0u; return; } if (c.pc != 0x001F79FCu) [[unlikely]] return; }
L_001F79FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7A04u);  if (depth < kMaxDepth) unit_003E(c, 76u, depth + 1u); else { c.pc = 0x001F8960u; return; } if (c.pc != 0x001F7A04u) [[unlikely]] return; }
L_001F7A04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7A10u); set32(c.r[4], c.r[2].w[0] - 31216u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x001F7A10u) [[unlikely]] return; }
L_001F7A10:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001F7A20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7A30u);  if (depth < kMaxDepth) unit_003E(c, 76u, depth + 1u); else { c.pc = 0x001F8960u; return; } if (c.pc != 0x001F7A30u) [[unlikely]] return; }
L_001F7A30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7A3Cu); set32(c.r[4], c.r[2].w[0] - 31216u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x001F7A3Cu) [[unlikely]] return; }
L_001F7A3C:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001F7B58; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[2].w[0] - 31264u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[5], c.r[28].w[0] - 26488u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 3u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[2], c.r[2].w[0] - 30944u);
    set32(c.r[4], 0u + 10u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[7].w[0] + 3u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[5].w[0]), 0u);
    st32((c.r[5].w[0] + 4u), 0u);
    st32((c.r[1].w[0] - 14128u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00730000u);
    st32((c.r[1].w[0] - 14124u), c.r[2].w[0]);
    st16((c.r[28].w[0] - 26490u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00730000u);
    st16((c.r[28].w[0] - 26492u), static_cast<std::uint16_t>(0u));
    st32((c.r[1].w[0] - 14116u), 0u);
    st16((c.r[28].w[0] - 26494u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[28].w[0] - 26496u), static_cast<std::uint16_t>(0u));
    st32((c.r[1].w[0] - 14120u), 0u);
    set32(c.r[2], 0u + 255u);
    st8((c.r[3].w[0] + 373u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[28].w[0] - 26508u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7AD4u); st16((c.r[28].w[0] - 26512u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0043(c, 23u, depth + 1u); else { c.pc = 0x0020C910u; return; } if (c.pc != 0x001F7AD4u) [[unlikely]] return; }
L_001F7AD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7ADCu);  if (depth < kMaxDepth) unit_003F(c, 84u, depth + 1u); else { c.pc = 0x001FD8C0u; return; } if (c.pc != 0x001F7ADCu) [[unlikely]] return; }
L_001F7ADC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7AE4u);  if (depth < kMaxDepth) unit_0081(c, 147u, depth + 1u); else { c.pc = 0x003068B0u; return; } if (c.pc != 0x001F7AE4u) [[unlikely]] return; }
L_001F7AE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7AECu);  if (depth < kMaxDepth) unit_003F(c, 87u, depth + 1u); else { c.pc = 0x001FD9C0u; return; } if (c.pc != 0x001F7AECu) [[unlikely]] return; }
L_001F7AEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7AF4u);  if (depth < kMaxDepth) unit_0043(c, 25u, depth + 1u); else { c.pc = 0x0020C960u; return; } if (c.pc != 0x001F7AF4u) [[unlikely]] return; }
L_001F7AF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x497F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65320ull;
    c.f[13] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7B14u);  if (depth < kMaxDepth) unit_0029(c, 100u, depth + 1u); else { c.pc = 0x001A5400u; return; } if (c.pc != 0x001F7B14u) [[unlikely]] return; }
L_001F7B14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7B1Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 140u, depth + 1u); else { c.pc = 0x0015B6C0u; return; } if (c.pc != 0x001F7B1Cu) [[unlikely]] return; }
L_001F7B1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7B24u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_002A(c, 276u, depth + 1u); else { c.pc = 0x001A9480u; return; } if (c.pc != 0x001F7B24u) [[unlikely]] return; }
L_001F7B24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7B2Cu);  if (depth < kMaxDepth) unit_001B(c, 40u, depth + 1u); else { c.pc = 0x0016CB50u; return; } if (c.pc != 0x001F7B2Cu) [[unlikely]] return; }
L_001F7B2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7B34u);  if (depth < kMaxDepth) unit_0024(c, 101u, depth + 1u); else { c.pc = 0x001917F0u; return; } if (c.pc != 0x001F7B34u) [[unlikely]] return; }
L_001F7B34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7B40u); c.r[4].d[0] = c.r[2].d[0] | 4896ull;  if (depth < kMaxDepth) unit_0029(c, 92u, depth + 1u); else { c.pc = 0x001A52A0u; return; } if (c.pc != 0x001F7B40u) [[unlikely]] return; }
L_001F7B40:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u + 60u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[4], c.r[2].w[0] - 31216u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7B58u); st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x001F7B58u) [[unlikely]] return; }
L_001F7B58:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001F7B70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001F7BB0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(0u));
    c.budget -= 6;
L_001F7BB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7BB8u);  if (depth < kMaxDepth) unit_003E(c, 50u, depth + 1u); else { c.pc = 0x001F8870u; return; } if (c.pc != 0x001F7BB8u) [[unlikely]] return; }
L_001F7BB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7BC4u); set32(c.r[4], c.r[2].w[0] - 31216u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x001F7BC4u) [[unlikely]] return; }
L_001F7BC4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001F7BD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26482u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F7C0C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[4], c.r[2].w[0] + 26144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7BF8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 210u, depth + 1u); else { c.pc = 0x0034EF20u; return; } if (c.pc != 0x001F7BF8u) [[unlikely]] return; }
L_001F7BF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[4], c.r[2].w[0] + 26144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7C08u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_0025(c, 365u, depth + 1u); else { c.pc = 0x00197E70u; return; } if (c.pc != 0x001F7C08u) [[unlikely]] return; }
L_001F7C08:
    st8((c.r[28].w[0] - 26482u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001F7C0C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26482u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F7C2C; } }
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7C28u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x001F7C28u) [[unlikely]] return; }
L_001F7C28:
    st8((c.r[28].w[0] - 26482u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001F7C2C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26482u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F7C48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7C44u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_0024(c, 185u, depth + 1u); else { c.pc = 0x00192F90u; return; } if (c.pc != 0x001F7C44u) [[unlikely]] return; }
L_001F7C44:
    st8((c.r[28].w[0] - 26482u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001F7C48:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26481u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F7D0C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F7D00; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[4], 0u + 16u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7C8Cu); st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0080(c, 292u, depth + 1u); else { c.pc = 0x00303CB0u; return; } if (c.pc != 0x001F7C8Cu) [[unlikely]] return; }
L_001F7C8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7C94u); set32(c.r[4], 0u + 17u);  if (depth < kMaxDepth) unit_0080(c, 292u, depth + 1u); else { c.pc = 0x00303CB0u; return; } if (c.pc != 0x001F7C94u) [[unlikely]] return; }
L_001F7C94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7C9Cu); set32(c.r[4], 0u + 18u);  if (depth < kMaxDepth) unit_0080(c, 292u, depth + 1u); else { c.pc = 0x00303CB0u; return; } if (c.pc != 0x001F7C9Cu) [[unlikely]] return; }
L_001F7C9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7CA4u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0080(c, 292u, depth + 1u); else { c.pc = 0x00303CB0u; return; } if (c.pc != 0x001F7CA4u) [[unlikely]] return; }
L_001F7CA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7CACu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0080(c, 292u, depth + 1u); else { c.pc = 0x00303CB0u; return; } if (c.pc != 0x001F7CACu) [[unlikely]] return; }
L_001F7CAC:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[5], c.r[2].w[0] + 348u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
L_001F7CBC:
    set32(c.r[4], c.r[4].w[0] + 2u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[4].sd[0] < 6ll ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F7CBCu | kUnwind; return; } goto L_001F7CBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7CE0u);  if (depth < kMaxDepth) unit_003F(c, 84u, depth + 1u); else { c.pc = 0x001FD8C0u; return; } if (c.pc != 0x001F7CE0u) [[unlikely]] return; }
L_001F7CE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7CE8u);  if (depth < kMaxDepth) unit_003F(c, 87u, depth + 1u); else { c.pc = 0x001FD9C0u; return; } if (c.pc != 0x001F7CE8u) [[unlikely]] return; }
L_001F7CE8:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 60u);
    set32(c.r[3], 0u + 2u);
    st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[2].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_001F7D00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7D0Cu); set32(c.r[4], c.r[2].w[0] - 31216u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x001F7D0Cu) [[unlikely]] return; }
L_001F7D0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7D14u);  if (depth < kMaxDepth) unit_003E(c, 50u, depth + 1u); else { c.pc = 0x001F8870u; return; } if (c.pc != 0x001F7D14u) [[unlikely]] return; }
L_001F7D14:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001F7D20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 10u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001F7D68; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_001F7D68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7D70u);  if (depth < kMaxDepth) unit_003E(c, 76u, depth + 1u); else { c.pc = 0x001F8960u; return; } if (c.pc != 0x001F7D70u) [[unlikely]] return; }
L_001F7D70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7D7Cu); set32(c.r[4], c.r[2].w[0] - 31216u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x001F7D7Cu) [[unlikely]] return; }
L_001F7D7C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001F7D90:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 31984u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001F4000u < 16384u) { entry = entries_003D[(t - 0x001F4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001F7DC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] + 4u);  if (t) { goto L_001F7DF0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7DE8u); st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000E(c, 28u, depth + 1u); else { c.pc = 0x00138590u; return; } if (c.pc != 0x001F7DE8u) [[unlikely]] return; }
L_001F7DE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F7E34; } }
L_001F7DF0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7E14u); st16((c.r[2].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_000E(c, 56u, depth + 1u); else { c.pc = 0x00138DD0u; return; } if (c.pc != 0x001F7E14u) [[unlikely]] return; }
L_001F7E14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7E1Cu);  if (depth < kMaxDepth) unit_001F(c, 228u, depth + 1u); else { c.pc = 0x0017F130u; return; } if (c.pc != 0x001F7E1Cu) [[unlikely]] return; }
L_001F7E1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7E24u);  if (depth < kMaxDepth) unit_001F(c, 229u, depth + 1u); else { c.pc = 0x0017F150u; return; } if (c.pc != 0x001F7E24u) [[unlikely]] return; }
L_001F7E24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7E2Cu); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_001F(c, 212u, depth + 1u); else { c.pc = 0x0017EE10u; return; } if (c.pc != 0x001F7E2Cu) [[unlikely]] return; }
L_001F7E2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7E34u);  if (depth < kMaxDepth) unit_000E(c, 70u, depth + 1u); else { c.pc = 0x001390C0u; return; } if (c.pc != 0x001F7E34u) [[unlikely]] return; }
L_001F7E34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7E3Cu);  if (depth < kMaxDepth) unit_003E(c, 76u, depth + 1u); else { c.pc = 0x001F8960u; return; } if (c.pc != 0x001F7E3Cu) [[unlikely]] return; }
L_001F7E3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7E48u); set32(c.r[4], c.r[2].w[0] - 31216u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x001F7E48u) [[unlikely]] return; }
L_001F7E48:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001F7E60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7E70u);  if (depth < kMaxDepth) unit_003E(c, 76u, depth + 1u); else { c.pc = 0x001F8960u; return; } if (c.pc != 0x001F7E70u) [[unlikely]] return; }
L_001F7E70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7E7Cu); set32(c.r[4], c.r[2].w[0] - 31216u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x001F7E7Cu) [[unlikely]] return; }
L_001F7E7C:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001F7FA8; } }
    set32(c.r[8], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], c.r[2].w[0] - 29728u);
    set32(c.r[6], c.r[28].w[0] - 26488u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 3u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[2], 0u + 255u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[8].w[0] + 3u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[6].w[0]), 0u);
    st32((c.r[6].w[0] + 4u), 0u);
    st32((c.r[1].w[0] - 14128u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00730000u);
    st32((c.r[1].w[0] - 14116u), 0u);
    st16((c.r[28].w[0] - 26490u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00730000u);
    st16((c.r[28].w[0] - 26492u), static_cast<std::uint16_t>(0u));
    st32((c.r[1].w[0] - 14120u), 0u);
    st16((c.r[28].w[0] - 26494u), static_cast<std::uint16_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[28].w[0] - 26496u), static_cast<std::uint16_t>(0u));
    st32((c.r[1].w[0] - 14124u), 0u);
    set32(c.r[3], 0u + 60u);
    st8((c.r[4].w[0] + 373u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[28].w[0] - 26508u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[28].w[0] - 26512u), static_cast<std::uint16_t>(0u));
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7F18u); st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0043(c, 23u, depth + 1u); else { c.pc = 0x0020C910u; return; } if (c.pc != 0x001F7F18u) [[unlikely]] return; }
L_001F7F18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7F20u);  if (depth < kMaxDepth) unit_0081(c, 147u, depth + 1u); else { c.pc = 0x003068B0u; return; } if (c.pc != 0x001F7F20u) [[unlikely]] return; }
L_001F7F20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7F28u);  if (depth < kMaxDepth) unit_0043(c, 25u, depth + 1u); else { c.pc = 0x0020C960u; return; } if (c.pc != 0x001F7F28u) [[unlikely]] return; }
L_001F7F28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x497F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65320ull;
    c.f[13] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7F48u);  if (depth < kMaxDepth) unit_0029(c, 100u, depth + 1u); else { c.pc = 0x001A5400u; return; } if (c.pc != 0x001F7F48u) [[unlikely]] return; }
L_001F7F48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7F50u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 140u, depth + 1u); else { c.pc = 0x0015B6C0u; return; } if (c.pc != 0x001F7F50u) [[unlikely]] return; }
L_001F7F50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7F58u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_002A(c, 276u, depth + 1u); else { c.pc = 0x001A9480u; return; } if (c.pc != 0x001F7F58u) [[unlikely]] return; }
L_001F7F58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7F60u);  if (depth < kMaxDepth) unit_001B(c, 40u, depth + 1u); else { c.pc = 0x0016CB50u; return; } if (c.pc != 0x001F7F60u) [[unlikely]] return; }
L_001F7F60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7F68u);  if (depth < kMaxDepth) unit_0024(c, 101u, depth + 1u); else { c.pc = 0x001917F0u; return; } if (c.pc != 0x001F7F68u) [[unlikely]] return; }
L_001F7F68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7F74u); c.r[4].d[0] = c.r[2].d[0] | 4896ull;  if (depth < kMaxDepth) unit_0029(c, 92u, depth + 1u); else { c.pc = 0x001A52A0u; return; } if (c.pc != 0x001F7F74u) [[unlikely]] return; }
L_001F7F74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7F7Cu);  if (depth < kMaxDepth) unit_0025(c, 5u, depth + 1u); else { c.pc = 0x00194070u; return; } if (c.pc != 0x001F7F7Cu) [[unlikely]] return; }
L_001F7F7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[4], c.r[2].w[0] + 26144u);
    set32(c.r[6], 0u + 8448u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7F90u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001F7F90u) [[unlikely]] return; }
L_001F7F90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7F98u);  if (depth < kMaxDepth) unit_003E(c, 85u, depth + 1u); else { c.pc = 0x001F89C0u; return; } if (c.pc != 0x001F7F98u) [[unlikely]] return; }
L_001F7F98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7FA0u);  if (depth < kMaxDepth) unit_003E(c, 90u, depth + 1u); else { c.pc = 0x001F8AF0u; return; } if (c.pc != 0x001F7FA0u) [[unlikely]] return; }
L_001F7FA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7FA8u);  if (depth < kMaxDepth) unit_001F(c, 183u, depth + 1u); else { c.pc = 0x0017EAA0u; return; } if (c.pc != 0x001F7FA8u) [[unlikely]] return; }
L_001F7FA8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001F7FC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001F7FF8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001F7FF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8000u);  if (depth < kMaxDepth) unit_003E(c, 50u, depth + 1u); else { c.pc = 0x001F8870u; return; } if (c.pc != 0x001F8000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_003E(c, 1u, depth);
}

}
