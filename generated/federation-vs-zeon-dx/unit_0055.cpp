#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0055[4096] = {
    1, 0, 2, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 6, 0, 7, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0,
    13, 0, 14, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 19, 0, 0, 0, 0, 20,
    0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0,
    0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0,
    0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 65, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0,
    0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109,
    0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0,
    0, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0,
    0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 121,
    0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0,
    126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0,
    0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0,
    133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 143, 0, 144, 0, 0, 0, 145, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 153, 0, 154, 0, 0,
    0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 157, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 161,
    0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    166, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171,
    0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0,
    0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 184,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0,
    0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 204, 0, 205, 0, 206, 0, 207, 0, 208, 0, 209,
    0, 210, 0, 211, 0, 212, 0, 213, 0, 214, 0, 215, 0, 216, 0, 217, 0, 218, 0, 219, 0, 220, 0, 221, 0, 222, 0, 223, 0, 224, 0, 225,
    0, 226, 0, 227, 0, 228, 0, 229, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0,
    0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 0,
    0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 247,
    0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0,
    0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0055(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00254000;
    case 2u: goto L_00254008;
    case 3u: goto L_0025400C;
    case 4u: goto L_002540AC;
    case 5u: goto L_002540D0;
    case 6u: goto L_0025410C;
    case 7u: goto L_00254114;
    case 8u: goto L_0025411C;
    case 9u: goto L_00254168;
    case 10u: goto L_002541B8;
    case 11u: goto L_00254200;
    case 12u: goto L_00254270;
    case 13u: goto L_00254280;
    case 14u: goto L_00254288;
    case 15u: goto L_0025429C;
    case 16u: goto L_002542A4;
    case 17u: goto L_002542D0;
    case 18u: goto L_002542E0;
    case 19u: goto L_002542E8;
    case 20u: goto L_002542FC;
    case 21u: goto L_00254304;
    case 22u: goto L_00254320;
    case 23u: goto L_00254454;
    case 24u: goto L_00254480;
    case 25u: goto L_002544BC;
    case 26u: goto L_002544D8;
    case 27u: goto L_0025455C;
    case 28u: goto L_00254568;
    case 29u: goto L_002545C4;
    case 30u: goto L_002545D0;
    case 31u: goto L_00254638;
    case 32u: goto L_00254644;
    case 33u: goto L_002546A0;
    case 34u: goto L_002546AC;
    case 35u: goto L_00254710;
    case 36u: goto L_00254778;
    case 37u: goto L_00254790;
    case 38u: goto L_00254810;
    case 39u: goto L_0025481C;
    case 40u: goto L_00254848;
    case 41u: goto L_00254868;
    case 42u: goto L_002548B8;
    case 43u: goto L_002548EC;
    case 44u: goto L_002548F8;
    case 45u: goto L_00254A08;
    case 46u: goto L_00254A10;
    case 47u: goto L_00254A60;
    case 48u: goto L_00254ABC;
    case 49u: goto L_00254AC8;
    case 50u: goto L_00254AF4;
    case 51u: goto L_00254B10;
    case 52u: goto L_00254D24;
    case 53u: goto L_00254D2C;
    case 54u: goto L_00254D80;
    case 55u: goto L_00254DC4;
    case 56u: goto L_00254DDC;
    case 57u: goto L_00254E5C;
    case 58u: goto L_00254E68;
    case 59u: goto L_00254E94;
    case 60u: goto L_00254EB4;
    case 61u: goto L_00254F04;
    case 62u: goto L_00254F3C;
    case 63u: goto L_00254F48;
    case 64u: goto L_00255058;
    case 65u: goto L_00255060;
    case 66u: goto L_002550B0;
    case 67u: goto L_0025510C;
    case 68u: goto L_00255118;
    case 69u: goto L_00255144;
    case 70u: goto L_00255160;
    case 71u: goto L_002552B0;
    case 72u: goto L_002552B8;
    case 73u: goto L_00255300;
    case 74u: goto L_0025532C;
    case 75u: goto L_00255344;
    case 76u: goto L_0025536C;
    case 77u: goto L_00255410;
    case 78u: goto L_00255430;
    case 79u: goto L_0025545C;
    case 80u: goto L_00255474;
    case 81u: goto L_0025549C;
    case 82u: goto L_00255538;
    case 83u: goto L_00255570;
    case 84u: goto L_002555B0;
    case 85u: goto L_00255680;
    case 86u: goto L_002556EC;
    case 87u: goto L_00255708;
    case 88u: goto L_0025577C;
    case 89u: goto L_002557B0;
    case 90u: goto L_002557CC;
    case 91u: goto L_002557F0;
    case 92u: goto L_00255824;
    case 93u: goto L_00255838;
    case 94u: goto L_00255850;
    case 95u: goto L_00255894;
    case 96u: goto L_002558B8;
    case 97u: goto L_002558D4;
    case 98u: goto L_00255910;
    case 99u: goto L_0025592C;
    case 100u: goto L_00255950;
    case 101u: goto L_00255964;
    case 102u: goto L_002559A4;
    case 103u: goto L_002559C4;
    case 104u: goto L_002559E0;
    case 105u: goto L_002559F8;
    case 106u: goto L_00255A2C;
    case 107u: goto L_00255A40;
    case 108u: goto L_00255A60;
    case 109u: goto L_00255A7C;
    case 110u: goto L_00255AA0;
    case 111u: goto L_00255AD4;
    case 112u: goto L_00255AE8;
    case 113u: goto L_00255B08;
    case 114u: goto L_00255B24;
    case 115u: goto L_00255B48;
    case 116u: goto L_00255B64;
    case 117u: goto L_00255B88;
    case 118u: goto L_00255B9C;
    case 119u: goto L_00255BBC;
    case 120u: goto L_00255BD8;
    case 121u: goto L_00255BFC;
    case 122u: goto L_00255C14;
    case 123u: goto L_00255C3C;
    case 124u: goto L_00255CB0;
    case 125u: goto L_00255CE4;
    case 126u: goto L_00255D00;
    case 127u: goto L_00255D3C;
    case 128u: goto L_00255D70;
    case 129u: goto L_00255D84;
    case 130u: goto L_00255DA4;
    case 131u: goto L_00255DC0;
    case 132u: goto L_00255DE4;
    case 133u: goto L_00255E00;
    case 134u: goto L_00255E1C;
    case 135u: goto L_00255E50;
    case 136u: goto L_00255E94;
    case 137u: goto L_00255EB4;
    case 138u: goto L_00255ED0;
    case 139u: goto L_00255F20;
    case 140u: goto L_00255F84;
    case 141u: goto L_00255F98;
    case 142u: goto L_00255FD8;
    case 143u: goto L_00255FE0;
    case 144u: goto L_00255FE8;
    case 145u: goto L_00255FF8;
    case 146u: goto L_00256020;
    case 147u: goto L_00256028;
    case 148u: goto L_00256030;
    case 149u: goto L_00256048;
    case 150u: goto L_002560B0;
    case 151u: goto L_002560BC;
    case 152u: goto L_002560E4;
    case 153u: goto L_002560EC;
    case 154u: goto L_002560F4;
    case 155u: goto L_00256104;
    case 156u: goto L_0025612C;
    case 157u: goto L_00256134;
    case 158u: goto L_0025613C;
    case 159u: goto L_0025614C;
    case 160u: goto L_00256174;
    case 161u: goto L_0025617C;
    case 162u: goto L_00256184;
    case 163u: goto L_00256194;
    case 164u: goto L_002561CC;
    case 165u: goto L_002561D8;
    case 166u: goto L_00256200;
    case 167u: goto L_00256208;
    case 168u: goto L_00256210;
    case 169u: goto L_00256248;
    case 170u: goto L_00256254;
    case 171u: goto L_0025627C;
    case 172u: goto L_00256284;
    case 173u: goto L_00256294;
    case 174u: goto L_002562B0;
    case 175u: goto L_0025641C;
    case 176u: goto L_00256428;
    case 177u: goto L_00256474;
    case 178u: goto L_002564DC;
    case 179u: goto L_002564E8;
    case 180u: goto L_00256504;
    case 181u: goto L_00256558;
    case 182u: goto L_00256584;
    case 183u: goto L_002565F0;
    case 184u: goto L_002565FC;
    case 185u: goto L_00256648;
    case 186u: goto L_002566B0;
    case 187u: goto L_002566BC;
    case 188u: goto L_002566F0;
    case 189u: goto L_00256708;
    case 190u: goto L_00256734;
    case 191u: goto L_00256768;
    case 192u: goto L_00256774;
    case 193u: goto L_002567A0;
    case 194u: goto L_0025695C;
    case 195u: goto L_00256994;
    case 196u: goto L_002569A0;
    case 197u: goto L_002569C8;
    case 198u: goto L_00256A18;
    case 199u: goto L_00256A24;
    case 200u: goto L_00256A4C;
    case 201u: goto L_00256D40;
    case 202u: goto L_00256D70;
    case 203u: goto L_00256DCC;
    case 204u: goto L_00256DD4;
    case 205u: goto L_00256DDC;
    case 206u: goto L_00256DE4;
    case 207u: goto L_00256DEC;
    case 208u: goto L_00256DF4;
    case 209u: goto L_00256DFC;
    case 210u: goto L_00256E04;
    case 211u: goto L_00256E0C;
    case 212u: goto L_00256E14;
    case 213u: goto L_00256E1C;
    case 214u: goto L_00256E24;
    case 215u: goto L_00256E2C;
    case 216u: goto L_00256E34;
    case 217u: goto L_00256E3C;
    case 218u: goto L_00256E44;
    case 219u: goto L_00256E4C;
    case 220u: goto L_00256E54;
    case 221u: goto L_00256E5C;
    case 222u: goto L_00256E64;
    case 223u: goto L_00256E6C;
    case 224u: goto L_00256E74;
    case 225u: goto L_00256E7C;
    case 226u: goto L_00256E84;
    case 227u: goto L_00256E8C;
    case 228u: goto L_00256E94;
    case 229u: goto L_00256E9C;
    case 230u: goto L_00256EA4;
    case 231u: goto L_00256EC0;
    case 232u: goto L_00256F74;
    case 233u: goto L_00256F98;
    case 234u: goto L_002570A0;
    case 235u: goto L_002570E4;
    case 236u: goto L_002570F0;
    case 237u: goto L_00257104;
    case 238u: goto L_00257110;
    case 239u: goto L_002571A4;
    case 240u: goto L_00257200;
    case 241u: goto L_0025724C;
    case 242u: goto L_00257284;
    case 243u: goto L_0025729C;
    case 244u: goto L_002572B0;
    case 245u: goto L_00257310;
    case 246u: goto L_00257368;
    case 247u: goto L_0025737C;
    case 248u: goto L_00257394;
    case 249u: goto L_002573AC;
    case 250u: goto L_002573C4;
    case 251u: goto L_002573D8;
    case 252u: goto L_00257438;
    case 253u: goto L_0025754C;
    case 254u: goto L_002575F4;
    case 255u: goto L_00257630;
    case 256u: goto L_00257640;
    case 257u: goto L_002576A8;
    case 258u: goto L_002576E0;
    case 259u: goto L_002576F4;
    case 260u: goto L_00257708;
    case 261u: goto L_00257738;
    case 262u: goto L_00257830;
    case 263u: goto L_0025788C;
    case 264u: goto L_00257930;
    case 265u: goto L_00257A68;
    case 266u: goto L_00257B9C;
    case 267u: goto L_00257BF8;
    case 268u: goto L_00257C34;
    case 269u: goto L_00257C7C;
    case 270u: goto L_00257D64;
    case 271u: goto L_00257E04;
    case 272u: goto L_00257E20;
    case 273u: goto L_00257EA0;
    case 274u: goto L_00257EC8;
    case 275u: goto L_00257ED4;
    case 276u: goto L_00257EFC;
    case 277u: goto L_00257F34;
    case 278u: goto L_00257F80;
    case 279u: goto L_00257FD8;
    default: bad_entry(c, 0x00254000u); return;
    }
L_00254000:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0025411C; } }
L_00254008:
    set32(c.r[3], 0u + 19u);
    c.budget -= 1;
L_0025400C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 20u);  if (t) { goto L_00254028; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8387u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00254040; } }
    set32(c.r[3], 0u + 20u);
    c.budget -= 1;
L_00254028:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00254080; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8387u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00254080; } }
L_00254040:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_00254050; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));  if (t) { goto L_00254120; } }
L_00254050:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1592u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_00254078; } }
    set32(c.r[3], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_00254070; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0025411C; } }
L_00254070:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025411C; } }
L_00254078:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025411C; } }
L_00254080:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_00254090; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025411C; } }
L_00254090:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1592u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], 0u + 2u);  if (t) { goto L_002540A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0025411C; } }
L_002540A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025411C; } }
L_002540AC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1580u)));
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[17].w[0] + 320u);  if (t) { goto L_002540F8; } }
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002540F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002540D0u); c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1848u)));  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002540D0u) [[unlikely]] return; }
L_002540D0:
    set32(c.r[3], c.r[16].w[0] << 4);
    c.r[4].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 17216u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[16], 0u + 1u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; if (c.r[3].d[0] != 0) c.r[16].d[0] = 0ull;  if (t) { goto L_0025411C; } }
L_002540F8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1592u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], 0u + 2u);  if (t) { goto L_0025411C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025410Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0054(c, 193u, depth + 1u); else { c.pc = 0x002537F0u; return; } if (c.pc != 0x0025410Cu) [[unlikely]] return; }
L_0025410C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254114u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 69u, depth + 1u); else { c.pc = 0x0024D140u; return; } if (c.pc != 0x00254114u) [[unlikely]] return; }
L_00254114:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_00254308; } }
L_0025411C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    c.budget -= 1;
L_00254120:
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 9u);  if (t) { goto L_002541EC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 8u);  if (t) { goto L_002541EC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 7u);  if (t) { goto L_002541A4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 6u);  if (t) { goto L_002541A4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00254154; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[16].d[0] << 56;  if (t) { goto L_00254234; } }
L_00254154:
    set32(c.r[5], ld32((c.r[17].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00254230; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254168u);  if (depth < kMaxDepth) unit_0053(c, 47u, depth + 1u); else { c.pc = 0x0024CEB0u; return; } if (c.pc != 0x00254168u) [[unlikely]] return; }
L_00254168:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42340000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[16].d[0] << 56;  if (t) { goto L_0025418C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_00254230; } }
L_0025418C:
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00254230; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 2u);  if (t) { goto L_00254230; } }
L_002541A4:
    set32(c.r[5], ld32((c.r[17].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00254230; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002541B8u);  if (depth < kMaxDepth) unit_0053(c, 47u, depth + 1u); else { c.pc = 0x0024CEB0u; return; } if (c.pc != 0x002541B8u) [[unlikely]] return; }
L_002541B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[16].d[0] << 56;  if (t) { goto L_00254230; } }
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00254230; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 2u);  if (t) { goto L_00254230; } }
L_002541EC:
    set32(c.r[5], ld32((c.r[17].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00254230; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254200u);  if (depth < kMaxDepth) unit_0053(c, 47u, depth + 1u); else { c.pc = 0x0024CEB0u; return; } if (c.pc != 0x00254200u) [[unlikely]] return; }
L_00254200:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42340000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[16].d[0] << 56;  if (t) { goto L_00254230; } }
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00254230; } }
    set32(c.r[16], 0u + 2u);
    c.budget -= 1;
L_00254230:
    c.r[5].d[0] = c.r[16].d[0] << 56;
    c.budget -= 1;
L_00254234:
    set32(c.r[3], 0u + 2u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_00254304; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_002542AC; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0025425C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00254304; } }
L_0025425C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1724u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00254294; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254270u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 96u, depth + 1u); else { c.pc = 0x0024D540u; return; } if (c.pc != 0x00254270u) [[unlikely]] return; }
L_00254270:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00254290; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254280u);  if (depth < kMaxDepth) unit_0054(c, 191u, depth + 1u); else { c.pc = 0x002537D0u; return; } if (c.pc != 0x00254280u) [[unlikely]] return; }
L_00254280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254288u);  if (depth < kMaxDepth) unit_0053(c, 75u, depth + 1u); else { c.pc = 0x0024D220u; return; } if (c.pc != 0x00254288u) [[unlikely]] return; }
L_00254288:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00254304; } }
L_00254290:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00254294:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025429Cu);  if (depth < kMaxDepth) unit_0054(c, 199u, depth + 1u); else { c.pc = 0x00253970u; return; } if (c.pc != 0x0025429Cu) [[unlikely]] return; }
L_0025429C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002542A4u);  if (depth < kMaxDepth) unit_0053(c, 69u, depth + 1u); else { c.pc = 0x0024D140u; return; } if (c.pc != 0x002542A4u) [[unlikely]] return; }
L_002542A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00254304; } }
L_002542AC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { mmi::paddub(c.r[4], c.r[17], c.r[0]);  goto L_002542F4; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1724u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002542F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002542D0u);  if (depth < kMaxDepth) unit_0053(c, 96u, depth + 1u); else { c.pc = 0x0024D540u; return; } if (c.pc != 0x002542D0u) [[unlikely]] return; }
L_002542D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002542F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002542E0u);  if (depth < kMaxDepth) unit_0054(c, 192u, depth + 1u); else { c.pc = 0x002537E0u; return; } if (c.pc != 0x002542E0u) [[unlikely]] return; }
L_002542E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002542E8u);  if (depth < kMaxDepth) unit_0053(c, 75u, depth + 1u); else { c.pc = 0x0024D220u; return; } if (c.pc != 0x002542E8u) [[unlikely]] return; }
L_002542E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00254304; } }
L_002542F0:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_002542F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002542FCu);  if (depth < kMaxDepth) unit_0054(c, 200u, depth + 1u); else { c.pc = 0x00253980u; return; } if (c.pc != 0x002542FCu) [[unlikely]] return; }
L_002542FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254304u);  if (depth < kMaxDepth) unit_0053(c, 69u, depth + 1u); else { c.pc = 0x0024D140u; return; } if (c.pc != 0x00254304u) [[unlikely]] return; }
L_00254304:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00254308:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00254320:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[17], c.r[29].w[0] + 116u);
    set32(c.r[18], c.r[29].w[0] + 120u);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 36u));
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    st32((c.r[18].w[0]), c.f[0]);
    c.f[2] = ld32((c.r[5].w[0] + 32u));
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 28;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[19], c.r[5], c.r[0]);  if (t) { goto L_002543B8; } }
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002543BC; } }
L_002543B8:
    c.f[20] = 0u;
    c.budget -= 1;
L_002543BC:
    c.f[2] = ld32((c.r[19].w[0] + 36u));
    c.f[0] = ld32((c.r[20].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00254408; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[2] = fp::add(c.f[0], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 21u, c.f[1], c.f[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025440C; } }
L_00254408:
    c.f[21] = 0u;
    c.budget -= 1;
L_0025440C:
    c.f[2] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[20].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0025444C; } }
    c.f[1] = ld32((c.r[18].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 22u, c.f[1], c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00254450; } }
L_0025444C:
    c.f[22] = 0u;
    c.budget -= 1;
L_00254450:
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 1;
L_00254454:
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[0] = fp::add(c.f[0], c.f[20]);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[21]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[22]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254480u); st32((c.r[18].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0045(c, 192u, depth + 1u); else { c.pc = 0x00217510u; return; } if (c.pc != 0x00254480u) [[unlikely]] return; }
L_00254480:
    c.f[1] = ld32((c.r[17].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0025449C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002546DC; } }
L_0025449C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 112u);  if (t) { goto L_002544D0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 531u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002544BCu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0077(c, 197u, depth + 1u); else { c.pc = 0x002DE3C0u; return; } if (c.pc != 0x002544BCu) [[unlikely]] return; }
L_002544BC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002544EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002546DC; } }
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_002544D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002544D8u);  if (depth < kMaxDepth) unit_0077(c, 192u, depth + 1u); else { c.pc = 0x002DE280u; return; } if (c.pc != 0x002544D8u) [[unlikely]] return; }
L_002544D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002544E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002546DC; } }
L_002544E8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002544EC:
    c.r[2].d[0] = c.r[16].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00254454u | kUnwind; return; } goto L_00254454; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 256u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002546D0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 588u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002546D0; } }
    c.f[0] = ld32((c.r[20].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44750000u);
    c.r[2].d[0] = c.r[2].d[0] | 49152ull;
    c.f[2] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42830000u);
    c.f[1] = ld32((c.r[20].w[0] + 36u));
    c.f[2] = fp::sub(c.f[0], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44630000u);
    c.f[0] = ld32((c.r[20].w[0] + 40u));
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.f[2] = c.r[2].w[0];
    c.f[3] = c.r[3].w[0];
    c.f[20] = fp::sub(c.f[1], c.f[3]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025455Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0025455Cu) [[unlikely]] return; }
L_0025455C:
    c.facc = fp::mul(c.f[20], c.f[20]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254568u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00254568u) [[unlikely]] return; }
L_00254568:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43790000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002545F4; } }
    c.f[2] = ld32((c.r[19].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44750000u);
    c.r[2].d[0] = c.r[2].d[0] | 49152ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44630000u);
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[20] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002545C4u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002545C4u) [[unlikely]] return; }
L_002545C4:
    c.facc = fp::mul(c.f[20], c.f[20]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002545D0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002545D0u) [[unlikely]] return; }
L_002545D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x435D0000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002546D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002546DC; } }
L_002545F4:
    c.f[1] = ld32((c.r[20].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44750000u);
    c.r[2].d[0] = c.r[2].d[0] | 49152ull;
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[3] = ld32((c.r[20].w[0] + 36u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44630000u);
    c.f[1] = ld32((c.r[20].w[0] + 40u));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[2] = c.r[3].w[0];
    c.f[20] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254638u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00254638u) [[unlikely]] return; }
L_00254638:
    c.facc = fp::mul(c.f[20], c.f[20]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254644u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00254644u) [[unlikely]] return; }
L_00254644:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x435D0000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002546D0; } }
    c.f[2] = ld32((c.r[19].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44750000u);
    c.r[2].d[0] = c.r[2].d[0] | 49152ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42830000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44630000u);
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[20] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002546A0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002546A0u) [[unlikely]] return; }
L_002546A0:
    c.facc = fp::mul(c.f[20], c.f[20]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002546ACu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002546ACu) [[unlikely]] return; }
L_002546AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43790000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002546D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002546DC; } }
L_002546D0:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 530u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_002546DC:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00254710:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[20], c.r[4], c.r[0]);  if (t) { goto L_0025475C; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 784u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00254764; } }
L_0025475C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00254D40; } }
L_00254764:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 1832u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_00254D38; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254778u);  if (depth < kMaxDepth) unit_0053(c, 101u, depth + 1u); else { c.pc = 0x0024D680u; return; } if (c.pc != 0x00254778u) [[unlikely]] return; }
L_00254778:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 846u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00254A48; } }
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[19], c.r[0], c.r[0]);  if (t) { goto L_00254A20; } }
L_00254790:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[2], c.r[2].w[0] - 5920u);
    set32(c.r[3], c.r[4].w[0] << 10);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[16].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 4u);  goto L_00254A1C; }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00254A18; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 532u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00254A18; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[20].d[0];  if (t) { goto L_00254A18; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[20].d[0];  if (t) { goto L_00254A18; } }
    c.f[5] = ld32((c.r[16].w[0] + 80u));
    c.f[4] = ld32((c.r[20].w[0] + 32u));
    c.f[1] = ld32((c.r[16].w[0] + 88u));
    c.f[0] = ld32((c.r[20].w[0] + 40u));
    c.f[3] = ld32((c.r[16].w[0] + 84u));
    c.f[2] = ld32((c.r[20].w[0] + 36u));
    c.f[21] = fp::sub(c.f[5], c.f[4]);
    c.f[22] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[21], c.f[21]);
    c.f[20] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254810u); c.f[12] = fp::add(c.facc, fp::mul(c.f[22], c.f[22]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00254810u) [[unlikely]] return; }
L_00254810:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025481Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0025481Cu) [[unlikely]] return; }
L_0025481C:
    c.f[20] = c.f[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00254A18; } }
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254848u); c.f[13] = c.f[22];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00254848u) [[unlikely]] return; }
L_00254848:
    mmi::paddub(c.r[18], c.r[2], c.r[0]);
    c.r[2].d[0] = 0ull | 65535ull;
    c.r[18].d[0] = c.r[18].d[0] & c.r[2].d[0];
    c.r[2].d[0] = ld16((c.r[20].w[0] + 84u));
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    set32(c.r[21], c.r[18].w[0] - c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254868u); c.r[21].d[0] = c.r[21].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0053(c, 98u, depth + 1u); else { c.pc = 0x0024D5E0u; return; } if (c.pc != 0x00254868u) [[unlikely]] return; }
L_00254868:
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[21], c.r[21].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[21].d[0] & 65535ull;
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_00254A18; } }
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00254A18; } }
    c.f[5] = ld32((c.r[16].w[0] + 96u));
    c.f[4] = ld32((c.r[20].w[0] + 32u));
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = ld32((c.r[20].w[0] + 40u));
    c.f[3] = ld32((c.r[16].w[0] + 100u));
    c.f[2] = ld32((c.r[20].w[0] + 36u));
    c.f[21] = fp::sub(c.f[5], c.f[4]);
    c.f[23] = fp::sub(c.f[1], c.f[0]);
    c.f[22] = fp::sub(c.f[3], c.f[2]);
    c.f[12] = c.f[21];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002548B8u); c.f[13] = c.f[23];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002548B8u) [[unlikely]] return; }
L_002548B8:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[16].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] != 0ull) { c.facc = fp::mul(c.f[21], c.f[21]);  goto L_002548E4; }
    c.r[2].d[0] = 0ull | 65472ull;
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00254A18; } }
    c.facc = fp::mul(c.f[21], c.f[21]);
    c.budget -= 1;
L_002548E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002548ECu); c.f[12] = fp::add(c.facc, fp::mul(c.f[23], c.f[23]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002548ECu) [[unlikely]] return; }
L_002548EC:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002548F8u); c.f[12] = fp::add(c.facc, fp::mul(c.f[22], c.f[22]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002548F8u) [[unlikely]] return; }
L_002548F8:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00254A18; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 1296u)));
    set32(c.r[18], c.r[18].w[0] - c.r[2].w[0]);
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    c.r[1].d[0] = c.r[3].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = 0ull | 32769ull;  if (t) { goto L_00254934; } }
    c.r[2].d[0] = 0ull | 57344ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].sd[0] < 24576ll ? 1ull : 0ull;  if (t) { goto L_0025495C; } }
    c.r[1].d[0] = 0ull | 32769ull;
    c.budget -= 1;
L_00254934:
    c.r[1].d[0] = c.r[16].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { goto L_00254950; } }
    set32(c.r[2], 0u + 2048u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00254A00; } }
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_00254950:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00254A00; } }
    c.r[2].d[0] = c.r[3].sd[0] < 24576ll ? 1ull : 0ull;
    c.budget -= 1;
L_0025495C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 8193ll ? 1ull : 0ull;  if (t) { goto L_002549A0; } }
    c.r[1].d[0] = 0ull | 40961ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0025499C; } }
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[16].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 2048u);  if (t) { goto L_00254994; } }
    set32(c.r[2], 0u + 1024u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00254A00; } }
    set32(c.r[2], 0u + 2048u);
    c.budget -= 1;
L_00254994:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00254A00; } }
L_0025499C:
    c.r[1].d[0] = c.r[3].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 1;
L_002549A0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = 0ull | 32769ull;  if (t) { goto L_002549E0; } }
    c.r[1].d[0] = c.r[3].sd[0] < 24576ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002549DC; } }
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[16].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 8192u);  if (t) { goto L_002549D4; } }
    set32(c.r[2], 0u + 4096u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00254A00; } }
    set32(c.r[2], 0u + 8192u);
    c.budget -= 1;
L_002549D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00254A00; } }
L_002549DC:
    c.r[1].d[0] = 0ull | 32769ull;
    c.budget -= 1;
L_002549E0:
    c.r[1].d[0] = c.r[16].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 4096u);  if (t) { goto L_002549FC; } }
    set32(c.r[2], 0u + 8192u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00254A00; } }
    set32(c.r[2], 0u + 4096u);
    c.budget -= 1;
L_002549FC:
    st16((c.r[20].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00254A00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254A08u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0054(c, 202u, depth + 1u); else { c.pc = 0x002539A0u; return; } if (c.pc != 0x00254A08u) [[unlikely]] return; }
L_00254A08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254A10u);  if (depth < kMaxDepth) unit_0053(c, 69u, depth + 1u); else { c.pc = 0x0024D140u; return; } if (c.pc != 0x00254A10u) [[unlikely]] return; }
L_00254A10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00254D40; } }
L_00254A18:
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.budget -= 1;
L_00254A1C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00254A20:
    set32(c.r[3], ld32((c.r[28].w[0] - 26476u)));
    set32(c.r[2], c.r[28].w[0] - 26440u);
    c.r[4].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00254790u | kUnwind; return; } goto L_00254790; } }
    c.budget -= 1;
L_00254A48:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 846u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { mmi::paddub(c.r[2], c.r[0], c.r[0]);  goto L_00254D40; }
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.budget -= 3;
L_00254A60:
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] << 5);  if (t) { goto L_00254A84; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] >> 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00254A60u | kUnwind; return; } goto L_00254A60; } }
    set32(c.r[2], c.r[5].w[0] << 5);
    c.budget -= 1;
L_00254A84:
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.f[2] = ld32((c.r[20].w[0] + 32u));
    set32(c.r[3], c.r[2].w[0] << 8);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[2], c.r[2].w[0] + 26144u);
    c.f[0] = ld32((c.r[20].w[0] + 40u));
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[21] = fp::sub(c.f[3], c.f[2]);
    c.f[22] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[21], c.f[21]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254ABCu); c.f[12] = fp::add(c.facc, fp::mul(c.f[22], c.f[22]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00254ABCu) [[unlikely]] return; }
L_00254ABC:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254AC8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 38u, depth + 1u); else { c.pc = 0x0024CAD0u; return; } if (c.pc != 0x00254AC8u) [[unlikely]] return; }
L_00254AC8:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00254D3C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00254D3C; } }
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254AF4u); c.f[13] = c.f[22];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00254AF4u) [[unlikely]] return; }
L_00254AF4:
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.r[2].d[0] = 0ull | 65535ull;
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.r[2].d[0] = ld16((c.r[20].w[0] + 84u));
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254B10u); set32(c.r[17], c.r[16].w[0] - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0053(c, 98u, depth + 1u); else { c.pc = 0x0024D5E0u; return; } if (c.pc != 0x00254B10u) [[unlikely]] return; }
L_00254B10:
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[17], c.r[17].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_00254D3C; } }
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00254D3C; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 1296u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    set32(c.r[16], c.r[16].w[0] - c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st16((c.r[20].w[0] + 1830u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00254C70; } }
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0; c.r[2].d[0] = c.r[3].sd[0] < 20480ll ? 1ull : 0ull;  if (t) { goto L_00254B6C; } }
    c.r[2].d[0] = c.r[3].sd[0] < 12288ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00254B84; } }
    c.r[2].d[0] = c.r[3].sd[0] < 20480ll ? 1ull : 0ull;
    c.budget -= 1;
L_00254B6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull | 53248ull;  if (t) { goto L_00254B98; } }
    c.r[1].d[0] = 0ull | 32768ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00254B94; } }
L_00254B84:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 1830u)));
    c.r[2].d[0] = c.r[2].d[0] | 1024ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00254BE0; } }
L_00254B94:
    c.r[2].d[0] = 0ull | 53248ull;
    c.budget -= 1;
L_00254B98:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull | 32768ull;  if (t) { goto L_00254BB8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00254BD4; } }
    c.r[2].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_00254BB8:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].sd[0] < 4096ll ? 1ull : 0ull;  if (t) { goto L_00254BE4; } }
    c.r[1].d[0] = 0ull | 45056ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00254BE0; } }
L_00254BD4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 1830u)));
    c.r[2].d[0] = c.r[2].d[0] | 2048ull;
    st16((c.r[20].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00254BE0:
    c.r[2].d[0] = c.r[3].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 1;
L_00254BE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull | 49152ull;  if (t) { goto L_00254BFC; } }
    c.r[2].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00254C18; } }
    c.r[2].d[0] = 0ull | 49152ull;
    c.budget -= 1;
L_00254BFC:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;  if (t) { goto L_00254C2C; } }
    c.r[1].d[0] = 0ull | 61440ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00254C28; } }
L_00254C18:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 1830u)));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00254D18; } }
L_00254C28:
    c.r[2].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 1;
L_00254C2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull | 36864ull;  if (t) { goto L_00254C44; } }
    c.r[2].d[0] = c.r[3].sd[0] < 28672ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00254C60; } }
    c.r[2].d[0] = 0ull | 36864ull;
    c.budget -= 1;
L_00254C44:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (t) { goto L_00254D1C; } }
    c.r[1].d[0] = 0ull | 49152ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00254D18; } }
L_00254C60:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 1830u)));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00254D18; } }
L_00254C70:
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0; c.r[2].d[0] = 0ull | 57344ull;  if (t) { goto L_00254C8C; } }
    c.r[1].d[0] = c.r[3].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00254CA8; } }
    c.r[2].d[0] = 0ull | 57344ull;
    c.budget -= 1;
L_00254C8C:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].sd[0] < 24576ll ? 1ull : 0ull;  if (t) { goto L_00254CBC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00254CB8; } }
L_00254CA8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 1830u)));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00254D18; } }
L_00254CB8:
    c.r[2].d[0] = c.r[3].sd[0] < 24576ll ? 1ull : 0ull;
    c.budget -= 1;
L_00254CBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 8193ll ? 1ull : 0ull;  if (t) { goto L_00254CE8; } }
    c.r[1].d[0] = 0ull | 40961ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00254CE4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 1830u)));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00254D18; } }
L_00254CE4:
    c.r[1].d[0] = c.r[3].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 1;
L_00254CE8:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00254D0C; } }
    c.r[1].d[0] = c.r[3].sd[0] < 24576ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00254D0C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 1830u)));
    c.r[2].d[0] = c.r[2].d[0] | 1024ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00254D18; } }
L_00254D0C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 1830u)));
    c.r[2].d[0] = c.r[2].d[0] | 2048ull;
    st16((c.r[20].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00254D18:
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 1;
L_00254D1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254D24u);  if (depth < kMaxDepth) unit_0054(c, 202u, depth + 1u); else { c.pc = 0x002539A0u; return; } if (c.pc != 0x00254D24u) [[unlikely]] return; }
L_00254D24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254D2Cu);  if (depth < kMaxDepth) unit_0053(c, 69u, depth + 1u); else { c.pc = 0x0024D140u; return; } if (c.pc != 0x00254D2Cu) [[unlikely]] return; }
L_00254D2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00254D40; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_00254D38:
    st16((c.r[20].w[0] + 1832u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00254D3C:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_00254D40:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00254D80:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 1832u)));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[20], c.r[4], c.r[0]);  if (t) { goto L_002552C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254DC4u);  if (depth < kMaxDepth) unit_0053(c, 101u, depth + 1u); else { c.pc = 0x0024D680u; return; } if (c.pc != 0x00254DC4u) [[unlikely]] return; }
L_00254DC4:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 846u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00255098; } }
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[19], c.r[0], c.r[0]);  if (t) { goto L_00255070; } }
L_00254DDC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[2], c.r[2].w[0] - 5920u);
    set32(c.r[3], c.r[4].w[0] << 10);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[16].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 4u);  goto L_0025506C; }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00255068; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 532u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00255068; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[20].d[0];  if (t) { goto L_00255068; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[20].d[0];  if (t) { goto L_00255068; } }
    c.f[5] = ld32((c.r[16].w[0] + 80u));
    c.f[4] = ld32((c.r[20].w[0] + 32u));
    c.f[1] = ld32((c.r[16].w[0] + 88u));
    c.f[0] = ld32((c.r[20].w[0] + 40u));
    c.f[3] = ld32((c.r[16].w[0] + 84u));
    c.f[2] = ld32((c.r[20].w[0] + 36u));
    c.f[21] = fp::sub(c.f[5], c.f[4]);
    c.f[22] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[21], c.f[21]);
    c.f[20] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254E5Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[22], c.f[22]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00254E5Cu) [[unlikely]] return; }
L_00254E5C:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254E68u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00254E68u) [[unlikely]] return; }
L_00254E68:
    c.f[20] = c.f[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00255068; } }
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254E94u); c.f[13] = c.f[22];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00254E94u) [[unlikely]] return; }
L_00254E94:
    mmi::paddub(c.r[18], c.r[2], c.r[0]);
    c.r[2].d[0] = 0ull | 65535ull;
    c.r[18].d[0] = c.r[18].d[0] & c.r[2].d[0];
    c.r[2].d[0] = ld16((c.r[20].w[0] + 84u));
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    set32(c.r[21], c.r[18].w[0] - c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254EB4u); c.r[21].d[0] = c.r[21].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0053(c, 98u, depth + 1u); else { c.pc = 0x0024D5E0u; return; } if (c.pc != 0x00254EB4u) [[unlikely]] return; }
L_00254EB4:
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[21], c.r[21].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[21].d[0] & 65535ull;
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_00255068; } }
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00255068; } }
    c.f[5] = ld32((c.r[16].w[0] + 96u));
    c.f[4] = ld32((c.r[20].w[0] + 32u));
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = ld32((c.r[20].w[0] + 40u));
    c.f[3] = ld32((c.r[16].w[0] + 100u));
    c.f[2] = ld32((c.r[20].w[0] + 36u));
    c.f[21] = fp::sub(c.f[5], c.f[4]);
    c.f[23] = fp::sub(c.f[1], c.f[0]);
    c.f[22] = fp::sub(c.f[3], c.f[2]);
    c.f[12] = c.f[21];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254F04u); c.f[13] = c.f[23];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00254F04u) [[unlikely]] return; }
L_00254F04:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[16].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] != 0ull) { c.facc = fp::mul(c.f[21], c.f[21]);  goto L_00254F34; }
    c.r[2].d[0] = 0ull | 65472ull;
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00255068; } }
    c.facc = fp::mul(c.f[21], c.f[21]);
    c.budget -= 2;
L_00254F34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254F3Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[23], c.f[23]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00254F3Cu) [[unlikely]] return; }
L_00254F3C:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254F48u); c.f[12] = fp::add(c.facc, fp::mul(c.f[22], c.f[22]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00254F48u) [[unlikely]] return; }
L_00254F48:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00255068; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 1296u)));
    set32(c.r[18], c.r[18].w[0] - c.r[2].w[0]);
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    c.r[1].d[0] = c.r[3].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = 0ull | 32769ull;  if (t) { goto L_00254F84; } }
    c.r[2].d[0] = 0ull | 57344ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].sd[0] < 24576ll ? 1ull : 0ull;  if (t) { goto L_00254FAC; } }
    c.r[1].d[0] = 0ull | 32769ull;
    c.budget -= 1;
L_00254F84:
    c.r[1].d[0] = c.r[16].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { goto L_00254FA0; } }
    set32(c.r[2], 0u + 2048u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00255050; } }
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_00254FA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00255050; } }
    c.r[2].d[0] = c.r[3].sd[0] < 24576ll ? 1ull : 0ull;
    c.budget -= 1;
L_00254FAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[3].sd[0] < 8193ll ? 1ull : 0ull;  if (t) { goto L_00254FF0; } }
    c.r[1].d[0] = 0ull | 40961ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00254FEC; } }
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[16].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 2048u);  if (t) { goto L_00254FE4; } }
    set32(c.r[2], 0u + 1024u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00255050; } }
    set32(c.r[2], 0u + 2048u);
    c.budget -= 1;
L_00254FE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00255050; } }
L_00254FEC:
    c.r[1].d[0] = c.r[3].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 1;
L_00254FF0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = 0ull | 32769ull;  if (t) { goto L_00255030; } }
    c.r[1].d[0] = c.r[3].sd[0] < 24576ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0025502C; } }
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[16].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 8192u);  if (t) { goto L_00255024; } }
    set32(c.r[2], 0u + 4096u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00255050; } }
    set32(c.r[2], 0u + 8192u);
    c.budget -= 1;
L_00255024:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00255050; } }
L_0025502C:
    c.r[1].d[0] = 0ull | 32769ull;
    c.budget -= 1;
L_00255030:
    c.r[1].d[0] = c.r[16].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 4096u);  if (t) { goto L_0025504C; } }
    set32(c.r[2], 0u + 8192u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00255050; } }
    set32(c.r[2], 0u + 4096u);
    c.budget -= 1;
L_0025504C:
    st16((c.r[20].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00255050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255058u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0054(c, 203u, depth + 1u); else { c.pc = 0x002539B0u; return; } if (c.pc != 0x00255058u) [[unlikely]] return; }
L_00255058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255060u);  if (depth < kMaxDepth) unit_0053(c, 69u, depth + 1u); else { c.pc = 0x0024D140u; return; } if (c.pc != 0x00255060u) [[unlikely]] return; }
L_00255060:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002552CC; } }
L_00255068:
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.budget -= 1;
L_0025506C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00255070:
    set32(c.r[3], ld32((c.r[28].w[0] - 26476u)));
    set32(c.r[2], c.r[28].w[0] - 26440u);
    c.r[4].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00254DDCu | kUnwind; return; } goto L_00254DDC; } }
    c.budget -= 1;
L_00255098:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 846u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { mmi::paddub(c.r[2], c.r[0], c.r[0]);  goto L_002552CC; }
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.budget -= 3;
L_002550B0:
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[5].w[0] << 5);  if (t) { goto L_002550D4; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] >> 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002550B0u | kUnwind; return; } goto L_002550B0; } }
    set32(c.r[2], c.r[5].w[0] << 5);
    c.budget -= 1;
L_002550D4:
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.f[2] = ld32((c.r[20].w[0] + 32u));
    set32(c.r[3], c.r[2].w[0] << 8);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[2], c.r[2].w[0] + 26144u);
    c.f[0] = ld32((c.r[20].w[0] + 40u));
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[21] = fp::sub(c.f[3], c.f[2]);
    c.f[22] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[21], c.f[21]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025510Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[22], c.f[22]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0025510Cu) [[unlikely]] return; }
L_0025510C:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255118u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 38u, depth + 1u); else { c.pc = 0x0024CAD0u; return; } if (c.pc != 0x00255118u) [[unlikely]] return; }
L_00255118:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002552C8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002552C8; } }
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255144u); c.f[13] = c.f[22];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00255144u) [[unlikely]] return; }
L_00255144:
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.r[2].d[0] = 0ull | 65535ull;
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.r[2].d[0] = ld16((c.r[20].w[0] + 84u));
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255160u); set32(c.r[17], c.r[16].w[0] - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0053(c, 98u, depth + 1u); else { c.pc = 0x0024D5E0u; return; } if (c.pc != 0x00255160u) [[unlikely]] return; }
L_00255160:
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[17], c.r[17].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_002552C8; } }
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002552C8; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 1296u)));
    set32(c.r[16], c.r[16].w[0] - c.r[2].w[0]);
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0; st16((c.r[20].w[0] + 1830u), static_cast<std::uint16_t>(0u));  if (t) { goto L_002551A0; } }
    c.r[2].d[0] = c.r[3].sd[0] < 12288ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002551BC; } }
L_002551A0:
    c.r[2].d[0] = c.r[3].sd[0] < 20480ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull | 53248ull;  if (t) { goto L_002551D0; } }
    c.r[1].d[0] = 0ull | 32768ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002551CC; } }
L_002551BC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 1830u)));
    c.r[2].d[0] = c.r[2].d[0] | 1024ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00255218; } }
L_002551CC:
    c.r[2].d[0] = 0ull | 53248ull;
    c.budget -= 1;
L_002551D0:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull | 32768ull;  if (t) { goto L_002551F0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0025520C; } }
    c.r[2].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_002551F0:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].sd[0] < 4096ll ? 1ull : 0ull;  if (t) { goto L_0025521C; } }
    c.r[1].d[0] = 0ull | 45056ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00255218; } }
L_0025520C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 1830u)));
    c.r[2].d[0] = c.r[2].d[0] | 2048ull;
    st16((c.r[20].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00255218:
    c.r[2].d[0] = c.r[3].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 1;
L_0025521C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull | 49152ull;  if (t) { goto L_00255234; } }
    c.r[2].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00255250; } }
    c.r[2].d[0] = 0ull | 49152ull;
    c.budget -= 1;
L_00255234:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;  if (t) { goto L_00255264; } }
    c.r[1].d[0] = 0ull | 61440ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00255260; } }
L_00255250:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 1830u)));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002552A4; } }
L_00255260:
    c.r[2].d[0] = c.r[3].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 1;
L_00255264:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull | 36864ull;  if (t) { goto L_0025527C; } }
    c.r[2].d[0] = c.r[3].sd[0] < 28672ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00255298; } }
    c.r[2].d[0] = 0ull | 36864ull;
    c.budget -= 1;
L_0025527C:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (t) { goto L_002552A8; } }
    c.r[1].d[0] = 0ull | 49152ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002552A4; } }
L_00255298:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 1830u)));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    st16((c.r[20].w[0] + 1830u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002552A4:
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 1;
L_002552A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002552B0u);  if (depth < kMaxDepth) unit_0054(c, 203u, depth + 1u); else { c.pc = 0x002539B0u; return; } if (c.pc != 0x002552B0u) [[unlikely]] return; }
L_002552B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002552B8u);  if (depth < kMaxDepth) unit_0053(c, 69u, depth + 1u); else { c.pc = 0x0024D140u; return; } if (c.pc != 0x002552B8u) [[unlikely]] return; }
L_002552B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002552CC; } }
L_002552C0:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[20].w[0] + 1832u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002552C8:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002552CC:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00255300:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 84u)));
    c.f[21] = c.f[12];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025532Cu); c.f[20] = c.f[13];  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x0025532Cu) [[unlikely]] return; }
L_0025532C:
    c.f[1] = fp::mul(c.f[21], c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255344u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x00255344u) [[unlikely]] return; }
L_00255344:
    c.f[1] = fp::mul(c.f[21], c.f[0]);
    set32(c.r[16], c.r[29].w[0] + 68u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025536Cu); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x0025536Cu) [[unlikely]] return; }
L_0025536C:
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[29].w[0] + 64u);  if (t) { goto L_00255408; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 8u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 256u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 11u);  if (t) { goto L_002553C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43070000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002553FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00255414; } }
    set32(c.r[2], 0u + 11u);
    c.budget -= 1;
L_002553C8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002553F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43920000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002553F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00255414; } }
L_002553F8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002553FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_00255418; } }
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 1;
L_00255408:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255410u); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0077(c, 192u, depth + 1u); else { c.pc = 0x002DE280u; return; } if (c.pc != 0x00255410u) [[unlikely]] return; }
L_00255410:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00255414:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00255418:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00255430:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 84u)));
    c.f[21] = c.f[12];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025545Cu); c.f[20] = c.f[13];  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x0025545Cu) [[unlikely]] return; }
L_0025545C:
    c.f[1] = fp::mul(c.f[21], c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255474u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x00255474u) [[unlikely]] return; }
L_00255474:
    c.f[1] = fp::mul(c.f[21], c.f[0]);
    set32(c.r[16], c.r[29].w[0] + 68u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025549Cu); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x0025549Cu) [[unlikely]] return; }
L_0025549C:
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[2] = fp::add(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xC0E00000u);  if (t) { goto L_00255518; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 8u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 256u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002554F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43070000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002554F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0025554C; } }
L_002554F4:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0025554C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0025554C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0E00000u);
    c.budget -= 1;
L_00255518:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0]), c.f[2]);  if (t) { goto L_00255548; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255538u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0077(c, 192u, depth + 1u); else { c.pc = 0x002DE280u; return; } if (c.pc != 0x00255538u) [[unlikely]] return; }
L_00255538:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00255548; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0025554C; } }
L_00255548:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0025554C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00255570:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1839u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00255594; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1839u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00255670; } }
L_00255594:
    c.f[3] = ld32((c.r[16].w[0] + 1760u));
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    c.f[1] = ld32((c.r[16].w[0] + 1768u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002555B0u); c.f[13] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002555B0u) [[unlikely]] return; }
L_002555B0:
    mmi::paddub(c.r[4], c.r[2], c.r[0]);
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], ld32((c.r[16].w[0] + 1296u)));
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[1].d[0] = c.r[4].sd[0] < 12289ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002555E4; } }
    c.r[3].d[0] = 0ull | 53248ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].sd[0] < 20480ll ? 1ull : 0ull;  if (t) { goto L_002555F8; } }
L_002555E4:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0025561C; } }
    c.r[3].d[0] = c.r[4].sd[0] < 20480ll ? 1ull : 0ull;
    c.budget -= 1;
L_002555F8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].sd[0] < 4096ll ? 1ull : 0ull;  if (t) { goto L_00255620; } }
    c.r[1].d[0] = 0ull | 45057ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0025561C; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0025561C:
    c.r[3].d[0] = c.r[4].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 1;
L_00255620:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = 0ull | 36864ull;  if (t) { goto L_00255648; } }
    c.r[1].d[0] = c.r[4].sd[0] < 28673ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00255644; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 2048ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00255670; } }
L_00255644:
    c.r[3].d[0] = 0ull | 36864ull;
    c.budget -= 1;
L_00255648:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00255670; } }
    c.r[1].d[0] = 0ull | 61441ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00255670; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00255670:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00255680:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1844u)));
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[19], c.r[4], c.r[0]);  if (t) { goto L_002556C0; } }
    c.f[0] = ld32((c.r[19].w[0] + 1792u));
    st32((c.r[19].w[0] + 1760u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 1800u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 1768u), c.f[0]);  if (t) { goto L_00255EF8; } }
L_002556C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1842u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00255E30; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], c.r[5].w[0] + 26240u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00254000u < 16384u) { entry = entries_0055[(t - 0x00254000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002556EC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_002557E8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002557E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255708u); mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00255708u) [[unlikely]] return; }
L_00255708:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 15232u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[19].w[0] + 1740u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8386u)));
    set32(c.r[2], 0u + 17u);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 18u);  if (t) { goto L_00255754; } }
    c.f[0] = ld32((c.r[19].w[0] + 1740u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 1740u), c.f[0]);  if (t) { goto L_00255774; } }
    set32(c.r[2], 0u + 18u);
    c.budget -= 1;
L_00255754:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00255774; } }
    c.f[0] = ld32((c.r[19].w[0] + 1740u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 1740u), c.f[0]);
    c.budget -= 6;
L_00255774:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025577Cu);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0025577Cu) [[unlikely]] return; }
L_0025577C:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 15168u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[19].w[0] + 1748u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 1748u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002557B0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x002557B0u) [[unlikely]] return; }
L_002557B0:
    c.f[2] = ld32((c.r[19].w[0] + 1740u));
    c.f[1] = ld32((c.r[18].w[0] + 32u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002557CCu); st32((c.r[19].w[0] + 1760u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x002557CCu) [[unlikely]] return; }
L_002557CC:
    c.f[2] = ld32((c.r[19].w[0] + 1740u));
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 1768u), c.f[0]);  if (t) { goto L_00255E30; } }
L_002557E4:
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_002557E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00255E30; } }
L_002557F0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_002558B0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002558AC; } }
    c.f[3] = ld32((c.r[19].w[0] + 32u));
    c.f[2] = ld32((c.r[18].w[0] + 32u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255824u); c.f[13] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00255824u) [[unlikely]] return; }
L_00255824:
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.r[2].d[0] = 0ull | 65535ull;
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255838u); set32(c.r[16], c.r[16].w[0] - 8192u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00255838u) [[unlikely]] return; }
L_00255838:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[2], c.r[2].w[0] << 10);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[16].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255850u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x00255850u) [[unlikely]] return; }
L_00255850:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1848u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[2].w[0] - 13584u);
    c.f[1] = ld32((c.r[18].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 13584u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[2] = ld32((c.r[3].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 1760u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1848u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255894u); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x00255894u) [[unlikely]] return; }
L_00255894:
    c.f[2] = ld32((c.r[16].w[0]));
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 1768u), c.f[0]);  if (t) { goto L_00255E30; } }
L_002558AC:
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_002558B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00255E30; } }
L_002558B8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_00255948; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00255944; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002558D4u); mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002558D4u) [[unlikely]] return; }
L_002558D4:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 15168u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[19].w[0] + 1748u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 1748u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[16].d[0] = c.r[3].d[0] & 65535ull;
    st32((c.r[19].w[0] + 1740u), c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255910u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x00255910u) [[unlikely]] return; }
L_00255910:
    c.f[2] = ld32((c.r[19].w[0] + 1740u));
    c.f[1] = ld32((c.r[18].w[0] + 32u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025592Cu); st32((c.r[19].w[0] + 1760u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x0025592Cu) [[unlikely]] return; }
L_0025592C:
    c.f[2] = ld32((c.r[19].w[0] + 1740u));
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 1768u), c.f[0]);  if (t) { goto L_00255E30; } }
L_00255944:
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_00255948:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00255E30; } }
L_00255950:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[5], c.r[3].w[0] + 26144u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 5;
L_00255964:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_00255984; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00255980; } }
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.budget -= 1;
L_00255980:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_00255984:
    c.r[3].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 8448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00255964u | kUnwind; return; } goto L_00255964; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00255E30; } }
    set32(c.r[18], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002559A4u); set32(c.r[18], c.r[18].w[0] - 8192u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002559A4u) [[unlikely]] return; }
L_002559A4:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[2], c.r[2].w[0] << 10);
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    c.r[18].d[0] = c.r[18].d[0] & 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    st32((c.r[19].w[0] + 1740u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002559C4u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x002559C4u) [[unlikely]] return; }
L_002559C4:
    c.f[2] = ld32((c.r[19].w[0] + 1740u));
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002559E0u); st32((c.r[19].w[0] + 1760u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x002559E0u) [[unlikely]] return; }
L_002559E0:
    c.f[2] = ld32((c.r[19].w[0] + 1740u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 1768u), c.f[0]);  if (t) { goto L_00255E30; } }
L_002559F8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_00255A98; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00255A94; } }
    c.f[3] = ld32((c.r[19].w[0] + 32u));
    c.f[2] = ld32((c.r[18].w[0] + 32u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255A2Cu); c.f[13] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00255A2Cu) [[unlikely]] return; }
L_00255A2C:
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.r[2].d[0] = 0ull | 65535ull;
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255A40u); set32(c.r[16], c.r[16].w[0] - 8192u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00255A40u) [[unlikely]] return; }
L_00255A40:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[2], c.r[2].w[0] << 10);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[16].d[0] = c.r[16].d[0] & 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437A0000u);
    st32((c.r[19].w[0] + 1740u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255A60u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x00255A60u) [[unlikely]] return; }
L_00255A60:
    c.f[2] = ld32((c.r[19].w[0] + 1740u));
    c.f[1] = ld32((c.r[18].w[0] + 32u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255A7Cu); st32((c.r[19].w[0] + 1760u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x00255A7Cu) [[unlikely]] return; }
L_00255A7C:
    c.f[2] = ld32((c.r[19].w[0] + 1740u));
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 1768u), c.f[0]);  if (t) { goto L_00255E30; } }
L_00255A94:
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_00255A98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00255E30; } }
L_00255AA0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_00255B40; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00255B3C; } }
    c.f[3] = ld32((c.r[19].w[0] + 32u));
    c.f[2] = ld32((c.r[18].w[0] + 32u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255AD4u); c.f[13] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00255AD4u) [[unlikely]] return; }
L_00255AD4:
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.r[2].d[0] = 0ull | 65535ull;
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255AE8u); set32(c.r[16], c.r[16].w[0] - 8192u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00255AE8u) [[unlikely]] return; }
L_00255AE8:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[2], c.r[2].w[0] << 10);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[16].d[0] = c.r[16].d[0] & 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    st32((c.r[19].w[0] + 1740u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255B08u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x00255B08u) [[unlikely]] return; }
L_00255B08:
    c.f[2] = ld32((c.r[19].w[0] + 1740u));
    c.f[1] = ld32((c.r[18].w[0] + 32u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255B24u); st32((c.r[19].w[0] + 1760u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x00255B24u) [[unlikely]] return; }
L_00255B24:
    c.f[2] = ld32((c.r[19].w[0] + 1740u));
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 1768u), c.f[0]);  if (t) { goto L_00255E30; } }
L_00255B3C:
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_00255B40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00255E30; } }
L_00255B48:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_00255BF4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00255BF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255B64u); mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 202u, depth + 1u); else { c.pc = 0x0024ABE0u; return; } if (c.pc != 0x00255B64u) [[unlikely]] return; }
L_00255B64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (t) { goto L_00255E30; } }
    c.f[3] = ld32((c.r[18].w[0] + 32u));
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255B88u); c.f[13] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00255B88u) [[unlikely]] return; }
L_00255B88:
    mmi::paddub(c.r[18], c.r[2], c.r[0]);
    c.r[2].d[0] = 0ull | 65535ull;
    c.r[18].d[0] = c.r[18].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255B9Cu); set32(c.r[18], c.r[18].w[0] - 8192u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00255B9Cu) [[unlikely]] return; }
L_00255B9C:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[2], c.r[2].w[0] << 10);
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    c.r[18].d[0] = c.r[18].d[0] & 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    st32((c.r[19].w[0] + 1740u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255BBCu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x00255BBCu) [[unlikely]] return; }
L_00255BBC:
    c.f[2] = ld32((c.r[19].w[0] + 1740u));
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255BD8u); st32((c.r[19].w[0] + 1760u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x00255BD8u) [[unlikely]] return; }
L_00255BD8:
    c.f[2] = ld32((c.r[19].w[0] + 1740u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 1768u), c.f[0]);  if (t) { goto L_00255E30; } }
L_00255BF0:
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_00255BF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00255E30; } }
L_00255BFC:
    c.f[0] = ld32((c.r[19].w[0] + 1776u));
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    st32((c.r[19].w[0] + 1760u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 1784u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 1768u), c.f[0]);  if (t) { goto L_00255E30; } }
L_00255C14:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 1843u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00255D24; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_00255D1C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00255D18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255C3Cu); mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00255C3Cu) [[unlikely]] return; }
L_00255C3C:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 15232u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[19].w[0] + 1740u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 8386u)));
    set32(c.r[2], 0u + 17u);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 18u);  if (t) { goto L_00255C88; } }
    c.f[0] = ld32((c.r[19].w[0] + 1740u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 1740u), c.f[0]);  if (t) { goto L_00255CA8; } }
    set32(c.r[2], 0u + 18u);
    c.budget -= 1;
L_00255C88:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00255CA8; } }
    c.f[0] = ld32((c.r[19].w[0] + 1740u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 1740u), c.f[0]);
    c.budget -= 6;
L_00255CA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255CB0u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00255CB0u) [[unlikely]] return; }
L_00255CB0:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 15168u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[19].w[0] + 1748u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 1748u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255CE4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x00255CE4u) [[unlikely]] return; }
L_00255CE4:
    c.f[2] = ld32((c.r[19].w[0] + 1740u));
    c.f[1] = ld32((c.r[18].w[0] + 32u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255D00u); st32((c.r[19].w[0] + 1760u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x00255D00u) [[unlikely]] return; }
L_00255D00:
    c.f[2] = ld32((c.r[19].w[0] + 1740u));
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 1768u), c.f[0]);  if (t) { goto L_00255E30; } }
L_00255D18:
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_00255D1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00255E30; } }
L_00255D24:
    c.f[0] = ld32((c.r[19].w[0] + 1776u));
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    st32((c.r[19].w[0] + 1760u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 1784u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 1768u), c.f[0]);  if (t) { goto L_00255E30; } }
L_00255D3C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_00255DDC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00255DD8; } }
    c.f[3] = ld32((c.r[18].w[0] + 32u));
    c.f[2] = ld32((c.r[19].w[0] + 1776u));
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = ld32((c.r[19].w[0] + 1784u));
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.f[12] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255D70u); c.f[13] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00255D70u) [[unlikely]] return; }
L_00255D70:
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.r[2].d[0] = 0ull | 65535ull;
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255D84u); set32(c.r[16], c.r[16].w[0] - 8192u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00255D84u) [[unlikely]] return; }
L_00255D84:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[2], c.r[2].w[0] << 10);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[16].d[0] = c.r[16].d[0] & 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    st32((c.r[19].w[0] + 1740u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255DA4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x00255DA4u) [[unlikely]] return; }
L_00255DA4:
    c.f[2] = ld32((c.r[19].w[0] + 1740u));
    c.f[1] = ld32((c.r[19].w[0] + 1776u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255DC0u); st32((c.r[19].w[0] + 1760u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x00255DC0u) [[unlikely]] return; }
L_00255DC0:
    c.f[2] = ld32((c.r[19].w[0] + 1740u));
    c.f[1] = ld32((c.r[19].w[0] + 1784u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 1768u), c.f[0]);  if (t) { goto L_00255E30; } }
L_00255DD8:
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 1;
L_00255DDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255DE4u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00255DE4u) [[unlikely]] return; }
L_00255DE4:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[2], c.r[2].w[0] << 12);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    st32((c.r[19].w[0] + 1740u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255E00u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x00255E00u) [[unlikely]] return; }
L_00255E00:
    c.f[2] = ld32((c.r[19].w[0] + 1740u));
    c.f[1] = ld32((c.r[19].w[0] + 1776u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255E1Cu); st32((c.r[19].w[0] + 1760u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x00255E1Cu) [[unlikely]] return; }
L_00255E1C:
    c.f[2] = ld32((c.r[19].w[0] + 1740u));
    c.f[1] = ld32((c.r[19].w[0] + 1784u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 1768u), c.f[0]);
    c.budget -= 5;
L_00255E30:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00255EF8; } }
    set32(c.r[3], 0u + 60u);
    st16((c.r[19].w[0] + 1738u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[5], c.r[3].w[0] + 26144u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 6;
L_00255E50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_00255E74; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00255E70; } }
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.budget -= 2;
L_00255E70:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_00255E74:
    c.r[3].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 8448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00255E50u | kUnwind; return; } goto L_00255E50; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00255EE8; } }
    set32(c.r[17], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255E94u); set32(c.r[17], c.r[17].w[0] - 8192u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00255E94u) [[unlikely]] return; }
L_00255E94:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[2], c.r[2].w[0] << 10);
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.r[17].d[0] = c.r[17].d[0] & 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    st32((c.r[19].w[0] + 1740u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255EB4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x00255EB4u) [[unlikely]] return; }
L_00255EB4:
    c.f[2] = ld32((c.r[19].w[0] + 1740u));
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255ED0u); st32((c.r[19].w[0] + 1760u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x00255ED0u) [[unlikely]] return; }
L_00255ED0:
    c.f[2] = ld32((c.r[19].w[0] + 1740u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 1768u), c.f[0]);  if (t) { goto L_00255EF8; } }
L_00255EE8:
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    st32((c.r[19].w[0] + 1760u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    st32((c.r[19].w[0] + 1768u), c.f[0]);
    c.budget -= 4;
L_00255EF8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00255F20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1844u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_00256294; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1850u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00256290; }
    set32(c.r[3], 0u + 120u);
    st16((c.r[17].w[0] + 1850u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1842u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 1824u)));  if (t) { goto L_00256294; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], c.r[5].w[0] + 26304u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00254000u < 16384u) { entry = entries_0055[(t - 0x00254000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00255F84:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00256294; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255F98u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 47u, depth + 1u); else { c.pc = 0x0024CEB0u; return; } if (c.pc != 0x00255F98u) [[unlikely]] return; }
L_00255F98:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], c.r[3].w[0] - 13584u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1848u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00256294; } }
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255FD8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0055(c, 85u, depth + 1u); else { c.pc = 0x00255680u; return; } if (c.pc != 0x00255FD8u) [[unlikely]] return; }
L_00255FD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255FE0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0055(c, 174u, depth + 1u); else { c.pc = 0x002562B0u; return; } if (c.pc != 0x00255FE0u) [[unlikely]] return; }
L_00255FE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_00256298; } }
L_00255FE8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00256294; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255FF8u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 47u, depth + 1u); else { c.pc = 0x0024CEB0u; return; } if (c.pc != 0x00255FF8u) [[unlikely]] return; }
L_00255FF8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00256294; } }
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256020u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0055(c, 85u, depth + 1u); else { c.pc = 0x00255680u; return; } if (c.pc != 0x00256020u) [[unlikely]] return; }
L_00256020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256028u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0055(c, 174u, depth + 1u); else { c.pc = 0x002562B0u; return; } if (c.pc != 0x00256028u) [[unlikely]] return; }
L_00256028:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00256294; } }
L_00256030:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00256294; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[6], c.r[3].w[0] + 26144u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
L_00256048:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_0025606C; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00256068; } }
    mmi::paddub(c.r[4], c.r[6], c.r[0]);
    c.budget -= 2;
L_00256068:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0025606C:
    c.r[3].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 8448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00256048u | kUnwind; return; } goto L_00256048; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00256294; } }
    c.f[5] = ld32((c.r[4].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[3] = ld32((c.r[4].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.f[20] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002560B0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002560B0u) [[unlikely]] return; }
L_002560B0:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002560BCu); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002560BCu) [[unlikely]] return; }
L_002560BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00256294; } }
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002560E4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0055(c, 85u, depth + 1u); else { c.pc = 0x00255680u; return; } if (c.pc != 0x002560E4u) [[unlikely]] return; }
L_002560E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002560ECu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0055(c, 174u, depth + 1u); else { c.pc = 0x002562B0u; return; } if (c.pc != 0x002560ECu) [[unlikely]] return; }
L_002560EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00256294; } }
L_002560F4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00256294; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256104u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 47u, depth + 1u); else { c.pc = 0x0024CEB0u; return; } if (c.pc != 0x00256104u) [[unlikely]] return; }
L_00256104:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x435C0000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00256294; } }
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025612Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0055(c, 85u, depth + 1u); else { c.pc = 0x00255680u; return; } if (c.pc != 0x0025612Cu) [[unlikely]] return; }
L_0025612C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256134u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0055(c, 174u, depth + 1u); else { c.pc = 0x002562B0u; return; } if (c.pc != 0x00256134u) [[unlikely]] return; }
L_00256134:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00256294; } }
L_0025613C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00256294; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025614Cu); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 47u, depth + 1u); else { c.pc = 0x0024CEB0u; return; } if (c.pc != 0x0025614Cu) [[unlikely]] return; }
L_0025614C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00256294; } }
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256174u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0055(c, 85u, depth + 1u); else { c.pc = 0x00255680u; return; } if (c.pc != 0x00256174u) [[unlikely]] return; }
L_00256174:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025617Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0055(c, 174u, depth + 1u); else { c.pc = 0x002562B0u; return; } if (c.pc != 0x0025617Cu) [[unlikely]] return; }
L_0025617C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00256294; } }
L_00256184:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00256294; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256194u);  if (depth < kMaxDepth) unit_0052(c, 202u, depth + 1u); else { c.pc = 0x0024ABE0u; return; } if (c.pc != 0x00256194u) [[unlikely]] return; }
L_00256194:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00256294; } }
    c.f[5] = ld32((c.r[2].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = ld32((c.r[2].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[3] = ld32((c.r[2].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.f[20] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002561CCu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002561CCu) [[unlikely]] return; }
L_002561CC:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002561D8u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002561D8u) [[unlikely]] return; }
L_002561D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00256294; } }
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256200u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0055(c, 85u, depth + 1u); else { c.pc = 0x00255680u; return; } if (c.pc != 0x00256200u) [[unlikely]] return; }
L_00256200:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256208u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0055(c, 174u, depth + 1u); else { c.pc = 0x002562B0u; return; } if (c.pc != 0x00256208u) [[unlikely]] return; }
L_00256208:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00256294; } }
L_00256210:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00256294; } }
    c.f[5] = ld32((c.r[17].w[0] + 1776u));
    c.f[4] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = ld32((c.r[17].w[0] + 1784u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[3] = ld32((c.r[17].w[0] + 1780u));
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.f[20] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256248u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00256248u) [[unlikely]] return; }
L_00256248:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256254u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00256254u) [[unlikely]] return; }
L_00256254:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00256294; } }
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025627Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0055(c, 85u, depth + 1u); else { c.pc = 0x00255680u; return; } if (c.pc != 0x0025627Cu) [[unlikely]] return; }
L_0025627C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256284u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0055(c, 174u, depth + 1u); else { c.pc = 0x002562B0u; return; } if (c.pc != 0x00256284u) [[unlikely]] return; }
L_00256284:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00256294; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00256290:
    st16((c.r[17].w[0] + 1850u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00256294:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00256298:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002562B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1844u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00256D14; } }
    c.f[1] = ld32((c.r[16].w[0] + 1760u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43F40000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x44B50000u);  if (t) { goto L_00256310; } }
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1760u), c.f[0]);  if (t) { goto L_00256334; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44B50000u);
    c.budget -= 1;
L_00256310:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00256334; } }
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 1760u), c.f[0]);
    c.budget -= 3;
L_00256334:
    c.f[1] = ld32((c.r[16].w[0] + 1768u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43F40000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x44B50000u);  if (t) { goto L_00256368; } }
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1768u), c.f[0]);  if (t) { goto L_0025638C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44B50000u);
    c.budget -= 1;
L_00256368:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0025638C; } }
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 1768u), c.f[0]);
    c.budget -= 3;
L_0025638C:
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 11u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 256u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00256A74; } }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00256934; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002567C8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002563CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_00256D18; } }
L_002563CC:
    set32(c.r[3], ld32((c.r[5].w[0] + 588u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00256D14; } }
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44750000u);
    c.r[2].d[0] = c.r[2].d[0] | 49152ull;
    c.f[2] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42830000u);
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[2] = fp::sub(c.f[0], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44630000u);
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.f[2] = c.r[2].w[0];
    c.f[3] = c.r[3].w[0];
    c.f[20] = fp::sub(c.f[1], c.f[3]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025641Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0025641Cu) [[unlikely]] return; }
L_0025641C:
    c.facc = fp::mul(c.f[20], c.f[20]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256428u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00256428u) [[unlikely]] return; }
L_00256428:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43790000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002565AC; } }
    c.f[2] = ld32((c.r[16].w[0] + 1760u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44750000u);
    c.r[2].d[0] = c.r[2].d[0] | 49152ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 1768u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44630000u);
    c.f[20] = fp::sub(c.f[2], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.facc = fp::mul(c.f[20], c.f[20]);
    c.f[21] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256474u); c.f[12] = fp::add(c.facc, fp::mul(c.f[21], c.f[21]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00256474u) [[unlikely]] return; }
L_00256474:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43790000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00256D14; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1824u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);  if (t) { goto L_002564F4; } }
    c.f[2] = ld32((c.r[3].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44750000u);
    c.r[2].d[0] = c.r[2].d[0] | 49152ull;
    c.f[0] = c.r[2].w[0];
    c.f[3] = ld32((c.r[3].w[0] + 36u));
    c.f[1] = ld32((c.r[3].w[0] + 40u));
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44630000u);
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[22] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002564DCu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002564DCu) [[unlikely]] return; }
L_002564DC:
    c.facc = fp::mul(c.f[22], c.f[22]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002564E8u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002564E8u) [[unlikely]] return; }
L_002564E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[22] = c.f[0];  if (t) { goto L_002564F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.budget -= 1;
L_002564F4:
    c.f[22] = c.r[2].w[0];
    c.budget -= 1;
L_002564F8:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256504u); c.f[13] = c.f[21];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00256504u) [[unlikely]] return; }
L_00256504:
    mmi::paddub(c.r[17], c.r[2], c.r[0]);
    c.r[2].d[0] = 0ull | 65535ull;
    c.r[17].d[0] = c.r[17].d[0] & c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x435D0000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00256550; } }
    c.r[2].d[0] = 0ull | 40960ull;
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] - 8192u);  goto L_00256548; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 8192u);  if (t) { goto L_00256548; } }
    set32(c.r[17], c.r[17].w[0] - 8192u);
    c.budget -= 1;
L_00256548:
    c.r[17].d[0] = c.r[17].d[0] & 65535ull;
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 2;
L_00256550:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256558u);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x00256558u) [[unlikely]] return; }
L_00256558:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x438C0000u);
    c.f[1] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44750000u);
    c.r[2].d[0] = c.r[2].d[0] | 49152ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256584u); st32((c.r[16].w[0] + 1760u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x00256584u) [[unlikely]] return; }
L_00256584:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x438C0000u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44630000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1768u), c.f[0]);  if (t) { goto L_00256D14; } }
L_002565AC:
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44750000u);
    c.r[2].d[0] = c.r[2].d[0] | 49152ull;
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[3] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44630000u);
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[2] = c.r[3].w[0];
    c.f[20] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002565F0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002565F0u) [[unlikely]] return; }
L_002565F0:
    c.facc = fp::mul(c.f[20], c.f[20]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002565FCu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002565FCu) [[unlikely]] return; }
L_002565FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x435D0000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00256D14; } }
    c.f[2] = ld32((c.r[16].w[0] + 1760u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44750000u);
    c.r[2].d[0] = c.r[2].d[0] | 49152ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 1768u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44630000u);
    c.f[20] = fp::sub(c.f[2], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.facc = fp::mul(c.f[20], c.f[20]);
    c.f[21] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256648u); c.f[12] = fp::add(c.facc, fp::mul(c.f[21], c.f[21]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00256648u) [[unlikely]] return; }
L_00256648:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x435D0000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00256D14; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1824u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x43FA0000u);  if (t) { goto L_002566C8; } }
    c.f[2] = ld32((c.r[3].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44750000u);
    c.r[2].d[0] = c.r[2].d[0] | 49152ull;
    c.f[0] = c.r[2].w[0];
    c.f[3] = ld32((c.r[3].w[0] + 36u));
    c.f[1] = ld32((c.r[3].w[0] + 40u));
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44630000u);
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42830000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[22] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002566B0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002566B0u) [[unlikely]] return; }
L_002566B0:
    c.facc = fp::mul(c.f[22], c.f[22]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002566BCu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002566BCu) [[unlikely]] return; }
L_002566BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x43790000u);  if (t) { goto L_002566D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.budget -= 1;
L_002566C8:
    c.f[0] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43790000u);
    c.budget -= 2;
L_002566D0:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[12] = c.f[20];  if (t) { goto L_00256760; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002566F0u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002566F0u) [[unlikely]] return; }
L_002566F0:
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[2], c.r[2].w[0] << 11);
    set32(c.r[2], c.r[2].w[0] + 6144u);
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256708u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x00256708u) [[unlikely]] return; }
L_00256708:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x438C0000u);
    c.f[1] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44750000u);
    c.r[2].d[0] = c.r[2].d[0] | 49152ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256734u); st32((c.r[16].w[0] + 1760u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x00256734u) [[unlikely]] return; }
L_00256734:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x438C0000u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44630000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1768u), c.f[0]);  if (t) { goto L_00256D14; } }
    c.f[12] = c.f[20];
    c.budget -= 1;
L_00256760:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256768u); c.f[13] = c.f[21];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00256768u) [[unlikely]] return; }
L_00256768:
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256774u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x00256774u) [[unlikely]] return; }
L_00256774:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43340000u);
    c.f[1] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44750000u);
    c.r[2].d[0] = c.r[2].d[0] | 49152ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002567A0u); st32((c.r[16].w[0] + 1760u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x002567A0u) [[unlikely]] return; }
L_002567A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43340000u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44630000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1768u), c.f[0]);  if (t) { goto L_00256D14; } }
L_002567C8:
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44480000u);
    c.f[2] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00256D14; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44970000u);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00256D14; } }
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00256D14; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44840000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00256D14; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44680000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[2] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002568C8; } }
    c.f[0] = ld32((c.r[16].w[0] + 1768u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00256D14; } }
    c.f[1] = ld32((c.r[16].w[0] + 1760u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x447B0000u);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x44990000u);  if (t) { goto L_002568B0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44430000u);
    st32((c.r[16].w[0] + 1760u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x444A0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1768u), c.r[3].w[0]);  if (t) { goto L_00256D14; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44990000u);
    c.budget -= 1;
L_002568B0:
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    st32((c.r[16].w[0] + 1760u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x444A0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1768u), c.r[3].w[0]);  if (t) { goto L_00256D14; } }
L_002568C8:
    c.f[0] = ld32((c.r[16].w[0] + 1768u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00256D14; } }
    c.f[1] = ld32((c.r[16].w[0] + 1760u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x447B0000u);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x44990000u);  if (t) { goto L_0025691C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44430000u);
    st32((c.r[16].w[0] + 1760u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44830000u);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1768u), c.r[3].w[0]);  if (t) { goto L_00256D14; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44990000u);
    c.budget -= 1;
L_0025691C:
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    st32((c.r[16].w[0] + 1760u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44830000u);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1768u), c.r[3].w[0]);  if (t) { goto L_00256D14; } }
L_00256934:
    c.f[1] = ld32((c.r[16].w[0] + 1760u));
    c.f[0] = ld32((c.r[16].w[0] + 1768u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44720000u);
    c.f[2] = c.r[2].w[0];
    c.f[20] = fp::sub(c.f[1], c.f[2]);
    c.f[21] = fp::sub(c.f[0], c.f[2]);
    c.facc = fp::mul(c.f[20], c.f[20]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025695Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[21], c.f[21]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0025695Cu) [[unlikely]] return; }
L_0025695C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x437A0000u);  if (t) { goto L_002569F4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x433E0000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00256D14; } }
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256994u); c.f[13] = c.f[21];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00256994u) [[unlikely]] return; }
L_00256994:
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002569A0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x002569A0u) [[unlikely]] return; }
L_002569A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x433E0000u);
    c.f[1] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44720000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002569C8u); st32((c.r[16].w[0] + 1760u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x002569C8u) [[unlikely]] return; }
L_002569C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x433E0000u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44720000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1768u), c.f[0]);  if (t) { goto L_00256D14; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437A0000u);
    c.budget -= 1;
L_002569F4:
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00256D14; } }
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256A18u); c.f[13] = c.f[21];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00256A18u) [[unlikely]] return; }
L_00256A18:
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256A24u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x00256A24u) [[unlikely]] return; }
L_00256A24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437A0000u);
    c.f[1] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44720000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256A4Cu); st32((c.r[16].w[0] + 1760u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x00256A4Cu) [[unlikely]] return; }
L_00256A4C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437A0000u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44720000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1768u), c.f[0]);  if (t) { goto L_00256D14; } }
L_00256A74:
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44340000u);
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x44970000u);  if (t) { goto L_00256B08; } }
    c.f[0] = ld32((c.r[16].w[0] + 1760u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00256D14; } }
    c.f[1] = ld32((c.r[16].w[0] + 1768u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44680000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x443F0000u);  if (t) { goto L_00256AF0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x443F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    st32((c.r[16].w[0] + 1760u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44300000u);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1768u), c.r[3].w[0]);  if (t) { goto L_00256D14; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x443F0000u);
    c.budget -= 1;
L_00256AF0:
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    st32((c.r[16].w[0] + 1760u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44960000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1768u), c.r[3].w[0]);  if (t) { goto L_00256D14; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44970000u);
    c.budget -= 1;
L_00256B08:
    c.r[3].d[0] = c.r[3].d[0] | 40960ull;
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x444A0000u);  if (t) { goto L_00256B98; } }
    c.f[0] = ld32((c.r[16].w[0] + 1760u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00256D14; } }
    c.f[1] = ld32((c.r[16].w[0] + 1768u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44680000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x44920000u);  if (t) { goto L_00256B7C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44920000u);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    st32((c.r[16].w[0] + 1760u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44390000u);
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1768u), c.r[3].w[0]);  if (t) { goto L_00256D14; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44920000u);
    c.budget -= 1;
L_00256B7C:
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    st32((c.r[16].w[0] + 1760u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44910000u);
    c.r[3].d[0] = c.r[3].d[0] | 24576ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1768u), c.r[3].w[0]);  if (t) { goto L_00256D14; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x444A0000u);
    c.budget -= 1;
L_00256B98:
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00256D14; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x448D0000u);
    c.f[2] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00256D14; } }
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x445E0000u);
    c.f[3] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x44730000u);  if (t) { goto L_00256C78; } }
    c.f[0] = ld32((c.r[16].w[0] + 1760u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00256C1C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x443F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    st32((c.r[16].w[0] + 1760u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44300000u);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1768u), c.r[3].w[0]);  if (t) { goto L_00256D14; } }
L_00256C1C:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00256C48; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44920000u);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    st32((c.r[16].w[0] + 1760u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44390000u);
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1768u), c.r[3].w[0]);  if (t) { goto L_00256D14; } }
L_00256C48:
    c.f[0] = ld32((c.r[16].w[0] + 1768u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00256D14; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44720000u);
    st32((c.r[16].w[0] + 1760u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44680000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1768u), c.r[3].w[0]);  if (t) { goto L_00256D14; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44730000u);
    c.budget -= 1;
L_00256C78:
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[3] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00256D14; } }
    c.f[0] = ld32((c.r[16].w[0] + 1760u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00256CC0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x443F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    st32((c.r[16].w[0] + 1760u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44960000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1768u), c.r[3].w[0]);  if (t) { goto L_00256D14; } }
L_00256CC0:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00256CEC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44920000u);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    st32((c.r[16].w[0] + 1760u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44910000u);
    c.r[3].d[0] = c.r[3].d[0] | 24576ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1768u), c.r[3].w[0]);  if (t) { goto L_00256D14; } }
L_00256CEC:
    c.f[0] = ld32((c.r[16].w[0] + 1768u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00256D14; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44720000u);
    st32((c.r[16].w[0] + 1760u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44680000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    st32((c.r[16].w[0] + 1768u), c.r[3].w[0]);
    c.budget -= 5;
L_00256D14:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00256D18:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00256D40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    set32(c.r[3], 0u + 33u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00256D68; } }
    set32(c.r[3], 0u + 41u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00256D78; } }
L_00256D68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256D70u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 210u, depth + 1u); else { c.pc = 0x0024F570u; return; } if (c.pc != 0x00256D70u) [[unlikely]] return; }
L_00256D70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00256EA8; } }
L_00256D78:
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 712u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 714u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 716u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 718u), static_cast<std::uint16_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00256EA4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], c.r[3].w[0] - 32u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00256EA4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], c.r[5].w[0] + 26368u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00254000u < 16384u) { entry = entries_0055[(t - 0x00254000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00256DCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256DD4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0055(c, 240u, depth + 1u); else { c.pc = 0x00257200u; return; } if (c.pc != 0x00256DD4u) [[unlikely]] return; }
L_00256DD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256DDCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0055(c, 231u, depth + 1u); else { c.pc = 0x00256EC0u; return; } if (c.pc != 0x00256DDCu) [[unlikely]] return; }
L_00256DDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00256EA4; } }
L_00256DE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256DECu);  if (depth < kMaxDepth) unit_0055(c, 255u, depth + 1u); else { c.pc = 0x00257630u; return; } if (c.pc != 0x00256DECu) [[unlikely]] return; }
L_00256DEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00256EA4; } }
L_00256DF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256DFCu);  if (depth < kMaxDepth) unit_0055(c, 256u, depth + 1u); else { c.pc = 0x00257640u; return; } if (c.pc != 0x00256DFCu) [[unlikely]] return; }
L_00256DFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256E04u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0055(c, 231u, depth + 1u); else { c.pc = 0x00256EC0u; return; } if (c.pc != 0x00256E04u) [[unlikely]] return; }
L_00256E04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00256EA4; } }
L_00256E0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256E14u);  if (depth < kMaxDepth) unit_0055(c, 278u, depth + 1u); else { c.pc = 0x00257F80u; return; } if (c.pc != 0x00256E14u) [[unlikely]] return; }
L_00256E14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00256EA4; } }
L_00256E1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256E24u);  if (depth < kMaxDepth) unit_0056(c, 17u, depth + 1u); else { c.pc = 0x002585B0u; return; } if (c.pc != 0x00256E24u) [[unlikely]] return; }
L_00256E24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256E2Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0055(c, 231u, depth + 1u); else { c.pc = 0x00256EC0u; return; } if (c.pc != 0x00256E2Cu) [[unlikely]] return; }
L_00256E2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00256EA4; } }
L_00256E34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256E3Cu);  if (depth < kMaxDepth) unit_0056(c, 27u, depth + 1u); else { c.pc = 0x00258AD0u; return; } if (c.pc != 0x00256E3Cu) [[unlikely]] return; }
L_00256E3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256E44u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0055(c, 231u, depth + 1u); else { c.pc = 0x00256EC0u; return; } if (c.pc != 0x00256E44u) [[unlikely]] return; }
L_00256E44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00256EA4; } }
L_00256E4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256E54u);  if (depth < kMaxDepth) unit_0056(c, 38u, depth + 1u); else { c.pc = 0x00258F70u; return; } if (c.pc != 0x00256E54u) [[unlikely]] return; }
L_00256E54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00256EA4; } }
L_00256E5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256E64u);  if (depth < kMaxDepth) unit_0056(c, 57u, depth + 1u); else { c.pc = 0x002595A0u; return; } if (c.pc != 0x00256E64u) [[unlikely]] return; }
L_00256E64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00256EA4; } }
L_00256E6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256E74u);  if (depth < kMaxDepth) unit_0056(c, 70u, depth + 1u); else { c.pc = 0x00259A20u; return; } if (c.pc != 0x00256E74u) [[unlikely]] return; }
L_00256E74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256E7Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0055(c, 231u, depth + 1u); else { c.pc = 0x00256EC0u; return; } if (c.pc != 0x00256E7Cu) [[unlikely]] return; }
L_00256E7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00256EA4; } }
L_00256E84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256E8Cu);  if (depth < kMaxDepth) unit_0056(c, 87u, depth + 1u); else { c.pc = 0x0025A290u; return; } if (c.pc != 0x00256E8Cu) [[unlikely]] return; }
L_00256E8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00256EA4; } }
L_00256E94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256E9Cu);  if (depth < kMaxDepth) unit_0056(c, 88u, depth + 1u); else { c.pc = 0x0025A2A0u; return; } if (c.pc != 0x00256E9Cu) [[unlikely]] return; }
L_00256E9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256EA4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0055(c, 231u, depth + 1u); else { c.pc = 0x00256EC0u; return; } if (c.pc != 0x00256EA4u) [[unlikely]] return; }
L_00256EA4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00256EA8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00256EC0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[5], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_002571D8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1844u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 1000u);  goto L_00257074; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00257070; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_0025706C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00256F2C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002571D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_002571DC; } }
L_00256F2C:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1852u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0025701C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[16], c.r[2].w[0] + 10848u);
    st8((c.r[17].w[0] + 1844u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    st8((c.r[17].w[0] + 1845u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + 10848u);
    st8((c.r[17].w[0] + 1846u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[16], c.r[16].w[0] + 16u);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x459C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.f[20] = c.r[2].w[0];
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    c.budget -= 15;
L_00256F74:
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256F98u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00256F98u) [[unlikely]] return; }
L_00256F98:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00256FC0; } }
    set32(c.r[3], c.r[29].w[0] + 80u);
    c.f[20] = c.f[0];
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    c.budget -= 6;
L_00256FC0:
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    set32(c.r[16], c.r[16].w[0] + 16u);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 12u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00256F74u | kUnwind; return; } goto L_00256F74; } }
    set32(c.r[3], c.r[29].w[0] + 96u);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[17].w[0] + 1792u), c.f[3]);
    st32((c.r[17].w[0] + 1796u), c.f[2]);
    st32((c.r[17].w[0] + 1800u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1804u), c.f[0]);  if (t) { goto L_002571D8; } }
L_0025701C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1860u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00257040; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 789u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00257040; } }
    set32(c.r[3], c.r[4].w[0] - 1u);
    st16((c.r[17].w[0] + 1852u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00257040:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1860u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002571D8; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 514u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1862u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002571D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 1852u), static_cast<std::uint16_t>(0u));  if (t) { goto L_002571D8; } }
L_0025706C:
    st8((c.r[17].w[0] + 1844u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00257070:
    set32(c.r[2], 0u + 1000u);
    c.budget -= 1;
L_00257074:
    st16((c.r[17].w[0] + 1736u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 1828u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[3] = ld32((c.r[17].w[0] + 1792u));
    c.f[2] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = ld32((c.r[17].w[0] + 1800u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002570A0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002570A0u) [[unlikely]] return; }
L_002570A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00257178; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 12u);
    st8((c.r[17].w[0] + 583u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 33u);  if (t) { goto L_002570FC; } }
    set32(c.r[5], 0u + 49u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002570E4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 55u, depth + 1u); else { c.pc = 0x002D8DE0u; return; } if (c.pc != 0x002570E4u) [[unlikely]] return; }
L_002570E4:
    set32(c.r[5], 0u + 49u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002570F0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 54u, depth + 1u); else { c.pc = 0x002D8D10u; return; } if (c.pc != 0x002570F0u) [[unlikely]] return; }
L_002570F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));  if (t) { goto L_00257114; } }
    set32(c.r[5], 0u + 33u);
    c.budget -= 1;
L_002570FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257104u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x00257104u) [[unlikely]] return; }
L_00257104:
    set32(c.r[5], 0u + 33u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257110u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 87u, depth + 1u); else { c.pc = 0x0026D7B0u; return; } if (c.pc != 0x00257110u) [[unlikely]] return; }
L_00257110:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.budget -= 1;
L_00257114:
    set32(c.r[4], 0u - 29184u);
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st16((c.r[17].w[0] + 812u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[4].d[0] = c.r[4].d[0] | 20480ull;
    st16((c.r[17].w[0] + 812u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 532u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 529u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002571D8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1844u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002571D8; } }
    set32(c.r[3], 0u + 4u);
    st8((c.r[17].w[0] + 1844u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 531u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[3], c.r[3].w[0] + 29598u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002571D8; } }
L_00257178:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 529u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002571D8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1844u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002571D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002571A4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0014(c, 156u, depth + 1u); else { c.pc = 0x001530A0u; return; } if (c.pc != 0x002571A4u) [[unlikely]] return; }
L_002571A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002571D8; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 532u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 4u);
    st8((c.r[17].w[0] + 1844u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 531u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[3], c.r[3].w[0] + 29598u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 11;
L_002571D8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002571DC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00257200:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1724u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00257554; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_00257254; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40F00000u);  goto L_00257240; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1858u)));  if (t) { goto L_002575E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40F00000u);
    c.budget -= 1;
L_00257240:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025724Cu);  if (depth < kMaxDepth) unit_0056(c, 100u, depth + 1u); else { c.pc = 0x0025A850u; return; } if (c.pc != 0x0025724Cu) [[unlikely]] return; }
L_0025724C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002575E0; } }
L_00257254:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1738u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00257268; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 1738u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00257268:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1738u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025728C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257284u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 33u, depth + 1u); else { c.pc = 0x0024C9F0u; return; } if (c.pc != 0x00257284u) [[unlikely]] return; }
L_00257284:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025729C; } }
L_0025728C:
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025729Cu); st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0053(c, 107u, depth + 1u); else { c.pc = 0x0024D7D0u; return; } if (c.pc != 0x0025729Cu) [[unlikely]] return; }
L_0025729C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1736u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00257400; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002572B0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 105u, depth + 1u); else { c.pc = 0x0024D750u; return; } if (c.pc != 0x002572B0u) [[unlikely]] return; }
L_002572B0:
    set32(c.r[4], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002575E0; } }
    c.f[1] = ld32((c.r[4].w[0] + 1068u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002575E0; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 532u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002575E0; } }
    st32((c.r[16].w[0] + 1824u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1838u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_00257304; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_00257304:
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257310u); c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00257310u) [[unlikely]] return; }
L_00257310:
    c.r[3].d[0] = c.r[17].d[0] & 7ull;
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[4].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = c.r[3].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 12208u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 15;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], 0u + 2u);  goto L_002573EC; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[4].w[0] + 26416u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00254000u < 16384u) { entry = entries_0055[(t - 0x00254000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00257368:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1830u), static_cast<std::uint16_t>(0u));  if (t) { goto L_002573E8; } }
L_0025737C:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 704u));
    set32(c.r[3], 0u + 8192u);
    c.r[4].d[0] = c.r[4].d[0] | 8448ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1830u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002573E8; } }
L_00257394:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 704u));
    set32(c.r[3], 0u + 1024u);
    c.r[4].d[0] = c.r[4].d[0] | 1280ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1830u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002573E8; } }
L_002573AC:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 704u));
    set32(c.r[3], 0u + 2048u);
    c.r[4].d[0] = c.r[4].d[0] | 2304ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1830u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002573E8; } }
L_002573C4:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1830u), static_cast<std::uint16_t>(0u));  if (t) { goto L_002573E8; } }
L_002573D8:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 768ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 1830u), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
L_002573E8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_002573EC:
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 45u);
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002575E0; } }
L_00257400:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1844u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] - 1u);  if (t) { goto L_00257424; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00257540; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00257424:
    st16((c.r[16].w[0] + 1736u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257438u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 239u, depth + 1u); else { c.pc = 0x0024B350u; return; } if (c.pc != 0x00257438u) [[unlikely]] return; }
L_00257438:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44AF0000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00257458; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_00257458:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1725u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_0025750C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002574D4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);  if (t) { goto L_00257488; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00257544; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.budget -= 1;
L_00257488:
    c.f[1] = c.r[2].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);  if (t) { goto L_002574B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00257540; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.budget -= 1;
L_002574B0:
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00257540; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00257540; } }
L_002574D4:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[2].d[0] = c.r[3].d[0] | 4096ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00257540; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00257540; } }
L_0025750C:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[2].d[0] = c.r[3].d[0] | 8192ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00257540; } }
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00257540:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00257544:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025754Cu);  if (depth < kMaxDepth) unit_0056(c, 98u, depth + 1u); else { c.pc = 0x0025A6B0u; return; } if (c.pc != 0x0025754Cu) [[unlikely]] return; }
L_0025754C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002575E0; } }
L_00257554:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    set32(c.r[5], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1725u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002575C8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00257580; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002575E0; } }
L_00257580:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 1830u));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1730u)));
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_002575AC; }
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002575E0; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_002575AC:
    st8((c.r[16].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002575E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_002575E0; } }
L_002575C8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002575E0; } }
    st8((c.r[16].w[0] + 1724u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002575E0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1858u)));
    c.budget -= 1;
L_002575E4:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0025760C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002575F4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 109u, depth + 1u); else { c.pc = 0x0024D850u; return; } if (c.pc != 0x002575F4u) [[unlikely]] return; }
L_002575F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025761C; } }
    set32(c.r[3], 0u + 45u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1858u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0025761C; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0025760C:
    st16((c.r[16].w[0] + 1858u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0025761C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00257630:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00257640:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1724u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[5], 0u + 3u);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[17], c.r[18].w[0] + 320u);  if (t) { goto L_00257B70; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00257AFC; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002576B0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);  if (t) { goto L_0025769C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[18].w[0] + 32u));  if (t) { goto L_00257E7C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.budget -= 1;
L_0025769C:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002576A8u);  if (depth < kMaxDepth) unit_0056(c, 107u, depth + 1u); else { c.pc = 0x0025A9C0u; return; } if (c.pc != 0x002576A8u) [[unlikely]] return; }
L_002576A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00257E78; } }
L_002576B0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 1738u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002576C4; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[18].w[0] + 1738u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002576C4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 1738u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_002576EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002576E0u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 33u, depth + 1u); else { c.pc = 0x0024C9F0u; return; } if (c.pc != 0x002576E0u) [[unlikely]] return; }
L_002576E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002576F4; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_002576EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002576F4u); st8((c.r[18].w[0] + 1724u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0053(c, 107u, depth + 1u); else { c.pc = 0x0024D7D0u; return; } if (c.pc != 0x002576F4u) [[unlikely]] return; }
L_002576F4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 1736u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_00257910; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257708u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 105u, depth + 1u); else { c.pc = 0x0024D750u; return; } if (c.pc != 0x00257708u) [[unlikely]] return; }
L_00257708:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1726u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002577E0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1730u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00257748; } }
    set32(c.r[2], 0u + 3u);
    st8((c.r[18].w[0] + 1724u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257738u); st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00257738u) [[unlikely]] return; }
L_00257738:
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1731u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00257E78; } }
L_00257748:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1731u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002577B0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002577A0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00257790; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00257780; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1730u)));  if (t) { goto L_002577C0; } }
L_00257780:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 2304ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002577BC; } }
L_00257790:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 1280ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002577BC; } }
L_002577A0:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 4352ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002577BC; } }
L_002577B0:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 8448ull;
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002577BC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1730u)));
    c.budget -= 1;
L_002577C0:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1731u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 1731u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00257E78; } }
L_002577E0:
    set32(c.r[3], ld32((c.r[18].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00257E78; } }
    c.f[1] = ld32((c.r[3].w[0] + 1068u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00257E78; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 532u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00257E78; } }
    st32((c.r[18].w[0] + 1824u), c.r[3].w[0]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[3], c.r[0], c.r[0]);  if (t) { goto L_00257858; } }
    set32(c.r[2], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 1;
L_00257830:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_0025784C; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[2].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 4;
L_0025784C:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 3;
L_00257858:
    c.r[4].d[0] = c.r[3].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[2].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] + c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00257830u | kUnwind; return; } goto L_00257830; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1838u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_00257880; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_00257880:
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025788Cu); c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x0025788Cu) [[unlikely]] return; }
L_0025788C:
    c.r[3].d[0] = c.r[2].d[0] & 15ull;
    c.r[2].d[0] = c.r[17].d[0] & 7ull;
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 12080u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002578D4; } }
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002578FC; } }
L_002578D4:
    c.r[4].d[0] = ld16((c.r[18].w[0] + 704u));
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], 0u + 45u);
    c.r[4].d[0] = c.r[4].d[0] | 512ull;
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[18].w[0] + 1724u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00257E78; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002578FC:
    st8((c.r[18].w[0] + 1726u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1731u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00257E78; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_00257910:
    st16((c.r[18].w[0] + 1736u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00257A70; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257930u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 239u, depth + 1u); else { c.pc = 0x0024B350u; return; } if (c.pc != 0x00257930u) [[unlikely]] return; }
L_00257930:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 11u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 256u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00257964; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00257964; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_00257964:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);  if (t) { goto L_00257994; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[2] = c.r[2].w[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1725u)));  if (t) { goto L_002579A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.budget -= 1;
L_00257994:
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[2] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1725u)));
    c.budget -= 4;
L_002579A4:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00257A34; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00257A08; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002579CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_00257A60; } }
L_002579CC:
    c.f[3] = ld32((c.r[18].w[0] + 36u));
    c.f[1] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = fp::add(c.f[0], c.f[2]);  goto L_002579F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00257A5C; } }
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.budget -= 1;
L_002579F0:
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00257A5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00257A5C; } }
L_00257A08:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 704u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[18].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00257A5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00257A5C; } }
L_00257A34:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 704u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[18].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00257A5C; } }
    st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00257A5C:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_00257A60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257A68u);  if (depth < kMaxDepth) unit_0056(c, 98u, depth + 1u); else { c.pc = 0x0025A6B0u; return; } if (c.pc != 0x00257A68u) [[unlikely]] return; }
L_00257A68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00257E78; } }
L_00257A70:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 704u));
    set32(c.r[2], 0u + 4u);
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 10u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1731u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00257AEC; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00257ADC; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00257ACC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00257ABC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00257E78; } }
L_00257ABC:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 2304ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00257E78; } }
L_00257ACC:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 1280ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00257E78; } }
L_00257ADC:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 4352ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00257E78; } }
L_00257AEC:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 8448ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00257E78; } }
L_00257AFC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1725u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00257B54; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00257B1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00257E78; } }
L_00257B1C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1730u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_00257B38; }
    st8((c.r[18].w[0] + 1724u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00257E78; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_00257B38:
    st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00257E78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00257E78; } }
L_00257B54:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00257E78; } }
    st8((c.r[18].w[0] + 1724u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00257E78; } }
L_00257B70:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1725u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00257E78; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] + 26448u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00254000u < 16384u) { entry = entries_0055[(t - 0x00254000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00257B9C:
    set32(c.r[2], ld32((c.r[18].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00257BD8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1730u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_00257BD0; }
    set32(c.r[2], 0u + 45u);
    st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00257E78; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_00257BD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00257E78; } }
L_00257BD8:
    c.r[4].d[0] = ld16((c.r[18].w[0] + 704u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 60u);
    c.r[4].d[0] = c.r[4].d[0] | 768ull;
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00257E78; } }
L_00257BF8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1730u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_00257C14; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00257E78; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_00257C14:
    st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00257E78; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00257E78; } }
L_00257C34:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00257E78; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1731u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[18].w[0] + 1731u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1731u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00257C70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00257E78; } }
L_00257C70:
    st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1730u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00257E78; } }
L_00257C7C:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 6u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00257CBC; } }
    set32(c.r[2], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00257CBC; } }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1725u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00257E78; } }
L_00257CBC:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 7u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00257CF0; } }
    set32(c.r[2], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00257CF0; } }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1725u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00257E78; } }
L_00257CF0:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 5u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00257D24; } }
    set32(c.r[2], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00257D24; } }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1725u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00257E78; } }
L_00257D24:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_00257D5C; } }
    set32(c.r[2], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00257D58; } }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1725u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00257E78; } }
L_00257D58:
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_00257D5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00257E78; } }
L_00257D64:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 6u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00257D98; } }
    set32(c.r[2], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00257D98; } }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 2048ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00257DF4; } }
L_00257D98:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 7u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00257DC0; } }
    set32(c.r[2], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00257DC0; } }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 1024ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00257DF4; } }
L_00257DC0:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 5u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00257DE8; } }
    set32(c.r[2], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00257DE8; } }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00257DF4; } }
L_00257DE8:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00257DF4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1725u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00257E78; } }
L_00257E04:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 704u));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00257E48; } }
    set32(c.r[2], c.r[17].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_00257E20:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] + 1u);  if (t) { goto L_00257E3C; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.r[4].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 4;
L_00257E3C:
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 3;
L_00257E48:
    c.r[3].d[0] = c.r[5].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] + c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00257E20u | kUnwind; return; } goto L_00257E20; } }
    c.r[2].d[0] = c.r[4].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00257E78; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 1724u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[18].w[0] + 1725u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_00257E78:
    c.f[1] = ld32((c.r[18].w[0] + 32u));
    c.budget -= 1;
L_00257E7C:
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44720000u);
    c.f[2] = c.r[2].w[0];
    c.f[20] = fp::sub(c.f[1], c.f[2]);
    c.f[21] = fp::sub(c.f[0], c.f[2]);
    c.facc = fp::mul(c.f[20], c.f[20]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257EA0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[21], c.f[21]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00257EA0u) [[unlikely]] return; }
L_00257EA0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43660000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00257F20; } }
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257EC8u); c.f[13] = c.f[21];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00257EC8u) [[unlikely]] return; }
L_00257EC8:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257ED4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x00257ED4u) [[unlikely]] return; }
L_00257ED4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43660000u);
    c.f[1] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44720000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257EFCu); st32((c.r[18].w[0] + 32u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x00257EFCu) [[unlikely]] return; }
L_00257EFC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43660000u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44720000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 40u), c.f[0]);
    c.budget -= 9;
L_00257F20:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 1858u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_00257F4C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257F34u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 109u, depth + 1u); else { c.pc = 0x0024D850u; return; } if (c.pc != 0x00257F34u) [[unlikely]] return; }
L_00257F34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00257F5C; } }
    set32(c.r[3], 0u + 25u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 1858u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00257F5C; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00257F4C:
    st16((c.r[18].w[0] + 1858u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 704u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[18].w[0] + 704u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00257F5C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00257F80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1724u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { [[clang::musttail]] return unit_0056(c, 14u, depth); } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_0056(c, 13u, depth); } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { [[clang::musttail]] return unit_0056(c, 3u, depth); } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40600000u);  goto L_00257FCC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1858u)));  if (t) { [[clang::musttail]] return unit_0056(c, 15u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40600000u);
    c.budget -= 1;
L_00257FCC:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257FD8u);  if (depth < kMaxDepth) unit_0056(c, 100u, depth + 1u); else { c.pc = 0x0025A850u; return; } if (c.pc != 0x00257FD8u) [[unlikely]] return; }
L_00257FD8:
    c.f[1] = ld32((c.r[16].w[0] + 1768u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x445F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 49152ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { [[clang::musttail]] return unit_0056(c, 2u, depth); } }
    c.f[0] = ld32((c.r[16].w[0] + 1760u));
    c.budget -= 1;
    [[clang::musttail]] return unit_0056(c, 1u, depth);
}

}
