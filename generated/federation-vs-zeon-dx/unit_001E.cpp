#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_001E[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 3, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0,
    0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0,
    54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 57, 0, 0,
    0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0,
    60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0, 0, 69, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0,
    0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0,
    0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 139, 140, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0,
    0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    151, 0, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0,
    0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0,
    0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 167,
    0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 179, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 203, 0, 204, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0,
    0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0,
    0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0,
};

void unit_001E(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00178000;
    case 2u: goto L_00178020;
    case 3u: goto L_00178024;
    case 4u: goto L_00178034;
    case 5u: goto L_00178048;
    case 6u: goto L_00178084;
    case 7u: goto L_001780CC;
    case 8u: goto L_00178100;
    case 9u: goto L_00178138;
    case 10u: goto L_00178168;
    case 11u: goto L_0017817C;
    case 12u: goto L_00178220;
    case 13u: goto L_00178240;
    case 14u: goto L_00178284;
    case 15u: goto L_001782F0;
    case 16u: goto L_00178348;
    case 17u: goto L_00178394;
    case 18u: goto L_00178404;
    case 19u: goto L_00178530;
    case 20u: goto L_0017863C;
    case 21u: goto L_001786E0;
    case 22u: goto L_00178790;
    case 23u: goto L_00178888;
    case 24u: goto L_001788C0;
    case 25u: goto L_00178A78;
    case 26u: goto L_00178AB0;
    case 27u: goto L_00178B20;
    case 28u: goto L_00178B58;
    case 29u: goto L_00178C50;
    case 30u: goto L_00178C70;
    case 31u: goto L_00178CB0;
    case 32u: goto L_00178D10;
    case 33u: goto L_00178D60;
    case 34u: goto L_00178DE0;
    case 35u: goto L_00178E20;
    case 36u: goto L_00178E70;
    case 37u: goto L_00178ED0;
    case 38u: goto L_00178F40;
    case 39u: goto L_00178F68;
    case 40u: goto L_00179000;
    case 41u: goto L_00179070;
    case 42u: goto L_0017908C;
    case 43u: goto L_00179094;
    case 44u: goto L_001790D0;
    case 45u: goto L_00179120;
    case 46u: goto L_00179170;
    case 47u: goto L_001791F0;
    case 48u: goto L_00179250;
    case 49u: goto L_0017929C;
    case 50u: goto L_001792B0;
    case 51u: goto L_001792CC;
    case 52u: goto L_001792E0;
    case 53u: goto L_001792EC;
    case 54u: goto L_00179300;
    case 55u: goto L_00179360;
    case 56u: goto L_0017936C;
    case 57u: goto L_00179374;
    case 58u: goto L_00179390;
    case 59u: goto L_001794F0;
    case 60u: goto L_00179500;
    case 61u: goto L_001795DC;
    case 62u: goto L_00179634;
    case 63u: goto L_00179694;
    case 64u: goto L_0017969C;
    case 65u: goto L_001796FC;
    case 66u: goto L_00179730;
    case 67u: goto L_0017975C;
    case 68u: goto L_00179764;
    case 69u: goto L_00179770;
    case 70u: goto L_001797AC;
    case 71u: goto L_001797E0;
    case 72u: goto L_00179810;
    case 73u: goto L_00179828;
    case 74u: goto L_00179844;
    case 75u: goto L_00179850;
    case 76u: goto L_001798D0;
    case 77u: goto L_00179950;
    case 78u: goto L_0017999C;
    case 79u: goto L_00179A00;
    case 80u: goto L_00179AA8;
    case 81u: goto L_00179AC4;
    case 82u: goto L_00179AD8;
    case 83u: goto L_00179B30;
    case 84u: goto L_00179B44;
    case 85u: goto L_00179B50;
    case 86u: goto L_00179B84;
    case 87u: goto L_00179B9C;
    case 88u: goto L_00179BAC;
    case 89u: goto L_00179BC8;
    case 90u: goto L_00179C88;
    case 91u: goto L_00179D00;
    case 92u: goto L_00179D44;
    case 93u: goto L_00179D70;
    case 94u: goto L_00179D88;
    case 95u: goto L_00179D98;
    case 96u: goto L_00179DA8;
    case 97u: goto L_00179DE0;
    case 98u: goto L_00179E38;
    case 99u: goto L_00179E40;
    case 100u: goto L_00179E78;
    case 101u: goto L_00179EC0;
    case 102u: goto L_00179ED8;
    case 103u: goto L_00179F00;
    case 104u: goto L_00179F28;
    case 105u: goto L_00179F80;
    case 106u: goto L_00179FA8;
    case 107u: goto L_00179FD0;
    case 108u: goto L_0017A000;
    case 109u: goto L_0017A0D8;
    case 110u: goto L_0017A180;
    case 111u: goto L_0017A2BC;
    case 112u: goto L_0017A490;
    case 113u: goto L_0017A580;
    case 114u: goto L_0017A654;
    case 115u: goto L_0017A754;
    case 116u: goto L_0017A800;
    case 117u: goto L_0017A8A8;
    case 118u: goto L_0017A940;
    case 119u: goto L_0017A9F0;
    case 120u: goto L_0017AA3C;
    case 121u: goto L_0017AA80;
    case 122u: goto L_0017AB58;
    case 123u: goto L_0017ABC8;
    case 124u: goto L_0017ABDC;
    case 125u: goto L_0017AC20;
    case 126u: goto L_0017AC3C;
    case 127u: goto L_0017AC6C;
    case 128u: goto L_0017ACA0;
    case 129u: goto L_0017AD04;
    case 130u: goto L_0017AD50;
    case 131u: goto L_0017AD70;
    case 132u: goto L_0017AD9C;
    case 133u: goto L_0017ADC0;
    case 134u: goto L_0017ADD0;
    case 135u: goto L_0017ADF0;
    case 136u: goto L_0017AE10;
    case 137u: goto L_0017AE3C;
    case 138u: goto L_0017AE54;
    case 139u: goto L_0017AE70;
    case 140u: goto L_0017AE74;
    case 141u: goto L_0017AF28;
    case 142u: goto L_0017AF34;
    case 143u: goto L_0017AF5C;
    case 144u: goto L_0017AF68;
    case 145u: goto L_0017AF9C;
    case 146u: goto L_0017AFA8;
    case 147u: goto L_0017AFD0;
    case 148u: goto L_0017AFDC;
    case 149u: goto L_0017B070;
    case 150u: goto L_0017B090;
    case 151u: goto L_0017B100;
    case 152u: goto L_0017B110;
    case 153u: goto L_0017B118;
    case 154u: goto L_0017B140;
    case 155u: goto L_0017B150;
    case 156u: goto L_0017B160;
    case 157u: goto L_0017B178;
    case 158u: goto L_0017B198;
    case 159u: goto L_0017B1F4;
    case 160u: goto L_0017B218;
    case 161u: goto L_0017B274;
    case 162u: goto L_0017B2C8;
    case 163u: goto L_0017B324;
    case 164u: goto L_0017B348;
    case 165u: goto L_0017B3A4;
    case 166u: goto L_0017B3F4;
    case 167u: goto L_0017B3FC;
    case 168u: goto L_0017B414;
    case 169u: goto L_0017B430;
    case 170u: goto L_0017B484;
    case 171u: goto L_0017B4B0;
    case 172u: goto L_0017B500;
    case 173u: goto L_0017B580;
    case 174u: goto L_0017B5D0;
    case 175u: goto L_0017B600;
    case 176u: goto L_0017B63C;
    case 177u: goto L_0017B660;
    case 178u: goto L_0017B670;
    case 179u: goto L_0017B674;
    case 180u: goto L_0017B6A8;
    case 181u: goto L_0017B6C8;
    case 182u: goto L_0017B710;
    case 183u: goto L_0017B734;
    case 184u: goto L_0017B75C;
    case 185u: goto L_0017B778;
    case 186u: goto L_0017B7FC;
    case 187u: goto L_0017B860;
    case 188u: goto L_0017B8A0;
    case 189u: goto L_0017B8C8;
    case 190u: goto L_0017B8F0;
    case 191u: goto L_0017B940;
    case 192u: goto L_0017B998;
    case 193u: goto L_0017B9D0;
    case 194u: goto L_0017B9FC;
    case 195u: goto L_0017BA38;
    case 196u: goto L_0017BA50;
    case 197u: goto L_0017BA80;
    case 198u: goto L_0017BAD0;
    case 199u: goto L_0017BB04;
    case 200u: goto L_0017BB90;
    case 201u: goto L_0017BBC0;
    case 202u: goto L_0017BBF0;
    case 203u: goto L_0017BC1C;
    case 204u: goto L_0017BC24;
    case 205u: goto L_0017BC30;
    case 206u: goto L_0017BC90;
    case 207u: goto L_0017BCB0;
    case 208u: goto L_0017BCBC;
    case 209u: goto L_0017BCE0;
    case 210u: goto L_0017BD04;
    case 211u: goto L_0017BD2C;
    case 212u: goto L_0017BD68;
    case 213u: goto L_0017BDA0;
    case 214u: goto L_0017BDD4;
    case 215u: goto L_0017BDEC;
    case 216u: goto L_0017BE40;
    case 217u: goto L_0017BE6C;
    case 218u: goto L_0017BE90;
    case 219u: goto L_0017BEC0;
    case 220u: goto L_0017BEE4;
    case 221u: goto L_0017BF4C;
    case 222u: goto L_0017BF9C;
    case 223u: goto L_0017BFF0;
    default: bad_entry(c, 0x00178000u); return;
    }
L_00178000:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], c.r[2].w[0] + c.r[11].w[0]);
    st8((c.r[2].w[0] + 336u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], c.r[2].w[0] + c.r[11].w[0]);
    set32(c.r[11], 0u + 6u);
    st8((c.r[2].w[0] + 342u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 8;
L_00178020:
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.budget -= 1;
L_00178024:
    c.r[2].d[0] = c.r[11].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00177FC0u | kUnwind; return; } [[clang::musttail]] return unit_001D(c, 411u, depth); } }
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 1;
L_00178034:
    c.r[2].d[0] = c.r[10].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00177FA0u | kUnwind; return; } [[clang::musttail]] return unit_001D(c, 410u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178048u);  if (depth < kMaxDepth) unit_0071(c, 110u, depth + 1u); else { c.pc = 0x002C5890u; return; } if (c.pc != 0x00178048u) [[unlikely]] return; }
L_00178048:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[16], c.r[2].w[0] - 14288u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[17], c.r[2].w[0] + 26144u);
    st8((c.r[3].w[0] + 332u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    st8((c.r[2].w[0] + 333u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 334u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 335u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 76u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 77u), static_cast<std::uint8_t>(0u));
    c.budget -= 15;
L_00178084:
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_001780E4; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    c.r[2].d[0] = c.r[3].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001780E0; } }
    c.r[1].d[0] = c.r[3].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001780E0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8389u)));
    c.r[4].d[0] = c.r[18].d[0] << 56;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001780CCu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (depth < kMaxDepth) unit_0071(c, 109u, depth + 1u); else { c.pc = 0x002C53C0u; return; } if (c.pc != 0x001780CCu) [[unlikely]] return; }
L_001780CC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8389u)));
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 76u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_001780E0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001780E4:
    c.r[2].d[0] = c.r[18].sd[0] < 5ll ? 1ull : 0ull;
    set32(c.r[16], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00178084u | kUnwind; return; } goto L_00178084; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[16], c.r[2].w[0] + 26144u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 3;
L_00178100:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00178154; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[1].d[0] = c.r[2].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00178150; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8389u)));
    c.r[4].d[0] = c.r[17].d[0] << 56;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 76u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178138u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (depth < kMaxDepth) unit_0071(c, 109u, depth + 1u); else { c.pc = 0x002C53C0u; return; } if (c.pc != 0x00178138u) [[unlikely]] return; }
L_00178138:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8389u)));
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 76u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 76u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_00178150:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00178154:
    c.r[2].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 8448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00178100u | kUnwind; return; } goto L_00178100; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178168u);  if (depth < kMaxDepth) unit_0052(c, 244u, depth + 1u); else { c.pc = 0x0024B480u; return; } if (c.pc != 0x00178168u) [[unlikely]] return; }
L_00178168:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[5], c.r[3].w[0] + 26144u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[6], c.r[3].w[0] - 14464u);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 5;
L_0017817C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < 5ll ? 1ull : 0ull;
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8391u)));
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8386u)));
    st8((c.r[6].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8389u)));
    st8((c.r[6].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8387u)));
    st8((c.r[6].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8388u)));
    st8((c.r[6].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8390u)));
    st8((c.r[6].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], c.r[5].w[0] + 8448u);
    c.budget -= 19;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017817Cu | kUnwind; return; } goto L_0017817C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001781EC; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 25576u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 331u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00178208; } }
L_001781EC:
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 264u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 265u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    st8((c.r[5].w[0] + 331u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_00178208:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00178220:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00178518; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_00178240:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0] + 688u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] + 2u);
    st8((c.r[3].w[0] + 689u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = c.r[4].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00178240u | kUnwind; return; } goto L_00178240; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[5], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (t) { goto L_001782EC; } }
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    set32(c.r[4], 0u - 1u);
    c.budget -= 2;
L_00178284:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[6], c.r[3].w[0] + c.r[8].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 260u)));
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_001782A8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 404u)));
    c.r[1].d[0] = c.r[3].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001782D0; } }
L_001782A8:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[5].d[0];  if (t) { goto L_001782C0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 404u)));
    c.r[1].d[0] = c.r[3].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001782D0; } }
L_001782C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 376u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[4].d[0]) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_001782DC; }
    c.budget -= 1;
L_001782D0:
    st8((c.r[6].w[0] + 404u), static_cast<std::uint8_t>(0u));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 3;
L_001782DC:
    c.r[3].d[0] = c.r[8].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00178284u | kUnwind; return; } goto L_00178284; } }
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 1;
L_001782EC:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_001782F0:
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[5].w[0] << (c.r[7].w[0] & 31u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 87u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_00178324; }
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 404u)));
    st8((c.r[3].w[0] + 688u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 7;
L_00178324:
    c.r[3].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001782F0u | kUnwind; return; } goto L_001782F0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 524u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00178518; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178348u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00178348u) [[unlikely]] return; }
L_00178348:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00330000u);
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[4].d[0] | 65505ull;
    c.r[9].d[0] = c.r[2].d[0] & 7ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 256u)));
    set32(c.r[5], c.r[5].w[0] << (c.r[6].w[0] & 31u));
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull; mmi::paddub(c.r[8], c.r[0], c.r[0]);  if (t) { goto L_00178374; } }
    c.r[8].d[0] = c.r[8].d[0] | 1ull;
    c.budget -= 1;
L_00178374:
    c.r[4].d[0] = c.r[5].d[0] & 32905ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; mmi::paddub(c.r[11], c.r[0], c.r[0]);  if (t) { goto L_00178388; } }
    c.r[8].d[0] = c.r[8].d[0] | 2ull;
    mmi::paddub(c.r[11], c.r[0], c.r[0]);
    c.budget -= 2;
L_00178388:
    mmi::paddub(c.r[10], c.r[3], c.r[0]);
    set32(c.r[5], 0u + 5u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
L_00178394:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 87u)));
    set32(c.r[4], c.r[6].w[0] << (c.r[11].w[0] & 31u));
    c.r[4].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[11], c.r[11].w[0] + 1u);  goto L_001783BC; }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 688u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_001783B8; } }
    c.r[8].d[0] = c.r[8].d[0] | 4ull;
    c.budget -= 1;
L_001783B8:
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.budget -= 1;
L_001783BC:
    c.r[4].d[0] = c.r[11].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[10], c.r[10].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00178394u | kUnwind; return; } goto L_00178394; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[4], c.r[4].w[0] - 23936u);
    set32(c.r[5], c.r[8].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[9].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    mmi::paddub(c.r[9], c.r[0], c.r[0]);
    c.r[1].d[0] = c.r[9].sd[0] < 4ll ? 1ull : 0ull;
    mmi::paddub(c.r[10], c.r[0], c.r[0]);
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[3].w[0] + 692u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00178438; } }
    set32(c.r[8], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[7], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[4], 0u + 10u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
L_00178404:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 87u)));
    set32(c.r[3], c.r[5].w[0] << (c.r[9].w[0] & 31u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[9], c.r[9].w[0] + 1u);  goto L_0017842C; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 688u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00178428; } }
    mmi::paddub(c.r[10], c.r[5], c.r[0]);
    c.budget -= 1;
L_00178428:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_0017842C:
    c.r[3].d[0] = c.r[9].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00178404u | kUnwind; return; } goto L_00178404; } }
L_00178438:
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 256u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 18u);  if (t) { goto L_0017846C; } }
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == 0ull;  if (t) { goto L_00178470; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & 2559ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00178470; } }
    set32(c.r[3], 0u + 18u);
    c.budget -= 1;
L_0017846C:
    st8((c.r[5].w[0] + 693u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00178470:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 301u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001784F0; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 19u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 692u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 20u);  if (t) { goto L_001784A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 644u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00178518; } }
    set32(c.r[3], 0u + 20u);
    c.budget -= 1;
L_001784A0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 21u);  if (t) { goto L_001784B8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 644u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00178518; } }
    set32(c.r[3], 0u + 21u);
    c.budget -= 1;
L_001784B8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 22u);  if (t) { goto L_001784D0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 644u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00178518; } }
    set32(c.r[3], 0u + 22u);
    c.budget -= 1;
L_001784D0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 6u);  if (t) { goto L_001784E8; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 644u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00178518; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 1;
L_001784E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 644u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00178518; } }
L_001784F0:
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 18u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 693u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 5u);  if (t) { goto L_00178514; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 644u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00178518; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 1;
L_00178514:
    st8((c.r[5].w[0] + 644u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00178518:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00178530:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_001785E0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 28022u)));
    set32(c.r[7], c.r[28].w[0] - 31920u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 28020u)));
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 14u)));
    st16((c.r[3].w[0] + 292u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[3].w[0] + 290u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[3].w[0] + 288u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 28022u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 28020u)));
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 16u)));
    st16((c.r[3].w[0] + 298u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[3].w[0] + 296u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 38;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 294u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_001786CC; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_001785E0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00178624; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 25624u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[3].w[0] + 292u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[3].w[0] + 290u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[3].w[0] + 288u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 25628u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[3].w[0] + 298u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[3].w[0] + 296u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 294u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_001786CC; } }
L_00178624:
    set32(c.r[9], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[6], c.r[3].w[0] + 15840u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 264u)));
    c.budget -= 6;
L_0017863C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 21976u)));
    set32(c.r[5], c.r[3].w[0] + 15840u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 265u)));
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] << 1);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[9].w[0] + 292u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[3].w[0] + 290u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[3].w[0] + 288u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[8], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 21975u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 265u)));
    set32(c.r[4], c.r[3].w[0] << 1);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 264u)));
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[8].w[0] + 298u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[3].w[0] + 296u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[3].w[0] + 294u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 36;
L_001786CC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001786E0:
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0017872C; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 184u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[4], c.r[3].w[0] + 15136u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    st16((c.r[3].w[0] + 300u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 184u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 4ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 402u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00178768; } }
L_0017872C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 28022u)));
    set32(c.r[4], c.r[28].w[0] - 31920u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 28020u)));
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 18u)));
    st16((c.r[3].w[0] + 300u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 15;
L_00178768:
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 300u)));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    st16((c.r[5].w[0] + 302u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 516u), 0u);  c.pc = t; return; }
L_00178790:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 258u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0] + 258u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 516u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 516u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 111u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001788A8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 530u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001788A8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 402u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001788A8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 302u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], c.r[5].w[0] + 302u);  if (t) { goto L_001788A8; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x88880000u);
    c.r[4].d[0] = c.r[3].d[0] | 34953ull;
    set32(c.r[3], 0u + 1859u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 302u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[6].w[0]);
    set32(c.r[5], c.r[6].w[0] >> 31);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 5));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st16((c.r[7].w[0] + 300u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 302u)));
    c.budget -= 20;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001788A8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 331u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00178860; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 513u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001788A8; } }
L_00178860:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[2], c.r[2].w[0] + 26144u);
    set32(c.r[4], 0u + 2u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[3], c.r[5].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178888u); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0026(c, 48u, depth + 1u); else { c.pc = 0x00198850u; return; } if (c.pc != 0x00178888u) [[unlikely]] return; }
L_00178888:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8389u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 692u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001788A8; } }
    set32(c.r[3], 0u + 6u);
    st8((c.r[4].w[0] + 701u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001788A8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001788C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[7], 0u + 2u);
    st8((c.r[2].w[0] + 640u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == c.r[7].d[0];  if (t) { goto L_0017898C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 296u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_00178918; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 640u)));
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st8((c.r[4].w[0] + 640u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 522u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00178C50; } }
L_00178918:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 290u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_00178940; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 640u)));
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st8((c.r[4].w[0] + 640u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 522u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00178C50; } }
L_00178940:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 302u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00178C50; } }
    set32(c.r[2], 0u - 4u);
    st8((c.r[4].w[0] + 640u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 1u);
    st16((c.r[2].w[0] + 302u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[2].w[0] + 300u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 648u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st32((c.r[2].w[0] + 580u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st32((c.r[2].w[0] + 584u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 522u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00178C50; } }
L_0017898C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 512u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00178A24; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 28022u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], 0u + 12u);
    c.r[6].d[0] = c.r[6].d[0] ^ 1ull;
    set32(c.r[5], c.r[5].w[0] << (c.r[6].w[0] & 31u));
    st8((c.r[4].w[0] + 640u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st8((c.r[1].w[0] + 29595u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st8((c.r[1].w[0] + 29593u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 6u)));
    set32(c.r[5], c.r[2].w[0] + 26144u);
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[3], c.r[2].w[0] + 26144u);
    set32(c.r[2], c.r[6].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0] + 580u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    set32(c.r[4], c.r[5].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0] + 584u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 35;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 522u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00178C50; } }
L_00178A24:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 28022u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[3], c.r[28].w[0] - 31920u);
    set32(c.r[2], c.r[2].w[0] + 5504u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 28020u)));
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 9u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 20;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 8u);  if (t) { goto L_00178AF0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00178A78:
    set32(c.r[2], c.r[2].w[0] << (c.r[16].w[0] & 31u));
    c.r[2].d[0] = c.r[17].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00178AEC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[4], c.r[2].w[0] + 25952u);
    c.r[2].d[0] = c.r[16].d[0] & 7ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 23840u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00178AB0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00178AB0u) [[unlikely]] return; }
L_00178AB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00178AE8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 28022u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], 0u + 2u);
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    st8((c.r[3].w[0] + 640u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st8((c.r[1].w[0] + 29595u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st8((c.r[1].w[0] + 29593u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 12;
L_00178AE8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00178AEC:
    c.budget -= 1;
L_00178AF0:
    c.r[1].d[0] = c.r[16].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { mmi::paddub(c.r[16], c.r[0], c.r[0]);  goto L_00178B14; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 640u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00178A78u | kUnwind; return; } goto L_00178A78; } }
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 2;
L_00178B14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;  if (t) { goto L_00178B94; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00178B20:
    set32(c.r[2], c.r[2].w[0] << (c.r[16].w[0] & 31u));
    c.r[2].d[0] = c.r[17].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00178B8C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[4], c.r[2].w[0] + 25952u);
    c.r[2].d[0] = c.r[16].d[0] & 7ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 23872u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00178B58u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00178B58u) [[unlikely]] return; }
L_00178B58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00178B88; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 28022u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    st8((c.r[2].w[0] + 640u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st8((c.r[1].w[0] + 29595u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st8((c.r[1].w[0] + 29593u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 10;
L_00178B88:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00178B8C:
    c.r[1].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 2;
L_00178B94:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00178BB0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 640u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00178B20u | kUnwind; return; } goto L_00178B20; } }
    c.budget -= 1;
L_00178BB0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 640u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00178C50; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[2], 0u + 2u);
    st8((c.r[3].w[0] + 522u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 29593u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00178C50; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00178C50; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00178C50; } }
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00178C50; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00178C50; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 584u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00178C50; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 612u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00178C50; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], 0u + 12296u);
    st8((c.r[3].w[0] + 522u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 8u));
    set32(c.r[4], ld32((c.r[4].w[0] + 584u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[3].w[0] & 31u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00178C50u); c.r[5].d[0] = c.r[2].d[0] & 1ull;  if (depth < kMaxDepth) unit_0079(c, 79u, depth + 1u); else { c.pc = 0x002E5040u; return; } if (c.pc != 0x00178C50u) [[unlikely]] return; }
L_00178C50:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 640u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00178C70:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2070u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00178C90; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 296u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  if (t) { goto L_00178CA0; } }
L_00178C90:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 290u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
L_00178CA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00178CB0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 28022u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2070u)));
    set32(c.r[2], c.r[28].w[0] - 31920u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 28020u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].d[0] = c.r[6].d[0] ^ 1ull;
    set32(c.r[6], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3644u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 10u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  c.pc = t; return; }
L_00178D10:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2070u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 28022u)));
    set32(c.r[3], c.r[28].w[0] - 31920u);
    set32(c.r[2], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3646u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 28020u)));
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  c.pc = t; return; }
L_00178D60:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[2], c.r[2].w[0] + 26658u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[3], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00178DD4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[3], c.r[3].w[0] + 26748u);
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    st32((c.r[5].w[0] + 580u), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[4], c.r[3].w[0] + 26144u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 6u)));
    set32(c.r[5], c.r[6].w[0] << 5);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 8);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0] + 584u), c.r[4].w[0]);
    c.budget -= 16;
L_00178DD4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00178DE0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2070u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00178E00; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 290u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  if (t) { goto L_00178E10; } }
L_00178E00:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 296u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
L_00178E10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00178E20:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2070u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 28022u)));
    set32(c.r[3], c.r[28].w[0] - 31920u);
    set32(c.r[2], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3644u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 28020u)));
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 10u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  c.pc = t; return; }
L_00178E70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 28022u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2070u)));
    set32(c.r[2], c.r[28].w[0] - 31920u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 28020u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].d[0] = c.r[6].d[0] ^ 1ull;
    set32(c.r[6], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3646u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  c.pc = t; return; }
L_00178ED0:
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 302u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00178F34; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[5], c.r[3].w[0] + 26144u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[4], c.r[3].w[0] + 26144u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 6u)));
    set32(c.r[3], c.r[6].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[7].w[0] + 580u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 6u)));
    set32(c.r[5], c.r[6].w[0] << 5);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 8);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0] + 584u), c.r[4].w[0]);
    c.budget -= 19;
L_00178F34:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00178F40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5104u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00178FF0; } }
    c.r[1].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[8], c.r[0], c.r[0]);  if (t) { goto L_00178FC8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[9], c.r[3].w[0] + 3344u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
L_00178F68:
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[10], c.r[5].w[0] << (c.r[8].w[0] & 31u));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 87u)));
    set32(c.r[11], c.r[3].w[0] + 299u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 299u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 371u)));
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[10].d[0] & c.r[3].d[0];
    c.budget -= 12;
    if (c.r[3].d[0] != 0ull) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_00178FBC; }
    c.r[3].d[0] = ld16((c.r[9].w[0] + 4u));
    c.r[3].d[0] = c.r[3].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00178FB8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | c.r[10].d[0];
    st8((c.r[11].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00178FB8:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_00178FBC:
    c.r[3].d[0] = c.r[8].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00178F68u | kUnwind; return; } goto L_00178F68; } }
L_00178FC8:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 298u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00178FF0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 299u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[4].w[0] + 299u);  if (t) { goto L_00178FF0; } }
    c.r[2].d[0] = c.r[3].d[0] << 56;
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 3;
L_00178FF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00179000:
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[6], c.r[2].w[0] << (c.r[4].w[0] & 31u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 87u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 371u)));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[7], c.r[5].w[0] + 371u);  if (t) { goto L_00179058; } }
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[2], c.r[2].w[0] + 3348u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[4], c.r[0]);  if (t) { goto L_0017905C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00179058:
    mmi::paddub(c.r[2], c.r[4], c.r[0]);
    c.budget -= 1;
L_0017905C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00179070:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_001790A0; } }
L_0017908C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179094u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_001E(c, 44u, depth + 1u); else { c.pc = 0x001790D0u; return; } if (c.pc != 0x00179094u) [[unlikely]] return; }
L_00179094:
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 3;
L_001790A0:
    c.r[1].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[2], c.r[17], c.r[0]);  if (t) { goto L_001790BC; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017908Cu | kUnwind; return; } goto L_0017908C; } }
    mmi::paddub(c.r[2], c.r[17], c.r[0]);
    c.budget -= 2;
L_001790BC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001790D0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << (c.r[4].w[0] & 31u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 87u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00179114; } }
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[2], c.r[2].w[0] + 3268u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 33632ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
L_00179114:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00179120:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << (c.r[4].w[0] & 31u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 87u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00179164; } }
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[2], c.r[2].w[0] + 3268u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 864ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
L_00179164:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00179170:
    set32(c.r[3], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[3].w[0] << 8);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[3], c.r[3].w[0] + 26144u);
    set32(c.r[8], c.r[3].w[0] + c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 8434u)));
    set32(c.r[3], c.r[5].w[0] - 2u);
    c.budget -= 10;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[6], c.r[3].w[0] << 2);  if (t) { goto L_001791A0; } }
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    set32(c.r[6], c.r[3].w[0] << 2);
    c.budget -= 2;
L_001791A0:
    set32(c.r[7], c.r[5].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[5], c.r[3].w[0] + 15888u);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[8].w[0] + 8412u)));
    set32(c.r[7], ld32((c.r[5].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[5], c.r[5].w[0] + 15888u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[5], c.r[7].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 14;
    { const bool t = c.r[3].sd[0] >= 0; st32((c.r[8].w[0] + 8412u), c.r[3].w[0]);  if (t) { goto L_001791DC; } }
    st32((c.r[8].w[0] + 8412u), 0u);
    c.budget -= 1;
L_001791DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[6], c.r[3].w[0] + 15888u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (t) { goto L_001791F8; } }
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 1;
L_001791F0:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 2;
L_001791F8:
    c.r[1].d[0] = c.r[7].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00179218; } }
    set32(c.r[5], ld32((c.r[8].w[0] + 8412u)));
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[6], c.r[6].w[0] + 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001791F0u | kUnwind; return; } goto L_001791F0; }
L_00179218:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; c.r[1].d[0] = c.r[7].sd[0] < 15ll ? 1ull : 0ull;  if (t) { goto L_00179228; } }
    set32(c.r[7], c.r[7].w[0] - 1u);
    c.r[1].d[0] = c.r[7].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 2;
L_00179228:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00179234; } }
    set32(c.r[7], 0u + 14u);
    c.budget -= 1;
L_00179234:
    st8((c.r[8].w[0] + 8434u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 396u), static_cast<std::uint8_t>(c.r[7].w[0]));  c.pc = t; return; }
L_00179250:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[16], c.r[2].w[0] + 9600u);
    set32(c.r[2], 0u + 139u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[1].w[0] + 16u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[1].w[0]), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 10416u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001792B8; } }
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 824u)));
    set32(c.r[5], 0u + 2048u);
    set32(c.r[4], c.r[16].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017929Cu); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 123u, depth + 1u); else { c.pc = 0x00101300u; return; } if (c.pc != 0x0017929Cu) [[unlikely]] return; }
L_0017929C:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 824u)));
    set32(c.r[5], 0u + 2048u);
    set32(c.r[4], c.r[16].w[0] + 224u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001792B0u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 128u, depth + 1u); else { c.pc = 0x00101568u; return; } if (c.pc != 0x001792B0u) [[unlikely]] return; }
L_001792B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 816u)));  if (t) { goto L_001792E4; } }
L_001792B8:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 824u)));
    set32(c.r[5], 0u + 2048u);
    set32(c.r[4], c.r[16].w[0] + 464u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001792CCu); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 123u, depth + 1u); else { c.pc = 0x00101300u; return; } if (c.pc != 0x001792CCu) [[unlikely]] return; }
L_001792CC:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 824u)));
    set32(c.r[5], 0u + 2048u);
    set32(c.r[4], c.r[16].w[0] + 592u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001792E0u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 128u, depth + 1u); else { c.pc = 0x00101568u; return; } if (c.pc != 0x001792E0u) [[unlikely]] return; }
L_001792E0:
    set32(c.r[5], ld32((c.r[16].w[0] + 816u)));
    c.budget -= 1;
L_001792E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001792ECu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 145u, depth + 1u); else { c.pc = 0x001018D8u; return; } if (c.pc != 0x001792ECu) [[unlikely]] return; }
L_001792EC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00179300:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[4], c.r[2].w[0] + 9600u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 820u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[4].w[0] + 820u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 822u)));
    c.budget -= 14;
    if (c.r[2].d[0] == 0ull) { mmi::paddub(c.r[4], c.r[0], c.r[0]);  goto L_00179364; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    st16((c.r[4].w[0] + 822u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.r[2].d[0] = ld64((c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] >> 13;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179360u); st32((c.r[4].w[0] + 824u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001E(c, 48u, depth + 1u); else { c.pc = 0x00179250u; return; } if (c.pc != 0x00179360u) [[unlikely]] return; }
L_00179360:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_00179364:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017936Cu);  if (depth < kMaxDepth) unit_0009(c, 122u, depth + 1u); else { c.pc = 0x00124AB0u; return; } if (c.pc != 0x0017936Cu) [[unlikely]] return; }
L_0017936C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179374u);  if (depth < kMaxDepth) unit_0026(c, 93u, depth + 1u); else { c.pc = 0x001994A0u; return; } if (c.pc != 0x00179374u) [[unlikely]] return; }
L_00179374:
    set_interrupts(c, true);
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00179390:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[16], c.r[2].w[0] + 9600u);
    set32(c.r[5], ld32((c.r[16].w[0] + 816u)));
    set32(c.r[2], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[3].w[0] + 848u);
    set32(c.r[3], ld32((c.r[3].w[0] + 852u)));
    set32(c.r[2], c.r[2].w[0] - 23808u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[4].d[0] & 256ull;
    c.budget -= 31;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001796FC; } }
    set32(c.r[2], 0u + 4u);
    c.r[3].d[0] = c.r[4].d[0] & 12ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001796FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001796FC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF0000000u);
    set32(c.r[2], 0u + 3u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[17].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[4], c.r[5].w[0] + 1u);
    st32((c.r[17].w[0] + 32u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[19], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[19].d[0] & c.r[3].d[0];
    c.r[19].d[0] = c.r[19].d[0] << 36;
    set32(c.r[18], c.r[3].w[0] >> 28);
    c.budget -= 17;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[19].d[0] = c.r[19].d[0] >> 36;  if (t) { goto L_001794A4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_00179498; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_001794A4; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001794A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 24u)));  if (t) { goto L_001794A8; } }
L_00179498:
    set32(c.r[2], ld32((c.r[19].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st32((c.r[19].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 3;
L_001794A4:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_001794A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001796FC; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF0000000u);
    set32(c.r[2], 0u + 4u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[19], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[19].d[0] & c.r[3].d[0];
    c.r[19].d[0] = c.r[19].d[0] << 36;
    set32(c.r[18], c.r[3].w[0] >> 28);
    c.budget -= 12;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; c.r[19].d[0] = c.r[19].d[0] >> 36;  if (t) { goto L_00179558; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0017955C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001794F0u);  if (depth < kMaxDepth) unit_0024(c, 221u, depth + 1u); else { c.pc = 0x001938A0u; return; } if (c.pc != 0x001794F0u) [[unlikely]] return; }
L_001794F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00179500; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179500u);  if (depth < kMaxDepth) unit_0024(c, 222u, depth + 1u); else { c.pc = 0x001938B0u; return; } if (c.pc != 0x00179500u) [[unlikely]] return; }
L_00179500:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00179558; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_00179528; } }
    set_interrupts(c, true);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00179708; } }
L_00179528:
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF0000000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[19], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[19].d[0] & c.r[2].d[0];
    c.r[19].d[0] = c.r[19].d[0] << 36;
    set32(c.r[18], c.r[2].w[0] >> 28);
    c.r[19].d[0] = c.r[19].d[0] >> 36;
    c.budget -= 12;
L_00179558:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0017955C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_001796A0; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0017963C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_001795E4; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_00179598; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00179598; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001796FC; } }
L_00179598:
    set32(c.r[8], ld32((c.r[17].w[0])));
    set32(c.r[4], 0u - 65u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[2], 0u - 129u);
    c.r[7].d[0] = ld8((c.r[8].w[0]));
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    c.r[4].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.r[4].d[0] = ld8((c.r[6].w[0]));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001795DCu); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 165u, depth + 1u); else { c.pc = 0x00101CC0u; return; } if (c.pc != 0x001795DCu) [[unlikely]] return; }
L_001795DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001796FC; } }
L_001795E4:
    set32(c.r[6], ld32((c.r[19].w[0] + 48u)));
    set32(c.r[4], 0u - 65u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[2], 0u - 129u);
    c.r[6].d[0] = c.r[6].d[0] | 2ull;
    st32((c.r[19].w[0] + 48u), c.r[6].w[0]);
    set32(c.r[7], ld32((c.r[17].w[0])));
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    c.r[6].d[0] = ld8((c.r[7].w[0]));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.r[4].d[0] = ld8((c.r[5].w[0]));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179634u); set32(c.r[5], ld32((c.r[19].w[0] + 40u)));  if (depth < kMaxDepth) unit_0000(c, 165u, depth + 1u); else { c.pc = 0x00101CC0u; return; } if (c.pc != 0x00179634u) [[unlikely]] return; }
L_00179634:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001796FC; } }
L_0017963C:
    set32(c.r[8], ld32((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[5], 0u - 65u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[3], 0u - 129u);
    c.r[7].d[0] = ld8((c.r[8].w[0]));
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    set32(c.r[2], c.r[2].w[0] + 7264u);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.r[5].d[0] = ld8((c.r[6].w[0]));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 816u)));
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[3], c.r[3].w[0] << 12);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179694u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0000(c, 165u, depth + 1u); else { c.pc = 0x00101CC0u; return; } if (c.pc != 0x00179694u) [[unlikely]] return; }
L_00179694:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001796FC; } }
L_0017969C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 1;
L_001796A0:
    c.r[2].d[0] = c.r[2].d[0] | 40960ull;
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017969Cu | kUnwind; return; } goto L_0017969C; } }
    set32(c.r[8], ld32((c.r[17].w[0])));
    set32(c.r[4], 0u - 65u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[2], 0u - 129u);
    c.r[7].d[0] = ld8((c.r[8].w[0]));
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    c.r[4].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.r[4].d[0] = ld8((c.r[6].w[0]));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001796FCu); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 165u, depth + 1u); else { c.pc = 0x00101CC0u; return; } if (c.pc != 0x001796FCu) [[unlikely]] return; }
L_001796FC:
    set_interrupts(c, true);
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
L_00179708:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00179730:
    set32(c.r[29], c.r[29].w[0] - 16u);
    mmi::paddub(c.r[10], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[4], c.r[2].w[0] + 9600u);
    set32(c.r[6], 0u + 640u);
    set32(c.r[7], 0u + 224u);
    set32(c.r[8], 0u + 3u);
    set32(c.r[9], 0u + 49u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017975Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 129u, depth + 1u); else { c.pc = 0x001015F0u; return; } if (c.pc != 0x0017975Cu) [[unlikely]] return; }
L_0017975C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179764u);  if (depth < kMaxDepth) unit_001E(c, 69u, depth + 1u); else { c.pc = 0x00179770u; return; } if (c.pc != 0x00179764u) [[unlikely]] return; }
L_00179764:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00179770:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 5186u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[4], c.r[2].w[0] + 9600u);
    set32(c.r[6], 0u + 640u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 5184u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    c.r[9].d[0] = c.r[2].d[0] << 48;
    set32(c.r[7], 0u + 224u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001797ACu); c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 48);  if (depth < kMaxDepth) unit_0000(c, 58u, depth + 1u); else { c.pc = 0x00100378u; return; } if (c.pc != 0x001797ACu) [[unlikely]] return; }
L_001797AC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 5186u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[4], c.r[2].w[0] + 9640u);
    set32(c.r[6], 0u + 640u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 5184u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    c.r[9].d[0] = c.r[2].d[0] << 48;
    set32(c.r[7], 0u + 224u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001797E0u); c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 48);  if (depth < kMaxDepth) unit_0000(c, 58u, depth + 1u); else { c.pc = 0x00100378u; return; } if (c.pc != 0x001797E0u) [[unlikely]] return; }
L_001797E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    c.r[5].d[0] = ld16((c.r[1].w[0] + 9656u));
    set32(c.r[3], 0u - 512u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(70ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    st16((c.r[1].w[0] + 9656u), static_cast<std::uint16_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00179810:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C10000u);
    set32(c.r[4], 0u + 346u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179828u); c.r[5].d[0] = c.r[2].d[0] | 14336ull;  if (depth < kMaxDepth) unit_000D(c, 71u, depth + 1u); else { c.pc = 0x00135140u; return; } if (c.pc != 0x00179828u) [[unlikely]] return; }
L_00179828:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00179844; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00C10000u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[6], c.r[29].w[0] + 24u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179844u); c.r[4].d[0] = c.r[2].d[0] | 14336ull;  if (depth < kMaxDepth) unit_000D(c, 266u, depth + 1u); else { c.pc = 0x00137B60u; return; } if (c.pc != 0x00179844u) [[unlikely]] return; }
L_00179844:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00179850:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] << 1);  if (t) { goto L_0017987C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x013D0000u);
    c.r[3].d[0] = c.r[3].d[0] | 38912ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st32((c.r[1].w[0] - 17600u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00F30000u);
    c.r[3].d[0] = c.r[3].d[0] | 22528ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st32((c.r[1].w[0] - 17596u), c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    c.budget -= 9;
L_0017987C:
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[5], ld32((c.r[1].w[0] - 17600u)));
    set32(c.r[6], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[3], c.r[3].w[0] - 7520u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[3], c.r[3].w[0] - 7516u);
    set32(c.r[4], ld32((c.r[1].w[0] - 17596u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[3], c.r[3].w[0] - 7512u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), 0u);  c.pc = t; return; }
L_001798D0:
    set32(c.r[3], 0u + 21728u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] + 26848u);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[3], c.r[3].w[0] - 7520u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[3], c.r[3].w[0] - 7516u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[5].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[3], c.r[3].w[0] - 7512u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[5].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 24;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[5].w[0] + 10612u), c.r[3].w[0]);  if (t) { goto L_0017993C; } }
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0017993C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00179950:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 184u), 0ull);
    st64((c.r[29].w[0] + 176u), 0ull);
    st64((c.r[29].w[0] + 168u), 0ull);
    st64((c.r[29].w[0] + 160u), 0ull);
    st64((c.r[29].w[0] + 152u), 0ull);
    st64((c.r[29].w[0] + 144u), 0ull);
    st64((c.r[29].w[0] + 136u), 0ull);
    st64((c.r[29].w[0] + 128u), 0ull);
    st64((c.r[29].w[0] + 120u), 0ull);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017999Cu); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_001E(c, 93u, depth + 1u); else { c.pc = 0x00179D70u; return; } if (c.pc != 0x0017999Cu) [[unlikely]] return; }
L_0017999C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00F30000u);
    c.r[3].d[0] = c.r[3].d[0] | 22528ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A40000u);
    st32((c.r[1].w[0] + 28128u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x013D0000u);
    c.r[3].d[0] = c.r[3].d[0] | 38912ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A40000u);
    st32((c.r[1].w[0] + 28132u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[20].d[0] = 0ull << 56;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 56);
    c.r[1].d[0] = c.r[20].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[3].w[0] + 513u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00179B00; } }
    set32(c.r[3], 0u + 21728u);
    mmi::mult(c, 0, c.r[20].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[3], c.r[3].w[0] + 26848u);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[20].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[3], c.r[3].w[0] - 7520u);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 11;
L_00179A00:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 336u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 342u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 384u)));
    c.r[3].d[0] = c.r[9].d[0] & 63ull;
    c.budget -= 10;
    { const bool t = c.r[9].d[0] == c.r[4].d[0]; c.r[3].d[0] = c.r[5].d[0] << (c.r[3].w[0] & 63u);  if (t) { goto L_00179AE0; } }
    c.r[19].d[0] = c.r[7].d[0] << 56;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[19].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    c.r[18].d[0] = c.r[8].d[0] << 56;
    set32(c.r[6], c.r[4].w[0] + c.r[29].w[0]);
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    set32(c.r[4], c.r[18].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[10], c.r[4].w[0] + 112u);
    c.r[4].d[0] = ld64((c.r[10].w[0]));
    c.r[4].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 15;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00179AE0; } }
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[20].w[0]));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[6].d[0] = ld64((c.r[10].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 22128u);
    set32(c.r[4], c.r[9].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = c.r[6].d[0] | c.r[3].d[0];
    st64((c.r[10].w[0]), c.r[3].d[0]);
    set32(c.r[21], ld32((c.r[2].w[0])));
    mmi::paddub(c.r[6], c.r[20], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00180000u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179AA8u); set32(c.r[4], c.r[2].w[0] - 26544u);  if (depth < kMaxDepth) unit_0093(c, 253u, depth + 1u); else { c.pc = 0x0034F7F0u; return; } if (c.pc != 0x00179AA8u) [[unlikely]] return; }
L_00179AA8:
    set32(c.r[2], c.r[18].w[0] << 1);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179AC4u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0094(c, 42u, depth + 1u); else { c.pc = 0x003503F0u; return; } if (c.pc != 0x00179AC4u) [[unlikely]] return; }
L_00179AC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00180000u);
    set32(c.r[4], c.r[2].w[0] - 26416u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179AD8u); mmi::paddub(c.r[6], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 253u, depth + 1u); else { c.pc = 0x0034F7F0u; return; } if (c.pc != 0x00179AD8u) [[unlikely]] return; }
L_00179AD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { goto L_00179AEC; } }
L_00179AE0:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 3;
L_00179AEC:
    c.r[3].d[0] = c.r[20].sd[0] < 6ll ? 1ull : 0ull;
    set32(c.r[16], c.r[16].w[0] + 21728u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00179A00u | kUnwind; return; } goto L_00179A00; } }
    c.budget -= 1;
L_00179B00:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00179B30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179B44u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_001E(c, 93u, depth + 1u); else { c.pc = 0x00179D70u; return; } if (c.pc != 0x00179B44u) [[unlikely]] return; }
L_00179B44:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00840000u);
    set32(c.r[16], c.r[3].w[0] + 26848u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 3;
L_00179B50:
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00179D4C; }
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], ld32((c.r[16].w[0] + 24u)));  if (t) { goto L_00179B8C; } }
    set32(c.r[2], 0u + 1u);
    mmi::paddub(c.r[6], c.r[7], c.r[0]);
    st16((c.r[16].w[0] + 21712u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179B84u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 209u, depth + 1u); else { c.pc = 0x00136EF0u; return; } if (c.pc != 0x00179B84u) [[unlikely]] return; }
L_00179B84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_00179BA4; } }
L_00179B8C:
    st16((c.r[16].w[0] + 21712u), static_cast<std::uint16_t>(0u));
    set32(c.r[6], ld32((c.r[16].w[0] + 10612u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179B9Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 219u, depth + 1u); else { c.pc = 0x001370F0u; return; } if (c.pc != 0x00179B9Cu) [[unlikely]] return; }
L_00179B9C:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 2;
L_00179BA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179BACu);  if (depth < kMaxDepth) unit_000D(c, 168u, depth + 1u); else { c.pc = 0x00136A50u; return; } if (c.pc != 0x00179BACu) [[unlikely]] return; }
L_00179BAC:
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[2].sd[0] < 48ll ? 1ull : 0ull;  if (t) { goto L_00179C78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179BC8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_001E(c, 108u, depth + 1u); else { c.pc = 0x0017A000u; return; } if (c.pc != 0x00179BC8u) [[unlikely]] return; }
L_00179BC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[6], c.r[2].w[0] + 21168u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 6u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[5], c.r[2].w[0] - 16096u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[7].w[0] << 4);
    set32(c.r[7], c.r[2].w[0] - c.r[7].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[7].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[4], c.r[2].w[0] - 16032u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[3], c.r[2].w[0] - 14096u);
    set32(c.r[2], c.r[5].w[0] + c.r[6].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 43;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_00179D38; } }
    c.r[1].d[0] = c.r[2].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 1;
L_00179C78:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00179CF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179C88u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_001E(c, 113u, depth + 1u); else { c.pc = 0x0017A580u; return; } if (c.pc != 0x00179C88u) [[unlikely]] return; }
L_00179C88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[5], c.r[2].w[0] + 21072u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 6u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[3], c.r[2].w[0] - 16096u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0] - 128u), c.r[16].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 15936u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] - 128u)));
    c.budget -= 27;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00179D38; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00179CF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179D00u);  if (depth < kMaxDepth) unit_001E(c, 116u, depth + 1u); else { c.pc = 0x0017A800u; return; } if (c.pc != 0x00179D00u) [[unlikely]] return; }
L_00179D00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[4], c.r[2].w[0] + 21008u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[3], c.r[2].w[0] - 16096u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] - 192u), c.r[16].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 14;
L_00179D38:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00179D44u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));  if (depth < kMaxDepth) unit_0028(c, 94u, depth + 1u); else { c.pc = 0x001A1400u; return; } if (c.pc != 0x00179D44u) [[unlikely]] return; }
L_00179D44:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_00179D4C:
    c.r[3].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 21728u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00179B50u | kUnwind; return; } goto L_00179B50; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00179D70:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[10], c.r[3].w[0] + 8992u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[11], c.r[3].w[0] + 13504u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    c.budget -= 6;
L_00179D88:
    set32(c.r[8], c.r[4].w[0] - 18864u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[10], c.r[0]);
    mmi::paddub(c.r[9], c.r[11], c.r[0]);
    c.budget -= 4;
L_00179D98:
    c.r[12].d[0] = ld8((c.r[8].w[0]));
    c.budget -= 3;
    { const bool t = c.r[12].d[0] == 0ull; set32(c.r[3], ld32((c.r[7].w[0])));  if (t) { goto L_00179DC8; } }
    c.budget -= 1;
L_00179DA8:
    st32((c.r[3].w[0] + 8u), 0u);
    set32(c.r[12], c.r[12].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.budget -= 7;
    { const bool t = c.r[12].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00179DA8u | kUnwind; return; } goto L_00179DA8; } }
    c.budget -= 1;
L_00179DC8:
    set32(c.r[3], ld32((c.r[9].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_00179E04; }
    c.r[12].d[0] = ld8((c.r[8].w[0]));
    c.budget -= 3;
    { const bool t = c.r[12].d[0] == 0ull;  if (t) { goto L_00179E00; } }
L_00179DE0:
    st32((c.r[3].w[0] + 8u), 0u);
    set32(c.r[12], c.r[12].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.budget -= 7;
    { const bool t = c.r[12].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00179DE0u | kUnwind; return; } goto L_00179DE0; } }
    c.budget -= 1;
L_00179E00:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00179E04:
    set32(c.r[7], c.r[7].w[0] + 4u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(21ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00179D98u | kUnwind; return; } goto L_00179D98; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[10], c.r[10].w[0] + 84u);
    c.r[3].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[11], c.r[11].w[0] + 84u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00179D88u | kUnwind; return; } goto L_00179D88; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], c.r[3].w[0] + 15904u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 3;
L_00179E38:
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    mmi::paddub(c.r[4], c.r[5], c.r[0]);
    c.budget -= 2;
L_00179E40:
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00179E40u | kUnwind; return; } goto L_00179E40; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 384u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00179E38u | kUnwind; return; } goto L_00179E38; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], c.r[3].w[0] - 15600u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 3;
L_00179E78:
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00179E78u | kUnwind; return; } goto L_00179E78; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[5], c.r[3].w[0] + 27520u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[6], c.r[3].w[0] + 26720u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[7], c.r[3].w[0] + 26480u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[8], c.r[3].w[0] + 26240u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[9], c.r[3].w[0] + 27488u);
    mmi::paddub(c.r[10], c.r[0], c.r[0]);
    c.budget -= 11;
L_00179EC0:
    st32((c.r[5].w[0]), 0u);
    st32((c.r[5].w[0] + 4u), 0u);
    st32((c.r[5].w[0] + 8u), 0u);
    mmi::paddub(c.r[11], c.r[0], c.r[0]);
    mmi::paddub(c.r[4], c.r[6], c.r[0]);
    c.budget -= 6;
L_00179ED8:
    set32(c.r[11], c.r[11].w[0] + 1u);
    st32((c.r[4].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[3].d[0] = c.r[11].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00179ED8u | kUnwind; return; } goto L_00179ED8; } }
    mmi::paddub(c.r[11], c.r[0], c.r[0]);
    mmi::paddub(c.r[4], c.r[7], c.r[0]);
    c.budget -= 3;
L_00179F00:
    set32(c.r[11], c.r[11].w[0] + 1u);
    st32((c.r[4].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[3].d[0] = c.r[11].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00179F00u | kUnwind; return; } goto L_00179F00; } }
    mmi::paddub(c.r[11], c.r[0], c.r[0]);
    mmi::paddub(c.r[4], c.r[8], c.r[0]);
    c.budget -= 3;
L_00179F28:
    set32(c.r[11], c.r[11].w[0] + 1u);
    st32((c.r[4].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[3].d[0] = c.r[11].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00179F28u | kUnwind; return; } goto L_00179F28; } }
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[9].w[0]), 0u);
    set32(c.r[5], c.r[5].w[0] + 12u);
    set32(c.r[6], c.r[6].w[0] + 128u);
    set32(c.r[7], c.r[7].w[0] + 40u);
    set32(c.r[8], c.r[8].w[0] + 40u);
    c.r[3].d[0] = c.r[10].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00179EC0u | kUnwind; return; } goto L_00179EC0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[3], c.r[3].w[0] + 22016u);
    st32((c.r[28].w[0] - 26228u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[3], c.r[3].w[0] + 21168u);
    set32(c.r[4], 0u + 210u);
    c.budget -= 6;
L_00179F80:
    st32((c.r[3].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00179F80u | kUnwind; return; } goto L_00179F80; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[4], c.r[3].w[0] + 21072u);
    set32(c.r[3], 0u + 22u);
    c.budget -= 3;
L_00179FA8:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00179FA8u | kUnwind; return; } goto L_00179FA8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[4], c.r[3].w[0] + 21008u);
    set32(c.r[3], 0u + 14u);
    c.budget -= 3;
L_00179FD0:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00179FD0u | kUnwind; return; } goto L_00179FD0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017A000:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[7], c.r[3].w[0] + 8992u);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[8], c.r[9].w[0] << 3);
    set32(c.r[9], c.r[8].w[0] - c.r[9].w[0]);
    set32(c.r[8], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] - c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[6].w[0])));
    set32(c.r[6], c.r[3].w[0] << 5);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[3], c.r[3].w[0] + 27520u);
    set32(c.r[7], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[7].w[0] + 8u), c.r[3].w[0]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[8], c.r[3].w[0] - 13488u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[5], c.r[3].w[0] + 26720u);
    st16((c.r[7].w[0] + 14u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] + 27520u);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[10], c.r[6].w[0] << 2);
    set32(c.r[9], ld32((c.r[8].w[0])));
    set32(c.r[6], c.r[7].w[0] << 7);
    set32(c.r[8], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[7].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[7], ld32((c.r[6].w[0])));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[6].w[0]), c.r[8].w[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[3], c.r[4], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[12], 0u + 1u);
    set32(c.r[10], c.r[8].w[0] + 26720u);
    c.budget -= 54;
L_0017A0D8:
    set32(c.r[8], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[13], c.r[3].w[0] + 48u);
    set32(c.r[11], c.r[3].w[0] + 10640u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(0u));
    c.r[9].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[8], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[8], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[8].w[0] + 2u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[8], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[8].w[0] + 3u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[8], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[8].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(19ll) ? 1ull : 0ull;
    st32((c.r[9].w[0] + 8u), c.r[13].w[0]);
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    st32((c.r[9].w[0] + 12u), c.r[11].w[0]);
    st16((c.r[3].w[0] + 146u), static_cast<std::uint16_t>(c.r[12].w[0]));
    st16((c.r[3].w[0] + 10738u), static_cast<std::uint16_t>(c.r[12].w[0]));
    c.r[9].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[11], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[3], c.r[3].w[0] + 240u);
    set32(c.r[9], c.r[9].w[0] << 7);
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[6].w[0] + c.r[9].w[0]);
    st32((c.r[9].w[0]), c.r[11].w[0]);
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[6], c.r[6].w[0] + 4u);
    set32(c.r[9], c.r[9].w[0] + 16u);
    c.budget -= 35;
    { const bool t = c.r[8].d[0] != 0ull; st32((c.r[28].w[0] - 26228u), c.r[9].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017A0D8u | kUnwind; return; } goto L_0017A0D8; } }
    c.r[6].d[0] = ld8((c.r[7].w[0]));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_0017A260; } }
    set32(c.r[8], c.r[5].w[0] << 2);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[10], c.r[9].w[0] + 26720u);
    c.budget -= 4;
L_0017A180:
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(0u));
    c.r[11].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[9].w[0] + 1u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[9].w[0] + 2u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[9].w[0] + 3u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[9].w[0] + 4u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[12].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[11], c.r[12].w[0] << 4);
    set32(c.r[11], c.r[11].w[0] - c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] << 4);
    set32(c.r[11], c.r[4].w[0] + c.r[11].w[0]);
    set32(c.r[11], c.r[11].w[0] + 48u);
    st32((c.r[9].w[0] + 8u), c.r[11].w[0]);
    c.r[12].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[11], c.r[12].w[0] << 4);
    set32(c.r[11], c.r[11].w[0] - c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] << 4);
    set32(c.r[11], c.r[4].w[0] + c.r[11].w[0]);
    set32(c.r[11], c.r[11].w[0] + 10640u);
    st32((c.r[9].w[0] + 12u), c.r[11].w[0]);
    c.r[11].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[9], c.r[11].w[0] << 4);
    set32(c.r[9], c.r[9].w[0] - c.r[11].w[0]);
    set32(c.r[9], c.r[9].w[0] << 4);
    set32(c.r[9], c.r[4].w[0] + c.r[9].w[0]);
    st16((c.r[9].w[0] + 146u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[11].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[9], c.r[11].w[0] << 4);
    set32(c.r[9], c.r[9].w[0] - c.r[11].w[0]);
    set32(c.r[9], c.r[9].w[0] << 4);
    set32(c.r[9], c.r[4].w[0] + c.r[9].w[0]);
    st16((c.r[9].w[0] + 10738u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[9].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[11], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[9], c.r[9].w[0] << 7);
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[8].w[0] + c.r[9].w[0]);
    st32((c.r[9].w[0]), c.r[11].w[0]);
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[8], c.r[8].w[0] + 4u);
    set32(c.r[9], c.r[9].w[0] + 16u);
    c.budget -= 56;
    { const bool t = c.r[6].d[0] != 0ull; st32((c.r[28].w[0] - 26228u), c.r[9].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017A180u | kUnwind; return; } goto L_0017A180; } }
L_0017A260:
    c.r[8].d[0] = ld8((c.r[7].w[0]));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_0017A3A8; } }
    c.r[9].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[5], c.r[3].w[0] + 26480u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[3], c.r[3].w[0] + 27524u);
    set32(c.r[6], c.r[9].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[9].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[9].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[6].w[0]);
    c.budget -= 16;
    { const bool t = c.r[8].d[0] == 0ull; mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (t) { goto L_0017A3A8; } }
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[10], c.r[9].w[0] + 26480u);
    c.budget -= 4;
L_0017A2BC:
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[8], c.r[8].w[0] - 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(0u));
    c.r[11].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[9].w[0] + 1u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[9].w[0] + 2u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[9].w[0] + 3u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[9].w[0] + 4u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[12].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[11], c.r[12].w[0] << 4);
    set32(c.r[11], c.r[11].w[0] - c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] << 4);
    set32(c.r[11], c.r[4].w[0] + c.r[11].w[0]);
    set32(c.r[11], c.r[11].w[0] + 48u);
    st32((c.r[9].w[0] + 8u), c.r[11].w[0]);
    c.r[12].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[11], c.r[12].w[0] << 4);
    set32(c.r[11], c.r[11].w[0] - c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] << 4);
    set32(c.r[11], c.r[4].w[0] + c.r[11].w[0]);
    set32(c.r[11], c.r[11].w[0] + 10640u);
    st32((c.r[9].w[0] + 12u), c.r[11].w[0]);
    c.r[11].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[9], c.r[11].w[0] << 4);
    set32(c.r[9], c.r[9].w[0] - c.r[11].w[0]);
    set32(c.r[9], c.r[9].w[0] << 4);
    set32(c.r[9], c.r[4].w[0] + c.r[9].w[0]);
    st16((c.r[9].w[0] + 146u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[11].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[9], c.r[11].w[0] << 4);
    set32(c.r[9], c.r[9].w[0] - c.r[11].w[0]);
    set32(c.r[9], c.r[9].w[0] << 4);
    set32(c.r[9], c.r[4].w[0] + c.r[9].w[0]);
    st16((c.r[9].w[0] + 10738u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[11].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[12], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[9], c.r[11].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[11].w[0]);
    set32(c.r[9], c.r[9].w[0] << 3);
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[5].w[0] + c.r[9].w[0]);
    st32((c.r[9].w[0]), c.r[12].w[0]);
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[9], c.r[9].w[0] + 16u);
    c.budget -= 58;
    { const bool t = c.r[8].d[0] != 0ull; st32((c.r[28].w[0] - 26228u), c.r[9].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017A2BCu | kUnwind; return; } goto L_0017A2BC; } }
    c.budget -= 1;
L_0017A3A8:
    c.r[8].d[0] = ld8((c.r[7].w[0]));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { goto L_0017A578; } }
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[9], c.r[3].w[0] + 13504u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[10], c.r[11].w[0] << 3);
    set32(c.r[11], c.r[10].w[0] - c.r[11].w[0]);
    set32(c.r[10], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] - c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    set32(c.r[10], ld32((c.r[6].w[0])));
    set32(c.r[6], c.r[5].w[0] << 5);
    set32(c.r[5], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[3], c.r[3].w[0] + 27488u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[10], c.r[10].w[0] + c.r[6].w[0]);
    st32((c.r[10].w[0] + 8u), c.r[3].w[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[9], c.r[3].w[0] + 26240u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[6], c.r[3].w[0] + 27528u);
    st16((c.r[10].w[0] + 14u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[11].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[5], c.r[3].w[0] + 26240u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[3], c.r[3].w[0] + 27488u);
    set32(c.r[10], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] << 3);
    set32(c.r[10], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[9], c.r[11].w[0] << 1);
    set32(c.r[9], c.r[9].w[0] + c.r[11].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    st32((c.r[6].w[0]), c.r[10].w[0]);
    c.r[9].d[0] = ld8((c.r[4].w[0] + 1u));
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    set32(c.r[10], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[9].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[10].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[9].w[0]);
    c.budget -= 51;
    { const bool t = c.r[8].d[0] == 0ull; st32((c.r[3].w[0]), c.r[5].w[0]);  if (t) { goto L_0017A578; } }
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[10], c.r[9].w[0] + 26240u);
    c.budget -= 4;
L_0017A490:
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[8], c.r[8].w[0] - 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(0u));
    c.r[11].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[9].w[0] + 1u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[9].w[0] + 2u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[9].w[0] + 3u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[9].w[0] + 4u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[12].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[11], c.r[12].w[0] << 4);
    set32(c.r[11], c.r[11].w[0] - c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] << 4);
    set32(c.r[11], c.r[4].w[0] + c.r[11].w[0]);
    set32(c.r[11], c.r[11].w[0] + 48u);
    st32((c.r[9].w[0] + 8u), c.r[11].w[0]);
    c.r[12].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[11], c.r[12].w[0] << 4);
    set32(c.r[11], c.r[11].w[0] - c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] << 4);
    set32(c.r[11], c.r[4].w[0] + c.r[11].w[0]);
    set32(c.r[11], c.r[11].w[0] + 10640u);
    st32((c.r[9].w[0] + 12u), c.r[11].w[0]);
    c.r[11].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[9], c.r[11].w[0] << 4);
    set32(c.r[9], c.r[9].w[0] - c.r[11].w[0]);
    set32(c.r[9], c.r[9].w[0] << 4);
    set32(c.r[9], c.r[4].w[0] + c.r[9].w[0]);
    st16((c.r[9].w[0] + 146u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[11].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[9], c.r[11].w[0] << 4);
    set32(c.r[9], c.r[9].w[0] - c.r[11].w[0]);
    set32(c.r[9], c.r[9].w[0] << 4);
    set32(c.r[9], c.r[4].w[0] + c.r[9].w[0]);
    st16((c.r[9].w[0] + 10738u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[11].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[12], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[9], c.r[11].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[11].w[0]);
    set32(c.r[9], c.r[9].w[0] << 3);
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[5].w[0] + c.r[9].w[0]);
    st32((c.r[9].w[0]), c.r[12].w[0]);
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[9], c.r[9].w[0] + 16u);
    c.budget -= 58;
    { const bool t = c.r[8].d[0] != 0ull; st32((c.r[28].w[0] - 26228u), c.r[9].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017A490u | kUnwind; return; } goto L_0017A490; } }
L_0017A578:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017A580:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[8].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[5], c.r[3].w[0] + 27520u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[9], c.r[7].w[0] - 32u);
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + 15912u);
    set32(c.r[5], c.r[5].w[0] << 7);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[10], c.r[9].w[0] << 5);
    set32(c.r[3], c.r[10].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[6], c.r[3].w[0] + 15918u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[5], c.r[9].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] - 13392u);
    c.r[9].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[7], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[8].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 7);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[10].w[0] + c.r[3].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[8].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[5], c.r[3].w[0] + 26720u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[6], c.r[8].w[0] << 7);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[8].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] + 27520u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[6].w[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[11], c.r[10].w[0] + 26720u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[8], c.r[4], c.r[0]);
    c.budget -= 53;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[9], c.r[0], c.r[0]);  if (t) { goto L_0017A6D8; } }
L_0017A654:
    set32(c.r[10], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[13], c.r[8].w[0] + 48u);
    set32(c.r[12], c.r[8].w[0] + 10640u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[14].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[10], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[10].w[0] + 1u), static_cast<std::uint8_t>(c.r[14].w[0]));
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[10], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[10].w[0] + 2u), static_cast<std::uint8_t>(c.r[14].w[0]));
    set32(c.r[10], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[10].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[10], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[10].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[10], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[10].w[0] + 8u), c.r[13].w[0]);
    set32(c.r[10], ld32((c.r[28].w[0] - 26228u)));
    st32((c.r[10].w[0] + 12u), c.r[12].w[0]);
    st16((c.r[8].w[0] + 146u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[8].w[0] + 10738u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[10].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[12], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[8], c.r[8].w[0] + 240u);
    set32(c.r[10], c.r[10].w[0] << 7);
    set32(c.r[10], c.r[11].w[0] + c.r[10].w[0]);
    set32(c.r[10], c.r[9].w[0] + c.r[10].w[0]);
    st32((c.r[10].w[0]), c.r[12].w[0]);
    set32(c.r[10], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[9], c.r[9].w[0] + 4u);
    set32(c.r[10], c.r[10].w[0] + 16u);
    st32((c.r[28].w[0] - 26228u), c.r[10].w[0]);
    c.budget -= 33;
L_0017A6D8:
    c.r[10].d[0] = ld8((c.r[7].w[0]));
    c.r[10].d[0] = c.r[5].d[0] < c.r[10].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017A654u | kUnwind; return; } goto L_0017A654; } }
    c.r[3].d[0] = ld8((c.r[7].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0017A7F0; } }
    c.r[9].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[5], c.r[3].w[0] + 26480u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[8], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 3);
    set32(c.r[8], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[5], c.r[9].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[3].w[0] + 27524u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[8].w[0]);
    set32(c.r[3], c.r[6].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[11], c.r[10].w[0] + 26480u);
    mmi::paddub(c.r[9], c.r[0], c.r[0]);
    c.budget -= 24;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[8], c.r[0], c.r[0]);  if (t) { goto L_0017A7E0; } }
L_0017A754:
    set32(c.r[10], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[13], c.r[5].w[0] + 48u);
    set32(c.r[12], c.r[5].w[0] + 10640u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[14].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[10], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[10].w[0] + 1u), static_cast<std::uint8_t>(c.r[14].w[0]));
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[10], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[10].w[0] + 2u), static_cast<std::uint8_t>(c.r[14].w[0]));
    set32(c.r[10], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[10].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[10], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[10].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[10], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[10].w[0] + 8u), c.r[13].w[0]);
    set32(c.r[10], ld32((c.r[28].w[0] - 26228u)));
    st32((c.r[10].w[0] + 12u), c.r[12].w[0]);
    st16((c.r[5].w[0] + 146u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[5].w[0] + 10738u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[12].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[13], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[5], c.r[5].w[0] + 240u);
    set32(c.r[10], c.r[12].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[12].w[0]);
    set32(c.r[10], c.r[10].w[0] << 3);
    set32(c.r[10], c.r[11].w[0] + c.r[10].w[0]);
    set32(c.r[10], c.r[8].w[0] + c.r[10].w[0]);
    st32((c.r[10].w[0]), c.r[13].w[0]);
    set32(c.r[10], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[8], c.r[8].w[0] + 4u);
    set32(c.r[10], c.r[10].w[0] + 16u);
    st32((c.r[28].w[0] - 26228u), c.r[10].w[0]);
    c.budget -= 35;
L_0017A7E0:
    c.r[10].d[0] = ld8((c.r[7].w[0] + 1u));
    c.r[10].d[0] = c.r[9].d[0] < c.r[10].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017A754u | kUnwind; return; } goto L_0017A754; } }
L_0017A7F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017A800:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[5], c.r[3].w[0] + 27520u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[9], c.r[6].w[0] - 48u);
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] - 15592u);
    set32(c.r[6], c.r[9].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] - 15586u);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[12], 0u + 1u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] + 7800u);
    c.r[8].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[6], c.r[3].w[0] + c.r[9].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[3], c.r[3].w[0] + 26720u);
    set32(c.r[5], c.r[8].w[0] << 7);
    set32(c.r[7], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[8].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[5], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[3], c.r[3].w[0] + 27520u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[7].w[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[10], c.r[9].w[0] + 26720u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[4], c.r[0]);
    c.budget -= 42;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[8], c.r[0], c.r[0]);  if (t) { goto L_0017A920; } }
L_0017A8A8:
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[11], c.r[7].w[0] + 48u);
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[13].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[9].w[0] + 1u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[9].w[0] + 2u), static_cast<std::uint8_t>(c.r[13].w[0]));
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[9].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    st8((c.r[9].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[9].w[0] + 8u), c.r[11].w[0]);
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    st32((c.r[9].w[0] + 12u), 0u);
    st16((c.r[7].w[0] + 146u), static_cast<std::uint16_t>(c.r[12].w[0]));
    c.r[9].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[11], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[7], c.r[7].w[0] + 240u);
    set32(c.r[9], c.r[9].w[0] << 7);
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[8].w[0] + c.r[9].w[0]);
    st32((c.r[9].w[0]), c.r[11].w[0]);
    set32(c.r[9], ld32((c.r[28].w[0] - 26228u)));
    set32(c.r[8], c.r[8].w[0] + 4u);
    set32(c.r[9], c.r[9].w[0] + 16u);
    st32((c.r[28].w[0] - 26228u), c.r[9].w[0]);
    c.budget -= 30;
L_0017A920:
    c.r[9].d[0] = ld8((c.r[6].w[0]));
    c.r[9].d[0] = c.r[5].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017A8A8u | kUnwind; return; } goto L_0017A8A8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017A940:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8384u)));
    set32(c.r[7], 0u + 26064u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[6], c.r[3].w[0] + 27600u);
    mmi::mult(c, 0, c.r[8].w[0], c.r[7].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] << 16;
    set32(c.r[16], c.r[6].w[0] + c.r[7].w[0]);
    st8((c.r[16].w[0] + 26040u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8387u)));
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    st8((c.r[16].w[0] + 26041u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8389u)));
    st8((c.r[16].w[0] + 26042u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st64((c.r[16].w[0] + 26032u), c.r[3].d[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[1].d[0] = c.r[6].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 25;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[6].sd[0] < 48ll ? 1ull : 0ull;  if (t) { goto L_0017A9FC; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8389u)));
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[5], c.r[2].w[0] + 21168u);
    set32(c.r[6], c.r[7].w[0] << 4);
    set32(c.r[7], c.r[6].w[0] - c.r[7].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8387u)));
    set32(c.r[6], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017A9F0u); st32((c.r[16].w[0] + 26044u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0028(c, 90u, depth + 1u); else { c.pc = 0x001A12A0u; return; } if (c.pc != 0x0017A9F0u) [[unlikely]] return; }
L_0017A9F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 26044u)));  if (t) { goto L_0017AA60; } }
    c.r[1].d[0] = c.r[6].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 1;
L_0017A9FC:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0017AA44; } }
    set32(c.r[2], c.r[6].w[0] << 2);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8389u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[3], c.r[3].w[0] + 20944u);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AA3Cu); st32((c.r[16].w[0] + 26044u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0028(c, 90u, depth + 1u); else { c.pc = 0x001A12A0u; return; } if (c.pc != 0x0017AA3Cu) [[unlikely]] return; }
L_0017AA3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017AA5C; } }
L_0017AA44:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00820000u);
    set32(c.r[3], c.r[3].w[0] + 20816u);
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[16].w[0] + 26044u), c.r[3].w[0]);
    c.budget -= 6;
L_0017AA5C:
    set32(c.r[3], ld32((c.r[16].w[0] + 26044u)));
    c.budget -= 1;
L_0017AA60:
    set32(c.r[3], ld32((c.r[3].w[0] + 21712u)));
    st32((c.r[16].w[0] + 26052u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017AA80:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[3].w[0] + 25952u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st32((c.r[1].w[0] - 7564u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st32((c.r[1].w[0] - 7568u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x01740000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 331u)));
    c.budget -= 18;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] | 55296ull;  if (t) { goto L_0017AAD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_0017AAD4; } }
L_0017AAD0:
    set32(c.r[17], 0u + 2u);
    c.budget -= 1;
L_0017AAD4:
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0017AB44; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2070u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0017AB14; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 2068u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[3], c.r[3].w[0] + 5680u);
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_0017AB30; } }
L_0017AB14:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 2068u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[3], c.r[3].w[0] + 9648u);
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 7;
L_0017AB30:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 25u)));
    set32(c.r[3], 0u + 127u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0017AB44; } }
    set32(c.r[17], 0u + 2u);
    c.budget -= 1;
L_0017AB44:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 6u)));  if (t) { goto L_0017AC00; } }
    set32(c.r[18], c.r[3].w[0] << 1);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[19], c.r[3].w[0] - 7584u);
    c.budget -= 3;
L_0017AB58:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 255u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 257u)));
    set32(c.r[5], c.r[5].w[0] + c.r[18].w[0]);
    set32(c.r[6], c.r[5].w[0] + c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 264u)));
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 10;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[18], c.r[18].w[0] + 2u);  goto L_0017ABF4; }
    c.r[3].d[0] = c.r[5].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[5], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[4], c.r[3].w[0] - 22512u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 272u)));
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld16((c.r[5].w[0] + 12u));
    c.budget -= 13;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_0017ABEC; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 280u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[20], c.r[16], c.r[0]);  if (t) { goto L_0017ABD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017ABC8u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0094(c, 27u, depth + 1u); else { c.pc = 0x00350270u; return; } if (c.pc != 0x0017ABC8u) [[unlikely]] return; }
L_0017ABC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  if (t) { goto L_0017ABE0; } }
L_0017ABD0:
    c.r[4].d[0] = ld16((c.r[5].w[0] + 14u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017ABDCu); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0094(c, 27u, depth + 1u); else { c.pc = 0x00350270u; return; } if (c.pc != 0x0017ABDCu) [[unlikely]] return; }
L_0017ABDC:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_0017ABE0:
    st32((c.r[19].w[0] + 16u), c.r[20].w[0]);
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 3;
L_0017ABEC:
    set32(c.r[19], c.r[19].w[0] + 4u);
    set32(c.r[18], c.r[18].w[0] + 2u);
    c.budget -= 2;
L_0017ABF4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017AB58u | kUnwind; return; } goto L_0017AB58; } }
    c.budget -= 1;
L_0017AC00:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0017AC20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[3].w[0] - 7584u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 7;
L_0017AC3C:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0017AC74; }
    set32(c.r[2], c.r[16].w[0] + 4u);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[2], c.r[2].w[0] - 16736u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[7], c.r[2].w[0] + 16u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AC6Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 263u, depth + 1u); else { c.pc = 0x00137AF0u; return; } if (c.pc != 0x0017AC6Cu) [[unlikely]] return; }
L_0017AC6C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_0017AC74:
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017AC3Cu | kUnwind; return; } goto L_0017AC3C; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0017ACA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st32((c.r[1].w[0] - 7556u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st32((c.r[1].w[0] - 7560u), 0u);
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0017AD58; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 6u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01A40000u);
    c.r[16].d[0] = c.r[2].d[0] | 23552ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 20464u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 688u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AD04u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0094(c, 27u, depth + 1u); else { c.pc = 0x00350270u; return; } if (c.pc != 0x0017AD04u) [[unlikely]] return; }
L_0017AD04:
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01A40000u);
    c.r[2].d[0] = c.r[2].d[0] | 23552ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st32((c.r[1].w[0] - 7560u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 6u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 20464u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 260u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 692u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AD50u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0094(c, 27u, depth + 1u); else { c.pc = 0x00350270u; return; } if (c.pc != 0x0017AD50u) [[unlikely]] return; }
L_0017AD50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st32((c.r[1].w[0] - 7556u), c.r[16].w[0]);
    c.budget -= 2;
L_0017AD58:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0017AD70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 7560u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0017AD9C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[7], c.r[2].w[0] - 16696u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AD9Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 263u, depth + 1u); else { c.pc = 0x00137AF0u; return; } if (c.pc != 0x0017AD9Cu) [[unlikely]] return; }
L_0017AD9C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 7556u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0017ADC0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[7], c.r[2].w[0] - 16692u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017ADC0u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 263u, depth + 1u); else { c.pc = 0x00137AF0u; return; } if (c.pc != 0x0017ADC0u) [[unlikely]] return; }
L_0017ADC0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0017ADD0:
    set32(c.r[5], ld32((c.r[28].w[0] - 26592u)));
    set32(c.r[3], 0u - 16u);
    set32(c.r[5], c.r[5].w[0] + 15u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[28].w[0] - 26672u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26672u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  c.pc = t; return; }
L_0017ADF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01490000u);
    c.r[3].d[0] = c.r[3].d[0] | 14336ull;
    st32((c.r[28].w[0] - 26672u), c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 26592u), c.r[3].w[0]);  c.pc = t; return; }
L_0017AE10:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st64((c.r[29].w[0] + 80u), 0ull);
    st64((c.r[29].w[0] + 72u), 0ull);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01490000u);
    st64((c.r[29].w[0] + 64u), 0ull);
    c.r[6].d[0] = c.r[2].d[0] | 14336ull;
    st64((c.r[29].w[0] + 56u), 0ull);
    c.budget -= 11;
L_0017AE3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00180000u);
    st64((c.r[29].w[0] + 48u), 0ull);
    set32(c.r[4], c.r[2].w[0] - 21008u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AE54u); st32((c.r[3].w[0] + 516u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_0093(c, 253u, depth + 1u); else { c.pc = 0x0034F7F0u; return; } if (c.pc != 0x0017AE54u) [[unlikely]] return; }
L_0017AE54:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 1409u);
    set32(c.r[2], 0u + 1459u);
    set32(c.r[5], c.r[28].w[0] - 26672u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 369u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AE70u); if (c.r[3].d[0] != 0) c.r[4].d[0] = c.r[2].d[0];  if (depth < kMaxDepth) unit_0094(c, 37u, depth + 1u); else { c.pc = 0x00350370u; return; } if (c.pc != 0x0017AE70u) [[unlikely]] return; }
L_0017AE70:
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 1;
L_0017AE74:
    set32(c.r[11], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[11].w[0] + c.r[16].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 336u)));
    c.r[1].d[0] = c.r[8].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 342u)));  if (t) { goto L_0017AFA8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[4], c.r[4].w[0] - 21776u);
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[4].w[0])));
    c.budget -= 7;
    if (c.r[17].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0017AFAC; }
    c.r[6].d[0] = c.r[5].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[17], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[8].d[0] & 63ull;
    c.r[9].d[0] = c.r[5].d[0] << (c.r[4].w[0] & 63u);
    set32(c.r[4], 0u - 1u);
    c.budget -= 10;
    { const bool t = c.r[8].d[0] == c.r[4].d[0];  if (t) { goto L_0017AFA8; } }
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[4], c.r[6].w[0] + c.r[29].w[0]);
    set32(c.r[10], c.r[4].w[0] + 48u);
    c.r[7].d[0] = ld64((c.r[10].w[0]));
    c.r[4].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0017AFA8; } }
    c.r[1].d[0] = c.r[8].sd[0] < 32ll ? 1ull : 0ull;
    c.r[4].d[0] = c.r[7].d[0] | c.r[9].d[0];
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; st64((c.r[10].w[0]), c.r[4].d[0]);  if (t) { goto L_0017AF70; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 369u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017AF3C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00180000u);
    set32(c.r[4], c.r[2].w[0] - 21040u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], c.r[2].w[0] + 20448u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AF28u); set32(c.r[6], c.r[2].w[0] + c.r[6].w[0]);  if (depth < kMaxDepth) unit_0093(c, 253u, depth + 1u); else { c.pc = 0x0034F7F0u; return; } if (c.pc != 0x0017AF28u) [[unlikely]] return; }
L_0017AF28:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AF34u); set32(c.r[5], c.r[28].w[0] - 26672u);  if (depth < kMaxDepth) unit_0094(c, 37u, depth + 1u); else { c.pc = 0x00350370u; return; } if (c.pc != 0x0017AF34u) [[unlikely]] return; }
L_0017AF34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017AFA8; } }
L_0017AF3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00180000u);
    set32(c.r[4], c.r[2].w[0] - 21040u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], c.r[2].w[0] + 20704u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AF5Cu); set32(c.r[6], c.r[2].w[0] + c.r[6].w[0]);  if (depth < kMaxDepth) unit_0093(c, 253u, depth + 1u); else { c.pc = 0x0034F7F0u; return; } if (c.pc != 0x0017AF5Cu) [[unlikely]] return; }
L_0017AF5C:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AF68u); set32(c.r[5], c.r[28].w[0] - 26672u);  if (depth < kMaxDepth) unit_0094(c, 37u, depth + 1u); else { c.pc = 0x00350370u; return; } if (c.pc != 0x0017AF68u) [[unlikely]] return; }
L_0017AF68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017AFA8; } }
L_0017AF70:
    c.r[1].d[0] = c.r[8].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0017AFA8; } }
    set32(c.r[2], c.r[8].w[0] - 32u);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00180000u);
    set32(c.r[4], c.r[2].w[0] - 21040u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], c.r[2].w[0] + 21056u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AF9Cu); set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0093(c, 253u, depth + 1u); else { c.pc = 0x0034F7F0u; return; } if (c.pc != 0x0017AF9Cu) [[unlikely]] return; }
L_0017AF9C:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017AFA8u); set32(c.r[5], c.r[28].w[0] - 26672u);  if (depth < kMaxDepth) unit_0094(c, 37u, depth + 1u); else { c.pc = 0x00350370u; return; } if (c.pc != 0x0017AFA8u) [[unlikely]] return; }
L_0017AFA8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0017AFAC:
    c.r[3].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017AE74u | kUnwind; return; } goto L_0017AE74; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0017AFD0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[5], c.r[3].w[0] - 7440u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
L_0017AFDC:
    set32(c.r[4], c.r[4].w[0] + 2u);
    st32((c.r[5].w[0]), 0u);
    st32((c.r[5].w[0] + 4u), 0u);
    c.r[3].d[0] = c.r[4].sd[0] < 12ll ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 8u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017AFDCu | kUnwind; return; } goto L_0017AFDC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01750000u);
    c.r[3].d[0] = c.r[3].d[0] | 10240ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st32((c.r[1].w[0] - 7440u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C10000u);
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].d[0] = c.r[3].d[0] | 14336ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st32((c.r[1].w[0] - 7420u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01820000u);
    c.r[3].d[0] = c.r[3].d[0] | 10240ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st32((c.r[1].w[0] - 7400u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 256u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[3], c.r[3].w[0] - 21328u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x018A0000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 22;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[1].w[0] + 10244u), c.r[3].w[0]);  if (t) { goto L_0017B060; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01920000u);
    c.r[3].d[0] = c.r[3].d[0] | 27712ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st32((c.r[1].w[0] - 7396u), c.r[3].w[0]);
    c.budget -= 4;
L_0017B060:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017B070:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[10], c.r[3].w[0] - 7440u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[9], c.r[3].w[0] - 18832u);
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], c.r[3].w[0] - 15376u);
    c.budget -= 8;
L_0017B090:
    set32(c.r[7], ld32((c.r[9].w[0])));
    set32(c.r[3], ld32((c.r[10].w[0])));
    set32(c.r[6], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 7);
    set32(c.r[7], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 5);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);  if (t) { goto L_0017B0C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[6].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_0017B0D8; } }
L_0017B0C4:
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[10].w[0])));
    st32((c.r[6].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[10].w[0] + 20u)));
    st32((c.r[6].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 5;
L_0017B0D8:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].sd[0] < 5ll ? 1ull : 0ull;
    set32(c.r[9], c.r[9].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[10], c.r[10].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017B090u | kUnwind; return; } goto L_0017B090; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017B100:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B110u);  if (depth < kMaxDepth) unit_001E(c, 169u, depth + 1u); else { c.pc = 0x0017B430u; return; } if (c.pc != 0x0017B110u) [[unlikely]] return; }
L_0017B110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B118u);  if (depth < kMaxDepth) unit_001E(c, 147u, depth + 1u); else { c.pc = 0x0017AFD0u; return; } if (c.pc != 0x0017B118u) [[unlikely]] return; }
L_0017B118:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[3], c.r[2].w[0] - 21376u);
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[5], c.r[2].w[0] - 7440u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 256u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B140u); c.r[4].d[0] = ld16((c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 42u, depth + 1u); else { c.pc = 0x003503F0u; return; } if (c.pc != 0x0017B140u) [[unlikely]] return; }
L_0017B140:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00180000u);
    set32(c.r[4], c.r[2].w[0] - 20368u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B150u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 253u, depth + 1u); else { c.pc = 0x0034F7F0u; return; } if (c.pc != 0x0017B150u) [[unlikely]] return; }
L_0017B150:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0017B160:
    set32(c.r[29], c.r[29].w[0] - 3632u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B178u); set32(c.r[16], c.r[2].w[0] - 15376u);  if (depth < kMaxDepth) unit_001E(c, 169u, depth + 1u); else { c.pc = 0x0017B430u; return; } if (c.pc != 0x0017B178u) [[unlikely]] return; }
L_0017B178:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 15376u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0017B1F4; } }
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[5].d[0] = c.r[2].d[0] | 20144ull;
    c.budget -= 4;
L_0017B198:
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] + 2u);
    set32(c.r[4], c.r[4].w[0] + 8u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(60ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[1].w[0] + 20148u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017B198u | kUnwind; return; } goto L_0017B198; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 20144ull;
    set32(c.r[4], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[8], ld32((c.r[16].w[0] + 4u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 4752ull;
    set32(c.r[6], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[9], ld32((c.r[16].w[0] + 8u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 4784ull;
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[7], c.r[16].w[0] + c.r[1].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B1F4u); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_000D(c, 201u, depth + 1u); else { c.pc = 0x00136DA0u; return; } if (c.pc != 0x0017B1F4u) [[unlikely]] return; }
L_0017B1F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007D0000u);
    set32(c.r[7], c.r[3].w[0] + 5008u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0017B274; } }
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[3], c.r[7], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = c.r[2].d[0] | 20144ull;
    c.budget -= 4;
L_0017B218:
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[5], c.r[5].w[0] + 2u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(60ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[1].w[0] + 20148u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017B218u | kUnwind; return; } goto L_0017B218; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 20144ull;
    set32(c.r[4], c.r[7].w[0] + c.r[1].w[0]);
    set32(c.r[8], ld32((c.r[7].w[0] + 4u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 4752ull;
    set32(c.r[6], c.r[7].w[0] + c.r[1].w[0]);
    set32(c.r[9], ld32((c.r[7].w[0] + 8u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 4784ull;
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[10], 0u + 1u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B274u); set32(c.r[7], c.r[7].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_000D(c, 201u, depth + 1u); else { c.pc = 0x00136DA0u; return; } if (c.pc != 0x0017B274u) [[unlikely]] return; }
L_0017B274:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007E0000u);
    set32(c.r[7], c.r[3].w[0] + 25392u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0017B324; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 369u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0017B2AC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 256u)));
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0017B2B4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0017B2AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0017B2B8; } }
L_0017B2B4:
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_0017B2B8:
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[3], c.r[7], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = c.r[2].d[0] | 20144ull;
    c.budget -= 4;
L_0017B2C8:
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[5], c.r[5].w[0] + 2u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(60ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[1].w[0] + 20148u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017B2C8u | kUnwind; return; } goto L_0017B2C8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 20144ull;
    set32(c.r[4], c.r[7].w[0] + c.r[1].w[0]);
    set32(c.r[8], ld32((c.r[7].w[0] + 4u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 4752ull;
    set32(c.r[6], c.r[7].w[0] + c.r[1].w[0]);
    set32(c.r[9], ld32((c.r[7].w[0] + 8u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 4784ull;
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[10], 0u + 1u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B324u); set32(c.r[7], c.r[7].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_000D(c, 201u, depth + 1u); else { c.pc = 0x00136DA0u; return; } if (c.pc != 0x0017B324u) [[unlikely]] return; }
L_0017B324:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00800000u);
    set32(c.r[7], c.r[3].w[0] - 19760u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0017B3A4; } }
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[3], c.r[7], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = c.r[2].d[0] | 20144ull;
    c.budget -= 4;
L_0017B348:
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[3].w[0] + c.r[1].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[5], c.r[5].w[0] + 2u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(60ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[1].w[0] + 20148u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017B348u | kUnwind; return; } goto L_0017B348; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 20144ull;
    set32(c.r[4], c.r[7].w[0] + c.r[1].w[0]);
    set32(c.r[8], ld32((c.r[7].w[0] + 4u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 4752ull;
    set32(c.r[6], c.r[7].w[0] + c.r[1].w[0]);
    set32(c.r[9], ld32((c.r[7].w[0] + 8u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 4784ull;
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[10], 0u + 1u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B3A4u); set32(c.r[7], c.r[7].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_000D(c, 201u, depth + 1u); else { c.pc = 0x00136DA0u; return; } if (c.pc != 0x0017B3A4u) [[unlikely]] return; }
L_0017B3A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00810000u);
    set32(c.r[16], c.r[3].w[0] + 624u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0017B3FC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 20144ull;
    set32(c.r[4], c.r[16].w[0] + c.r[1].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));
    c.r[1].d[0] = c.r[1].d[0] | 4752ull;
    set32(c.r[6], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[8], ld32((c.r[16].w[0] + 4u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 4784ull;
    set32(c.r[9], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[7], c.r[16].w[0] + c.r[1].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B3F4u); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_000D(c, 201u, depth + 1u); else { c.pc = 0x00136DA0u; return; } if (c.pc != 0x0017B3F4u) [[unlikely]] return; }
L_0017B3F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B3FCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_001E(c, 171u, depth + 1u); else { c.pc = 0x0017B4B0u; return; } if (c.pc != 0x0017B3FCu) [[unlikely]] return; }
L_0017B3FC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 7400u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0017B414; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B414u);  if (depth < kMaxDepth) unit_0045(c, 188u, depth + 1u); else { c.pc = 0x00217450u; return; } if (c.pc != 0x0017B414u) [[unlikely]] return; }
L_0017B414:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 3632u);  c.pc = t; return; }
L_0017B430:
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], c.r[3].w[0] - 16328u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[7], c.r[3].w[0] - 15648u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 256u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    set32(c.r[3], c.r[5].w[0] << 5);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), 0u);
    st32((c.r[1].w[0] - 15380u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    st32((c.r[1].w[0] - 15384u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    st32((c.r[1].w[0] - 15388u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    st32((c.r[1].w[0] - 15392u), 0u);
    st32((c.r[28].w[0] - 26232u), 0u);
    st32((c.r[28].w[0] - 26236u), 0u);
    st32((c.r[28].w[0] - 26240u), 0u);
    c.budget -= 21;
L_0017B484:
    st32((c.r[7].w[0]), 0u);
    set32(c.r[6], c.r[6].w[0] + 2u);
    st32((c.r[7].w[0] + 4u), 0u);
    set32(c.r[7], c.r[7].w[0] + 8u);
    c.r[3].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(64ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017B484u | kUnwind; return; } goto L_0017B484; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[3], c.r[3].w[0] - 16688u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 26244u), c.r[3].w[0]);  c.pc = t; return; }
L_0017B4B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[8], c.r[3].w[0] - 15392u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[6], c.r[3].w[0] - 16328u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[5], c.r[3].w[0] - 15648u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 256u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[10], c.r[3].w[0] - 15648u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    mmi::paddub(c.r[9], c.r[0], c.r[0]);
    set32(c.r[3], c.r[7].w[0] << 5);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[8].w[0]);
    set32(c.r[7], 0u + 18u);
    set32(c.r[6], 0u + 2u);
    mmi::paddub(c.r[11], c.r[4], c.r[0]);
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 15380u), c.r[5].w[0]);  if (t) { goto L_0017B558; } }
L_0017B500:
    set32(c.r[3], ld32((c.r[28].w[0] - 26244u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 4784ull;
    set32(c.r[5], c.r[11].w[0] + c.r[1].w[0]);
    set32(c.r[11], c.r[11].w[0] + 240u);
    st32((c.r[10].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26244u)));
    set32(c.r[10], c.r[10].w[0] + 4u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26244u)));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26244u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26244u)));
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26244u)));
    st32((c.r[3].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26244u)));
    set32(c.r[3], c.r[3].w[0] + 16u);
    st32((c.r[28].w[0] - 26244u), c.r[3].w[0]);
    c.budget -= 22;
L_0017B558:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[4].w[0] + c.r[1].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 4752u)));
    c.r[3].d[0] = c.r[9].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017B500u | kUnwind; return; } goto L_0017B500; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017B580:
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 17600u)));
    set32(c.r[5], c.r[4].w[0] << 5);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[4], c.r[4].w[0] - 27408u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[28].w[0] - 26648u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 17596u)));
    st32((c.r[28].w[0] - 26644u), c.r[3].w[0]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  c.pc = t; return; }
L_0017B5D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x016A0000u);
    c.r[3].d[0] = c.r[3].d[0] | 63488ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st32((c.r[1].w[0] - 17600u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01710000u);
    c.r[3].d[0] = c.r[3].d[0] | 22528ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] - 17596u), c.r[3].w[0]);  c.pc = t; return; }
L_0017B600:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0017B630; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[28].w[0] - 26568u)));  if (t) { goto L_0017B648; } }
L_0017B630:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 3888u);
    c.budget -= 3;
L_0017B63C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 256u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 3;
L_0017B648:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[18], c.r[2].w[0] - 27408u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00180000u);
    set32(c.r[4], c.r[2].w[0] - 2816u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B660u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 253u, depth + 1u); else { c.pc = 0x0034F7F0u; return; } if (c.pc != 0x0017B660u) [[unlikely]] return; }
L_0017B660:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00180000u);
    set32(c.r[4], c.r[2].w[0] - 18992u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B670u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 253u, depth + 1u); else { c.pc = 0x0034F7F0u; return; } if (c.pc != 0x0017B670u) [[unlikely]] return; }
L_0017B670:
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 1;
L_0017B674:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0017B6D0; } }
    set32(c.r[5], 0u + 1u);
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[18].w[0] + 2u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00180000u);
    set32(c.r[4], c.r[2].w[0] - 19072u);
    mmi::paddub(c.r[6], c.r[17], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B6A8u); st16((c.r[18].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0093(c, 253u, depth + 1u); else { c.pc = 0x0034F7F0u; return; } if (c.pc != 0x0017B6A8u) [[unlikely]] return; }
L_0017B6A8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 21872u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B6C8u); set32(c.r[5], c.r[28].w[0] - 26648u);  if (depth < kMaxDepth) unit_0094(c, 42u, depth + 1u); else { c.pc = 0x003503F0u; return; } if (c.pc != 0x0017B6C8u) [[unlikely]] return; }
L_0017B6C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_0017B6DC; } }
L_0017B6D0:
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 3;
L_0017B6DC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 2400u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017B674u | kUnwind; return; } goto L_0017B674; } }
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0017B710:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], c.r[3].w[0] - 14640u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[6], c.r[3].w[0] - 14096u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 9;
L_0017B734:
    st32((c.r[5].w[0] + 8u), 0u);
    set32(c.r[5], c.r[5].w[0] + 32u);
    st32((c.r[6].w[0] + 8u), 0u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    set32(c.r[6], c.r[6].w[0] + 32u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017B734u | kUnwind; return; } goto L_0017B734; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[16], c.r[3].w[0] - 27408u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 3;
L_0017B75C:
    c.r[3].d[0] = ld16((c.r[16].w[0]));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0017B834; }
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B778u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 232u, depth + 1u); else { c.pc = 0x00137330u; return; } if (c.pc != 0x0017B778u) [[unlikely]] return; }
L_0017B778:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], c.r[3].w[0] - 14640u);
    c.r[5].d[0] = ld16((c.r[16].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[6], c.r[3].w[0] - 14640u);
    set32(c.r[10], c.r[16].w[0] + 2224u);
    set32(c.r[3], c.r[5].w[0] << 5);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[10].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[3].w[0] - 14096u);
    c.r[7].d[0] = ld16((c.r[16].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], c.r[3].w[0] - 14096u);
    mmi::paddub(c.r[8], c.r[16], c.r[0]);
    mmi::paddub(c.r[9], c.r[16], c.r[0]);
    set32(c.r[3], c.r[7].w[0] << 5);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st16((c.r[3].w[0] + 14u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.r[6].d[0] = ld16((c.r[16].w[0] + 4u));
    set32(c.r[3], c.r[16].w[0] + 2228u);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    set32(c.r[6], c.r[6].w[0] << 5);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[5].w[0] + 8u), c.r[10].w[0]);
    c.r[5].d[0] = ld16((c.r[16].w[0] + 4u));
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    set32(c.r[5], c.r[5].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st16((c.r[4].w[0] + 14u), static_cast<std::uint16_t>(c.r[17].w[0]));
    st32((c.r[16].w[0] + 2224u), c.r[3].w[0]);
    set32(c.r[4], 0u + 16u);
    c.budget -= 33;
L_0017B7FC:
    set32(c.r[3], c.r[8].w[0] + 2260u);
    st32((c.r[9].w[0] + 2228u), c.r[3].w[0]);
    st8((c.r[8].w[0] + 2260u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[8].w[0] + 2261u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[8].w[0] + 2264u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[3], c.r[6].w[0] + 16u);
    st32((c.r[8].w[0] + 2268u), c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[8], c.r[8].w[0] + 16u);
    set32(c.r[9], c.r[9].w[0] + 4u);
    c.r[3].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 240u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017B7FCu | kUnwind; return; } goto L_0017B7FC; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0017B834:
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 2400u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017B75Cu | kUnwind; return; } goto L_0017B75C; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0017B860:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BA0000u);
    c.r[16].d[0] = c.r[3].d[0] | 32768ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00BB0000u);
    c.r[17].d[0] = c.r[3].d[0] | 59392ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[18], c.r[3].w[0] - 21168u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[3].w[0] + 13888u);  if (t) { goto L_0017B910; } }
L_0017B8A0:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0017B900; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    st32((c.r[19].w[0] + 12u), c.r[18].w[0]);
    st32((c.r[19].w[0] + 8u), c.r[17].w[0]);
    c.r[4].d[0] = ld16((c.r[18].w[0] + 4u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B8C8u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 71u, depth + 1u); else { c.pc = 0x00135140u; return; } if (c.pc != 0x0017B8C8u) [[unlikely]] return; }
L_0017B8C8:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[20], c.r[2], c.r[0]);  if (t) { goto L_0017B8F8; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[19].w[0]), c.r[2].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[16].w[0]);
    c.r[4].d[0] = ld16((c.r[18].w[0] + 2u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017B8F0u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 71u, depth + 1u); else { c.pc = 0x00135140u; return; } if (c.pc != 0x0017B8F0u) [[unlikely]] return; }
L_0017B8F0:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_0017B8F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + c.r[20].w[0]);  if (t) { goto L_0017B908; } }
L_0017B900:
    st32((c.r[19].w[0]), 0u);
    c.budget -= 2;
L_0017B908:
    set32(c.r[19], c.r[19].w[0] + 4848u);
    set32(c.r[18], c.r[18].w[0] + 16u);
    c.budget -= 2;
L_0017B910:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017B8A0u | kUnwind; return; } goto L_0017B8A0; } }
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0017B940:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] + 13864u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[1].w[0] - 11336u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[3].w[0] + 13472u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] + 13864u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[3].w[0] + 12784u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] + 13868u), c.r[3].w[0]);
    set32(c.r[3], c.r[28].w[0] - 26256u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] + 13872u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[3].w[0] + 13472u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 22;
L_0017B998:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[5], c.r[5].w[0] + 2u);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[4], c.r[4].w[0] + 8u);
    c.r[3].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(95ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017B998u | kUnwind; return; } goto L_0017B998; } }
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(97ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0017B9F0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[3].w[0] + 13472u);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_0017B9D0:
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[3].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(97ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017B9D0u | kUnwind; return; } goto L_0017B9D0; } }
    c.budget -= 1;
L_0017B9F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[3].w[0] + 12784u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 3;
L_0017B9FC:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[5], c.r[5].w[0] + 2u);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[4], c.r[4].w[0] + 8u);
    c.r[3].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(172ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017B9FCu | kUnwind; return; } goto L_0017B9FC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[3].w[0] + 8448u);
    st32((c.r[28].w[0] - 26264u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[28].w[0] - 26256u), 0u);
    set32(c.r[16], c.r[3].w[0] + 13888u);
    st32((c.r[28].w[0] - 26252u), 0u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 8;
L_0017BA38:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0017BB94; }
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
L_0017BA50:
    st32((c.r[4].w[0] + 4816u), 0u);
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[4].w[0] + 4820u), 0u);
    set32(c.r[4], c.r[4].w[0] + 8u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017BA50u | kUnwind; return; } goto L_0017BA50; } }
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0017BAA0; } }
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_0017BA80:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4816u), 0u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017BA80u | kUnwind; return; } goto L_0017BA80; } }
    c.budget -= 1;
L_0017BAA0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017BB80; } }
    set32(c.r[8], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[9], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[4], c.r[16].w[0] + 4816u);
    set32(c.r[7], c.r[16].w[0] + 16u);
    set32(c.r[10], 0u + 1u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BAD0u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 201u, depth + 1u); else { c.pc = 0x00136DA0u; return; } if (c.pc != 0x0017BAD0u) [[unlikely]] return; }
L_0017BAD0:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[6].d[0] = ld8((c.r[3].w[0] + 13u));
    c.r[7].d[0] = ld8((c.r[3].w[0] + 12u));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[4], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_0017BB90; } }
    set32(c.r[5], c.r[7].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] - c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[16].w[0] + c.r[5].w[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[12], c.r[8].w[0] + 13864u);
    set32(c.r[10], 0u + 1u);
    c.budget -= 8;
L_0017BB04:
    c.r[11].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[8].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[9], c.r[5].w[0] + 16u);
    set32(c.r[13], ld32((c.r[28].w[0] - 26264u)));
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[11], c.r[12].w[0] + c.r[11].w[0]);
    set32(c.r[11], ld32((c.r[11].w[0])));
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 240u);
    set32(c.r[4], c.r[4].w[0] + 2u);
    set32(c.r[8], c.r[11].w[0] + c.r[8].w[0]);
    st32((c.r[8].w[0]), c.r[13].w[0]);
    c.r[11].d[0] = ld8((c.r[3].w[0] + 14u));
    set32(c.r[8], ld32((c.r[28].w[0] - 26264u)));
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[8], ld32((c.r[28].w[0] - 26264u)));
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[8], ld32((c.r[28].w[0] - 26264u)));
    st8((c.r[8].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[8], ld32((c.r[28].w[0] - 26264u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[8].w[0] + 5u), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[8], ld32((c.r[28].w[0] - 26264u)));
    st32((c.r[8].w[0] + 8u), c.r[9].w[0]);
    set32(c.r[8], ld32((c.r[28].w[0] - 26264u)));
    set32(c.r[8], c.r[8].w[0] + 16u);
    c.budget -= 29;
    { const bool t = c.r[6].d[0] != 0ull; st32((c.r[28].w[0] - 26264u), c.r[8].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017BB04u | kUnwind; return; } goto L_0017BB04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017BB90; } }
L_0017BB80:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], c.r[16].w[0] + 4816u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BB90u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 270u, depth + 1u); else { c.pc = 0x00137C90u; return; } if (c.pc != 0x0017BB90u) [[unlikely]] return; }
L_0017BB90:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0017BB94:
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4848u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017BA38u | kUnwind; return; } goto L_0017BA38; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0017BBC0:
    set32(c.r[3], 0u + 4848u);
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[5], c.r[4].w[0] >> 16);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[3].w[0] + 18704u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0])));  c.pc = t; return; }
L_0017BBF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00E70000u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].d[0] = c.r[2].d[0] | 14336ull;
    st32((c.r[28].w[0] - 26640u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F10000u);
    c.r[2].d[0] = c.r[2].d[0] | 47104ull;
    set32(c.r[5], c.r[28].w[0] - 26640u);
    st32((c.r[28].w[0] - 26636u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BC1Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 79u, depth + 1u); else { c.pc = 0x001351E0u; return; } if (c.pc != 0x0017BC1Cu) [[unlikely]] return; }
L_0017BC1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BC24u);  if (depth < kMaxDepth) unit_002D(c, 40u, depth + 1u); else { c.pc = 0x001B4B00u; return; } if (c.pc != 0x0017BC24u) [[unlikely]] return; }
L_0017BC24:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0017BC30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x019B0000u);
    c.r[2].d[0] = c.r[2].d[0] | 43008ull;
    st32((c.r[28].w[0] - 26656u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01A00000u);
    c.r[2].d[0] = c.r[2].d[0] | 10240ull;
    st32((c.r[28].w[0] - 26652u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 1536u);  if (t) { goto L_0017BC60; } }
    set32(c.r[4], 0u + 1537u);
    c.budget -= 1;
L_0017BC60:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 95u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[4].d[0] << 48;  goto L_0017BC78; }
    set32(c.r[4], 0u + 1538u);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.budget -= 2;
L_0017BC78:
    set32(c.r[5], c.r[28].w[0] - 26656u);
    c.budget -= 3;
    { c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  [[clang::musttail]] return unit_0094(c, 42u, depth); }
L_0017BC90:
    set32(c.r[4], ld32((c.r[28].w[0] - 26656u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[5], c.r[2].w[0] - 16720u);
    c.budget -= 5;
    { mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00137C90u | kUnwind; return; } [[clang::musttail]] return unit_000D(c, 270u, depth); }
L_0017BCB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[5], c.r[3].w[0] - 16736u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
L_0017BCBC:
    st32((c.r[5].w[0] + 16u), 0u);
    set32(c.r[4], c.r[4].w[0] + 2u);
    st32((c.r[5].w[0] + 20u), 0u);
    set32(c.r[5], c.r[5].w[0] + 8u);
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017BCBCu | kUnwind; return; } goto L_0017BCBC; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0017BCE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[5], c.r[3].w[0] - 19376u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 9;
L_0017BD04:
    st32((c.r[5].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] + 2u);
    st32((c.r[5].w[0] + 4u), 0u);
    set32(c.r[5], c.r[5].w[0] + 8u);
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(80ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017BD04u | kUnwind; return; } goto L_0017BD04; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01A30000u);
    set32(c.r[17], 0u + 4u);
    c.r[16].d[0] = c.r[3].d[0] | 18432ull;
    c.budget -= 3;
L_0017BD2C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_0017BD74; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 19376u);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 21072u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BD68u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 71u, depth + 1u); else { c.pc = 0x00135140u; return; } if (c.pc != 0x0017BD68u) [[unlikely]] return; }
L_0017BD68:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 3;
L_0017BD74:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017BD2Cu | kUnwind; return; } goto L_0017BD2C; } }
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0017BDA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[18], c.r[3].w[0] - 19376u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[19], c.r[3].w[0] - 7968u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_0017BE00; } }
L_0017BDD4:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 4u);  goto L_0017BDFC; }
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BDECu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 17u, depth + 1u); else { c.pc = 0x001383D0u; return; } if (c.pc != 0x0017BDECu) [[unlikely]] return; }
L_0017BDEC:
    st32((c.r[18].w[0]), c.r[19].w[0]);
    set32(c.r[19], c.r[19].w[0] + 64u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 4;
L_0017BDFC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0017BE00:
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(80ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0017BE18; } }
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017BDD4u | kUnwind; return; } goto L_0017BDD4; } }
L_0017BE18:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0017BE40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull; mmi::paddub(c.r[17], c.r[5], c.r[0]);  if (t) { goto L_0017BE98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01580000u);
    set32(c.r[4], 0u + 642u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BE6Cu); c.r[5].d[0] = c.r[2].d[0] | 59392ull;  if (depth < kMaxDepth) unit_0094(c, 27u, depth + 1u); else { c.pc = 0x00350270u; return; } if (c.pc != 0x0017BE6Cu) [[unlikely]] return; }
L_0017BE6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00130000u);
    set32(c.r[4], c.r[2].w[0] + 31584u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01580000u);
    c.r[6].d[0] = c.r[2].d[0] | 59392ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], c.r[2].w[0] + 30832u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BE90u); set32(c.r[8], c.r[28].w[0] - 26680u);  if (depth < kMaxDepth) unit_0093(c, 253u, depth + 1u); else { c.pc = 0x0034F7F0u; return; } if (c.pc != 0x0017BE90u) [[unlikely]] return; }
L_0017BE90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_0017BFD0; } }
L_0017BE98:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0017BEF0; } }
    set32(c.r[2], c.r[28].w[0] - 31120u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x015D0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BEC0u); c.r[5].d[0] = c.r[2].d[0] | 2048ull;  if (depth < kMaxDepth) unit_0094(c, 27u, depth + 1u); else { c.pc = 0x00350270u; return; } if (c.pc != 0x0017BEC0u) [[unlikely]] return; }
L_0017BEC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00130000u);
    set32(c.r[4], c.r[2].w[0] + 31584u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x015D0000u);
    c.r[6].d[0] = c.r[2].d[0] | 2048ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], c.r[2].w[0] + 30844u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BEE4u); set32(c.r[8], c.r[28].w[0] - 26680u);  if (depth < kMaxDepth) unit_0093(c, 256u, depth + 1u); else { c.pc = 0x0034F8A0u; return; } if (c.pc != 0x0017BEE4u) [[unlikely]] return; }
L_0017BEE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0017BFCC; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_0017BEF0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0017BFCC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 30560u)));
    set32(c.r[2], c.r[2].w[0] + 30432u);
    set32(c.r[4], c.r[17].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[16], c.r[2].w[0] + 512u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st32((c.r[1].w[0] + 30560u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 18800u);
    set32(c.r[3], c.r[17].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 18796u);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BF4Cu); set32(c.r[5], ld32((c.r[18].w[0])));  if (depth < kMaxDepth) unit_0094(c, 27u, depth + 1u); else { c.pc = 0x00350270u; return; } if (c.pc != 0x0017BF4Cu) [[unlikely]] return; }
L_0017BF4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00130000u);
    set32(c.r[4], c.r[2].w[0] + 28064u);
    set32(c.r[2], c.r[17].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[3], c.r[2].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[2], c.r[2].w[0] + 30432u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[2].w[0] + 896u);
    st64((c.r[29].w[0]), 0ull);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[7], c.r[2].w[0] - 8064u);
    set32(c.r[10], ld32((c.r[18].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[5], 0u + 7u);
    set32(c.r[6], c.r[28].w[0] - 26684u);
    set32(c.r[8], c.r[2].w[0] - 8000u);
    mmi::paddub(c.r[9], c.r[17], c.r[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017BF9Cu); mmi::paddub(c.r[11], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 253u, depth + 1u); else { c.pc = 0x0034F7F0u; return; } if (c.pc != 0x0017BF9Cu) [[unlikely]] return; }
L_0017BF9C:
    set32(c.r[3], 0u + 22u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 8u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 12;
L_0017BFCC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0017BFD0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0017BFF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00F30000u);
    set32(c.r[4], 0u + 643u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    [[clang::musttail]] return unit_001F(c, 1u, depth);
}

}
