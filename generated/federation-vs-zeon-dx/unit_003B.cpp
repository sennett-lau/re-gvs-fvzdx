#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_003B[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8,
    0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 18, 0, 19, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28,
    0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 31, 0, 32, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0,
    36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 44, 0, 0, 45, 0, 0,
    0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 51, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0,
    58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 78, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0,
    82, 0, 0, 0, 83, 0, 84, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0,
    0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0,
    116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 121, 0, 0, 0, 122, 0, 0, 123, 0, 0,
    0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0,
    0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0,
    0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 161, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0,
    0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0,
    0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 173, 0, 0, 174, 0, 0, 0, 175,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 187, 0, 188, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0,
    0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0,
    209, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216,
    0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0,
    0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 227, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 236, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 240, 0,
    0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0,
    0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 273, 0, 274, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0,
    0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 282, 0, 0, 283, 0, 0, 0, 284, 0, 285, 0, 0, 0, 0, 0,
};

void unit_003B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001EC000;
    case 2u: goto L_001EC03C;
    case 3u: goto L_001EC054;
    case 4u: goto L_001EC218;
    case 5u: goto L_001EC240;
    case 6u: goto L_001EC288;
    case 7u: goto L_001EC360;
    case 8u: goto L_001EC3FC;
    case 9u: goto L_001EC410;
    case 10u: goto L_001EC43C;
    case 11u: goto L_001EC4A4;
    case 12u: goto L_001EC4B4;
    case 13u: goto L_001EC4E4;
    case 14u: goto L_001EC4F4;
    case 15u: goto L_001EC5CC;
    case 16u: goto L_001EC5D8;
    case 17u: goto L_001EC5F0;
    case 18u: goto L_001EC68C;
    case 19u: goto L_001EC694;
    case 20u: goto L_001EC69C;
    case 21u: goto L_001EC6AC;
    case 22u: goto L_001EC6C8;
    case 23u: goto L_001EC7F4;
    case 24u: goto L_001EC834;
    case 25u: goto L_001EC860;
    case 26u: goto L_001EC8A4;
    case 27u: goto L_001EC8B4;
    case 28u: goto L_001EC8FC;
    case 29u: goto L_001EC908;
    case 30u: goto L_001EC920;
    case 31u: goto L_001EC928;
    case 32u: goto L_001EC930;
    case 33u: goto L_001EC93C;
    case 34u: goto L_001EC94C;
    case 35u: goto L_001EC95C;
    case 36u: goto L_001EC980;
    case 37u: goto L_001EC9C8;
    case 38u: goto L_001EC9D8;
    case 39u: goto L_001ECA14;
    case 40u: goto L_001ECA24;
    case 41u: goto L_001ECA3C;
    case 42u: goto L_001ECA4C;
    case 43u: goto L_001ECA58;
    case 44u: goto L_001ECA68;
    case 45u: goto L_001ECA74;
    case 46u: goto L_001ECA90;
    case 47u: goto L_001ECAC0;
    case 48u: goto L_001ECAD0;
    case 49u: goto L_001ECB20;
    case 50u: goto L_001ECB28;
    case 51u: goto L_001ECB30;
    case 52u: goto L_001ECB38;
    case 53u: goto L_001ECBD0;
    case 54u: goto L_001ECC24;
    case 55u: goto L_001ECC2C;
    case 56u: goto L_001ECC34;
    case 57u: goto L_001ECC60;
    case 58u: goto L_001ECC80;
    case 59u: goto L_001ECD1C;
    case 60u: goto L_001ECD2C;
    case 61u: goto L_001ECD38;
    case 62u: goto L_001ECDB0;
    case 63u: goto L_001ECDC8;
    case 64u: goto L_001ECDD4;
    case 65u: goto L_001ECDE4;
    case 66u: goto L_001ECDF0;
    case 67u: goto L_001ECE1C;
    case 68u: goto L_001ECE28;
    case 69u: goto L_001ECE90;
    case 70u: goto L_001ECEBC;
    case 71u: goto L_001ECF0C;
    case 72u: goto L_001ECF20;
    case 73u: goto L_001ECF2C;
    case 74u: goto L_001ECF40;
    case 75u: goto L_001ECF80;
    case 76u: goto L_001ECFB4;
    case 77u: goto L_001ECFBC;
    case 78u: goto L_001ED00C;
    case 79u: goto L_001ED014;
    case 80u: goto L_001ED060;
    case 81u: goto L_001ED078;
    case 82u: goto L_001ED080;
    case 83u: goto L_001ED090;
    case 84u: goto L_001ED098;
    case 85u: goto L_001ED0A0;
    case 86u: goto L_001ED0B0;
    case 87u: goto L_001ED114;
    case 88u: goto L_001ED164;
    case 89u: goto L_001ED1D4;
    case 90u: goto L_001ED1F0;
    case 91u: goto L_001ED20C;
    case 92u: goto L_001ED228;
    case 93u: goto L_001ED290;
    case 94u: goto L_001ED2A4;
    case 95u: goto L_001ED2BC;
    case 96u: goto L_001ED2C8;
    case 97u: goto L_001ED2E4;
    case 98u: goto L_001ED334;
    case 99u: goto L_001ED350;
    case 100u: goto L_001ED3CC;
    case 101u: goto L_001ED410;
    case 102u: goto L_001ED420;
    case 103u: goto L_001ED5D0;
    case 104u: goto L_001ED5DC;
    case 105u: goto L_001ED5F0;
    case 106u: goto L_001ED640;
    case 107u: goto L_001ED64C;
    case 108u: goto L_001ED65C;
    case 109u: goto L_001ED6F0;
    case 110u: goto L_001ED720;
    case 111u: goto L_001ED74C;
    case 112u: goto L_001ED82C;
    case 113u: goto L_001ED840;
    case 114u: goto L_001ED854;
    case 115u: goto L_001ED864;
    case 116u: goto L_001ED880;
    case 117u: goto L_001ED8AC;
    case 118u: goto L_001ED8E0;
    case 119u: goto L_001ED940;
    case 120u: goto L_001ED950;
    case 121u: goto L_001ED958;
    case 122u: goto L_001ED968;
    case 123u: goto L_001ED974;
    case 124u: goto L_001ED984;
    case 125u: goto L_001ED9B4;
    case 126u: goto L_001ED9E0;
    case 127u: goto L_001EDAD0;
    case 128u: goto L_001EDAE4;
    case 129u: goto L_001EDAF8;
    case 130u: goto L_001EDB08;
    case 131u: goto L_001EDB24;
    case 132u: goto L_001EDB60;
    case 133u: goto L_001EDBB0;
    case 134u: goto L_001EDBBC;
    case 135u: goto L_001EDBD8;
    case 136u: goto L_001EDBF0;
    case 137u: goto L_001EDC08;
    case 138u: goto L_001EDC18;
    case 139u: goto L_001EDC48;
    case 140u: goto L_001EDC74;
    case 141u: goto L_001EDCDC;
    case 142u: goto L_001EDD84;
    case 143u: goto L_001EDDFC;
    case 144u: goto L_001EDEA8;
    case 145u: goto L_001EDF1C;
    case 146u: goto L_001EDF30;
    case 147u: goto L_001EDF44;
    case 148u: goto L_001EDF54;
    case 149u: goto L_001EDF70;
    case 150u: goto L_001EDF9C;
    case 151u: goto L_001EDFD0;
    case 152u: goto L_001EE040;
    case 153u: goto L_001EE054;
    case 154u: goto L_001EE060;
    case 155u: goto L_001EE094;
    case 156u: goto L_001EE0B8;
    case 157u: goto L_001EE10C;
    case 158u: goto L_001EE134;
    case 159u: goto L_001EE158;
    case 160u: goto L_001EE16C;
    case 161u: goto L_001EE178;
    case 162u: goto L_001EE1D8;
    case 163u: goto L_001EE200;
    case 164u: goto L_001EE228;
    case 165u: goto L_001EE264;
    case 166u: goto L_001EE284;
    case 167u: goto L_001EE2F8;
    case 168u: goto L_001EE31C;
    case 169u: goto L_001EE370;
    case 170u: goto L_001EE398;
    case 171u: goto L_001EE3B8;
    case 172u: goto L_001EE458;
    case 173u: goto L_001EE460;
    case 174u: goto L_001EE46C;
    case 175u: goto L_001EE47C;
    case 176u: goto L_001EE4A8;
    case 177u: goto L_001EE4D4;
    case 178u: goto L_001EE580;
    case 179u: goto L_001EE594;
    case 180u: goto L_001EE5A8;
    case 181u: goto L_001EE5B8;
    case 182u: goto L_001EE5D4;
    case 183u: goto L_001EE610;
    case 184u: goto L_001EE66C;
    case 185u: goto L_001EE678;
    case 186u: goto L_001EE6AC;
    case 187u: goto L_001EE6B8;
    case 188u: goto L_001EE6C0;
    case 189u: goto L_001EE6CC;
    case 190u: goto L_001EE6DC;
    case 191u: goto L_001EE70C;
    case 192u: goto L_001EE738;
    case 193u: goto L_001EE818;
    case 194u: goto L_001EE82C;
    case 195u: goto L_001EE840;
    case 196u: goto L_001EE850;
    case 197u: goto L_001EE8A0;
    case 198u: goto L_001EE908;
    case 199u: goto L_001EE91C;
    case 200u: goto L_001EE92C;
    case 201u: goto L_001EE940;
    case 202u: goto L_001EE954;
    case 203u: goto L_001EE968;
    case 204u: goto L_001EE974;
    case 205u: goto L_001EE994;
    case 206u: goto L_001EE9A0;
    case 207u: goto L_001EE9D4;
    case 208u: goto L_001EE9F8;
    case 209u: goto L_001EEA00;
    case 210u: goto L_001EEA0C;
    case 211u: goto L_001EEA1C;
    case 212u: goto L_001EEA48;
    case 213u: goto L_001EEA74;
    case 214u: goto L_001EEB54;
    case 215u: goto L_001EEB68;
    case 216u: goto L_001EEB7C;
    case 217u: goto L_001EEB8C;
    case 218u: goto L_001EEBD4;
    case 219u: goto L_001EEBDC;
    case 220u: goto L_001EEC20;
    case 221u: goto L_001EEC78;
    case 222u: goto L_001EEC8C;
    case 223u: goto L_001EECA4;
    case 224u: goto L_001EECB0;
    case 225u: goto L_001EECCC;
    case 226u: goto L_001EED3C;
    case 227u: goto L_001EED44;
    case 228u: goto L_001EED50;
    case 229u: goto L_001EED60;
    case 230u: goto L_001EED8C;
    case 231u: goto L_001EEDB8;
    case 232u: goto L_001EEE98;
    case 233u: goto L_001EEEAC;
    case 234u: goto L_001EEEC0;
    case 235u: goto L_001EEF00;
    case 236u: goto L_001EEF94;
    case 237u: goto L_001EEFA0;
    case 238u: goto L_001EEFB0;
    case 239u: goto L_001EF070;
    case 240u: goto L_001EF078;
    case 241u: goto L_001EF084;
    case 242u: goto L_001EF094;
    case 243u: goto L_001EF154;
    case 244u: goto L_001EF1F0;
    case 245u: goto L_001EF214;
    case 246u: goto L_001EF3B0;
    case 247u: goto L_001EF3BC;
    case 248u: goto L_001EF3D0;
    case 249u: goto L_001EF518;
    case 250u: goto L_001EF5E0;
    case 251u: goto L_001EF614;
    case 252u: goto L_001EF64C;
    case 253u: goto L_001EF660;
    case 254u: goto L_001EF6A0;
    case 255u: goto L_001EF734;
    case 256u: goto L_001EF740;
    case 257u: goto L_001EF7BC;
    case 258u: goto L_001EF7D0;
    case 259u: goto L_001EF8C0;
    case 260u: goto L_001EF99C;
    case 261u: goto L_001EF9C0;
    case 262u: goto L_001EF9E0;
    case 263u: goto L_001EF9F4;
    case 264u: goto L_001EFA2C;
    case 265u: goto L_001EFA40;
    case 266u: goto L_001EFB70;
    case 267u: goto L_001EFD10;
    case 268u: goto L_001EFD70;
    case 269u: goto L_001EFDBC;
    case 270u: goto L_001EFDCC;
    case 271u: goto L_001EFE3C;
    case 272u: goto L_001EFE5C;
    case 273u: goto L_001EFE88;
    case 274u: goto L_001EFE90;
    case 275u: goto L_001EFE9C;
    case 276u: goto L_001EFEAC;
    case 277u: goto L_001EFF3C;
    case 278u: goto L_001EFF54;
    case 279u: goto L_001EFF70;
    case 280u: goto L_001EFF8C;
    case 281u: goto L_001EFFBC;
    case 282u: goto L_001EFFC4;
    case 283u: goto L_001EFFD0;
    case 284u: goto L_001EFFE0;
    case 285u: goto L_001EFFE8;
    default: bad_entry(c, 0x001EC000u); return;
    }
L_001EC000:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 64u), c.f[1]);
    c.f[1] = ld32((c.r[18].w[0] + 164u));
    st32((c.r[18].w[0] + 68u), c.f[1]);
    c.f[1] = ld32((c.r[18].w[0] + 168u));
    st32((c.r[18].w[0] + 72u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.f[20] = ld32((c.r[16].w[0] + 8u));
    fpu_div(c, 12u, c.f[20], c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC03Cu);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001EC03Cu) [[unlikely]] return; }
L_001EC03C:
    st8((c.r[18].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC054u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 238u, depth + 1u); else { c.pc = 0x001F35A0u; return; } if (c.pc != 0x001EC054u) [[unlikely]] return; }
L_001EC054:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 531u));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 640u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001EC118; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 648u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EC118; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    set32(c.r[2], 0u + 4u);
    st32((c.r[18].w[0] + 348u), c.f[0]);
    st32((c.r[18].w[0] + 344u), c.f[20]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 256u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);  if (t) { goto L_001EC0C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F590000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 292u), c.f[0]);  if (t) { goto L_001EC0DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.budget -= 1;
L_001EC0C8:
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    st32((c.r[18].w[0] + 292u), c.f[0]);
    c.budget -= 5;
L_001EC0DC:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 260u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u - 30720u);  if (t) { goto L_001EC100; } }
    set32(c.r[2], 0u + 30720u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001EC104; } }
    set32(c.r[2], 0u - 30720u);
    c.budget -= 1;
L_001EC100:
    st16((c.r[18].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001EC104:
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 320u), c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 324u), c.r[2].w[0]);  if (t) { goto L_001EC1C0; } }
L_001EC118:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_001EC188; }
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[2].d[0] | 52429ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    st32((c.r[18].w[0] + 348u), c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    st32((c.r[18].w[0] + 344u), c.f[1]);
    st32((c.r[18].w[0] + 292u), c.f[0]);
    st16((c.r[18].w[0] + 12u), static_cast<std::uint16_t>(0u));
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[18].w[0] + 320u), c.f[0]);
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 324u), c.r[3].w[0]);  if (t) { goto L_001EC1C0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_001EC188:
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    set32(c.r[2], 0u - 32768u);
    st32((c.r[18].w[0] + 348u), c.f[0]);
    st32((c.r[18].w[0] + 344u), 0u);
    st32((c.r[18].w[0] + 292u), c.f[0]);
    st16((c.r[18].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[18].w[0] + 320u), c.f[0]);
    st32((c.r[18].w[0] + 324u), 0u);
    c.budget -= 14;
L_001EC1C0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 260u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[2].d[0] = c.r[2].d[0] & 8191ull;
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[3].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] - 4608u);  if (t) { goto L_001EC1F8; } }
    set32(c.r[2], c.r[3].w[0] - 3584u);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);  if (t) { goto L_001EC200; } }
    set32(c.r[2], c.r[3].w[0] - 4608u);
    c.budget -= 1;
L_001EC1F8:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 2;
L_001EC200:
    set32(c.r[6], c.r[18].w[0] + 48u);
    set32(c.r[7], c.r[18].w[0] + 16u);
    st16((c.r[18].w[0] + 312u), static_cast<std::uint16_t>(c.r[2].w[0]));
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC218u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_003B(c, 36u, depth + 1u); else { c.pc = 0x001EC980u; return; } if (c.pc != 0x001EC218u) [[unlikely]] return; }
L_001EC218:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001EC240:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[2].w[0] + 25696u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[9], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[8], c.r[16].w[0] + 8320u);
    set32(c.r[7], c.r[17].w[0] + 144u);
    set32(c.r[6], 0u + 8u);
    c.budget -= 18;
L_001EC288:
    set32(c.r[3], ld32((c.r[8].w[0])));
    set32(c.r[2], ld32((c.r[8].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] - 1u);
    st32((c.r[7].w[0]), c.r[3].w[0]);
    st32((c.r[7].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[8], c.r[8].w[0] + 8u);
    c.budget -= 8;
    { const bool t = c.r[6].sd[0] > 0; set32(c.r[7], c.r[7].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EC288u | kUnwind; return; } goto L_001EC288; } }
    c.f[0] = ld32((c.r[17].w[0] + 160u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    st32((c.r[17].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 164u));
    st32((c.r[17].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 168u));
    st32((c.r[17].w[0] + 72u), c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 324u));
    c.f[0] = ld32((c.r[17].w[0] + 320u));
    c.f[2] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[17].w[0] + 320u), c.f[2]);
    c.f[0] = ld32((c.r[9].w[0]));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 21;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EC300; } }
    st32((c.r[17].w[0] + 320u), c.f[0]);
    c.budget -= 1;
L_001EC300:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EC3A8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EC368; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EC32C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[17].w[0] + 48u);  if (t) { goto L_001EC3EC; } }
L_001EC32C:
    c.f[0] = ld32((c.r[17].w[0] + 344u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F6B0000u);
    c.r[2].d[0] = c.r[2].d[0] | 34079ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 344u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 12u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC360u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001EC360u) [[unlikely]] return; }
L_001EC360:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001EC3E8; } }
L_001EC368:
    c.f[2] = ld32((c.r[17].w[0] + 344u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = fp::add(c.f[2], c.f[0]);
    st32((c.r[17].w[0] + 344u), c.f[2]);
    c.f[0] = ld32((c.r[9].w[0] + 8u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EC3E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 344u), c.f[0]);  if (t) { goto L_001EC3E8; } }
L_001EC3A8:
    c.f[1] = ld32((c.r[17].w[0] + 344u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 344u), c.f[0]);
    c.f[1] = ld32((c.r[9].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EC3DC; } }
    st32((c.r[17].w[0] + 344u), c.f[1]);
    c.budget -= 1;
L_001EC3DC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st16((c.r[17].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001EC3E8:
    set32(c.r[6], c.r[17].w[0] + 48u);
    c.budget -= 1;
L_001EC3EC:
    set32(c.r[7], c.r[17].w[0] + 16u);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC3FCu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_003B(c, 36u, depth + 1u); else { c.pc = 0x001EC980u; return; } if (c.pc != 0x001EC3FCu) [[unlikely]] return; }
L_001EC3FC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001EC410:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[18].w[0] + 16u);
    set32(c.r[5], c.r[18].w[0] + 48u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC43Cu); mmi::paddub(c.r[16], c.r[6], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001EC43Cu) [[unlikely]] return; }
L_001EC43C:
    st32((c.r[18].w[0] + 332u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[18].w[0] + 336u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 758u)));
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[2] = ld32((c.r[2].w[0] + 8u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 336u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 160u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 164u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 168u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.f[12] = ld32((c.r[18].w[0] + 336u));
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC4A4u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001EC4A4u) [[unlikely]] return; }
L_001EC4A4:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC4B4u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001EC4B4u) [[unlikely]] return; }
L_001EC4B4:
    c.f[0] = ld32((c.r[18].w[0] + 16u));
    set32(c.r[5], c.r[18].w[0] + 256u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[18].w[0] + 144u);
    st32((c.r[18].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    st32((c.r[18].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 24u));
    st32((c.r[18].w[0] + 200u), c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC4E4u); st32((c.r[18].w[0] + 204u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005B(c, 138u, depth + 1u); else { c.pc = 0x0026E440u; return; } if (c.pc != 0x001EC4E4u) [[unlikely]] return; }
L_001EC4E4:
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[4], c.r[18].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC4F4u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 138u, depth + 1u); else { c.pc = 0x0026E440u; return; } if (c.pc != 0x001EC4F4u) [[unlikely]] return; }
L_001EC4F4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EC568; } }
    c.f[1] = ld32((c.r[18].w[0] + 256u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[3] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[18].w[0] + 48u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 260u));
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[18].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 264u));
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    c.budget -= 26;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 56u), c.f[0]);  if (t) { goto L_001EC5C4; } }
L_001EC568:
    c.f[1] = ld32((c.r[18].w[0] + 256u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[3] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[18].w[0] + 48u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 260u));
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[18].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 264u));
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[18].w[0] + 56u), c.f[0]);
    c.budget -= 23;
L_001EC5C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC5CCu); set32(c.r[4], c.r[18].w[0] + 144u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001EC5CCu) [[unlikely]] return; }
L_001EC5CC:
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC5D8u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x001EC5D8u) [[unlikely]] return; }
L_001EC5D8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001EC5F0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    c.budget -= 12;
    { const bool t = c.r[17].d[0] == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_001EC7FC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EC670; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EC658; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 758u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 26960u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[2].w[0] + 32u);  if (t) { goto L_001EC684; } }
L_001EC658:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 758u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 26960u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001EC684; } }
L_001EC670:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 758u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 26960u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[20], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_001EC684:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC68Cu); set32(c.r[4], c.r[19].w[0] + 144u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001EC68Cu) [[unlikely]] return; }
L_001EC68C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC694u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x001EC694u) [[unlikely]] return; }
L_001EC694:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC69Cu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001EC69Cu) [[unlikely]] return; }
L_001EC69C:
    set32(c.r[5], c.r[17].w[0] + 32u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC6ACu); set32(c.r[6], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_005B(c, 138u, depth + 1u); else { c.pc = 0x0026E440u; return; } if (c.pc != 0x001EC6ACu) [[unlikely]] return; }
L_001EC6AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[18].w[0] + 1344u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC6C8u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 162u, depth + 1u); else { c.pc = 0x0026E650u; return; } if (c.pc != 0x001EC6C8u) [[unlikely]] return; }
L_001EC6C8:
    c.f[1] = ld32((c.r[29].w[0] + 164u));
    c.f[0] = ld32((c.r[20].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EC6F0; } }
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    set32(c.r[16], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 196u), c.f[0]);  if (t) { goto L_001EC718; } }
L_001EC6F0:
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EC714; } }
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    set32(c.r[16], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 196u), c.f[0]);  if (t) { goto L_001EC718; } }
L_001EC714:
    st32((c.r[29].w[0] + 196u), 0u);
    c.budget -= 1;
L_001EC718:
    c.f[1] = ld32((c.r[20].w[0] + 12u));
    c.f[2] = ld32((c.r[29].w[0] + 160u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EC740; } }
    c.f[0] = fp::sub(c.f[2], c.f[1]);
    set32(c.r[16], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 192u), c.f[0]);  if (t) { goto L_001EC7A4; } }
L_001EC740:
    c.f[3] = ld32((c.r[20].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[3]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EC764; } }
    c.f[0] = fp::sub(c.f[2], c.f[3]);
    set32(c.r[16], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 192u), c.f[0]);  if (t) { goto L_001EC7A4; } }
L_001EC764:
    c.f[0] = ld32((c.r[29].w[0] + 184u));
    c.f[4] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[4]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EC7A0; } }
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[4]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EC798; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 192u), c.f[1]);  if (t) { goto L_001EC7A4; } }
L_001EC798:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 192u), c.f[3]);  if (t) { goto L_001EC7A4; } }
L_001EC7A0:
    st32((c.r[29].w[0] + 192u), 0u);
    c.budget -= 1;
L_001EC7A4:
    c.f[1] = ld32((c.r[29].w[0] + 184u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 200u), 0u);  if (t) { goto L_001EC7D0; } }
    set32(c.r[2], c.r[29].w[0] + 196u);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[2].w[0]), c.f[0]);
    c.budget -= 4;
L_001EC7D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[13] = c.r[2].w[0];
    set32(c.r[6], c.r[19].w[0] + 272u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC47A0000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC7F4u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 168u, depth + 1u); else { c.pc = 0x0026E790u; return; } if (c.pc != 0x001EC7F4u) [[unlikely]] return; }
L_001EC7F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_001EC838; } }
L_001EC7FC:
    st32((c.r[29].w[0] + 216u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3CA30000u);
    st32((c.r[29].w[0] + 208u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC47A0000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], c.r[19].w[0] + 272u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[13] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC834u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 168u, depth + 1u); else { c.pc = 0x0026E790u; return; } if (c.pc != 0x001EC834u) [[unlikely]] return; }
L_001EC834:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 1;
L_001EC838:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_001EC860:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.f[13] = c.f[12];
    set32(c.r[5], c.r[17].w[0] + 1328u);
    mmi::paddub(c.r[19], c.r[7], c.r[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC8A4u); mmi::paddub(c.r[20], c.r[6], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 35u, depth + 1u); else { c.pc = 0x0013CCE0u; return; } if (c.pc != 0x001EC8A4u) [[unlikely]] return; }
L_001EC8A4:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[17].w[0] + 1328u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC8B4u); set32(c.r[6], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001EC8B4u) [[unlikely]] return; }
L_001EC8B4:
    set32(c.r[17], c.r[29].w[0] + 100u);
    c.f[1] = ld32((c.r[29].w[0] + 96u));
    c.f[0] = ld32((c.r[17].w[0]));
    set32(c.r[18], c.r[29].w[0] + 104u);
    c.f[3] = 0u;
    c.f[2] = ld32((c.r[18].w[0]));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EC908; } }
    c.f[12] = ld32((c.r[16].w[0] + 328u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC8FCu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001EC8FCu) [[unlikely]] return; }
L_001EC8FC:
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC908u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001EC908u) [[unlikely]] return; }
L_001EC908:
    st32((c.r[17].w[0]), 0u);
    st32((c.r[29].w[0] + 96u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[4], c.r[16].w[0] + 144u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC920u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001EC920u) [[unlikely]] return; }
L_001EC920:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC928u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001EC928u) [[unlikely]] return; }
L_001EC928:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC930u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001EC930u) [[unlikely]] return; }
L_001EC930:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC93Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001EC93Cu) [[unlikely]] return; }
L_001EC93C:
    c.f[12] = ld32((c.r[16].w[0] + 320u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC94Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001EC94Cu) [[unlikely]] return; }
L_001EC94C:
    set32(c.r[6], c.r[29].w[0] + 96u);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC95Cu); mmi::paddub(c.r[5], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001EC95Cu) [[unlikely]] return; }
L_001EC95C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001EC980:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[5].w[0] + 2032u));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    mmi::paddub(c.r[16], c.r[7], c.r[0]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 2036u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 2040u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.f[12] = ld32((c.r[18].w[0] + 348u));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC9C8u); set32(c.r[5], c.r[18].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001EC9C8u) [[unlikely]] return; }
L_001EC9C8:
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC9D8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001EC9D8u) [[unlikely]] return; }
L_001EC9D8:
    set32(c.r[2], c.r[29].w[0] + 80u);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[18].w[0] + 64u);
    st32((c.r[16].w[0]), c.f[3]);
    st32((c.r[16].w[0] + 4u), c.f[2]);
    st32((c.r[16].w[0] + 8u), c.f[1]);
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 292u));
    c.f[0] = ld32((c.r[18].w[0] + 344u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECA14u); c.f[12] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001ECA14u) [[unlikely]] return; }
L_001ECA14:
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECA24u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001ECA24u) [[unlikely]] return; }
L_001ECA24:
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[18].w[0] + 144u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECA3Cu); st32((c.r[29].w[0] + 72u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001ECA3Cu) [[unlikely]] return; }
L_001ECA3C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 312u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECA4Cu); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001ECA4Cu) [[unlikely]] return; }
L_001ECA4C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECA58u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001ECA58u) [[unlikely]] return; }
L_001ECA58:
    c.f[12] = ld32((c.r[18].w[0] + 320u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECA68u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001ECA68u) [[unlikely]] return; }
L_001ECA68:
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECA74u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001ECA74u) [[unlikely]] return; }
L_001ECA74:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001ECA90:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[19].w[0] + 48u);
    set32(c.r[6], c.r[19].w[0] + 16u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECAC0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001ECAC0u) [[unlikely]] return; }
L_001ECAC0:
    set32(c.r[4], c.r[19].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECAD0u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 34u, depth + 1u); else { c.pc = 0x0013CCC0u; return; } if (c.pc != 0x001ECAD0u) [[unlikely]] return; }
L_001ECAD0:
    set32(c.r[16], c.r[29].w[0] + 84u);
    c.f[1] = ld32((c.r[29].w[0] + 80u));
    c.f[0] = ld32((c.r[16].w[0]));
    set32(c.r[17], c.r[29].w[0] + 88u);
    c.f[3] = 0u;
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[29].w[0] + 112u);  if (t) { goto L_001ECB14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001ECBB0; } }
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_001ECB14:
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECB20u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 34u, depth + 1u); else { c.pc = 0x0013CCC0u; return; } if (c.pc != 0x001ECB20u) [[unlikely]] return; }
L_001ECB20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECB28u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x001ECB28u) [[unlikely]] return; }
L_001ECB28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECB30u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x001ECB30u) [[unlikely]] return; }
L_001ECB30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECB38u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x001ECB38u) [[unlikely]] return; }
L_001ECB38:
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[18].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[18].w[0] + 8u), c.f[0]);
    st32((c.r[18].w[0] + 12u), 0u);
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    st32((c.r[18].w[0] + 24u), c.f[0]);
    st32((c.r[18].w[0] + 28u), 0u);
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    st32((c.r[18].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    st32((c.r[18].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    st32((c.r[18].w[0] + 40u), c.f[0]);
    st32((c.r[18].w[0] + 44u), 0u);
    c.f[0] = ld32((c.r[19].w[0] + 16u));
    st32((c.r[18].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 20u));
    st32((c.r[18].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 24u));
    st32((c.r[18].w[0] + 56u), c.f[0]);
    st32((c.r[18].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 30;
L_001ECBB0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001ECBD0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[3] = ld32((c.r[5].w[0] + 8u));
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[17], c.r[5], c.r[0]);  if (t) { goto L_001ECC1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001ECC64; } }
L_001ECC1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECC24u); set32(c.r[4], c.r[4].w[0] + 144u);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x001ECC24u) [[unlikely]] return; }
L_001ECC24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECC2Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001ECC2Cu) [[unlikely]] return; }
L_001ECC2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECC34u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000E(c, 327u, depth + 1u); else { c.pc = 0x0013BE20u; return; } if (c.pc != 0x001ECC34u) [[unlikely]] return; }
L_001ECC34:
    set32(c.r[2], c.r[29].w[0] + 72u);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    set32(c.r[4], 0u + 1u);
    st32((c.r[17].w[0]), c.f[3]);
    st32((c.r[17].w[0] + 4u), c.f[2]);
    st32((c.r[17].w[0] + 8u), c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECC60u); st32((c.r[17].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x001ECC60u) [[unlikely]] return; }
L_001ECC60:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001ECC64:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001ECC80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 758u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 330u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.f[0] = ld32((c.r[3].w[0] + 4u));  if (t) { goto L_001ECCCC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.budget -= 5;
L_001ECCCC:
    c.f[2] = ld32((c.r[16].w[0] + 332u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001ECCE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 332u), c.f[1]);  if (t) { goto L_001ECD0C; } }
L_001ECCE8:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001ECD04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 332u), c.f[0]);  if (t) { goto L_001ECD0C; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001ECD04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_001ECD9C; } }
L_001ECD0C:
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECD1Cu); set32(c.r[6], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001ECD1Cu) [[unlikely]] return; }
L_001ECD1C:
    c.f[12] = ld32((c.r[16].w[0] + 332u));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECD2Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001ECD2Cu) [[unlikely]] return; }
L_001ECD2C:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECD38u); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001ECD38u) [[unlikely]] return; }
L_001ECD38:
    c.f[1] = ld32((c.r[16].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[3] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    set32(c.r[2], 0u + 1u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 24u));
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[16].w[0] + 24u), c.f[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 25;
L_001ECD9C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001ECDB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECDC8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001ECDC8u) [[unlikely]] return; }
L_001ECDC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[17], c.r[2].w[0] - 28448u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 3;
L_001ECDD4:
    set32(c.r[6], 0u + 384u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECDE4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001ECDE4u) [[unlikely]] return; }
L_001ECDE4:
    set32(c.r[4], c.r[17].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECDF0u); st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001ECDF0u) [[unlikely]] return; }
L_001ECDF0:
    set32(c.r[3], c.r[16].w[0] + 5u);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 7);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], 0u + 384u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECE1Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001ECE1Cu) [[unlikely]] return; }
L_001ECE1C:
    set32(c.r[4], c.r[18].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECE28u); st8((c.r[17].w[0] + 1920u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001ECE28u) [[unlikely]] return; }
L_001ECE28:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 384u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001ECDD4u | kUnwind; return; } goto L_001ECDD4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u - 1u);
    set32(c.r[4], 0u + 180u);
    st8((c.r[3].w[0] + 107u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 106u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 6u)));
    st8((c.r[5].w[0] + 525u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[3].w[0] + 526u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    st16((c.r[3].w[0] + 528u), static_cast<std::uint16_t>(c.r[4].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001ECE90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[2].w[0] - 28448u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[7], c.r[2].w[0] + 26144u);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 11;
L_001ECEBC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 348u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_001ECEE4; }
    set32(c.r[4], ld32((c.r[7].w[0] + 1524u)));
    set32(c.r[2], ld32((c.r[7].w[0] + 1532u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001ECEE0; } }
    st8((c.r[5].w[0] + 348u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001ECEE0:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_001ECEE4:
    c.r[2].d[0] = c.r[6].sd[0] < 5ll ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] + 8448u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 384u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001ECEBCu | kUnwind; return; } goto L_001ECEBC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_001ECF18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECF0Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_003A(c, 54u, depth + 1u); else { c.pc = 0x001E8A70u; return; } if (c.pc != 0x001ECF0Cu) [[unlikely]] return; }
L_001ECF0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_001ECF24; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_001ECF18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECF20u);  if (depth < kMaxDepth) unit_003B(c, 74u, depth + 1u); else { c.pc = 0x001ECF40u; return; } if (c.pc != 0x001ECF20u) [[unlikely]] return; }
L_001ECF20:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_001ECF24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECF2Cu);  if (depth < kMaxDepth) unit_003C(c, 73u, depth + 1u); else { c.pc = 0x001F12A0u; return; } if (c.pc != 0x001ECF2Cu) [[unlikely]] return; }
L_001ECF2C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001ECF40:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[16], c.r[3].w[0] - 28448u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[17], c.r[3].w[0] + 26144u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[19], c.r[3].w[0] - 28448u);
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 16;
L_001ECF80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001ECFC0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 30304u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECFB4u); mmi::paddub(c.r[6], c.r[21], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001ECFB4u) [[unlikely]] return; }
L_001ECFB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECFBCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_003B(c, 80u, depth + 1u); else { c.pc = 0x001ED060u; return; } if (c.pc != 0x001ECFBCu) [[unlikely]] return; }
L_001ECFBC:
    c.budget -= 1;
L_001ECFC0:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 788u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_001ED01C; }
    set32(c.r[4], c.r[18].w[0] + 5u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1921u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] << 7);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[3].w[0] - 28448u);
    set32(c.r[20], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 30320u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED00Cu); mmi::paddub(c.r[5], c.r[17], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001ED00Cu) [[unlikely]] return; }
L_001ED00C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED014u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_003B(c, 80u, depth + 1u); else { c.pc = 0x001ED060u; return; } if (c.pc != 0x001ED014u) [[unlikely]] return; }
L_001ED014:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_001ED01C:
    c.r[3].d[0] = c.r[18].sd[0] < 5ll ? 1ull : 0ull;
    set32(c.r[19], c.r[19].w[0] + 384u);
    set32(c.r[16], c.r[16].w[0] + 384u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001ECF80u | kUnwind; return; } goto L_001ECF80; } }
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001ED060:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED078u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_000E(c, 316u, depth + 1u); else { c.pc = 0x0013B910u; return; } if (c.pc != 0x001ED078u) [[unlikely]] return; }
L_001ED078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED080u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001ED080u) [[unlikely]] return; }
L_001ED080:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 14u)));
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED090u); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_000E(c, 298u, depth + 1u); else { c.pc = 0x0013B660u; return; } if (c.pc != 0x001ED090u) [[unlikely]] return; }
L_001ED090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED098u); set32(c.r[4], c.r[16].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001ED098u) [[unlikely]] return; }
L_001ED098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED0A0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 316u, depth + 1u); else { c.pc = 0x0013B910u; return; } if (c.pc != 0x001ED0A0u) [[unlikely]] return; }
L_001ED0A0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001ED0B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[17], c.r[5], c.r[0]);  if (t) { goto L_001ED334; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[2].w[0] + 27184u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 739u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_001ED104; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 739u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 740u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_001ED104:
    set32(c.r[6], 0u + 384u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED114u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001ED114u) [[unlikely]] return; }
L_001ED114:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], c.r[6].w[0] + 1u);
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 758u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED164u);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001ED164u) [[unlikely]] return; }
L_001ED164:
    st8((c.r[18].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 758u)));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 332u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 758u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[18].w[0] + 336u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    st32((c.r[18].w[0] + 48u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[18].w[0] + 336u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED1D4u); st32((c.r[18].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_003C(c, 87u, depth + 1u); else { c.pc = 0x001F1990u; return; } if (c.pc != 0x001ED1D4u) [[unlikely]] return; }
L_001ED1D4:
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED1F0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x001ED1F0u) [[unlikely]] return; }
L_001ED1F0:
    c.f[2] = ld32((c.r[18].w[0] + 332u));
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED20Cu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 10u)));  if (depth < kMaxDepth) unit_000E(c, 282u, depth + 1u); else { c.pc = 0x0013B3B0u; return; } if (c.pc != 0x001ED20Cu) [[unlikely]] return; }
L_001ED20C:
    c.f[2] = ld32((c.r[18].w[0] + 332u));
    c.f[1] = ld32((c.r[18].w[0] + 52u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED228u); st32((c.r[29].w[0] + 84u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x001ED228u) [[unlikely]] return; }
L_001ED228:
    c.f[2] = ld32((c.r[18].w[0] + 332u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    set32(c.r[2], c.r[29].w[0] + 80u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    set32(c.r[5], c.r[18].w[0] + 16u);
    set32(c.r[6], c.r[18].w[0] + 48u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[18].w[0] + 32u), c.f[3]);
    st32((c.r[18].w[0] + 36u), c.f[2]);
    st32((c.r[18].w[0] + 40u), c.f[1]);
    st32((c.r[18].w[0] + 44u), c.f[0]);
    c.f[3] = ld32((c.r[18].w[0] + 32u));
    c.f[2] = ld32((c.r[18].w[0] + 36u));
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = ld32((c.r[18].w[0] + 44u));
    st32((c.r[18].w[0] + 16u), c.f[3]);
    st32((c.r[18].w[0] + 20u), c.f[2]);
    st32((c.r[18].w[0] + 24u), c.f[1]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED290u); st32((c.r[18].w[0] + 28u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001ED290u) [[unlikely]] return; }
L_001ED290:
    set32(c.r[2], ld32((c.r[17].w[0] + 1296u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] + 32767u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED2A4u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_003C(c, 215u, depth + 1u); else { c.pc = 0x001F2E60u; return; } if (c.pc != 0x001ED2A4u) [[unlikely]] return; }
L_001ED2A4:
    set32(c.r[16], c.r[29].w[0] + 72u);
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    c.f[0] = ld32((c.r[16].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED2BCu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x001ED2BCu) [[unlikely]] return; }
L_001ED2BC:
    c.f[12] = ld32((c.r[29].w[0] + 68u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED2C8u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x001ED2C8u) [[unlikely]] return; }
L_001ED2C8:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], 0u - c.r[2].w[0]);
    st16((c.r[18].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[12] = ld32((c.r[29].w[0] + 64u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED2E4u); c.f[13] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x001ED2E4u) [[unlikely]] return; }
L_001ED2E4:
    st16((c.r[18].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[18].w[0] + 14u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 12u)));
    set32(c.r[2], c.r[29].w[0] + 64u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 32767u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 1296u), c.r[3].w[0]);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[18].w[0] + 304u), c.f[3]);
    st32((c.r[18].w[0] + 308u), c.f[2]);
    st32((c.r[18].w[0] + 312u), c.f[1]);
    st32((c.r[18].w[0] + 316u), c.f[0]);
    st8((c.r[17].w[0] + 787u), static_cast<std::uint8_t>(0u));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED334u); st8((c.r[17].w[0] + 786u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_003C(c, 238u, depth + 1u); else { c.pc = 0x001F35A0u; return; } if (c.pc != 0x001ED334u) [[unlikely]] return; }
L_001ED334:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001ED350:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (t) { goto L_001ED3F0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 739u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_001ED3F0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 640u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001ED3F4; } }
    c.f[3] = ld32((c.r[17].w[0] + 16u));
    c.f[2] = ld32((c.r[17].w[0] + 20u));
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 30240u);
    st32((c.r[17].w[0] + 32u), c.f[3]);
    st32((c.r[17].w[0] + 36u), c.f[2]);
    st32((c.r[17].w[0] + 40u), c.f[1]);
    st32((c.r[17].w[0] + 44u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 739u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 16;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED3CCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001ED3CCu) [[unlikely]] return; }
L_001ED3CC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001ED3F4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001ED3F4; } }
L_001ED3F0:
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001ED3F4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001ED410:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001ED420:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 740u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (t) { goto L_001ED4E8; } }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001ED5AC; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001ED48C; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001ED470; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ED524; } }
L_001ED470:
    set32(c.r[2], ld32((c.r[16].w[0] + 1524u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001ED5AC; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 740u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001ED5AC; } }
L_001ED48C:
    set32(c.r[2], ld32((c.r[16].w[0] + 1524u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001ED4DC; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_001ED4D0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1312u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 1296u)));
    c.r[1].d[0] = 0ull | 32769ull;
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] - 16384u);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001ED5AC; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_001ED4D0:
    st8((c.r[16].w[0] + 740u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001ED5AC; } }
L_001ED4DC:
    st8((c.r[16].w[0] + 740u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001ED5AC; } }
L_001ED4E8:
    set32(c.r[2], ld32((c.r[16].w[0] + 1524u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 7u);  if (t) { goto L_001ED518; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001ED5AC; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 740u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001ED5AC; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 1;
L_001ED518:
    st8((c.r[16].w[0] + 740u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001ED5AC; } }
L_001ED524:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_001ED534; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 740u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001ED534:
    set32(c.r[2], ld32((c.r[16].w[0] + 1524u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 7u);  if (t) { goto L_001ED5A4; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[4].d[0] & 128ull;  if (t) { goto L_001ED588; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1312u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 1296u)));
    c.r[1].d[0] = 0ull | 32769ull;
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] - 16384u);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001ED584; } }
    set32(c.r[2], 0u + 6u);
    st8((c.r[16].w[0] + 740u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001ED5AC; } }
L_001ED584:
    c.r[2].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 1;
L_001ED588:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ED5AC; } }
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 740u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001ED5AC; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 1;
L_001ED5A4:
    st8((c.r[16].w[0] + 740u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_001ED5AC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 740u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 30240u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED5D0u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001ED5D0u) [[unlikely]] return; }
L_001ED5D0:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED5DCu); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 225u, depth + 1u); else { c.pc = 0x001F3080u; return; } if (c.pc != 0x001ED5DCu) [[unlikely]] return; }
L_001ED5DC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001ED5F0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 27184u);
    mmi::paddub(c.r[22], c.r[4], c.r[0]);
    mmi::paddub(c.r[21], c.r[5], c.r[0]);
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED640u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 83u, depth + 1u); else { c.pc = 0x001F1850u; return; } if (c.pc != 0x001ED640u) [[unlikely]] return; }
L_001ED640:
    mmi::paddub(c.r[4], c.r[22], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED64Cu); mmi::paddub(c.r[5], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 87u, depth + 1u); else { c.pc = 0x001F1990u; return; } if (c.pc != 0x001ED64Cu) [[unlikely]] return; }
L_001ED64C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[22].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED65Cu); set32(c.r[6], c.r[22].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001ED65Cu) [[unlikely]] return; }
L_001ED65C:
    set32(c.r[2], c.r[29].w[0] + 164u);
    c.f[0] = 0u;
    st32((c.r[2].w[0]), 0u);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[29].w[0] + 160u));
    c.f[3] = ld32((c.r[29].w[0] + 168u));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], c.r[29].w[0] + 160u);  if (t) { goto L_001ED6C0; } }
    c.f[3] = ld32((c.r[22].w[0] + 304u));
    c.f[2] = ld32((c.r[22].w[0] + 308u));
    c.f[1] = ld32((c.r[22].w[0] + 312u));
    c.f[0] = ld32((c.r[22].w[0] + 316u));
    set32(c.r[2], c.r[29].w[0] + 160u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), c.f[0]);  if (t) { goto L_001ED6E0; } }
    set32(c.r[2], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_001ED6C0:
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[22].w[0] + 304u), c.f[3]);
    st32((c.r[22].w[0] + 308u), c.f[2]);
    st32((c.r[22].w[0] + 312u), c.f[1]);
    st32((c.r[22].w[0] + 316u), c.f[0]);
    c.budget -= 8;
L_001ED6E0:
    c.f[12] = ld32((c.r[22].w[0] + 332u));
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED6F0u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001ED6F0u) [[unlikely]] return; }
L_001ED6F0:
    c.f[1] = ld32((c.r[22].w[0] + 48u));
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    set32(c.r[20], c.r[29].w[0] + 152u);
    set32(c.r[18], c.r[29].w[0] + 136u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[1] = ld32((c.r[22].w[0] + 56u));
    c.f[0] = ld32((c.r[20].w[0]));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[18].w[0]), c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED720u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 10u)));  if (depth < kMaxDepth) unit_000E(c, 282u, depth + 1u); else { c.pc = 0x0013B3B0u; return; } if (c.pc != 0x001ED720u) [[unlikely]] return; }
L_001ED720:
    c.f[2] = ld32((c.r[22].w[0] + 332u));
    c.f[1] = ld32((c.r[22].w[0] + 52u));
    set32(c.r[19], c.r[29].w[0] + 132u);
    set32(c.r[6], c.r[29].w[0] + 128u);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    set32(c.r[7], c.r[22].w[0] + 48u);
    mmi::paddub(c.r[4], c.r[22], c.r[0]);
    mmi::paddub(c.r[5], c.r[21], c.r[0]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED74Cu); st32((c.r[19].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_003C(c, 146u, depth + 1u); else { c.pc = 0x001F22E0u; return; } if (c.pc != 0x001ED74Cu) [[unlikely]] return; }
L_001ED74C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; mmi::paddub(c.r[17], c.r[2], c.r[0]);  if (t) { goto L_001ED7C0; } }
    c.f[1] = ld32((c.r[22].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[3] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[22].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[22].w[0] + 40u));
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[22].w[0] + 24u), c.f[0]);
    c.f[1] = ld32((c.r[22].w[0] + 36u));
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    c.budget -= 26;
    { const bool t = 0ull == 0ull; st32((c.r[22].w[0] + 20u), c.f[0]);  if (t) { goto L_001ED81C; } }
L_001ED7C0:
    c.f[1] = ld32((c.r[22].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[3] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[22].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[22].w[0] + 40u));
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[22].w[0] + 24u), c.f[0]);
    c.f[1] = ld32((c.r[22].w[0] + 36u));
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[22].w[0] + 20u), c.f[0]);
    c.budget -= 23;
L_001ED81C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[22].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED82Cu); set32(c.r[6], c.r[22].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001ED82Cu) [[unlikely]] return; }
L_001ED82C:
    set32(c.r[2], ld32((c.r[21].w[0] + 1296u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED840u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_003C(c, 215u, depth + 1u); else { c.pc = 0x001F2E60u; return; } if (c.pc != 0x001ED840u) [[unlikely]] return; }
L_001ED840:
    c.f[1] = ld32((c.r[29].w[0] + 144u));
    c.f[0] = ld32((c.r[20].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED854u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x001ED854u) [[unlikely]] return; }
L_001ED854:
    st32((c.r[22].w[0] + 332u), c.f[0]);
    c.f[13] = ld32((c.r[22].w[0] + 332u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED864u); c.f[12] = ld32((c.r[29].w[0] + 148u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x001ED864u) [[unlikely]] return; }
L_001ED864:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], 0u - c.r[2].w[0]);
    st16((c.r[22].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[12] = ld32((c.r[29].w[0] + 144u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED880u); c.f[13] = ld32((c.r[20].w[0]));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x001ED880u) [[unlikely]] return; }
L_001ED880:
    st16((c.r[22].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[22].w[0] + 14u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + 32767u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] != 0ull; st32((c.r[21].w[0] + 1296u), c.r[3].w[0]);  if (t) { goto L_001ED8AC; } }
    mmi::paddub(c.r[4], c.r[22], c.r[0]);
    mmi::paddub(c.r[5], c.r[21], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED8ACu); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 220u, depth + 1u); else { c.pc = 0x001F2F00u; return; } if (c.pc != 0x001ED8ACu) [[unlikely]] return; }
L_001ED8AC:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_001ED8E0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8386u)));
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 27184u);
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_001ED958; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[4], c.r[20].w[0] + 304u);
    set32(c.r[5], c.r[20].w[0] + 16u);
    set32(c.r[6], c.r[19].w[0] + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED940u); st8((c.r[20].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001ED940u) [[unlikely]] return; }
L_001ED940:
    st32((c.r[20].w[0] + 308u), 0u);
    set32(c.r[5], ld32((c.r[19].w[0] + 1296u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED950u); set32(c.r[4], c.r[20].w[0] + 304u);  if (depth < kMaxDepth) unit_003C(c, 215u, depth + 1u); else { c.pc = 0x001F2E60u; return; } if (c.pc != 0x001ED950u) [[unlikely]] return; }
L_001ED950:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED958u); set32(c.r[4], c.r[20].w[0] + 304u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x001ED958u) [[unlikely]] return; }
L_001ED958:
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED968u); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 83u, depth + 1u); else { c.pc = 0x001F1850u; return; } if (c.pc != 0x001ED968u) [[unlikely]] return; }
L_001ED968:
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED974u); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 87u, depth + 1u); else { c.pc = 0x001F1990u; return; } if (c.pc != 0x001ED974u) [[unlikely]] return; }
L_001ED974:
    c.f[12] = ld32((c.r[20].w[0] + 332u));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED984u); set32(c.r[5], c.r[20].w[0] + 304u);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001ED984u) [[unlikely]] return; }
L_001ED984:
    c.f[1] = ld32((c.r[20].w[0] + 48u));
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[18], c.r[29].w[0] + 120u);
    set32(c.r[16], c.r[29].w[0] + 104u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 56u));
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED9B4u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 10u)));  if (depth < kMaxDepth) unit_000E(c, 282u, depth + 1u); else { c.pc = 0x0013B3B0u; return; } if (c.pc != 0x001ED9B4u) [[unlikely]] return; }
L_001ED9B4:
    c.f[2] = ld32((c.r[20].w[0] + 332u));
    c.f[1] = ld32((c.r[20].w[0] + 52u));
    set32(c.r[17], c.r[29].w[0] + 100u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    set32(c.r[7], c.r[20].w[0] + 48u);
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED9E0u); st32((c.r[17].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_003C(c, 146u, depth + 1u); else { c.pc = 0x001F22E0u; return; } if (c.pc != 0x001ED9E0u) [[unlikely]] return; }
L_001ED9E0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001EDA54; } }
    c.f[1] = ld32((c.r[20].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[3] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[20].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[20].w[0] + 24u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    c.budget -= 26;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 20u), c.f[0]);  if (t) { goto L_001EDAC0; } }
L_001EDA54:
    c.f[1] = ld32((c.r[20].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[4] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[5] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[4], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[5]);
    st32((c.r[20].w[0] + 16u), c.f[0]);
    c.f[2] = ld32((c.r[20].w[0] + 40u));
    c.f[3] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::mul(c.f[4], c.f[2]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_div(c, 1u, c.f[1], c.f[5]);
    st32((c.r[20].w[0] + 24u), c.f[1]);
    c.f[2] = ld32((c.r[20].w[0] + 36u));
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 20u), c.f[0]);
    c.budget -= 27;
L_001EDAC0:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[20].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDAD0u); set32(c.r[6], c.r[20].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001EDAD0u) [[unlikely]] return; }
L_001EDAD0:
    set32(c.r[2], ld32((c.r[19].w[0] + 1296u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDAE4u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_003C(c, 215u, depth + 1u); else { c.pc = 0x001F2E60u; return; } if (c.pc != 0x001EDAE4u) [[unlikely]] return; }
L_001EDAE4:
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    c.f[0] = ld32((c.r[18].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDAF8u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x001EDAF8u) [[unlikely]] return; }
L_001EDAF8:
    st32((c.r[20].w[0] + 332u), c.f[0]);
    c.f[13] = ld32((c.r[20].w[0] + 332u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDB08u); c.f[12] = ld32((c.r[29].w[0] + 116u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x001EDB08u) [[unlikely]] return; }
L_001EDB08:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], 0u - c.r[2].w[0]);
    st16((c.r[20].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[12] = ld32((c.r[29].w[0] + 112u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDB24u); c.f[13] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x001EDB24u) [[unlikely]] return; }
L_001EDB24:
    st16((c.r[20].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[20].w[0] + 14u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + 32767u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 1296u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001EDB60:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 27184u);
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    mmi::paddub(c.r[20], c.r[5], c.r[0]);
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDBB0u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 83u, depth + 1u); else { c.pc = 0x001F1850u; return; } if (c.pc != 0x001EDBB0u) [[unlikely]] return; }
L_001EDBB0:
    mmi::paddub(c.r[4], c.r[21], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDBBCu); mmi::paddub(c.r[5], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 87u, depth + 1u); else { c.pc = 0x001F1990u; return; } if (c.pc != 0x001EDBBCu) [[unlikely]] return; }
L_001EDBBC:
    set32(c.r[2], ld32((c.r[20].w[0] + 1524u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[21].w[0] + 304u);  if (t) { goto L_001EDBE4; } }
    set32(c.r[4], c.r[21].w[0] + 304u);
    set32(c.r[5], c.r[21].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDBD8u); set32(c.r[6], c.r[21].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001EDBD8u) [[unlikely]] return; }
L_001EDBD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 308u), 0u);  if (t) { goto L_001EDBF4; } }
    set32(c.r[4], c.r[21].w[0] + 304u);
    c.budget -= 1;
L_001EDBE4:
    set32(c.r[5], c.r[20].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDBF0u); set32(c.r[6], c.r[20].w[0] + 1344u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001EDBF0u) [[unlikely]] return; }
L_001EDBF0:
    st32((c.r[21].w[0] + 308u), 0u);
    c.budget -= 1;
L_001EDBF4:
    set32(c.r[2], ld32((c.r[20].w[0] + 1296u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[21].w[0] + 304u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDC08u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_003C(c, 215u, depth + 1u); else { c.pc = 0x001F2E60u; return; } if (c.pc != 0x001EDC08u) [[unlikely]] return; }
L_001EDC08:
    c.f[12] = ld32((c.r[21].w[0] + 332u));
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDC18u); set32(c.r[5], c.r[21].w[0] + 304u);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x001EDC18u) [[unlikely]] return; }
L_001EDC18:
    c.f[1] = ld32((c.r[21].w[0] + 48u));
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    set32(c.r[22], c.r[29].w[0] + 152u);
    set32(c.r[18], c.r[29].w[0] + 136u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[1] = ld32((c.r[21].w[0] + 56u));
    c.f[0] = ld32((c.r[22].w[0]));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[18].w[0]), c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDC48u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 10u)));  if (depth < kMaxDepth) unit_000E(c, 282u, depth + 1u); else { c.pc = 0x0013B3B0u; return; } if (c.pc != 0x001EDC48u) [[unlikely]] return; }
L_001EDC48:
    c.f[2] = ld32((c.r[21].w[0] + 332u));
    c.f[1] = ld32((c.r[21].w[0] + 52u));
    set32(c.r[19], c.r[29].w[0] + 132u);
    set32(c.r[6], c.r[29].w[0] + 128u);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    set32(c.r[7], c.r[21].w[0] + 48u);
    mmi::paddub(c.r[4], c.r[21], c.r[0]);
    mmi::paddub(c.r[5], c.r[20], c.r[0]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDC74u); st32((c.r[19].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_003C(c, 146u, depth + 1u); else { c.pc = 0x001F22E0u; return; } if (c.pc != 0x001EDC74u) [[unlikely]] return; }
L_001EDC74:
    mmi::paddub(c.r[17], c.r[2], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 1152ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3EAA0000u);  if (t) { goto L_001EDCA8; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 741u));
    set32(c.r[2], 0u + 14u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EDCA4; } }
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_001EDD4C; } }
L_001EDCA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3EAA0000u);
    c.budget -= 1;
L_001EDCA8:
    c.r[2].d[0] = c.r[2].d[0] | 42572ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 330u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 331u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_001EDCE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDCDCu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 296u, depth + 1u); else { c.pc = 0x0013B590u; return; } if (c.pc != 0x001EDCDCu) [[unlikely]] return; }
L_001EDCDC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_001EDCE0:
    c.f[2] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.f[5] = fp::sub(c.f[2], c.f[0]);
    c.f[1] = ld32((c.r[21].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[2] = ld32((c.r[29].w[0] + 128u));
    c.f[3] = c.r[3].w[0];
    c.facc = fp::mul(c.f[1], c.f[5]);
    c.f[1] = c.r[2].w[0];
    c.f[2] = fp::add(c.facc, fp::mul(c.f[2], c.f[0]));
    st32((c.r[21].w[0] + 16u), c.f[2]);
    c.f[4] = ld32((c.r[21].w[0] + 40u));
    c.f[2] = ld32((c.r[18].w[0]));
    c.facc = fp::mul(c.f[4], c.f[5]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[0]));
    st32((c.r[21].w[0] + 24u), c.f[0]);
    c.f[2] = ld32((c.r[21].w[0] + 36u));
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.budget -= 26;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 20u), c.f[0]);  if (t) { goto L_001EDF0C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001EDD4C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_001EDDD0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 330u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 331u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_001EDD88; } }
    c.f[12] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDD84u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 296u, depth + 1u); else { c.pc = 0x0013B590u; return; } if (c.pc != 0x001EDD84u) [[unlikely]] return; }
L_001EDD84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_001EDD88:
    c.f[1] = c.r[2].w[0];
    c.f[2] = ld32((c.r[21].w[0] + 32u));
    c.f[3] = fp::sub(c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 128u));
    c.facc = fp::mul(c.f[2], c.f[3]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[1], c.f[0]));
    st32((c.r[21].w[0] + 16u), c.f[1]);
    c.f[2] = ld32((c.r[21].w[0] + 40u));
    c.f[1] = ld32((c.r[18].w[0]));
    c.facc = fp::mul(c.f[2], c.f[3]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[1], c.f[0]));
    st32((c.r[21].w[0] + 24u), c.f[1]);
    c.f[2] = ld32((c.r[21].w[0] + 36u));
    c.f[1] = ld32((c.r[19].w[0]));
    c.facc = fp::mul(c.f[2], c.f[3]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[1], c.f[0]));
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 20u), c.f[0]);  if (t) { goto L_001EDF0C; } }
L_001EDDD0:
    set32(c.r[2], ld32((c.r[20].w[0] + 1524u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[21].w[0] + 304u);  if (t) { goto L_001EDDF4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));  if (t) { goto L_001EDE80; } }
    set32(c.r[4], c.r[21].w[0] + 304u);
    c.budget -= 1;
L_001EDDF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDDFCu);  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013CBB0u; return; } if (c.pc != 0x001EDDFCu) [[unlikely]] return; }
L_001EDDFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);  if (t) { goto L_001EDE30; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EDE7C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.budget -= 1;
L_001EDE30:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0xBA890000u);  if (t) { goto L_001EDE5C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EDE7C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBA890000u);
    c.budget -= 1;
L_001EDE5C:
    c.r[3].d[0] = c.r[2].d[0] | 41000ull;
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[2] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[12] = fp::add(c.f[0], c.f[1]);
    c.budget -= 8;
L_001EDE7C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 1;
L_001EDE80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 330u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 331u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_001EDEB0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDEA8u);  if (depth < kMaxDepth) unit_000E(c, 296u, depth + 1u); else { c.pc = 0x0013B590u; return; } if (c.pc != 0x001EDEA8u) [[unlikely]] return; }
L_001EDEA8:
    c.f[12] = c.f[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 2;
L_001EDEB0:
    c.f[1] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[4] = fp::sub(c.f[1], c.f[12]);
    c.f[0] = ld32((c.r[21].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[1] = ld32((c.r[29].w[0] + 128u));
    c.f[3] = c.r[3].w[0];
    c.facc = fp::mul(c.f[0], c.f[4]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.facc, fp::mul(c.f[1], c.f[12]));
    st32((c.r[21].w[0] + 16u), c.f[1]);
    c.f[2] = ld32((c.r[21].w[0] + 40u));
    c.f[1] = ld32((c.r[18].w[0]));
    c.facc = fp::mul(c.f[2], c.f[4]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[1], c.f[12]));
    st32((c.r[21].w[0] + 24u), c.f[1]);
    c.f[2] = ld32((c.r[21].w[0] + 36u));
    c.f[1] = ld32((c.r[19].w[0]));
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[21].w[0] + 20u), c.f[0]);
    c.budget -= 23;
L_001EDF0C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[21].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDF1Cu); set32(c.r[6], c.r[21].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001EDF1Cu) [[unlikely]] return; }
L_001EDF1C:
    set32(c.r[2], ld32((c.r[20].w[0] + 1296u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[2], c.r[2].w[0] + 32767u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDF30u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_003C(c, 215u, depth + 1u); else { c.pc = 0x001F2E60u; return; } if (c.pc != 0x001EDF30u) [[unlikely]] return; }
L_001EDF30:
    c.f[1] = ld32((c.r[29].w[0] + 144u));
    c.f[0] = ld32((c.r[22].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDF44u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x001EDF44u) [[unlikely]] return; }
L_001EDF44:
    st32((c.r[21].w[0] + 332u), c.f[0]);
    c.f[13] = ld32((c.r[21].w[0] + 332u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDF54u); c.f[12] = ld32((c.r[29].w[0] + 148u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x001EDF54u) [[unlikely]] return; }
L_001EDF54:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], 0u - c.r[2].w[0]);
    st16((c.r[21].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[12] = ld32((c.r[29].w[0] + 144u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDF70u); c.f[13] = ld32((c.r[22].w[0]));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x001EDF70u) [[unlikely]] return; }
L_001EDF70:
    st16((c.r[21].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[21].w[0] + 14u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + 32767u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] != 0ull; st32((c.r[20].w[0] + 1296u), c.r[3].w[0]);  if (t) { goto L_001EDF9C; } }
    mmi::paddub(c.r[4], c.r[21], c.r[0]);
    mmi::paddub(c.r[5], c.r[20], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDF9Cu); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 220u, depth + 1u); else { c.pc = 0x001F2F00u; return; } if (c.pc != 0x001EDF9Cu) [[unlikely]] return; }
L_001EDF9C:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001EDFD0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[20], ld32((c.r[5].w[0] + 1532u)));
    set32(c.r[2], c.r[2].w[0] + 27184u);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 19;
    { const bool t = c.r[20].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001EE2AC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 144u);  if (t) { goto L_001EE14C; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    set32(c.r[6], c.r[20].w[0] + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE040u); st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001EE040u) [[unlikely]] return; }
L_001EE040:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE054u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_003C(c, 215u, depth + 1u); else { c.pc = 0x001F2E60u; return; } if (c.pc != 0x001EE054u) [[unlikely]] return; }
L_001EE054:
    c.f[13] = ld32((c.r[29].w[0] + 152u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE060u); c.f[12] = ld32((c.r[29].w[0] + 144u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x001EE060u) [[unlikely]] return; }
L_001EE060:
    st16((c.r[17].w[0] + 328u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 328u)));
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 1284u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 328u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 12u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[19].d[0] = c.r[2].d[0] << 48;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    c.f[0] = c.r[19].w[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE094u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x001EE094u) [[unlikely]] return; }
L_001EE094:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44C00000u);
    c.f[1] = c.r[2].w[0];
    fpu_div(c, 1u, c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE0B8u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001EE0B8u) [[unlikely]] return; }
L_001EE0B8:
    st16((c.r[17].w[0] + 340u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 340u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EE0D4; } }
    set32(c.r[2], 0u + 5u);
    st16((c.r[17].w[0] + 340u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001EE0D4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 340u)));
    c.f[0] = c.r[19].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[2] = c.r[3].w[0];
    c.f[1] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    fpu_div(c, 12u, c.f[0], c.f[2]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE10Cu);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001EE10Cu) [[unlikely]] return; }
L_001EE10C:
    st16((c.r[17].w[0] + 344u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 344u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 340u)));
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE134u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001EE134u) [[unlikely]] return; }
L_001EE134:
    st16((c.r[17].w[0] + 322u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 344u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 344u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001EE210; } }
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 1;
L_001EE14C:
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE158u); set32(c.r[6], c.r[20].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001EE158u) [[unlikely]] return; }
L_001EE158:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE16Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_003C(c, 215u, depth + 1u); else { c.pc = 0x001F2E60u; return; } if (c.pc != 0x001EE16Cu) [[unlikely]] return; }
L_001EE16C:
    c.f[13] = ld32((c.r[29].w[0] + 152u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE178u); c.f[12] = ld32((c.r[29].w[0] + 144u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x001EE178u) [[unlikely]] return; }
L_001EE178:
    st16((c.r[17].w[0] + 328u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 328u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[2], c.r[3].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 1284u), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 328u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 340u)));
    set32(c.r[3], c.r[6].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.f[2] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE1D8u);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001EE1D8u) [[unlikely]] return; }
L_001EE1D8:
    st16((c.r[17].w[0] + 344u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 344u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 340u)));
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE200u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001EE200u) [[unlikely]] return; }
L_001EE200:
    st16((c.r[17].w[0] + 322u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 344u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st16((c.r[17].w[0] + 344u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001EE210:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 644u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EE264; } }
    set32(c.r[5], c.r[20].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE228u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 168u, depth + 1u); else { c.pc = 0x002D6270u; return; } if (c.pc != 0x001EE228u) [[unlikely]] return; }
L_001EE228:
    c.f[1] = ld32((c.r[16].w[0] + 1604u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EE264; } }
    c.f[0] = ld32((c.r[20].w[0] + 2096u));
    set32(c.r[6], c.r[29].w[0] + 128u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 2100u));
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 2104u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE264u); st32((c.r[29].w[0] + 136u), c.f[0]);  if (depth < kMaxDepth) unit_003C(c, 101u, depth + 1u); else { c.pc = 0x001F1CC0u; return; } if (c.pc != 0x001EE264u) [[unlikely]] return; }
L_001EE264:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 792u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[6], c.r[18], c.r[0]);  if (t) { goto L_001EE3AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[5], c.r[20].w[0] + 32u);
    set32(c.r[6], c.r[2].w[0] + 30224u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE284u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 239u, depth + 1u); else { c.pc = 0x001F35F0u; return; } if (c.pc != 0x001EE284u) [[unlikely]] return; }
L_001EE284:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EE3A8; } }
    st8((c.r[16].w[0] + 792u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 755u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EE3A8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001EE3A8; } }
L_001EE2AC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EE3A8; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[17].w[0] + 328u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    st32((c.r[16].w[0] + 1284u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 328u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 12u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[19].d[0] = c.r[2].d[0] << 48;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    c.f[0] = c.r[19].w[0];
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE2F8u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x001EE2F8u) [[unlikely]] return; }
L_001EE2F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44C00000u);
    c.f[1] = c.r[2].w[0];
    fpu_div(c, 1u, c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE31Cu); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001EE31Cu) [[unlikely]] return; }
L_001EE31C:
    st16((c.r[17].w[0] + 340u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 340u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EE338; } }
    set32(c.r[2], 0u + 5u);
    st16((c.r[17].w[0] + 340u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001EE338:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 340u)));
    c.f[0] = c.r[19].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[2] = c.r[3].w[0];
    c.f[1] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[2] = fp::mul(c.f[2], c.f[2]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    fpu_div(c, 12u, c.f[0], c.f[2]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE370u);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001EE370u) [[unlikely]] return; }
L_001EE370:
    st16((c.r[17].w[0] + 344u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 344u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 340u)));
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE398u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001EE398u) [[unlikely]] return; }
L_001EE398:
    st16((c.r[17].w[0] + 322u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 344u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st16((c.r[17].w[0] + 344u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001EE3A8:
    mmi::paddub(c.r[6], c.r[18], c.r[0]);
    c.budget -= 1;
L_001EE3AC:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE3B8u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 83u, depth + 1u); else { c.pc = 0x001F1850u; return; } if (c.pc != 0x001EE3B8u) [[unlikely]] return; }
L_001EE3B8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 322u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[17].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 322u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 344u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[17].w[0] + 322u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 340u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 340u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 15;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[21], c.r[29].w[0] + 148u);  if (t) { goto L_001EE440; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 739u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 740u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 328u)));
    st16((c.r[17].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 792u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EE43C; } }
    st8((c.r[16].w[0] + 792u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 755u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EE43C; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 755u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001EE43C:
    set32(c.r[21], c.r[29].w[0] + 148u);
    c.budget -= 1;
L_001EE440:
    st32((c.r[21].w[0]), 0u);
    set32(c.r[18], c.r[29].w[0] + 152u);
    st32((c.r[29].w[0] + 144u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE458u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001EE458u) [[unlikely]] return; }
L_001EE458:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE460u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 12u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001EE460u) [[unlikely]] return; }
L_001EE460:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE46Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001EE46Cu) [[unlikely]] return; }
L_001EE46C:
    c.f[12] = ld32((c.r[17].w[0] + 332u));
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE47Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001EE47Cu) [[unlikely]] return; }
L_001EE47C:
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    set32(c.r[19], c.r[29].w[0] + 120u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 56u));
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[19].w[0]), c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE4A8u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10u)));  if (depth < kMaxDepth) unit_000E(c, 282u, depth + 1u); else { c.pc = 0x0013B3B0u; return; } if (c.pc != 0x001EE4A8u) [[unlikely]] return; }
L_001EE4A8:
    c.f[2] = ld32((c.r[17].w[0] + 332u));
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    set32(c.r[20], c.r[29].w[0] + 116u);
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    set32(c.r[7], c.r[17].w[0] + 48u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE4D4u); st32((c.r[20].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_003C(c, 146u, depth + 1u); else { c.pc = 0x001F22E0u; return; } if (c.pc != 0x001EE4D4u) [[unlikely]] return; }
L_001EE4D4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 739u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[29].w[0] + 112u);  if (t) { goto L_001EE550; } }
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[3] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[17].w[0] + 24u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[20].w[0]));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    c.budget -= 26;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.f[0]);  if (t) { goto L_001EE570; } }
    set32(c.r[2], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_001EE550:
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[17].w[0] + 16u), c.f[3]);
    st32((c.r[17].w[0] + 20u), c.f[2]);
    st32((c.r[17].w[0] + 24u), c.f[1]);
    st32((c.r[17].w[0] + 28u), c.f[0]);
    c.budget -= 8;
L_001EE570:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE580u); set32(c.r[6], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001EE580u) [[unlikely]] return; }
L_001EE580:
    set32(c.r[2], ld32((c.r[16].w[0] + 1296u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE594u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_003C(c, 215u, depth + 1u); else { c.pc = 0x001F2E60u; return; } if (c.pc != 0x001EE594u) [[unlikely]] return; }
L_001EE594:
    c.f[1] = ld32((c.r[29].w[0] + 144u));
    c.f[0] = ld32((c.r[18].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE5A8u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x001EE5A8u) [[unlikely]] return; }
L_001EE5A8:
    st32((c.r[17].w[0] + 332u), c.f[0]);
    c.f[13] = ld32((c.r[17].w[0] + 332u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE5B8u); c.f[12] = ld32((c.r[21].w[0]));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x001EE5B8u) [[unlikely]] return; }
L_001EE5B8:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], 0u - c.r[2].w[0]);
    st16((c.r[17].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[12] = ld32((c.r[29].w[0] + 144u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE5D4u); c.f[13] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x001EE5D4u) [[unlikely]] return; }
L_001EE5D4:
    st16((c.r[17].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 14u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + 32767u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 1296u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001EE610:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[2].w[0] + 27184u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 30368u);
    set32(c.r[6], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 128u);
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    mmi::paddub(c.r[20], c.r[5], c.r[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE66Cu); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_003C(c, 83u, depth + 1u); else { c.pc = 0x001F1850u; return; } if (c.pc != 0x001EE66Cu) [[unlikely]] return; }
L_001EE66C:
    mmi::paddub(c.r[4], c.r[21], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE678u); mmi::paddub(c.r[5], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 87u, depth + 1u); else { c.pc = 0x001F1990u; return; } if (c.pc != 0x001EE678u) [[unlikely]] return; }
L_001EE678:
    set32(c.r[16], ld32((c.r[20].w[0] + 1296u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 1312u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D080000u);
    c.r[2].d[0] = c.r[2].d[0] | 34953ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], c.r[3].w[0] - c.r[16].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE6ACu); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001EE6ACu) [[unlikely]] return; }
L_001EE6AC:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE6B8u); c.r[16].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001EE6B8u) [[unlikely]] return; }
L_001EE6B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE6C0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001EE6C0u) [[unlikely]] return; }
L_001EE6C0:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE6CCu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001EE6CCu) [[unlikely]] return; }
L_001EE6CC:
    c.f[12] = ld32((c.r[21].w[0] + 332u));
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE6DCu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001EE6DCu) [[unlikely]] return; }
L_001EE6DC:
    c.f[1] = ld32((c.r[21].w[0] + 48u));
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[19], c.r[29].w[0] + 136u);
    set32(c.r[17], c.r[29].w[0] + 120u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[1] = ld32((c.r[21].w[0] + 56u));
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0]), c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE70Cu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 10u)));  if (depth < kMaxDepth) unit_000E(c, 282u, depth + 1u); else { c.pc = 0x0013B3B0u; return; } if (c.pc != 0x001EE70Cu) [[unlikely]] return; }
L_001EE70C:
    c.f[2] = ld32((c.r[21].w[0] + 332u));
    c.f[1] = ld32((c.r[21].w[0] + 52u));
    set32(c.r[18], c.r[29].w[0] + 116u);
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    set32(c.r[7], c.r[21].w[0] + 48u);
    mmi::paddub(c.r[4], c.r[21], c.r[0]);
    mmi::paddub(c.r[5], c.r[20], c.r[0]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE738u); st32((c.r[18].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_003C(c, 146u, depth + 1u); else { c.pc = 0x001F22E0u; return; } if (c.pc != 0x001EE738u) [[unlikely]] return; }
L_001EE738:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001EE7AC; } }
    c.f[1] = ld32((c.r[21].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[3] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[21].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[21].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[21].w[0] + 24u), c.f[0]);
    c.f[1] = ld32((c.r[21].w[0] + 36u));
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    c.budget -= 26;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 20u), c.f[0]);  if (t) { goto L_001EE808; } }
L_001EE7AC:
    c.f[1] = ld32((c.r[21].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[3] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[21].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[21].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[21].w[0] + 24u), c.f[0]);
    c.f[1] = ld32((c.r[21].w[0] + 36u));
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[21].w[0] + 20u), c.f[0]);
    c.budget -= 23;
L_001EE808:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[21].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE818u); set32(c.r[6], c.r[21].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001EE818u) [[unlikely]] return; }
L_001EE818:
    set32(c.r[2], ld32((c.r[20].w[0] + 1296u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE82Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_003C(c, 215u, depth + 1u); else { c.pc = 0x001F2E60u; return; } if (c.pc != 0x001EE82Cu) [[unlikely]] return; }
L_001EE82C:
    c.f[1] = ld32((c.r[29].w[0] + 128u));
    c.f[0] = ld32((c.r[19].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE840u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x001EE840u) [[unlikely]] return; }
L_001EE840:
    st32((c.r[21].w[0] + 332u), c.f[0]);
    c.f[13] = ld32((c.r[21].w[0] + 332u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE850u); c.f[12] = ld32((c.r[29].w[0] + 132u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x001EE850u) [[unlikely]] return; }
L_001EE850:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], 0u - c.r[3].w[0]);
    st16((c.r[21].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[16].w[0] + 32767u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[21].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[21].w[0] + 14u), static_cast<std::uint16_t>(0u));
    st32((c.r[20].w[0] + 1296u), c.r[16].w[0]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001EE8A0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8386u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 27184u);
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_001EE984; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    set32(c.r[6], c.r[16].w[0] + 1344u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE908u); st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001EE908u) [[unlikely]] return; }
L_001EE908:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE91Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_003C(c, 215u, depth + 1u); else { c.pc = 0x001F2E60u; return; } if (c.pc != 0x001EE91Cu) [[unlikely]] return; }
L_001EE91C:
    set32(c.r[19], c.r[29].w[0] + 152u);
    c.f[13] = ld32((c.r[19].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE92Cu); c.f[12] = ld32((c.r[29].w[0] + 144u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x001EE92Cu) [[unlikely]] return; }
L_001EE92C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[17].w[0] + 16u);
    set32(c.r[6], c.r[17].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE940u); st16((c.r[17].w[0] + 328u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001EE940u) [[unlikely]] return; }
L_001EE940:
    set32(c.r[2], ld32((c.r[16].w[0] + 1296u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[2], c.r[2].w[0] + 32767u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE954u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_003C(c, 215u, depth + 1u); else { c.pc = 0x001F2E60u; return; } if (c.pc != 0x001EE954u) [[unlikely]] return; }
L_001EE954:
    c.f[1] = ld32((c.r[29].w[0] + 144u));
    c.f[0] = ld32((c.r[19].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE968u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x001EE968u) [[unlikely]] return; }
L_001EE968:
    c.f[12] = ld32((c.r[29].w[0] + 148u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE974u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x001EE974u) [[unlikely]] return; }
L_001EE974:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], 0u - c.r[2].w[0]);
    st16((c.r[17].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_001EE984:
    mmi::paddub(c.r[6], c.r[18], c.r[0]);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE994u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 83u, depth + 1u); else { c.pc = 0x001F1850u; return; } if (c.pc != 0x001EE994u) [[unlikely]] return; }
L_001EE994:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE9A0u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 87u, depth + 1u); else { c.pc = 0x001F1990u; return; } if (c.pc != 0x001EE9A0u) [[unlikely]] return; }
L_001EE9A0:
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 328u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], c.r[3].w[0] - c.r[18].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE9D4u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001EE9D4u) [[unlikely]] return; }
L_001EE9D4:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[22], c.r[29].w[0] + 148u);
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[22].w[0]), 0u);
    set32(c.r[19], c.r[29].w[0] + 152u);
    st32((c.r[29].w[0] + 144u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE9F8u); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001EE9F8u) [[unlikely]] return; }
L_001EE9F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEA00u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001EEA00u) [[unlikely]] return; }
L_001EEA00:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEA0Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001EEA0Cu) [[unlikely]] return; }
L_001EEA0C:
    c.f[12] = ld32((c.r[17].w[0] + 332u));
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEA1Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001EEA1Cu) [[unlikely]] return; }
L_001EEA1C:
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    set32(c.r[20], c.r[29].w[0] + 136u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 56u));
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[20].w[0]), c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEA48u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10u)));  if (depth < kMaxDepth) unit_000E(c, 282u, depth + 1u); else { c.pc = 0x0013B3B0u; return; } if (c.pc != 0x001EEA48u) [[unlikely]] return; }
L_001EEA48:
    c.f[2] = ld32((c.r[17].w[0] + 332u));
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    set32(c.r[21], c.r[29].w[0] + 132u);
    set32(c.r[6], c.r[29].w[0] + 128u);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    set32(c.r[7], c.r[17].w[0] + 48u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEA74u); st32((c.r[21].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_003C(c, 146u, depth + 1u); else { c.pc = 0x001F22E0u; return; } if (c.pc != 0x001EEA74u) [[unlikely]] return; }
L_001EEA74:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001EEAE8; } }
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[3] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[20].w[0]));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[17].w[0] + 24u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[21].w[0]));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    c.budget -= 26;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.f[0]);  if (t) { goto L_001EEB44; } }
L_001EEAE8:
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[3] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[20].w[0]));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[17].w[0] + 24u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[21].w[0]));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.budget -= 23;
L_001EEB44:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEB54u); set32(c.r[6], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001EEB54u) [[unlikely]] return; }
L_001EEB54:
    set32(c.r[2], ld32((c.r[16].w[0] + 1296u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEB68u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_003C(c, 215u, depth + 1u); else { c.pc = 0x001F2E60u; return; } if (c.pc != 0x001EEB68u) [[unlikely]] return; }
L_001EEB68:
    c.f[1] = ld32((c.r[29].w[0] + 144u));
    c.f[0] = ld32((c.r[19].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEB7Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x001EEB7Cu) [[unlikely]] return; }
L_001EEB7C:
    st32((c.r[17].w[0] + 332u), c.f[0]);
    c.f[13] = ld32((c.r[17].w[0] + 332u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEB8Cu); c.f[12] = ld32((c.r[22].w[0]));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x001EEB8Cu) [[unlikely]] return; }
L_001EEB8C:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], 0u - c.r[2].w[0]);
    st16((c.r[17].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 12u), static_cast<std::uint16_t>(c.r[18].w[0]));
    st16((c.r[17].w[0] + 14u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 1296u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 328u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.f[0] = c.r[2].w[0];
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEBD4u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x001EEBD4u) [[unlikely]] return; }
L_001EEBD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEBDCu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001EEBDCu) [[unlikely]] return; }
L_001EEBDC:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[3].sd[0] < 4097ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EEBF8; } }
    set32(c.r[3], 0u + 4u);
    st8((c.r[16].w[0] + 740u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
L_001EEBF8:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001EEC20:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[3].w[0] + 29696u);
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8386u)));
    set32(c.r[4], c.r[4].w[0] << 3);
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_001EECD4; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[20].w[0] + 16u);
    set32(c.r[6], c.r[20].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEC78u); st8((c.r[20].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001EEC78u) [[unlikely]] return; }
L_001EEC78:
    set32(c.r[2], ld32((c.r[19].w[0] + 1296u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[2], c.r[2].w[0] + 32767u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEC8Cu); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_003C(c, 215u, depth + 1u); else { c.pc = 0x001F2E60u; return; } if (c.pc != 0x001EEC8Cu) [[unlikely]] return; }
L_001EEC8C:
    set32(c.r[17], c.r[29].w[0] + 120u);
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    c.f[0] = ld32((c.r[17].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EECA4u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x001EECA4u) [[unlikely]] return; }
L_001EECA4:
    c.f[12] = ld32((c.r[29].w[0] + 116u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EECB0u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x001EECB0u) [[unlikely]] return; }
L_001EECB0:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], 0u - c.r[2].w[0]);
    st16((c.r[20].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[12] = ld32((c.r[29].w[0] + 112u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EECCCu); c.f[13] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x001EECCCu) [[unlikely]] return; }
L_001EECCC:
    st16((c.r[20].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[20].w[0] + 14u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_001EECD4:
    c.f[2] = ld32((c.r[20].w[0] + 336u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[3] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    set32(c.r[17], c.r[29].w[0] + 120u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 336u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    st32((c.r[20].w[0] + 48u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 36u));
    c.f[0] = ld32((c.r[20].w[0] + 336u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    st32((c.r[20].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[20].w[0] + 332u), c.f[0]);
    st32((c.r[29].w[0] + 116u), 0u);
    st32((c.r[29].w[0] + 112u), 0u);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EED3Cu); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001EED3Cu) [[unlikely]] return; }
L_001EED3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EED44u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 12u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001EED44u) [[unlikely]] return; }
L_001EED44:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EED50u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001EED50u) [[unlikely]] return; }
L_001EED50:
    c.f[12] = ld32((c.r[20].w[0] + 332u));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EED60u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001EED60u) [[unlikely]] return; }
L_001EED60:
    c.f[1] = ld32((c.r[20].w[0] + 48u));
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[16], c.r[29].w[0] + 104u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 56u));
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EED8Cu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 10u)));  if (depth < kMaxDepth) unit_000E(c, 282u, depth + 1u); else { c.pc = 0x0013B3B0u; return; } if (c.pc != 0x001EED8Cu) [[unlikely]] return; }
L_001EED8C:
    c.f[2] = ld32((c.r[20].w[0] + 332u));
    c.f[1] = ld32((c.r[20].w[0] + 52u));
    set32(c.r[18], c.r[29].w[0] + 100u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    set32(c.r[7], c.r[20].w[0] + 48u);
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEDB8u); st32((c.r[18].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_003C(c, 146u, depth + 1u); else { c.pc = 0x001F22E0u; return; } if (c.pc != 0x001EEDB8u) [[unlikely]] return; }
L_001EEDB8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001EEE2C; } }
    c.f[1] = ld32((c.r[20].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[3] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[20].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[20].w[0] + 24u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 36u));
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    c.budget -= 26;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 20u), c.f[0]);  if (t) { goto L_001EEE88; } }
L_001EEE2C:
    c.f[1] = ld32((c.r[20].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[3] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[20].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[20].w[0] + 24u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 36u));
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[20].w[0] + 20u), c.f[0]);
    c.budget -= 23;
L_001EEE88:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[20].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEE98u); set32(c.r[6], c.r[20].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001EEE98u) [[unlikely]] return; }
L_001EEE98:
    set32(c.r[2], ld32((c.r[19].w[0] + 1296u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEEACu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_003C(c, 215u, depth + 1u); else { c.pc = 0x001F2E60u; return; } if (c.pc != 0x001EEEACu) [[unlikely]] return; }
L_001EEEAC:
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    c.f[0] = ld32((c.r[17].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEEC0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x001EEEC0u) [[unlikely]] return; }
L_001EEEC0:
    st32((c.r[20].w[0] + 332u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + 32767u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 1296u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001EEF00:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[18], c.r[5], c.r[0]);  if (t) { goto L_001EF1CC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 739u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_001EF1CC; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8386u)));
    c.f[3] = ld32((c.r[19].w[0] + 16u));
    c.f[2] = ld32((c.r[19].w[0] + 20u));
    c.f[1] = ld32((c.r[19].w[0] + 24u));
    c.f[0] = ld32((c.r[19].w[0] + 28u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 27184u);
    st32((c.r[19].w[0] + 32u), c.f[3]);
    set32(c.r[3], c.r[3].w[0] << 2);
    st32((c.r[19].w[0] + 36u), c.f[2]);
    st32((c.r[19].w[0] + 40u), c.f[1]);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[19].w[0] + 44u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 2u)));
    c.budget -= 18;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);  goto L_001EEFD8; }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[4], c.r[19].w[0] + 304u);
    set32(c.r[5], c.r[19].w[0] + 16u);
    set32(c.r[6], c.r[19].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEF94u); st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001EEF94u) [[unlikely]] return; }
L_001EEF94:
    set32(c.r[5], ld32((c.r[18].w[0] + 1296u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEFA0u); set32(c.r[4], c.r[19].w[0] + 304u);  if (depth < kMaxDepth) unit_003C(c, 215u, depth + 1u); else { c.pc = 0x001F2E60u; return; } if (c.pc != 0x001EEFA0u) [[unlikely]] return; }
L_001EEFA0:
    set32(c.r[4], c.r[19].w[0] + 304u);
    st16((c.r[19].w[0] + 12u), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEFB0u); st32((c.r[19].w[0] + 308u), 0u);  if (depth < kMaxDepth) unit_000F(c, 20u, depth + 1u); else { c.pc = 0x0013C9E0u; return; } if (c.pc != 0x001EEFB0u) [[unlikely]] return; }
L_001EEFB0:
    st32((c.r[19].w[0] + 332u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 20u));
    st32((c.r[19].w[0] + 292u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 788u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    st8((c.r[18].w[0] + 788u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 795u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    st8((c.r[18].w[0] + 795u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.budget -= 10;
L_001EEFD8:
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[19].w[0] + 336u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 758u)));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[2] = ld32((c.r[2].w[0] + 8u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 336u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 32u));
    c.f[3] = c.r[2].w[0];
    st32((c.r[19].w[0] + 48u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 36u));
    c.f[0] = ld32((c.r[19].w[0] + 336u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    st32((c.r[19].w[0] + 56u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 332u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[3]));
    c.budget -= 30;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EF068; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 332u), c.f[0]);
    c.budget -= 6;
L_001EF068:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF070u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001EF070u) [[unlikely]] return; }
L_001EF070:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF078u); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001EF078u) [[unlikely]] return; }
L_001EF078:
    set32(c.r[4], c.r[19].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF084u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001EF084u) [[unlikely]] return; }
L_001EF084:
    c.f[12] = ld32((c.r[19].w[0] + 332u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF094u); set32(c.r[5], c.r[19].w[0] + 304u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001EF094u) [[unlikely]] return; }
L_001EF094:
    c.f[2] = ld32((c.r[19].w[0] + 48u));
    c.f[1] = ld32((c.r[29].w[0] + 80u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    set32(c.r[17], c.r[29].w[0] + 88u);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    set32(c.r[16], c.r[29].w[0] + 84u);
    set32(c.r[3], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.f[2] = ld32((c.r[19].w[0] + 56u));
    c.f[1] = ld32((c.r[17].w[0]));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[17].w[0]), c.f[1]);
    c.f[2] = ld32((c.r[19].w[0] + 292u));
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[16].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[19].w[0] + 292u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 292u), c.f[0]);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 32;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EF144; } }
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = 0u;
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EF144; } }
    c.f[0] = c.f[2] ^ fp::kSign;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.f[0]);  if (t) { goto L_001EF164; } }
L_001EF144:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EF164; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF154u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x001EF154u) [[unlikely]] return; }
L_001EF154:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EF164; } }
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 2;
L_001EF164:
    c.f[1] = ld32((c.r[19].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[3] = c.r[3].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    st32((c.r[19].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    st32((c.r[19].w[0] + 24u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 36u));
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.budget -= 26;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 20u), c.f[0]);  if (t) { goto L_001EF1D0; } }
L_001EF1CC:
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001EF1D0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001EF1F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[6], 0u + 384u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF214u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001EF214u) [[unlikely]] return; }
L_001EF214:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[3].w[0] - 4784u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 788u));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 260u)));
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[4].d[0] = c.r[4].d[0] & 3ull;
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] - 4u));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[17].w[0] + 356u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001EF274; } }
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 788u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[16].w[0] + 788u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 795u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 795u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001EF3BC; } }
L_001EF274:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 356u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], c.r[2].w[0] - 6336u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    set32(c.r[6], c.r[5].w[0] - 1u);
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st8((c.r[17].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    st32((c.r[17].w[0] + 328u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    st32((c.r[17].w[0] + 332u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 4u)));
    st16((c.r[17].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 6u)));
    st16((c.r[17].w[0] + 304u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 8u)));
    st16((c.r[17].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 10u)));
    st16((c.r[17].w[0] + 306u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 31;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_001EF300; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001EF318; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_001EF300:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_001EF318:
    st32((c.r[17].w[0] + 336u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_001EF338; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001EF350; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_001EF338:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_001EF350:
    st32((c.r[17].w[0] + 340u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2u));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x468C0000u);  goto L_001EF39C; }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_001EF378; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001EF390; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_001EF378:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_001EF390:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 352u), c.f[0]);  if (t) { goto L_001EF3A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x468C0000u);
    c.budget -= 1;
L_001EF39C:
    c.r[2].d[0] = c.r[2].d[0] | 40960ull;
    st32((c.r[17].w[0] + 352u), c.r[2].w[0]);
    c.budget -= 2;
L_001EF3A4:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF3B0u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 238u, depth + 1u); else { c.pc = 0x001F35A0u; return; } if (c.pc != 0x001EF3B0u) [[unlikely]] return; }
L_001EF3B0:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF3BCu); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_003B(c, 248u, depth + 1u); else { c.pc = 0x001EF3D0u; return; } if (c.pc != 0x001EF3BCu) [[unlikely]] return; }
L_001EF3BC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001EF3D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8384u)));
    c.f[1] = ld32((c.r[5].w[0] + 7740u));
    c.f[0] = ld32((c.r[4].w[0] + 352u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[3].w[0] - 28448u);
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    set32(c.r[6], c.r[6].w[0] << 7);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0] + 352u), c.f[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 1520u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.budget -= 20;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[17], c.r[5], c.r[0]);  if (t) { goto L_001EF44C; } }
    c.f[1] = ld32((c.r[18].w[0] + 352u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EF44C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EF46C; } }
L_001EF44C:
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 788u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[17].w[0] + 788u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 795u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 795u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001EF688; } }
L_001EF46C:
    c.f[3] = ld32((c.r[6].w[0] + 48u));
    c.f[2] = ld32((c.r[6].w[0] + 52u));
    c.f[1] = ld32((c.r[6].w[0] + 56u));
    c.f[0] = ld32((c.r[6].w[0] + 60u));
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[5], c.r[17].w[0] + 1328u);
    st32((c.r[18].w[0] + 48u), c.f[3]);
    st32((c.r[18].w[0] + 52u), c.f[2]);
    st32((c.r[18].w[0] + 56u), c.f[1]);
    st32((c.r[18].w[0] + 60u), c.f[0]);
    c.f[3] = ld32((c.r[18].w[0] + 48u));
    c.f[2] = ld32((c.r[18].w[0] + 52u));
    c.f[1] = ld32((c.r[18].w[0] + 56u));
    c.f[0] = ld32((c.r[18].w[0] + 60u));
    st32((c.r[18].w[0] + 272u), c.f[3]);
    st32((c.r[18].w[0] + 276u), c.f[2]);
    st32((c.r[18].w[0] + 280u), c.f[1]);
    st32((c.r[18].w[0] + 284u), c.f[0]);
    c.f[3] = ld32((c.r[6].w[0] + 16u));
    c.f[2] = ld32((c.r[6].w[0] + 20u));
    c.f[1] = ld32((c.r[6].w[0] + 24u));
    c.f[0] = ld32((c.r[6].w[0] + 28u));
    st32((c.r[18].w[0] + 32u), c.f[3]);
    st32((c.r[18].w[0] + 36u), c.f[2]);
    st32((c.r[18].w[0] + 40u), c.f[1]);
    st32((c.r[18].w[0] + 44u), c.f[0]);
    c.f[3] = ld32((c.r[18].w[0] + 32u));
    c.f[2] = ld32((c.r[18].w[0] + 36u));
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = ld32((c.r[18].w[0] + 44u));
    st32((c.r[18].w[0] + 16u), c.f[3]);
    st32((c.r[18].w[0] + 20u), c.f[2]);
    st32((c.r[18].w[0] + 24u), c.f[1]);
    st32((c.r[18].w[0] + 28u), c.f[0]);
    c.f[3] = ld32((c.r[18].w[0] + 16u));
    c.f[2] = ld32((c.r[18].w[0] + 20u));
    c.f[1] = ld32((c.r[18].w[0] + 24u));
    c.f[0] = ld32((c.r[18].w[0] + 28u));
    st32((c.r[18].w[0] + 288u), c.f[3]);
    st32((c.r[18].w[0] + 292u), c.f[2]);
    st32((c.r[18].w[0] + 296u), c.f[1]);
    c.budget -= 43;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF518u); st32((c.r[18].w[0] + 300u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001EF518u) [[unlikely]] return; }
L_001EF518:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EF688; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[3].w[0] - 6336u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[3] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[3], c.f[0]);
    set32(c.r[3], c.r[4].w[0] + 1u);
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[3].w[0];
    c.r[6].d[0] = ld8((c.r[18].w[0] + 356u));
    fpu_div(c, 2u, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F5E0000u);
    c.r[3].d[0] = c.r[3].d[0] | 35442ull;
    c.r[4].d[0] = ld8((c.r[17].w[0] + 788u));
    set32(c.r[6], c.r[6].w[0] - 1u);
    st8((c.r[17].w[0] + 795u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], c.r[6].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[16], c.r[5].w[0] + c.r[4].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[1] = c.f[0];
    fpu_div(c, 1u, c.f[1], c.f[3]);
    st32((c.r[18].w[0] + 320u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 324u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 35;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EF688; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    set32(c.r[6], c.r[18].w[0] + 48u);
    set32(c.r[7], c.r[18].w[0] + 16u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF5E0u); st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003C(c, 122u, depth + 1u); else { c.pc = 0x001F2030u; return; } if (c.pc != 0x001EF5E0u) [[unlikely]] return; }
L_001EF5E0:
    c.f[3] = ld32((c.r[18].w[0] + 16u));
    c.f[2] = ld32((c.r[18].w[0] + 20u));
    c.f[1] = ld32((c.r[18].w[0] + 24u));
    c.f[0] = ld32((c.r[18].w[0] + 28u));
    set32(c.r[6], c.r[18].w[0] + 16u);
    set32(c.r[7], c.r[18].w[0] + 48u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    st32((c.r[18].w[0] + 32u), c.f[3]);
    st32((c.r[18].w[0] + 36u), c.f[2]);
    st32((c.r[18].w[0] + 40u), c.f[1]);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF614u); st32((c.r[18].w[0] + 44u), c.f[0]);  if (depth < kMaxDepth) unit_003C(c, 176u, depth + 1u); else { c.pc = 0x001F2740u; return; } if (c.pc != 0x001EF614u) [[unlikely]] return; }
L_001EF614:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001EF688; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8u)));
    set32(c.r[6], c.r[18].w[0] + 48u);
    set32(c.r[7], c.r[18].w[0] + 16u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    set32(c.r[2], 0u - c.r[2].w[0]);
    st16((c.r[18].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10u)));
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF64Cu); st16((c.r[18].w[0] + 306u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003C(c, 122u, depth + 1u); else { c.pc = 0x001F2030u; return; } if (c.pc != 0x001EF64Cu) [[unlikely]] return; }
L_001EF64C:
    set32(c.r[6], c.r[18].w[0] + 16u);
    set32(c.r[7], c.r[18].w[0] + 48u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF660u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 176u, depth + 1u); else { c.pc = 0x001F2740u; return; } if (c.pc != 0x001EF660u) [[unlikely]] return; }
L_001EF660:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001EF688; } }
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 788u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[17].w[0] + 788u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 795u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[17].w[0] + 795u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_001EF688:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001EF6A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 640u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EF734; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EF6D4; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EF6F4; } }
L_001EF6D4:
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 788u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[5].w[0] + 788u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 795u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 795u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001EF734; } }
L_001EF6F4:
    c.f[3] = ld32((c.r[4].w[0] + 16u));
    c.f[2] = ld32((c.r[4].w[0] + 20u));
    c.f[1] = ld32((c.r[4].w[0] + 24u));
    c.f[0] = ld32((c.r[4].w[0] + 28u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 30384u);
    st32((c.r[4].w[0] + 32u), c.f[3]);
    st32((c.r[4].w[0] + 36u), c.f[2]);
    st32((c.r[4].w[0] + 40u), c.f[1]);
    st32((c.r[4].w[0] + 44u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 16;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF734u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001EF734u) [[unlikely]] return; }
L_001EF734:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001EF740:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_001EF76C; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 316u), 0u);
    c.budget -= 3;
L_001EF76C:
    c.f[1] = ld32((c.r[16].w[0] + 7740u));
    c.f[0] = ld32((c.r[17].w[0] + 316u));
    c.f[1] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 316u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 336u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[6], c.r[29].w[0] + 48u);  if (t) { goto L_001EF7AC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.f[0] = ld32((c.r[17].w[0] + 336u));
    st32((c.r[17].w[0] + 316u), c.f[0]);
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.budget -= 7;
L_001EF7AC:
    set32(c.r[7], c.r[29].w[0] + 64u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF7BCu); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 122u, depth + 1u); else { c.pc = 0x001F2030u; return; } if (c.pc != 0x001EF7BCu) [[unlikely]] return; }
L_001EF7BC:
    set32(c.r[6], c.r[29].w[0] + 64u);
    set32(c.r[7], c.r[29].w[0] + 48u);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF7D0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 176u, depth + 1u); else { c.pc = 0x001F2740u; return; } if (c.pc != 0x001EF7D0u) [[unlikely]] return; }
L_001EF7D0:
    c.f[3] = ld32((c.r[17].w[0] + 288u));
    c.f[2] = ld32((c.r[29].w[0] + 64u));
    c.f[1] = ld32((c.r[17].w[0] + 336u));
    c.f[0] = ld32((c.r[17].w[0] + 316u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.f[3] = ld32((c.r[17].w[0] + 292u));
    c.f[2] = ld32((c.r[29].w[0] + 68u));
    c.f[1] = ld32((c.r[17].w[0] + 336u));
    c.f[0] = ld32((c.r[17].w[0] + 316u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.f[3] = ld32((c.r[17].w[0] + 296u));
    c.f[2] = ld32((c.r[29].w[0] + 72u));
    c.f[1] = ld32((c.r[17].w[0] + 336u));
    c.f[0] = ld32((c.r[17].w[0] + 316u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[17].w[0] + 24u), c.f[0]);
    c.f[3] = ld32((c.r[17].w[0] + 272u));
    c.f[2] = ld32((c.r[29].w[0] + 48u));
    c.f[1] = ld32((c.r[17].w[0] + 336u));
    c.f[0] = ld32((c.r[17].w[0] + 316u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[17].w[0] + 48u), c.f[0]);
    c.f[3] = ld32((c.r[17].w[0] + 276u));
    c.f[2] = ld32((c.r[29].w[0] + 52u));
    c.f[1] = ld32((c.r[17].w[0] + 336u));
    c.f[0] = ld32((c.r[17].w[0] + 316u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.f[3] = ld32((c.r[17].w[0] + 280u));
    c.f[2] = ld32((c.r[29].w[0] + 56u));
    c.f[1] = ld32((c.r[17].w[0] + 336u));
    c.f[0] = ld32((c.r[17].w[0] + 316u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[17].w[0] + 56u), c.f[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 59;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001EF8C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (t) { goto L_001EF8F0; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 316u), 0u);
    c.budget -= 3;
L_001EF8F0:
    c.f[20] = ld32((c.r[16].w[0] + 7740u));
    c.f[0] = ld32((c.r[17].w[0] + 316u));
    c.f[1] = fp::add(c.f[0], c.f[20]);
    st32((c.r[17].w[0] + 316u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 352u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EF95C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.f[1] = ld32((c.r[17].w[0] + 340u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001EF95C; } }
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 788u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    st8((c.r[16].w[0] + 788u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 795u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    st8((c.r[16].w[0] + 795u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
L_001EF95C:
    c.f[1] = ld32((c.r[17].w[0] + 324u));
    c.f[0] = ld32((c.r[17].w[0] + 320u));
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 320u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 332u));
    c.f[0] = ld32((c.r[17].w[0] + 328u));
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 328u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 304u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF99Cu); c.f[12] = fp::mul(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001EF99Cu) [[unlikely]] return; }
L_001EF99C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 10u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[17].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 306u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF9C0u); c.f[12] = fp::mul(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001EF9C0u) [[unlikely]] return; }
L_001EF9C0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 12u)));
    set32(c.r[6], c.r[29].w[0] + 80u);
    set32(c.r[7], c.r[29].w[0] + 64u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF9E0u); st16((c.r[17].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003C(c, 122u, depth + 1u); else { c.pc = 0x001F2030u; return; } if (c.pc != 0x001EF9E0u) [[unlikely]] return; }
L_001EF9E0:
    set32(c.r[6], c.r[29].w[0] + 64u);
    set32(c.r[7], c.r[29].w[0] + 80u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF9F4u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 176u, depth + 1u); else { c.pc = 0x001F2740u; return; } if (c.pc != 0x001EF9F4u) [[unlikely]] return; }
L_001EF9F4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001EFA94; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 12u)));
    set32(c.r[6], c.r[29].w[0] + 80u);
    set32(c.r[7], c.r[29].w[0] + 64u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[2], 0u - c.r[2].w[0]);
    st16((c.r[17].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 306u)));
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFA2Cu); st16((c.r[17].w[0] + 306u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003C(c, 122u, depth + 1u); else { c.pc = 0x001F2030u; return; } if (c.pc != 0x001EFA2Cu) [[unlikely]] return; }
L_001EFA2C:
    set32(c.r[6], c.r[29].w[0] + 64u);
    set32(c.r[7], c.r[29].w[0] + 80u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFA40u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 176u, depth + 1u); else { c.pc = 0x001F2740u; return; } if (c.pc != 0x001EFA40u) [[unlikely]] return; }
L_001EFA40:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[29].w[0] + 64u);  if (t) { goto L_001EFA70; } }
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 788u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[16].w[0] + 788u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 795u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 795u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001EFB4C; } }
    set32(c.r[3], c.r[29].w[0] + 64u);
    c.budget -= 1;
L_001EFA70:
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[17].w[0] + 16u), c.f[3]);
    st32((c.r[17].w[0] + 20u), c.f[2]);
    st32((c.r[17].w[0] + 24u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 28u), c.f[0]);  if (t) { goto L_001EFAF0; } }
L_001EFA94:
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[2] = c.r[3].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[3] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[17].w[0] + 24u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.budget -= 23;
L_001EFAF0:
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.f[2] = c.r[3].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[3] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[17].w[0] + 48u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 56u));
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[17].w[0] + 56u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.budget -= 23;
L_001EFB4C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001EFB70:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[6], c.r[3].w[0] - 28448u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 7);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);  if (t) { goto L_001EFBE0; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 316u), 0u);
    c.f[3] = ld32((c.r[4].w[0] + 16u));
    c.f[2] = ld32((c.r[4].w[0] + 20u));
    c.f[1] = ld32((c.r[4].w[0] + 24u));
    c.f[0] = ld32((c.r[4].w[0] + 28u));
    st32((c.r[4].w[0] + 288u), c.f[3]);
    st32((c.r[4].w[0] + 292u), c.f[2]);
    st32((c.r[4].w[0] + 296u), c.f[1]);
    st32((c.r[4].w[0] + 300u), c.f[0]);
    c.f[3] = ld32((c.r[4].w[0] + 48u));
    c.f[2] = ld32((c.r[4].w[0] + 52u));
    c.f[1] = ld32((c.r[4].w[0] + 56u));
    c.f[0] = ld32((c.r[4].w[0] + 60u));
    st32((c.r[4].w[0] + 272u), c.f[3]);
    st32((c.r[4].w[0] + 276u), c.f[2]);
    st32((c.r[4].w[0] + 280u), c.f[1]);
    st32((c.r[4].w[0] + 284u), c.f[0]);
    c.budget -= 19;
L_001EFBE0:
    c.f[1] = ld32((c.r[5].w[0] + 7740u));
    c.f[0] = ld32((c.r[4].w[0] + 316u));
    c.f[1] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 316u), c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 340u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001EFC28; } }
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 788u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[5].w[0] + 788u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 795u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    st8((c.r[5].w[0] + 795u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 340u));
    st32((c.r[4].w[0] + 316u), c.f[0]);
    c.budget -= 9;
L_001EFC28:
    c.f[3] = ld32((c.r[4].w[0] + 288u));
    c.f[2] = ld32((c.r[6].w[0] + 16u));
    c.f[1] = ld32((c.r[4].w[0] + 340u));
    c.f[0] = ld32((c.r[4].w[0] + 316u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.f[3] = ld32((c.r[4].w[0] + 292u));
    c.f[2] = ld32((c.r[6].w[0] + 20u));
    c.f[1] = ld32((c.r[4].w[0] + 340u));
    c.f[0] = ld32((c.r[4].w[0] + 316u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[4].w[0] + 20u), c.f[0]);
    c.f[3] = ld32((c.r[4].w[0] + 296u));
    c.f[2] = ld32((c.r[6].w[0] + 24u));
    c.f[1] = ld32((c.r[4].w[0] + 340u));
    c.f[0] = ld32((c.r[4].w[0] + 316u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[4].w[0] + 24u), c.f[0]);
    c.f[3] = ld32((c.r[4].w[0] + 272u));
    c.f[2] = ld32((c.r[6].w[0] + 48u));
    c.f[1] = ld32((c.r[4].w[0] + 340u));
    c.f[0] = ld32((c.r[4].w[0] + 316u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.f[3] = ld32((c.r[4].w[0] + 276u));
    c.f[2] = ld32((c.r[6].w[0] + 52u));
    c.f[1] = ld32((c.r[4].w[0] + 340u));
    c.f[0] = ld32((c.r[4].w[0] + 316u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[4].w[0] + 52u), c.f[0]);
    c.f[2] = ld32((c.r[6].w[0] + 56u));
    c.f[3] = ld32((c.r[4].w[0] + 280u));
    c.f[1] = ld32((c.r[4].w[0] + 340u));
    c.f[0] = ld32((c.r[4].w[0] + 316u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    c.budget -= 55;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 56u), c.f[0]);  c.pc = t; return; }
L_001EFD10:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    c.f[20] = ld32((c.r[1].w[0] - 21936u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 27184u);
    set32(c.r[6], 0u + 384u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.f[21] = ld32((c.r[1].w[0] - 21928u));
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFD70u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001EFD70u) [[unlikely]] return; }
L_001EFD70:
    set32(c.r[2], 0u + 4u);
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8384u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[1] = c.r[2].w[0];
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 758u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFDBCu);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001EFDBCu) [[unlikely]] return; }
L_001EFDBC:
    st8((c.r[19].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFDCCu); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 238u, depth + 1u); else { c.pc = 0x001F35A0u; return; } if (c.pc != 0x001EFDCCu) [[unlikely]] return; }
L_001EFDCC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[19].w[0] + 348u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 758u)));
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    set32(c.r[6], c.r[18].w[0] + 32u);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[2] = ld32((c.r[2].w[0] + 8u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[2].w[0] - 21936u);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 348u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 32u));
    st32((c.r[19].w[0] + 48u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 36u));
    c.f[0] = ld32((c.r[19].w[0] + 348u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFE3Cu); st32((c.r[19].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001EFE3Cu) [[unlikely]] return; }
L_001EFE3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[17], c.r[29].w[0] + 100u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFE5Cu); st32((c.r[17].w[0]), 0u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001EFE5Cu) [[unlikely]] return; }
L_001EFE5C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 260u)));
    c.r[16].d[0] = c.r[2].d[0] & 8191ull;
    c.r[2].d[0] = c.r[16].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] - 4608u);  goto L_001EFE80; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] - 3584u);  if (t) { goto L_001EFE80; } }
    set32(c.r[16], c.r[16].w[0] - 4608u);
    c.budget -= 1;
L_001EFE80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFE88u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001EFE88u) [[unlikely]] return; }
L_001EFE88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFE90u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001EFE90u) [[unlikely]] return; }
L_001EFE90:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFE9Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001EFE9Cu) [[unlikely]] return; }
L_001EFE9C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFEACu); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001EFEACu) [[unlikely]] return; }
L_001EFEAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43EB0000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    c.f[0] = fp::add(c.f[2], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[20], c.f[2]);  goto L_001EFED8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 112u), c.f[0]);  if (t) { goto L_001EFEEC; } }
    c.f[0] = fp::sub(c.f[20], c.f[2]);
    c.budget -= 1;
L_001EFED8:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[29].w[0] + 120u);  if (t) { goto L_001EFEF0; } }
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.budget -= 1;
L_001EFEEC:
    set32(c.r[3], c.r[29].w[0] + 120u);
    c.budget -= 1;
L_001EFEF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43EB0000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[1] = fp::add(c.f[0], c.f[21]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[21], c.f[0]);  goto L_001EFF1C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[1]);  if (t) { goto L_001EFF30; } }
    c.f[0] = fp::sub(c.f[21], c.f[0]);
    c.budget -= 1;
L_001EFF1C:
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[29].w[0] + 112u);  if (t) { goto L_001EFF34; } }
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 1;
L_001EFF30:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_001EFF34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFF3Cu);  if (depth < kMaxDepth) unit_0045(c, 192u, depth + 1u); else { c.pc = 0x00217510u; return; } if (c.pc != 0x001EFF3Cu) [[unlikely]] return; }
L_001EFF3C:
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    set32(c.r[16], c.r[29].w[0] + 116u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[12] = fp::add(c.f[1], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFF54u); st32((c.r[16].w[0]), c.f[12]);  if (depth < kMaxDepth) unit_0075(c, 273u, depth + 1u); else { c.pc = 0x002D7D90u; return; } if (c.pc != 0x001EFF54u) [[unlikely]] return; }
L_001EFF54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EFFF4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[2].w[0] - 21936u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFF70u); set32(c.r[6], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x001EFF70u) [[unlikely]] return; }
L_001EFF70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFF8Cu); st32((c.r[17].w[0]), 0u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001EFF8Cu) [[unlikely]] return; }
L_001EFF8C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 260u)));
    set32(c.r[2], c.r[2].w[0] + 4096u);
    c.r[17].d[0] = c.r[2].d[0] & 8191ull;
    c.r[2].d[0] = c.r[17].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] - 4608u);  goto L_001EFFB4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 3584u);  if (t) { goto L_001EFFB4; } }
    set32(c.r[17], c.r[17].w[0] - 4608u);
    c.budget -= 1;
L_001EFFB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFFBCu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001EFFBCu) [[unlikely]] return; }
L_001EFFBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFFC4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001EFFC4u) [[unlikely]] return; }
L_001EFFC4:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFFD0u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001EFFD0u) [[unlikely]] return; }
L_001EFFD0:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFFE0u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x001EFFE0u) [[unlikely]] return; }
L_001EFFE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFFE8u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0045(c, 192u, depth + 1u); else { c.pc = 0x00217510u; return; } if (c.pc != 0x001EFFE8u) [[unlikely]] return; }
L_001EFFE8:
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 3;
L_001EFFF4:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 9u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 256u)));
    c.budget -= 3;
    [[clang::musttail]] return unit_003C(c, 1u, depth);
}

}
