#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_002A[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 5, 6, 7,
    8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39,
    40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 87, 0,
    88, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107,
    108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139,
    140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 166, 0, 0, 0, 167, 0, 0, 168, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 171, 0, 172, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 176, 0, 0, 0, 177, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 180, 0, 181, 0, 182,
    0, 0, 0, 0, 183, 0, 184, 0, 185, 0, 186, 0, 187, 0, 188, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    191, 0, 0, 0, 192, 0, 193, 0, 194, 0, 195, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 199, 0, 200, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 0, 0, 0, 0, 0,
    208, 0, 209, 0, 210, 0, 211, 0, 212, 0, 213, 0, 214, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 221,
    0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0,
    0, 0, 227, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 235, 0, 236, 0, 237, 0,
    238, 0, 239, 0, 240, 0, 241, 0, 242, 0, 243, 0, 244, 0, 245, 0, 246, 0, 247, 0, 248, 0, 249, 0, 250, 0, 251, 0, 252, 0, 253, 0,
    254, 0, 255, 0, 256, 0, 257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 259, 0, 0, 260, 0, 0, 261, 0, 0, 262, 0, 0, 0, 263, 0, 0,
    264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0,
    0, 0, 0, 267, 0, 268, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 0, 274, 0, 0, 0,
    0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0,
    0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 288, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 299, 0, 0, 300, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0,
    0, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0,
    0, 0, 309, 0, 0, 310, 0, 311, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 314, 0, 0, 315, 0, 0,
    316, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 322, 0, 323, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 325, 0, 0, 326, 0, 0, 327, 0, 0, 328, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0,
    353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 358, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 359, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 364,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 367, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 369, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 0, 380, 0, 0, 381, 0, 0, 0, 382, 0,
    0, 0, 383, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 394, 0, 395, 0, 396,
    0, 397, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 399, 0, 400, 0, 0, 0, 401, 0, 402, 0, 0, 0, 403, 0, 404, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 406,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0, 411, 0, 0, 0,
    0, 0, 412, 0, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 417, 0, 418, 0, 419, 0, 420, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 430, 0, 431, 0, 432, 0, 433, 0, 434, 0, 435, 0, 436, 0, 437, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0,
    0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 443, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0,
    0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 449, 0, 0,
    0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 455, 0, 0, 0, 0, 456, 0, 457, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_002A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001A8000;
    case 2u: goto L_001A8080;
    case 3u: goto L_001A8090;
    case 4u: goto L_001A80F0;
    case 5u: goto L_001A80F4;
    case 6u: goto L_001A80F8;
    case 7u: goto L_001A80FC;
    case 8u: goto L_001A8100;
    case 9u: goto L_001A8104;
    case 10u: goto L_001A8108;
    case 11u: goto L_001A810C;
    case 12u: goto L_001A8110;
    case 13u: goto L_001A8114;
    case 14u: goto L_001A8118;
    case 15u: goto L_001A811C;
    case 16u: goto L_001A8120;
    case 17u: goto L_001A8124;
    case 18u: goto L_001A8128;
    case 19u: goto L_001A812C;
    case 20u: goto L_001A8130;
    case 21u: goto L_001A8134;
    case 22u: goto L_001A8138;
    case 23u: goto L_001A813C;
    case 24u: goto L_001A8140;
    case 25u: goto L_001A8144;
    case 26u: goto L_001A8148;
    case 27u: goto L_001A814C;
    case 28u: goto L_001A8150;
    case 29u: goto L_001A8154;
    case 30u: goto L_001A8158;
    case 31u: goto L_001A815C;
    case 32u: goto L_001A8160;
    case 33u: goto L_001A8164;
    case 34u: goto L_001A8168;
    case 35u: goto L_001A816C;
    case 36u: goto L_001A8170;
    case 37u: goto L_001A8174;
    case 38u: goto L_001A8178;
    case 39u: goto L_001A817C;
    case 40u: goto L_001A8180;
    case 41u: goto L_001A8184;
    case 42u: goto L_001A8188;
    case 43u: goto L_001A818C;
    case 44u: goto L_001A8190;
    case 45u: goto L_001A8194;
    case 46u: goto L_001A8198;
    case 47u: goto L_001A819C;
    case 48u: goto L_001A81A0;
    case 49u: goto L_001A81A4;
    case 50u: goto L_001A81A8;
    case 51u: goto L_001A81AC;
    case 52u: goto L_001A81B0;
    case 53u: goto L_001A81B4;
    case 54u: goto L_001A81B8;
    case 55u: goto L_001A81BC;
    case 56u: goto L_001A81C0;
    case 57u: goto L_001A81C4;
    case 58u: goto L_001A81C8;
    case 59u: goto L_001A81CC;
    case 60u: goto L_001A81D0;
    case 61u: goto L_001A81D4;
    case 62u: goto L_001A81D8;
    case 63u: goto L_001A81DC;
    case 64u: goto L_001A81E0;
    case 65u: goto L_001A81E4;
    case 66u: goto L_001A81E8;
    case 67u: goto L_001A81EC;
    case 68u: goto L_001A81F0;
    case 69u: goto L_001A8274;
    case 70u: goto L_001A82B8;
    case 71u: goto L_001A82C4;
    case 72u: goto L_001A8300;
    case 73u: goto L_001A8350;
    case 74u: goto L_001A8378;
    case 75u: goto L_001A8410;
    case 76u: goto L_001A8438;
    case 77u: goto L_001A84E0;
    case 78u: goto L_001A8510;
    case 79u: goto L_001A85C0;
    case 80u: goto L_001A85E0;
    case 81u: goto L_001A8644;
    case 82u: goto L_001A865C;
    case 83u: goto L_001A86C0;
    case 84u: goto L_001A86EC;
    case 85u: goto L_001A87E4;
    case 86u: goto L_001A87F0;
    case 87u: goto L_001A87F8;
    case 88u: goto L_001A8800;
    case 89u: goto L_001A8808;
    case 90u: goto L_001A8820;
    case 91u: goto L_001A8830;
    case 92u: goto L_001A8840;
    case 93u: goto L_001A8844;
    case 94u: goto L_001A8848;
    case 95u: goto L_001A884C;
    case 96u: goto L_001A8850;
    case 97u: goto L_001A8854;
    case 98u: goto L_001A8858;
    case 99u: goto L_001A885C;
    case 100u: goto L_001A8860;
    case 101u: goto L_001A8864;
    case 102u: goto L_001A8868;
    case 103u: goto L_001A886C;
    case 104u: goto L_001A8870;
    case 105u: goto L_001A8874;
    case 106u: goto L_001A8878;
    case 107u: goto L_001A887C;
    case 108u: goto L_001A8880;
    case 109u: goto L_001A8884;
    case 110u: goto L_001A8888;
    case 111u: goto L_001A888C;
    case 112u: goto L_001A8890;
    case 113u: goto L_001A8894;
    case 114u: goto L_001A8898;
    case 115u: goto L_001A889C;
    case 116u: goto L_001A88A0;
    case 117u: goto L_001A88A4;
    case 118u: goto L_001A88A8;
    case 119u: goto L_001A88AC;
    case 120u: goto L_001A88B0;
    case 121u: goto L_001A88B4;
    case 122u: goto L_001A88B8;
    case 123u: goto L_001A88BC;
    case 124u: goto L_001A88C0;
    case 125u: goto L_001A88C4;
    case 126u: goto L_001A88C8;
    case 127u: goto L_001A88CC;
    case 128u: goto L_001A88D0;
    case 129u: goto L_001A88D4;
    case 130u: goto L_001A88D8;
    case 131u: goto L_001A88DC;
    case 132u: goto L_001A88E0;
    case 133u: goto L_001A88E4;
    case 134u: goto L_001A88E8;
    case 135u: goto L_001A88EC;
    case 136u: goto L_001A88F0;
    case 137u: goto L_001A88F4;
    case 138u: goto L_001A88F8;
    case 139u: goto L_001A88FC;
    case 140u: goto L_001A8900;
    case 141u: goto L_001A8904;
    case 142u: goto L_001A8908;
    case 143u: goto L_001A890C;
    case 144u: goto L_001A8910;
    case 145u: goto L_001A8914;
    case 146u: goto L_001A8918;
    case 147u: goto L_001A891C;
    case 148u: goto L_001A8920;
    case 149u: goto L_001A8924;
    case 150u: goto L_001A8928;
    case 151u: goto L_001A892C;
    case 152u: goto L_001A8930;
    case 153u: goto L_001A8934;
    case 154u: goto L_001A8938;
    case 155u: goto L_001A893C;
    case 156u: goto L_001A8940;
    case 157u: goto L_001A8968;
    case 158u: goto L_001A8974;
    case 159u: goto L_001A89A0;
    case 160u: goto L_001A89E0;
    case 161u: goto L_001A8A18;
    case 162u: goto L_001A8A30;
    case 163u: goto L_001A8A5C;
    case 164u: goto L_001A8A70;
    case 165u: goto L_001A8AD0;
    case 166u: goto L_001A8AD8;
    case 167u: goto L_001A8AE8;
    case 168u: goto L_001A8AF4;
    case 169u: goto L_001A8B28;
    case 170u: goto L_001A8B44;
    case 171u: goto L_001A8B4C;
    case 172u: goto L_001A8B54;
    case 173u: goto L_001A8B60;
    case 174u: goto L_001A8B70;
    case 175u: goto L_001A8BA4;
    case 176u: goto L_001A8BB0;
    case 177u: goto L_001A8BC0;
    case 178u: goto L_001A8BC8;
    case 179u: goto L_001A8BE4;
    case 180u: goto L_001A8BEC;
    case 181u: goto L_001A8BF4;
    case 182u: goto L_001A8BFC;
    case 183u: goto L_001A8C10;
    case 184u: goto L_001A8C18;
    case 185u: goto L_001A8C20;
    case 186u: goto L_001A8C28;
    case 187u: goto L_001A8C30;
    case 188u: goto L_001A8C38;
    case 189u: goto L_001A8C40;
    case 190u: goto L_001A8C50;
    case 191u: goto L_001A8C80;
    case 192u: goto L_001A8C90;
    case 193u: goto L_001A8C98;
    case 194u: goto L_001A8CA0;
    case 195u: goto L_001A8CA8;
    case 196u: goto L_001A8CB0;
    case 197u: goto L_001A8CCC;
    case 198u: goto L_001A8CD4;
    case 199u: goto L_001A8D10;
    case 200u: goto L_001A8D18;
    case 201u: goto L_001A8D20;
    case 202u: goto L_001A8D48;
    case 203u: goto L_001A8D54;
    case 204u: goto L_001A8D5C;
    case 205u: goto L_001A8D70;
    case 206u: goto L_001A8DDC;
    case 207u: goto L_001A8DE4;
    case 208u: goto L_001A8E00;
    case 209u: goto L_001A8E08;
    case 210u: goto L_001A8E10;
    case 211u: goto L_001A8E18;
    case 212u: goto L_001A8E20;
    case 213u: goto L_001A8E28;
    case 214u: goto L_001A8E30;
    case 215u: goto L_001A8E3C;
    case 216u: goto L_001A8E6C;
    case 217u: goto L_001A8E9C;
    case 218u: goto L_001A8ECC;
    case 219u: goto L_001A8EDC;
    case 220u: goto L_001A8EEC;
    case 221u: goto L_001A8EFC;
    case 222u: goto L_001A8F18;
    case 223u: goto L_001A8F38;
    case 224u: goto L_001A8F54;
    case 225u: goto L_001A8F5C;
    case 226u: goto L_001A8F70;
    case 227u: goto L_001A8F88;
    case 228u: goto L_001A8F90;
    case 229u: goto L_001A8FB0;
    case 230u: goto L_001A8FB8;
    case 231u: goto L_001A8FE0;
    case 232u: goto L_001A8FFC;
    case 233u: goto L_001A90D0;
    case 234u: goto L_001A90E0;
    case 235u: goto L_001A90E8;
    case 236u: goto L_001A90F0;
    case 237u: goto L_001A90F8;
    case 238u: goto L_001A9100;
    case 239u: goto L_001A9108;
    case 240u: goto L_001A9110;
    case 241u: goto L_001A9118;
    case 242u: goto L_001A9120;
    case 243u: goto L_001A9128;
    case 244u: goto L_001A9130;
    case 245u: goto L_001A9138;
    case 246u: goto L_001A9140;
    case 247u: goto L_001A9148;
    case 248u: goto L_001A9150;
    case 249u: goto L_001A9158;
    case 250u: goto L_001A9160;
    case 251u: goto L_001A9168;
    case 252u: goto L_001A9170;
    case 253u: goto L_001A9178;
    case 254u: goto L_001A9180;
    case 255u: goto L_001A9188;
    case 256u: goto L_001A9190;
    case 257u: goto L_001A9198;
    case 258u: goto L_001A91B8;
    case 259u: goto L_001A91C0;
    case 260u: goto L_001A91CC;
    case 261u: goto L_001A91D8;
    case 262u: goto L_001A91E4;
    case 263u: goto L_001A91F4;
    case 264u: goto L_001A9200;
    case 265u: goto L_001A9260;
    case 266u: goto L_001A9270;
    case 267u: goto L_001A928C;
    case 268u: goto L_001A9294;
    case 269u: goto L_001A92A0;
    case 270u: goto L_001A930C;
    case 271u: goto L_001A932C;
    case 272u: goto L_001A9348;
    case 273u: goto L_001A9364;
    case 274u: goto L_001A9370;
    case 275u: goto L_001A9388;
    case 276u: goto L_001A9480;
    case 277u: goto L_001A94C4;
    case 278u: goto L_001A94D0;
    case 279u: goto L_001A94E0;
    case 280u: goto L_001A94F0;
    case 281u: goto L_001A9510;
    case 282u: goto L_001A9530;
    case 283u: goto L_001A9550;
    case 284u: goto L_001A955C;
    case 285u: goto L_001A95C8;
    case 286u: goto L_001A9624;
    case 287u: goto L_001A965C;
    case 288u: goto L_001A9684;
    case 289u: goto L_001A9688;
    case 290u: goto L_001A969C;
    case 291u: goto L_001A96D0;
    case 292u: goto L_001A9720;
    case 293u: goto L_001A9778;
    case 294u: goto L_001A97B8;
    case 295u: goto L_001A9820;
    case 296u: goto L_001A982C;
    case 297u: goto L_001A98A8;
    case 298u: goto L_001A994C;
    case 299u: goto L_001A9994;
    case 300u: goto L_001A99A0;
    case 301u: goto L_001A99A8;
    case 302u: goto L_001A9A0C;
    case 303u: goto L_001A9A7C;
    case 304u: goto L_001A9B70;
    case 305u: goto L_001A9B90;
    case 306u: goto L_001A9BA0;
    case 307u: goto L_001A9C44;
    case 308u: goto L_001A9C78;
    case 309u: goto L_001A9C88;
    case 310u: goto L_001A9C94;
    case 311u: goto L_001A9C9C;
    case 312u: goto L_001A9CA8;
    case 313u: goto L_001A9DDC;
    case 314u: goto L_001A9DE8;
    case 315u: goto L_001A9DF4;
    case 316u: goto L_001A9E00;
    case 317u: goto L_001A9E0C;
    case 318u: goto L_001A9E50;
    case 319u: goto L_001A9EF4;
    case 320u: goto L_001A9F28;
    case 321u: goto L_001A9F38;
    case 322u: goto L_001A9F44;
    case 323u: goto L_001A9F4C;
    case 324u: goto L_001A9F58;
    case 325u: goto L_001AA094;
    case 326u: goto L_001AA0A0;
    case 327u: goto L_001AA0AC;
    case 328u: goto L_001AA0B8;
    case 329u: goto L_001AA0C4;
    case 330u: goto L_001AA100;
    case 331u: goto L_001AA190;
    case 332u: goto L_001AA1A8;
    case 333u: goto L_001AA204;
    case 334u: goto L_001AA21C;
    case 335u: goto L_001AA228;
    case 336u: goto L_001AA290;
    case 337u: goto L_001AA320;
    case 338u: goto L_001AA338;
    case 339u: goto L_001AA394;
    case 340u: goto L_001AA3AC;
    case 341u: goto L_001AA3B8;
    case 342u: goto L_001AA420;
    case 343u: goto L_001AA4E0;
    case 344u: goto L_001AA5B0;
    case 345u: goto L_001AA5FC;
    case 346u: goto L_001AA654;
    case 347u: goto L_001AA6B8;
    case 348u: goto L_001AA724;
    case 349u: goto L_001AA81C;
    case 350u: goto L_001AA844;
    case 351u: goto L_001AA850;
    case 352u: goto L_001AA870;
    case 353u: goto L_001AA880;
    case 354u: goto L_001AA8AC;
    case 355u: goto L_001AA8BC;
    case 356u: goto L_001AA960;
    case 357u: goto L_001AAB6C;
    case 358u: goto L_001AAB78;
    case 359u: goto L_001AAC08;
    case 360u: goto L_001AAC14;
    case 361u: goto L_001AAE28;
    case 362u: goto L_001AAE34;
    case 363u: goto L_001AAEF0;
    case 364u: goto L_001AAEFC;
    case 365u: goto L_001AAFC0;
    case 366u: goto L_001AB044;
    case 367u: goto L_001AB088;
    case 368u: goto L_001AB0A4;
    case 369u: goto L_001AB0C0;
    case 370u: goto L_001AB0CC;
    case 371u: goto L_001AB0F0;
    case 372u: goto L_001AB180;
    case 373u: goto L_001AB21C;
    case 374u: goto L_001AB23C;
    case 375u: goto L_001AB280;
    case 376u: goto L_001AB2D8;
    case 377u: goto L_001AB308;
    case 378u: goto L_001AB338;
    case 379u: goto L_001AB348;
    case 380u: goto L_001AB35C;
    case 381u: goto L_001AB368;
    case 382u: goto L_001AB378;
    case 383u: goto L_001AB388;
    case 384u: goto L_001AB3A0;
    case 385u: goto L_001AB3C8;
    case 386u: goto L_001AB460;
    case 387u: goto L_001AB488;
    case 388u: goto L_001AB540;
    case 389u: goto L_001AB570;
    case 390u: goto L_001AB630;
    case 391u: goto L_001AB650;
    case 392u: goto L_001AB694;
    case 393u: goto L_001AB6E0;
    case 394u: goto L_001AB6EC;
    case 395u: goto L_001AB6F4;
    case 396u: goto L_001AB6FC;
    case 397u: goto L_001AB704;
    case 398u: goto L_001AB720;
    case 399u: goto L_001AB794;
    case 400u: goto L_001AB79C;
    case 401u: goto L_001AB7AC;
    case 402u: goto L_001AB7B4;
    case 403u: goto L_001AB7C4;
    case 404u: goto L_001AB7CC;
    case 405u: goto L_001AB7EC;
    case 406u: goto L_001AB7FC;
    case 407u: goto L_001AB834;
    case 408u: goto L_001AB840;
    case 409u: goto L_001AB850;
    case 410u: goto L_001AB864;
    case 411u: goto L_001AB870;
    case 412u: goto L_001AB888;
    case 413u: goto L_001AB89C;
    case 414u: goto L_001AB8AC;
    case 415u: goto L_001AB8EC;
    case 416u: goto L_001AB9C4;
    case 417u: goto L_001AB9D0;
    case 418u: goto L_001AB9D8;
    case 419u: goto L_001AB9E0;
    case 420u: goto L_001AB9E8;
    case 421u: goto L_001ABA10;
    case 422u: goto L_001ABA20;
    case 423u: goto L_001ABA30;
    case 424u: goto L_001ABAA8;
    case 425u: goto L_001ABAFC;
    case 426u: goto L_001ABB40;
    case 427u: goto L_001ABB80;
    case 428u: goto L_001ABBD0;
    case 429u: goto L_001ABBE0;
    case 430u: goto L_001ABC1C;
    case 431u: goto L_001ABC24;
    case 432u: goto L_001ABC2C;
    case 433u: goto L_001ABC34;
    case 434u: goto L_001ABC3C;
    case 435u: goto L_001ABC44;
    case 436u: goto L_001ABC4C;
    case 437u: goto L_001ABC54;
    case 438u: goto L_001ABC60;
    case 439u: goto L_001ABC88;
    case 440u: goto L_001ABCAC;
    case 441u: goto L_001ABCF0;
    case 442u: goto L_001ABD0C;
    case 443u: goto L_001ABD8C;
    case 444u: goto L_001ABDA0;
    case 445u: goto L_001ABDF0;
    case 446u: goto L_001ABE04;
    case 447u: goto L_001ABE30;
    case 448u: goto L_001ABE60;
    case 449u: goto L_001ABE74;
    case 450u: goto L_001ABE8C;
    case 451u: goto L_001ABEBC;
    case 452u: goto L_001ABED4;
    case 453u: goto L_001ABF00;
    case 454u: goto L_001ABF50;
    case 455u: goto L_001ABF58;
    case 456u: goto L_001ABF6C;
    case 457u: goto L_001ABF74;
    case 458u: goto L_001ABFA0;
    case 459u: goto L_001ABFDC;
    default: bad_entry(c, 0x001A8000u); return;
    }
L_001A8000:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (t) { goto L_001A8014; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] << 1);  if (t) { goto L_001A8020; } }
L_001A8014:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001A80CC; } }
    set32(c.r[2], c.r[3].w[0] << 1);
    c.budget -= 1;
L_001A8020:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 7);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.f[3] = ld32((c.r[18].w[0] + 48u));
    c.f[2] = ld32((c.r[18].w[0] + 52u));
    c.f[1] = ld32((c.r[18].w[0] + 56u));
    c.f[0] = ld32((c.r[18].w[0] + 60u));
    set32(c.r[2], c.r[29].w[0] + 80u);
    set32(c.r[4], c.r[18].w[0] + 16u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8u)));
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8080u); st32((c.r[29].w[0] + 84u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001A8080u) [[unlikely]] return; }
L_001A8080:
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.f[20] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8090u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x001A8090u) [[unlikely]] return; }
L_001A8090:
    c.f[2] = ld32((c.r[17].w[0] + 48u));
    c.f[1] = ld32((c.r[17].w[0] + 112u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A80B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001A80CC; } }
L_001A80B8:
    fpu_div(c, 0u, c.f[20], c.f[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 5;
L_001A80CC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001A80F0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.budget -= 1;
L_001A80F4:
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001A80F8:
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.budget -= 1;
L_001A80FC:
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.budget -= 1;
L_001A8100:
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.budget -= 1;
L_001A8104:
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.budget -= 1;
L_001A8108:
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 1;
L_001A810C:
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 1;
L_001A8110:
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    c.budget -= 1;
L_001A8114:
    set32(c.r[5], c.r[29].w[0] + 204u);
    c.budget -= 1;
L_001A8118:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8120u); set32(c.r[16], c.r[21].w[0] + 320u);  if (depth < kMaxDepth) unit_0029(c, 340u, depth + 1u); else { c.pc = 0x001A7FD0u; return; } if (c.pc != 0x001A8120u) [[unlikely]] return; }
    goto L_001A8120;
L_001A811C:
    set32(c.r[16], c.r[21].w[0] + 320u);
    c.budget -= 1;
L_001A8120:
    set32(c.r[3], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_001A8124:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_001A8128:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.budget -= 1;
L_001A812C:
    st32((c.r[1].w[0] - 20396u), c.r[3].w[0]);
    c.budget -= 1;
L_001A8130:
    set32(c.r[2], c.r[2].w[0] + 29456u);
    c.budget -= 1;
L_001A8134:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_001A8138:
    st32((c.r[1].w[0] - 20388u), c.r[2].w[0]);
    c.budget -= 1;
L_001A813C:
    set32(c.r[2], c.r[28].w[0] - 30416u);
    c.budget -= 1;
L_001A8140:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_001A8144:
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.budget -= 1;
L_001A8148:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.budget -= 1;
L_001A814C:
    set32(c.r[2], c.r[2].w[0] + 29440u);
    c.budget -= 1;
L_001A8150:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_001A8154:
    st32((c.r[1].w[0] - 20384u), c.r[2].w[0]);
    c.budget -= 1;
L_001A8158:
    set32(c.r[2], c.r[29].w[0] + 192u);
    c.budget -= 1;
L_001A815C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_001A8160:
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.budget -= 1;
L_001A8164:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_001A8168:
    st32((c.r[1].w[0] - 20352u), c.r[3].w[0]);
    c.budget -= 1;
L_001A816C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8174u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001E(c, 201u, depth + 1u); else { c.pc = 0x0017BBC0u; return; } if (c.pc != 0x001A8174u) [[unlikely]] return; }
    goto L_001A8174;
L_001A8170:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_001A8174:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_001A8178:
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    c.budget -= 1;
L_001A817C:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_001A8180:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_001A8184:
    st32((c.r[1].w[0] - 20360u), c.r[4].w[0]);
    c.budget -= 1;
L_001A8188:
    set32(c.r[3], 0u + 10u);
    c.budget -= 1;
L_001A818C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_001A8190:
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001A8194:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_001A8198:
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_001A819C:
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 1;
L_001A81A0:
    mmi::paddub(c.r[18], c.r[16], c.r[0]);
    c.budget -= 1;
L_001A81A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[19], c.r[16], c.r[0]);  if (t) { goto L_001A8318; } }
    goto L_001A81AC;
L_001A81A8:
    mmi::paddub(c.r[19], c.r[16], c.r[0]);
    c.budget -= 1;
L_001A81AC:
    set32(c.r[20], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 1;
L_001A81B0:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 78u));
    c.budget -= 1;
L_001A81B4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] + 1u);  if (t) { goto L_001A8304; } }
    goto L_001A81BC;
L_001A81B8:
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001A81BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A81C4u); set32(c.r[4], c.r[21].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001A81C4u) [[unlikely]] return; }
    goto L_001A81C4;
L_001A81C0:
    set32(c.r[4], c.r[21].w[0] + 192u);
    c.budget -= 1;
L_001A81C4:
    c.f[3] = ld32((c.r[21].w[0] + 112u));
    c.budget -= 1;
L_001A81C8:
    c.f[2] = ld32((c.r[18].w[0]));
    c.budget -= 1;
L_001A81CC:
    c.f[1] = ld32((c.r[21].w[0] + 116u));
    c.budget -= 1;
L_001A81D0:
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    c.budget -= 1;
L_001A81D4:
    c.f[14] = 0u;
    c.budget -= 1;
L_001A81D8:
    c.f[12] = fp::mul(c.f[3], c.f[2]);
    c.budget -= 1;
L_001A81DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A81E4u); c.f[13] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x001A81E4u) [[unlikely]] return; }
    goto L_001A81E4;
L_001A81E0:
    c.f[13] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 1;
L_001A81E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A81ECu); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001A81ECu) [[unlikely]] return; }
    goto L_001A81EC;
L_001A81E8:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_001A81EC:
    set32(c.r[2], 0u + 97u);
    c.budget -= 1;
L_001A81F0:
    c.f[2] = ld32((c.r[29].w[0] + 176u));
    st16((c.r[29].w[0] + 192u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 129u);
    c.f[1] = ld32((c.r[29].w[0] + 180u));
    st16((c.r[29].w[0] + 194u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 157u);
    c.f[0] = ld32((c.r[29].w[0] + 184u));
    st32((c.r[29].w[0] + 112u), c.f[2]);
    st16((c.r[29].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 116u), c.f[1]);
    set32(c.r[2], 0u + 189u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 120u), c.f[0]);
    st32((c.r[29].w[0] + 124u), c.r[3].w[0]);
    st16((c.r[29].w[0] + 198u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[20].w[0] + 75u));
    c.r[2].d[0] = c.r[3].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001A8290; } }
    set32(c.r[2], c.r[3].w[0] - 60u);
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8274u);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001A8274u) [[unlikely]] return; }
L_001A8274:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[1].d[0] = c.r[2].sd[0] < 129ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001A8290; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(128ll);  if (t) { goto L_001A8290; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001A8290:
    st8((c.r[28].w[0] - 30414u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[28].w[0] - 30415u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[28].w[0] - 30416u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[19].w[0] + 48u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 204u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A82B8u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001A82B8u) [[unlikely]] return; }
L_001A82B8:
    st8((c.r[28].w[0] - 30413u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A82C4u); set32(c.r[4], ld32((c.r[19].w[0] + 60u)));  if (depth < kMaxDepth) unit_000E(c, 277u, depth + 1u); else { c.pc = 0x0013B2D0u; return; } if (c.pc != 0x001A82C4u) [[unlikely]] return; }
L_001A82C4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20372u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 24u));
    c.f[0] = ld32((c.r[21].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[1].w[0] - 20416u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 28u));
    c.f[0] = ld32((c.r[21].w[0] + 116u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8300u); st32((c.r[1].w[0] - 20412u), c.f[0]);  if (depth < kMaxDepth) unit_001C(c, 51u, depth + 1u); else { c.pc = 0x001712A0u; return; } if (c.pc != 0x001A8300u) [[unlikely]] return; }
L_001A8300:
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001A8304:
    c.r[17].d[0] = c.r[3].d[0] << 56;
    set32(c.r[18], c.r[18].w[0] + 8u);
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 5;
L_001A8318:
    c.r[4].d[0] = c.r[17].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[3].d[0] = c.r[4].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[20], c.r[16].w[0] + c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A81B0u | kUnwind; return; } goto L_001A81B0; } }
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_001A8350:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8378u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x001A8378u) [[unlikely]] return; }
L_001A8378:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A83F4; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[3], 0u + 19u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.f[3] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[2].w[0] + 32u), c.f[3]);
    st32((c.r[2].w[0] + 36u), c.f[2]);
    st32((c.r[2].w[0] + 40u), c.f[1]);
    c.budget -= 16;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[2].w[0] + 44u), c.f[0]);  if (t) { goto L_001A83D0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st32((c.r[2].w[0] + 112u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 116u), c.r[3].w[0]);  if (t) { goto L_001A83DC; } }
L_001A83D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[2].w[0] + 112u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 116u), c.r[3].w[0]);
    c.budget -= 3;
L_001A83DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001B0000u);
    set32(c.r[3], c.r[3].w[0] - 31296u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001B0000u);
    set32(c.r[3], c.r[3].w[0] - 30656u);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 6;
L_001A83F4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001A8410:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8438u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x001A8438u) [[unlikely]] return; }
L_001A8438:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A84CC; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].d[0] = c.r[17].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[7], c.r[3].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[5], 0u + 19u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], 0u + 1u);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    set32(c.r[3], c.r[3].w[0] + 29472u);
    set32(c.r[4], c.r[3].w[0] + c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st32((c.r[2].w[0] + 32u), c.f[3]);
    st32((c.r[2].w[0] + 36u), c.f[2]);
    st32((c.r[2].w[0] + 40u), c.f[1]);
    st32((c.r[2].w[0] + 44u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] + 29476u);
    set32(c.r[5], c.r[3].w[0] + c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001B0000u);
    st32((c.r[2].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    set32(c.r[4], c.r[3].w[0] - 31296u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001B0000u);
    set32(c.r[3], c.r[3].w[0] - 30656u);
    st32((c.r[2].w[0] + 116u), c.f[0]);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 35;
L_001A84CC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001A84E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[6], c.r[0]);
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8510u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x001A8510u) [[unlikely]] return; }
L_001A8510:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A85A8; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].d[0] = c.r[18].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[7], c.r[3].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[5], 0u + 19u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], 0u + 2u);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    set32(c.r[3], c.r[3].w[0] + 29472u);
    set32(c.r[4], c.r[3].w[0] + c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st32((c.r[2].w[0] + 48u), c.f[3]);
    st32((c.r[2].w[0] + 52u), c.f[2]);
    st32((c.r[2].w[0] + 56u), c.f[1]);
    st32((c.r[2].w[0] + 60u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] + 29476u);
    set32(c.r[5], c.r[3].w[0] + c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001B0000u);
    st32((c.r[2].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    set32(c.r[4], c.r[3].w[0] - 31296u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001B0000u);
    set32(c.r[3], c.r[3].w[0] - 30656u);
    st32((c.r[2].w[0] + 116u), c.f[0]);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 28u), c.r[17].w[0]);
    c.budget -= 36;
L_001A85A8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001A85C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[2], c.r[2].w[0] + 29520u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001A8000u < 16384u) { entry = entries_002A[(t - 0x001A8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001A85E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[16], c.r[4].w[0] + 320u);
    set32(c.r[3], 0u + 1u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 333u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 334u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 335u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 336u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 337u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[18], c.r[16], c.r[0]);
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    st8((c.r[4].w[0] + 338u), static_cast<std::uint8_t>(0u));
    c.budget -= 24;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[20], c.r[16], c.r[0]);  if (t) { goto L_001A8688; } }
    set32(c.r[2], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_001A8644:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    st8((c.r[2].w[0] + 12u), static_cast<std::uint8_t>(0u));
    st16((c.r[20].w[0] + 10u), static_cast<std::uint16_t>(c.r[19].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A865Cu); st16((c.r[20].w[0] + 8u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x001A865Cu) [[unlikely]] return; }
L_001A865C:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    set32(c.r[3], c.r[3].w[0] << 12);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[3].d[0] << 56;
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[19], c.r[19].w[0] + 5u);
    set32(c.r[20], c.r[20].w[0] + 2u);
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 11;
L_001A8688:
    c.r[3].d[0] = c.r[17].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    if (c.r[3].sd[0] <= 0) { set32(c.r[2], c.r[16].w[0] + c.r[3].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001A8644u | kUnwind; return; } goto L_001A8644; }
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001A86C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[6], c.r[16].w[0] + 320u);
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[9], c.r[6], c.r[0]);  if (t) { goto L_001A8798; } }
    set32(c.r[11], c.r[6].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_001A86EC:
    c.r[3].d[0] = ld8((c.r[11].w[0] + 13u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[10], c.r[11].w[0] + 13u);  if (t) { goto L_001A8720; } }
    c.r[3].d[0] = ld16((c.r[9].w[0] + 10u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A8720; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[9].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[7].w[0] + 1u);  if (t) { goto L_001A878C; } }
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 2;
L_001A8720:
    c.r[3].d[0] = ld16((c.r[9].w[0] + 8u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[9].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] >= 0; c.r[3].d[0] = c.r[4].d[0] & 1ull;  if (t) { goto L_001A8744; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A8744; } }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 1;
L_001A8744:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A8758; } }
    c.r[3].d[0] = ld8((c.r[11].w[0] + 12u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[11].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001A8758:
    c.r[3].d[0] = ld8((c.r[11].w[0] + 12u));
    c.r[1].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001A8770; } }
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001A8770:
    c.r[3].d[0] = ld8((c.r[10].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A8788; } }
    set32(c.r[3], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[3].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 3;
L_001A8788:
    set32(c.r[3], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_001A878C:
    c.r[7].d[0] = c.r[3].d[0] << 56;
    set32(c.r[9], c.r[9].w[0] + 2u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 3;
L_001A8798:
    c.r[3].d[0] = c.r[7].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[11], c.r[6].w[0] + c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A86ECu | kUnwind; return; } goto L_001A86EC; } }
    c.r[4].d[0] = c.r[8].d[0] << 56;
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001A87CC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A8810; } }
L_001A87CC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001A87F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A87E4u); set32(c.r[4], ld32((c.r[16].w[0] + 28u)));  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001A87E4u) [[unlikely]] return; }
L_001A87E4:
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A87F0u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x001A87F0u) [[unlikely]] return; }
L_001A87F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A87F8u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001A87F8u) [[unlikely]] return; }
L_001A87F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8800u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x001A8800u) [[unlikely]] return; }
L_001A8800:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8808u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001A8808u) [[unlikely]] return; }
L_001A8808:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001A8810:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A8820:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001A8830:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_001A8840:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.budget -= 1;
L_001A8844:
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001A8848:
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.budget -= 1;
L_001A884C:
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.budget -= 1;
L_001A8850:
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 1;
L_001A8854:
    set32(c.r[2], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_001A8858:
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 1;
L_001A885C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_001A8860:
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.budget -= 1;
L_001A8864:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.budget -= 1;
L_001A8868:
    set32(c.r[2], c.r[2].w[0] + 29680u);
    c.budget -= 1;
L_001A886C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_001A8870:
    st32((c.r[1].w[0] - 20388u), c.r[2].w[0]);
    c.budget -= 1;
L_001A8874:
    set32(c.r[2], c.r[28].w[0] - 30412u);
    c.budget -= 1;
L_001A8878:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_001A887C:
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.budget -= 1;
L_001A8880:
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    c.budget -= 1;
L_001A8884:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.budget -= 1;
L_001A8888:
    set32(c.r[2], c.r[2].w[0] + 29664u);
    c.budget -= 1;
L_001A888C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_001A8890:
    st32((c.r[1].w[0] - 20384u), c.r[2].w[0]);
    c.budget -= 1;
L_001A8894:
    set32(c.r[2], c.r[29].w[0] + 104u);
    c.budget -= 1;
L_001A8898:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_001A889C:
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.budget -= 1;
L_001A88A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_001A88A4:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_001A88A8:
    set32(c.r[16], c.r[19].w[0] + 320u);
    c.budget -= 1;
L_001A88AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A88B4u); st32((c.r[1].w[0] - 20352u), 0u);  if (depth < kMaxDepth) unit_001E(c, 201u, depth + 1u); else { c.pc = 0x0017BBC0u; return; } if (c.pc != 0x001A88B4u) [[unlikely]] return; }
    goto L_001A88B4;
L_001A88B0:
    st32((c.r[1].w[0] - 20352u), 0u);
    c.budget -= 1;
L_001A88B4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_001A88B8:
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    c.budget -= 1;
L_001A88BC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001A88C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_001A88C4:
    st32((c.r[1].w[0] - 20360u), c.r[3].w[0]);
    c.budget -= 1;
L_001A88C8:
    set32(c.r[3], 0u + 10u);
    c.budget -= 1;
L_001A88CC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_001A88D0:
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001A88D4:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_001A88D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_001A88DC:
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001A88E0:
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 1;
L_001A88E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[18], c.r[16], c.r[0]);  if (t) { goto L_001A89B0; } }
    goto L_001A88EC;
L_001A88E8:
    mmi::paddub(c.r[18], c.r[16], c.r[0]);
    c.budget -= 1;
L_001A88EC:
    set32(c.r[5], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_001A88F0:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 13u));
    c.budget -= 1;
L_001A88F4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] + 1u);  if (t) { goto L_001A89A4; } }
    goto L_001A88FC;
L_001A88F8:
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001A88FC:
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    c.budget -= 1;
L_001A8900:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.budget -= 1;
L_001A8904:
    set32(c.r[3], c.r[2].w[0] + 29536u);
    c.budget -= 1;
L_001A8908:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.budget -= 1;
L_001A890C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_001A8910:
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.budget -= 1;
L_001A8914:
    c.f[0] = ld32((c.r[19].w[0] + 36u));
    c.budget -= 1;
L_001A8918:
    c.f[1] = c.r[2].w[0];
    c.budget -= 1;
L_001A891C:
    c.budget -= 1;
L_001A8920:
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.budget -= 1;
L_001A8924:
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    c.budget -= 1;
L_001A8928:
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.budget -= 1;
L_001A892C:
    st32((c.r[29].w[0] + 92u), c.r[4].w[0]);
    c.budget -= 1;
L_001A8930:
    c.r[2].d[0] = ld8((c.r[5].w[0] + 12u));
    c.budget -= 1;
L_001A8934:
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 1;
L_001A8938:
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_001A893C:
    c.r[2].d[0] = ld16((c.r[3].w[0]));
    c.budget -= 1;
L_001A8940:
    st16((c.r[29].w[0] + 104u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 2u));
    st16((c.r[29].w[0] + 106u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 4u));
    st16((c.r[29].w[0] + 108u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 6u));
    st16((c.r[29].w[0] + 110u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[18].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8968u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001A8968u) [[unlikely]] return; }
L_001A8968:
    st8((c.r[28].w[0] - 30409u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8974u); set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  if (depth < kMaxDepth) unit_000E(c, 277u, depth + 1u); else { c.pc = 0x0013B2D0u; return; } if (c.pc != 0x001A8974u) [[unlikely]] return; }
L_001A8974:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20372u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 112u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    st32((c.r[1].w[0] - 20416u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 116u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A89A0u); st32((c.r[1].w[0] - 20412u), c.f[0]);  if (depth < kMaxDepth) unit_001C(c, 51u, depth + 1u); else { c.pc = 0x001712A0u; return; } if (c.pc != 0x001A89A0u) [[unlikely]] return; }
L_001A89A0:
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001A89A4:
    c.r[17].d[0] = c.r[3].d[0] << 56;
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 3;
L_001A89B0:
    c.r[3].d[0] = c.r[17].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[5], c.r[16].w[0] + c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A88F0u | kUnwind; return; } goto L_001A88F0; } }
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001A89E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 12632u);
    st8((c.r[3].w[0] + 116u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8A18u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A8A18u) [[unlikely]] return; }
L_001A8A18:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 116u), static_cast<std::uint8_t>(0u));
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A8A30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 12608u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8A5Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001A8A5Cu) [[unlikely]] return; }
L_001A8A5C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A8A70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[8], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[7], 0u + 600u);
    set32(c.r[6], 0u + 103u);
    set32(c.r[5], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1880000u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[8].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[3].w[0] + 72u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[3].w[0] + 298u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 24u), 0u);
    st32((c.r[29].w[0] + 32u), 0u);
    st32((c.r[29].w[0] + 20u), 0u);
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8AD0u); st32((c.r[29].w[0] + 16u), 0u);  if (depth < kMaxDepth) unit_000E(c, 316u, depth + 1u); else { c.pc = 0x0013B910u; return; } if (c.pc != 0x001A8AD0u) [[unlikely]] return; }
L_001A8AD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8AD8u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001A8AD8u) [[unlikely]] return; }
L_001A8AD8:
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8AE8u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 298u, depth + 1u); else { c.pc = 0x0013B660u; return; } if (c.pc != 0x001A8AE8u) [[unlikely]] return; }
L_001A8AE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8AF4u); set32(c.r[4], c.r[2].w[0] - 14560u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001A8AF4u) [[unlikely]] return; }
L_001A8AF4:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8B28u); st8((c.r[2].w[0] + 104u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_000E(c, 316u, depth + 1u); else { c.pc = 0x0013B910u; return; } if (c.pc != 0x001A8B28u) [[unlikely]] return; }
L_001A8B28:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001A8B44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8B44u);  if (depth < kMaxDepth) unit_0081(c, 139u, depth + 1u); else { c.pc = 0x003061C0u; return; } if (c.pc != 0x001A8B44u) [[unlikely]] return; }
L_001A8B44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8B4Cu);  if (depth < kMaxDepth) unit_002A(c, 265u, depth + 1u); else { c.pc = 0x001A9260u; return; } if (c.pc != 0x001A8B4Cu) [[unlikely]] return; }
L_001A8B4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8B54u);  if (depth < kMaxDepth) unit_001B(c, 40u, depth + 1u); else { c.pc = 0x0016CB50u; return; } if (c.pc != 0x001A8B54u) [[unlikely]] return; }
L_001A8B54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8B60u); c.r[4].d[0] = c.r[2].d[0] | 4896ull;  if (depth < kMaxDepth) unit_0029(c, 92u, depth + 1u); else { c.pc = 0x001A52A0u; return; } if (c.pc != 0x001A8B60u) [[unlikely]] return; }
L_001A8B60:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001A8B70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 5u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001A8BA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8BA4u);  if (depth < kMaxDepth) unit_0026(c, 116u, depth + 1u); else { c.pc = 0x00199B80u; return; } if (c.pc != 0x001A8BA4u) [[unlikely]] return; }
L_001A8BA4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A8BB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8BC0u);  if (depth < kMaxDepth) unit_000E(c, 28u, depth + 1u); else { c.pc = 0x00138590u; return; } if (c.pc != 0x001A8BC0u) [[unlikely]] return; }
L_001A8BC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8BC8u);  if (depth < kMaxDepth) unit_000E(c, 56u, depth + 1u); else { c.pc = 0x00138DD0u; return; } if (c.pc != 0x001A8BC8u) [[unlikely]] return; }
L_001A8BC8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001A8BFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8BE4u);  if (depth < kMaxDepth) unit_001F(c, 132u, depth + 1u); else { c.pc = 0x0017DFC0u; return; } if (c.pc != 0x001A8BE4u) [[unlikely]] return; }
L_001A8BE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8BECu);  if (depth < kMaxDepth) unit_001F(c, 73u, depth + 1u); else { c.pc = 0x0017CC00u; return; } if (c.pc != 0x001A8BECu) [[unlikely]] return; }
L_001A8BEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8BF4u);  if (depth < kMaxDepth) unit_001F(c, 122u, depth + 1u); else { c.pc = 0x0017DD80u; return; } if (c.pc != 0x001A8BF4u) [[unlikely]] return; }
L_001A8BF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8BFCu);  if (depth < kMaxDepth) unit_001F(c, 115u, depth + 1u); else { c.pc = 0x0017DC10u; return; } if (c.pc != 0x001A8BFCu) [[unlikely]] return; }
L_001A8BFC:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8C10u); st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0023(c, 153u, depth + 1u); else { c.pc = 0x0018DC90u; return; } if (c.pc != 0x001A8C10u) [[unlikely]] return; }
L_001A8C10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8C18u);  if (depth < kMaxDepth) unit_0080(c, 270u, depth + 1u); else { c.pc = 0x003036C0u; return; } if (c.pc != 0x001A8C18u) [[unlikely]] return; }
L_001A8C18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8C20u);  if (depth < kMaxDepth) unit_0043(c, 23u, depth + 1u); else { c.pc = 0x0020C910u; return; } if (c.pc != 0x001A8C20u) [[unlikely]] return; }
L_001A8C20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8C28u);  if (depth < kMaxDepth) unit_003F(c, 84u, depth + 1u); else { c.pc = 0x001FD8C0u; return; } if (c.pc != 0x001A8C28u) [[unlikely]] return; }
L_001A8C28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8C30u);  if (depth < kMaxDepth) unit_0081(c, 147u, depth + 1u); else { c.pc = 0x003068B0u; return; } if (c.pc != 0x001A8C30u) [[unlikely]] return; }
L_001A8C30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8C38u);  if (depth < kMaxDepth) unit_0024(c, 101u, depth + 1u); else { c.pc = 0x001917F0u; return; } if (c.pc != 0x001A8C38u) [[unlikely]] return; }
L_001A8C38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8C40u);  if (depth < kMaxDepth) unit_0024(c, 153u, depth + 1u); else { c.pc = 0x00192170u; return; } if (c.pc != 0x001A8C40u) [[unlikely]] return; }
L_001A8C40:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A8C50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001A8C78; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 84u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001A8C78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8C80u);  if (depth < kMaxDepth) unit_0093(c, 300u, depth + 1u); else { c.pc = 0x0034FD20u; return; } if (c.pc != 0x001A8C80u) [[unlikely]] return; }
L_001A8C80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A8D5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8C90u);  if (depth < kMaxDepth) unit_0093(c, 279u, depth + 1u); else { c.pc = 0x0034FB40u; return; } if (c.pc != 0x001A8C90u) [[unlikely]] return; }
L_001A8C90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8C98u);  if (depth < kMaxDepth) unit_001E(c, 191u, depth + 1u); else { c.pc = 0x0017B940u; return; } if (c.pc != 0x001A8C98u) [[unlikely]] return; }
L_001A8C98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8CA0u);  if (depth < kMaxDepth) unit_001F(c, 79u, depth + 1u); else { c.pc = 0x0017CDE0u; return; } if (c.pc != 0x001A8CA0u) [[unlikely]] return; }
L_001A8CA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8CA8u);  if (depth < kMaxDepth) unit_001E(c, 182u, depth + 1u); else { c.pc = 0x0017B710u; return; } if (c.pc != 0x001A8CA8u) [[unlikely]] return; }
L_001A8CA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8CB0u);  if (depth < kMaxDepth) unit_001F(c, 137u, depth + 1u); else { c.pc = 0x0017E0A0u; return; } if (c.pc != 0x001A8CB0u) [[unlikely]] return; }
L_001A8CB0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A8CCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8CCCu);  if (depth < kMaxDepth) unit_001F(c, 151u, depth + 1u); else { c.pc = 0x0017E3E0u; return; } if (c.pc != 0x001A8CCCu) [[unlikely]] return; }
L_001A8CCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8CD4u);  if (depth < kMaxDepth) unit_000E(c, 70u, depth + 1u); else { c.pc = 0x001390C0u; return; } if (c.pc != 0x001A8CD4u) [[unlikely]] return; }
L_001A8CD4:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 6u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 373u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001A8D10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8D10u);  if (depth < kMaxDepth) unit_002A(c, 269u, depth + 1u); else { c.pc = 0x001A92A0u; return; } if (c.pc != 0x001A8D10u) [[unlikely]] return; }
L_001A8D10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8D18u);  if (depth < kMaxDepth) unit_003F(c, 87u, depth + 1u); else { c.pc = 0x001FD9C0u; return; } if (c.pc != 0x001A8D18u) [[unlikely]] return; }
L_001A8D18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8D20u);  if (depth < kMaxDepth) unit_0043(c, 25u, depth + 1u); else { c.pc = 0x0020C960u; return; } if (c.pc != 0x001A8D20u) [[unlikely]] return; }
L_001A8D20:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_001A8D40; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 84u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
L_001A8D40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8D48u);  if (depth < kMaxDepth) unit_0025(c, 255u, depth + 1u); else { c.pc = 0x00196A70u; return; } if (c.pc != 0x001A8D48u) [[unlikely]] return; }
L_001A8D48:
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8D54u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 50u, depth + 1u); else { c.pc = 0x0016CF10u; return; } if (c.pc != 0x001A8D54u) [[unlikely]] return; }
L_001A8D54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8D5Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x001A8D5Cu) [[unlikely]] return; }
L_001A8D5C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A8D70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], ld32((c.r[4].w[0] + 260u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 260u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 5u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[5].w[0] + 5u);  if (t) { goto L_001A8F04; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A8E64; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { mmi::paddub(c.r[4], c.r[0], c.r[0]);  goto L_001A8E34; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A8DC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A8F4C; } }
L_001A8DC4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8DDCu); st8((c.r[2].w[0] + 298u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_001E(c, 121u, depth + 1u); else { c.pc = 0x0017AA80u; return; } if (c.pc != 0x001A8DDCu) [[unlikely]] return; }
L_001A8DDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8DE4u);  if (depth < kMaxDepth) unit_001E(c, 136u, depth + 1u); else { c.pc = 0x0017AE10u; return; } if (c.pc != 0x001A8DE4u) [[unlikely]] return; }
L_001A8DE4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001A8E20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8E00u);  if (depth < kMaxDepth) unit_004A(c, 292u, depth + 1u); else { c.pc = 0x0022BB40u; return; } if (c.pc != 0x001A8E00u) [[unlikely]] return; }
L_001A8E00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8E08u);  if (depth < kMaxDepth) unit_0029(c, 79u, depth + 1u); else { c.pc = 0x001A5090u; return; } if (c.pc != 0x001A8E08u) [[unlikely]] return; }
L_001A8E08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8E10u);  if (depth < kMaxDepth) unit_001E(c, 151u, depth + 1u); else { c.pc = 0x0017B100u; return; } if (c.pc != 0x001A8E10u) [[unlikely]] return; }
L_001A8E10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8E18u);  if (depth < kMaxDepth) unit_001E(c, 128u, depth + 1u); else { c.pc = 0x0017ACA0u; return; } if (c.pc != 0x001A8E18u) [[unlikely]] return; }
L_001A8E18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8E20u);  if (depth < kMaxDepth) unit_001E(c, 205u, depth + 1u); else { c.pc = 0x0017BC30u; return; } if (c.pc != 0x001A8E20u) [[unlikely]] return; }
L_001A8E20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8E28u);  if (depth < kMaxDepth) unit_0026(c, 115u, depth + 1u); else { c.pc = 0x00199B70u; return; } if (c.pc != 0x001A8E28u) [[unlikely]] return; }
L_001A8E28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8E30u);  if (depth < kMaxDepth) unit_0029(c, 304u, depth + 1u); else { c.pc = 0x001A75B0u; return; } if (c.pc != 0x001A8E30u) [[unlikely]] return; }
L_001A8E30:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_001A8E34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8E3Cu);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x001A8E3Cu) [[unlikely]] return; }
L_001A8E3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A8F4C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 600u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A8F4C; } }
L_001A8E64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8E6Cu);  if (depth < kMaxDepth) unit_002A(c, 264u, depth + 1u); else { c.pc = 0x001A9200u; return; } if (c.pc != 0x001A8E6Cu) [[unlikely]] return; }
L_001A8E6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A8E94; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001A8F4C; } }
L_001A8E94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8E9Cu);  if (depth < kMaxDepth) unit_0093(c, 300u, depth + 1u); else { c.pc = 0x0034FD20u; return; } if (c.pc != 0x001A8E9Cu) [[unlikely]] return; }
L_001A8E9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001A8F4C; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 60u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 8u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[6].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8ECCu); st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_001B(c, 50u, depth + 1u); else { c.pc = 0x0016CF10u; return; } if (c.pc != 0x001A8ECCu) [[unlikely]] return; }
L_001A8ECC:
    set32(c.r[5], 0u + 120u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8EDCu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 284u, depth + 1u); else { c.pc = 0x00197090u; return; } if (c.pc != 0x001A8EDCu) [[unlikely]] return; }
L_001A8EDC:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 120u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8EECu); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 284u, depth + 1u); else { c.pc = 0x00197090u; return; } if (c.pc != 0x001A8EECu) [[unlikely]] return; }
L_001A8EEC:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 120u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8EFCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0025(c, 284u, depth + 1u); else { c.pc = 0x00197090u; return; } if (c.pc != 0x001A8EFCu) [[unlikely]] return; }
L_001A8EFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A8F4C; } }
L_001A8F04:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] + 8u);  if (t) { goto L_001A8F40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8F18u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x001A8F18u) [[unlikely]] return; }
L_001A8F18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A8F4C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 2u);
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8F38u); st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0025(c, 5u, depth + 1u); else { c.pc = 0x00194070u; return; } if (c.pc != 0x001A8F38u) [[unlikely]] return; }
L_001A8F38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A8F4C; } }
L_001A8F40:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001A8F4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8F54u);  if (depth < kMaxDepth) unit_0082(c, 86u, depth + 1u); else { c.pc = 0x0030A330u; return; } if (c.pc != 0x001A8F54u) [[unlikely]] return; }
L_001A8F54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8F5Cu);  if (depth < kMaxDepth) unit_002A(c, 233u, depth + 1u); else { c.pc = 0x001A90D0u; return; } if (c.pc != 0x001A8F5Cu) [[unlikely]] return; }
L_001A8F5C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A8F70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8F88u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 139u, depth + 1u); else { c.pc = 0x0015B6B0u; return; } if (c.pc != 0x001A8F88u) [[unlikely]] return; }
L_001A8F88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8F90u);  if (depth < kMaxDepth) unit_0070(c, 48u, depth + 1u); else { c.pc = 0x002C09F0u; return; } if (c.pc != 0x001A8F90u) [[unlikely]] return; }
L_001A8F90:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8FB0u); st8((c.r[2].w[0] + 298u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0025(c, 235u, depth + 1u); else { c.pc = 0x00196850u; return; } if (c.pc != 0x001A8FB0u) [[unlikely]] return; }
L_001A8FB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8FB8u);  if (depth < kMaxDepth) unit_0070(c, 57u, depth + 1u); else { c.pc = 0x002C0AF0u; return; } if (c.pc != 0x001A8FB8u) [[unlikely]] return; }
L_001A8FB8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[7], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 21952u);
    st8((c.r[3].w[0] + 69u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[6], 0u + 1536u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A8FE0u); st8((c.r[2].w[0] + 68u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001A8FE0u) [[unlikely]] return; }
L_001A8FE0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[3], c.r[3].w[0] + 26144u);
    set32(c.r[4], c.r[4].w[0] - 14464u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_001A90A8; } }
L_001A8FFC:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    st8((c.r[3].w[0] + 8391u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    st8((c.r[3].w[0] + 8386u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    st8((c.r[3].w[0] + 8389u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    st8((c.r[3].w[0] + 8387u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    st8((c.r[3].w[0] + 8388u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    st8((c.r[3].w[0] + 8390u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 18;
    if (c.r[5].d[0] != c.r[6].d[0]) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_001A9094; }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7u)));
    st8((c.r[3].w[0] + 890u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 8u)));
    st16((c.r[3].w[0] + 512u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 16u)));
    st16((c.r[3].w[0] + 514u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 16u)));
    st16((c.r[3].w[0] + 516u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    st8((c.r[3].w[0] + 768u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 11u)));
    st8((c.r[3].w[0] + 8438u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 14u)));
    st8((c.r[3].w[0] + 8437u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 12u)));
    st8((c.r[3].w[0] + 1838u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 13u)));
    st8((c.r[3].w[0] + 1842u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 20;
L_001A9094:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    set32(c.r[3], c.r[3].w[0] + 8448u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 5;
L_001A90A8:
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.r[5].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A8FFCu | kUnwind; return; } goto L_001A8FFC; } }
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A90D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A90E0u);  if (depth < kMaxDepth) unit_0080(c, 308u, depth + 1u); else { c.pc = 0x00303FA0u; return; } if (c.pc != 0x001A90E0u) [[unlikely]] return; }
L_001A90E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A90E8u);  if (depth < kMaxDepth) unit_0081(c, 5u, depth + 1u); else { c.pc = 0x003040D0u; return; } if (c.pc != 0x001A90E8u) [[unlikely]] return; }
L_001A90E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A90F0u);  if (depth < kMaxDepth) unit_0025(c, 286u, depth + 1u); else { c.pc = 0x00197140u; return; } if (c.pc != 0x001A90F0u) [[unlikely]] return; }
L_001A90F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A90F8u);  if (depth < kMaxDepth) unit_003F(c, 87u, depth + 1u); else { c.pc = 0x001FD9C0u; return; } if (c.pc != 0x001A90F8u) [[unlikely]] return; }
L_001A90F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9100u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 287u, depth + 1u); else { c.pc = 0x00303B80u; return; } if (c.pc != 0x001A9100u) [[unlikely]] return; }
L_001A9100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9108u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0080(c, 287u, depth + 1u); else { c.pc = 0x00303B80u; return; } if (c.pc != 0x001A9108u) [[unlikely]] return; }
L_001A9108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9110u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0080(c, 287u, depth + 1u); else { c.pc = 0x00303B80u; return; } if (c.pc != 0x001A9110u) [[unlikely]] return; }
L_001A9110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9118u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0080(c, 287u, depth + 1u); else { c.pc = 0x00303B80u; return; } if (c.pc != 0x001A9118u) [[unlikely]] return; }
L_001A9118:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9120u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0080(c, 287u, depth + 1u); else { c.pc = 0x00303B80u; return; } if (c.pc != 0x001A9120u) [[unlikely]] return; }
L_001A9120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9128u); set32(c.r[4], 0u + 17u);  if (depth < kMaxDepth) unit_0080(c, 287u, depth + 1u); else { c.pc = 0x00303B80u; return; } if (c.pc != 0x001A9128u) [[unlikely]] return; }
L_001A9128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9130u); set32(c.r[4], 0u + 18u);  if (depth < kMaxDepth) unit_0080(c, 287u, depth + 1u); else { c.pc = 0x00303B80u; return; } if (c.pc != 0x001A9130u) [[unlikely]] return; }
L_001A9130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9138u); set32(c.r[4], 0u + 19u);  if (depth < kMaxDepth) unit_0080(c, 287u, depth + 1u); else { c.pc = 0x00303B80u; return; } if (c.pc != 0x001A9138u) [[unlikely]] return; }
L_001A9138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9140u);  if (depth < kMaxDepth) unit_0024(c, 49u, depth + 1u); else { c.pc = 0x00190D20u; return; } if (c.pc != 0x001A9140u) [[unlikely]] return; }
L_001A9140:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9148u);  if (depth < kMaxDepth) unit_0024(c, 129u, depth + 1u); else { c.pc = 0x00191C60u; return; } if (c.pc != 0x001A9148u) [[unlikely]] return; }
L_001A9148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9150u);  if (depth < kMaxDepth) unit_0070(c, 70u, depth + 1u); else { c.pc = 0x002C0CB0u; return; } if (c.pc != 0x001A9150u) [[unlikely]] return; }
L_001A9150:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9158u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 295u, depth + 1u); else { c.pc = 0x00303D30u; return; } if (c.pc != 0x001A9158u) [[unlikely]] return; }
L_001A9158:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9160u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0080(c, 295u, depth + 1u); else { c.pc = 0x00303D30u; return; } if (c.pc != 0x001A9160u) [[unlikely]] return; }
L_001A9160:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9168u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0080(c, 295u, depth + 1u); else { c.pc = 0x00303D30u; return; } if (c.pc != 0x001A9168u) [[unlikely]] return; }
L_001A9168:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9170u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0080(c, 295u, depth + 1u); else { c.pc = 0x00303D30u; return; } if (c.pc != 0x001A9170u) [[unlikely]] return; }
L_001A9170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9178u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0080(c, 295u, depth + 1u); else { c.pc = 0x00303D30u; return; } if (c.pc != 0x001A9178u) [[unlikely]] return; }
L_001A9178:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9180u); set32(c.r[4], 0u + 17u);  if (depth < kMaxDepth) unit_0080(c, 295u, depth + 1u); else { c.pc = 0x00303D30u; return; } if (c.pc != 0x001A9180u) [[unlikely]] return; }
L_001A9180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9188u); set32(c.r[4], 0u + 18u);  if (depth < kMaxDepth) unit_0080(c, 295u, depth + 1u); else { c.pc = 0x00303D30u; return; } if (c.pc != 0x001A9188u) [[unlikely]] return; }
L_001A9188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9190u); set32(c.r[4], 0u + 19u);  if (depth < kMaxDepth) unit_0080(c, 295u, depth + 1u); else { c.pc = 0x00303D30u; return; } if (c.pc != 0x001A9190u) [[unlikely]] return; }
L_001A9190:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9198u);  if (depth < kMaxDepth) unit_0043(c, 25u, depth + 1u); else { c.pc = 0x0020C960u; return; } if (c.pc != 0x001A9198u) [[unlikely]] return; }
L_001A9198:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 6u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 373u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001A91B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01D90000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A91B8u); c.r[4].d[0] = c.r[2].d[0] | 2048ull;  if (depth < kMaxDepth) unit_0026(c, 198u, depth + 1u); else { c.pc = 0x0019B180u; return; } if (c.pc != 0x001A91B8u) [[unlikely]] return; }
L_001A91B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A91C0u);  if (depth < kMaxDepth) unit_001B(c, 45u, depth + 1u); else { c.pc = 0x0016CE40u; return; } if (c.pc != 0x001A91C0u) [[unlikely]] return; }
L_001A91C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A91CCu); set32(c.r[4], c.r[2].w[0] - 23424u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x001A91CCu) [[unlikely]] return; }
L_001A91CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A91D8u); set32(c.r[4], c.r[2].w[0] - 27424u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x001A91D8u) [[unlikely]] return; }
L_001A91D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A91E4u); set32(c.r[4], c.r[2].w[0] + 15904u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x001A91E4u) [[unlikely]] return; }
L_001A91E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[4], c.r[2].w[0] + 16016u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A91F4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 122u, depth + 1u); else { c.pc = 0x00305F10u; return; } if (c.pc != 0x001A91F4u) [[unlikely]] return; }
L_001A91F4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A9200:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 87u)));
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_001A9228; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 3268u));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 4;
L_001A9228:
    c.r[3].d[0] = c.r[5].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_001A9248; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 3288u));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 5;
L_001A9248:
    c.r[3].d[0] = c.r[3].d[0] & 33776ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A9258; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_001A9258:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A9260:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9270u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 167u, depth + 1u); else { c.pc = 0x00306B90u; return; } if (c.pc != 0x001A9270u) [[unlikely]] return; }
L_001A9270:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 12592u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 373u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A928Cu); c.r[4].d[0] = ld8((c.r[2].w[0]));  if (depth < kMaxDepth) unit_0024(c, 185u, depth + 1u); else { c.pc = 0x00192F90u; return; } if (c.pc != 0x001A928Cu) [[unlikely]] return; }
L_001A928C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9294u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_002A(c, 276u, depth + 1u); else { c.pc = 0x001A9480u; return; } if (c.pc != 0x001A9294u) [[unlikely]] return; }
L_001A9294:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A92A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01D90000u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[4].d[0] = c.r[3].d[0] | 2052ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00090000u);
    c.r[1].d[0] = c.r[1].d[0] | 1ull;
    c.r[1].d[0] = c.r[4].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001A92D4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01D90000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 2048u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A9364; } }
L_001A92D4:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001A92EC; }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01D90000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 2048u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A9364; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001A92EC:
    c.r[4].d[0] = c.r[3].d[0] | 2048ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01D90000u);
    st16((c.r[1].w[0] + 2068u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01D90000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A930Cu); st16((c.r[1].w[0] + 2070u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0027(c, 124u, depth + 1u); else { c.pc = 0x0019F480u; return; } if (c.pc != 0x001A930Cu) [[unlikely]] return; }
L_001A930C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01D90000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 2052u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01D90000u);
    c.r[4].d[0] = c.r[2].d[0] | 18496ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01E10000u);
    c.r[5].d[0] = c.r[2].d[0] | 19536ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A932Cu); set32(c.r[6], c.r[3].w[0] - 16u);  if (depth < kMaxDepth) unit_0027(c, 125u, depth + 1u); else { c.pc = 0x0019F4E0u; return; } if (c.pc != 0x001A932Cu) [[unlikely]] return; }
L_001A932C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 11604u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01D90000u);
    c.r[4].d[0] = c.r[2].d[0] | 2048ull;
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9348u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0027(c, 137u, depth + 1u); else { c.pc = 0x0019F6A0u; return; } if (c.pc != 0x001A9348u) [[unlikely]] return; }
L_001A9348:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 11604u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01D90000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9364u); c.r[4].d[0] = c.r[2].d[0] | 2048ull;  if (depth < kMaxDepth) unit_0027(c, 137u, depth + 1u); else { c.pc = 0x0019F6A0u; return; } if (c.pc != 0x001A9364u) [[unlikely]] return; }
L_001A9364:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A9370:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00880000u);
    set32(c.r[12], c.r[3].w[0] - 23440u);
    mmi::paddub(c.r[11], c.r[0], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = c.r[3].w[0];
    set32(c.r[10], 0u + 61u);
    c.budget -= 6;
L_001A9388:
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[6], 0u + 1u);
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[6].d[0] = c.r[6].d[0] | 32768ull;
    set32(c.r[11], c.r[11].w[0] + 1u);
    st32((c.r[12].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[3].d[0] = c.r[11].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    st32((c.r[12].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[12].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    st32((c.r[12].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[12].w[0]));
    c.f[4] = ld32((c.r[12].w[0] + 8u));
    c.f[5] = ld32((c.r[12].w[0] + 12u));
    c.f[2] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[1] = fp::add(c.f[5], c.f[4]);
    c.f[2] = fp::mul(c.f[2], c.f[1]);
    c.f[1] = fp::sub(c.f[5], c.f[4]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    st32((c.r[12].w[0] + 16u), c.f[0]);
    c.f[2] = ld32((c.r[12].w[0]));
    c.f[4] = ld32((c.r[12].w[0] + 12u));
    c.f[5] = ld32((c.r[12].w[0] + 8u));
    c.f[1] = ld32((c.r[12].w[0] + 4u));
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[0] = fp::mul(c.f[4], c.f[5]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = c.f[5] ^ fp::kSign;
    c.f[0] = fp::add(c.f[0], c.f[4]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[12].w[0] + 20u), c.f[0]);
    set32(c.r[9], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[8], ld32((c.r[5].w[0])));
    c.r[9].d[0] = c.r[9].d[0] << 8;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st64((c.r[12].w[0] + 32u), c.r[7].d[0]);
    st64((c.r[12].w[0] + 40u), c.r[10].d[0]);
    set32(c.r[9], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[8], ld32((c.r[5].w[0])));
    c.r[9].d[0] = c.r[9].d[0] << 8;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    st64((c.r[12].w[0] + 24u), c.r[6].d[0]);
    c.budget -= 58;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[12], c.r[12].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A9388u | kUnwind; return; } goto L_001A9388; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A9480:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    set32(c.r[5], c.r[2].w[0] - 9584u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 373u)));
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A94C4u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0029(c, 89u, depth + 1u); else { c.pc = 0x001A5250u; return; } if (c.pc != 0x001A94C4u) [[unlikely]] return; }
L_001A94C4:
    set32(c.r[4], c.r[16].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A94D0u); set32(c.r[5], c.r[16].w[0] + 112u);  if (depth < kMaxDepth) unit_002A(c, 274u, depth + 1u); else { c.pc = 0x001A9370u; return; } if (c.pc != 0x001A94D0u) [[unlikely]] return; }
L_001A94D0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001A94E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A94F0u);  if (depth < kMaxDepth) unit_0081(c, 164u, depth + 1u); else { c.pc = 0x00306AB0u; return; } if (c.pc != 0x001A94F0u) [[unlikely]] return; }
L_001A94F0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 68u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A9518; } }
    c.r[2].d[0] = c.r[3].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9510u); c.r[4].d[0] = c.r[2].d[0] & 15ull;  if (depth < kMaxDepth) unit_002A(c, 276u, depth + 1u); else { c.pc = 0x001A9480u; return; } if (c.pc != 0x001A9510u) [[unlikely]] return; }
L_001A9510:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 68u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_001A9518:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001A9530:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], 0u + 25u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[5].d[0] = c.r[16].d[0] << 48;
    c.budget -= 8;
L_001A9550:
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A955Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_003D(c, 200u, depth + 1u); else { c.pc = 0x001F61F0u; return; } if (c.pc != 0x001A955Cu) [[unlikely]] return; }
L_001A955C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[16].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[5].d[0] = c.r[16].d[0] << 48;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A9550u | kUnwind; return; } goto L_001A9550; } }
    set32(c.r[2], 0u + 7u);
    st32((c.r[17].w[0] + 1260u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_001A95BC; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8390u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 12576u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st16((c.r[17].w[0] + 516u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 514u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 512u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 13;
L_001A95BC:
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
L_001A95C8:
    set32(c.r[2], c.r[16].w[0] + c.r[5].w[0]);
    st16((c.r[4].w[0] + 32u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[5].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + 300u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A95C8u | kUnwind; return; } goto L_001A95C8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A95FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 25u);  if (t) { goto L_001A9678; } }
L_001A95FC:
    st8((c.r[16].w[0] + 57u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 60u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 58u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 59u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 61u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9624u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00152F90u; return; } if (c.pc != 0x001A9624u) [[unlikely]] return; }
L_001A9624:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);  if (t) { goto L_001A9640; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_001A9644; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.budget -= 1;
L_001A9640:
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 1;
L_001A9644:
    st32((c.r[17].w[0] + 52u), 0u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 64u), 0u);
    st8((c.r[16].w[0] + 62u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A965Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0045(c, 185u, depth + 1u); else { c.pc = 0x00217370u; return; } if (c.pc != 0x001A965Cu) [[unlikely]] return; }
L_001A965C:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 68u), c.f[0]);
    st8((c.r[16].w[0] + 63u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 652u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], 0u + 25u);
    c.budget -= 7;
L_001A9678:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9684u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 25u, depth + 1u); else { c.pc = 0x00198370u; return; } if (c.pc != 0x001A9684u) [[unlikely]] return; }
L_001A9684:
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 1;
L_001A9688:
    set32(c.r[2], c.r[18].w[0] + 59u);
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A969Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0078(c, 319u, depth + 1u); else { c.pc = 0x002E3640u; return; } if (c.pc != 0x001A969Cu) [[unlikely]] return; }
L_001A969C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001A9688u | kUnwind; return; } goto L_001A9688; } }
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001A96D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 377u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_001A9780; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 641u)));
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A9710; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 280u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_001A9710:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A98F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9720u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_002A(c, 305u, depth + 1u); else { c.pc = 0x001A9B90u; return; } if (c.pc != 0x001A9720u) [[unlikely]] return; }
L_001A9720:
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 92u)));
    c.r[5].d[0] = 0ull | 65535ull;
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 84u));
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 88u));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9778u); st32((c.r[17].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 232u, depth + 1u); else { c.pc = 0x0024B250u; return; } if (c.pc != 0x001A9778u) [[unlikely]] return; }
L_001A9778:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 514u)));  if (t) { goto L_001A98FC; } }
L_001A9780:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 61u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A98B0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 641u)));
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A97A8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 280u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_001A97A8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A97B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A97B8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 232u, depth + 1u); else { c.pc = 0x0024B250u; return; } if (c.pc != 0x001A97B8u) [[unlikely]] return; }
L_001A97B8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 62u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001A97F0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[3].w[0] + 592u), c.f[3]);
    st32((c.r[3].w[0] + 596u), c.f[2]);
    st32((c.r[3].w[0] + 600u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 604u), c.f[0]);  if (t) { goto L_001A98F8; } }
L_001A97F0:
    c.f[5] = ld32((c.r[17].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0] + 128u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 136u));
    c.f[3] = ld32((c.r[17].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 132u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.f[20] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9820u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x001A9820u) [[unlikely]] return; }
L_001A9820:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A982Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x001A982Cu) [[unlikely]] return; }
L_001A982C:
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 63u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A9880; } }
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A98F8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 62u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A9874; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 62u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A98F8; } }
L_001A9874:
    st8((c.r[16].w[0] + 61u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), 0u);  if (t) { goto L_001A98F8; } }
L_001A9880:
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    c.f[0] = ld32((c.r[16].w[0] + 72u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001A98F8; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A98A8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x001A98A8u) [[unlikely]] return; }
L_001A98A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_001A9B54; } }
L_001A98B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A98F8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.f[1] = ld32((c.r[17].w[0] + 1760u));
    c.f[0] = ld32((c.r[3].w[0] + 592u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 32u), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.f[1] = ld32((c.r[17].w[0] + 1764u));
    c.f[0] = ld32((c.r[3].w[0] + 596u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.f[1] = ld32((c.r[17].w[0] + 1768u));
    c.f[0] = ld32((c.r[3].w[0] + 600u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 40u), c.f[0]);
    c.budget -= 15;
L_001A98F8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 514u)));
    c.budget -= 1;
L_001A98FC:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001A99A8; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A994C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_001A9944; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001A9940; } }
    st32((c.r[16].w[0]), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 1260u)));
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1260u), c.r[2].w[0]);  if (t) { goto L_001A994C; } }
L_001A9940:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_001A9944:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A994Cu);  if (depth < kMaxDepth) unit_002A(c, 306u, depth + 1u); else { c.pc = 0x001A9BA0u; return; } if (c.pc != 0x001A994Cu) [[unlikely]] return; }
L_001A994C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_001A9998; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_001A998C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001A9988; } }
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 1260u)));
    set32(c.r[2], 0u - 5u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1260u), c.r[2].w[0]);  if (t) { goto L_001A9994; } }
L_001A9988:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_001A998C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9994u);  if (depth < kMaxDepth) unit_002A(c, 318u, depth + 1u); else { c.pc = 0x001A9E50u; return; } if (c.pc != 0x001A9994u) [[unlikely]] return; }
L_001A9994:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_001A9998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A99A0u);  if (depth < kMaxDepth) unit_002A(c, 330u, depth + 1u); else { c.pc = 0x001AA100u; return; } if (c.pc != 0x001A99A0u) [[unlikely]] return; }
L_001A99A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A99A8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_002A(c, 336u, depth + 1u); else { c.pc = 0x001AA290u; return; } if (c.pc != 0x001A99A8u) [[unlikely]] return; }
L_001A99A8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[5], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_001A9B50; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 529u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A9B50; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 58u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001A9B50; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 59u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_001A9AB8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001A9A24; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);  goto L_001A9A00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A9B50; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.budget -= 1;
L_001A9A00:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9A0Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00152F90u; return; } if (c.pc != 0x001A9A0Cu) [[unlikely]] return; }
L_001A9A0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A9B50; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 59u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 59u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A9B50; } }
L_001A9A24:
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);  goto L_001A9A54; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_001A9A68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.budget -= 1;
L_001A9A54:
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 5;
L_001A9A68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43AC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9A7Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0014(c, 156u, depth + 1u); else { c.pc = 0x001530A0u; return; } if (c.pc != 0x001A9A7Cu) [[unlikely]] return; }
L_001A9A7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A9B50; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 59u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 29598u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 59u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[17].w[0] + 532u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 531u));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001A9B50; } }
L_001A9AB8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 640u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A9B0C; } }
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[3].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);  goto L_001A9AF4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_001A9B50; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.budget -= 1;
L_001A9AF4:
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_001A9B50; } }
L_001A9B0C:
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);  goto L_001A9B3C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_001A9B50; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.budget -= 1;
L_001A9B3C:
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 5;
L_001A9B50:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001A9B54:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001A9B70:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[5], 0u + 25u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00198460u | kUnwind; return; } [[clang::musttail]] return unit_0026(c, 29u, depth); }
L_001A9B90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001A9BA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 328u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[3], 0u + 3u);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_001A9E14; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[5].d[0]) { set32(c.r[2], 0u + 30u);  goto L_001A9DBC; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_001A9D5C; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001A9BEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_001A9E34; } }
L_001A9BEC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_001A9D54; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 600u);  if (t) { goto L_001A9C18; } }
    set32(c.r[2], 0u + 300u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 32u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001A9C1C; } }
    set32(c.r[2], 0u + 600u);
    c.budget -= 1;
L_001A9C18:
    st16((c.r[16].w[0] + 32u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001A9C1C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44160000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 16384u);
    set32(c.r[9], 0u + 6144u);
    set32(c.r[10], 0u + 1u);
    c.r[7].d[0] = 0ull | 49152ull;
    c.r[8].d[0] = 0ull | 65535ull;
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9C44u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 28u, depth + 1u); else { c.pc = 0x0024C7E0u; return; } if (c.pc != 0x001A9C44u) [[unlikely]] return; }
L_001A9C44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001A9E30; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    set32(c.r[4], c.r[17].w[0] + 2048u);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9C78u); st32((c.r[29].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001A9C78u) [[unlikely]] return; }
L_001A9C78:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9C88u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x001A9C88u) [[unlikely]] return; }
L_001A9C88:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9C94u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x001A9C94u) [[unlikely]] return; }
L_001A9C94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9C9Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x001A9C9Cu) [[unlikely]] return; }
L_001A9C9C:
    c.f[13] = ld32((c.r[29].w[0] + 72u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9CA8u); c.f[12] = ld32((c.r[29].w[0] + 64u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x001A9CA8u) [[unlikely]] return; }
L_001A9CA8:
    set32(c.r[3], ld32((c.r[17].w[0] + 4560u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[5].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 16u));
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = 0ull | 32769ull;  if (t) { goto L_001A9CF4; } }
    c.r[3].d[0] = c.r[4].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A9CF0; } }
    set32(c.r[3], 0u + 16384u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_001A9D18; } }
L_001A9CF0:
    c.r[1].d[0] = 0ull | 32769ull;
    c.budget -= 1;
L_001A9CF4:
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001A9D18; } }
    c.r[1].d[0] = 0ull | 49153ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A9D18; } }
    c.r[3].d[0] = 0ull | 49152ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 2;
L_001A9D18:
    set32(c.r[4], ld32((c.r[17].w[0] + 4560u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 128u);  if (t) { goto L_001A9D48; } }
    set32(c.r[3], 0u - 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_001A9E30; } }
    set32(c.r[3], 0u + 128u);
    c.budget -= 1;
L_001A9D48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_001A9E30; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_001A9D54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 32u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001A9E30; } }
L_001A9D5C:
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 4560u)));
    c.r[3].d[0] = 0ull | 65535ull;
    set32(c.r[6], c.r[5].w[0] - c.r[4].w[0]);
    c.r[6].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[1].d[0] = c.r[6].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_001A9D90; } }
    c.r[3].d[0] = 0ull | 65472ull;
    c.r[3].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A9DA0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_001A9D90:
    st32((c.r[17].w[0] + 4560u), c.r[5].w[0]);
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 24u), 0u);  if (t) { goto L_001A9E30; } }
L_001A9DA0:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 4560u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 4560u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4560u), c.r[3].w[0]);  if (t) { goto L_001A9E30; } }
    set32(c.r[2], 0u + 30u);
    c.budget -= 1;
L_001A9DBC:
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[5], 0u + 151u);  if (t) { goto L_001A9DE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9DDCu); set32(c.r[5], ld32((c.r[16].w[0] + 76u)));  if (depth < kMaxDepth) unit_0077(c, 232u, depth + 1u); else { c.pc = 0x002DEAA0u; return; } if (c.pc != 0x001A9DDCu) [[unlikely]] return; }
L_001A9DDC:
    set32(c.r[5], 0u + 151u);
    c.budget -= 1;
L_001A9DE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9DE8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x001A9DE8u) [[unlikely]] return; }
L_001A9DE8:
    set32(c.r[5], 0u + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9DF4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x001A9DF4u) [[unlikely]] return; }
L_001A9DF4:
    set32(c.r[5], 0u + 153u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9E00u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x001A9E00u) [[unlikely]] return; }
L_001A9E00:
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9E0Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 34u, depth + 1u); else { c.pc = 0x00198540u; return; } if (c.pc != 0x001A9E0Cu) [[unlikely]] return; }
L_001A9E0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001A9E30; } }
L_001A9E14:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_001A9E2C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001A9E30; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_001A9E2C:
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001A9E30:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001A9E34:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001A9E50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 329u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[3], 0u + 3u);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_001AA0CC; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[5].d[0]) { set32(c.r[2], 0u + 30u);  goto L_001AA074; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_001AA014; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001A9E9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_001AA0EC; } }
L_001A9E9C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 34u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_001AA00C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], 0u + 600u);  if (t) { goto L_001A9EC8; } }
    set32(c.r[2], 0u + 300u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 34u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001A9ECC; } }
    set32(c.r[2], 0u + 600u);
    c.budget -= 1;
L_001A9EC8:
    st16((c.r[16].w[0] + 34u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001A9ECC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44160000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 10012u);
    set32(c.r[9], 0u + 6144u);
    set32(c.r[10], 0u + 2u);
    c.r[6].d[0] = 0ull | 32768ull;
    c.r[8].d[0] = 0ull | 55524ull;
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9EF4u); c.r[7].d[0] = 0ull | 32769ull;  if (depth < kMaxDepth) unit_0053(c, 28u, depth + 1u); else { c.pc = 0x0024C7E0u; return; } if (c.pc != 0x001A9EF4u) [[unlikely]] return; }
L_001A9EF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AA0E8; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    set32(c.r[4], c.r[17].w[0] + 2112u);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9F28u); st32((c.r[29].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001A9F28u) [[unlikely]] return; }
L_001A9F28:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9F38u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x001A9F38u) [[unlikely]] return; }
L_001A9F38:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9F44u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x001A9F44u) [[unlikely]] return; }
L_001A9F44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9F4Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x001A9F4Cu) [[unlikely]] return; }
L_001A9F4C:
    c.f[13] = ld32((c.r[29].w[0] + 72u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001A9F58u); c.f[12] = ld32((c.r[29].w[0] + 64u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x001A9F58u) [[unlikely]] return; }
L_001A9F58:
    set32(c.r[3], ld32((c.r[17].w[0] + 4572u)));
    set32(c.r[4], c.r[2].w[0] + 32767u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[5].d[0] = 0ull | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 20u));
    c.r[1].d[0] = 0ull | 32769ull;
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = 0ull | 32769ull;  if (t) { goto L_001A9FAC; } }
    c.r[3].d[0] = c.r[4].sd[0] < 10012ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001A9FA8; } }
    set32(c.r[3], 0u + 10012u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_001A9FD0; } }
L_001A9FA8:
    c.r[1].d[0] = 0ull | 32769ull;
    c.budget -= 1;
L_001A9FAC:
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001A9FD0; } }
    c.r[1].d[0] = 0ull | 55525ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001A9FD0; } }
    c.r[3].d[0] = 0ull | 55524ull;
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 2;
L_001A9FD0:
    set32(c.r[4], ld32((c.r[17].w[0] + 4572u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 128u);  if (t) { goto L_001AA000; } }
    set32(c.r[3], 0u - 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 28u), c.r[3].w[0]);  if (t) { goto L_001AA0E8; } }
    set32(c.r[3], 0u + 128u);
    c.budget -= 1;
L_001AA000:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 28u), c.r[3].w[0]);  if (t) { goto L_001AA0E8; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_001AA00C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 34u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001AA0E8; } }
L_001AA014:
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 4572u)));
    c.r[3].d[0] = 0ull | 65535ull;
    set32(c.r[6], c.r[5].w[0] - c.r[4].w[0]);
    c.r[6].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[1].d[0] = c.r[6].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001AA044; } }
    c.r[3].d[0] = 0ull | 65472ull;
    c.r[3].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001AA058; } }
L_001AA044:
    st32((c.r[17].w[0] + 4572u), c.r[5].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0] + 28u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001AA0E8; } }
L_001AA058:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 4572u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 4572u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4572u), c.r[3].w[0]);  if (t) { goto L_001AA0E8; } }
    set32(c.r[2], 0u + 30u);
    c.budget -= 1;
L_001AA074:
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[5], 0u + 154u);  if (t) { goto L_001AA098; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA094u); set32(c.r[5], ld32((c.r[16].w[0] + 80u)));  if (depth < kMaxDepth) unit_0077(c, 232u, depth + 1u); else { c.pc = 0x002DEAA0u; return; } if (c.pc != 0x001AA094u) [[unlikely]] return; }
L_001AA094:
    set32(c.r[5], 0u + 154u);
    c.budget -= 1;
L_001AA098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA0A0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x001AA0A0u) [[unlikely]] return; }
L_001AA0A0:
    set32(c.r[5], 0u + 155u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA0ACu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x001AA0ACu) [[unlikely]] return; }
L_001AA0AC:
    set32(c.r[5], 0u + 156u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA0B8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x001AA0B8u) [[unlikely]] return; }
L_001AA0B8:
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA0C4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 34u, depth + 1u); else { c.pc = 0x00198540u; return; } if (c.pc != 0x001AA0C4u) [[unlikely]] return; }
L_001AA0C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AA0E8; } }
L_001AA0CC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 13u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_001AA0E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001AA0E8; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_001AA0E4:
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001AA0E8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001AA0EC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001AA100:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 330u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_001AA1D4; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001AA134; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_001AA27C; } }
L_001AA134:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_001AA1CC; }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1200u);  if (t) { goto L_001AA164; } }
    set32(c.r[2], 0u + 600u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 36u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001AA168; } }
    set32(c.r[2], 0u + 1200u);
    c.budget -= 1;
L_001AA164:
    st16((c.r[16].w[0] + 36u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001AA168:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43E10000u);
    set32(c.r[6], 0u + 4096u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    mmi::paddub(c.r[9], c.r[6], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA190u); mmi::paddub(c.r[10], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 28u, depth + 1u); else { c.pc = 0x0024C7E0u; return; } if (c.pc != 0x001AA190u) [[unlikely]] return; }
L_001AA190:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AA278; } }
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA1A8u); st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x001AA1A8u) [[unlikely]] return; }
L_001AA1A8:
    c.r[3].d[0] = c.r[2].d[0] & 3ull;
    st8((c.r[16].w[0] + 14u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 14u)));
    set32(c.r[3], c.r[3].w[0] + 6u);
    st8((c.r[16].w[0] + 14u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 42u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 46u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001AA278; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_001AA1CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 36u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001AA278; } }
L_001AA1D4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 42u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_001AA274; }
    set32(c.r[2], 0u + 10u);
    st8((c.r[16].w[0] + 42u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001AA204; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA204u); set32(c.r[5], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_0077(c, 232u, depth + 1u); else { c.pc = 0x002DEAA0u; return; } if (c.pc != 0x001AA204u) [[unlikely]] return; }
L_001AA204:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 14u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 66u);
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA21Cu); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (depth < kMaxDepth) unit_007E(c, 176u, depth + 1u); else { c.pc = 0x002F9760u; return; } if (c.pc != 0x001AA21Cu) [[unlikely]] return; }
L_001AA21C:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA228u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 34u, depth + 1u); else { c.pc = 0x00198540u; return; } if (c.pc != 0x001AA228u) [[unlikely]] return; }
L_001AA228:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 14u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 14u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 14u)));
    c.r[1].d[0] = c.r[3].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001AA24C; } }
    set32(c.r[3], 0u + 6u);
    st8((c.r[16].w[0] + 14u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001AA24C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 46u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 46u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 46u)));
    c.r[3].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001AA278; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001AA278; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_001AA274:
    st8((c.r[16].w[0] + 42u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001AA278:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001AA27C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001AA290:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 331u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_001AA364; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001AA2C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_001AA408; } }
L_001AA2C4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 38u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_001AA35C; }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1200u);  if (t) { goto L_001AA2F4; } }
    set32(c.r[2], 0u + 600u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 38u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001AA2F8; } }
    set32(c.r[2], 0u + 1200u);
    c.budget -= 1;
L_001AA2F4:
    st16((c.r[16].w[0] + 38u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001AA2F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43E10000u);
    c.r[6].d[0] = 0ull | 65535ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[9], 0u + 4096u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.r[5].d[0] = 0ull | 61440ull;
    mmi::paddub(c.r[7], c.r[6], c.r[0]);
    mmi::paddub(c.r[8], c.r[6], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA320u); mmi::paddub(c.r[10], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 28u, depth + 1u); else { c.pc = 0x0024C7E0u; return; } if (c.pc != 0x001AA320u) [[unlikely]] return; }
L_001AA320:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AA404; } }
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA338u); st8((c.r[16].w[0] + 11u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x001AA338u) [[unlikely]] return; }
L_001AA338:
    c.r[3].d[0] = c.r[2].d[0] & 3ull;
    st8((c.r[16].w[0] + 15u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 15u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st8((c.r[16].w[0] + 15u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 43u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 47u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001AA404; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_001AA35C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 38u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001AA404; } }
L_001AA364:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 43u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_001AA400; }
    set32(c.r[2], 0u + 10u);
    st8((c.r[16].w[0] + 43u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001AA394; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA394u); set32(c.r[5], ld32((c.r[16].w[0] + 88u)));  if (depth < kMaxDepth) unit_0077(c, 232u, depth + 1u); else { c.pc = 0x002DEAA0u; return; } if (c.pc != 0x001AA394u) [[unlikely]] return; }
L_001AA394:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 15u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 66u);
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA3ACu); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (depth < kMaxDepth) unit_007E(c, 176u, depth + 1u); else { c.pc = 0x002F9760u; return; } if (c.pc != 0x001AA3ACu) [[unlikely]] return; }
L_001AA3AC:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA3B8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 34u, depth + 1u); else { c.pc = 0x00198540u; return; } if (c.pc != 0x001AA3B8u) [[unlikely]] return; }
L_001AA3B8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 15u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 15u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 15u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_001AA3D8; } }
    set32(c.r[3], 0u + 5u);
    st8((c.r[16].w[0] + 15u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001AA3D8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 47u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 47u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 47u)));
    c.r[3].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001AA404; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 11u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001AA404; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_001AA400:
    st8((c.r[16].w[0] + 43u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001AA404:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001AA408:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001AA420:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], 0u + 300u);
    st16((c.r[4].w[0] + 340u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 342u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 332u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 333u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 347u), static_cast<std::uint8_t>(0u));
    st16((c.r[4].w[0] + 344u), static_cast<std::uint16_t>(0u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[5], 0u + 2u);
    c.budget -= 16;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_001AA504; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_001AA4B0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001AA47C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_001AA538; } }
L_001AA47C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[3], c.r[3].w[0] - 12528u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[3], c.r[3].w[0] - 12432u);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 26u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_001AA534; } }
L_001AA4B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 12400u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 12304u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st8((c.r[16].w[0] + 26u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[12] = c.r[2].w[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA4E0u); st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00152F90u; return; } if (c.pc != 0x001AA4E0u) [[unlikely]] return; }
L_001AA4E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC00000u);  if (t) { goto L_001AA4FC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_001AA534; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.budget -= 1;
L_001AA4FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[3].w[0]);  if (t) { goto L_001AA534; } }
L_001AA504:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[3], c.r[3].w[0] - 12272u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[3], c.r[3].w[0] - 12208u);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 26u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    st32((c.r[17].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 12;
L_001AA534:
    st32((c.r[17].w[0] + 92u), 0u);
    c.budget -= 1;
L_001AA538:
    st32((c.r[17].w[0] + 96u), 0u);
    st32((c.r[17].w[0] + 100u), 0u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[3], c.r[3].w[0] - 12192u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[17].w[0] + 1760u), c.f[3]);
    st32((c.r[17].w[0] + 1764u), c.f[2]);
    st32((c.r[17].w[0] + 1768u), c.f[1]);
    st32((c.r[17].w[0] + 1772u), c.f[0]);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 27u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[17].w[0] + 1260u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 28;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001AA5B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 344u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_001AA7FC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 641u)));
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AA5EC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 280u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_001AA5EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AA654; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA5FCu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_002A(c, 353u, depth + 1u); else { c.pc = 0x001AA880u; return; } if (c.pc != 0x001AA5FCu) [[unlikely]] return; }
L_001AA5FC:
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 92u)));
    c.r[5].d[0] = 0ull | 65535ull;
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 84u));
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 88u));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA654u); st32((c.r[17].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 232u, depth + 1u); else { c.pc = 0x0024B250u; return; } if (c.pc != 0x001AA654u) [[unlikely]] return; }
L_001AA654:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], 0u + 2u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_001AA808; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 529u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AA808; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 26u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AA808; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 27u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_001AA760; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001AA6D0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);  if (t) { goto L_001AA6AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 514u)));  if (t) { goto L_001AA80C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.budget -= 1;
L_001AA6AC:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA6B8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00152F90u; return; } if (c.pc != 0x001AA6B8u) [[unlikely]] return; }
L_001AA6B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AA808; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 27u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 27u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001AA808; } }
L_001AA6D0:
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3C4C0000u);  goto L_001AA700; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_001AA714; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C4C0000u);
    c.budget -= 1;
L_001AA700:
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 5;
L_001AA714:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43750000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA724u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0014(c, 156u, depth + 1u); else { c.pc = 0x001530A0u; return; } if (c.pc != 0x001AA724u) [[unlikely]] return; }
L_001AA724:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AA808; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 27u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 29598u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 27u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 532u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 531u));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001AA808; } }
L_001AA760:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 640u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AA7B4; } }
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3C4C0000u);  goto L_001AA79C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_001AA808; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C4C0000u);
    c.budget -= 1;
L_001AA79C:
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_001AA808; } }
L_001AA7B4:
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3C4C0000u);  goto L_001AA7E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_001AA808; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C4C0000u);
    c.budget -= 1;
L_001AA7E4:
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_001AA808; } }
L_001AA7FC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 24u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001AA808:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 514u)));
    c.budget -= 1;
L_001AA80C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_001AA848; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA81Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_002A(c, 365u, depth + 1u); else { c.pc = 0x001AAFC0u; return; } if (c.pc != 0x001AA81Cu) [[unlikely]] return; }
L_001AA81C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_001AA83C; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001AA844; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_001AA83C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA844u);  if (depth < kMaxDepth) unit_002A(c, 371u, depth + 1u); else { c.pc = 0x001AB0F0u; return; } if (c.pc != 0x001AA844u) [[unlikely]] return; }
L_001AA844:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_001AA848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA850u);  if (depth < kMaxDepth) unit_00A2(c, 51u, depth + 1u); else { c.pc = 0x00389810u; return; } if (c.pc != 0x001AA850u) [[unlikely]] return; }
L_001AA850:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001AA870:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001AA880:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.f[12] = c.r[2].w[0];
    set32(c.r[16], c.r[17].w[0] + 320u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA8ACu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0053(c, 33u, depth + 1u); else { c.pc = 0x0024C9F0u; return; } if (c.pc != 0x001AA8ACu) [[unlikely]] return; }
L_001AA8AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AA93C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA8BCu);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x001AA8BCu) [[unlikely]] return; }
L_001AA8BC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.r[4].d[0] = c.r[2].d[0] << 56;
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.f[3] = ld32((c.r[4].w[0]));
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    st32((c.r[17].w[0] + 1760u), c.f[3]);
    st32((c.r[17].w[0] + 1764u), c.f[2]);
    st32((c.r[17].w[0] + 1768u), c.f[1]);
    st32((c.r[17].w[0] + 1772u), c.f[0]);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 52u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 30;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001AA93C; } }
    set32(c.r[2], 0u + 300u);
    st16((c.r[16].w[0] + 24u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001AA93C:
    c.f[3] = ld32((c.r[17].w[0] + 1760u));
    c.f[2] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = ld32((c.r[17].w[0] + 1768u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[20] = fp::sub(c.f[3], c.f[2]);
    c.f[21] = fp::sub(c.f[1], c.f[0]);
    c.f[12] = c.f[20];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AA960u); c.f[13] = c.f[21];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x001AA960u) [[unlikely]] return; }
L_001AA960:
    mmi::paddub(c.r[4], c.r[2], c.r[0]);
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.r[6].d[0] = 0ull | 63488ull;
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.r[5].d[0] = c.r[4].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001AA994; } }
    c.r[1].d[0] = c.r[5].sd[0] < 2049ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull | 32768ull;  if (t) { goto L_001AA9FC; } }
L_001AA994:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_001AA9AC; } }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_001AA9BC; } }
L_001AA9AC:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_001AA9BC; } }
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 2;
L_001AA9BC:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; c.r[3].d[0] = 0ull | 32768ull;  if (t) { goto L_001AA9D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), 0u);  if (t) { goto L_001AAAE4; } }
    c.r[3].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_001AA9D4:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 16u);  if (t) { goto L_001AA9F0; } }
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_001AAAE4; } }
    set32(c.r[3], 0u - 16u);
    c.budget -= 1;
L_001AA9F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_001AAAE4; } }
    c.r[3].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_001AA9FC:
    c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001AAA78; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.r[3].d[0] = c.r[4].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] + 2u);  if (t) { goto L_001AAA28; } }
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_001AAA2C; } }
    set32(c.r[3], c.r[4].w[0] + 2u);
    c.budget -= 1;
L_001AAA28:
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 1;
L_001AAA2C:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.r[1].d[0] = 0ull | 63489ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[5].sd[0] < 2048ll ? 1ull : 0ull;  if (t) { goto L_001AAA64; } }
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001AAA60; } }
    c.r[3].d[0] = 0ull | 63488ull;
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), 0u);  if (t) { goto L_001AAAE4; } }
L_001AAA60:
    c.r[3].d[0] = c.r[5].sd[0] < 2048ll ? 1ull : 0ull;
    c.budget -= 1;
L_001AAA64:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001AAAE4; } }
    set32(c.r[3], 0u - 16u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_001AAAE4; } }
L_001AAA78:
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    c.r[1].d[0] = c.r[3].sd[0] < -63ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] - 2u);  goto L_001AAA98; }
    set32(c.r[3], 0u - 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_001AAA9C; } }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 1;
L_001AAA98:
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 1;
L_001AAA9C:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.r[3].d[0] = c.r[4].sd[0] < 2048ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = 0ull | 63489ull;  if (t) { goto L_001AAAD0; } }
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001AAACC; } }
    set32(c.r[3], 0u + 2048u);
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), 0u);  if (t) { goto L_001AAAE4; } }
L_001AAACC:
    c.r[1].d[0] = 0ull | 63489ull;
    c.budget -= 1;
L_001AAAD0:
    c.r[1].d[0] = c.r[5].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001AAAE4; } }
    set32(c.r[3], 0u + 16u);
    st32((c.r[17].w[0] + 100u), c.r[3].w[0]);
    c.budget -= 2;
L_001AAAE4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[3].d[0] = c.r[3].d[0] ^ 2ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AAB04; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 26u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_001AAB04:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001AAD60; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_001AAD0C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001AACB8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001AAB38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_001AAFA4; } }
L_001AAB38:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1764u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AABDC; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 1764u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.facc = fp::mul(c.f[20], c.f[20]);
    c.f[12] = fp::add(c.facc, fp::mul(c.f[21], c.f[21]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAB6Cu); c.f[20] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x001AAB6Cu) [[unlikely]] return; }
L_001AAB6C:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAB78u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x001AAB78u) [[unlikely]] return; }
L_001AAB78:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.f[2] = 0u;
    fpu_div(c, 0u, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);  if (t) { goto L_001AABB8; } }
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AABC0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.budget -= 1;
L_001AABB8:
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 2;
L_001AABC0:
    fpu_div(c, 20u, c.f[20], c.f[0]);
    set32(c.r[3], 0u - 5u);
    st32((c.r[17].w[0] + 52u), c.f[20]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_001AAFA0; } }
L_001AABDC:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001AAC7C; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1764u));
    c.facc = fp::mul(c.f[20], c.f[20]);
    c.f[12] = fp::add(c.facc, fp::mul(c.f[21], c.f[21]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAC08u); c.f[20] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x001AAC08u) [[unlikely]] return; }
L_001AAC08:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAC14u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x001AAC14u) [[unlikely]] return; }
L_001AAC14:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.f[2] = 0u;
    fpu_div(c, 0u, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);  if (t) { goto L_001AAC54; } }
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AAC5C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.budget -= 1;
L_001AAC54:
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 2;
L_001AAC5C:
    fpu_div(c, 20u, c.f[20], c.f[0]);
    set32(c.r[3], 0u + 5u);
    c.f[0] = c.f[20] ^ fp::kSign;
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_001AAFA0; } }
L_001AAC7C:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; c.r[3].d[0] = 0ull | 32768ull;  if (t) { goto L_001AAC94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_001AAFA0; } }
    c.r[3].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_001AAC94:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 5u);  if (t) { goto L_001AACB0; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_001AAFA0; } }
    set32(c.r[3], 0u - 5u);
    c.budget -= 1;
L_001AACB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_001AAFA0; } }
L_001AACB8:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1764u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001AACDC; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), 0u);  if (t) { goto L_001AAFA0; } }
L_001AACDC:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[5].d[0] = 0ull | 64512ull;
    c.r[1].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001AAFA0; } }
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001AAFA0; } }
    st32((c.r[17].w[0] + 80u), c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_001AAFA0; } }
L_001AAD0C:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1764u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AAD30; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), 0u);  if (t) { goto L_001AAFA0; } }
L_001AAD30:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[3].d[0] = c.r[4].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001AAFA0; } }
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001AAFA0; } }
    set32(c.r[3], 0u + 1024u);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_001AAFA0; } }
L_001AAD60:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_001AAED8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001AAE10; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001AAD8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AAFA0; } }
L_001AAD8C:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1764u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AADB4; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u - 5u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_001AAFA0; } }
L_001AADB4:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001AADD4; } }
    set32(c.r[3], 0u + 5u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_001AAFA0; } }
L_001AADD4:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; c.r[3].d[0] = 0ull | 32768ull;  if (t) { goto L_001AADEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_001AAFA0; } }
    c.r[3].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_001AADEC:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u - 5u);  if (t) { goto L_001AAE08; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_001AAFA0; } }
    set32(c.r[3], 0u - 5u);
    c.budget -= 1;
L_001AAE08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_001AAFA0; } }
L_001AAE10:
    c.f[1] = ld32((c.r[17].w[0] + 1764u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.facc = fp::mul(c.f[20], c.f[20]);
    c.f[12] = fp::add(c.facc, fp::mul(c.f[21], c.f[21]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAE28u); c.f[20] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x001AAE28u) [[unlikely]] return; }
L_001AAE28:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAE34u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x001AAE34u) [[unlikely]] return; }
L_001AAE34:
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.f[2] = 0u;
    fpu_div(c, 0u, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);  if (t) { goto L_001AAE6C; } }
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AAE74; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.budget -= 1;
L_001AAE6C:
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 2;
L_001AAE74:
    fpu_div(c, 20u, c.f[20], c.f[0]);
    st32((c.r[17].w[0] + 52u), c.f[20]);
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1764u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001AAEA8; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), 0u);  if (t) { goto L_001AAFA0; } }
L_001AAEA8:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[5].d[0] = 0ull | 64512ull;
    c.r[1].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001AAFA0; } }
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001AAFA0; } }
    st32((c.r[17].w[0] + 80u), c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_001AAFA0; } }
L_001AAED8:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1764u));
    c.facc = fp::mul(c.f[20], c.f[20]);
    c.f[12] = fp::add(c.facc, fp::mul(c.f[21], c.f[21]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAEF0u); c.f[20] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x001AAEF0u) [[unlikely]] return; }
L_001AAEF0:
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AAEFCu); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[20]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x001AAEFCu) [[unlikely]] return; }
L_001AAEFC:
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.f[2] = 0u;
    fpu_div(c, 0u, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);  if (t) { goto L_001AAF34; } }
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AAF3C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.budget -= 1;
L_001AAF34:
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 2;
L_001AAF3C:
    fpu_div(c, 20u, c.f[20], c.f[0]);
    c.f[0] = c.f[20] ^ fp::kSign;
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 1764u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AAF74; } }
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), 0u);  if (t) { goto L_001AAFA0; } }
L_001AAF74:
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.r[3].d[0] = c.r[4].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001AAFA0; } }
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001AAFA0; } }
    set32(c.r[3], 0u + 1024u);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 92u), 0u);
    c.budget -= 3;
L_001AAFA0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001AAFA4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001AAFC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 332u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_001AAFE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_001AB0E0; } }
L_001AAFE8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_001AB0D8; }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 600u);  if (t) { goto L_001AB018; } }
    set32(c.r[2], 0u + 300u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 20u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001AB01C; } }
    set32(c.r[2], 0u + 600u);
    c.budget -= 1;
L_001AB018:
    st16((c.r[16].w[0] + 20u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001AB01C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44160000u);
    set32(c.r[6], 0u + 8192u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.r[7].d[0] = 0ull | 57344ull;
    c.r[8].d[0] = 0ull | 65535ull;
    mmi::paddub(c.r[9], c.r[6], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB044u); mmi::paddub(c.r[10], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 28u, depth + 1u); else { c.pc = 0x0024C7E0u; return; } if (c.pc != 0x001AB044u) [[unlikely]] return; }
L_001AB044:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AB0DC; } }
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 14u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 14u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 14u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    st8((c.r[16].w[0] + 14u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001AB088; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB088u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 232u, depth + 1u); else { c.pc = 0x002DEAA0u; return; } if (c.pc != 0x001AB088u) [[unlikely]] return; }
L_001AB088:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 14u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 62u);
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB0A4u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (depth < kMaxDepth) unit_007E(c, 176u, depth + 1u); else { c.pc = 0x002F9760u; return; } if (c.pc != 0x001AB0A4u) [[unlikely]] return; }
L_001AB0A4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 14u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 63u);
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB0C0u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (depth < kMaxDepth) unit_007E(c, 176u, depth + 1u); else { c.pc = 0x002F9760u; return; } if (c.pc != 0x001AB0C0u) [[unlikely]] return; }
L_001AB0C0:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB0CCu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 34u, depth + 1u); else { c.pc = 0x00198540u; return; } if (c.pc != 0x001AB0CCu) [[unlikely]] return; }
L_001AB0CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AB0DC; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_001AB0D8:
    st16((c.r[16].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001AB0DC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001AB0E0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001AB0F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 333u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_001AB1EC; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001AB124; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_001AB26C; } }
L_001AB124:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 22u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_001AB1E4; }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 600u);  if (t) { goto L_001AB154; } }
    set32(c.r[2], 0u + 240u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001AB158; } }
    set32(c.r[2], 0u + 600u);
    c.budget -= 1;
L_001AB154:
    st16((c.r[16].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001AB158:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    set32(c.r[6], 0u + 14336u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.r[7].d[0] = 0ull | 51200ull;
    c.r[8].d[0] = 0ull | 65535ull;
    mmi::paddub(c.r[9], c.r[6], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB180u); mmi::paddub(c.r[10], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0053(c, 28u, depth + 1u); else { c.pc = 0x0024C7E0u; return; } if (c.pc != 0x001AB180u) [[unlikely]] return; }
L_001AB180:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AB268; } }
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001AB268; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 15u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 15u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 15u)));
    c.r[3].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001AB1D4; } }
    st8((c.r[16].w[0] + 15u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001AB1D4:
    st8((c.r[16].w[0] + 17u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 19u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001AB268; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_001AB1E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 22u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001AB268; } }
L_001AB1EC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 17u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_001AB264; }
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 17u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001AB21C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB21Cu); set32(c.r[5], ld32((c.r[16].w[0] + 36u)));  if (depth < kMaxDepth) unit_0077(c, 232u, depth + 1u); else { c.pc = 0x002DEAA0u; return; } if (c.pc != 0x001AB21Cu) [[unlikely]] return; }
L_001AB21C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 15u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 19u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB23Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_007A(c, 408u, depth + 1u); else { c.pc = 0x002EBF60u; return; } if (c.pc != 0x001AB23Cu) [[unlikely]] return; }
L_001AB23C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 19u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 19u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 19u)));
    c.r[3].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001AB268; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001AB268; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_001AB264:
    st8((c.r[16].w[0] + 17u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001AB268:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001AB26C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001AB280:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[5].w[0]), 0u);
    c.r[4].d[0] = c.r[4].d[0] | 16ull;
    st32((c.r[5].w[0] + 16u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    st32((c.r[5].w[0] + 32u), 0u);
    c.r[3].d[0] = c.r[3].d[0] | 65532ull;
    st32((c.r[5].w[0] + 48u), 0u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[5].w[0]), 0u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AB2D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 16ull;
    c.r[3].d[0] = c.r[3].d[0] | 65407ull;
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[5].w[0]), 0u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AB308:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] - 12176u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[12] = ld32((c.r[5].w[0]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB338u); c.f[12] = fp::mul(c.f[0], c.f[12]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001AB338u) [[unlikely]] return; }
L_001AB338:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001AB348:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB35Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_002A(c, 377u, depth + 1u); else { c.pc = 0x001AB308u; return; } if (c.pc != 0x001AB35Cu) [[unlikely]] return; }
L_001AB35C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001AB368:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 65535ull;  c.pc = t; return; }
L_001AB378:
    set32(c.r[2], c.r[5].w[0] - c.r[4].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 65535ull;  c.pc = t; return; }
L_001AB388:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AB3A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB3C8u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x001AB3C8u) [[unlikely]] return; }
L_001AB3C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AB44C; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[4], 0u + 19u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.f[3] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[2].w[0] + 32u), c.f[3]);
    st32((c.r[2].w[0] + 36u), c.f[2]);
    st32((c.r[2].w[0] + 40u), c.f[1]);
    st32((c.r[2].w[0] + 44u), c.f[0]);
    c.budget -= 18;
    { const bool t = c.r[16].d[0] == 0ull; st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (t) { goto L_001AB428; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st32((c.r[2].w[0] + 112u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 116u), c.r[3].w[0]);  if (t) { goto L_001AB434; } }
L_001AB428:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[2].w[0] + 112u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 116u), c.r[3].w[0]);
    c.budget -= 3;
L_001AB434:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001B0000u);
    set32(c.r[3], c.r[3].w[0] - 18896u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001B0000u);
    set32(c.r[3], c.r[3].w[0] - 17872u);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 6;
L_001AB44C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001AB460:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB488u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x001AB488u) [[unlikely]] return; }
L_001AB488:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AB528; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.f[3] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[6], c.r[3].w[0] - 12160u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[5], c.r[3].w[0] - 12156u);
    st32((c.r[2].w[0] + 32u), c.f[3]);
    st32((c.r[2].w[0] + 36u), c.f[2]);
    st32((c.r[2].w[0] + 40u), c.f[1]);
    st32((c.r[2].w[0] + 44u), c.f[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001B0000u);
    set32(c.r[4], c.r[3].w[0] - 18896u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001B0000u);
    set32(c.r[3], c.r[3].w[0] - 17872u);
    set32(c.r[7], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[2].w[0] + 112u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 10u)));
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[2].w[0] + 116u), c.f[0]);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 38;
L_001AB528:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001AB540:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[6], c.r[0]);
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB570u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x001AB570u) [[unlikely]] return; }
L_001AB570:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AB610; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    set32(c.r[6], c.r[3].w[0] - 12160u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[5], c.r[3].w[0] - 12156u);
    st32((c.r[2].w[0] + 48u), c.f[3]);
    st32((c.r[2].w[0] + 52u), c.f[2]);
    st32((c.r[2].w[0] + 56u), c.f[1]);
    st32((c.r[2].w[0] + 60u), c.f[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001B0000u);
    set32(c.r[4], c.r[3].w[0] - 18896u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001B0000u);
    set32(c.r[3], c.r[3].w[0] - 17872u);
    set32(c.r[7], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[2].w[0] + 112u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 10u)));
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[2].w[0] + 116u), c.f[0]);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 28u), c.r[17].w[0]);
    c.budget -= 38;
L_001AB610:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001AB630:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 12080u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001A8000u < 16384u) { entry = entries_002A[(t - 0x001A8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001AB650:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[7], c.r[16].w[0] + 320u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[8], c.r[7], c.r[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[4].w[0] + 332u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);  if (t) { goto L_001AB6B8; } }
L_001AB694:
    st32((c.r[7].w[0] + 8u), c.r[5].w[0]);
    st32((c.r[8].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[6].w[0] + 1u);
    st32((c.r[8].w[0] + 4u), c.r[3].w[0]);
    c.r[6].d[0] = c.r[2].d[0] << 56;
    set32(c.r[7], c.r[7].w[0] + 4u);
    set32(c.r[8], c.r[8].w[0] + 8u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 9;
L_001AB6B8:
    c.r[2].d[0] = c.r[6].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AB694u | kUnwind; return; } goto L_001AB694; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001AB6EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB6E0u); set32(c.r[4], ld32((c.r[16].w[0] + 28u)));  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001AB6E0u) [[unlikely]] return; }
L_001AB6E0:
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB6ECu); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x001AB6ECu) [[unlikely]] return; }
L_001AB6EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB6F4u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001AB6F4u) [[unlikely]] return; }
L_001AB6F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB6FCu); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x001AB6FCu) [[unlikely]] return; }
L_001AB6FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB704u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001AB704u) [[unlikely]] return; }
L_001AB704:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001AB720:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[16], c.r[17].w[0] + 320u);
    set32(c.r[3], c.r[5].w[0] + 1u);
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 11;
    { const bool t = c.r[5].sd[0] >= 0; c.r[3].d[0] = c.r[5].d[0] & 3ull;  if (t) { goto L_001AB758; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AB758; } }
    set32(c.r[3], c.r[3].w[0] - 4u);
    c.budget -= 1;
L_001AB758:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001AB8AC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AB78C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001AB78C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB794u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001AB794u) [[unlikely]] return; }
L_001AB794:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB79Cu);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x001AB79Cu) [[unlikely]] return; }
L_001AB79C:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB7ACu); set32(c.r[4], c.r[2].w[0] << 13);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001AB7ACu) [[unlikely]] return; }
L_001AB7AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB7B4u);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x001AB7B4u) [[unlikely]] return; }
L_001AB7B4:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB7C4u); set32(c.r[4], c.r[2].w[0] << 13);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001AB7C4u) [[unlikely]] return; }
L_001AB7C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB7CCu);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x001AB7CCu) [[unlikely]] return; }
L_001AB7CC:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[3], c.r[2].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 12112u);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB7ECu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x001AB7ECu) [[unlikely]] return; }
L_001AB7EC:
    c.f[12] = ld32((c.r[17].w[0] + 112u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB7FCu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x001AB7FCu) [[unlikely]] return; }
L_001AB7FC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_001AB894; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_001AB85C; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 48u);  if (t) { goto L_001AB82C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));  if (t) { goto L_001AB8B0; } }
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_001AB82C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB834u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001AB834u) [[unlikely]] return; }
L_001AB834:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB840u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_002A(c, 73u, depth + 1u); else { c.pc = 0x001A8350u; return; } if (c.pc != 0x001AB840u) [[unlikely]] return; }
L_001AB840:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB850u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0029(c, 319u, depth + 1u); else { c.pc = 0x001A7880u; return; } if (c.pc != 0x001AB850u) [[unlikely]] return; }
L_001AB850:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AB8AC; } }
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_001AB85C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB864u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001AB864u) [[unlikely]] return; }
L_001AB864:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB870u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_002A(c, 75u, depth + 1u); else { c.pc = 0x001A8410u; return; } if (c.pc != 0x001AB870u) [[unlikely]] return; }
L_001AB870:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7u)));
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[17].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB888u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0029(c, 321u, depth + 1u); else { c.pc = 0x001A7950u; return; } if (c.pc != 0x001AB888u) [[unlikely]] return; }
L_001AB888:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AB8AC; } }
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_001AB894:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB89Cu); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x001AB89Cu) [[unlikely]] return; }
L_001AB89C:
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB8ACu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_002A(c, 77u, depth + 1u); else { c.pc = 0x001A84E0u; return; } if (c.pc != 0x001AB8ACu) [[unlikely]] return; }
L_001AB8AC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.budget -= 1;
L_001AB8B0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001AB9AC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[2] = c.r[3].w[0];
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[3] = c.r[3].w[0];
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBE2A0000u);
    c.r[3].d[0] = c.r[3].d[0] | 43691ull;
    c.f[1] = c.r[3].w[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (t) { goto L_001AB980; } }
L_001AB8EC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001AB914; } }
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[5].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 4u), c.f[0]);  if (t) { goto L_001AB930; } }
L_001AB914:
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[5].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.budget -= 7;
L_001AB930:
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 8u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] + 1u);  if (t) { goto L_001AB96C; } }
    set32(c.r[3], c.r[16].w[0] + c.r[7].w[0]);
    st8((c.r[3].w[0] + 12u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.budget -= 4;
L_001AB96C:
    c.r[4].d[0] = c.r[3].d[0] << 56;
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 5;
L_001AB980:
    c.r[7].d[0] = c.r[4].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[7].sd[0] <= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AB8ECu | kUnwind; return; } goto L_001AB8EC; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 12u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001AB9AC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001AB9F0; } }
L_001AB9AC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001AB9D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB9C4u); set32(c.r[4], ld32((c.r[17].w[0] + 28u)));  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001AB9C4u) [[unlikely]] return; }
L_001AB9C4:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB9D0u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x001AB9D0u) [[unlikely]] return; }
L_001AB9D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB9D8u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001AB9D8u) [[unlikely]] return; }
L_001AB9D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB9E0u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x001AB9E0u) [[unlikely]] return; }
L_001AB9E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AB9E8u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001AB9E8u) [[unlikely]] return; }
L_001AB9E8:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001AB9F0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001ABA10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001ABA20:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_001ABA30:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[29].w[0] + 96u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 12048u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20388u), c.r[2].w[0]);
    set32(c.r[2], c.r[28].w[0] - 30408u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00450000u);
    set32(c.r[2], c.r[2].w[0] - 12064u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20384u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 120u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[16], c.r[20].w[0] + 320u);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABAA8u); st32((c.r[1].w[0] - 20352u), 0u);  if (depth < kMaxDepth) unit_001E(c, 201u, depth + 1u); else { c.pc = 0x0017BBC0u; return; } if (c.pc != 0x001ABAA8u) [[unlikely]] return; }
L_001ABAA8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[3].w[0]);
    set32(c.r[3], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[29].w[0] + 120u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 63u);
    st16((c.r[29].w[0] + 122u), static_cast<std::uint16_t>(0u));
    st16((c.r[29].w[0] + 124u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[29].w[0] + 126u), static_cast<std::uint16_t>(c.r[3].w[0]));
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[18], c.r[16], c.r[0]);
    c.budget -= 20;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[19], c.r[16], c.r[0]);  if (t) { goto L_001ABB98; } }
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_001ABAFC:
    c.r[3].d[0] = ld8((c.r[3].w[0] + 12u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] + 1u);  if (t) { goto L_001ABB84; } }
    c.f[0] = ld32((c.r[20].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 36u));
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 40u));
    st32((c.r[29].w[0] + 104u), c.f[0]);
    st32((c.r[29].w[0] + 108u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABB40u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001ABB40u) [[unlikely]] return; }
L_001ABB40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[28].w[0] - 30405u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[1].w[0] - 20372u), 0u);
    c.f[1] = ld32((c.r[20].w[0] + 112u));
    c.f[0] = ld32((c.r[19].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[1].w[0] - 20416u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 116u));
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABB80u); st32((c.r[1].w[0] - 20412u), c.f[0]);  if (depth < kMaxDepth) unit_001C(c, 51u, depth + 1u); else { c.pc = 0x001712A0u; return; } if (c.pc != 0x001ABB80u) [[unlikely]] return; }
L_001ABB80:
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001ABB84:
    c.r[17].d[0] = c.r[3].d[0] << 56;
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 5;
L_001ABB98:
    c.r[3].d[0] = c.r[17].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    if (c.r[3].sd[0] <= 0) { set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001ABAFCu | kUnwind; return; } goto L_001ABAFC; }
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001ABBD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABBE0u);  if (depth < kMaxDepth) unit_002A(c, 438u, depth + 1u); else { c.pc = 0x001ABC60u; return; } if (c.pc != 0x001ABBE0u) [[unlikely]] return; }
L_001ABBE0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 106ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001ABC04; } }
    c.r[3].d[0] = c.r[2].d[0] & 240ull;
    set32(c.r[2], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001ABC4C; } }
L_001ABC04:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 640u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001ABC34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABC1Cu);  if (depth < kMaxDepth) unit_002A(c, 458u, depth + 1u); else { c.pc = 0x001ABFA0u; return; } if (c.pc != 0x001ABC1Cu) [[unlikely]] return; }
L_001ABC1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABC24u);  if (depth < kMaxDepth) unit_002B(c, 9u, depth + 1u); else { c.pc = 0x001AC0F0u; return; } if (c.pc != 0x001ABC24u) [[unlikely]] return; }
L_001ABC24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABC2Cu);  if (depth < kMaxDepth) unit_002C(c, 226u, depth + 1u); else { c.pc = 0x001B2510u; return; } if (c.pc != 0x001ABC2Cu) [[unlikely]] return; }
L_001ABC2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABC34u);  if (depth < kMaxDepth) unit_002B(c, 16u, depth + 1u); else { c.pc = 0x001AC260u; return; } if (c.pc != 0x001ABC34u) [[unlikely]] return; }
L_001ABC34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABC3Cu);  if (depth < kMaxDepth) unit_002B(c, 24u, depth + 1u); else { c.pc = 0x001AC3D0u; return; } if (c.pc != 0x001ABC3Cu) [[unlikely]] return; }
L_001ABC3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABC44u);  if (depth < kMaxDepth) unit_002B(c, 30u, depth + 1u); else { c.pc = 0x001AC580u; return; } if (c.pc != 0x001ABC44u) [[unlikely]] return; }
L_001ABC44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABC4Cu);  if (depth < kMaxDepth) unit_002C(c, 262u, depth + 1u); else { c.pc = 0x001B2B60u; return; } if (c.pc != 0x001ABC4Cu) [[unlikely]] return; }
L_001ABC4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABC54u);  if (depth < kMaxDepth) unit_002A(c, 441u, depth + 1u); else { c.pc = 0x001ABCF0u; return; } if (c.pc != 0x001ABC54u) [[unlikely]] return; }
L_001ABC54:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001ABC60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[16], c.r[3].w[0] + 26144u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[18], c.r[3].w[0] - 28672u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 10;
L_001ABC88:
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_001ABCBC; }
    set32(c.r[3], ld32((c.r[16].w[0] + 632u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001ABCB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABCACu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 19u, depth + 1u); else { c.pc = 0x003045C0u; return; } if (c.pc != 0x001ABCACu) [[unlikely]] return; }
L_001ABCAC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 514u)));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001ABCB8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001ABCBC:
    c.r[3].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 8448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001ABC88u | kUnwind; return; } goto L_001ABC88; } }
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001ABCF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[16], c.r[3].w[0] + 26144u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 7;
L_001ABD0C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_001ABF7C; }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_001ABE0C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001ABDA8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001ABD44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));  if (t) { goto L_001ABE34; } }
L_001ABD44:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 578u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001ABE30; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001ABE30; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 16384ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001ABE30; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ABD94; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 596u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABD8Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0091(c, 62u, depth + 1u); else { c.pc = 0x00344A20u; return; } if (c.pc != 0x001ABD8Cu) [[unlikely]] return; }
L_001ABD8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ABE30; } }
L_001ABD94:
    set32(c.r[5], ld32((c.r[16].w[0] + 596u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABDA0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0072(c, 106u, depth + 1u); else { c.pc = 0x002C8F30u; return; } if (c.pc != 0x001ABDA0u) [[unlikely]] return; }
L_001ABDA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ABE30; } }
L_001ABDA8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 578u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001ABE30; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001ABE30; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 16384ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001ABE30; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ABDF8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 596u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABDF0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0085(c, 80u, depth + 1u); else { c.pc = 0x00314790u; return; } if (c.pc != 0x001ABDF0u) [[unlikely]] return; }
L_001ABDF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ABE30; } }
L_001ABDF8:
    set32(c.r[5], ld32((c.r[16].w[0] + 596u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABE04u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 42u, depth + 1u); else { c.pc = 0x002645F0u; return; } if (c.pc != 0x001ABE04u) [[unlikely]] return; }
L_001ABE04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ABE30; } }
L_001ABE0C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001ABE30; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 578u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001ABE30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABE30u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0045(c, 173u, depth + 1u); else { c.pc = 0x00216F80u; return; } if (c.pc != 0x001ABE30u) [[unlikely]] return; }
L_001ABE30:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 1;
L_001ABE34:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 369u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001ABF18; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 530u));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[29].w[0] + 48u);  if (t) { goto L_001ABE80; } }
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABE60u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0046(c, 56u, depth + 1u); else { c.pc = 0x00219880u; return; } if (c.pc != 0x001ABE60u) [[unlikely]] return; }
L_001ABE60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001ABED8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABE74u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 272u, depth + 1u); else { c.pc = 0x002D7D20u; return; } if (c.pc != 0x001ABE74u) [[unlikely]] return; }
L_001ABE74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));  if (t) { goto L_001ABEDC; } }
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_001ABE80:
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABE8Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0046(c, 56u, depth + 1u); else { c.pc = 0x00219880u; return; } if (c.pc != 0x001ABE8Cu) [[unlikely]] return; }
L_001ABE8C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001ABEC0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 640u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001ABEC0; } }
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABEBCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0046(c, 46u, depth + 1u); else { c.pc = 0x00219530u; return; } if (c.pc != 0x001ABEBCu) [[unlikely]] return; }
L_001ABEBC:
    c.budget -= 1;
L_001ABEC0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001ABED8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABED4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 272u, depth + 1u); else { c.pc = 0x002D7D20u; return; } if (c.pc != 0x001ABED4u) [[unlikely]] return; }
L_001ABED4:
    c.budget -= 1;
L_001ABED8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 1;
L_001ABEDC:
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001ABF18; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1601u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001ABF18; } }
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABF00u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x001ABF00u) [[unlikely]] return; }
L_001ABF00:
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001ABF18; } }
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.budget -= 1;
L_001ABF18:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001ABF78; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { mmi::paddub(c.r[4], c.r[16], c.r[0]);  goto L_001ABF64; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_001ABF48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ABF78; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_001ABF48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABF50u);  if (depth < kMaxDepth) unit_0074(c, 66u, depth + 1u); else { c.pc = 0x002D0680u; return; } if (c.pc != 0x001ABF50u) [[unlikely]] return; }
L_001ABF50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABF58u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005D(c, 709u, depth + 1u); else { c.pc = 0x00276490u; return; } if (c.pc != 0x001ABF58u) [[unlikely]] return; }
L_001ABF58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ABF78; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_001ABF64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABF6Cu);  if (depth < kMaxDepth) unit_0059(c, 134u, depth + 1u); else { c.pc = 0x00265FB0u; return; } if (c.pc != 0x001ABF6Cu) [[unlikely]] return; }
L_001ABF6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ABF74u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005D(c, 709u, depth + 1u); else { c.pc = 0x00276490u; return; } if (c.pc != 0x001ABF74u) [[unlikely]] return; }
L_001ABF74:
    c.budget -= 1;
L_001ABF78:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001ABF7C:
    c.r[3].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 8448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001ABD0Cu | kUnwind; return; } goto L_001ABD0C; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001ABFA0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26476u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[3], c.r[3].w[0] - 5920u);
    mmi::paddub(c.r[20], c.r[0], c.r[0]);
    set32(c.r[4], c.r[4].w[0] << 10);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);  if (t) { [[clang::musttail]] return unit_002B(c, 8u, depth); } }
L_001ABFDC:
    set32(c.r[18], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[20], c.r[20].w[0] + 1u);  [[clang::musttail]] return unit_002B(c, 7u, depth); }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_002B(c, 6u, depth); } }
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 532u));
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    c.budget -= 3;
    [[clang::musttail]] return unit_002B(c, 1u, depth);
}

}
