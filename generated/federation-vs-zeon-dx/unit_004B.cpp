#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_004B[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 12, 13, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 40, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    52, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0,
    0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0,
    0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0,
    84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87,
    0, 88, 0, 0, 0, 89, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 92, 0, 93, 0, 94, 0, 95, 0, 96,
    0, 97, 0, 98, 0, 99, 0, 100, 0, 101, 0, 102, 0, 103, 0, 104, 0, 105, 0, 106, 0, 107, 0, 108, 0, 109, 0, 110, 0, 0, 0, 0,
    111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0,
    146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0,
    0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0,
    0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0,
};

void unit_004B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0022C000;
    case 2u: goto L_0022C034;
    case 3u: goto L_0022C0B0;
    case 4u: goto L_0022C0DC;
    case 5u: goto L_0022C110;
    case 6u: goto L_0022C12C;
    case 7u: goto L_0022C1BC;
    case 8u: goto L_0022C1EC;
    case 9u: goto L_0022C248;
    case 10u: goto L_0022C2D8;
    case 11u: goto L_0022C308;
    case 12u: goto L_0022C398;
    case 13u: goto L_0022C39C;
    case 14u: goto L_0022C3B0;
    case 15u: goto L_0022C3C0;
    case 16u: goto L_0022C3D0;
    case 17u: goto L_0022C43C;
    case 18u: goto L_0022C47C;
    case 19u: goto L_0022C530;
    case 20u: goto L_0022C560;
    case 21u: goto L_0022C58C;
    case 22u: goto L_0022C5B0;
    case 23u: goto L_0022C5F0;
    case 24u: goto L_0022C6A4;
    case 25u: goto L_0022C6D4;
    case 26u: goto L_0022C700;
    case 27u: goto L_0022C720;
    case 28u: goto L_0022C754;
    case 29u: goto L_0022C7C8;
    case 30u: goto L_0022C850;
    case 31u: goto L_0022C870;
    case 32u: goto L_0022C8C4;
    case 33u: goto L_0022CA14;
    case 34u: goto L_0022CA7C;
    case 35u: goto L_0022CAB0;
    case 36u: goto L_0022CB00;
    case 37u: goto L_0022CB34;
    case 38u: goto L_0022CB50;
    case 39u: goto L_0022CBCC;
    case 40u: goto L_0022CBD4;
    case 41u: goto L_0022CBDC;
    case 42u: goto L_0022CC20;
    case 43u: goto L_0022CDB0;
    case 44u: goto L_0022CF40;
    case 45u: goto L_0022D0D0;
    case 46u: goto L_0022D260;
    case 47u: goto L_0022D3E0;
    case 48u: goto L_0022D560;
    case 49u: goto L_0022D6E0;
    case 50u: goto L_0022D860;
    case 51u: goto L_0022D960;
    case 52u: goto L_0022DA00;
    case 53u: goto L_0022DA10;
    case 54u: goto L_0022DA20;
    case 55u: goto L_0022DA44;
    case 56u: goto L_0022DAA4;
    case 57u: goto L_0022DB28;
    case 58u: goto L_0022DB48;
    case 59u: goto L_0022DB50;
    case 60u: goto L_0022DC10;
    case 61u: goto L_0022DC24;
    case 62u: goto L_0022DD08;
    case 63u: goto L_0022DD44;
    case 64u: goto L_0022DD90;
    case 65u: goto L_0022DDE8;
    case 66u: goto L_0022DE2C;
    case 67u: goto L_0022DE38;
    case 68u: goto L_0022DE88;
    case 69u: goto L_0022DE94;
    case 70u: goto L_0022DEF0;
    case 71u: goto L_0022DF08;
    case 72u: goto L_0022DF50;
    case 73u: goto L_0022DF68;
    case 74u: goto L_0022DFB0;
    case 75u: goto L_0022DFC8;
    case 76u: goto L_0022E010;
    case 77u: goto L_0022E028;
    case 78u: goto L_0022E070;
    case 79u: goto L_0022E090;
    case 80u: goto L_0022E0E8;
    case 81u: goto L_0022E134;
    case 82u: goto L_0022E164;
    case 83u: goto L_0022E270;
    case 84u: goto L_0022E280;
    case 85u: goto L_0022E2C4;
    case 86u: goto L_0022E2E0;
    case 87u: goto L_0022E2FC;
    case 88u: goto L_0022E304;
    case 89u: goto L_0022E314;
    case 90u: goto L_0022E320;
    case 91u: goto L_0022E354;
    case 92u: goto L_0022E35C;
    case 93u: goto L_0022E364;
    case 94u: goto L_0022E36C;
    case 95u: goto L_0022E374;
    case 96u: goto L_0022E37C;
    case 97u: goto L_0022E384;
    case 98u: goto L_0022E38C;
    case 99u: goto L_0022E394;
    case 100u: goto L_0022E39C;
    case 101u: goto L_0022E3A4;
    case 102u: goto L_0022E3AC;
    case 103u: goto L_0022E3B4;
    case 104u: goto L_0022E3BC;
    case 105u: goto L_0022E3C4;
    case 106u: goto L_0022E3CC;
    case 107u: goto L_0022E3D4;
    case 108u: goto L_0022E3DC;
    case 109u: goto L_0022E3E4;
    case 110u: goto L_0022E3EC;
    case 111u: goto L_0022E400;
    case 112u: goto L_0022E490;
    case 113u: goto L_0022E49C;
    case 114u: goto L_0022E4F8;
    case 115u: goto L_0022E550;
    case 116u: goto L_0022E5D0;
    case 117u: goto L_0022E6A0;
    case 118u: goto L_0022E740;
    case 119u: goto L_0022E778;
    case 120u: goto L_0022E85C;
    case 121u: goto L_0022E870;
    case 122u: goto L_0022E8CC;
    case 123u: goto L_0022E8E8;
    case 124u: goto L_0022E910;
    case 125u: goto L_0022E954;
    case 126u: goto L_0022EACC;
    case 127u: goto L_0022EB60;
    case 128u: goto L_0022EFAC;
    case 129u: goto L_0022EFB8;
    case 130u: goto L_0022F0EC;
    case 131u: goto L_0022F0F8;
    case 132u: goto L_0022F1C8;
    case 133u: goto L_0022F240;
    case 134u: goto L_0022F2A4;
    case 135u: goto L_0022F2D0;
    case 136u: goto L_0022F320;
    case 137u: goto L_0022F3E0;
    case 138u: goto L_0022F488;
    case 139u: goto L_0022F5E8;
    case 140u: goto L_0022F5FC;
    case 141u: goto L_0022F760;
    case 142u: goto L_0022F834;
    case 143u: goto L_0022F890;
    case 144u: goto L_0022F960;
    case 145u: goto L_0022F970;
    case 146u: goto L_0022F980;
    case 147u: goto L_0022FB18;
    case 148u: goto L_0022FCE0;
    case 149u: goto L_0022FD04;
    case 150u: goto L_0022FD34;
    case 151u: goto L_0022FD68;
    case 152u: goto L_0022FD8C;
    case 153u: goto L_0022FDB8;
    case 154u: goto L_0022FDF0;
    case 155u: goto L_0022FE70;
    case 156u: goto L_0022FEC4;
    case 157u: goto L_0022FED0;
    case 158u: goto L_0022FF10;
    case 159u: goto L_0022FFC0;
    case 160u: goto L_0022FFCC;
    case 161u: goto L_0022FFE0;
    default: bad_entry(c, 0x0022C000u); return;
    }
L_0022C000:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0022C398; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBCF50000u);
    c.r[4].d[0] = c.r[3].d[0] | 49807ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3BA30000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[18].w[0] + 32u), c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 36u), c.r[3].w[0]);  if (t) { goto L_0022C398; } }
L_0022C034:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0022C0E8; }
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 23u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 18u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[16].w[0] + 18u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[1].d[0] = c.r[2].sd[0] < 8192ll ? 1ull : 0ull;
    c.budget -= 21;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] - 8192u);  goto L_0022C0BC; }
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    st32((c.r[28].w[0] - 25276u), c.r[2].w[0]);
    c.r[7].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 25276u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C0B0u); set32(c.r[4], c.r[2].w[0] + 29152u);  if (depth < kMaxDepth) unit_0025(c, 262u, depth + 1u); else { c.pc = 0x00196BF0u; return; } if (c.pc != 0x0022C0B0u) [[unlikely]] return; }
L_0022C0B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));  if (t) { goto L_0022C0F0; } }
    set32(c.r[2], c.r[2].w[0] - 8192u);
    c.budget -= 1;
L_0022C0BC:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    st32((c.r[28].w[0] - 25276u), c.r[2].w[0]);
    c.r[7].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 25276u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[4], c.r[2].w[0] + 29120u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C0DCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 262u, depth + 1u); else { c.pc = 0x00196BF0u; return; } if (c.pc != 0x0022C0DCu) [[unlikely]] return; }
L_0022C0DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022C0EC; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0022C0E8:
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0022C0EC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.budget -= 1;
L_0022C0F0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_0022C108; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022C398; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_0022C108:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0022C398; } }
L_0022C110:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[1].d[0] = c.r[2].sd[0] < 8192ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_0022C240; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C12Cu); st8((c.r[16].w[0] + 22u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0025(c, 271u, depth + 1u); else { c.pc = 0x00196E40u; return; } if (c.pc != 0x0022C12Cu) [[unlikely]] return; }
L_0022C12C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0022C1B0; } }
    st8((c.r[16].w[0] + 21u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 23u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 12u)));
    set32(c.r[2], 0u + 255u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 18u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[16].w[0] + 18u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    c.budget -= 21;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0022C198; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 18u)));
    c.r[2].d[0] = c.r[2].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0022C1A4; } }
L_0022C198:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0022C1B4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0022C1A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0022C1B4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0022C1B0:
    st8((c.r[16].w[0] + 21u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0022C1B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C1BCu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0025(c, 272u, depth + 1u); else { c.pc = 0x00196E60u; return; } if (c.pc != 0x0022C1BCu) [[unlikely]] return; }
L_0022C1BC:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0022C1D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0022C354; } }
L_0022C1D4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 16u)));
    c.r[3].d[0] = c.r[3].d[0] & 7ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0022C354; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C1ECu);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x0022C1ECu) [[unlikely]] return; }
L_0022C1EC:
    set32(c.r[5], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 14u)));
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    mmi::div(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0022C234; } }
    set32(c.r[3], c.r[4].w[0] + 1u);
    mmi::div(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.r[4].d[0] = c.r[3].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 7;
L_0022C234:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 14u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_0022C354; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_0022C240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C248u); st8((c.r[16].w[0] + 21u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0025(c, 271u, depth + 1u); else { c.pc = 0x00196E40u; return; } if (c.pc != 0x0022C248u) [[unlikely]] return; }
L_0022C248:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0022C2CC; } }
    st8((c.r[16].w[0] + 22u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 23u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 12u)));
    set32(c.r[2], 0u + 255u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 18u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[16].w[0] + 18u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    c.budget -= 21;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0022C2B4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 18u)));
    c.r[2].d[0] = c.r[2].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0022C2C0; } }
L_0022C2B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0022C2D0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0022C2C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0022C2D0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0022C2CC:
    st8((c.r[16].w[0] + 22u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0022C2D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C2D8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 272u, depth + 1u); else { c.pc = 0x00196E60u; return; } if (c.pc != 0x0022C2D8u) [[unlikely]] return; }
L_0022C2D8:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0022C2F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0022C354; } }
L_0022C2F0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 16u)));
    c.r[3].d[0] = c.r[3].d[0] & 7ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0022C354; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C308u);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x0022C308u) [[unlikely]] return; }
L_0022C308:
    set32(c.r[5], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 14u)));
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    mmi::div(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0022C350; } }
    set32(c.r[3], c.r[4].w[0] + 1u);
    mmi::div(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.r[4].d[0] = c.r[3].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 7;
L_0022C350:
    st16((c.r[16].w[0] + 14u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 1;
L_0022C354:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0022C378; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0022C378:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_0022C394; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022C398; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_0022C394:
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0022C398:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0022C39C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0022C3B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0022C3C0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_0022C3D0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    set32(c.r[3], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[3].w[0]);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    set32(c.r[3], c.r[28].w[0] - 29508u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 21;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[19].w[0] + 320u);  if (t) { goto L_0022C58C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0022C58C; } }
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C43Cu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (depth < kMaxDepth) unit_001F(c, 154u, depth + 1u); else { c.pc = 0x0017E460u; return; } if (c.pc != 0x0022C43Cu) [[unlikely]] return; }
L_0022C43C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 19728u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 19792u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    set32(c.r[2], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C47Cu); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x0022C47Cu) [[unlikely]] return; }
L_0022C47C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 21u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022C58C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 25276u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0022C58C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 14u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022C58C; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[4].w[0]);
    set32(c.r[2], c.r[29].w[0] + 120u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    set32(c.r[2], 0u + 11u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 14u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[5], c.r[2].w[0] + 19808u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[6], c.r[6].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[17], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[2].w[0] + 19728u);
    c.r[2].d[0] = ld16((c.r[17].w[0]));
    set32(c.r[7], c.r[29].w[0] + 122u);
    st16((c.r[29].w[0] + 120u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 2u));
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 120u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[29].w[0] + 124u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 6u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C530u); st16((c.r[29].w[0] + 126u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x0022C530u) [[unlikely]] return; }
L_0022C530:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 8u));
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[18], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 10u));
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C560u); st32((c.r[29].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x0022C560u) [[unlikely]] return; }
L_0022C560:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 12u));
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 14u));
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C58Cu); st32((c.r[29].w[0] + 100u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x0022C58Cu) [[unlikely]] return; }
L_0022C58C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0022C700; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0022C700; } }
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C5B0u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (depth < kMaxDepth) unit_001F(c, 154u, depth + 1u); else { c.pc = 0x0017E460u; return; } if (c.pc != 0x0022C5B0u) [[unlikely]] return; }
L_0022C5B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 19760u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 19800u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    set32(c.r[2], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C5F0u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x0022C5F0u) [[unlikely]] return; }
L_0022C5F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 22u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022C700; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 25276u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 644u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0022C700; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 14u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022C700; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[4].w[0]);
    set32(c.r[2], c.r[29].w[0] + 120u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    set32(c.r[2], 0u + 11u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 14u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] + 19808u);
    set32(c.r[6], c.r[29].w[0] + 122u);
    set32(c.r[5], c.r[5].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[5], c.r[2].w[0] + 19760u);
    st16((c.r[29].w[0] + 120u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 2u));
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 120u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[29].w[0] + 124u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 6u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C6A4u); st16((c.r[29].w[0] + 126u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x0022C6A4u) [[unlikely]] return; }
L_0022C6A4:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 8u));
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[16], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 10u));
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C6D4u); st32((c.r[29].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x0022C6D4u) [[unlikely]] return; }
L_0022C6D4:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 12u));
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 14u));
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C700u); st32((c.r[29].w[0] + 100u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x0022C700u) [[unlikely]] return; }
L_0022C700:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0022C720:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26464u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (t) { goto L_0022C830; } }
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C754u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x0022C754u) [[unlikely]] return; }
L_0022C754:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0022C7BC; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 21u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    set32(c.r[4], c.r[3].w[0] - 14256u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[3], c.r[3].w[0] - 9696u);
    st32((c.r[2].w[0] + 32u), c.f[3]);
    st32((c.r[2].w[0] + 36u), c.f[2]);
    st32((c.r[2].w[0] + 40u), c.f[1]);
    st32((c.r[2].w[0] + 44u), c.f[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 24u), c.r[17].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[4], 0u + 1u);
    c.budget -= 24;
L_0022C7BC:
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C7C8u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x0022C7C8u) [[unlikely]] return; }
L_0022C7C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022C830; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[4], 0u + 19u);
    set32(c.r[3], 0u + 21u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[4], c.r[3].w[0] - 14256u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[3], c.r[3].w[0] - 9696u);
    st32((c.r[2].w[0] + 32u), c.f[3]);
    st32((c.r[2].w[0] + 36u), c.f[2]);
    st32((c.r[2].w[0] + 40u), c.f[1]);
    st32((c.r[2].w[0] + 44u), c.f[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[2].w[0] + 24u), c.r[17].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 24;
L_0022C830:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0022C850:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 21104u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0022C000u < 16384u) { entry = entries_004B[(t - 0x0022C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0022C870:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    mmi::paddub(c.r[22], c.r[4], c.r[0]);
    set32(c.r[16], c.r[22].w[0] + 320u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[18], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[19], c.r[16], c.r[0]);
    mmi::paddub(c.r[20], c.r[16], c.r[0]);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0022CA48; } }
L_0022C8C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[2].w[0] + 20816u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[9], c.r[2].w[0] + 20816u);
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[6].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[8], c.r[2].w[0] + 20816u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[7], c.r[2].w[0] + 20816u);
    st32((c.r[18].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[6], c.r[2].w[0] + 20816u);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[2].w[0] + 20816u);
    set32(c.r[2], c.r[10].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[10].w[0]);
    set32(c.r[10], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[10].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[10].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[9].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[18].w[0] + 4u), c.f[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 20816u);
    set32(c.r[9], c.r[10].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[10], c.r[21].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[10].w[0] << 3);
    set32(c.r[9], c.r[9].w[0] - c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.f[0] = ld32((c.r[8].w[0] + 8u));
    st32((c.r[18].w[0] + 8u), c.f[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 3u)));
    set32(c.r[8], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[21].w[0] + c.r[8].w[0]);
    set32(c.r[8], c.r[9].w[0] << 3);
    set32(c.r[8], c.r[8].w[0] - c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.f[0] = ld32((c.r[7].w[0] + 12u));
    st32((c.r[18].w[0] + 80u), c.f[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 3u)));
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[8], c.r[21].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[8].w[0] << 3);
    set32(c.r[7], c.r[7].w[0] - c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[6].w[0] + 16u));
    st32((c.r[18].w[0] + 84u), c.f[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 3u)));
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[21].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    st32((c.r[18].w[0] + 88u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 3u)));
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[6].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 84;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CA14u); c.f[12] = ld32((c.r[2].w[0] + 24u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0022CA14u) [[unlikely]] return; }
L_0022CA14:
    st16((c.r[19].w[0] + 200u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[20].w[0] + 160u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[20].w[0] + 180u), c.r[3].w[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[21].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 210u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[2].d[0] << 56;
    set32(c.r[18], c.r[18].w[0] + 16u);
    set32(c.r[19], c.r[19].w[0] + 2u);
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 13;
L_0022CA48:
    c.r[21].d[0] = c.r[17].d[0] << 56;
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 56);
    c.r[2].d[0] = c.r[21].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022C8C4u | kUnwind; return; } goto L_0022C8C4; } }
    c.f[1] = ld32((c.r[22].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[22], c.r[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CA7Cu); st32((c.r[22].w[0] + 36u), c.f[0]);  if (depth < kMaxDepth) unit_004B(c, 35u, depth + 1u); else { c.pc = 0x0022CAB0u; return; } if (c.pc != 0x0022CA7Cu) [[unlikely]] return; }
L_0022CA7C:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0022CAB0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[17], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[19], c.r[2].w[0] + 21120u);
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[16], c.r[21].w[0] + 320u);
    set32(c.r[20], c.r[2].w[0] + 21152u);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0022CB68; } }
L_0022CB00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 3u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0022CB3C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022CB20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[18].w[0] + 1u);  if (t) { goto L_0022CB54; } }
L_0022CB20:
    set32(c.r[2], ld32((c.r[19].w[0])));
    mmi::paddub(c.r[4], c.r[21], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CB34u); mmi::paddub(c.r[6], c.r[18], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022CB34u) [[unlikely]] return; }
L_0022CB34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022CB50; } }
L_0022CB3C:
    set32(c.r[2], ld32((c.r[20].w[0])));
    mmi::paddub(c.r[4], c.r[21], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CB50u); mmi::paddub(c.r[6], c.r[18], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022CB50u) [[unlikely]] return; }
L_0022CB50:
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0022CB54:
    c.r[18].d[0] = c.r[2].d[0] << 56;
    set32(c.r[19], c.r[19].w[0] + 4u);
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    c.budget -= 5;
L_0022CB68:
    c.r[2].d[0] = c.r[18].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022CB00u | kUnwind; return; } goto L_0022CB00; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 210u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022CBC4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 211u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022CBC4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 212u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022CBC4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 213u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022CBC4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 214u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022CBC4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[21].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0022CBC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CBCCu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x0022CBCCu) [[unlikely]] return; }
L_0022CBCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CBD4u); set32(c.r[4], c.r[21].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x0022CBD4u) [[unlikely]] return; }
L_0022CBD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CBDCu); set32(c.r[4], c.r[21].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0022CBDCu) [[unlikely]] return; }
L_0022CBDC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 760u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0022CBF0; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[21].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0022CBF0:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0022CC20:
    c.r[3].d[0] = c.r[6].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[6], c.r[3].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 200u)));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0022CC4C; } }
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[6].w[0] + 210u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0022CC4C:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0]; c.r[1].d[0] = c.r[7].sd[0] < 18ll ? 1ull : 0ull;  if (t) { goto L_0022CC90; } }
    set32(c.r[7], c.r[3].w[0] << 4);
    c.r[6].sd[0] = static_cast<std::int32_t>(0xC0030000u);
    set32(c.r[7], c.r[7].w[0] + c.r[5].w[0]);
    c.r[6].d[0] = c.r[6].d[0] | 13107ull;
    st32((c.r[7].w[0] + 80u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F570000u);
    c.r[6].d[0] = c.r[6].d[0] | 2621ull;
    st32((c.r[7].w[0] + 88u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    st32((c.r[7].w[0]), c.r[6].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 4u), c.r[6].w[0]);  if (t) { goto L_0022CD50; } }
    c.r[1].d[0] = c.r[7].sd[0] < 18ll ? 1ull : 0ull;
    c.budget -= 1;
L_0022CC90:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], c.r[3].w[0] << 4);  if (t) { goto L_0022CCF8; } }
    set32(c.r[6], c.r[3].w[0] << 4);
    set32(c.r[7], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3D400000u);
    c.f[3] = c.r[6].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0xBEC50000u);
    c.r[6].d[0] = c.r[6].d[0] | 28836ull;
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[7].w[0]), c.f[0]);
    c.f[2] = ld32((c.r[7].w[0] + 4u));
    c.f[1] = c.r[6].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3E210000u);
    c.r[6].d[0] = c.r[6].d[0] | 18350ull;
    c.f[0] = c.r[6].w[0];
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[7].w[0] + 4u), c.f[2]);
    c.f[2] = ld32((c.r[7].w[0] + 80u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[7].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[7].w[0] + 88u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 88u), c.f[0]);  if (t) { goto L_0022CD50; } }
    set32(c.r[6], c.r[3].w[0] << 4);
    c.budget -= 1;
L_0022CCF8:
    set32(c.r[8], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[8].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3C120000u);
    c.r[6].d[0] = c.r[6].d[0] | 18725ull;
    c.f[3] = c.r[6].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0xBD950000u);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.r[7].d[0] = c.r[6].d[0] | 61792ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3CF50000u);
    c.r[6].d[0] = c.r[6].d[0] | 49806ull;
    st32((c.r[8].w[0]), c.f[0]);
    c.f[2] = ld32((c.r[8].w[0] + 4u));
    c.f[1] = c.r[7].w[0];
    c.f[0] = c.r[6].w[0];
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[8].w[0] + 4u), c.f[2]);
    c.f[2] = ld32((c.r[8].w[0] + 80u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[8].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[8].w[0] + 88u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[8].w[0] + 88u), c.f[0]);
    c.budget -= 22;
L_0022CD50:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[4].d[0] = c.r[4].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] << 2);  goto L_0022CD88; }
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[4].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[6].w[0] + 180u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0xBD880000u);
    c.r[4].d[0] = c.r[4].d[0] | 34953ull;
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[6].w[0] + 180u), c.f[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 10;
L_0022CD88:
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 160u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65292ull;
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 160u), c.r[3].w[0]);  c.pc = t; return; }
L_0022CDB0:
    c.r[3].d[0] = c.r[6].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[6], c.r[3].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 200u)));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0022CDDC; } }
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[6].w[0] + 210u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0022CDDC:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0]; c.r[1].d[0] = c.r[7].sd[0] < 18ll ? 1ull : 0ull;  if (t) { goto L_0022CE20; } }
    set32(c.r[7], c.r[3].w[0] << 4);
    c.r[6].sd[0] = static_cast<std::int32_t>(0xC0040000u);
    set32(c.r[7], c.r[7].w[0] + c.r[5].w[0]);
    c.r[6].d[0] = c.r[6].d[0] | 31457ull;
    st32((c.r[7].w[0] + 80u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0xBEF00000u);
    c.r[6].d[0] = c.r[6].d[0] | 41943ull;
    st32((c.r[7].w[0] + 88u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    st32((c.r[7].w[0]), c.r[6].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 4u), c.r[6].w[0]);  if (t) { goto L_0022CEE0; } }
    c.r[1].d[0] = c.r[7].sd[0] < 18ll ? 1ull : 0ull;
    c.budget -= 1;
L_0022CE20:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], c.r[3].w[0] << 4);  if (t) { goto L_0022CE88; } }
    set32(c.r[6], c.r[3].w[0] << 4);
    set32(c.r[7], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3D400000u);
    c.f[3] = c.r[6].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0xBEC60000u);
    c.r[6].d[0] = c.r[6].d[0] | 47186ull;
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[7].w[0]), c.f[0]);
    c.f[2] = ld32((c.r[7].w[0] + 4u));
    c.f[1] = c.r[6].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0xBDB70000u);
    c.r[6].d[0] = c.r[6].d[0] | 2621ull;
    c.f[0] = c.r[6].w[0];
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[7].w[0] + 4u), c.f[2]);
    c.f[2] = ld32((c.r[7].w[0] + 80u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[7].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[7].w[0] + 88u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 88u), c.f[0]);  if (t) { goto L_0022CEE0; } }
    set32(c.r[6], c.r[3].w[0] << 4);
    c.budget -= 1;
L_0022CE88:
    set32(c.r[8], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[8].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3C120000u);
    c.r[6].d[0] = c.r[6].d[0] | 18725ull;
    c.f[3] = c.r[6].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0xBD970000u);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.r[7].d[0] = c.r[6].d[0] | 26592ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0xBC8C0000u);
    c.r[6].d[0] = c.r[6].d[0] | 28464ull;
    st32((c.r[8].w[0]), c.f[0]);
    c.f[2] = ld32((c.r[8].w[0] + 4u));
    c.f[1] = c.r[7].w[0];
    c.f[0] = c.r[6].w[0];
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[8].w[0] + 4u), c.f[2]);
    c.f[2] = ld32((c.r[8].w[0] + 80u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[8].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[8].w[0] + 88u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[8].w[0] + 88u), c.f[0]);
    c.budget -= 22;
L_0022CEE0:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[4].d[0] = c.r[4].sd[0] < 25ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] << 2);  goto L_0022CF18; }
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[4].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[6].w[0] + 180u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0xBD880000u);
    c.r[4].d[0] = c.r[4].d[0] | 34953ull;
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[6].w[0] + 180u), c.f[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 10;
L_0022CF18:
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 160u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65354ull;
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 160u), c.r[3].w[0]);  c.pc = t; return; }
L_0022CF40:
    c.r[3].d[0] = c.r[6].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[6], c.r[3].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 200u)));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0022CF6C; } }
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[6].w[0] + 210u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0022CF6C:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0]; c.r[1].d[0] = c.r[7].sd[0] < 18ll ? 1ull : 0ull;  if (t) { goto L_0022CFB0; } }
    set32(c.r[7], c.r[3].w[0] << 4);
    c.r[6].sd[0] = static_cast<std::int32_t>(0xBF9A0000u);
    set32(c.r[7], c.r[7].w[0] + c.r[5].w[0]);
    c.r[6].d[0] = c.r[6].d[0] | 57672ull;
    st32((c.r[7].w[0] + 80u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0xBFC60000u);
    c.r[6].d[0] = c.r[6].d[0] | 26214ull;
    st32((c.r[7].w[0] + 88u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    st32((c.r[7].w[0]), c.r[6].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 4u), c.r[6].w[0]);  if (t) { goto L_0022D070; } }
    c.r[1].d[0] = c.r[7].sd[0] < 18ll ? 1ull : 0ull;
    c.budget -= 1;
L_0022CFB0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], c.r[3].w[0] << 4);  if (t) { goto L_0022D018; } }
    set32(c.r[6], c.r[3].w[0] << 4);
    set32(c.r[7], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3D400000u);
    c.f[3] = c.r[6].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0xBE680000u);
    c.r[6].d[0] = c.r[6].d[0] | 20972ull;
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[7].w[0]), c.f[0]);
    c.f[2] = ld32((c.r[7].w[0] + 4u));
    c.f[1] = c.r[6].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0xBE950000u);
    c.r[6].d[0] = c.r[6].d[0] | 28836ull;
    c.f[0] = c.r[6].w[0];
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[7].w[0] + 4u), c.f[2]);
    c.f[2] = ld32((c.r[7].w[0] + 80u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[7].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[7].w[0] + 88u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 88u), c.f[0]);  if (t) { goto L_0022D070; } }
    set32(c.r[6], c.r[3].w[0] << 4);
    c.budget -= 1;
L_0022D018:
    set32(c.r[8], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[8].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3C120000u);
    c.r[6].d[0] = c.r[6].d[0] | 18725ull;
    c.f[3] = c.r[6].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0xBD310000u);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.r[7].d[0] = c.r[6].d[0] | 375ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0xBD620000u);
    c.r[6].d[0] = c.r[6].d[0] | 48686ull;
    st32((c.r[8].w[0]), c.f[0]);
    c.f[2] = ld32((c.r[8].w[0] + 4u));
    c.f[1] = c.r[7].w[0];
    c.f[0] = c.r[6].w[0];
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[8].w[0] + 4u), c.f[2]);
    c.f[2] = ld32((c.r[8].w[0] + 80u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[8].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[8].w[0] + 88u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[8].w[0] + 88u), c.f[0]);
    c.budget -= 22;
L_0022D070:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[4].d[0] = c.r[4].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] << 2);  goto L_0022D0A8; }
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[4].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[6].w[0] + 180u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0xBD880000u);
    c.r[4].d[0] = c.r[4].d[0] | 34953ull;
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[6].w[0] + 180u), c.f[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 10;
L_0022D0A8:
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 160u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65414ull;
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 160u), c.r[3].w[0]);  c.pc = t; return; }
L_0022D0D0:
    c.r[3].d[0] = c.r[6].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[6], c.r[3].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 200u)));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0022D0FC; } }
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[6].w[0] + 210u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0022D0FC:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0]; c.r[1].d[0] = c.r[7].sd[0] < 18ll ? 1ull : 0ull;  if (t) { goto L_0022D140; } }
    set32(c.r[7], c.r[3].w[0] << 4);
    c.r[6].sd[0] = static_cast<std::int32_t>(0xBEB80000u);
    set32(c.r[7], c.r[7].w[0] + c.r[5].w[0]);
    c.r[6].d[0] = c.r[6].d[0] | 20972ull;
    st32((c.r[7].w[0] + 80u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0xC0010000u);
    c.r[6].d[0] = c.r[6].d[0] | 60293ull;
    st32((c.r[7].w[0] + 88u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    st32((c.r[7].w[0]), c.r[6].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 4u), c.r[6].w[0]);  if (t) { goto L_0022D200; } }
    c.r[1].d[0] = c.r[7].sd[0] < 18ll ? 1ull : 0ull;
    c.budget -= 1;
L_0022D140:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], c.r[3].w[0] << 4);  if (t) { goto L_0022D1A8; } }
    set32(c.r[6], c.r[3].w[0] << 4);
    set32(c.r[7], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3D400000u);
    c.f[3] = c.r[6].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0xBD8C0000u);
    c.r[6].d[0] = c.r[6].d[0] | 52429ull;
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[7].w[0]), c.f[0]);
    c.f[2] = ld32((c.r[7].w[0] + 4u));
    c.f[1] = c.r[6].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0xBEC30000u);
    c.r[6].d[0] = c.r[6].d[0] | 34080ull;
    c.f[0] = c.r[6].w[0];
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[7].w[0] + 4u), c.f[2]);
    c.f[2] = ld32((c.r[7].w[0] + 80u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[7].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[7].w[0] + 88u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 88u), c.f[0]);  if (t) { goto L_0022D200; } }
    set32(c.r[6], c.r[3].w[0] << 4);
    c.budget -= 1;
L_0022D1A8:
    set32(c.r[8], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[8].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3C120000u);
    c.r[6].d[0] = c.r[6].d[0] | 18725ull;
    c.f[3] = c.r[6].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0xBC520000u);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.r[7].d[0] = c.r[6].d[0] | 42693ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0xBD940000u);
    c.r[6].d[0] = c.r[6].d[0] | 31456ull;
    st32((c.r[8].w[0]), c.f[0]);
    c.f[2] = ld32((c.r[8].w[0] + 4u));
    c.f[1] = c.r[7].w[0];
    c.f[0] = c.r[6].w[0];
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[8].w[0] + 4u), c.f[2]);
    c.f[2] = ld32((c.r[8].w[0] + 80u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[8].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[8].w[0] + 88u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[8].w[0] + 88u), c.f[0]);
    c.budget -= 22;
L_0022D200:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[4].d[0] = c.r[4].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] << 2);  goto L_0022D238; }
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[4].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[6].w[0] + 180u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0xBD880000u);
    c.r[4].d[0] = c.r[4].d[0] | 34953ull;
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[6].w[0] + 180u), c.f[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 10;
L_0022D238:
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 160u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65475ull;
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 160u), c.r[3].w[0]);  c.pc = t; return; }
L_0022D260:
    c.r[3].d[0] = c.r[6].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[6], c.r[3].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 200u)));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0022D28C; } }
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[6].w[0] + 210u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0022D28C:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0]; c.r[1].d[0] = c.r[7].sd[0] < 18ll ? 1ull : 0ull;  if (t) { goto L_0022D2D0; } }
    set32(c.r[7], c.r[3].w[0] << 4);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F680000u);
    set32(c.r[7], c.r[7].w[0] + c.r[5].w[0]);
    c.r[6].d[0] = c.r[6].d[0] | 62915ull;
    st32((c.r[7].w[0] + 80u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x40050000u);
    c.r[6].d[0] = c.r[6].d[0] | 7864ull;
    st32((c.r[7].w[0] + 88u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    st32((c.r[7].w[0]), c.r[6].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 4u), c.r[6].w[0]);  if (t) { goto L_0022D390; } }
    c.r[1].d[0] = c.r[7].sd[0] < 18ll ? 1ull : 0ull;
    c.budget -= 1;
L_0022D2D0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], c.r[3].w[0] << 4);  if (t) { goto L_0022D338; } }
    set32(c.r[6], c.r[3].w[0] << 4);
    set32(c.r[7], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3D400000u);
    c.f[3] = c.r[6].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3E300000u);
    c.f[1] = c.r[6].w[0];
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3EC80000u);
    c.r[6].d[0] = c.r[6].d[0] | 20972ull;
    st32((c.r[7].w[0]), c.f[0]);
    c.f[2] = ld32((c.r[7].w[0] + 4u));
    c.f[0] = c.r[6].w[0];
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[7].w[0] + 4u), c.f[2]);
    c.f[2] = ld32((c.r[7].w[0] + 80u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[7].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[7].w[0] + 88u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 88u), c.f[0]);  if (t) { goto L_0022D390; } }
    set32(c.r[6], c.r[3].w[0] << 4);
    c.budget -= 1;
L_0022D338:
    set32(c.r[8], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[8].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3C120000u);
    c.r[6].d[0] = c.r[6].d[0] | 18725ull;
    c.f[3] = c.r[6].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3D050000u);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.r[7].d[0] = c.r[6].d[0] | 7865ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3D980000u);
    c.r[6].d[0] = c.r[6].d[0] | 8987ull;
    st32((c.r[8].w[0]), c.f[0]);
    c.f[2] = ld32((c.r[8].w[0] + 4u));
    c.f[1] = c.r[7].w[0];
    c.f[0] = c.r[6].w[0];
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[8].w[0] + 4u), c.f[2]);
    c.f[2] = ld32((c.r[8].w[0] + 80u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[8].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[8].w[0] + 88u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[8].w[0] + 88u), c.f[0]);
    c.budget -= 22;
L_0022D390:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[4].d[0] = c.r[4].sd[0] < 25ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] << 2);  goto L_0022D3C8; }
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[4].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[6].w[0] + 180u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0xBD880000u);
    c.r[4].d[0] = c.r[4].d[0] | 34953ull;
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[6].w[0] + 180u), c.f[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 10;
L_0022D3C8:
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 160u)));
    set32(c.r[3], c.r[3].w[0] + 244u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 160u), c.r[3].w[0]);  c.pc = t; return; }
L_0022D3E0:
    c.r[3].d[0] = c.r[6].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[6], c.r[3].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 200u)));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0022D40C; } }
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[6].w[0] + 210u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0022D40C:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0]; c.r[1].d[0] = c.r[7].sd[0] < 18ll ? 1ull : 0ull;  if (t) { goto L_0022D450; } }
    set32(c.r[7], c.r[3].w[0] << 4);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3FF30000u);
    set32(c.r[7], c.r[7].w[0] + c.r[5].w[0]);
    c.r[6].d[0] = c.r[6].d[0] | 13107ull;
    st32((c.r[7].w[0] + 80u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F940000u);
    c.r[6].d[0] = c.r[6].d[0] | 31457ull;
    st32((c.r[7].w[0] + 88u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    st32((c.r[7].w[0]), c.r[6].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 4u), c.r[6].w[0]);  if (t) { goto L_0022D510; } }
    c.r[1].d[0] = c.r[7].sd[0] < 18ll ? 1ull : 0ull;
    c.budget -= 1;
L_0022D450:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], c.r[3].w[0] << 4);  if (t) { goto L_0022D4B8; } }
    set32(c.r[6], c.r[3].w[0] << 4);
    set32(c.r[7], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3D400000u);
    c.f[3] = c.r[6].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3EB60000u);
    c.r[6].d[0] = c.r[6].d[0] | 26214ull;
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[7].w[0]), c.f[0]);
    c.f[2] = ld32((c.r[7].w[0] + 4u));
    c.f[1] = c.r[6].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3E5E0000u);
    c.r[6].d[0] = c.r[6].d[0] | 47186ull;
    c.f[0] = c.r[6].w[0];
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[7].w[0] + 4u), c.f[2]);
    c.f[2] = ld32((c.r[7].w[0] + 80u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[7].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[7].w[0] + 88u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 88u), c.f[0]);  if (t) { goto L_0022D510; } }
    set32(c.r[6], c.r[3].w[0] << 4);
    c.budget -= 1;
L_0022D4B8:
    set32(c.r[8], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[8].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3C120000u);
    c.r[6].d[0] = c.r[6].d[0] | 18725ull;
    c.f[3] = c.r[6].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3D8A0000u);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.r[7].d[0] = c.r[6].d[0] | 63664ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3D290000u);
    c.r[6].d[0] = c.r[6].d[0] | 45317ull;
    st32((c.r[8].w[0]), c.f[0]);
    c.f[2] = ld32((c.r[8].w[0] + 4u));
    c.f[1] = c.r[7].w[0];
    c.f[0] = c.r[6].w[0];
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[8].w[0] + 4u), c.f[2]);
    c.f[2] = ld32((c.r[8].w[0] + 80u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[8].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[8].w[0] + 88u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[8].w[0] + 88u), c.f[0]);
    c.budget -= 22;
L_0022D510:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[4].d[0] = c.r[4].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] << 2);  goto L_0022D548; }
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[4].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[6].w[0] + 180u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0xBD880000u);
    c.r[4].d[0] = c.r[4].d[0] | 34953ull;
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[6].w[0] + 180u), c.f[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 10;
L_0022D548:
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 160u)));
    set32(c.r[3], c.r[3].w[0] + 182u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 160u), c.r[3].w[0]);  c.pc = t; return; }
L_0022D560:
    c.r[3].d[0] = c.r[6].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[6], c.r[3].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 200u)));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0022D58C; } }
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[6].w[0] + 210u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0022D58C:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0]; c.r[1].d[0] = c.r[7].sd[0] < 18ll ? 1ull : 0ull;  if (t) { goto L_0022D5D0; } }
    set32(c.r[7], c.r[3].w[0] << 4);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x400C0000u);
    set32(c.r[7], c.r[7].w[0] + c.r[5].w[0]);
    c.r[6].d[0] = c.r[6].d[0] | 10486ull;
    st32((c.r[7].w[0] + 80u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3D230000u);
    c.r[6].d[0] = c.r[6].d[0] | 55050ull;
    st32((c.r[7].w[0] + 88u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    st32((c.r[7].w[0]), c.r[6].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 4u), c.r[6].w[0]);  if (t) { goto L_0022D690; } }
    c.r[1].d[0] = c.r[7].sd[0] < 18ll ? 1ull : 0ull;
    c.budget -= 1;
L_0022D5D0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], c.r[3].w[0] << 4);  if (t) { goto L_0022D638; } }
    set32(c.r[6], c.r[3].w[0] << 4);
    set32(c.r[7], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3D400000u);
    c.f[3] = c.r[6].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3ED20000u);
    c.r[6].d[0] = c.r[6].d[0] | 15729ull;
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[7].w[0]), c.f[0]);
    c.f[2] = ld32((c.r[7].w[0] + 4u));
    c.f[1] = c.r[6].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3C190000u);
    c.r[6].d[0] = c.r[6].d[0] | 39322ull;
    c.f[0] = c.r[6].w[0];
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[7].w[0] + 4u), c.f[2]);
    c.f[2] = ld32((c.r[7].w[0] + 80u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[7].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[7].w[0] + 88u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 88u), c.f[0]);  if (t) { goto L_0022D690; } }
    set32(c.r[6], c.r[3].w[0] << 4);
    c.budget -= 1;
L_0022D638:
    set32(c.r[8], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[8].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3C120000u);
    c.r[6].d[0] = c.r[6].d[0] | 18725ull;
    c.f[3] = c.r[6].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3DA00000u);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.r[7].d[0] = c.r[6].d[0] | 11982ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3AEA0000u);
    c.r[6].d[0] = c.r[6].d[0] | 3744ull;
    st32((c.r[8].w[0]), c.f[0]);
    c.f[2] = ld32((c.r[8].w[0] + 4u));
    c.f[1] = c.r[7].w[0];
    c.f[0] = c.r[6].w[0];
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[8].w[0] + 4u), c.f[2]);
    c.f[2] = ld32((c.r[8].w[0] + 80u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[8].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[8].w[0] + 88u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[8].w[0] + 88u), c.f[0]);
    c.budget -= 22;
L_0022D690:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[4].d[0] = c.r[4].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] << 2);  goto L_0022D6C8; }
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[4].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[6].w[0] + 180u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0xBD880000u);
    c.r[4].d[0] = c.r[4].d[0] | 34953ull;
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[6].w[0] + 180u), c.f[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 10;
L_0022D6C8:
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 160u)));
    set32(c.r[3], c.r[3].w[0] + 122u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 160u), c.r[3].w[0]);  c.pc = t; return; }
L_0022D6E0:
    c.r[3].d[0] = c.r[6].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[6], c.r[3].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 200u)));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0022D70C; } }
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[6].w[0] + 210u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0022D70C:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0]; c.r[1].d[0] = c.r[7].sd[0] < 18ll ? 1ull : 0ull;  if (t) { goto L_0022D750; } }
    set32(c.r[7], c.r[3].w[0] << 4);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3FE70000u);
    set32(c.r[7], c.r[7].w[0] + c.r[5].w[0]);
    c.r[6].d[0] = c.r[6].d[0] | 44564ull;
    st32((c.r[7].w[0] + 80u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0xBF810000u);
    c.r[6].d[0] = c.r[6].d[0] | 18350ull;
    st32((c.r[7].w[0] + 88u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    st32((c.r[7].w[0]), c.r[6].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 4u), c.r[6].w[0]);  if (t) { goto L_0022D810; } }
    c.r[1].d[0] = c.r[7].sd[0] < 18ll ? 1ull : 0ull;
    c.budget -= 1;
L_0022D750:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], c.r[3].w[0] << 4);  if (t) { goto L_0022D7B8; } }
    set32(c.r[6], c.r[3].w[0] << 4);
    set32(c.r[7], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3D400000u);
    c.f[3] = c.r[6].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3EAE0000u);
    c.r[6].d[0] = c.r[6].d[0] | 26215ull;
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[7].w[0]), c.f[0]);
    c.f[2] = ld32((c.r[7].w[0] + 4u));
    c.f[1] = c.r[6].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0xBE400000u);
    c.r[6].d[0] = c.r[6].d[0] | 41943ull;
    c.f[0] = c.r[6].w[0];
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[7].w[0] + 4u), c.f[2]);
    c.f[2] = ld32((c.r[7].w[0] + 80u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[7].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[7].w[0] + 88u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 88u), c.f[0]);  if (t) { goto L_0022D810; } }
    set32(c.r[6], c.r[3].w[0] << 4);
    c.budget -= 1;
L_0022D7B8:
    set32(c.r[8], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[8].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3C120000u);
    c.r[6].d[0] = c.r[6].d[0] | 18725ull;
    c.f[3] = c.r[6].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3D840000u);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.r[7].d[0] = c.r[6].d[0] | 25463ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0xBD130000u);
    c.r[6].d[0] = c.r[6].d[0] | 49061ull;
    st32((c.r[8].w[0]), c.f[0]);
    c.f[2] = ld32((c.r[8].w[0] + 4u));
    c.f[1] = c.r[7].w[0];
    c.f[0] = c.r[6].w[0];
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[8].w[0] + 4u), c.f[2]);
    c.f[2] = ld32((c.r[8].w[0] + 80u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[8].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[8].w[0] + 88u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[8].w[0] + 88u), c.f[0]);
    c.budget -= 22;
L_0022D810:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[4].d[0] = c.r[4].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] << 2);  goto L_0022D848; }
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[4].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[6].w[0] + 180u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0xBD880000u);
    c.r[4].d[0] = c.r[4].d[0] | 34953ull;
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[6].w[0] + 180u), c.f[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 10;
L_0022D848:
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 160u)));
    set32(c.r[3], c.r[3].w[0] + 61u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 160u), c.r[3].w[0]);  c.pc = t; return; }
L_0022D860:
    c.r[7].d[0] = c.r[6].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 200u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0022D88C; } }
    set32(c.r[3], c.r[7].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0] + 210u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0022D88C:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; c.r[1].d[0] = c.r[6].sd[0] < 18ll ? 1ull : 0ull;  if (t) { goto L_0022D8B8; } }
    set32(c.r[3], c.r[7].w[0] << 4);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    st32((c.r[3].w[0]), c.r[6].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.r[6].w[0]);  if (t) { goto L_0022D920; } }
    c.r[1].d[0] = c.r[6].sd[0] < 18ll ? 1ull : 0ull;
    c.budget -= 1;
L_0022D8B8:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[7].w[0] << 4);  if (t) { goto L_0022D8F4; } }
    set32(c.r[3], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D400000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 8u), c.f[0]);  if (t) { goto L_0022D920; } }
    set32(c.r[3], c.r[7].w[0] << 4);
    c.budget -= 1;
L_0022D8F4:
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C120000u);
    c.r[3].d[0] = c.r[3].d[0] | 18725ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 8u), c.f[0]);
    c.budget -= 11;
L_0022D920:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0022D954; } }
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 180u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 180u), c.f[0]);
    c.budget -= 9;
L_0022D954:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022D960:
    c.r[7].d[0] = c.r[6].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 200u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[7].w[0] << 4);  if (t) { goto L_0022D990; } }
    set32(c.r[3], c.r[7].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0] + 210u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[7].w[0] << 4);
    c.budget -= 3;
L_0022D990:
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E330000u);
    c.r[3].d[0] = c.r[3].d[0] | 13107ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 8u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0022D9F0; } }
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 180u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBDCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 180u), c.f[0]);
    c.budget -= 9;
L_0022D9F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022DA00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0022DA10:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_0022DA20:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], c.r[18].w[0] + 320u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DA44u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001E(c, 201u, depth + 1u); else { c.pc = 0x0017BBC0u; return; } if (c.pc != 0x0022DA44u) [[unlikely]] return; }
L_0022DA44:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[5].w[0]);
    set32(c.r[4], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20352u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 256u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] + 20720u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20380u), c.r[3].w[0]);  if (t) { goto L_0022DD58; } }
    c.r[5].d[0] = c.r[17].d[0] << 56;
    c.budget -= 1;
L_0022DAA4:
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[3], c.r[5].w[0] + c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 210u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] + 1u);  if (t) { goto L_0022DD4C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[2].w[0] + 20720u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 256u)));
    c.f[0] = ld32((c.r[2].w[0] + 180u));
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[1] = 0u;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = fp::max(c.f[1], c.f[0]);
    c.f[1] = c.r[8].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[8], c.f[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 23;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[17].d[0] << 56;  if (t) { goto L_0022DC30; } }
    c.r[2].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022DC2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DB28u); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0022DB28u) [[unlikely]] return; }
L_0022DB28:
    c.r[2].d[0] = c.r[17].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.f[13] = ld32((c.r[2].w[0] + 4u));
    c.f[14] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DB48u); c.f[12] = ld32((c.r[2].w[0]));  if (depth < kMaxDepth) unit_000F(c, 18u, depth + 1u); else { c.pc = 0x0013C8A0u; return; } if (c.pc != 0x0022DB48u) [[unlikely]] return; }
L_0022DB48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DB50u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0022DB50u) [[unlikely]] return; }
L_0022DB50:
    set32(c.r[3], c.r[18].w[0] + 32u);
    set32(c.r[2], c.r[29].w[0] + 64u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    vu::move(c.vu0, 1u, 4u, 0u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20348u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20400u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], c.r[3].w[0] + 21184u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[5], c.r[3].w[0] + 21504u);
    c.r[2].d[0] = c.r[17].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20384u), c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], c.r[3].w[0] + 21344u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[1].w[0] - 20368u), c.r[5].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 45;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; st32((c.r[1].w[0] - 20388u), c.r[4].w[0]);  if (t) { goto L_0022DC18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DC10u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 77u, depth + 1u); else { c.pc = 0x001719F0u; return; } if (c.pc != 0x0022DC10u) [[unlikely]] return; }
L_0022DC10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022DD48; } }
L_0022DC18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DC24u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 163u, depth + 1u); else { c.pc = 0x00172AB0u; return; } if (c.pc != 0x0022DC24u) [[unlikely]] return; }
L_0022DC24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022DD48; } }
L_0022DC2C:
    c.r[2].d[0] = c.r[17].d[0] << 56;
    c.budget -= 1;
L_0022DC30:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[9], c.r[3].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 32u));
    c.f[1] = ld32((c.r[9].w[0] + 80u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[6], c.r[3].w[0] + 21344u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[5], c.r[3].w[0] + 21184u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], c.r[3].w[0] + 21504u);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[1] = ld32((c.r[9].w[0] + 84u));
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[7], c.r[29].w[0] + 64u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[1] = ld32((c.r[9].w[0] + 88u));
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[1].w[0] - 20396u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[29].w[0] + 72u), c.f[0]);
    st32((c.r[29].w[0] + 76u), c.r[8].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[1].w[0] - 20388u), c.r[6].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[1].w[0] - 20384u), c.r[5].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.budget -= 54;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DD08u); set32(c.r[4], ld32((c.r[3].w[0] + 160u)));  if (depth < kMaxDepth) unit_000E(c, 277u, depth + 1u); else { c.pc = 0x0013B2D0u; return; } if (c.pc != 0x0022DD08u) [[unlikely]] return; }
L_0022DD08:
    c.r[2].d[0] = c.r[17].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] - 20372u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    st32((c.r[1].w[0] - 20416u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DD44u); st32((c.r[1].w[0] - 20412u), c.f[0]);  if (depth < kMaxDepth) unit_001C(c, 51u, depth + 1u); else { c.pc = 0x001712A0u; return; } if (c.pc != 0x0022DD44u) [[unlikely]] return; }
L_0022DD44:
    c.budget -= 1;
L_0022DD48:
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0022DD4C:
    c.r[17].d[0] = c.r[3].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 3;
L_0022DD58:
    c.r[3].d[0] = c.r[17].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = c.r[17].d[0] << 56;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022DAA4u | kUnwind; return; } goto L_0022DAA4; } }
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0022DD90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[3], c.r[2].w[0] - 31003u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[28].w[0] - 25252u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25256u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    set32(c.r[8], c.r[2].w[0] - 8160u);
    set32(c.r[6], c.r[28].w[0] - 25260u);
    set32(c.r[7], c.r[28].w[0] - 25264u);
    set32(c.r[2], c.r[4].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] - 8208u);
    st8((c.r[28].w[0] - 25248u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 22;
L_0022DDE8:
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(0u));
    st32((c.r[8].w[0]), 0u);
    st32((c.r[8].w[0] + 4u), 0u);
    st32((c.r[8].w[0] + 8u), 0u);
    st32((c.r[4].w[0]), 0u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[5].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[8], c.r[8].w[0] + 12u);
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022DDE8u | kUnwind; return; } goto L_0022DDE8; } }
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    set32(c.r[5], 0u + 3u);
    c.budget -= 2;
L_0022DE2C:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DE38u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x0022DE38u) [[unlikely]] return; }
L_0022DE38:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0022DE74; }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 22u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] - 8080u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 13;
L_0022DE74:
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 3u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022DE2Cu | kUnwind; return; } goto L_0022DE2C; } }
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    set32(c.r[5], 0u + 3u);
    c.budget -= 2;
L_0022DE88:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DE94u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x0022DE94u) [[unlikely]] return; }
L_0022DE94:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0022DED4; }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 22u);
    set32(c.r[3], 0u + 5u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[3], c.r[3].w[0] - 8080u);
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 14;
L_0022DED4:
    c.r[3].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], 0u + 3u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022DE88u | kUnwind; return; } goto L_0022DE88; } }
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0022DEF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 3u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DF08u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x0022DF08u) [[unlikely]] return; }
L_0022DF08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022DF40; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 22u);
    set32(c.r[3], 0u + 6u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[3], c.r[3].w[0] - 8080u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 12;
L_0022DF40:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0022DF50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 3u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DF68u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x0022DF68u) [[unlikely]] return; }
L_0022DF68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022DFA0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 22u);
    set32(c.r[3], 0u + 4u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[3], c.r[3].w[0] - 8080u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 12;
L_0022DFA0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0022DFB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 3u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DFC8u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x0022DFC8u) [[unlikely]] return; }
L_0022DFC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022E000; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 22u);
    set32(c.r[3], 0u + 7u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[3], c.r[3].w[0] - 8080u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 12;
L_0022E000:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0022E010:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 3u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E028u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x0022E028u) [[unlikely]] return; }
L_0022E028:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022E060; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 22u);
    set32(c.r[3], 0u + 9u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[3], c.r[3].w[0] - 8080u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 12;
L_0022E060:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0022E070:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 22000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0022C000u < 16384u) { entry = entries_004B[(t - 0x0022C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0022E090:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[5], c.r[5].w[0] + 21584u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    st32((c.r[4].w[0] + 168u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + 320u);  if (t) { goto L_0022E30C; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[6], c.r[6].w[0] + 25280u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[5].w[0];  c.pc = t; if (t - 0x0022C000u < 16384u) { entry = entries_004B[(t - 0x0022C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0022E0E8:
    st32((c.r[3].w[0] + 12u), 0u);
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 513u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0022E118; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 5u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 260u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 290u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 55u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0022E314; } }
L_0022E118:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 5u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 260u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 292u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 55u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0022E314; } }
L_0022E134:
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 513u)));
    c.budget -= 4;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], 0u + 2u);  goto L_0022E15C; }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 524u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0022E158; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 12u), 0u);  if (t) { goto L_0022E314; } }
L_0022E158:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_0022E15C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0022E314; } }
L_0022E164:
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 301u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0022E1B8; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[6], c.r[5].w[0] + 16144u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[5], c.r[5].w[0] + 16146u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 256u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    st16((c.r[3].w[0] + 36u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 256u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 88u), c.r[5].w[0]);  if (t) { goto L_0022E1F8; } }
L_0022E1B8:
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[6], c.r[5].w[0] + 16240u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[5], c.r[5].w[0] + 16242u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 256u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    st16((c.r[3].w[0] + 36u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 256u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    st32((c.r[4].w[0] + 88u), c.r[5].w[0]);
    c.budget -= 16;
L_0022E1F8:
    set32(c.r[8], ld32((c.r[28].w[0] - 26300u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[6], c.r[5].w[0] + 21632u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 260u)));
    c.r[5].d[0] = c.r[5].d[0] & 3ull;
    st8((c.r[3].w[0] + 45u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[3].w[0] + 16u), c.r[7].w[0]);
    st32((c.r[3].w[0] + 20u), c.r[7].w[0]);
    st32((c.r[3].w[0] + 24u), c.r[7].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 45u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 19;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0022E258; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F730000u);
    c.r[5].d[0] = c.r[5].d[0] | 13107ull;
    st32((c.r[3].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 24u), c.r[5].w[0]);
    c.budget -= 5;
L_0022E258:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 38u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_0022E314; } }
L_0022E270:
    set32(c.r[4], 0u + 32u);
    st16((c.r[3].w[0] + 38u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 12u), 0u);  if (t) { goto L_0022E314; } }
L_0022E280:
    st8((c.r[3].w[0] + 45u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 112u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 116u), 0u);
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 301u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 692u)));
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 15;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0022E314; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0022E314; } }
L_0022E2C4:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + 16u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0022E314; } }
L_0022E2E0:
    set32(c.r[5], 0u + 144u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[3].w[0] + 12u), 0u);
    st32((c.r[3].w[0] + 16u), 0u);
    c.r[3].d[0] = 0ull | 49152ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_0022E314; } }
L_0022E2FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 12u), 0u);  if (t) { goto L_0022E314; } }
L_0022E304:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 12u), 0u);  if (t) { goto L_0022E314; } }
L_0022E30C:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0022E314:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022E320:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0022E3EC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], c.r[5].w[0] + 25328u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0022C000u < 16384u) { entry = entries_004B[(t - 0x0022C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0022E354:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E35Cu);  if (depth < kMaxDepth) unit_004B(c, 111u, depth + 1u); else { c.pc = 0x0022E400u; return; } if (c.pc != 0x0022E35Cu) [[unlikely]] return; }
L_0022E35C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0022E3F0; } }
L_0022E364:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E36Cu);  if (depth < kMaxDepth) unit_004B(c, 115u, depth + 1u); else { c.pc = 0x0022E550u; return; } if (c.pc != 0x0022E36Cu) [[unlikely]] return; }
L_0022E36C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022E3EC; } }
L_0022E374:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E37Cu);  if (depth < kMaxDepth) unit_004B(c, 116u, depth + 1u); else { c.pc = 0x0022E5D0u; return; } if (c.pc != 0x0022E37Cu) [[unlikely]] return; }
L_0022E37C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022E3EC; } }
L_0022E384:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E38Cu);  if (depth < kMaxDepth) unit_004B(c, 117u, depth + 1u); else { c.pc = 0x0022E6A0u; return; } if (c.pc != 0x0022E38Cu) [[unlikely]] return; }
L_0022E38C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022E3EC; } }
L_0022E394:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E39Cu);  if (depth < kMaxDepth) unit_004B(c, 118u, depth + 1u); else { c.pc = 0x0022E740u; return; } if (c.pc != 0x0022E39Cu) [[unlikely]] return; }
L_0022E39C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022E3EC; } }
L_0022E3A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E3ACu);  if (depth < kMaxDepth) unit_004B(c, 127u, depth + 1u); else { c.pc = 0x0022EB60u; return; } if (c.pc != 0x0022E3ACu) [[unlikely]] return; }
L_0022E3AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022E3EC; } }
L_0022E3B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E3BCu);  if (depth < kMaxDepth) unit_004B(c, 133u, depth + 1u); else { c.pc = 0x0022F240u; return; } if (c.pc != 0x0022E3BCu) [[unlikely]] return; }
L_0022E3BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022E3EC; } }
L_0022E3C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E3CCu);  if (depth < kMaxDepth) unit_004B(c, 136u, depth + 1u); else { c.pc = 0x0022F320u; return; } if (c.pc != 0x0022E3CCu) [[unlikely]] return; }
L_0022E3CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022E3EC; } }
L_0022E3D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E3DCu);  if (depth < kMaxDepth) unit_004B(c, 137u, depth + 1u); else { c.pc = 0x0022F3E0u; return; } if (c.pc != 0x0022E3DCu) [[unlikely]] return; }
L_0022E3DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022E3EC; } }
L_0022E3E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E3ECu);  if (depth < kMaxDepth) unit_004B(c, 143u, depth + 1u); else { c.pc = 0x0022F890u; return; } if (c.pc != 0x0022E3ECu) [[unlikely]] return; }
L_0022E3EC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0022E3F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0022E400:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], c.r[17].w[0] + 320u);  if (t) { goto L_0022E530; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0022E434; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0022E534; } }
L_0022E434:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 25348u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022E448; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 2;
L_0022E448:
    c.f[1] = ld32((c.r[5].w[0] + 12u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[2] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[5].w[0] + 12u), c.f[0]);  if (t) { goto L_0022E530; } }
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 3u);
    c.budget -= 6;
L_0022E490:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E49Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x0022E49Cu) [[unlikely]] return; }
L_0022E49C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0022E4DC; }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 22u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[3], c.r[3].w[0] - 8080u);
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 14;
L_0022E4DC:
    c.r[2].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 3u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022E490u | kUnwind; return; } goto L_0022E490; } }
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E4F8u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x0022E4F8u) [[unlikely]] return; }
L_0022E4F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022E530; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 22u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[3], c.r[3].w[0] - 8080u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 12;
L_0022E530:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0022E534:
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0022E550:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[4].w[0] + 320u);  if (t) { goto L_0022E5C4; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0022E570; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0022E5C8; } }
L_0022E570:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 25348u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022E584; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[6].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 2;
L_0022E584:
    c.f[1] = ld32((c.r[6].w[0] + 12u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[2] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[6].w[0] + 12u), c.f[0]);  if (t) { goto L_0022E5C4; } }
    st32((c.r[6].w[0] + 12u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0022E5C4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0022E5C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0022E5D0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[4].w[0] + 320u);  if (t) { goto L_0022E678; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0022E5F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0022E67C; } }
L_0022E5F0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 25348u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022E608; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[6].w[0] + 12u), c.r[3].w[0]);
    st16((c.r[6].w[0] + 38u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
L_0022E608:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 38u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0022E674; }
    c.f[1] = ld32((c.r[6].w[0] + 12u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CA30000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[2] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[6].w[0] + 12u), c.f[0]);  if (t) { goto L_0022E678; } }
    st32((c.r[6].w[0] + 12u), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 4u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0022E678; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 25256u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0022E678; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0022E674:
    st16((c.r[6].w[0] + 38u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0022E678:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0022E67C:
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 36u)));
    st16((c.r[28].w[0] - 25240u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 88u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[28].w[0] - 25244u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0022E6A0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[4].w[0] + 320u);  if (t) { goto L_0022E72C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0022E6C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0022E730; } }
L_0022E6C0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 25348u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022E6D4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[6].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 2;
L_0022E6D4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 38u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0022E728; }
    c.f[1] = ld32((c.r[6].w[0] + 12u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CA30000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[2] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[6].w[0] + 12u), c.f[0]);  if (t) { goto L_0022E72C; } }
    st32((c.r[6].w[0] + 12u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0022E72C; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0022E728:
    st16((c.r[6].w[0] + 38u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0022E72C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0022E730:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0022E740:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], ld32((c.r[28].w[0] - 26304u)));
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    set32(c.r[16], c.r[19].w[0] + 320u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 513u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[18], c.r[0], c.r[0]);  if (t) { goto L_0022E7A8; } }
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[6], c.r[7], c.r[0]);
    c.budget -= 2;
L_0022E778:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 260u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 301u)));
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_0022E794; }
    c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 404u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 3;
L_0022E794:
    c.r[3].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022E778u | kUnwind; return; } goto L_0022E778; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));  if (t) { goto L_0022E7BC; } }
L_0022E7A8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 6u)));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 404u)));
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 5;
L_0022E7BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[5], c.r[3].w[0] + 31536u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 5u)));
    set32(c.r[3], 0u + 4u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 644u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[17], ld32((c.r[5].w[0])));  if (t) { goto L_0022EB30; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0022EB00; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0022E8D4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0022E870; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 1u);  goto L_0022E818; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));  if (t) { goto L_0022EB34; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0022E818:
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD8F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 23593ull;
    st32((c.r[19].w[0] + 32u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C440000u);
    c.r[2].d[0] = c.r[2].d[0] | 39846ull;
    st32((c.r[19].w[0] + 36u), c.r[2].w[0]);
    st16((c.r[16].w[0] + 40u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 42u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 44u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 301u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 33u);  if (t) { goto L_0022E868; } }
    set32(c.r[5], 0u + 11u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E85Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0022E85Cu) [[unlikely]] return; }
L_0022E85C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 25348u)));  if (t) { goto L_0022E874; } }
    set32(c.r[5], 0u + 33u);
    c.budget -= 1;
L_0022E868:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E870u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0022E870u) [[unlikely]] return; }
L_0022E870:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 25348u)));
    c.budget -= 1;
L_0022E874:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022E884; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[19].w[0] + 116u), c.r[3].w[0]);
    c.budget -= 2;
L_0022E884:
    c.f[1] = ld32((c.r[19].w[0] + 116u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[2] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[19].w[0] + 116u), c.f[0]);  if (t) { goto L_0022EB30; } }
    st32((c.r[19].w[0] + 116u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E8CCu); st16((c.r[16].w[0] + 38u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_004B(c, 74u, depth + 1u); else { c.pc = 0x0022DFB0u; return; } if (c.pc != 0x0022E8CCu) [[unlikely]] return; }
L_0022E8CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022EB30; } }
L_0022E8D4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 42u)));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E8E8u); st16((c.r[16].w[0] + 42u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0025(c, 272u, depth + 1u); else { c.pc = 0x00196E60u; return; } if (c.pc != 0x0022E8E8u) [[unlikely]] return; }
L_0022E8E8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0022E8F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 40u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0022E948; } }
L_0022E8F8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 42u)));
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_0022E94C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E910u);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x0022E910u) [[unlikely]] return; }
L_0022E910:
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 40u)));
    c.r[4].d[0] = c.hi.d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0022E944; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    c.budget -= 5;
L_0022E944:
    st16((c.r[16].w[0] + 40u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 1;
L_0022E948:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_0022E94C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E954u);  if (depth < kMaxDepth) unit_0025(c, 271u, depth + 1u); else { c.pc = 0x00196E40u; return; } if (c.pc != 0x0022E954u) [[unlikely]] return; }
L_0022E954:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022EB30; } }
    st8((c.r[16].w[0] + 44u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 38u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0022EAF8; }
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 46u)));
    set32(c.r[3], 0u + 255u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 256u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0])));
    c.budget -= 11;
    { const bool t = c.r[7].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 255u);  if (t) { goto L_0022EA8C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 644u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0022E9D8; } }
    c.r[4].d[0] = c.r[18].d[0] << 56;
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_0022E9C8; } }
    set32(c.r[3], 0u + 3u);
    set32(c.r[7], 0u + 113u);
    st8((c.r[16].w[0] + 46u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
L_0022E9C8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0022E9D8; } }
    set32(c.r[7], 0u + 112u);
    st8((c.r[16].w[0] + 46u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0022E9D8:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 644u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0022EA0C; } }
    c.r[4].d[0] = c.r[18].d[0] << 56;
    set32(c.r[3], 0u + 5u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0022EA0C; } }
    set32(c.r[3], 0u + 3u);
    set32(c.r[7], 0u + 106u);
    st8((c.r[16].w[0] + 46u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0022EA0C:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 644u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0022EA58; } }
    c.r[4].d[0] = c.r[18].d[0] << 56;
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0022EA44; } }
    set32(c.r[3], 0u + 3u);
    set32(c.r[7], 0u + 165u);
    st8((c.r[16].w[0] + 46u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
L_0022EA44:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0022EA58; } }
    set32(c.r[3], 0u + 3u);
    set32(c.r[7], 0u + 168u);
    st8((c.r[16].w[0] + 46u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0022EA58:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 6u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 644u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0022EA88; } }
    c.r[3].d[0] = c.r[18].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0022EA88; } }
    set32(c.r[3], 0u + 3u);
    set32(c.r[7], 0u + 52u);
    st8((c.r[16].w[0] + 46u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0022EA88:
    set32(c.r[3], 0u + 255u);
    c.budget -= 1;
L_0022EA8C:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_0022EAD8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 46u)));
    c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0022EAD8; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 46u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 44u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[4], c.r[2].w[0] + 29120u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 644u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EACCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 262u, depth + 1u); else { c.pc = 0x00196BF0u; return; } if (c.pc != 0x0022EACCu) [[unlikely]] return; }
L_0022EACC:
    set32(c.r[3], 0u + 60u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 38u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0022EB30; } }
L_0022EAD8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 5u)));
    set32(c.r[3], 0u + 60u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 44u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 38u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0022EB30; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0022EAF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 38u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0022EB30; } }
L_0022EB00:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 38u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 38u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0022EB30; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 5u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[28].w[0] - 25344u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
L_0022EB30:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    c.budget -= 1;
L_0022EB34:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022EB44; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[19].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0022EB44:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0022EB60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[3], c.r[3].w[0] - 14288u);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[18].w[0] + 320u);  if (t) { goto L_0022F220; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0022F160; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0022ED08; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[6].d[0];  if (t) { goto L_0022ED08; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], c.r[5].w[0] + 1u);  if (t) { goto L_0022EBD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 25252u)));  if (t) { goto L_0022F164; } }
    set32(c.r[4], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0022EBD4:
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[18].w[0] + 112u), 0u);
    st32((c.r[18].w[0] + 116u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    st32((c.r[16].w[0] + 28u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 10u)));
    st8((c.r[16].w[0] + 49u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 12u)));
    st8((c.r[16].w[0] + 50u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    st8((c.r[16].w[0] + 53u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 301u)));
    c.budget -= 17;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_0022EC20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 47u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0022EC24; } }
L_0022EC20:
    st8((c.r[16].w[0] + 47u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 1;
L_0022EC24:
    st8((c.r[16].w[0] + 51u), static_cast<std::uint8_t>(0u));
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[6], c.r[4].w[0] + 21904u);
    set32(c.r[4], 0u + 24u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 256u)));
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.budget -= 14;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_0022EC64; } }
    set32(c.r[4], 0u + 1u);
    st8((c.r[16].w[0] + 51u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 2;
L_0022EC64:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 54u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 61u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 47u)));
    st8((c.r[16].w[0] + 60u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[7], ld32((c.r[28].w[0] - 26304u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 11;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_0022F160; } }
    set32(c.r[8], ld32((c.r[28].w[0] - 26300u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 412u)));
    set32(c.r[9], c.r[29].w[0] + 76u);
    set32(c.r[5], 0u + 3u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 264u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 72u), c.r[4].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 265u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 413u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    st32((c.r[9].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 14;
    if (c.r[4].d[0] == c.r[5].d[0]) { set32(c.r[5], 0u + 1u);  goto L_0022ECD8; }
    set32(c.r[4], ld32((c.r[9].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_0022F160; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_0022ECD8:
    st8((c.r[16].w[0] + 61u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[29].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0022ED00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 60u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0022F160; } }
L_0022ED00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 60u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0022F160; } }
L_0022ED08:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 25240u)));
    set32(c.r[4], 0u + 35u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_0022EDEC; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 25244u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0022ED88; } }
    c.f[1] = ld32((c.r[3].w[0] + 16u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43F40000u);
    c.f[3] = c.r[4].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x43DC0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3E750000u);
    c.r[4].d[0] = c.r[4].d[0] | 49807ull;
    c.f[1] = fp::sub(c.f[1], c.f[3]);
    c.f[0] = c.r[4].w[0];
    c.f[2] = fp::mul(c.f[0], c.f[1]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3DF50000u);
    c.r[5].d[0] = c.r[4].d[0] | 49807ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43300000u);
    c.f[0] = c.r[6].w[0];
    c.f[1] = c.r[5].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[18].w[0] + 32u), c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] + 24u));
    c.f[0] = c.r[4].w[0];
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 36u), c.f[0]);  if (t) { goto L_0022EEBC; } }
L_0022ED88:
    c.f[1] = ld32((c.r[3].w[0] + 16u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43F40000u);
    c.f[3] = c.r[4].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3E750000u);
    c.r[4].d[0] = c.r[4].d[0] | 49807ull;
    c.f[1] = fp::sub(c.f[1], c.f[3]);
    c.f[0] = c.r[4].w[0];
    c.f[2] = fp::mul(c.f[0], c.f[1]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3DF50000u);
    c.r[5].d[0] = c.r[4].d[0] | 49807ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[0] = c.r[6].w[0];
    c.f[1] = c.r[5].w[0];
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[18].w[0] + 32u), c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] + 24u));
    c.f[0] = c.r[4].w[0];
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 36u), c.f[0]);  if (t) { goto L_0022EEBC; } }
L_0022EDEC:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 25244u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0022EE5C; } }
    c.f[1] = ld32((c.r[3].w[0] + 24u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43F40000u);
    c.f[3] = c.r[4].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x43DC0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3E750000u);
    c.r[4].d[0] = c.r[4].d[0] | 49807ull;
    c.f[1] = fp::sub(c.f[1], c.f[3]);
    c.f[0] = c.r[4].w[0];
    c.f[2] = fp::mul(c.f[0], c.f[1]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3DF50000u);
    c.r[5].d[0] = c.r[4].d[0] | 49807ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[0] = c.r[6].w[0];
    c.f[1] = c.r[5].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[18].w[0] + 32u), c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] + 16u));
    c.f[0] = c.r[4].w[0];
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 36u), c.f[0]);  if (t) { goto L_0022EEBC; } }
L_0022EE5C:
    c.f[1] = ld32((c.r[3].w[0] + 24u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43F40000u);
    c.f[3] = c.r[4].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3E750000u);
    c.r[4].d[0] = c.r[4].d[0] | 49807ull;
    c.f[1] = fp::sub(c.f[1], c.f[3]);
    c.f[0] = c.r[4].w[0];
    c.f[2] = fp::mul(c.f[0], c.f[1]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3DF50000u);
    c.r[5].d[0] = c.r[4].d[0] | 49807ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43300000u);
    c.f[0] = c.r[6].w[0];
    c.f[1] = c.r[5].w[0];
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[18].w[0] + 32u), c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] + 16u));
    c.f[0] = c.r[4].w[0];
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 36u), c.f[0]);
    c.budget -= 24;
L_0022EEBC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[3], c.r[3].w[0] - 14284u);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 301u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0022F024; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[3], c.r[3].w[0] - 14286u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[3].d[0] = c.r[7].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0022EF0C; } }
    set32(c.r[3], 0u + 33u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_0022EF88; } }
L_0022EF0C:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 49u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[28].w[0] - 25260u);
    set32(c.r[5], c.r[3].w[0] - 8160u);
    set32(c.r[3], c.r[4].w[0] + c.r[6].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 49u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[3].w[0] - 8156u);
    c.f[0] = ld32((c.r[18].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[3].w[0] - 8152u);
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[5].w[0]), c.f[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 49u)));
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[7].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0]), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 49u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[6].w[0]);
    c.budget -= 31;
L_0022EF88:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 49u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0022F160; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0022F160; } }
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    set32(c.r[5], 0u + 3u);
    c.budget -= 2;
L_0022EFAC:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EFB8u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x0022EFB8u) [[unlikely]] return; }
L_0022EFB8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0022F00C; }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 22u);
    set32(c.r[3], 0u + 8u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00230000u);
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 8080u);
    st16((c.r[2].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 47u)));
    st8((c.r[2].w[0] + 367u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 376u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 19;
L_0022F00C:
    c.r[3].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], 0u + 3u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022EFACu | kUnwind; return; } goto L_0022EFAC; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0022F160; } }
L_0022F024:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[3], c.r[3].w[0] - 14286u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[3].d[0] = c.r[7].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0022F04C; } }
    set32(c.r[3], 0u + 33u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_0022F0C8; } }
L_0022F04C:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 49u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[28].w[0] - 25264u);
    set32(c.r[5], c.r[3].w[0] - 8208u);
    set32(c.r[3], c.r[4].w[0] + c.r[6].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 49u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[3].w[0] - 8204u);
    c.f[0] = ld32((c.r[18].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[3].w[0] - 8200u);
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[5].w[0]), c.f[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 49u)));
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[7].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0]), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 49u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[6].w[0]);
    c.budget -= 31;
L_0022F0C8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 49u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0022F160; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0022F160; } }
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    set32(c.r[5], 0u + 3u);
    c.budget -= 2;
L_0022F0EC:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F0F8u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x0022F0F8u) [[unlikely]] return; }
L_0022F0F8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0022F14C; }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 22u);
    set32(c.r[3], 0u + 8u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[2].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[3], c.r[3].w[0] - 8080u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 47u)));
    st8((c.r[2].w[0] + 367u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 376u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 19;
L_0022F14C:
    c.r[3].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], 0u + 3u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022F0ECu | kUnwind; return; } goto L_0022F0EC; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0022F160:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 25252u)));
    c.budget -= 1;
L_0022F164:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022F220; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 25348u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022F188; } }
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 112u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 116u), c.r[3].w[0]);
    c.budget -= 4;
L_0022F188:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022F1A0; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0022F220; } }
L_0022F1A0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0022F1C8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 54u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0022F1C8; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], 0u + 43u);
    st8((c.r[16].w[0] + 54u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F1C8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0022F1C8u) [[unlikely]] return; }
L_0022F1C8:
    c.f[0] = ld32((c.r[18].w[0] + 112u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022F210; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CA30000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 116u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 116u), c.f[0]);  if (t) { goto L_0022F218; } }
L_0022F210:
    st32((c.r[18].w[0] + 112u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 116u), c.r[3].w[0]);
    c.budget -= 2;
L_0022F218:
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0022F220:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0022F240:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_0022F2B4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022F278; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 80u)));  if (t) { goto L_0022F2B8; } }
L_0022F278:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 25348u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022F288; } }
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_0022F288:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_0022F2B0; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F2A4u); st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004B(c, 72u, depth + 1u); else { c.pc = 0x0022DF50u; return; } if (c.pc != 0x0022F2A4u) [[unlikely]] return; }
L_0022F2A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022F2B4; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_0022F2B0:
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0022F2B4:
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 1;
L_0022F2B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[20] = c.r[2].w[0];
    set32(c.r[2], c.r[3].w[0] + 896u);
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F2D0u); set32(c.r[4], ld32((c.r[17].w[0] + 80u)));  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x0022F2D0u) [[unlikely]] return; }
L_0022F2D0:
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.f[0] = fp::add(c.f[20], c.f[0]);
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_0022F2FC; } }
    st32((c.r[16].w[0] + 16u), c.f[1]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 2;
L_0022F2FC:
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0022F320:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[4].w[0] + 320u);  if (t) { goto L_0022F334; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0022F3D4; } }
L_0022F334:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 45u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0022F388; } }
    c.f[1] = ld32((c.r[5].w[0] + 12u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[2] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[5].w[0] + 12u), c.f[0]);  if (t) { goto L_0022F3D0; } }
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[5].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 10u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[5].w[0] + 38u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0022F3D0; } }
L_0022F388:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 38u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0022F3CC; }
    c.f[1] = ld32((c.r[5].w[0] + 12u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CA30000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[0] = c.r[3].w[0];
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[5].w[0] + 12u), c.f[0]);  if (t) { goto L_0022F3D0; } }
    st32((c.r[5].w[0] + 12u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 45u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0022F3D0; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0022F3CC:
    st16((c.r[5].w[0] + 38u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0022F3D0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0022F3D4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0022F3E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 25256u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_0022F870; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0022F7FC; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0022F7A4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0022F764; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0022F438; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 36u)));  if (t) { goto L_0022F84C; } }
L_0022F438:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 25348u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022F448; } }
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_0022F448:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022F460; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0022F870; } }
L_0022F460:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[2], 0u + 30u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 38u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_0022F5F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F488u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_004C(c, 61u, depth + 1u); else { c.pc = 0x002311C0u; return; } if (c.pc != 0x0022F488u) [[unlikely]] return; }
L_0022F488:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 25268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[7], c.r[3].w[0] + 21904u);
    set32(c.r[3], 0u + 24u);
    st8((c.r[16].w[0] + 51u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[8], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 256u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 301u)));
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    st16((c.r[16].w[0] + 36u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 36u)));
    c.budget -= 18;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_0022F764; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[6], c.r[2].w[0] + 21664u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 51u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[7], c.r[2].w[0] + 21668u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 56u)));
    set32(c.r[2], c.r[8].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 51u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[6], c.r[2].w[0] + 21672u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 56u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[2].w[0] + 21676u);
    set32(c.r[9], c.r[10].w[0] << 4);
    set32(c.r[9], c.r[9].w[0] - c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[7].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[9].w[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 21680u);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 51u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 56u)));
    set32(c.r[8], c.r[9].w[0] << 4);
    set32(c.r[8], c.r[8].w[0] - c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[16].w[0]), c.f[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 51u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 56u)));
    set32(c.r[7], c.r[8].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] - c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 51u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 56u)));
    set32(c.r[6], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.budget -= 70;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F5E8u); c.f[12] = ld32((c.r[2].w[0]));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0022F5E8u) [[unlikely]] return; }
L_0022F5E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.r[2].w[0]);  if (t) { goto L_0022F764; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_0022F5F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F5FCu);  if (depth < kMaxDepth) unit_004C(c, 68u, depth + 1u); else { c.pc = 0x00231420u; return; } if (c.pc != 0x0022F5FCu) [[unlikely]] return; }
L_0022F5FC:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 25272u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[7], c.r[3].w[0] + 21904u);
    set32(c.r[3], 0u + 24u);
    st8((c.r[16].w[0] + 51u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[8], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 256u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 301u)));
    set32(c.r[8], c.r[8].w[0] << 2);
    c.r[6].d[0] = c.r[6].d[0] ^ 1ull;
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    st16((c.r[16].w[0] + 36u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 36u)));
    c.budget -= 19;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_0022F764; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[6], c.r[2].w[0] + 21664u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 51u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[7], c.r[2].w[0] + 21668u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 56u)));
    set32(c.r[2], c.r[8].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 51u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[6], c.r[2].w[0] + 21672u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 56u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[2].w[0] + 21676u);
    set32(c.r[9], c.r[10].w[0] << 4);
    set32(c.r[9], c.r[9].w[0] - c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[7].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[9].w[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 21680u);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 51u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 56u)));
    set32(c.r[8], c.r[9].w[0] << 4);
    set32(c.r[8], c.r[8].w[0] - c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[16].w[0]), c.f[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 51u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 56u)));
    set32(c.r[7], c.r[8].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] - c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 51u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 56u)));
    set32(c.r[6], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.budget -= 70;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F760u); c.f[12] = ld32((c.r[2].w[0]));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0022F760u) [[unlikely]] return; }
L_0022F760:
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 1;
L_0022F764:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 25348u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022F780; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 38u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0022F7A4; } }
L_0022F780:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 38u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 38u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0022F7A4; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0022F7A4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 25348u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022F7B8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 2;
L_0022F7B8:
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[2] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 12u), c.f[0]);  if (t) { goto L_0022F848; } }
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0022F848; } }
L_0022F7FC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0022F83C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0022F83C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 25352u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0022F848; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F834u); st8((c.r[28].w[0] - 25252u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_004B(c, 70u, depth + 1u); else { c.pc = 0x0022DEF0u; return; } if (c.pc != 0x0022F834u) [[unlikely]] return; }
L_0022F834:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022F848; } }
L_0022F83C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0022F848:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_0022F84C:
    set32(c.r[3], 0u + 24u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0022F870; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0022F870; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0022F870:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0022F890:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[7], c.r[4].w[0] + 320u);  if (t) { goto L_0022F8F8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0022F8B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0022F94C; } }
L_0022F8B0:
    c.f[1] = ld32((c.r[7].w[0] + 12u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CA30000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[0] = c.r[3].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[6].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[7].w[0] + 12u), c.f[0]);  if (t) { goto L_0022F948; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 150u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[7].w[0] + 12u), c.r[6].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[7].w[0] + 38u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0022F948; } }
L_0022F8F8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 38u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0022F944; }
    c.f[1] = ld32((c.r[7].w[0] + 12u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[0] = c.r[3].w[0];
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[7].w[0] + 12u), c.f[0]);  if (t) { goto L_0022F948; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 12u), 0u);  if (t) { goto L_0022F948; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0022F944:
    st16((c.r[7].w[0] + 38u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0022F948:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0022F94C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0022F960:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0022F970:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_0022F980:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 19424u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[17], c.r[3].w[0] - 20416u);
    set32(c.r[7], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], c.r[29].w[0] + 144u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[3].w[0]);
    set32(c.r[3], c.r[29].w[0] + 216u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    set32(c.r[3], c.r[29].w[0] + 224u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[3].w[0]);
    set32(c.r[6], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[6].w[0]);
    set32(c.r[3], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65304ull;
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 152u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 172u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 156u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.r[23].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 513u)));
    c.budget -= 47;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[16], c.r[4].w[0] + 320u);  if (t) { goto L_0022FA7C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 430u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[20].d[0] = c.r[2].d[0] << 48;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    c.r[1].d[0] = c.r[20].sd[0] < 1000ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[19], 0u + 2u);  if (t) { goto L_0022FA5C; } }
    set32(c.r[20], 0u + 999u);
    c.budget -= 1;
L_0022FA5C:
    c.budget -= 2;
    if (c.r[23].d[0] != 0ull) { set32(c.r[23], 0u + 1u);  goto L_0022FA74; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 524u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + c.r[23].w[0]);  goto L_0022FAF4; }
    set32(c.r[23], 0u + 1u);
    c.budget -= 1;
L_0022FA74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022FAF0; } }
L_0022FA7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_0022FAAC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 453u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[20].d[0] = c.r[2].d[0] << 48;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    c.r[1].d[0] = c.r[20].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; mmi::paddub(c.r[19], c.r[0], c.r[0]);  if (t) { goto L_0022FAA4; } }
    set32(c.r[20], 0u + 99u);
    c.budget -= 1;
L_0022FAA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022FAF0; } }
L_0022FAAC:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_0022FAC4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 301u)));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[20].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 292u)));  if (t) { goto L_0022FAD4; } }
L_0022FAC4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 301u)));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.r[20].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 290u)));
    c.budget -= 4;
L_0022FAD4:
    set32(c.r[2], c.r[20].w[0] + 1u);
    c.r[20].d[0] = c.r[2].d[0] << 48;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    c.r[1].d[0] = c.r[20].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; mmi::paddub(c.r[19], c.r[0], c.r[0]);  if (t) { goto L_0022FAF0; } }
    set32(c.r[20], 0u + 99u);
    c.budget -= 1;
L_0022FAF0:
    set32(c.r[19], c.r[19].w[0] + c.r[23].w[0]);
    c.budget -= 1;
L_0022FAF4:
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 22016u);
    set32(c.r[21], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[22], c.r[2].w[0] + 22176u);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 9;
L_0022FB18:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0])));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0022FD0C; }
    set32(c.r[8], c.r[29].w[0] + 160u);
    st32((c.r[8].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 2u)));
    set32(c.r[9], c.r[29].w[0] + 164u);
    set32(c.r[2], c.r[29].w[0] + 220u);
    set32(c.r[3], 0u + 2u);
    st32((c.r[9].w[0]), c.r[6].w[0]);
    st32((c.r[29].w[0] + 148u), c.r[6].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[8].w[0])));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[8].w[0]), c.r[6].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 6u)));
    set32(c.r[6], ld32((c.r[9].w[0])));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[9].w[0]), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0])));
    st16((c.r[29].w[0] + 216u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 2u)));
    st16((c.r[29].w[0] + 218u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 4u)));
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 6u)));
    c.budget -= 26;
    { const bool t = c.r[18].d[0] != c.r[3].d[0]; st16((c.r[29].w[0] + 222u), static_cast<std::uint16_t>(c.r[6].w[0]));  if (t) { goto L_0022FBF8; } }
    c.r[6].d[0] = c.r[20].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].d[0] | 34079ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    set32(c.r[8], c.r[6].w[0] >> 31);
    c.r[7].d[0] = c.hi.d[0];
    set32(c.r[3], 0u + 100u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 216u)));
    mmi::div(c, 0, c.r[20].w[0], c.r[3].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 5));
    set32(c.r[7], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[3].w[0] << 3);
    c.r[3].d[0] = c.r[7].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st16((c.r[29].w[0] + 216u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.hi.d[0];
    c.r[20].d[0] = c.r[2].d[0] << 48;
    c.budget -= 27;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);  if (t) { goto L_0022FCC0; } }
L_0022FBF8:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_0022FC70; } }
    c.r[6].d[0] = c.r[20].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].d[0] | 26215ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    set32(c.r[8], c.r[6].w[0] >> 31);
    c.r[7].d[0] = c.hi.d[0];
    set32(c.r[3], 0u + 10u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 216u)));
    mmi::div(c, 0, c.r[20].w[0], c.r[3].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 2));
    set32(c.r[7], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[3].w[0] << 3);
    c.r[3].d[0] = c.r[7].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st16((c.r[29].w[0] + 216u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.hi.d[0];
    c.r[20].d[0] = c.r[2].d[0] << 48;
    c.budget -= 27;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);  if (t) { goto L_0022FCC0; } }
L_0022FC70:
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);  goto L_0022FCC4; }
    c.r[7].d[0] = c.r[20].d[0] << 48;
    set32(c.r[6], 0u + 10u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 216u)));
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    mmi::div(c, 0, c.r[7].w[0], c.r[6].w[0]);
    c.r[7].d[0] = c.hi.d[0];
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[6].w[0] << 3);
    c.r[6].d[0] = c.r[7].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st16((c.r[29].w[0] + 216u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 18;
L_0022FCC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.budget -= 1;
L_0022FCC4:
    c.r[2].d[0] = c.r[2].d[0] | 32896ull;
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FCE0u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x0022FCE0u) [[unlikely]] return; }
L_0022FCE0:
    st8((c.r[29].w[0] + 227u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[18].d[0] != c.r[2].d[0]) { mmi::paddub(c.r[4], c.r[17], c.r[0]);  goto L_0022FCFC; }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0022FD08; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_0022FCFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FD04u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x0022FD04u) [[unlikely]] return; }
L_0022FD04:
    c.budget -= 1;
L_0022FD08:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0022FD0C:
    c.r[2].d[0] = c.r[18].sd[0] < 5ll ? 1ull : 0ull;
    set32(c.r[21], c.r[21].w[0] + 8u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[22], c.r[22].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022FB18u | kUnwind; return; } goto L_0022FB18; } }
    set32(c.r[4], 0u + 1u);
    if (c.r[23].d[0] != 0) c.r[4].d[0] = 0ull;
    c.f[12] = ld32((c.r[16].w[0] + 12u));
    set32(c.r[5], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FD34u); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_0037(c, 147u, depth + 1u); else { c.pc = 0x001DE890u; return; } if (c.pc != 0x0022FD34u) [[unlikely]] return; }
L_0022FD34:
    set32(c.r[2], 0u + 6u);
    st16((c.r[17].w[0] + 62u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 22224u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 22320u);
    st32((c.r[17].w[0] + 36u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[17].w[0] + 24u), 0u);
    set32(c.r[18], c.r[2].w[0] + 22320u);
    st16((c.r[17].w[0] + 60u), static_cast<std::uint16_t>(0u));
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    c.budget -= 13;
L_0022FD68:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].d[0] = c.r[3].d[0] << 40;
    c.r[2].d[0] = c.r[2].d[0] >> 40;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FD8Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x0022FD8Cu) [[unlikely]] return; }
L_0022FD8C:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[6], c.r[2].w[0] << 24);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 6ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022FD68u | kUnwind; return; } goto L_0022FD68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FDB8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_001C(c, 21u, depth + 1u); else { c.pc = 0x00170680u; return; } if (c.pc != 0x0022FDB8u) [[unlikely]] return; }
L_0022FDB8:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_0022FDF0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 19424u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[17], c.r[3].w[0] - 20416u);
    set32(c.r[3], c.r[29].w[0] + 108u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[3].w[0]);
    set32(c.r[3], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[3].w[0]);
    set32(c.r[3], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[16], c.r[4].w[0] + 320u);
    set32(c.r[19], c.r[2].w[0] + 22352u);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    mmi::paddub(c.r[20], c.r[0], c.r[0]);
    c.budget -= 32;
L_0022FE70:
    st32((c.r[17].w[0] + 20u), c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 22416u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 301u)));
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = c.r[18].d[0] != 0ull; st32((c.r[17].w[0] + 48u), c.r[2].w[0]);  if (t) { goto L_0022FEA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[2].d[0] = c.r[2].d[0] | 32896ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 108u), c.r[2].w[0]);  if (t) { goto L_0022FEB0; } }
L_0022FEA8:
    set32(c.r[2], 0u + 29568u);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 2;
L_0022FEB0:
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FEC4u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x0022FEC4u) [[unlikely]] return; }
L_0022FEC4:
    st8((c.r[29].w[0] + 111u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FED0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x0022FED0u) [[unlikely]] return; }
L_0022FED0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[19], c.r[19].w[0] + 32u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022FE70u | kUnwind; return; } goto L_0022FE70; } }
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0022FF10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[16], c.r[2].w[0] - 20416u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 22448u);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[8], ld32((c.r[4].w[0] + 88u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[9], 0u + 1u);
    mmi::paddub(c.r[10], c.r[0], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    if (c.r[8].d[0] != 0) c.r[10].d[0] = c.r[9].d[0];
    set32(c.r[8], c.r[10].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[10].w[0]);
    set32(c.r[7], c.r[2].w[0] + 22608u);
    set32(c.r[8], c.r[8].w[0] << 3);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[6].w[0]);
    set32(c.r[3], c.r[29].w[0] + 44u);
    st32((c.r[16].w[0] + 24u), 0u);
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 36u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    st16((c.r[16].w[0] + 60u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[3].d[0] = c.r[2].d[0] | 32896ull;
    st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[6], ld32((c.r[1].w[0] - 19420u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    st32((c.r[16].w[0] + 52u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 44u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 332u));
    c.budget -= 44;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FFC0u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x0022FFC0u) [[unlikely]] return; }
L_0022FFC0:
    st8((c.r[29].w[0] + 47u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FFCCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x0022FFCCu) [[unlikely]] return; }
L_0022FFCC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0022FFE0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 8;
    [[clang::musttail]] return unit_004C(c, 1u, depth);
}

}
