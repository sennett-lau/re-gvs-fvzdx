#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0078[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 4, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 8,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 10, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 13, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 14, 0, 0, 15, 0, 16, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 23, 0, 0, 0, 0, 24,
    0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0,
    38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0,
    0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 60, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 63, 0, 64, 0, 0, 0, 0, 0, 0, 0,
    0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 74, 0, 75, 0, 0, 0, 0, 0, 76, 0, 77, 0, 78, 0,
    79, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0,
    87, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 92, 0, 93, 0, 94, 0, 0, 95, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 106, 0, 107, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 116, 0, 0, 0, 117,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 124, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    129, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0,
    134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 141, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145,
    0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0,
    0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151,
    0, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0,
    0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 175,
    0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 180,
    0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184,
    0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0,
    189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0, 0, 0, 0,
    202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 208, 0, 209, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 218, 0, 0, 0, 0,
    0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 225, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 227, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 230, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 232, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    243, 0, 0, 0, 0, 0, 0, 0, 244, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 250, 0, 251, 0, 0, 0, 252, 0, 253,
    0, 254, 0, 255, 0, 256, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261,
    0, 262, 0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 0, 265, 0, 266, 0, 267, 0, 268, 0, 269, 0, 270, 0, 0, 0, 271, 0, 272, 0, 273,
    0, 274, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 278, 0, 279, 0, 280, 0, 281, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 283,
    0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 286,
    0, 0, 0, 287, 0, 288, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0,
    0, 296, 0, 297, 0, 298, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 302, 0, 303, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 307, 0, 308, 0, 0, 0, 309, 0, 310, 0, 311, 0, 312, 0, 313, 0, 314, 0, 315, 0, 0, 0,
    0, 316, 0, 0, 0, 317, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 322, 323, 324, 325, 326, 327, 0, 328, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    329, 0, 0, 330, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 335, 0, 336, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0,
    341, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 0,
    0, 0, 0, 0, 348, 0, 349, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 352, 0, 0,
    0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 359, 0, 0, 360, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 365,
    0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0,
};

void unit_0078(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002E0000;
    case 2u: goto L_002E0008;
    case 3u: goto L_002E0020;
    case 4u: goto L_002E002C;
    case 5u: goto L_002E0030;
    case 6u: goto L_002E004C;
    case 7u: goto L_002E0074;
    case 8u: goto L_002E007C;
    case 9u: goto L_002E00AC;
    case 10u: goto L_002E00B4;
    case 11u: goto L_002E00C0;
    case 12u: goto L_002E00D8;
    case 13u: goto L_002E00E0;
    case 14u: goto L_002E0108;
    case 15u: goto L_002E0114;
    case 16u: goto L_002E011C;
    case 17u: goto L_002E0120;
    case 18u: goto L_002E0134;
    case 19u: goto L_002E0150;
    case 20u: goto L_002E0158;
    case 21u: goto L_002E0160;
    case 22u: goto L_002E01E4;
    case 23u: goto L_002E01E8;
    case 24u: goto L_002E01FC;
    case 25u: goto L_002E0218;
    case 26u: goto L_002E023C;
    case 27u: goto L_002E0264;
    case 28u: goto L_002E0274;
    case 29u: goto L_002E02AC;
    case 30u: goto L_002E02B8;
    case 31u: goto L_002E02D0;
    case 32u: goto L_002E030C;
    case 33u: goto L_002E0318;
    case 34u: goto L_002E036C;
    case 35u: goto L_002E0394;
    case 36u: goto L_002E03B0;
    case 37u: goto L_002E0468;
    case 38u: goto L_002E0480;
    case 39u: goto L_002E0490;
    case 40u: goto L_002E04BC;
    case 41u: goto L_002E04C4;
    case 42u: goto L_002E0518;
    case 43u: goto L_002E052C;
    case 44u: goto L_002E0538;
    case 45u: goto L_002E0568;
    case 46u: goto L_002E05D4;
    case 47u: goto L_002E0670;
    case 48u: goto L_002E0694;
    case 49u: goto L_002E0708;
    case 50u: goto L_002E0728;
    case 51u: goto L_002E0738;
    case 52u: goto L_002E0790;
    case 53u: goto L_002E07CC;
    case 54u: goto L_002E07E0;
    case 55u: goto L_002E08D0;
    case 56u: goto L_002E0998;
    case 57u: goto L_002E09C0;
    case 58u: goto L_002E09D8;
    case 59u: goto L_002E09E0;
    case 60u: goto L_002E09F0;
    case 61u: goto L_002E0AC8;
    case 62u: goto L_002E0AD0;
    case 63u: goto L_002E0AD8;
    case 64u: goto L_002E0AE0;
    case 65u: goto L_002E0B04;
    case 66u: goto L_002E0B0C;
    case 67u: goto L_002E0B70;
    case 68u: goto L_002E0BA4;
    case 69u: goto L_002E0C5C;
    case 70u: goto L_002E0C78;
    case 71u: goto L_002E0CF8;
    case 72u: goto L_002E0D30;
    case 73u: goto L_002E0D40;
    case 74u: goto L_002E0D48;
    case 75u: goto L_002E0D50;
    case 76u: goto L_002E0D68;
    case 77u: goto L_002E0D70;
    case 78u: goto L_002E0D78;
    case 79u: goto L_002E0D80;
    case 80u: goto L_002E0D88;
    case 81u: goto L_002E0DB0;
    case 82u: goto L_002E0EC0;
    case 83u: goto L_002E0ED0;
    case 84u: goto L_002E0F80;
    case 85u: goto L_002E0F90;
    case 86u: goto L_002E1078;
    case 87u: goto L_002E1080;
    case 88u: goto L_002E1088;
    case 89u: goto L_002E10AC;
    case 90u: goto L_002E10B4;
    case 91u: goto L_002E1128;
    case 92u: goto L_002E1218;
    case 93u: goto L_002E1220;
    case 94u: goto L_002E1228;
    case 95u: goto L_002E1234;
    case 96u: goto L_002E123C;
    case 97u: goto L_002E12F8;
    case 98u: goto L_002E138C;
    case 99u: goto L_002E13F4;
    case 100u: goto L_002E145C;
    case 101u: goto L_002E1470;
    case 102u: goto L_002E155C;
    case 103u: goto L_002E1588;
    case 104u: goto L_002E15C0;
    case 105u: goto L_002E15F0;
    case 106u: goto L_002E1618;
    case 107u: goto L_002E1620;
    case 108u: goto L_002E1628;
    case 109u: goto L_002E1650;
    case 110u: goto L_002E1750;
    case 111u: goto L_002E1760;
    case 112u: goto L_002E1770;
    case 113u: goto L_002E1824;
    case 114u: goto L_002E184C;
    case 115u: goto L_002E1864;
    case 116u: goto L_002E186C;
    case 117u: goto L_002E187C;
    case 118u: goto L_002E18A4;
    case 119u: goto L_002E18BC;
    case 120u: goto L_002E18C4;
    case 121u: goto L_002E192C;
    case 122u: goto L_002E1954;
    case 123u: goto L_002E196C;
    case 124u: goto L_002E1974;
    case 125u: goto L_002E199C;
    case 126u: goto L_002E19A8;
    case 127u: goto L_002E19B4;
    case 128u: goto L_002E19C0;
    case 129u: goto L_002E1A00;
    case 130u: goto L_002E1A08;
    case 131u: goto L_002E1A30;
    case 132u: goto L_002E1A38;
    case 133u: goto L_002E1A60;
    case 134u: goto L_002E1A80;
    case 135u: goto L_002E1B54;
    case 136u: goto L_002E1B64;
    case 137u: goto L_002E1B98;
    case 138u: goto L_002E1BAC;
    case 139u: goto L_002E1BD4;
    case 140u: goto L_002E1BE4;
    case 141u: goto L_002E1BEC;
    case 142u: goto L_002E1C20;
    case 143u: goto L_002E1C34;
    case 144u: goto L_002E1C48;
    case 145u: goto L_002E1C7C;
    case 146u: goto L_002E1C90;
    case 147u: goto L_002E1CF4;
    case 148u: goto L_002E1D04;
    case 149u: goto L_002E1D40;
    case 150u: goto L_002E1D54;
    case 151u: goto L_002E1D7C;
    case 152u: goto L_002E1D8C;
    case 153u: goto L_002E1D94;
    case 154u: goto L_002E1DD0;
    case 155u: goto L_002E1DE4;
    case 156u: goto L_002E1E18;
    case 157u: goto L_002E1E54;
    case 158u: goto L_002E1E68;
    case 159u: goto L_002E1E90;
    case 160u: goto L_002E1F9C;
    case 161u: goto L_002E1FAC;
    case 162u: goto L_002E1FD0;
    case 163u: goto L_002E1FE4;
    case 164u: goto L_002E2010;
    case 165u: goto L_002E2024;
    case 166u: goto L_002E202C;
    case 167u: goto L_002E2050;
    case 168u: goto L_002E2064;
    case 169u: goto L_002E2084;
    case 170u: goto L_002E20A8;
    case 171u: goto L_002E20BC;
    case 172u: goto L_002E20E0;
    case 173u: goto L_002E21C8;
    case 174u: goto L_002E21D8;
    case 175u: goto L_002E21FC;
    case 176u: goto L_002E2210;
    case 177u: goto L_002E223C;
    case 178u: goto L_002E2250;
    case 179u: goto L_002E2258;
    case 180u: goto L_002E227C;
    case 181u: goto L_002E2290;
    case 182u: goto L_002E22C4;
    case 183u: goto L_002E22E8;
    case 184u: goto L_002E22FC;
    case 185u: goto L_002E2320;
    case 186u: goto L_002E2360;
    case 187u: goto L_002E23C0;
    case 188u: goto L_002E23E0;
    case 189u: goto L_002E2400;
    case 190u: goto L_002E2430;
    case 191u: goto L_002E2498;
    case 192u: goto L_002E25F4;
    case 193u: goto L_002E263C;
    case 194u: goto L_002E269C;
    case 195u: goto L_002E26C0;
    case 196u: goto L_002E26E8;
    case 197u: goto L_002E2710;
    case 198u: goto L_002E2720;
    case 199u: goto L_002E2730;
    case 200u: goto L_002E2758;
    case 201u: goto L_002E2764;
    case 202u: goto L_002E2780;
    case 203u: goto L_002E27A8;
    case 204u: goto L_002E281C;
    case 205u: goto L_002E2830;
    case 206u: goto L_002E2850;
    case 207u: goto L_002E2A64;
    case 208u: goto L_002E2A6C;
    case 209u: goto L_002E2A74;
    case 210u: goto L_002E2AB4;
    case 211u: goto L_002E2AD0;
    case 212u: goto L_002E2B84;
    case 213u: goto L_002E2B94;
    case 214u: goto L_002E2BAC;
    case 215u: goto L_002E2BF4;
    case 216u: goto L_002E2C4C;
    case 217u: goto L_002E2C64;
    case 218u: goto L_002E2C6C;
    case 219u: goto L_002E2C88;
    case 220u: goto L_002E2C9C;
    case 221u: goto L_002E2CB0;
    case 222u: goto L_002E2D08;
    case 223u: goto L_002E2D34;
    case 224u: goto L_002E2D58;
    case 225u: goto L_002E2D64;
    case 226u: goto L_002E2DB0;
    case 227u: goto L_002E2DBC;
    case 228u: goto L_002E2DC4;
    case 229u: goto L_002E2EE8;
    case 230u: goto L_002E2EF4;
    case 231u: goto L_002E2F3C;
    case 232u: goto L_002E2F44;
    case 233u: goto L_002E2F4C;
    case 234u: goto L_002E2FA4;
    case 235u: goto L_002E2FBC;
    case 236u: goto L_002E2FC8;
    case 237u: goto L_002E3010;
    case 238u: goto L_002E3020;
    case 239u: goto L_002E3030;
    case 240u: goto L_002E3084;
    case 241u: goto L_002E3098;
    case 242u: goto L_002E30B0;
    case 243u: goto L_002E3100;
    case 244u: goto L_002E3120;
    case 245u: goto L_002E3128;
    case 246u: goto L_002E3140;
    case 247u: goto L_002E318C;
    case 248u: goto L_002E31A4;
    case 249u: goto L_002E31D0;
    case 250u: goto L_002E31DC;
    case 251u: goto L_002E31E4;
    case 252u: goto L_002E31F4;
    case 253u: goto L_002E31FC;
    case 254u: goto L_002E3204;
    case 255u: goto L_002E320C;
    case 256u: goto L_002E3214;
    case 257u: goto L_002E321C;
    case 258u: goto L_002E3240;
    case 259u: goto L_002E324C;
    case 260u: goto L_002E326C;
    case 261u: goto L_002E327C;
    case 262u: goto L_002E3284;
    case 263u: goto L_002E328C;
    case 264u: goto L_002E32A8;
    case 265u: goto L_002E32B4;
    case 266u: goto L_002E32BC;
    case 267u: goto L_002E32C4;
    case 268u: goto L_002E32CC;
    case 269u: goto L_002E32D4;
    case 270u: goto L_002E32DC;
    case 271u: goto L_002E32EC;
    case 272u: goto L_002E32F4;
    case 273u: goto L_002E32FC;
    case 274u: goto L_002E3304;
    case 275u: goto L_002E330C;
    case 276u: goto L_002E3320;
    case 277u: goto L_002E3330;
    case 278u: goto L_002E3338;
    case 279u: goto L_002E3340;
    case 280u: goto L_002E3348;
    case 281u: goto L_002E3350;
    case 282u: goto L_002E3358;
    case 283u: goto L_002E337C;
    case 284u: goto L_002E3388;
    case 285u: goto L_002E33E0;
    case 286u: goto L_002E33FC;
    case 287u: goto L_002E340C;
    case 288u: goto L_002E3414;
    case 289u: goto L_002E341C;
    case 290u: goto L_002E3438;
    case 291u: goto L_002E3444;
    case 292u: goto L_002E3494;
    case 293u: goto L_002E34A4;
    case 294u: goto L_002E34D4;
    case 295u: goto L_002E34F4;
    case 296u: goto L_002E3504;
    case 297u: goto L_002E350C;
    case 298u: goto L_002E3514;
    case 299u: goto L_002E351C;
    case 300u: goto L_002E3530;
    case 301u: goto L_002E3540;
    case 302u: goto L_002E3548;
    case 303u: goto L_002E3550;
    case 304u: goto L_002E3558;
    case 305u: goto L_002E3570;
    case 306u: goto L_002E359C;
    case 307u: goto L_002E35A8;
    case 308u: goto L_002E35B0;
    case 309u: goto L_002E35C0;
    case 310u: goto L_002E35C8;
    case 311u: goto L_002E35D0;
    case 312u: goto L_002E35D8;
    case 313u: goto L_002E35E0;
    case 314u: goto L_002E35E8;
    case 315u: goto L_002E35F0;
    case 316u: goto L_002E3604;
    case 317u: goto L_002E3614;
    case 318u: goto L_002E361C;
    case 319u: goto L_002E3640;
    case 320u: goto L_002E3668;
    case 321u: goto L_002E36C0;
    case 322u: goto L_002E36C4;
    case 323u: goto L_002E36C8;
    case 324u: goto L_002E36CC;
    case 325u: goto L_002E36D0;
    case 326u: goto L_002E36D4;
    case 327u: goto L_002E36D8;
    case 328u: goto L_002E36E0;
    case 329u: goto L_002E3800;
    case 330u: goto L_002E380C;
    case 331u: goto L_002E3814;
    case 332u: goto L_002E3830;
    case 333u: goto L_002E385C;
    case 334u: goto L_002E38D0;
    case 335u: goto L_002E38D8;
    case 336u: goto L_002E38E0;
    case 337u: goto L_002E3920;
    case 338u: goto L_002E394C;
    case 339u: goto L_002E3960;
    case 340u: goto L_002E3970;
    case 341u: goto L_002E3980;
    case 342u: goto L_002E3990;
    case 343u: goto L_002E39C8;
    case 344u: goto L_002E3AD0;
    case 345u: goto L_002E3AF0;
    case 346u: goto L_002E3B58;
    case 347u: goto L_002E3B70;
    case 348u: goto L_002E3B90;
    case 349u: goto L_002E3B98;
    case 350u: goto L_002E3BB0;
    case 351u: goto L_002E3BE8;
    case 352u: goto L_002E3BF4;
    case 353u: goto L_002E3C10;
    case 354u: goto L_002E3C54;
    case 355u: goto L_002E3CA0;
    case 356u: goto L_002E3D60;
    case 357u: goto L_002E3D8C;
    case 358u: goto L_002E3DD0;
    case 359u: goto L_002E3E08;
    case 360u: goto L_002E3E14;
    case 361u: goto L_002E3E30;
    case 362u: goto L_002E3E64;
    case 363u: goto L_002E3EB0;
    case 364u: goto L_002E3F5C;
    case 365u: goto L_002E3F7C;
    case 366u: goto L_002E3F90;
    case 367u: goto L_002E3FEC;
    default: bad_entry(c, 0x002E0000u); return;
    }
L_002E0000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0008u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_004D(c, 313u, depth + 1u); else { c.pc = 0x00237910u; return; } if (c.pc != 0x002E0008u) [[unlikely]] return; }
L_002E0008:
    c.f[1] = ld32((c.r[17].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 7ll ? 1ull : 0ull;
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 6;
L_002E0020:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[17].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DFFFCu | kUnwind; return; } [[clang::musttail]] return unit_0077(c, 339u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_002E0138; } }
    goto L_002E0030;
L_002E002C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002E0030:
    c.f[0] = ld32((c.r[18].w[0] + 144u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_002E010C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    st32((c.r[18].w[0] + 144u), c.r[2].w[0]);
    c.budget -= 2;
L_002E004C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[2].w[0] - 25088u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 24544u);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0074u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002E0074u) [[unlikely]] return; }
L_002E0074:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E007Cu); c.r[19].d[0] = c.r[2].d[0] & 31ull;  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002E007Cu) [[unlikely]] return; }
L_002E007C:
    c.r[2].d[0] = c.r[2].d[0] & 31ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(28ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    set32(c.r[3], c.r[2].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + c.r[19].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[6].d[0] = c.r[3].d[0] << 56;
    set32(c.r[4], c.r[18].w[0] + 192u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E00ACu); set32(c.r[5], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_002A(c, 388u, depth + 1u); else { c.pc = 0x001AB540u; return; } if (c.pc != 0x002E00ACu) [[unlikely]] return; }
L_002E00AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E00B4u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002E00B4u) [[unlikely]] return; }
L_002E00B4:
    c.r[2].d[0] = c.r[2].d[0] & 31ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(26ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E00D8; } }
    goto L_002E00C4;
L_002E00C0:
    c.budget -= 1;
L_002E00C4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E00D8u); set32(c.r[5], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_003A(c, 13u, depth + 1u); else { c.pc = 0x001E80C0u; return; } if (c.pc != 0x002E00D8u) [[unlikely]] return; }
L_002E00D8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 2;
L_002E00E0:
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E0108; } }
    set32(c.r[2], 0u + 5u);
    set32(c.r[5], 0u + 9u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0108u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x002E0108u) [[unlikely]] return; }
L_002E0108:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_002E010C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0114u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_005D(c, 686u, depth + 1u); else { c.pc = 0x00276330u; return; } if (c.pc != 0x002E0114u) [[unlikely]] return; }
L_002E0114:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002E0130; } }
L_002E011C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_002E0120:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002E0134; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002E0130:
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002E0134:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002E0138:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002E0150:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_002E0158:
    c.budget -= 2;
L_002E0160:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[2], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 78u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 256u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], c.r[29].w[0] + 76u);  if (t) { goto L_002E0210; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E020C; } }
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] << 7);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 48u));
    set32(c.r[4], c.r[3].w[0] + 16u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[6], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 8u)));
    c.f[1] = ld32((c.r[3].w[0] + 52u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 56u));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E01E8u); st32((c.r[29].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_002D(c, 110u, depth + 1u); else { c.pc = 0x001B58A0u; return; } if (c.pc != 0x002E01E8u) [[unlikely]] return; }
    goto L_002E01E8;
L_002E01E4:
    st32((c.r[29].w[0] + 40u), c.f[0]);
    c.budget -= 1;
L_002E01E8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_002E0204; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (t) { goto L_002E0234; } }
    goto L_002E0200;
L_002E01FC:
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 1;
L_002E0200:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_002E0204:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (t) { goto L_002E0234; } }
L_002E020C:
    set32(c.r[5], c.r[29].w[0] + 76u);
    c.budget -= 1;
L_002E0210:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0218u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_002D(c, 47u, depth + 1u); else { c.pc = 0x001B4D00u; return; } if (c.pc != 0x002E0218u) [[unlikely]] return; }
L_002E0218:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_002E0230; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (t) { goto L_002E0234; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_002E0230:
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 1;
L_002E0234:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E023Cu); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002E023Cu) [[unlikely]] return; }
L_002E023C:
    c.f[12] = ld32((c.r[29].w[0] + 76u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E026C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0264u); set32(c.r[4], ld32((c.r[16].w[0] + 188u)));  if (depth < kMaxDepth) unit_000F(c, 36u, depth + 1u); else { c.pc = 0x0013CD20u; return; } if (c.pc != 0x002E0264u) [[unlikely]] return; }
L_002E0264:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));  if (t) { goto L_002E0278; } }
L_002E026C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0274u); set32(c.r[4], ld32((c.r[16].w[0] + 188u)));  if (depth < kMaxDepth) unit_000F(c, 41u, depth + 1u); else { c.pc = 0x0013CE00u; return; } if (c.pc != 0x002E0274u) [[unlikely]] return; }
L_002E0274:
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 1;
L_002E0278:
    set32(c.r[3], 0u + 15u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 256u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002E02B8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 78u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E02ACu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0078(c, 39u, depth + 1u); else { c.pc = 0x002E0490u; return; } if (c.pc != 0x002E02ACu) [[unlikely]] return; }
L_002E02AC:
    c.f[12] = ld32((c.r[29].w[0] + 76u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E02B8u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 11u)));  if (depth < kMaxDepth) unit_0078(c, 36u, depth + 1u); else { c.pc = 0x002E03B0u; return; } if (c.pc != 0x002E02B8u) [[unlikely]] return; }
L_002E02B8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002E02D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], c.r[4].w[0] << 1);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], c.r[2].w[0] << 3);
    set32(c.r[5], ld32((c.r[28].w[0] - 28524u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 28520u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[16], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E030Cu); set32(c.r[5], c.r[4].w[0] + 16u);  if (depth < kMaxDepth) unit_0029(c, 110u, depth + 1u); else { c.pc = 0x001A57E0u; return; } if (c.pc != 0x002E030Cu) [[unlikely]] return; }
L_002E030C:
    set32(c.r[5], c.r[16].w[0] + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0318u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0029(c, 110u, depth + 1u); else { c.pc = 0x001A57E0u; return; } if (c.pc != 0x002E0318u) [[unlikely]] return; }
L_002E0318:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 20784u)));
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[2].w[0] << 9);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 28536u)));
    c.r[1].d[0] = c.r[17].sd[0] < 10ll ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_002E0374; } }
    set32(c.r[2], 0u + 4u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 28536u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    set32(c.r[5], c.r[2].w[0] + 24960u);
    set32(c.r[6], 0u + 256u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E036Cu); set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x002E036Cu) [[unlikely]] return; }
L_002E036C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_002E0398; } }
L_002E0374:
    set32(c.r[2], 0u + 24u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 28536u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    set32(c.r[5], c.r[2].w[0] + 25216u);
    set32(c.r[6], 0u + 1536u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0394u); set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x002E0394u) [[unlikely]] return; }
L_002E0394:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002E0398:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E03B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[7], ld32((c.r[1].w[0] + 10416u)));
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 28524u)));
    set32(c.r[6], 0u + 948u);
    set32(c.r[8], c.r[2].w[0] << 3);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    mmi::mult(c, 0, c.r[7].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 28532u)));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[5].w[0] + 8u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[2], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[1].w[0] + 10416u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] << 5);
    set32(c.r[6], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 28528u)));
    set32(c.r[6], c.r[2].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 42;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[5].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_002E0470; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 28520u)));
    set32(c.r[3], c.r[4].w[0] << 4);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0468u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 44u, depth + 1u); else { c.pc = 0x0013CED0u; return; } if (c.pc != 0x002E0468u) [[unlikely]] return; }
L_002E0468:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_002E0484; } }
L_002E0470:
    set32(c.r[2], ld32((c.r[28].w[0] - 28520u)));
    set32(c.r[3], c.r[4].w[0] << 4);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0480u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 46u, depth + 1u); else { c.pc = 0x0013CF60u; return; } if (c.pc != 0x002E0480u) [[unlikely]] return; }
L_002E0480:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_002E0484:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002E0490:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[6], c.r[17].w[0] + 32u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E04BCu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002E04BCu) [[unlikely]] return; }
L_002E04BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E04C4u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013CBB0u; return; } if (c.pc != 0x002E04C4u) [[unlikely]] return; }
L_002E04C4:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[20] = c.f[0];  if (t) { goto L_002E0648; } }
    set32(c.r[18], c.r[29].w[0] + 88u);
    c.f[0] = ld32((c.r[18].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E0648; } }
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[16], c.r[29].w[0] + 84u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0518u); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002E0518u) [[unlikely]] return; }
L_002E0518:
    c.f[1] = ld32((c.r[29].w[0] + 80u));
    c.f[0] = ld32((c.r[18].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E052Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002E052Cu) [[unlikely]] return; }
L_002E052C:
    c.f[12] = ld32((c.r[16].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0538u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002E0538u) [[unlikely]] return; }
L_002E0538:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x39510000u);
    c.r[2].d[0] = c.r[2].d[0] | 46871ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[12] = ld32((c.r[29].w[0] + 80u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0568u); c.f[13] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002E0568u) [[unlikely]] return; }
L_002E0568:
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x39510000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 11u)));
    c.r[1].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002E05A8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[9], c.r[3].w[0] + 24960u);  if (t) { goto L_002E05B4; } }
L_002E05A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    set32(c.r[7], 0u + 24u);
    set32(c.r[9], c.r[3].w[0] + 25216u);
    c.budget -= 3;
L_002E05B4:
    c.r[1].d[0] = 0ll < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (t) { goto L_002E0648; } }
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44610000u);
    c.f[3] = c.r[3].w[0];
    c.budget -= 5;
L_002E05D4:
    c.f[1] = ld32((c.r[9].w[0] + 48u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 11u)));
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[3], ld32((c.r[28].w[0] - 28536u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    fpu_div(c, 1u, c.f[1], c.f[20]);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[8], c.r[8].w[0] + 4u);
    c.r[3].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.f[1] = ld32((c.r[9].w[0] + 52u));
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    set32(c.r[9], c.r[9].w[0] + 64u);
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    fpu_div(c, 1u, c.f[1], c.f[20]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 29;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 52u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E05D4u | kUnwind; return; } goto L_002E05D4; } }
L_002E0648:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002E0670:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[5], 0u + 2u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0694u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x002E0694u) [[unlikely]] return; }
L_002E0694:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (t) { goto L_002E0728; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[4], 0u + 18u);
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 24u), c.r[17].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    set32(c.r[3], c.r[2].w[0] + 1936u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[2], c.r[2].w[0] + 6000u);
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 90u)));
    c.budget -= 21;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E0710; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[2].w[0] - 11312u);
    set32(c.r[7], 0u + 43u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0708u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x002E0708u) [[unlikely]] return; }
L_002E0708:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 4u);  if (t) { goto L_002E072C; } }
L_002E0710:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[2].w[0] - 11280u);
    set32(c.r[7], 0u + 43u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0728u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x002E0728u) [[unlikely]] return; }
L_002E0728:
    set32(c.r[5], 0u + 4u);
    c.budget -= 1;
L_002E072C:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0738u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x002E0738u) [[unlikely]] return; }
L_002E0738:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { mmi::paddub(c.r[2], c.r[16], c.r[0]);  goto L_002E0778; }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00140000u);
    set32(c.r[5], 0u + 20u);
    set32(c.r[4], 0u + 11u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] - 8000u);
    st32((c.r[2].w[0] + 24u), c.r[17].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 14;
L_002E0778:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E0790:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E07AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_002E07D0; } }
L_002E07AC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 24416u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E07CCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E07CCu) [[unlikely]] return; }
L_002E07CC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_002E07D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002E07E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x477F0000u);
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    c.r[5].d[0] = c.r[3].d[0] | 65280ull;
    c.r[3].d[0] = 0ull | 65535ull;
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 64u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 80u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[5].w[0]);
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 277u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 531u));
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] + 320u);  if (t) { goto L_002E0838; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (t) { goto L_002E0850; } }
L_002E0838:
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[6].d[0]) { mmi::paddub(c.r[6], c.r[0], c.r[0]);  goto L_002E0850; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 28u), 0u);  if (t) { goto L_002E0854; } }
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 1;
L_002E0850:
    st32((c.r[4].w[0] + 28u), 0u);
    c.budget -= 1;
L_002E0854:
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 330u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E08AC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 331u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E08AC; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 104u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002E088C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 273u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002E08B0; } }
L_002E088C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 105u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002E08A4; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 273u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002E08B0; } }
L_002E08A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 273u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002E08B0; } }
L_002E08AC:
    st8((c.r[4].w[0] + 273u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002E08B0:
    set32(c.r[3], c.r[28].w[0] - 28512u);
    set32(c.r[9], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[2].w[0] + 112u), 0u);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    mmi::paddub(c.r[8], c.r[2], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.r[6].d[0] = c.r[3].d[0] | 59140ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 8;
L_002E08D0:
    st32((c.r[8].w[0] + 16u), 0u);
    st32((c.r[8].w[0] + 20u), 0u);
    set32(c.r[10], c.r[2].w[0] + c.r[7].w[0]);
    st32((c.r[8].w[0] + 24u), c.r[6].w[0]);
    st8((c.r[10].w[0] + 127u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[10].w[0] + 133u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < 3ll ? 1ull : 0ull;
    st8((c.r[10].w[0] + 124u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[10].w[0] + 136u), static_cast<std::uint8_t>(0u));
    st8((c.r[10].w[0] + 139u), static_cast<std::uint8_t>(0u));
    st32((c.r[8].w[0] + 64u), c.r[4].w[0]);
    st32((c.r[8].w[0] + 68u), c.r[4].w[0]);
    st32((c.r[8].w[0] + 72u), c.r[4].w[0]);
    st8((c.r[10].w[0] + 142u), static_cast<std::uint8_t>(0u));
    set32(c.r[8], c.r[8].w[0] + 16u);
    set32(c.r[9], c.r[9].w[0] + 2u);
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[10].w[0] + 145u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E08D0u | kUnwind; return; } goto L_002E08D0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], c.r[3].w[0] + 8544u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[6], c.r[3].w[0] + 8548u);
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[4], 0u + 2u);
    st32((c.r[2].w[0] + 116u), c.f[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[3].w[0] + 8720u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] + 8724u);
    set32(c.r[7], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[28].w[0] - 25228u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[2].w[0] + 120u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0998u); st32((c.r[28].w[0] - 25232u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 316u, depth + 1u); else { c.pc = 0x0013B910u; return; } if (c.pc != 0x002E0998u) [[unlikely]] return; }
L_002E0998:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 78u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E09C0u); set32(c.r[4], c.r[2].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002E09C0u) [[unlikely]] return; }
L_002E09C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] - 6032u);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E09D8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002E09D8u) [[unlikely]] return; }
L_002E09D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E09E0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 316u, depth + 1u); else { c.pc = 0x0013B910u; return; } if (c.pc != 0x002E09E0u) [[unlikely]] return; }
L_002E09E0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E09F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[17], ld32((c.r[4].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 512u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[18].w[0] + 320u);  if (t) { goto L_002E0D90; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 742u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002E0A4C; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002E0A4C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002E0D90; } }
L_002E0A4C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 330u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E0A98; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 331u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E0A98; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 104u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E0A80; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 273u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002E0A9C; } }
L_002E0A80:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 105u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002E0AA0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 273u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002E0A9C; } }
L_002E0A98:
    st8((c.r[18].w[0] + 273u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002E0A9C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002E0AA0:
    st8((c.r[16].w[0] + 139u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 130u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[2], c.r[28].w[0] - 28504u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0AC8u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E0AC8u) [[unlikely]] return; }
L_002E0AC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0AD0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x002E0AD0u) [[unlikely]] return; }
L_002E0AD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0AD8u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002E0AD8u) [[unlikely]] return; }
L_002E0AD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0AE0u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_000E(c, 316u, depth + 1u); else { c.pc = 0x0013B910u; return; } if (c.pc != 0x002E0AE0u) [[unlikely]] return; }
L_002E0AE0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0B04u); set32(c.r[4], c.r[2].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002E0B04u) [[unlikely]] return; }
L_002E0B04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0B0Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 316u, depth + 1u); else { c.pc = 0x0013B910u; return; } if (c.pc != 0x002E0B0Cu) [[unlikely]] return; }
L_002E0B0C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 139u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E0C9C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 166u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E0C9C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E0BCC; } }
    c.f[0] = ld32((c.r[17].w[0] + 1008u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 59140ull;
    set32(c.r[7], c.r[29].w[0] + 72u);
    c.f[13] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC47A0000u);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 1012u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[6], c.r[18].w[0] + 32u);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.f[12] = ld32((c.r[7].w[0]));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0B70u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 168u, depth + 1u); else { c.pc = 0x0026E790u; return; } if (c.pc != 0x002E0B70u) [[unlikely]] return; }
L_002E0B70:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E0B88; } }
    c.f[0] = ld32((c.r[17].w[0] + 2100u));
    st32((c.r[18].w[0] + 36u), c.f[0]);
    c.budget -= 2;
L_002E0B88:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 59140ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0BA4u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0016(c, 135u, depth + 1u); else { c.pc = 0x0015B5A0u; return; } if (c.pc != 0x002E0BA4u) [[unlikely]] return; }
L_002E0BA4:
    c.f[3] = ld32((c.r[16].w[0] + 16u));
    c.f[2] = ld32((c.r[16].w[0] + 20u));
    c.f[1] = ld32((c.r[16].w[0] + 24u));
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    st32((c.r[18].w[0] + 144u), c.f[3]);
    st32((c.r[18].w[0] + 148u), c.f[2]);
    st32((c.r[18].w[0] + 152u), c.f[1]);
    st32((c.r[18].w[0] + 156u), c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 275u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002E0CF8; } }
L_002E0BCC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 275u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_002E0BF0; }
    c.f[0] = ld32((c.r[17].w[0] + 1008u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 1012u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 68u), c.f[0]);  if (t) { goto L_002E0C30; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_002E0BF0:
    st8((c.r[18].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 1008u));
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 1012u));
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.budget -= 16;
L_002E0C30:
    set32(c.r[3], c.r[29].w[0] + 72u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC47A0000u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.f[12] = ld32((c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 59140ull;
    c.f[13] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[6], c.r[18].w[0] + 32u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0C5Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 168u, depth + 1u); else { c.pc = 0x0026E790u; return; } if (c.pc != 0x002E0C5Cu) [[unlikely]] return; }
L_002E0C5C:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 59140ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0C78u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0016(c, 135u, depth + 1u); else { c.pc = 0x0015B5A0u; return; } if (c.pc != 0x002E0C78u) [[unlikely]] return; }
L_002E0C78:
    c.f[3] = ld32((c.r[16].w[0] + 16u));
    c.f[2] = ld32((c.r[16].w[0] + 20u));
    c.f[1] = ld32((c.r[16].w[0] + 24u));
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    st32((c.r[18].w[0] + 144u), c.f[3]);
    st32((c.r[18].w[0] + 148u), c.f[2]);
    st32((c.r[18].w[0] + 152u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 156u), c.f[0]);  if (t) { goto L_002E0CF8; } }
L_002E0C9C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 166u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 30u);  goto L_002E0CB4; }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[18].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 30u);
    c.budget -= 3;
L_002E0CB4:
    st8((c.r[18].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 59140ull;
    c.f[12] = c.r[2].w[0];
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[18].w[0] + 32u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[18].w[0] + 36u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[18].w[0] + 40u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0CF8u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0016(c, 135u, depth + 1u); else { c.pc = 0x0015B5A0u; return; } if (c.pc != 0x002E0CF8u) [[unlikely]] return; }
L_002E0CF8:
    c.f[3] = ld32((c.r[16].w[0] + 16u));
    c.f[2] = ld32((c.r[16].w[0] + 20u));
    c.f[1] = ld32((c.r[16].w[0] + 24u));
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 59140ull;
    c.f[14] = c.r[2].w[0];
    st32((c.r[18].w[0] + 128u), c.f[3]);
    st32((c.r[18].w[0] + 132u), c.f[2]);
    st32((c.r[18].w[0] + 136u), c.f[1]);
    st32((c.r[18].w[0] + 140u), c.f[0]);
    c.f[13] = ld32((c.r[16].w[0] + 20u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0D30u); c.f[12] = ld32((c.r[16].w[0] + 16u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002E0D30u) [[unlikely]] return; }
L_002E0D30:
    c.f[13] = ld32((c.r[16].w[0] + 68u));
    c.f[14] = ld32((c.r[16].w[0] + 72u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0D40u); c.f[12] = ld32((c.r[16].w[0] + 64u));  if (depth < kMaxDepth) unit_000F(c, 18u, depth + 1u); else { c.pc = 0x0013C8A0u; return; } if (c.pc != 0x002E0D40u) [[unlikely]] return; }
L_002E0D40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0D48u); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002E0D48u) [[unlikely]] return; }
L_002E0D48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0D50u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_000E(c, 316u, depth + 1u); else { c.pc = 0x0013B910u; return; } if (c.pc != 0x002E0D50u) [[unlikely]] return; }
L_002E0D50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] - 6032u);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0D68u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002E0D68u) [[unlikely]] return; }
L_002E0D68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0D70u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 316u, depth + 1u); else { c.pc = 0x0013B910u; return; } if (c.pc != 0x002E0D70u) [[unlikely]] return; }
L_002E0D70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0D78u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x002E0D78u) [[unlikely]] return; }
L_002E0D78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0D80u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0078(c, 85u, depth + 1u); else { c.pc = 0x002E0F90u; return; } if (c.pc != 0x002E0D80u) [[unlikely]] return; }
L_002E0D80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0D88u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0078(c, 109u, depth + 1u); else { c.pc = 0x002E1650u; return; } if (c.pc != 0x002E0D88u) [[unlikely]] return; }
L_002E0D88:
    set32(c.r[3], 0u + 2u);
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002E0D90:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002E0DB0:
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[7], ld32((c.r[3].w[0] + 1524u)));
    set32(c.r[3], c.r[3].w[0] + 1344u);
    c.budget -= 6;
    { const bool t = c.r[7].d[0] == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { goto L_002E0E60; } }
    set32(c.r[6], 0u + 1u);
    st8((c.r[5].w[0] + 139u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[7].d[0];  if (t) { goto L_002E0E24; } }
    st8((c.r[4].w[0] + 277u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], 0u + 2u);
    st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 136u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[5].w[0] + 133u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_002E0E58; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E0E58; } }
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st32((c.r[5].w[0] + 64u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 68u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 72u), c.r[3].w[0]);  if (t) { goto L_002E0E58; } }
L_002E0E24:
    st8((c.r[5].w[0] + 136u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_002E0E58; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E0E58; } }
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st32((c.r[5].w[0] + 64u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 68u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 6;
L_002E0E58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 28u), c.r[7].w[0]);  if (t) { goto L_002E0EB8; } }
L_002E0E60:
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[7].d[0];  if (t) { goto L_002E0E70; } }
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_002E0E70:
    st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 277u), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 133u), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 136u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E0EB4; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_002E0EB4; } }
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[5].w[0] + 64u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 68u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 6;
L_002E0EB4:
    st32((c.r[4].w[0] + 28u), c.r[7].w[0]);
    c.budget -= 1;
L_002E0EB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 112u), c.r[7].w[0]);  c.pc = t; return; }
L_002E0EC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0ED0u);  if (depth < kMaxDepth) unit_0078(c, 81u, depth + 1u); else { c.pc = 0x002E0DB0u; return; } if (c.pc != 0x002E0ED0u) [[unlikely]] return; }
L_002E0ED0:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    set32(c.r[6], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_002E0F04; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_002E0F04; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002E0EFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_002E0F74; } }
L_002E0EFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_002E0F70; } }
L_002E0F04:
    c.f[0] = ld32((c.r[5].w[0] + 72u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E0F5C; } }
    c.f[0] = ld32((c.r[5].w[0] + 64u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[3], 0u + 1u);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 68u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 72u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 72u), c.f[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002E0F70; } }
L_002E0F5C:
    st32((c.r[5].w[0] + 64u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 68u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_002E0F70:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_002E0F74:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002E0F80:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E0DB0u | kUnwind; return; } goto L_002E0DB0; }
L_002E0F90:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[17], ld32((c.r[4].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 512u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[16].w[0] + 320u);  if (t) { goto L_002E1628; } }
    set32(c.r[5], 0u + 1u);
    st8((c.r[18].w[0] + 140u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 131u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E1020; } }
    st8((c.r[18].w[0] + 143u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 136u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002E101C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002E1014; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E100C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 112u)));  if (t) { goto L_002E1024; } }
L_002E100C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 146u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002E1020; } }
L_002E1014:
    st8((c.r[18].w[0] + 146u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 2;
L_002E101C:
    st8((c.r[18].w[0] + 131u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002E1020:
    set32(c.r[3], ld32((c.r[18].w[0] + 112u)));
    c.budget -= 1;
L_002E1024:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_002E1070; } }
    c.f[0] = ld32((c.r[18].w[0] + 16u));
    st32((c.r[18].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    st32((c.r[18].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 32u));
    st32((c.r[17].w[0] + 1016u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    st32((c.r[17].w[0] + 1020u), c.f[0]);
    st8((c.r[18].w[0] + 134u), static_cast<std::uint8_t>(0u));
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 56u), c.f[0]);  if (t) { goto L_002E1628; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_002E1070:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1078u);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x002E1078u) [[unlikely]] return; }
L_002E1078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1080u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002E1080u) [[unlikely]] return; }
L_002E1080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1088u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_000E(c, 316u, depth + 1u); else { c.pc = 0x0013B910u; return; } if (c.pc != 0x002E1088u) [[unlikely]] return; }
L_002E1088:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E10ACu); set32(c.r[4], c.r[2].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002E10ACu) [[unlikely]] return; }
L_002E10AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E10B4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 316u, depth + 1u); else { c.pc = 0x0013B910u; return; } if (c.pc != 0x002E10B4u) [[unlikely]] return; }
L_002E10B4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 143u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E1590; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E10D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_002E15E8; } }
L_002E10D4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 146u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E110C; } }
    c.f[0] = ld32((c.r[16].w[0] + 144u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 59140ull;
    st32((c.r[18].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 148u));
    st32((c.r[18].w[0] + 36u), c.f[0]);
    st32((c.r[18].w[0] + 40u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 146u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 146u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002E1134; } }
L_002E110C:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 59140ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1128u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0016(c, 135u, depth + 1u); else { c.pc = 0x0015B5A0u; return; } if (c.pc != 0x002E1128u) [[unlikely]] return; }
L_002E1128:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 59140ull;
    st32((c.r[18].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 3;
L_002E1134:
    set32(c.r[2], ld32((c.r[18].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { mmi::paddub(c.r[19], c.r[2], c.r[0]);  goto L_002E114C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[18].w[0] + 116u));  if (t) { goto L_002E1168; } }
    mmi::paddub(c.r[19], c.r[2], c.r[0]);
    c.budget -= 1;
L_002E114C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E1160; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[18].w[0] + 120u));  if (t) { goto L_002E1168; } }
L_002E1160:
    c.f[20] = ld32((c.r[18].w[0] + 116u));
    c.budget -= 2;
L_002E1168:
    c.f[0] = ld32((c.r[18].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E1190; } }
    st32((c.r[18].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 1;
L_002E1190:
    c.f[0] = ld32((c.r[18].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E11B8; } }
    st32((c.r[18].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 1;
L_002E11B8:
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBDD70000u);
    c.r[2].d[0] = c.r[2].d[0] | 2622ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E11E0; } }
    st32((c.r[18].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 1;
L_002E11E0:
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DD70000u);
    c.r[2].d[0] = c.r[2].d[0] | 2622ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 112u);  if (t) { goto L_002E120C; } }
    st32((c.r[18].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 2;
L_002E120C:
    set32(c.r[5], c.r[18].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1218u); set32(c.r[6], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002E1218u) [[unlikely]] return; }
L_002E1218:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1220u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 20u, depth + 1u); else { c.pc = 0x0013C9E0u; return; } if (c.pc != 0x002E1220u) [[unlikely]] return; }
L_002E1220:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1228u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x002E1228u) [[unlikely]] return; }
L_002E1228:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1234u); c.f[21] = c.f[0];  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013CBB0u; return; } if (c.pc != 0x002E1234u) [[unlikely]] return; }
L_002E1234:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E123Cu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x002E123Cu) [[unlikely]] return; }
L_002E123C:
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], 0u + 1u);  if (t) { goto L_002E1260; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 277u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E1498; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_002E1260:
    st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[1] = ld32((c.r[18].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[18].w[0] + 32u), c.f[1]);
    c.f[1] = ld32((c.r[18].w[0] + 20u));
    st32((c.r[18].w[0] + 36u), c.f[1]);
    c.f[1] = ld32((c.r[18].w[0] + 32u));
    st32((c.r[17].w[0] + 1016u), c.f[1]);
    c.f[1] = ld32((c.r[18].w[0] + 36u));
    st32((c.r[17].w[0] + 1020u), c.f[1]);
    c.f[1] = ld32((c.r[18].w[0] + 72u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 17;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E1510; } }
    st8((c.r[18].w[0] + 133u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[18].w[0] + 134u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 78u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E1470; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 133u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_002E1470; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 274u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E1470; } }
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 111u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E12F8; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E12F8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x002E12F8u) [[unlikely]] return; }
L_002E12F8:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E1470; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 260u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E1470; } }
    set32(c.r[2], c.r[3].w[0] + 688u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 7;
    if (c.r[6].d[0] != c.r[5].d[0]) { set32(c.r[5], 0u + 9u);  goto L_002E1398; }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8384u)));
    set32(c.r[7], 0u + 9u);
    set32(c.r[8], c.r[2].w[0] + c.r[8].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.budget -= 6;
    { const bool t = c.r[8].d[0] != c.r[7].d[0];  if (t) { goto L_002E1394; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_002E1394; } }
    set32(c.r[7], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[8], c.r[7].w[0] + 448u);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 448u));
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_002E1394; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[4], c.r[2].w[0] + 29152u);
    set32(c.r[7], 0u + 91u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E138Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 262u, depth + 1u); else { c.pc = 0x00196BF0u; return; } if (c.pc != 0x002E138Cu) [[unlikely]] return; }
L_002E138C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 755u)));  if (t) { goto L_002E1474; } }
L_002E1394:
    set32(c.r[5], 0u + 9u);
    c.budget -= 1;
L_002E1398:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[5].d[0]; set32(c.r[5], 0u + 5u);  if (t) { goto L_002E1400; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8384u)));
    set32(c.r[5], 0u + 5u);
    set32(c.r[7], c.r[2].w[0] + c.r[7].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 6;
    { const bool t = c.r[7].d[0] != c.r[5].d[0];  if (t) { goto L_002E13FC; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002E13FC; } }
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[7], c.r[5].w[0] + 448u);
    c.r[5].d[0] = ld8((c.r[5].w[0] + 448u));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002E13FC; } }
    set32(c.r[5], 0u + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[4], c.r[2].w[0] + 29152u);
    set32(c.r[6], 0u + 8u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E13F4u); set32(c.r[7], 0u + 58u);  if (depth < kMaxDepth) unit_0025(c, 262u, depth + 1u); else { c.pc = 0x00196BF0u; return; } if (c.pc != 0x002E13F4u) [[unlikely]] return; }
L_002E13F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E1470; } }
L_002E13FC:
    set32(c.r[5], 0u + 5u);
    c.budget -= 1;
L_002E1400:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[5].d[0]; set32(c.r[5], 0u + 5u);  if (t) { goto L_002E1468; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8384u)));
    set32(c.r[5], 0u + 9u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_002E1464; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E1464; } }
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] + 448u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 448u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E1464; } }
    set32(c.r[5], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[4], c.r[2].w[0] + 29152u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 40u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E145Cu); st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_0025(c, 262u, depth + 1u); else { c.pc = 0x00196BF0u; return; } if (c.pc != 0x002E145Cu) [[unlikely]] return; }
L_002E145C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E1470; } }
L_002E1464:
    set32(c.r[5], 0u + 5u);
    c.budget -= 1;
L_002E1468:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1470u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002E1470u) [[unlikely]] return; }
L_002E1470:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 755u)));
    c.budget -= 1;
L_002E1474:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E1510; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 776u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E1510; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002E1510; } }
L_002E1498:
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 134u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 755u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E14C0; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E14C0; } }
    st8((c.r[17].w[0] + 755u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002E14C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 133u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E14D8; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[18].w[0] + 133u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002E14D8:
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    c.f[1] = ld32((c.r[18].w[0] + 32u));
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    c.f[1] = ld32((c.r[18].w[0] + 36u));
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 32u));
    st32((c.r[17].w[0] + 1016u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    st32((c.r[17].w[0] + 1020u), c.f[0]);
    c.budget -= 14;
L_002E1510:
    c.f[3] = ld32((c.r[18].w[0] + 32u));
    c.f[2] = ld32((c.r[18].w[0] + 36u));
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = ld32((c.r[18].w[0] + 44u));
    set32(c.r[3], c.r[29].w[0] + 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    st32((c.r[3].w[0]), c.f[3]);
    st32((c.r[3].w[0] + 4u), c.f[2]);
    st32((c.r[3].w[0] + 8u), c.f[1]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    set32(c.r[5], ld32((c.r[18].w[0])));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E155Cu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x002E155Cu) [[unlikely]] return; }
L_002E155C:
    set32(c.r[2], c.r[29].w[0] + 104u);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[2].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 59140ull;
    set32(c.r[6], c.r[16].w[0] + 48u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.f[12] = c.f[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1588u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 168u, depth + 1u); else { c.pc = 0x0026E790u; return; } if (c.pc != 0x002E1588u) [[unlikely]] return; }
L_002E1588:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E15E4; } }
L_002E1590:
    st32((c.r[18].w[0] + 32u), 0u);
    st32((c.r[18].w[0] + 36u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 140u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E15E4; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 59140ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E15C0u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0016(c, 135u, depth + 1u); else { c.pc = 0x0015B5A0u; return; } if (c.pc != 0x002E15C0u) [[unlikely]] return; }
L_002E15C0:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[16].w[0] + 48u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[16].w[0] + 52u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[16].w[0] + 56u), c.f[0]);
    c.budget -= 9;
L_002E15E4:
    set32(c.r[4], 0u + 2u);
    c.budget -= 1;
L_002E15E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E15F0u);  if (depth < kMaxDepth) unit_000E(c, 316u, depth + 1u); else { c.pc = 0x0013B910u; return; } if (c.pc != 0x002E15F0u) [[unlikely]] return; }
L_002E15F0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 78u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1618u); set32(c.r[4], c.r[2].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002E1618u) [[unlikely]] return; }
L_002E1618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1620u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 316u, depth + 1u); else { c.pc = 0x0013B910u; return; } if (c.pc != 0x002E1620u) [[unlikely]] return; }
L_002E1620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1628u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x002E1628u) [[unlikely]] return; }
L_002E1628:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002E1650:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 512u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[4].w[0] + 320u);  if (t) { goto L_002E1748; } }
    st8((c.r[6].w[0] + 132u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 144u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002E16F0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002E16A4; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002E1690; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E1748; } }
L_002E1690:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E1748; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0] + 144u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002E16A4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E16C4; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 144u)));
    set32(c.r[3], 0u + 10u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0] + 144u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
L_002E16C4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 133u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002E1748; } }
    c.f[0] = ld32((c.r[6].w[0] + 16u));
    st32((c.r[6].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 20u));
    st32((c.r[6].w[0] + 52u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 132u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002E1748; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002E16F0:
    st8((c.r[6].w[0] + 132u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[6].w[0] + 96u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 100u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 104u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 104u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[5].w[0] - 1u);
    c.budget -= 17;
    { const bool t = c.r[5].d[0] != 0ull; st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002E1748; } }
    st8((c.r[6].w[0] + 144u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[6].w[0] + 96u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 5;
L_002E1748:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E1750:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002E1760:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_002E1770:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 330u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[17].w[0] + 320u);  if (t) { goto L_002E18CC; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 104u)));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[8].d[0];  if (t) { goto L_002E17B4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 105u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_002E17D0; } }
L_002E17B4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 74u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E17D0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002E1814; } }
L_002E17D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 131u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x477F0000u);  if (t) { goto L_002E17FC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 133u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E17F8; } }
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    st32((c.r[16].w[0] + 1016u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    st32((c.r[16].w[0] + 1020u), c.f[0]);
    c.budget -= 4;
L_002E17F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x477F0000u);
    c.budget -= 1;
L_002E17FC:
    c.r[4].d[0] = c.r[3].d[0] | 65280ull;
    st32((c.r[17].w[0] + 64u), c.r[4].w[0]);
    c.r[3].d[0] = 0ull | 65535ull;
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 112u), c.r[4].w[0]);  if (t) { goto L_002E1A60; } }
L_002E1814:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[8].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_002E1874; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1824u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_000E(c, 316u, depth + 1u); else { c.pc = 0x0013B910u; return; } if (c.pc != 0x002E1824u) [[unlikely]] return; }
L_002E1824:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 104u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E184Cu); set32(c.r[4], c.r[2].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002E184Cu) [[unlikely]] return; }
L_002E184C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] - 6032u);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1864u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002E1864u) [[unlikely]] return; }
L_002E1864:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E186Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 316u, depth + 1u); else { c.pc = 0x0013B910u; return; } if (c.pc != 0x002E186Cu) [[unlikely]] return; }
L_002E186C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));  if (t) { goto L_002E1978; } }
L_002E1874:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E187Cu);  if (depth < kMaxDepth) unit_000E(c, 316u, depth + 1u); else { c.pc = 0x0013B910u; return; } if (c.pc != 0x002E187Cu) [[unlikely]] return; }
L_002E187C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 105u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E18A4u); set32(c.r[4], c.r[2].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002E18A4u) [[unlikely]] return; }
L_002E18A4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] - 6032u);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E18BCu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002E18BCu) [[unlikely]] return; }
L_002E18BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E18C4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 316u, depth + 1u); else { c.pc = 0x0013B910u; return; } if (c.pc != 0x002E18C4u) [[unlikely]] return; }
L_002E18C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E1974; } }
L_002E18CC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 78u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002E18F8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 74u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E18F8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_002E1924; } }
L_002E18F8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 131u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E1A60; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 133u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E1A60; } }
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    st32((c.r[16].w[0] + 1016u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1020u), c.f[0]);  if (t) { goto L_002E1A60; } }
L_002E1924:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E192Cu);  if (depth < kMaxDepth) unit_000E(c, 316u, depth + 1u); else { c.pc = 0x0013B910u; return; } if (c.pc != 0x002E192Cu) [[unlikely]] return; }
L_002E192C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 78u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1954u); set32(c.r[4], c.r[2].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002E1954u) [[unlikely]] return; }
L_002E1954:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] - 6032u);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E196Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002E196Cu) [[unlikely]] return; }
L_002E196C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1974u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 316u, depth + 1u); else { c.pc = 0x0013B910u; return; } if (c.pc != 0x002E1974u) [[unlikely]] return; }
L_002E1974:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 1;
L_002E1978:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 330u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002E19A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], c.r[2].w[0] - 24400u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E199Cu); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_001B(c, 181u, depth + 1u); else { c.pc = 0x0016F160u; return; } if (c.pc != 0x002E199Cu) [[unlikely]] return; }
L_002E199C:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_002E19A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E19A8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0078(c, 134u, depth + 1u); else { c.pc = 0x002E1A80u; return; } if (c.pc != 0x002E19A8u) [[unlikely]] return; }
L_002E19A8:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E19B4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0078(c, 159u, depth + 1u); else { c.pc = 0x002E1E90u; return; } if (c.pc != 0x002E19B4u) [[unlikely]] return; }
L_002E19B4:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E19C0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0078(c, 172u, depth + 1u); else { c.pc = 0x002E20E0u; return; } if (c.pc != 0x002E19C0u) [[unlikely]] return; }
L_002E19C0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 330u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E1A60; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 273u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 24384u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], 0u + 3u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1A00u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_001B(c, 181u, depth + 1u); else { c.pc = 0x0016F160u; return; } if (c.pc != 0x002E1A00u) [[unlikely]] return; }
L_002E1A00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1A08u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_000E(c, 316u, depth + 1u); else { c.pc = 0x0013B910u; return; } if (c.pc != 0x002E1A08u) [[unlikely]] return; }
L_002E1A08:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 78u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1A30u); set32(c.r[4], c.r[2].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002E1A30u) [[unlikely]] return; }
L_002E1A30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1A38u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 316u, depth + 1u); else { c.pc = 0x0013B910u; return; } if (c.pc != 0x002E1A38u) [[unlikely]] return; }
L_002E1A38:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 10416u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 24384u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], 0u + 3u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1A60u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_001B(c, 181u, depth + 1u); else { c.pc = 0x0016F160u; return; } if (c.pc != 0x002E1A60u) [[unlikely]] return; }
L_002E1A60:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E1A80:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 640u)));
    c.budget -= 14;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[18], c.r[17].w[0] + 320u);  if (t) { goto L_002E1AC8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x477F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65280ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 64u), c.r[3].w[0]);  if (t) { goto L_002E1E68; } }
L_002E1AC8:
    set32(c.r[5], ld32((c.r[18].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002E1AE8; } }
    c.r[5].d[0] = ld8((c.r[5].w[0] + 532u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x004B0000u);  if (t) { goto L_002E1AE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[5].w[0] - 24320u);  if (t) { goto L_002E1CB8; } }
L_002E1AE8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 776u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] << 56;  if (t) { goto L_002E1C9C; } }
    c.r[19].d[0] = c.r[16].d[0] << 56;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);
    set32(c.r[5], c.r[19].w[0] + c.r[18].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 133u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_002E1C98; } }
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[16], c.r[2].w[0] - 24352u);
    set32(c.r[20], c.r[29].w[0] + 100u);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[20].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    st32((c.r[29].w[0] + 104u), c.f[0]);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 330u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E1BB4; } }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1B54u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 195u, depth + 1u); else { c.pc = 0x0016F6D0u; return; } if (c.pc != 0x002E1B54u) [[unlikely]] return; }
L_002E1B54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 112u);  if (t) { goto L_002E1E68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1B64u);  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x00102728u; return; } if (c.pc != 0x002E1B64u) [[unlikely]] return; }
L_002E1B64:
    set32(c.r[2], c.r[19].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.f[1] = ld32((c.r[2].w[0] + 64u));
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 112u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 68u));
    st32((c.r[29].w[0] + 132u), c.f[1]);
    st32((c.r[17].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1B98u); st32((c.r[17].w[0] + 132u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x002E1B98u) [[unlikely]] return; }
L_002E1B98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[4], c.r[2].w[0] - 27088u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1BACu); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 136u, depth + 1u); else { c.pc = 0x0016E520u; return; } if (c.pc != 0x002E1BACu) [[unlikely]] return; }
L_002E1BAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E1C90; } }
L_002E1BB4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 112u);  goto L_002E1C40; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 78u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 96u);  if (t) { goto L_002E1C3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1BD4u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 195u, depth + 1u); else { c.pc = 0x0016F6D0u; return; } if (c.pc != 0x002E1BD4u) [[unlikely]] return; }
L_002E1BD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[17].w[0] + 64u);  if (t) { goto L_002E1E68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1BE4u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x002E1BE4u) [[unlikely]] return; }
L_002E1BE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1BECu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x00102728u; return; } if (c.pc != 0x002E1BECu) [[unlikely]] return; }
L_002E1BEC:
    set32(c.r[2], c.r[19].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.f[1] = ld32((c.r[2].w[0] + 64u));
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 112u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 68u));
    st32((c.r[29].w[0] + 132u), c.f[1]);
    st32((c.r[17].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1C20u); st32((c.r[17].w[0] + 132u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x002E1C20u) [[unlikely]] return; }
L_002E1C20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[4], c.r[2].w[0] - 27088u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1C34u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 136u, depth + 1u); else { c.pc = 0x0016E520u; return; } if (c.pc != 0x002E1C34u) [[unlikely]] return; }
L_002E1C34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E1C90; } }
L_002E1C3C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_002E1C40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1C48u);  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x00102728u; return; } if (c.pc != 0x002E1C48u) [[unlikely]] return; }
L_002E1C48:
    set32(c.r[2], c.r[19].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 64u));
    set32(c.r[5], c.r[17].w[0] + 64u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 68u));
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 64u));
    st32((c.r[17].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 68u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1C7Cu); st32((c.r[17].w[0] + 132u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x002E1C7Cu) [[unlikely]] return; }
L_002E1C7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[4], c.r[2].w[0] - 27088u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1C90u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 136u, depth + 1u); else { c.pc = 0x0016E520u; return; } if (c.pc != 0x002E1C90u) [[unlikely]] return; }
L_002E1C90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);  if (t) { goto L_002E1E6C; } }
L_002E1C98:
    c.r[5].d[0] = c.r[16].d[0] << 56;
    c.budget -= 1;
L_002E1C9C:
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[5], c.r[5].w[0] + c.r[18].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 133u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[5], c.r[5].w[0] - 24352u);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[20], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 7;
L_002E1CB8:
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    set32(c.r[19], c.r[29].w[0] + 100u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    st32((c.r[19].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    st32((c.r[29].w[0] + 104u), c.f[0]);
    st32((c.r[29].w[0] + 108u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 330u)));
    c.budget -= 12;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002E1D5C; } }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1CF4u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 195u, depth + 1u); else { c.pc = 0x0016F6D0u; return; } if (c.pc != 0x002E1CF4u) [[unlikely]] return; }
L_002E1CF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 112u);  if (t) { goto L_002E1E68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1D04u);  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x00102728u; return; } if (c.pc != 0x002E1D04u) [[unlikely]] return; }
L_002E1D04:
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.f[1] = ld32((c.r[2].w[0] + 64u));
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 112u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 68u));
    st32((c.r[29].w[0] + 132u), c.f[1]);
    st32((c.r[17].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0]));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1D40u); st32((c.r[17].w[0] + 132u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x002E1D40u) [[unlikely]] return; }
L_002E1D40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[4], c.r[2].w[0] + 29200u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1D54u); mmi::paddub(c.r[6], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 136u, depth + 1u); else { c.pc = 0x0016E520u; return; } if (c.pc != 0x002E1D54u) [[unlikely]] return; }
L_002E1D54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E1E68; } }
L_002E1D5C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002E1DEC; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 8384u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 78u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[29].w[0] + 96u);  if (t) { goto L_002E1DEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1D7Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 195u, depth + 1u); else { c.pc = 0x0016F6D0u; return; } if (c.pc != 0x002E1D7Cu) [[unlikely]] return; }
L_002E1D7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[17].w[0] + 64u);  if (t) { goto L_002E1E68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1D8Cu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x002E1D8Cu) [[unlikely]] return; }
L_002E1D8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1D94u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x00102728u; return; } if (c.pc != 0x002E1D94u) [[unlikely]] return; }
L_002E1D94:
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.f[1] = ld32((c.r[2].w[0] + 64u));
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 112u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 68u));
    st32((c.r[29].w[0] + 132u), c.f[1]);
    st32((c.r[17].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0]));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1DD0u); st32((c.r[17].w[0] + 132u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x002E1DD0u) [[unlikely]] return; }
L_002E1DD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[4], c.r[2].w[0] + 29200u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1DE4u); mmi::paddub(c.r[6], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 136u, depth + 1u); else { c.pc = 0x0016E520u; return; } if (c.pc != 0x002E1DE4u) [[unlikely]] return; }
L_002E1DE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E1E68; } }
L_002E1DEC:
    c.f[1] = ld32((c.r[17].w[0] + 64u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x477F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65280ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 112u);  if (t) { goto L_002E1E68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1E18u);  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x00102728u; return; } if (c.pc != 0x002E1E18u) [[unlikely]] return; }
L_002E1E18:
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 64u));
    set32(c.r[5], c.r[17].w[0] + 64u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 68u));
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 64u));
    st32((c.r[17].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 68u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1E54u); st32((c.r[17].w[0] + 132u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x002E1E54u) [[unlikely]] return; }
L_002E1E54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[4], c.r[2].w[0] + 29200u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1E68u); mmi::paddub(c.r[6], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 136u, depth + 1u); else { c.pc = 0x0016E520u; return; } if (c.pc != 0x002E1E68u) [[unlikely]] return; }
L_002E1E68:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002E1E6C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_002E1E90:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    c.r[18].d[0] = c.r[5].d[0] << 56;
    set32(c.r[16], c.r[19].w[0] + 320u);
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    set32(c.r[3], c.r[18].w[0] + c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 130u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], ld32((c.r[4].w[0] + 24u)));  if (t) { goto L_002E1EF0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 133u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = 0ull | 65535ull;  if (t) { goto L_002E1EE8; } }
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    st32((c.r[6].w[0] + 1016u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    st32((c.r[6].w[0] + 1020u), c.f[0]);
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 5;
L_002E1EE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_002E20BC; } }
L_002E1EF0:
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 640u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E1F0C; } }
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_002E20BC; } }
L_002E1F0C:
    set32(c.r[3], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E1F30; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 532u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E1F30; } }
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_002E20BC; } }
L_002E1F30:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 776u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[18].w[0] + c.r[16].w[0]);  if (t) { goto L_002E1F54; } }
    set32(c.r[3], c.r[18].w[0] + c.r[16].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 133u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002E20BC; } }
    set32(c.r[3], c.r[18].w[0] + c.r[16].w[0]);
    c.budget -= 1;
L_002E1F54:
    c.f[0] = ld32((c.r[19].w[0] + 48u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 133u)));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 52u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], c.r[3].w[0] - 24304u);
    set32(c.r[5], c.r[5].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 56u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    st32((c.r[29].w[0] + 92u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 330u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[4].w[0] + c.r[5].w[0]);  if (t) { goto L_002E1FEC; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1F9Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 195u, depth + 1u); else { c.pc = 0x0016F6D0u; return; } if (c.pc != 0x002E1F9Cu) [[unlikely]] return; }
L_002E1F9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E20BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1FACu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x00102728u; return; } if (c.pc != 0x002E1FACu) [[unlikely]] return; }
L_002E1FAC:
    set32(c.r[2], c.r[18].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 64u));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 68u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1FD0u); st32((c.r[29].w[0] + 116u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x002E1FD0u) [[unlikely]] return; }
L_002E1FD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[4], c.r[2].w[0] + 30416u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1FE4u); mmi::paddub(c.r[6], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 136u, depth + 1u); else { c.pc = 0x0016E520u; return; } if (c.pc != 0x002E1FE4u) [[unlikely]] return; }
L_002E1FE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_002E20C0; } }
L_002E1FEC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E206C; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 8384u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 78u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002E206C; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2010u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 195u, depth + 1u); else { c.pc = 0x0016F6D0u; return; } if (c.pc != 0x002E2010u) [[unlikely]] return; }
L_002E2010:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E20BC; } }
    set32(c.r[4], c.r[19].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2024u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x002E2024u) [[unlikely]] return; }
L_002E2024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E202Cu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x00102728u; return; } if (c.pc != 0x002E202Cu) [[unlikely]] return; }
L_002E202C:
    set32(c.r[2], c.r[18].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 64u));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 68u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2050u); st32((c.r[29].w[0] + 116u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x002E2050u) [[unlikely]] return; }
L_002E2050:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[4], c.r[2].w[0] + 30416u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2064u); mmi::paddub(c.r[6], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 136u, depth + 1u); else { c.pc = 0x0016E520u; return; } if (c.pc != 0x002E2064u) [[unlikely]] return; }
L_002E2064:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E20BC; } }
L_002E206C:
    set32(c.r[4], ld32((c.r[19].w[0] + 80u)));
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002E20BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2084u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x00102728u; return; } if (c.pc != 0x002E2084u) [[unlikely]] return; }
L_002E2084:
    set32(c.r[2], c.r[18].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 64u));
    set32(c.r[5], c.r[19].w[0] + 80u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 68u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E20A8u); st32((c.r[29].w[0] + 116u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x002E20A8u) [[unlikely]] return; }
L_002E20A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[4], c.r[2].w[0] + 30416u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E20BCu); mmi::paddub(c.r[6], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 136u, depth + 1u); else { c.pc = 0x0016E520u; return; } if (c.pc != 0x002E20BCu) [[unlikely]] return; }
L_002E20BC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002E20C0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_002E20E0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 640u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[16], c.r[19].w[0] + 320u);  if (t) { goto L_002E2128; } }
    c.r[18].d[0] = c.r[5].d[0] << 56;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    set32(c.r[4], c.r[18].w[0] + c.r[16].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 130u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E2138; } }
L_002E2128:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x477F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65280ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 112u), c.r[3].w[0]);  if (t) { goto L_002E22FC; } }
L_002E2138:
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E215C; } }
    c.r[4].d[0] = ld8((c.r[4].w[0] + 532u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E215C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[4].w[0] - 24256u);  if (t) { goto L_002E2190; } }
L_002E215C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 776u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + c.r[16].w[0]);  if (t) { goto L_002E217C; } }
    set32(c.r[4], c.r[18].w[0] + c.r[16].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 133u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E22FC; } }
    set32(c.r[4], c.r[18].w[0] + c.r[16].w[0]);
    c.budget -= 1;
L_002E217C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 133u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], c.r[4].w[0] - 24272u);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[17], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 5;
L_002E2190:
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 36u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    st32((c.r[29].w[0] + 92u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 330u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E2218; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E21C8u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 195u, depth + 1u); else { c.pc = 0x0016F6D0u; return; } if (c.pc != 0x002E21C8u) [[unlikely]] return; }
L_002E21C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E22FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E21D8u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x00102728u; return; } if (c.pc != 0x002E21D8u) [[unlikely]] return; }
L_002E21D8:
    set32(c.r[2], c.r[18].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 64u));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 68u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E21FCu); st32((c.r[29].w[0] + 116u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x002E21FCu) [[unlikely]] return; }
L_002E21FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[4], c.r[2].w[0] + 29808u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2210u); mmi::paddub(c.r[6], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 136u, depth + 1u); else { c.pc = 0x0016E520u; return; } if (c.pc != 0x002E2210u) [[unlikely]] return; }
L_002E2210:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_002E2300; } }
L_002E2218:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E2298; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 8384u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 78u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002E2298; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E223Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 195u, depth + 1u); else { c.pc = 0x0016F6D0u; return; } if (c.pc != 0x002E223Cu) [[unlikely]] return; }
L_002E223C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E22FC; } }
    set32(c.r[4], c.r[19].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2250u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x002E2250u) [[unlikely]] return; }
L_002E2250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2258u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x00102728u; return; } if (c.pc != 0x002E2258u) [[unlikely]] return; }
L_002E2258:
    set32(c.r[2], c.r[18].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 64u));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 68u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E227Cu); st32((c.r[29].w[0] + 116u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x002E227Cu) [[unlikely]] return; }
L_002E227C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[4], c.r[2].w[0] + 29808u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2290u); mmi::paddub(c.r[6], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 136u, depth + 1u); else { c.pc = 0x0016E520u; return; } if (c.pc != 0x002E2290u) [[unlikely]] return; }
L_002E2290:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E22FC; } }
L_002E2298:
    c.f[1] = ld32((c.r[19].w[0] + 112u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x477F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65280ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E22FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E22C4u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x00102728u; return; } if (c.pc != 0x002E22C4u) [[unlikely]] return; }
L_002E22C4:
    set32(c.r[2], c.r[18].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 64u));
    set32(c.r[5], c.r[19].w[0] + 112u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 68u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E22E8u); st32((c.r[29].w[0] + 116u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x002E22E8u) [[unlikely]] return; }
L_002E22E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[4], c.r[2].w[0] + 29808u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E22FCu); mmi::paddub(c.r[6], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 136u, depth + 1u); else { c.pc = 0x0016E520u; return; } if (c.pc != 0x002E22FCu) [[unlikely]] return; }
L_002E22FC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002E2300:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_002E2320:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    set32(c.r[2], 0u + 9u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_002E2350; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_002E23C4; } }
L_002E2350:
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2360u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x002E2360u) [[unlikely]] return; }
L_002E2360:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (t) { goto L_002E23C0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[4], 0u + 18u);
    set32(c.r[3], 0u + 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    set32(c.r[3], c.r[2].w[0] + 9184u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[2], c.r[2].w[0] + 10032u);
    set32(c.r[5], c.r[5].w[0] - 9u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[16].w[0] + 24u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 176u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E23C0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x002E23C0u) [[unlikely]] return; }
L_002E23C0:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 1;
L_002E23C4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E23E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 24224u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002E0000u < 16384u) { entry = entries_0078[(t - 0x002E0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002E2400:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[5], 0u + 16384u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 80u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 88u), 0u);
    st32((c.r[4].w[0] + 84u), 0u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 321u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002E2430:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    set32(c.r[18], c.r[20].w[0] + 320u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 514u)));
    c.budget -= 13;
    { const bool t = c.r[3].sd[0] > 0; set32(c.r[17], c.r[16].w[0] + 320u);  if (t) { goto L_002E24A4; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 742u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E24A4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[20].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_002E249C; } }
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2498u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 29u, depth + 1u); else { c.pc = 0x00198460u; return; } if (c.pc != 0x002E2498u) [[unlikely]] return; }
L_002E2498:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_002E249C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002E26F0; } }
L_002E24A4:
    set32(c.r[8], ld32((c.r[16].w[0] + 1260u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_002E26CC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[3].d[0] = c.r[8].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E26CC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 13u)));
    c.r[7].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002E26CC; } }
    c.r[6].d[0] = c.r[3].d[0] & 28ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002E26CC; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 8u);  if (t) { goto L_002E24F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[9], c.r[0], c.r[0]);  if (t) { goto L_002E251C; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 1;
L_002E24F4:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 16u);  if (t) { goto L_002E2508; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[9], 0u + 1u);  if (t) { goto L_002E251C; } }
    set32(c.r[3], 0u + 16u);
    c.budget -= 1;
L_002E2508:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; set32(c.r[9], 0u - 1u);  if (t) { goto L_002E251C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[9], 0u + 2u);  if (t) { goto L_002E251C; } }
    set32(c.r[9], 0u - 1u);
    c.budget -= 1;
L_002E251C:
    set32(c.r[19], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[19].d[0]; c.r[3].d[0] = c.r[7].d[0] & 2ull;  if (t) { goto L_002E2534; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[19], c.r[0], c.r[0]);  if (t) { goto L_002E2548; } }
    c.r[3].d[0] = c.r[7].d[0] & 2ull;
    c.budget -= 1;
L_002E2534:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[19], 0u - 1u);  goto L_002E2548; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2548; } }
    set32(c.r[19], 0u - 1u);
    c.budget -= 1;
L_002E2548:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] < 0;  if (t) { goto L_002E2570; } }
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + 6u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[6].w[0] & 31u));
    c.r[3].d[0] = c.r[8].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E2570; } }
    set32(c.r[19], 0u - 1u);
    c.budget -= 1;
L_002E2570:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] < 0;  if (t) { goto L_002E2644; } }
    c.budget -= 2;
    { const bool t = c.r[9].sd[0] < 0;  if (t) { goto L_002E2644; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 760u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E2644; } }
    set32(c.r[3], c.r[19].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[6], c.r[3].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[3].w[0] - 24208u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[9].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[20].w[0] + 32u), c.f[3]);
    st32((c.r[20].w[0] + 36u), c.f[2]);
    st32((c.r[20].w[0] + 40u), c.f[1]);
    st32((c.r[20].w[0] + 44u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 13u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 16384u);  if (t) { goto L_002E2614; } }
    c.f[0] = ld32((c.r[16].w[0] + 7740u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x459A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 47104ull;
    c.f[1] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E25F4u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002E25F4u) [[unlikely]] return; }
L_002E25F4:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    set32(c.r[2], ld32((c.r[20].w[0] + 80u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_002E2618; } }
    set32(c.r[2], 0u + 16384u);
    c.budget -= 1;
L_002E2614:
    st32((c.r[20].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 1;
L_002E2618:
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 6u);
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E263Cu); set32(c.r[5], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_005D(c, 686u, depth + 1u); else { c.pc = 0x00276330u; return; } if (c.pc != 0x002E263Cu) [[unlikely]] return; }
L_002E263C:
    set32(c.r[3], 0u + 1u);
    st8((c.r[20].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002E2644:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 13u)));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E26A4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_002E266C; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002E26F0; } }
L_002E266C:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_002E26F0; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E26F0; } }
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E269Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 25u, depth + 1u); else { c.pc = 0x00198370u; return; } if (c.pc != 0x002E269Cu) [[unlikely]] return; }
L_002E269C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);  if (t) { goto L_002E26F4; } }
L_002E26A4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_002E26C4; } }
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E26C0u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 29u, depth + 1u); else { c.pc = 0x00198460u; return; } if (c.pc != 0x002E26C0u) [[unlikely]] return; }
L_002E26C0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_002E26C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002E26F0; } }
L_002E26CC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_002E26EC; } }
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E26E8u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 29u, depth + 1u); else { c.pc = 0x00198460u; return; } if (c.pc != 0x002E26E8u) [[unlikely]] return; }
L_002E26E8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_002E26EC:
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002E26F0:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002E26F4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002E2710:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002E2720:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_002E2730:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 322u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2758u); set32(c.r[5], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_005D(c, 686u, depth + 1u); else { c.pc = 0x00276330u; return; } if (c.pc != 0x002E2758u) [[unlikely]] return; }
L_002E2758:
    set32(c.r[5], ld32((c.r[16].w[0] + 188u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2764u); set32(c.r[4], ld32((c.r[16].w[0] + 24u)));  if (depth < kMaxDepth) unit_001B(c, 92u, depth + 1u); else { c.pc = 0x0016DB00u; return; } if (c.pc != 0x002E2764u) [[unlikely]] return; }
L_002E2764:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E2780:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E27A8u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x002E27A8u) [[unlikely]] return; }
L_002E27A8:
    mmi::paddub(c.r[4], c.r[2], c.r[0]);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E281C; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[5], 0u + 18u);
    set32(c.r[3], 0u + 5u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[2], c.r[2].w[0] + 10288u);
    st32((c.r[4].w[0] + 24u), c.r[16].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[2], c.r[2].w[0] + 12544u);
    c.r[3].d[0] = c.r[17].d[0] << 56;
    st32((c.r[4].w[0] + 168u), c.r[2].w[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 23616u);
    set32(c.r[5], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E281Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x002E281Cu) [[unlikely]] return; }
L_002E281C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E2830:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 23520u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002E0000u < 16384u) { entry = entries_0078[(t - 0x002E0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002E2850:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 754u)));
    set32(c.r[4], 0u + 7u);
    c.budget -= 10;
    { const bool t = c.r[5].d[0] != c.r[4].d[0]; set32(c.r[3], c.r[17].w[0] + 320u);  if (t) { goto L_002E2884; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002E2AB4; } }
L_002E2884:
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[5], c.r[2].w[0] - 24112u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], c.r[2].w[0] - 23968u);
    set32(c.r[2], c.r[6].w[0] << 4);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[5], c.r[2].w[0] - 23824u);
    st32((c.r[3].w[0]), c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[3].w[0] + 4u), c.f[2]);
    set32(c.r[11], c.r[2].w[0] - 23680u);
    st32((c.r[3].w[0] + 8u), c.f[1]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[10], c.r[2].w[0] - 23616u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[9], c.r[2].w[0] - 23615u);
    set32(c.r[2], c.r[6].w[0] << 4);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[8], c.r[2].w[0] - 23614u);
    st32((c.r[3].w[0] + 16u), c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[3].w[0] + 20u), c.f[2]);
    set32(c.r[7], c.r[2].w[0] - 23613u);
    st32((c.r[3].w[0] + 24u), c.f[1]);
    st32((c.r[3].w[0] + 28u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[6], c.r[2].w[0] - 23612u);
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], c.r[2].w[0] - 23611u);
    set32(c.r[2], c.r[12].w[0] << 4);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[3].w[0] + 32u), c.f[3]);
    st32((c.r[3].w[0] + 36u), c.f[2]);
    st32((c.r[3].w[0] + 40u), c.f[1]);
    st32((c.r[3].w[0] + 44u), c.f[0]);
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 23610u);
    set32(c.r[12], c.r[13].w[0] << 1);
    set32(c.r[12], c.r[12].w[0] + c.r[13].w[0]);
    set32(c.r[12], c.r[12].w[0] << 1);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    c.r[13].sd[0] = static_cast<std::int16_t>(ld16((c.r[11].w[0])));
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[11].w[0] + 2u)));
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[11].w[0] + 4u)));
    st16((c.r[3].w[0] + 76u), static_cast<std::uint16_t>(c.r[13].w[0]));
    st16((c.r[3].w[0] + 78u), static_cast<std::uint16_t>(c.r[12].w[0]));
    st16((c.r[3].w[0] + 80u), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[11], c.r[12].w[0] << 3);
    set32(c.r[11], c.r[11].w[0] - c.r[12].w[0]);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    st8((c.r[3].w[0] + 82u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[10], c.r[11].w[0] << 3);
    set32(c.r[10], c.r[10].w[0] - c.r[11].w[0]);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    st8((c.r[3].w[0] + 83u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[9], c.r[10].w[0] << 3);
    set32(c.r[9], c.r[9].w[0] - c.r[10].w[0]);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    st8((c.r[3].w[0] + 84u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[8], c.r[9].w[0] << 3);
    set32(c.r[8], c.r[8].w[0] - c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    st8((c.r[3].w[0] + 85u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[7], c.r[8].w[0] << 3);
    set32(c.r[7], c.r[7].w[0] - c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    st8((c.r[3].w[0] + 86u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[6], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    st8((c.r[3].w[0] + 87u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[4], c.r[6].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    st8((c.r[3].w[0] + 95u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[3].w[0] + 88u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 89u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 90u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 91u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 92u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 93u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 120;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2A64u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 114u, depth + 1u); else { c.pc = 0x00305C00u; return; } if (c.pc != 0x002E2A64u) [[unlikely]] return; }
L_002E2A64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2A6Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0078(c, 239u, depth + 1u); else { c.pc = 0x002E3030u; return; } if (c.pc != 0x002E2A6Cu) [[unlikely]] return; }
L_002E2A6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2A74u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0078(c, 242u, depth + 1u); else { c.pc = 0x002E30B0u; return; } if (c.pc != 0x002E2A74u) [[unlikely]] return; }
L_002E2A74:
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 576u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 225u);
    st8((c.r[17].w[0] + 579u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[2], 0u + 11u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E2A9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 322u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002E2AA8; } }
L_002E2A9C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002E2AAC; } }
    st8((c.r[16].w[0] + 343u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002E2AA8:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_002E2AAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2AB4u);  if (depth < kMaxDepth) unit_0078(c, 211u, depth + 1u); else { c.pc = 0x002E2AD0u; return; } if (c.pc != 0x002E2AB4u) [[unlikely]] return; }
L_002E2AB4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E2AD0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[3], 0u + 4u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7784u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[17], c.r[18].w[0] + 320u);  if (t) { goto L_002E2B28; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 532u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002E2B2C; } }
    c.f[1] = ld32((c.r[16].w[0] + 1068u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E2B34; } }
L_002E2B28:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002E2B2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 532u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002E2B38; } }
L_002E2B34:
    st8((c.r[18].w[0] + 532u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002E2B38:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002E2BD0; } }
    st8((c.r[18].w[0] + 532u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 514u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002E2BB4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002E2BB4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 95u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_002E2B8C; } }
    set32(c.r[5], 0u + 2u);
    st8((c.r[18].w[0] + 10u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2B84u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_004F(c, 231u, depth + 1u); else { c.pc = 0x0023E700u; return; } if (c.pc != 0x002E2B84u) [[unlikely]] return; }
L_002E2B84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 742u));  if (t) { goto L_002E2BB8; } }
L_002E2B8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2B94u);  if (depth < kMaxDepth) unit_004F(c, 231u, depth + 1u); else { c.pc = 0x0023E700u; return; } if (c.pc != 0x002E2B94u) [[unlikely]] return; }
L_002E2B94:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_002E2BB0; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2BACu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_004F(c, 231u, depth + 1u); else { c.pc = 0x0023E700u; return; } if (c.pc != 0x002E2BACu) [[unlikely]] return; }
L_002E2BAC:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_002E2BB0:
    st8((c.r[18].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002E2BB4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 742u));
    c.budget -= 1;
L_002E2BB8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E2FEC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002E2FEC; } }
L_002E2BD0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 754u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_002E2BEC; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 88u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002E2BEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2BF4u);  if (depth < kMaxDepth) unit_0078(c, 246u, depth + 1u); else { c.pc = 0x002E3140u; return; } if (c.pc != 0x002E2BF4u) [[unlikely]] return; }
L_002E2BF4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002E2D8C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E2D8C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 90u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002E2CC8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E2C30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));  if (t) { goto L_002E2D90; } }
L_002E2C30:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 320u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[19], c.r[16].w[0] + 320u);  if (t) { goto L_002E2C54; } }
    st8((c.r[17].w[0] + 90u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 92u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2C4Cu); st8((c.r[17].w[0] + 93u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002E2C4Cu) [[unlikely]] return; }
L_002E2C4C:
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    st8((c.r[17].w[0] + 94u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002E2C54:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[19], c.r[0], c.r[0]);  if (t) { goto L_002E2D8C; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_002E2C64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2C6Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x002E2C6Cu) [[unlikely]] return; }
L_002E2C6C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_002E2CB4; }
    c.r[6].d[0] = c.r[19].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2C88u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_007E(c, 114u, depth + 1u); else { c.pc = 0x002F8DE0u; return; } if (c.pc != 0x002E2C88u) [[unlikely]] return; }
L_002E2C88:
    set32(c.r[2], c.r[19].w[0] + 44u);
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2C9Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 72u, depth + 1u); else { c.pc = 0x002211C0u; return; } if (c.pc != 0x002E2C9Cu) [[unlikely]] return; }
L_002E2C9C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_002E2CB0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2CB0u); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x002E2CB0u) [[unlikely]] return; }
L_002E2CB0:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_002E2CB4:
    c.r[3].d[0] = c.r[19].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E2C64u | kUnwind; return; } goto L_002E2C64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2D8C; } }
L_002E2CC8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 578u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E2CE0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002E2CE8; } }
L_002E2CE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 90u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002E2D8C; } }
L_002E2CE8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 92u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_002E2D88; }
    set32(c.r[2], 0u + 4u);
    st8((c.r[17].w[0] + 92u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2D08u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x002E2D08u) [[unlikely]] return; }
L_002E2D08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E2D64; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 93u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 94u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = c.r[2].d[0] << 56;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2D34u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);  if (depth < kMaxDepth) unit_007E(c, 77u, depth + 1u); else { c.pc = 0x002F8880u; return; } if (c.pc != 0x002E2D34u) [[unlikely]] return; }
L_002E2D34:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 93u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 94u)));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 34u);
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2D58u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (depth < kMaxDepth) unit_0048(c, 72u, depth + 1u); else { c.pc = 0x002211C0u; return; } if (c.pc != 0x002E2D58u) [[unlikely]] return; }
L_002E2D58:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2D64u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x002E2D64u) [[unlikely]] return; }
L_002E2D64:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 93u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 93u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 93u)));
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E2D8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 90u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002E2D8C; } }
L_002E2D88:
    st8((c.r[17].w[0] + 92u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002E2D8C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_002E2D90:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002E2EB0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_002E2EB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2DB0u);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002E2DB0u) [[unlikely]] return; }
L_002E2DB0:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2DBCu); st8((c.r[18].w[0] + 10u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0078(c, 239u, depth + 1u); else { c.pc = 0x002E3030u; return; } if (c.pc != 0x002E2DBCu) [[unlikely]] return; }
L_002E2DBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2DC4u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0078(c, 242u, depth + 1u); else { c.pc = 0x002E30B0u; return; } if (c.pc != 0x002E2DC4u) [[unlikely]] return; }
L_002E2DC4:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 82u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 184u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[6], c.r[3].w[0] - 24112u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[3].w[0] - 23968u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[18].w[0] + 188u), c.r[7].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[4], c.r[3].w[0] - 23824u);
    set32(c.r[3], 0u + 11u);
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.f[3] = ld32((c.r[6].w[0]));
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    c.f[1] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    st32((c.r[17].w[0]), c.f[3]);
    st32((c.r[17].w[0] + 4u), c.f[2]);
    st32((c.r[17].w[0] + 8u), c.f[1]);
    st32((c.r[17].w[0] + 12u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[17].w[0] + 16u), c.f[3]);
    st32((c.r[17].w[0] + 20u), c.f[2]);
    st32((c.r[17].w[0] + 24u), c.f[1]);
    st32((c.r[17].w[0] + 28u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.f[3] = ld32((c.r[4].w[0]));
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    st32((c.r[17].w[0] + 32u), c.f[3]);
    st32((c.r[17].w[0] + 36u), c.f[2]);
    st32((c.r[17].w[0] + 40u), c.f[1]);
    st32((c.r[17].w[0] + 44u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.budget -= 49;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002E2EA0; } }
    st8((c.r[16].w[0] + 322u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 90u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 91u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 92u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 93u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002E2FEC; } }
L_002E2EA0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E2FEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 343u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002E2FEC; } }
L_002E2EB0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.r[1].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002E2FEC; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002E2FD8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 95u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + 1u);  if (t) { goto L_002E2F20; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[18].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2EE8u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002E2EE8u) [[unlikely]] return; }
L_002E2EE8:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2EF4u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_004F(c, 231u, depth + 1u); else { c.pc = 0x0023E700u; return; } if (c.pc != 0x002E2EF4u) [[unlikely]] return; }
L_002E2EF4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002E2FD8; } }
    st8((c.r[16].w[0] + 322u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 2u);
    st16((c.r[16].w[0] + 1576u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 1588u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 1580u), static_cast<std::uint16_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1592u), static_cast<std::uint16_t>(0u));  if (t) { goto L_002E2FD8; } }
L_002E2F20:
    st8((c.r[18].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[3].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_002E2FAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2F3Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002E2F3Cu) [[unlikely]] return; }
L_002E2F3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2F44u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0078(c, 239u, depth + 1u); else { c.pc = 0x002E3030u; return; } if (c.pc != 0x002E2F44u) [[unlikely]] return; }
L_002E2F44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2F4Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0078(c, 242u, depth + 1u); else { c.pc = 0x002E30B0u; return; } if (c.pc != 0x002E2F4Cu) [[unlikely]] return; }
L_002E2F4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 83u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[18].w[0] + 184u)));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[4].w[0] << 2);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[18].w[0] + 188u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2FA4u); st32((c.r[17].w[0] + 24u), c.f[0]);  if (depth < kMaxDepth) unit_004F(c, 231u, depth + 1u); else { c.pc = 0x0023E700u; return; } if (c.pc != 0x002E2FA4u) [[unlikely]] return; }
L_002E2FA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 1260u)));  if (t) { goto L_002E2FDC; } }
L_002E2FAC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_002E2FD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2FBCu);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002E2FBCu) [[unlikely]] return; }
L_002E2FBC:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2FC8u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_004F(c, 231u, depth + 1u); else { c.pc = 0x0023E700u; return; } if (c.pc != 0x002E2FC8u) [[unlikely]] return; }
L_002E2FC8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002E2FD8; } }
    st8((c.r[16].w[0] + 343u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002E2FD8:
    set32(c.r[3], ld32((c.r[16].w[0] + 1260u)));
    c.budget -= 1;
L_002E2FDC:
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002E2FEC; } }
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002E2FEC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002E3010:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002E3020:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_002E3030:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[5], c.r[3].w[0] - 23552u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[7], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 14;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_002E3098; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 264u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 2u);  if (t) { goto L_002E3090; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3084u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 12u, depth + 1u); else { c.pc = 0x00304300u; return; } if (c.pc != 0x002E3084u) [[unlikely]] return; }
L_002E3084:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_002E309C; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_002E3090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3098u); c.r[6].d[0] = c.r[6].d[0] & 127ull;  if (depth < kMaxDepth) unit_0081(c, 12u, depth + 1u); else { c.pc = 0x00304300u; return; } if (c.pc != 0x002E3098u) [[unlikely]] return; }
L_002E3098:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_002E309C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002E30B0:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[3].w[0] - 27232u);
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8391u)));
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[4].w[0] + 512u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 514u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 516u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002E3100:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002E3128; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3120u);  if (depth < kMaxDepth) unit_0078(c, 246u, depth + 1u); else { c.pc = 0x002E3140u; return; } if (c.pc != 0x002E3120u) [[unlikely]] return; }
L_002E3120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3128u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 54u, depth + 1u); else { c.pc = 0x0013D070u; return; } if (c.pc != 0x002E3128u) [[unlikely]] return; }
L_002E3128:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E3140:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[17], c.r[19].w[0] + 320u);  if (t) { goto L_002E361C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[4].w[0] + 26912u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x002E0000u < 16384u) { entry = entries_0078[(t - 0x002E0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002E318C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 85u)));
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E31A4u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_005B(c, 287u, depth + 1u); else { c.pc = 0x0026F7D0u; return; } if (c.pc != 0x002E31A4u) [[unlikely]] return; }
L_002E31A4:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    st32((c.r[19].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 180u)));
    st32((c.r[19].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    st32((c.r[19].w[0] + 80u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 85u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E31D0u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002E31D0u) [[unlikely]] return; }
L_002E31D0:
    set32(c.r[5], c.r[19].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E31DCu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002E31DCu) [[unlikely]] return; }
L_002E31DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E31E4u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002E31E4u) [[unlikely]] return; }
L_002E31E4:
    c.f[13] = ld32((c.r[19].w[0] + 36u));
    c.f[14] = ld32((c.r[19].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E31F4u); c.f[12] = ld32((c.r[19].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002E31F4u) [[unlikely]] return; }
L_002E31F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E31FCu); set32(c.r[4], ld32((c.r[19].w[0] + 88u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002E31FCu) [[unlikely]] return; }
L_002E31FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3204u); set32(c.r[4], ld32((c.r[19].w[0] + 84u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002E3204u) [[unlikely]] return; }
L_002E3204:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E320Cu); set32(c.r[4], ld32((c.r[19].w[0] + 80u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002E320Cu) [[unlikely]] return; }
L_002E320C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3214u); set32(c.r[4], c.r[19].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002E3214u) [[unlikely]] return; }
L_002E3214:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_002E3620; } }
L_002E321C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E3294; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 86u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3240u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002E3240u) [[unlikely]] return; }
L_002E3240:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E324Cu); set32(c.r[5], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002E324Cu) [[unlikely]] return; }
L_002E324C:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    st32((c.r[19].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] - 16384u);
    st32((c.r[19].w[0] + 84u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[19].w[0] + 84u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E326Cu); st32((c.r[19].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002E326Cu) [[unlikely]] return; }
L_002E326C:
    c.f[13] = ld32((c.r[19].w[0] + 36u));
    c.f[14] = ld32((c.r[19].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E327Cu); c.f[12] = ld32((c.r[19].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002E327Cu) [[unlikely]] return; }
L_002E327C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3284u); set32(c.r[4], ld32((c.r[19].w[0] + 84u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002E3284u) [[unlikely]] return; }
L_002E3284:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E328Cu); set32(c.r[4], c.r[19].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002E328Cu) [[unlikely]] return; }
L_002E328C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E361C; } }
L_002E3294:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 86u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E32A8u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002E32A8u) [[unlikely]] return; }
L_002E32A8:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E32B4u); set32(c.r[5], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002E32B4u) [[unlikely]] return; }
L_002E32B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E32BCu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002E32BCu) [[unlikely]] return; }
L_002E32BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E32C4u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002E32C4u) [[unlikely]] return; }
L_002E32C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E32CCu); set32(c.r[4], c.r[16].w[0] + 8320u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002E32CCu) [[unlikely]] return; }
L_002E32CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E32D4u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000E(c, 328u, depth + 1u); else { c.pc = 0x0013BEC0u; return; } if (c.pc != 0x002E32D4u) [[unlikely]] return; }
L_002E32D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E32DCu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002E32DCu) [[unlikely]] return; }
L_002E32DC:
    c.f[13] = ld32((c.r[19].w[0] + 36u));
    c.f[14] = ld32((c.r[19].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E32ECu); c.f[12] = ld32((c.r[19].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002E32ECu) [[unlikely]] return; }
L_002E32EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E32F4u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x002E32F4u) [[unlikely]] return; }
L_002E32F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E32FCu); c.r[4].d[0] = 0ull | 49152ull;  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002E32FCu) [[unlikely]] return; }
L_002E32FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3304u); set32(c.r[4], c.r[19].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002E3304u) [[unlikely]] return; }
L_002E3304:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E361C; } }
L_002E330C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 87u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3320u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002E3320u) [[unlikely]] return; }
L_002E3320:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3330u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002E3330u) [[unlikely]] return; }
L_002E3330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3338u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 80u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002E3338u) [[unlikely]] return; }
L_002E3338:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3340u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 78u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002E3340u) [[unlikely]] return; }
L_002E3340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3348u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 76u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002E3348u) [[unlikely]] return; }
L_002E3348:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3350u); set32(c.r[4], c.r[19].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002E3350u) [[unlikely]] return; }
L_002E3350:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E361C; } }
L_002E3358:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E3424; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 86u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E337Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002E337Cu) [[unlikely]] return; }
L_002E337C:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3388u); set32(c.r[5], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002E3388u) [[unlikely]] return; }
L_002E3388:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 86u)));
    set32(c.r[3], c.r[29].w[0] + 88u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2032u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 86u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2040u));
    st32((c.r[3].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 32u));
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[12] = ld32((c.r[29].w[0] + 80u));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E33E0u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002E33E0u) [[unlikely]] return; }
L_002E33E0:
    st32((c.r[19].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] + 16384u);
    st32((c.r[19].w[0] + 84u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[19].w[0] + 84u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E33FCu); st32((c.r[19].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002E33FCu) [[unlikely]] return; }
L_002E33FC:
    c.f[13] = ld32((c.r[19].w[0] + 36u));
    c.f[14] = ld32((c.r[19].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E340Cu); c.f[12] = ld32((c.r[19].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002E340Cu) [[unlikely]] return; }
L_002E340C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3414u); set32(c.r[4], ld32((c.r[19].w[0] + 84u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002E3414u) [[unlikely]] return; }
L_002E3414:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E341Cu); set32(c.r[4], c.r[19].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002E341Cu) [[unlikely]] return; }
L_002E341C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E361C; } }
L_002E3424:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 86u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3438u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002E3438u) [[unlikely]] return; }
L_002E3438:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3444u); set32(c.r[5], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002E3444u) [[unlikely]] return; }
L_002E3444:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 86u)));
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[18], c.r[29].w[0] + 88u);
    set32(c.r[4], c.r[16].w[0] + 8320u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2032u));
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 86u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2036u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 86u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2040u));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3494u); st32((c.r[18].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 138u, depth + 1u); else { c.pc = 0x0026E440u; return; } if (c.pc != 0x002E3494u) [[unlikely]] return; }
L_002E3494:
    set32(c.r[4], c.r[16].w[0] + 8320u);
    set32(c.r[5], c.r[19].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E34A4u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_005B(c, 138u, depth + 1u); else { c.pc = 0x0026E440u; return; } if (c.pc != 0x002E34A4u) [[unlikely]] return; }
L_002E34A4:
    c.f[1] = ld32((c.r[29].w[0] + 80u));
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    set32(c.r[17], c.r[29].w[0] + 104u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0]));
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[12] = ld32((c.r[29].w[0] + 80u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E34D4u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002E34D4u) [[unlikely]] return; }
L_002E34D4:
    st32((c.r[19].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[4], c.r[16].w[0] + 8320u);
    set32(c.r[2], c.r[2].w[0] + 16384u);
    st32((c.r[19].w[0] + 84u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[19].w[0] + 84u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E34F4u); st32((c.r[19].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002E34F4u) [[unlikely]] return; }
L_002E34F4:
    c.f[12] = ld32((c.r[29].w[0] + 96u));
    c.f[13] = ld32((c.r[29].w[0] + 100u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3504u); c.f[14] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002E3504u) [[unlikely]] return; }
L_002E3504:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E350Cu); set32(c.r[4], ld32((c.r[19].w[0] + 84u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002E350Cu) [[unlikely]] return; }
L_002E350C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3514u); set32(c.r[4], c.r[19].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002E3514u) [[unlikely]] return; }
L_002E3514:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E361C; } }
L_002E351C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 86u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3530u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002E3530u) [[unlikely]] return; }
L_002E3530:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3540u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002E3540u) [[unlikely]] return; }
L_002E3540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3548u); c.r[4].d[0] = 0ull | 49152ull;  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002E3548u) [[unlikely]] return; }
L_002E3548:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3550u); set32(c.r[4], c.r[19].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002E3550u) [[unlikely]] return; }
L_002E3550:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E361C; } }
L_002E3558:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 85u)));
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3570u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_005B(c, 287u, depth + 1u); else { c.pc = 0x0026F7D0u; return; } if (c.pc != 0x002E3570u) [[unlikely]] return; }
L_002E3570:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    st32((c.r[19].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 180u)));
    st32((c.r[19].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    st32((c.r[19].w[0] + 80u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 85u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E359Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002E359Cu) [[unlikely]] return; }
L_002E359C:
    set32(c.r[5], c.r[19].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E35A8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002E35A8u) [[unlikely]] return; }
L_002E35A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E35B0u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002E35B0u) [[unlikely]] return; }
L_002E35B0:
    c.f[13] = ld32((c.r[19].w[0] + 36u));
    c.f[14] = ld32((c.r[19].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E35C0u); c.f[12] = ld32((c.r[19].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002E35C0u) [[unlikely]] return; }
L_002E35C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E35C8u); set32(c.r[4], ld32((c.r[19].w[0] + 88u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002E35C8u) [[unlikely]] return; }
L_002E35C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E35D0u); set32(c.r[4], 0u - 1820u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002E35D0u) [[unlikely]] return; }
L_002E35D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E35D8u); set32(c.r[4], ld32((c.r[19].w[0] + 84u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002E35D8u) [[unlikely]] return; }
L_002E35D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E35E0u); set32(c.r[4], ld32((c.r[19].w[0] + 80u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002E35E0u) [[unlikely]] return; }
L_002E35E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E35E8u); set32(c.r[4], c.r[19].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002E35E8u) [[unlikely]] return; }
L_002E35E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E361C; } }
L_002E35F0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 86u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3604u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002E3604u) [[unlikely]] return; }
L_002E3604:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3614u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002E3614u) [[unlikely]] return; }
L_002E3614:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E361Cu); set32(c.r[4], c.r[19].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002E361Cu) [[unlikely]] return; }
L_002E361C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002E3620:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_002E3640:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3668u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x002E3668u) [[unlikely]] return; }
L_002E3668:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E36AC; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[5], 0u + 18u);
    set32(c.r[4], 0u + 6u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[3], c.r[3].w[0] + 14720u);
    st32((c.r[2].w[0] + 24u), c.r[17].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[3], c.r[3].w[0] + 14016u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 15;
L_002E36AC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E36C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_002E36C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.budget -= 1;
L_002E36C8:
    set32(c.r[2], c.r[2].w[0] - 22880u);
    c.budget -= 1;
L_002E36CC:
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 1;
L_002E36D0:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_002E36D4:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_002E36D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002E0000u < 16384u) { entry = entries_0078[(t - 0x002E0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002E36E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[2].w[0] - 23504u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[5], c.r[2].w[0] - 23502u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    st8((c.r[4].w[0] + 320u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[2].w[0] - 23496u);
    set32(c.r[2], 0u + 2u);
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    st8((c.r[4].w[0] + 321u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[4].w[0] + 322u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 40;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_002E37B0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 23498u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st16((c.r[17].w[0] + 516u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 514u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 512u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002E37DC; } }
L_002E37B0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 23500u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st16((c.r[17].w[0] + 516u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 514u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 512u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 11;
L_002E37DC:
    set32(c.r[2], 0u + 8u);
    st8((c.r[17].w[0] + 518u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 13u);
    st8((c.r[17].w[0] + 519u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 224u);
    st8((c.r[17].w[0] + 579u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3800u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 114u, depth + 1u); else { c.pc = 0x00305C00u; return; } if (c.pc != 0x002E3800u) [[unlikely]] return; }
L_002E3800:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E380Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 16u, depth + 1u); else { c.pc = 0x003044E0u; return; } if (c.pc != 0x002E380Cu) [[unlikely]] return; }
L_002E380C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3814u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0078(c, 332u, depth + 1u); else { c.pc = 0x002E3830u; return; } if (c.pc != 0x002E3814u) [[unlikely]] return; }
L_002E3814:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E3830:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 320u)));
    set32(c.r[8], ld32((c.r[4].w[0] + 24u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[6], c.r[16].w[0] + 192u);
    set32(c.r[5], 0u + 8u);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[3].w[0] + 1984u);
    c.budget -= 11;
L_002E385C:
    set32(c.r[4], ld32((c.r[7].w[0])));
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st32((c.r[6].w[0]), c.r[4].w[0]);
    st32((c.r[6].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] + 8u);
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E385Cu | kUnwind; return; } goto L_002E385C; } }
    c.f[0] = ld32((c.r[16].w[0] + 240u));
    set32(c.r[4], 0u + 1u);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 244u));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 248u));
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002E3928; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E38B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002E3950; } }
L_002E38B4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002E38E8; } }
    set32(c.r[2], 0u + 2u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E38D0u); st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 216u, depth + 1u); else { c.pc = 0x0021EE00u; return; } if (c.pc != 0x002E38D0u) [[unlikely]] return; }
L_002E38D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E38D8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 251u, depth + 1u); else { c.pc = 0x0024BA20u; return; } if (c.pc != 0x002E38D8u) [[unlikely]] return; }
L_002E38D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E38E0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002E38E0u) [[unlikely]] return; }
L_002E38E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E394C; } }
L_002E38E8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_002E3900; } }
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 532u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002E394C; } }
L_002E3900:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E394C; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3920u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002E3920u) [[unlikely]] return; }
L_002E3920:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E394C; } }
L_002E3928:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E394C; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E394Cu); st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002E394Cu) [[unlikely]] return; }
L_002E394C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002E3950:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E3960:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002E3970:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_002E3980:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E3990:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    set32(c.r[4], 0u + 1u);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    mmi::paddub(c.r[16], c.r[7], c.r[0]);
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E39C8u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 278u, depth + 1u); else { c.pc = 0x003038C0u; return; } if (c.pc != 0x002E39C8u) [[unlikely]] return; }
L_002E39C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E3AAC; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[5], 0u + 18u);
    set32(c.r[4], 0u + 7u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[18].w[0]));
    set32(c.r[3], c.r[3].w[0] + 15056u);
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[3], c.r[3].w[0] + 18240u);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 28u), c.r[19].w[0]);
    c.f[3] = ld32((c.r[19].w[0] + 32u));
    c.f[2] = ld32((c.r[19].w[0] + 36u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[19].w[0] + 44u));
    set32(c.r[3], 0u + 255u);
    st32((c.r[2].w[0] + 32u), c.f[3]);
    st32((c.r[2].w[0] + 36u), c.f[2]);
    st32((c.r[2].w[0] + 40u), c.f[1]);
    st32((c.r[2].w[0] + 44u), c.f[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 80u)));
    st32((c.r[2].w[0] + 80u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 84u)));
    st32((c.r[2].w[0] + 84u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 88u)));
    st32((c.r[2].w[0] + 88u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 176u)));
    st32((c.r[2].w[0] + 176u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 180u)));
    st32((c.r[2].w[0] + 180u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 184u)));
    st32((c.r[2].w[0] + 184u), c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0] + 184u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    st32((c.r[2].w[0] + 188u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    st8((c.r[2].w[0] + 268u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    st8((c.r[2].w[0] + 270u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[2].w[0] + 264u), c.r[19].w[0]);
    st8((c.r[2].w[0] + 531u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    st8((c.r[2].w[0] + 320u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    st8((c.r[2].w[0] + 321u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    st8((c.r[2].w[0] + 322u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 55;
L_002E3AAC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002E3AD0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 22800u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002E0000u < 16384u) { entry = entries_0078[(t - 0x002E0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002E3AF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[5], 0u + 32u);
    set32(c.r[3], 0u + 226u);
    set32(c.r[2], 0u + 8u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 576u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 579u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 518u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 16384u);
    st16((c.r[4].w[0] + 512u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 514u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 516u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 256u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[3], c.r[3].w[0] + 25u);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3B58u); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0080(c, 309u, depth + 1u); else { c.pc = 0x00303FD0u; return; } if (c.pc != 0x002E3B58u) [[unlikely]] return; }
L_002E3B58:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 321u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002E3B70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3B70u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 16u, depth + 1u); else { c.pc = 0x003044E0u; return; } if (c.pc != 0x002E3B70u) [[unlikely]] return; }
L_002E3B70:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 22784u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3B90u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E3B90u) [[unlikely]] return; }
L_002E3B90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3B98u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0078(c, 350u, depth + 1u); else { c.pc = 0x002E3BB0u; return; } if (c.pc != 0x002E3B98u) [[unlikely]] return; }
L_002E3B98:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E3BB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 16384u);
    st16((c.r[4].w[0] + 514u), static_cast<std::uint16_t>(c.r[2].w[0]));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 22752u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3BE8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E3BE8u) [[unlikely]] return; }
L_002E3BE8:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3BF4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_005D(c, 686u, depth + 1u); else { c.pc = 0x00276330u; return; } if (c.pc != 0x002E3BF4u) [[unlikely]] return; }
L_002E3BF4:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E3C10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3BA30000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    st32((c.r[4].w[0] + 144u), c.f[3]);
    st32((c.r[4].w[0] + 148u), c.f[2]);
    st32((c.r[4].w[0] + 152u), c.f[1]);
    st32((c.r[4].w[0] + 156u), c.f[0]);
    st32((c.r[4].w[0] + 52u), 0u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3C54u); st32((c.r[4].w[0] + 68u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002E3C54u) [[unlikely]] return; }
L_002E3C54:
    c.r[3].d[0] = c.r[2].d[0] & 7ull;
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[3].w[0] - 22864u);
    c.r[5].d[0] = c.r[5].d[0] & 3ull;
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E3CA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[16].w[0] + 320u);  if (t) { goto L_002E3DD8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 7ull;
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.f[0] = ld32((c.r[16].w[0] + 144u));
    c.r[3].d[0] = c.r[5].d[0] & 4ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.f[2] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[2]);
    c.r[3].d[0] = c.r[5].d[0] & 2ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 152u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 68u));
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    c.budget -= 39;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[16].w[0] + 32u);  goto L_002E3D84; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3D60u);  if (depth < kMaxDepth) unit_002D(c, 103u, depth + 1u); else { c.pc = 0x001B56C0u; return; } if (c.pc != 0x002E3D60u) [[unlikely]] return; }
L_002E3D60:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002E3DB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[3], c.r[0], c.r[0]);  if (t) { goto L_002E3DB4; } }
L_002E3D84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3D8Cu);  if (depth < kMaxDepth) unit_0045(c, 192u, depth + 1u); else { c.pc = 0x00217510u; return; } if (c.pc != 0x002E3D8Cu) [[unlikely]] return; }
L_002E3D8C:
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_002E3DB4; } }
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.budget -= 1;
L_002E3DB4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E3E14; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3DD0u); st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002E3DD0u) [[unlikely]] return; }
L_002E3DD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002E3E18; } }
L_002E3DD8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E3E14; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[16].w[0] + 144u);  goto L_002E3E0C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3E08u); c.r[5].d[0] = c.r[3].d[0] & 255ull;  if (depth < kMaxDepth) unit_004F(c, 13u, depth + 1u); else { c.pc = 0x0023C4E0u; return; } if (c.pc != 0x002E3E08u) [[unlikely]] return; }
L_002E3E08:
    set32(c.r[4], c.r[16].w[0] + 144u);
    c.budget -= 1;
L_002E3E0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3E14u); set32(c.r[5], 0u + 38u);  if (depth < kMaxDepth) unit_0025(c, 323u, depth + 1u); else { c.pc = 0x00197790u; return; } if (c.pc != 0x002E3E14u) [[unlikely]] return; }
L_002E3E14:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002E3E18:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E3E30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    st32((c.r[4].w[0] + 144u), c.f[3]);
    st32((c.r[4].w[0] + 148u), c.f[2]);
    st32((c.r[4].w[0] + 152u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3E64u); st32((c.r[4].w[0] + 156u), c.f[0]);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002E3E64u) [[unlikely]] return; }
L_002E3E64:
    c.r[3].d[0] = c.r[2].d[0] & 7ull;
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[3].w[0] - 22832u);
    c.r[5].d[0] = c.r[5].d[0] & 3ull;
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + 10u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E3EB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 7ull;
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    c.f[0] = ld32((c.r[4].w[0] + 144u));
    c.r[3].d[0] = c.r[5].d[0] & 4ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.f[2] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[2]);
    c.r[3].d[0] = c.r[5].d[0] & 2ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 152u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 40u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 39;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_002E3F7C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3F5Cu); st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002E3F5Cu) [[unlikely]] return; }
L_002E3F5C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002E3F7C; } }
    c.r[5].d[0] = c.r[4].d[0] & 127ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3F7Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0050(c, 47u, depth + 1u); else { c.pc = 0x00240870u; return; } if (c.pc != 0x002E3F7Cu) [[unlikely]] return; }
L_002E3F7C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E3F90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[4] = ld32((c.r[4].w[0] + 32u));
    c.f[3] = ld32((c.r[4].w[0] + 36u));
    c.f[2] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3B030000u);
    c.r[3].d[0] = c.r[2].d[0] | 4719ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[1] = c.r[2].w[0];
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    st32((c.r[4].w[0] + 144u), c.f[4]);
    st32((c.r[4].w[0] + 148u), c.f[3]);
    st32((c.r[4].w[0] + 152u), c.f[2]);
    st32((c.r[4].w[0] + 156u), c.f[0]);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 68u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 68u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3FECu); st32((c.r[4].w[0] + 72u), c.f[0]);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002E3FECu) [[unlikely]] return; }
L_002E3FEC:
    c.r[3].d[0] = c.r[2].d[0] & 7ull;
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[3].w[0] - 22864u);
    c.budget -= 5;
    [[clang::musttail]] return unit_0079(c, 1u, depth);
}

}
