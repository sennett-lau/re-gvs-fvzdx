#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_005C[4096] = {
    1, 2, 3, 0, 4, 0, 0, 0, 5, 0, 0, 6, 0, 0, 7, 0, 0, 8, 0, 0, 9, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0,
    0, 0, 12, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 19, 0, 0, 0, 20, 0, 0, 21, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0,
    0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 30,
    31, 0, 32, 0, 0, 0, 33, 0, 0, 34, 0, 0, 35, 0, 0, 36, 0, 0, 37, 0, 38, 0, 39, 0, 40, 0, 0, 0, 41, 0, 0, 42,
    0, 0, 43, 0, 0, 44, 0, 0, 45, 0, 46, 0, 0, 0, 47, 0, 0, 48, 0, 0, 49, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 0,
    52, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 55, 0, 0, 56, 0, 57, 0, 58, 0, 0, 59, 0, 60, 0, 0, 0, 61, 0, 0, 62,
    0, 0, 63, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 69, 0, 0, 70, 0, 71,
    0, 72, 0, 0, 73, 0, 74, 0, 0, 0, 75, 0, 0, 76, 0, 0, 77, 0, 0, 78, 0, 79, 0, 80, 0, 0, 81, 0, 82, 0, 0, 0,
    83, 0, 0, 84, 0, 0, 85, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 94, 0, 95, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 98, 0, 99, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 101, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 104, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 108, 0, 0,
    0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 113, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0,
    117, 0, 0, 118, 0, 0, 0, 119, 0, 120, 0, 0, 121, 0, 0, 0, 0, 122, 0, 123, 0, 124, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 130, 0, 131, 0, 132, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0,
    0, 135, 0, 0, 136, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0,
    0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 143, 0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 149, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 0, 152, 0,
    0, 0, 0, 0, 0, 0, 153, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 159, 0, 160, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0,
    0, 0, 166, 0, 167, 0, 0, 0, 168, 0, 0, 169, 0, 0, 170, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 173, 0, 0, 0, 174, 0,
    175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0,
    0, 0, 0, 180, 0, 0, 181, 0, 182, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 0, 186, 0, 187, 0, 188, 0, 0, 0, 0,
    0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 192, 0, 0, 0, 193, 0, 0, 0,
    194, 0, 0, 195, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200,
    0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0,
    0, 206, 0, 207, 0, 0, 208, 0, 0, 209, 0, 0, 210, 0, 0, 211, 0, 212, 0, 0, 0, 213, 0, 0, 214, 0, 0, 215, 0, 0, 216, 0,
    0, 217, 0, 0, 0, 218, 0, 0, 219, 0, 0, 220, 0, 0, 221, 0, 0, 222, 0, 0, 0, 223, 0, 0, 224, 0, 0, 225, 0, 0, 226, 0,
    0, 227, 0, 228, 0, 0, 0, 229, 0, 0, 230, 0, 0, 231, 0, 0, 232, 0, 0, 233, 0, 0, 0, 234, 0, 0, 235, 0, 0, 236, 0, 0,
    237, 0, 0, 238, 0, 0, 0, 239, 0, 0, 240, 0, 0, 241, 0, 242, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 246, 0, 247, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 250, 0, 0, 251, 0, 0, 0, 0, 0,
    252, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0,
    0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 261, 0, 0, 262, 0, 0, 263, 0, 0, 264, 0, 265,
    0, 0, 0, 266, 0, 0, 267, 0, 0, 268, 0, 0, 269, 0, 0, 270, 0, 271, 0, 0, 0, 272, 0, 0, 273, 0, 0, 274, 0, 275, 0, 276,
    0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0,
    0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 283, 0, 0, 0, 284, 0, 0, 285, 0, 0, 286, 0, 0,
    287, 0, 0, 288, 0, 289, 0, 0, 0, 290, 0, 0, 291, 0, 0, 292, 0, 0, 293, 0, 0, 294, 0, 0, 0, 295, 0, 0, 296, 0, 0, 297,
    0, 0, 298, 0, 0, 299, 0, 0, 0, 300, 0, 0, 301, 0, 0, 302, 0, 0, 303, 0, 0, 304, 0, 0, 0, 305, 0, 0, 306, 0, 0, 307,
    0, 0, 308, 0, 0, 309, 0, 310, 0, 0, 0, 311, 0, 0, 312, 0, 0, 313, 0, 0, 314, 0, 0, 315, 0, 0, 0, 316, 0, 0, 317, 0,
    0, 318, 0, 0, 319, 0, 0, 320, 0, 0, 0, 321, 0, 0, 322, 0, 0, 323, 0, 0, 324, 0, 0, 325, 0, 0, 0, 326, 0, 0, 327, 0,
    0, 328, 0, 329, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 333, 0,
    334, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 340, 0, 0, 0, 341, 0, 342, 0, 0,
    0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0,
    0, 347, 0, 0, 348, 0, 0, 0, 0, 0, 0, 349, 0, 0, 350, 0, 0, 351, 0, 0, 352, 0, 0, 353, 0, 354, 0, 0, 0, 355, 0, 0,
    356, 0, 0, 357, 0, 0, 358, 0, 0, 359, 0, 0, 0, 360, 0, 0, 361, 0, 0, 362, 0, 0, 363, 0, 0, 364, 0, 365, 0, 0, 0, 366,
    0, 0, 367, 0, 0, 368, 0, 0, 369, 0, 0, 370, 0, 0, 0, 371, 0, 0, 372, 0, 0, 373, 0, 374, 0, 375, 0, 0, 0, 0, 0, 0,
    376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 379, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 382,
    0, 0, 383, 0, 0, 0, 0, 0, 384, 0, 0, 385, 0, 0, 0, 386, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 389, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 392, 0, 0, 393, 0, 0, 0, 0, 0, 0, 394,
    0, 0, 395, 0, 0, 396, 0, 0, 397, 0, 0, 398, 0, 399, 0, 0, 0, 400, 0, 0, 401, 0, 0, 402, 0, 0, 403, 0, 0, 404, 0, 0,
    0, 405, 0, 0, 406, 0, 0, 407, 0, 0, 408, 0, 0, 409, 0, 0, 0, 410, 0, 0, 411, 0, 0, 412, 0, 0, 413, 0, 0, 414, 0, 415,
    0, 0, 0, 416, 0, 0, 417, 0, 0, 418, 0, 0, 419, 0, 0, 420, 0, 0, 0, 421, 0, 0, 422, 0, 0, 423, 0, 0, 424, 0, 0, 425,
    0, 0, 0, 426, 0, 0, 427, 0, 0, 428, 0, 429, 0, 430, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432,
    0, 0, 0, 0, 0, 0, 433, 0, 434, 0, 0, 0, 435, 0, 0, 436, 0, 0, 437, 0, 0, 438, 0, 0, 0, 0, 0, 439, 0, 0, 440, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 444, 0, 0,
    445, 0, 0, 0, 446, 0, 0, 447, 0, 0, 448, 0, 0, 449, 0, 0, 450, 0, 0, 0, 451, 0, 0, 452, 0, 0, 453, 0, 0, 454, 0, 0,
    455, 0, 456, 0, 0, 0, 457, 0, 0, 458, 0, 0, 459, 0, 0, 460, 0, 0, 461, 0, 0, 0, 462, 0, 0, 463, 0, 0, 464, 0, 0, 465,
    0, 0, 466, 0, 0, 0, 467, 0, 0, 468, 0, 0, 469, 0, 0, 470, 0, 0, 471, 0, 472, 0, 0, 0, 473, 0, 0, 474, 0, 0, 475, 0,
    0, 476, 0, 0, 477, 0, 0, 0, 478, 0, 0, 479, 0, 0, 480, 0, 0, 481, 0, 0, 482, 0, 0, 0, 483, 0, 0, 484, 0, 0, 485, 0,
    486, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 490, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 493, 0, 0, 494, 0, 0, 0, 495, 0, 0, 496, 0,
    0, 497, 0, 0, 498, 0, 0, 499, 0, 0, 0, 500, 0, 0, 501, 0, 0, 502, 0, 0, 503, 0, 0, 504, 0, 505, 0, 0, 0, 0, 0, 506,
    0, 0, 0, 0, 0, 507, 0, 508, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 513, 0, 514, 0, 0, 0, 515, 0, 0, 0, 516, 0, 0, 517, 0, 0, 518, 0,
    0, 0, 0, 0, 519, 0, 0, 520, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 523,
    0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 525, 0, 0, 526, 0, 0, 0, 0, 0, 0, 527, 0, 0, 528, 0, 0, 529, 0, 0, 530, 0,
    0, 531, 0, 532, 0, 0, 0, 533, 0, 0, 534, 0, 0, 535, 0, 0, 536, 0, 0, 537, 0, 538, 0, 0, 0, 539, 0, 0, 540, 0, 0, 541,
    0, 0, 542, 0, 0, 543, 0, 544, 0, 0, 0, 545, 0, 0, 546, 0, 0, 547, 0, 0, 548, 0, 0, 549, 0, 550, 0, 0, 0, 551, 0, 0,
    552, 0, 0, 553, 0, 0, 554, 0, 0, 555, 0, 556, 0, 0, 0, 557, 0, 0, 558, 0, 0, 559, 0, 0, 560, 0, 0, 561, 0, 562, 0, 0,
    0, 563, 0, 0, 564, 0, 0, 565, 0, 0, 566, 0, 0, 567, 0, 568, 0, 0, 0, 569, 0, 0, 570, 0, 0, 571, 0, 0, 572, 0, 0, 573,
    0, 574, 0, 0, 0, 575, 0, 0, 576, 0, 0, 577, 0, 578, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 581, 0, 0, 0, 0, 0, 0, 582, 0, 583, 0, 0, 0, 584, 0, 0, 0, 585, 0, 0, 586, 0, 0, 587, 0, 0, 0, 0, 0,
    588, 0, 0, 589, 0, 0, 0, 590, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 0, 593, 0, 0,
    0, 0, 0, 594, 0, 0, 0, 0, 0, 595, 0, 0, 596, 0, 597, 0, 598, 0, 0, 0, 0, 599, 0, 0, 600, 0, 0, 0, 601, 0, 0, 602,
    0, 0, 603, 0, 0, 604, 0, 0, 605, 0, 606, 0, 0, 0, 607, 0, 0, 608, 0, 0, 609, 0, 0, 610, 0, 0, 611, 0, 612, 0, 0, 0,
    613, 0, 0, 614, 0, 0, 615, 0, 0, 616, 0, 0, 617, 0, 618, 0, 0, 0, 619, 0, 0, 620, 0, 0, 621, 0, 0, 622, 0, 0, 623, 0,
    624, 0, 0, 0, 625, 0, 0, 626, 0, 0, 627, 0, 0, 628, 0, 0, 629, 0, 0, 0, 630, 0, 0, 631, 0, 0, 632, 0, 633, 0, 634, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 635, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 637, 0, 638, 0, 0, 0,
    639, 0, 0, 0, 640, 0, 0, 641, 0, 0, 642, 0, 0, 0, 0, 0, 643, 0, 0, 644, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 646, 0, 0, 0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 649, 0, 0, 650, 0, 0, 0, 651, 0,
    0, 0, 652, 0, 653, 0, 0, 654, 0, 0, 655, 0, 0, 656, 0, 0, 657, 0, 658, 0, 0, 0, 659, 0, 0, 660, 0, 0, 661, 0, 0, 662,
    0, 0, 663, 0, 664, 0, 0, 0, 665, 0, 0, 666, 0, 0, 667, 0, 0, 668, 0, 0, 669, 0, 670, 0, 0, 0, 671, 0, 0, 672, 0, 0,
    673, 0, 0, 674, 0, 0, 675, 0, 676, 0, 0, 0, 677, 0, 0, 678, 0, 0, 679, 0, 0, 680, 0, 0, 681, 0, 0, 0, 682, 0, 0, 683,
    0, 0, 684, 0, 0, 685, 0, 0, 686, 0, 687, 0, 0, 0, 688, 0, 0, 689, 0, 0, 690, 0, 0, 691, 0, 0, 692, 0, 693, 0, 0, 0,
    694, 0, 0, 695, 0, 0, 696, 0, 0, 697, 0, 0, 698, 0, 699, 0, 0, 0, 700, 0, 0, 701, 0, 0, 702, 0, 0, 703, 0, 0, 704, 0,
    0, 0, 705, 0, 0, 706, 0, 0, 707, 0, 0, 708, 0, 0, 709, 0, 710, 0, 0, 0, 711, 0, 0, 712, 0, 0, 713, 0, 0, 714, 0, 0,
    715, 0, 716, 0, 0, 0, 717, 0, 0, 718, 0, 0, 719, 0, 0, 720, 0, 0, 721, 0, 722, 0, 0, 0, 723, 0, 0, 724, 0, 0, 725, 0,
    726, 0, 727, 0, 0, 0, 0, 0, 0, 0, 0, 0, 728, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 729, 0, 0, 0, 0, 0, 0, 730, 0,
    731, 0, 0, 0, 732, 0, 0, 0, 733, 0, 0, 734, 0, 0, 735, 0, 0, 0, 0, 0, 736, 0, 0, 737, 0, 0, 0, 738, 0, 739, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 740, 0, 0, 0, 0, 0, 0, 0, 741, 0, 0, 0, 0, 0, 742, 0, 0, 0, 0, 0, 743, 0, 0,
    744, 0, 745, 0, 746, 0, 0, 0, 0, 747, 0, 0, 0, 748, 0, 0, 749, 0, 0, 750, 0, 0, 751, 0, 0, 752, 0, 753, 0, 0, 0, 754,
    0, 0, 755, 0, 0, 756, 0, 0, 757, 0, 0, 758, 0, 759, 0, 0, 0, 760, 0, 0, 761, 0, 0, 762, 0, 0, 763, 0, 0, 764, 0, 765,
    0, 0, 0, 766, 0, 0, 767, 0, 0, 768, 0, 0, 769, 0, 0, 770, 0, 0, 0, 771, 0, 0, 772, 0, 0, 773, 0, 774, 0, 775, 0, 0,
    0, 0, 0, 0, 776, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 777, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 778, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 779, 0, 0, 0, 780, 0, 781, 0, 782, 0, 0, 783, 0, 0, 784, 0, 0, 0, 785, 0, 0, 786, 0, 0, 787, 0, 0,
    788, 0, 0, 789, 0, 790, 0, 0, 0, 791, 0, 0, 792, 0, 0, 793, 0, 0, 794, 0, 0, 795, 0, 796, 0, 0, 0, 797, 0, 0, 798, 0,
    0, 799, 0, 0, 800, 0, 0, 801, 0, 802, 0, 0, 0, 803, 0, 0, 804, 0, 0, 805, 0, 0, 806, 0, 0, 807, 0, 808, 0, 0, 0, 809,
    0, 0, 810, 0, 0, 811, 0, 0, 812, 0, 0, 813, 0, 814, 0, 0, 0, 815, 0, 0, 816, 0, 0, 817, 0, 0, 818, 0, 0, 819, 0, 820,
    0, 0, 0, 821, 0, 0, 822, 0, 0, 823, 0, 0, 824, 0, 0, 825, 0, 826, 0, 0, 0, 827, 0, 0, 828, 0, 0, 829, 0, 0, 830, 0,
    0, 831, 0, 0, 0, 832, 0, 0, 833, 0, 0, 834, 0, 0, 835, 0, 0, 836, 0, 837, 0, 0, 0, 838, 0, 0, 839, 0, 0, 840, 0, 0,
    841, 0, 0, 842, 0, 0, 0, 843, 0, 0, 844, 0, 0, 845, 0, 0, 846, 0, 0, 847, 0, 848, 0, 0, 0, 849, 0, 0, 850, 0, 0, 851,
    0, 0, 852, 0, 0, 853, 0, 0, 0, 854, 0, 0, 855, 0, 0, 856, 0, 0, 857, 0, 0, 858, 0, 859, 0, 0, 0, 860, 0, 0, 861, 0,
    0, 862, 0, 0, 863, 0, 0, 864, 0, 0, 0, 865, 0, 0, 866, 0, 0, 867, 0, 0, 868, 0, 0, 869, 0, 870, 0, 0, 0, 871, 0, 0,
    872, 0, 0, 873, 0, 0, 874, 0, 0, 875, 0, 0, 0, 876, 0, 0, 877, 0, 0, 878, 0, 0, 879, 0, 0, 880, 0, 881, 0, 0, 0, 882,
    0, 0, 883, 0, 0, 884, 0, 0, 885, 0, 0, 886, 0, 887, 0, 0, 0, 888, 0, 0, 889, 0, 0, 890, 0, 891, 0, 892, 0, 0, 0, 0,
    0, 0, 0, 0, 893, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 894, 0, 0, 0, 0, 0, 0, 0, 0, 0, 895, 0, 0, 0, 896, 0, 897,
    0, 898, 0, 0, 899, 0, 0, 900, 0, 0, 0, 901, 0, 0, 902, 0, 0, 903, 0, 0, 904, 0, 0, 905, 0, 906, 0, 0, 0, 907, 0, 0,
    908, 0, 0, 909, 0, 910, 0, 911, 0, 0, 0, 0, 0, 0, 0, 0, 912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 913, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 914, 0, 0, 0, 915, 0, 916, 0, 917, 0, 0, 918, 0, 0, 919, 0, 0, 0, 920, 0, 0, 921, 0, 0, 922, 0, 0,
    923, 0, 0, 924, 0, 0, 0, 925, 0, 0, 926, 0, 0, 927, 0, 0, 928, 0, 0, 929, 0, 930, 0, 0, 0, 931, 0, 0, 932, 0, 0, 933,
    0, 0, 934, 0, 0, 935, 0, 0, 0, 936, 0, 0, 937, 0, 0, 938, 0, 0, 939, 0, 0, 940, 0, 941, 0, 0, 0, 942, 0, 0, 943, 0,
    0, 944, 0, 0, 945, 0, 0, 946, 0, 0, 0, 947, 0, 0, 948, 0, 0, 949, 0, 950, 0, 951, 0, 0, 0, 0, 0, 0, 952, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 953, 0, 0, 0, 0, 0, 0, 0, 0, 0, 954, 0, 0, 0, 955, 0, 956, 0, 957, 0, 0, 958, 0, 0, 959,
    0, 0, 0, 960, 0, 0, 961, 0, 0, 962, 0, 0, 963, 0, 0, 964, 0, 965, 0, 0, 0, 966, 0, 0, 967, 0, 0, 968, 0, 0, 969, 0,
    0, 970, 0, 971, 0, 0, 0, 972, 0, 0, 973, 0, 0, 974, 0, 0, 975, 0, 0, 976, 0, 977, 0, 0, 0, 978, 0, 0, 979, 0, 0, 980,
    0, 0, 981, 0, 0, 982, 0, 0, 0, 983, 0, 0, 984, 0, 0, 985, 0, 0, 986, 0, 0, 987, 0, 988, 0, 0, 0, 989, 0, 0, 990, 0,
    0, 991, 0, 0, 992, 0, 0, 993, 0, 994, 0, 0, 0, 995, 0, 0, 996, 0, 0, 997, 0, 0, 998, 0, 0, 999, 0, 1000, 0, 0, 0, 1001,
    0, 0, 1002, 0, 0, 1003, 0, 0, 1004, 0, 0, 1005, 0, 0, 0, 1006, 0, 0, 1007, 0, 0, 1008, 0, 1009, 0, 1010, 0, 0, 0, 0, 0, 0,
    1011, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1012, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1013, 0, 0, 0, 1014, 0, 1015, 0, 1016, 0, 0,
    1017, 0, 0, 1018, 0, 0, 0, 1019, 0, 0, 1020, 0, 0, 1021, 0, 0, 1022, 0, 0, 1023, 0, 0, 0, 1024, 0, 0, 1025, 0, 0, 1026, 0, 0,
    1027, 0, 0, 1028, 0, 1029, 0, 0, 0, 1030, 0, 0, 1031, 0, 0, 1032, 0, 0, 1033, 0, 0, 1034, 0, 0, 0, 1035, 0, 0, 1036, 0, 0, 1037,
};

void unit_005C(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00270000;
    case 2u: goto L_00270004;
    case 3u: goto L_00270008;
    case 4u: goto L_00270010;
    case 5u: goto L_00270020;
    case 6u: goto L_0027002C;
    case 7u: goto L_00270038;
    case 8u: goto L_00270044;
    case 9u: goto L_00270050;
    case 10u: goto L_00270058;
    case 11u: goto L_00270070;
    case 12u: goto L_00270088;
    case 13u: goto L_00270090;
    case 14u: goto L_002700A8;
    case 15u: goto L_002700C0;
    case 16u: goto L_002700E0;
    case 17u: goto L_0027010C;
    case 18u: goto L_00270134;
    case 19u: goto L_00270138;
    case 20u: goto L_00270148;
    case 21u: goto L_00270154;
    case 22u: goto L_00270160;
    case 23u: goto L_0027016C;
    case 24u: goto L_00270184;
    case 25u: goto L_00270190;
    case 26u: goto L_002701B4;
    case 27u: goto L_002701CC;
    case 28u: goto L_002701E4;
    case 29u: goto L_002701F0;
    case 30u: goto L_002701FC;
    case 31u: goto L_00270200;
    case 32u: goto L_00270208;
    case 33u: goto L_00270218;
    case 34u: goto L_00270224;
    case 35u: goto L_00270230;
    case 36u: goto L_0027023C;
    case 37u: goto L_00270248;
    case 38u: goto L_00270250;
    case 39u: goto L_00270258;
    case 40u: goto L_00270260;
    case 41u: goto L_00270270;
    case 42u: goto L_0027027C;
    case 43u: goto L_00270288;
    case 44u: goto L_00270294;
    case 45u: goto L_002702A0;
    case 46u: goto L_002702A8;
    case 47u: goto L_002702B8;
    case 48u: goto L_002702C4;
    case 49u: goto L_002702D0;
    case 50u: goto L_002702DC;
    case 51u: goto L_002702E8;
    case 52u: goto L_00270300;
    case 53u: goto L_00270318;
    case 54u: goto L_00270324;
    case 55u: goto L_00270330;
    case 56u: goto L_0027033C;
    case 57u: goto L_00270344;
    case 58u: goto L_0027034C;
    case 59u: goto L_00270358;
    case 60u: goto L_00270360;
    case 61u: goto L_00270370;
    case 62u: goto L_0027037C;
    case 63u: goto L_00270388;
    case 64u: goto L_00270394;
    case 65u: goto L_002703A0;
    case 66u: goto L_002703B8;
    case 67u: goto L_002703D0;
    case 68u: goto L_002703DC;
    case 69u: goto L_002703E8;
    case 70u: goto L_002703F4;
    case 71u: goto L_002703FC;
    case 72u: goto L_00270404;
    case 73u: goto L_00270410;
    case 74u: goto L_00270418;
    case 75u: goto L_00270428;
    case 76u: goto L_00270434;
    case 77u: goto L_00270440;
    case 78u: goto L_0027044C;
    case 79u: goto L_00270454;
    case 80u: goto L_0027045C;
    case 81u: goto L_00270468;
    case 82u: goto L_00270470;
    case 83u: goto L_00270480;
    case 84u: goto L_0027048C;
    case 85u: goto L_00270498;
    case 86u: goto L_002704A0;
    case 87u: goto L_002704A8;
    case 88u: goto L_002704D0;
    case 89u: goto L_0027052C;
    case 90u: goto L_00270534;
    case 91u: goto L_0027053C;
    case 92u: goto L_00270544;
    case 93u: goto L_002705A4;
    case 94u: goto L_002705AC;
    case 95u: goto L_002705B4;
    case 96u: goto L_002705C4;
    case 97u: goto L_002705D0;
    case 98u: goto L_002705E4;
    case 99u: goto L_002705EC;
    case 100u: goto L_0027061C;
    case 101u: goto L_00270688;
    case 102u: goto L_00270690;
    case 103u: goto L_002706A4;
    case 104u: goto L_00270708;
    case 105u: goto L_00270710;
    case 106u: goto L_0027075C;
    case 107u: goto L_00270768;
    case 108u: goto L_00270774;
    case 109u: goto L_00270798;
    case 110u: goto L_002707AC;
    case 111u: goto L_002707B4;
    case 112u: goto L_002707C8;
    case 113u: goto L_0027089C;
    case 114u: goto L_002708A4;
    case 115u: goto L_002708D0;
    case 116u: goto L_002708E0;
    case 117u: goto L_00270900;
    case 118u: goto L_0027090C;
    case 119u: goto L_0027091C;
    case 120u: goto L_00270924;
    case 121u: goto L_00270930;
    case 122u: goto L_00270944;
    case 123u: goto L_0027094C;
    case 124u: goto L_00270954;
    case 125u: goto L_0027095C;
    case 126u: goto L_00270988;
    case 127u: goto L_00270994;
    case 128u: goto L_002709B8;
    case 129u: goto L_002709C8;
    case 130u: goto L_002709D4;
    case 131u: goto L_002709DC;
    case 132u: goto L_002709E4;
    case 133u: goto L_00270A30;
    case 134u: goto L_00270A78;
    case 135u: goto L_00270A84;
    case 136u: goto L_00270A90;
    case 137u: goto L_00270A98;
    case 138u: goto L_00270AAC;
    case 139u: goto L_00270AF8;
    case 140u: goto L_00270B04;
    case 141u: goto L_00270B38;
    case 142u: goto L_00270B44;
    case 143u: goto L_00270B50;
    case 144u: goto L_00270B60;
    case 145u: goto L_00270B68;
    case 146u: goto L_00270B9C;
    case 147u: goto L_00270BB8;
    case 148u: goto L_00270BC0;
    case 149u: goto L_00270BC8;
    case 150u: goto L_00270BD8;
    case 151u: goto L_00270BE4;
    case 152u: goto L_00270BF8;
    case 153u: goto L_00270C18;
    case 154u: goto L_00270C20;
    case 155u: goto L_00270C28;
    case 156u: goto L_00270C4C;
    case 157u: goto L_00270C5C;
    case 158u: goto L_00270CAC;
    case 159u: goto L_00270CB8;
    case 160u: goto L_00270CC0;
    case 161u: goto L_00270CC8;
    case 162u: goto L_00270D00;
    case 163u: goto L_00270D30;
    case 164u: goto L_00270D40;
    case 165u: goto L_00270D6C;
    case 166u: goto L_00270D88;
    case 167u: goto L_00270D90;
    case 168u: goto L_00270DA0;
    case 169u: goto L_00270DAC;
    case 170u: goto L_00270DB8;
    case 171u: goto L_00270DC4;
    case 172u: goto L_00270DDC;
    case 173u: goto L_00270DE8;
    case 174u: goto L_00270DF8;
    case 175u: goto L_00270E00;
    case 176u: goto L_00270E10;
    case 177u: goto L_00270E40;
    case 178u: goto L_00270E5C;
    case 179u: goto L_00270E74;
    case 180u: goto L_00270E8C;
    case 181u: goto L_00270E98;
    case 182u: goto L_00270EA0;
    case 183u: goto L_00270EA8;
    case 184u: goto L_00270EC4;
    case 185u: goto L_00270ED0;
    case 186u: goto L_00270EDC;
    case 187u: goto L_00270EE4;
    case 188u: goto L_00270EEC;
    case 189u: goto L_00270F10;
    case 190u: goto L_00270F3C;
    case 191u: goto L_00270F58;
    case 192u: goto L_00270F60;
    case 193u: goto L_00270F70;
    case 194u: goto L_00270F80;
    case 195u: goto L_00270F8C;
    case 196u: goto L_00270F98;
    case 197u: goto L_00270FB0;
    case 198u: goto L_00270FBC;
    case 199u: goto L_00270FCC;
    case 200u: goto L_00270FFC;
    case 201u: goto L_0027101C;
    case 202u: goto L_00271034;
    case 203u: goto L_0027104C;
    case 204u: goto L_00271058;
    case 205u: goto L_00271074;
    case 206u: goto L_00271084;
    case 207u: goto L_0027108C;
    case 208u: goto L_00271098;
    case 209u: goto L_002710A4;
    case 210u: goto L_002710B0;
    case 211u: goto L_002710BC;
    case 212u: goto L_002710C4;
    case 213u: goto L_002710D4;
    case 214u: goto L_002710E0;
    case 215u: goto L_002710EC;
    case 216u: goto L_002710F8;
    case 217u: goto L_00271104;
    case 218u: goto L_00271114;
    case 219u: goto L_00271120;
    case 220u: goto L_0027112C;
    case 221u: goto L_00271138;
    case 222u: goto L_00271144;
    case 223u: goto L_00271154;
    case 224u: goto L_00271160;
    case 225u: goto L_0027116C;
    case 226u: goto L_00271178;
    case 227u: goto L_00271184;
    case 228u: goto L_0027118C;
    case 229u: goto L_0027119C;
    case 230u: goto L_002711A8;
    case 231u: goto L_002711B4;
    case 232u: goto L_002711C0;
    case 233u: goto L_002711CC;
    case 234u: goto L_002711DC;
    case 235u: goto L_002711E8;
    case 236u: goto L_002711F4;
    case 237u: goto L_00271200;
    case 238u: goto L_0027120C;
    case 239u: goto L_0027121C;
    case 240u: goto L_00271228;
    case 241u: goto L_00271234;
    case 242u: goto L_0027123C;
    case 243u: goto L_00271244;
    case 244u: goto L_00271260;
    case 245u: goto L_0027128C;
    case 246u: goto L_002712A8;
    case 247u: goto L_002712B0;
    case 248u: goto L_002712C0;
    case 249u: goto L_002712D0;
    case 250u: goto L_002712DC;
    case 251u: goto L_002712E8;
    case 252u: goto L_00271300;
    case 253u: goto L_0027130C;
    case 254u: goto L_0027131C;
    case 255u: goto L_0027134C;
    case 256u: goto L_0027136C;
    case 257u: goto L_00271384;
    case 258u: goto L_0027139C;
    case 259u: goto L_002713A8;
    case 260u: goto L_002713C4;
    case 261u: goto L_002713D0;
    case 262u: goto L_002713DC;
    case 263u: goto L_002713E8;
    case 264u: goto L_002713F4;
    case 265u: goto L_002713FC;
    case 266u: goto L_0027140C;
    case 267u: goto L_00271418;
    case 268u: goto L_00271424;
    case 269u: goto L_00271430;
    case 270u: goto L_0027143C;
    case 271u: goto L_00271444;
    case 272u: goto L_00271454;
    case 273u: goto L_00271460;
    case 274u: goto L_0027146C;
    case 275u: goto L_00271474;
    case 276u: goto L_0027147C;
    case 277u: goto L_002714A0;
    case 278u: goto L_002714CC;
    case 279u: goto L_002714F4;
    case 280u: goto L_00271510;
    case 281u: goto L_00271528;
    case 282u: goto L_00271540;
    case 283u: goto L_0027154C;
    case 284u: goto L_0027155C;
    case 285u: goto L_00271568;
    case 286u: goto L_00271574;
    case 287u: goto L_00271580;
    case 288u: goto L_0027158C;
    case 289u: goto L_00271594;
    case 290u: goto L_002715A4;
    case 291u: goto L_002715B0;
    case 292u: goto L_002715BC;
    case 293u: goto L_002715C8;
    case 294u: goto L_002715D4;
    case 295u: goto L_002715E4;
    case 296u: goto L_002715F0;
    case 297u: goto L_002715FC;
    case 298u: goto L_00271608;
    case 299u: goto L_00271614;
    case 300u: goto L_00271624;
    case 301u: goto L_00271630;
    case 302u: goto L_0027163C;
    case 303u: goto L_00271648;
    case 304u: goto L_00271654;
    case 305u: goto L_00271664;
    case 306u: goto L_00271670;
    case 307u: goto L_0027167C;
    case 308u: goto L_00271688;
    case 309u: goto L_00271694;
    case 310u: goto L_0027169C;
    case 311u: goto L_002716AC;
    case 312u: goto L_002716B8;
    case 313u: goto L_002716C4;
    case 314u: goto L_002716D0;
    case 315u: goto L_002716DC;
    case 316u: goto L_002716EC;
    case 317u: goto L_002716F8;
    case 318u: goto L_00271704;
    case 319u: goto L_00271710;
    case 320u: goto L_0027171C;
    case 321u: goto L_0027172C;
    case 322u: goto L_00271738;
    case 323u: goto L_00271744;
    case 324u: goto L_00271750;
    case 325u: goto L_0027175C;
    case 326u: goto L_0027176C;
    case 327u: goto L_00271778;
    case 328u: goto L_00271784;
    case 329u: goto L_0027178C;
    case 330u: goto L_00271794;
    case 331u: goto L_002717B0;
    case 332u: goto L_002717DC;
    case 333u: goto L_002717F8;
    case 334u: goto L_00271800;
    case 335u: goto L_00271810;
    case 336u: goto L_00271820;
    case 337u: goto L_0027182C;
    case 338u: goto L_00271838;
    case 339u: goto L_00271850;
    case 340u: goto L_0027185C;
    case 341u: goto L_0027186C;
    case 342u: goto L_00271874;
    case 343u: goto L_00271884;
    case 344u: goto L_002718B4;
    case 345u: goto L_002718D4;
    case 346u: goto L_002718EC;
    case 347u: goto L_00271904;
    case 348u: goto L_00271910;
    case 349u: goto L_0027192C;
    case 350u: goto L_00271938;
    case 351u: goto L_00271944;
    case 352u: goto L_00271950;
    case 353u: goto L_0027195C;
    case 354u: goto L_00271964;
    case 355u: goto L_00271974;
    case 356u: goto L_00271980;
    case 357u: goto L_0027198C;
    case 358u: goto L_00271998;
    case 359u: goto L_002719A4;
    case 360u: goto L_002719B4;
    case 361u: goto L_002719C0;
    case 362u: goto L_002719CC;
    case 363u: goto L_002719D8;
    case 364u: goto L_002719E4;
    case 365u: goto L_002719EC;
    case 366u: goto L_002719FC;
    case 367u: goto L_00271A08;
    case 368u: goto L_00271A14;
    case 369u: goto L_00271A20;
    case 370u: goto L_00271A2C;
    case 371u: goto L_00271A3C;
    case 372u: goto L_00271A48;
    case 373u: goto L_00271A54;
    case 374u: goto L_00271A5C;
    case 375u: goto L_00271A64;
    case 376u: goto L_00271A80;
    case 377u: goto L_00271AAC;
    case 378u: goto L_00271AC8;
    case 379u: goto L_00271AD0;
    case 380u: goto L_00271AE0;
    case 381u: goto L_00271AF0;
    case 382u: goto L_00271AFC;
    case 383u: goto L_00271B08;
    case 384u: goto L_00271B20;
    case 385u: goto L_00271B2C;
    case 386u: goto L_00271B3C;
    case 387u: goto L_00271B44;
    case 388u: goto L_00271B54;
    case 389u: goto L_00271B84;
    case 390u: goto L_00271BA4;
    case 391u: goto L_00271BBC;
    case 392u: goto L_00271BD4;
    case 393u: goto L_00271BE0;
    case 394u: goto L_00271BFC;
    case 395u: goto L_00271C08;
    case 396u: goto L_00271C14;
    case 397u: goto L_00271C20;
    case 398u: goto L_00271C2C;
    case 399u: goto L_00271C34;
    case 400u: goto L_00271C44;
    case 401u: goto L_00271C50;
    case 402u: goto L_00271C5C;
    case 403u: goto L_00271C68;
    case 404u: goto L_00271C74;
    case 405u: goto L_00271C84;
    case 406u: goto L_00271C90;
    case 407u: goto L_00271C9C;
    case 408u: goto L_00271CA8;
    case 409u: goto L_00271CB4;
    case 410u: goto L_00271CC4;
    case 411u: goto L_00271CD0;
    case 412u: goto L_00271CDC;
    case 413u: goto L_00271CE8;
    case 414u: goto L_00271CF4;
    case 415u: goto L_00271CFC;
    case 416u: goto L_00271D0C;
    case 417u: goto L_00271D18;
    case 418u: goto L_00271D24;
    case 419u: goto L_00271D30;
    case 420u: goto L_00271D3C;
    case 421u: goto L_00271D4C;
    case 422u: goto L_00271D58;
    case 423u: goto L_00271D64;
    case 424u: goto L_00271D70;
    case 425u: goto L_00271D7C;
    case 426u: goto L_00271D8C;
    case 427u: goto L_00271D98;
    case 428u: goto L_00271DA4;
    case 429u: goto L_00271DAC;
    case 430u: goto L_00271DB4;
    case 431u: goto L_00271DD0;
    case 432u: goto L_00271DFC;
    case 433u: goto L_00271E18;
    case 434u: goto L_00271E20;
    case 435u: goto L_00271E30;
    case 436u: goto L_00271E3C;
    case 437u: goto L_00271E48;
    case 438u: goto L_00271E54;
    case 439u: goto L_00271E6C;
    case 440u: goto L_00271E78;
    case 441u: goto L_00271EA8;
    case 442u: goto L_00271EC4;
    case 443u: goto L_00271EDC;
    case 444u: goto L_00271EF4;
    case 445u: goto L_00271F00;
    case 446u: goto L_00271F10;
    case 447u: goto L_00271F1C;
    case 448u: goto L_00271F28;
    case 449u: goto L_00271F34;
    case 450u: goto L_00271F40;
    case 451u: goto L_00271F50;
    case 452u: goto L_00271F5C;
    case 453u: goto L_00271F68;
    case 454u: goto L_00271F74;
    case 455u: goto L_00271F80;
    case 456u: goto L_00271F88;
    case 457u: goto L_00271F98;
    case 458u: goto L_00271FA4;
    case 459u: goto L_00271FB0;
    case 460u: goto L_00271FBC;
    case 461u: goto L_00271FC8;
    case 462u: goto L_00271FD8;
    case 463u: goto L_00271FE4;
    case 464u: goto L_00271FF0;
    case 465u: goto L_00271FFC;
    case 466u: goto L_00272008;
    case 467u: goto L_00272018;
    case 468u: goto L_00272024;
    case 469u: goto L_00272030;
    case 470u: goto L_0027203C;
    case 471u: goto L_00272048;
    case 472u: goto L_00272050;
    case 473u: goto L_00272060;
    case 474u: goto L_0027206C;
    case 475u: goto L_00272078;
    case 476u: goto L_00272084;
    case 477u: goto L_00272090;
    case 478u: goto L_002720A0;
    case 479u: goto L_002720AC;
    case 480u: goto L_002720B8;
    case 481u: goto L_002720C4;
    case 482u: goto L_002720D0;
    case 483u: goto L_002720E0;
    case 484u: goto L_002720EC;
    case 485u: goto L_002720F8;
    case 486u: goto L_00272100;
    case 487u: goto L_00272108;
    case 488u: goto L_00272130;
    case 489u: goto L_0027215C;
    case 490u: goto L_00272184;
    case 491u: goto L_002721A0;
    case 492u: goto L_002721B8;
    case 493u: goto L_002721D0;
    case 494u: goto L_002721DC;
    case 495u: goto L_002721EC;
    case 496u: goto L_002721F8;
    case 497u: goto L_00272204;
    case 498u: goto L_00272210;
    case 499u: goto L_0027221C;
    case 500u: goto L_0027222C;
    case 501u: goto L_00272238;
    case 502u: goto L_00272244;
    case 503u: goto L_00272250;
    case 504u: goto L_0027225C;
    case 505u: goto L_00272264;
    case 506u: goto L_0027227C;
    case 507u: goto L_00272294;
    case 508u: goto L_0027229C;
    case 509u: goto L_002722B4;
    case 510u: goto L_002722CC;
    case 511u: goto L_002722F0;
    case 512u: goto L_0027231C;
    case 513u: goto L_00272338;
    case 514u: goto L_00272340;
    case 515u: goto L_00272350;
    case 516u: goto L_00272360;
    case 517u: goto L_0027236C;
    case 518u: goto L_00272378;
    case 519u: goto L_00272390;
    case 520u: goto L_0027239C;
    case 521u: goto L_002723AC;
    case 522u: goto L_002723DC;
    case 523u: goto L_002723FC;
    case 524u: goto L_00272414;
    case 525u: goto L_0027242C;
    case 526u: goto L_00272438;
    case 527u: goto L_00272454;
    case 528u: goto L_00272460;
    case 529u: goto L_0027246C;
    case 530u: goto L_00272478;
    case 531u: goto L_00272484;
    case 532u: goto L_0027248C;
    case 533u: goto L_0027249C;
    case 534u: goto L_002724A8;
    case 535u: goto L_002724B4;
    case 536u: goto L_002724C0;
    case 537u: goto L_002724CC;
    case 538u: goto L_002724D4;
    case 539u: goto L_002724E4;
    case 540u: goto L_002724F0;
    case 541u: goto L_002724FC;
    case 542u: goto L_00272508;
    case 543u: goto L_00272514;
    case 544u: goto L_0027251C;
    case 545u: goto L_0027252C;
    case 546u: goto L_00272538;
    case 547u: goto L_00272544;
    case 548u: goto L_00272550;
    case 549u: goto L_0027255C;
    case 550u: goto L_00272564;
    case 551u: goto L_00272574;
    case 552u: goto L_00272580;
    case 553u: goto L_0027258C;
    case 554u: goto L_00272598;
    case 555u: goto L_002725A4;
    case 556u: goto L_002725AC;
    case 557u: goto L_002725BC;
    case 558u: goto L_002725C8;
    case 559u: goto L_002725D4;
    case 560u: goto L_002725E0;
    case 561u: goto L_002725EC;
    case 562u: goto L_002725F4;
    case 563u: goto L_00272604;
    case 564u: goto L_00272610;
    case 565u: goto L_0027261C;
    case 566u: goto L_00272628;
    case 567u: goto L_00272634;
    case 568u: goto L_0027263C;
    case 569u: goto L_0027264C;
    case 570u: goto L_00272658;
    case 571u: goto L_00272664;
    case 572u: goto L_00272670;
    case 573u: goto L_0027267C;
    case 574u: goto L_00272684;
    case 575u: goto L_00272694;
    case 576u: goto L_002726A0;
    case 577u: goto L_002726AC;
    case 578u: goto L_002726B4;
    case 579u: goto L_002726BC;
    case 580u: goto L_002726E0;
    case 581u: goto L_0027270C;
    case 582u: goto L_00272728;
    case 583u: goto L_00272730;
    case 584u: goto L_00272740;
    case 585u: goto L_00272750;
    case 586u: goto L_0027275C;
    case 587u: goto L_00272768;
    case 588u: goto L_00272780;
    case 589u: goto L_0027278C;
    case 590u: goto L_0027279C;
    case 591u: goto L_002727A4;
    case 592u: goto L_002727D4;
    case 593u: goto L_002727F4;
    case 594u: goto L_0027280C;
    case 595u: goto L_00272824;
    case 596u: goto L_00272830;
    case 597u: goto L_00272838;
    case 598u: goto L_00272840;
    case 599u: goto L_00272854;
    case 600u: goto L_00272860;
    case 601u: goto L_00272870;
    case 602u: goto L_0027287C;
    case 603u: goto L_00272888;
    case 604u: goto L_00272894;
    case 605u: goto L_002728A0;
    case 606u: goto L_002728A8;
    case 607u: goto L_002728B8;
    case 608u: goto L_002728C4;
    case 609u: goto L_002728D0;
    case 610u: goto L_002728DC;
    case 611u: goto L_002728E8;
    case 612u: goto L_002728F0;
    case 613u: goto L_00272900;
    case 614u: goto L_0027290C;
    case 615u: goto L_00272918;
    case 616u: goto L_00272924;
    case 617u: goto L_00272930;
    case 618u: goto L_00272938;
    case 619u: goto L_00272948;
    case 620u: goto L_00272954;
    case 621u: goto L_00272960;
    case 622u: goto L_0027296C;
    case 623u: goto L_00272978;
    case 624u: goto L_00272980;
    case 625u: goto L_00272990;
    case 626u: goto L_0027299C;
    case 627u: goto L_002729A8;
    case 628u: goto L_002729B4;
    case 629u: goto L_002729C0;
    case 630u: goto L_002729D0;
    case 631u: goto L_002729DC;
    case 632u: goto L_002729E8;
    case 633u: goto L_002729F0;
    case 634u: goto L_002729F8;
    case 635u: goto L_00272A20;
    case 636u: goto L_00272A4C;
    case 637u: goto L_00272A68;
    case 638u: goto L_00272A70;
    case 639u: goto L_00272A80;
    case 640u: goto L_00272A90;
    case 641u: goto L_00272A9C;
    case 642u: goto L_00272AA8;
    case 643u: goto L_00272AC0;
    case 644u: goto L_00272ACC;
    case 645u: goto L_00272ADC;
    case 646u: goto L_00272B0C;
    case 647u: goto L_00272B2C;
    case 648u: goto L_00272B44;
    case 649u: goto L_00272B5C;
    case 650u: goto L_00272B68;
    case 651u: goto L_00272B78;
    case 652u: goto L_00272B88;
    case 653u: goto L_00272B90;
    case 654u: goto L_00272B9C;
    case 655u: goto L_00272BA8;
    case 656u: goto L_00272BB4;
    case 657u: goto L_00272BC0;
    case 658u: goto L_00272BC8;
    case 659u: goto L_00272BD8;
    case 660u: goto L_00272BE4;
    case 661u: goto L_00272BF0;
    case 662u: goto L_00272BFC;
    case 663u: goto L_00272C08;
    case 664u: goto L_00272C10;
    case 665u: goto L_00272C20;
    case 666u: goto L_00272C2C;
    case 667u: goto L_00272C38;
    case 668u: goto L_00272C44;
    case 669u: goto L_00272C50;
    case 670u: goto L_00272C58;
    case 671u: goto L_00272C68;
    case 672u: goto L_00272C74;
    case 673u: goto L_00272C80;
    case 674u: goto L_00272C8C;
    case 675u: goto L_00272C98;
    case 676u: goto L_00272CA0;
    case 677u: goto L_00272CB0;
    case 678u: goto L_00272CBC;
    case 679u: goto L_00272CC8;
    case 680u: goto L_00272CD4;
    case 681u: goto L_00272CE0;
    case 682u: goto L_00272CF0;
    case 683u: goto L_00272CFC;
    case 684u: goto L_00272D08;
    case 685u: goto L_00272D14;
    case 686u: goto L_00272D20;
    case 687u: goto L_00272D28;
    case 688u: goto L_00272D38;
    case 689u: goto L_00272D44;
    case 690u: goto L_00272D50;
    case 691u: goto L_00272D5C;
    case 692u: goto L_00272D68;
    case 693u: goto L_00272D70;
    case 694u: goto L_00272D80;
    case 695u: goto L_00272D8C;
    case 696u: goto L_00272D98;
    case 697u: goto L_00272DA4;
    case 698u: goto L_00272DB0;
    case 699u: goto L_00272DB8;
    case 700u: goto L_00272DC8;
    case 701u: goto L_00272DD4;
    case 702u: goto L_00272DE0;
    case 703u: goto L_00272DEC;
    case 704u: goto L_00272DF8;
    case 705u: goto L_00272E08;
    case 706u: goto L_00272E14;
    case 707u: goto L_00272E20;
    case 708u: goto L_00272E2C;
    case 709u: goto L_00272E38;
    case 710u: goto L_00272E40;
    case 711u: goto L_00272E50;
    case 712u: goto L_00272E5C;
    case 713u: goto L_00272E68;
    case 714u: goto L_00272E74;
    case 715u: goto L_00272E80;
    case 716u: goto L_00272E88;
    case 717u: goto L_00272E98;
    case 718u: goto L_00272EA4;
    case 719u: goto L_00272EB0;
    case 720u: goto L_00272EBC;
    case 721u: goto L_00272EC8;
    case 722u: goto L_00272ED0;
    case 723u: goto L_00272EE0;
    case 724u: goto L_00272EEC;
    case 725u: goto L_00272EF8;
    case 726u: goto L_00272F00;
    case 727u: goto L_00272F08;
    case 728u: goto L_00272F30;
    case 729u: goto L_00272F5C;
    case 730u: goto L_00272F78;
    case 731u: goto L_00272F80;
    case 732u: goto L_00272F90;
    case 733u: goto L_00272FA0;
    case 734u: goto L_00272FAC;
    case 735u: goto L_00272FB8;
    case 736u: goto L_00272FD0;
    case 737u: goto L_00272FDC;
    case 738u: goto L_00272FEC;
    case 739u: goto L_00272FF4;
    case 740u: goto L_00273024;
    case 741u: goto L_00273044;
    case 742u: goto L_0027305C;
    case 743u: goto L_00273074;
    case 744u: goto L_00273080;
    case 745u: goto L_00273088;
    case 746u: goto L_00273090;
    case 747u: goto L_002730A4;
    case 748u: goto L_002730B4;
    case 749u: goto L_002730C0;
    case 750u: goto L_002730CC;
    case 751u: goto L_002730D8;
    case 752u: goto L_002730E4;
    case 753u: goto L_002730EC;
    case 754u: goto L_002730FC;
    case 755u: goto L_00273108;
    case 756u: goto L_00273114;
    case 757u: goto L_00273120;
    case 758u: goto L_0027312C;
    case 759u: goto L_00273134;
    case 760u: goto L_00273144;
    case 761u: goto L_00273150;
    case 762u: goto L_0027315C;
    case 763u: goto L_00273168;
    case 764u: goto L_00273174;
    case 765u: goto L_0027317C;
    case 766u: goto L_0027318C;
    case 767u: goto L_00273198;
    case 768u: goto L_002731A4;
    case 769u: goto L_002731B0;
    case 770u: goto L_002731BC;
    case 771u: goto L_002731CC;
    case 772u: goto L_002731D8;
    case 773u: goto L_002731E4;
    case 774u: goto L_002731EC;
    case 775u: goto L_002731F4;
    case 776u: goto L_00273210;
    case 777u: goto L_00273240;
    case 778u: goto L_0027326C;
    case 779u: goto L_00273294;
    case 780u: goto L_002732A4;
    case 781u: goto L_002732AC;
    case 782u: goto L_002732B4;
    case 783u: goto L_002732C0;
    case 784u: goto L_002732CC;
    case 785u: goto L_002732DC;
    case 786u: goto L_002732E8;
    case 787u: goto L_002732F4;
    case 788u: goto L_00273300;
    case 789u: goto L_0027330C;
    case 790u: goto L_00273314;
    case 791u: goto L_00273324;
    case 792u: goto L_00273330;
    case 793u: goto L_0027333C;
    case 794u: goto L_00273348;
    case 795u: goto L_00273354;
    case 796u: goto L_0027335C;
    case 797u: goto L_0027336C;
    case 798u: goto L_00273378;
    case 799u: goto L_00273384;
    case 800u: goto L_00273390;
    case 801u: goto L_0027339C;
    case 802u: goto L_002733A4;
    case 803u: goto L_002733B4;
    case 804u: goto L_002733C0;
    case 805u: goto L_002733CC;
    case 806u: goto L_002733D8;
    case 807u: goto L_002733E4;
    case 808u: goto L_002733EC;
    case 809u: goto L_002733FC;
    case 810u: goto L_00273408;
    case 811u: goto L_00273414;
    case 812u: goto L_00273420;
    case 813u: goto L_0027342C;
    case 814u: goto L_00273434;
    case 815u: goto L_00273444;
    case 816u: goto L_00273450;
    case 817u: goto L_0027345C;
    case 818u: goto L_00273468;
    case 819u: goto L_00273474;
    case 820u: goto L_0027347C;
    case 821u: goto L_0027348C;
    case 822u: goto L_00273498;
    case 823u: goto L_002734A4;
    case 824u: goto L_002734B0;
    case 825u: goto L_002734BC;
    case 826u: goto L_002734C4;
    case 827u: goto L_002734D4;
    case 828u: goto L_002734E0;
    case 829u: goto L_002734EC;
    case 830u: goto L_002734F8;
    case 831u: goto L_00273504;
    case 832u: goto L_00273514;
    case 833u: goto L_00273520;
    case 834u: goto L_0027352C;
    case 835u: goto L_00273538;
    case 836u: goto L_00273544;
    case 837u: goto L_0027354C;
    case 838u: goto L_0027355C;
    case 839u: goto L_00273568;
    case 840u: goto L_00273574;
    case 841u: goto L_00273580;
    case 842u: goto L_0027358C;
    case 843u: goto L_0027359C;
    case 844u: goto L_002735A8;
    case 845u: goto L_002735B4;
    case 846u: goto L_002735C0;
    case 847u: goto L_002735CC;
    case 848u: goto L_002735D4;
    case 849u: goto L_002735E4;
    case 850u: goto L_002735F0;
    case 851u: goto L_002735FC;
    case 852u: goto L_00273608;
    case 853u: goto L_00273614;
    case 854u: goto L_00273624;
    case 855u: goto L_00273630;
    case 856u: goto L_0027363C;
    case 857u: goto L_00273648;
    case 858u: goto L_00273654;
    case 859u: goto L_0027365C;
    case 860u: goto L_0027366C;
    case 861u: goto L_00273678;
    case 862u: goto L_00273684;
    case 863u: goto L_00273690;
    case 864u: goto L_0027369C;
    case 865u: goto L_002736AC;
    case 866u: goto L_002736B8;
    case 867u: goto L_002736C4;
    case 868u: goto L_002736D0;
    case 869u: goto L_002736DC;
    case 870u: goto L_002736E4;
    case 871u: goto L_002736F4;
    case 872u: goto L_00273700;
    case 873u: goto L_0027370C;
    case 874u: goto L_00273718;
    case 875u: goto L_00273724;
    case 876u: goto L_00273734;
    case 877u: goto L_00273740;
    case 878u: goto L_0027374C;
    case 879u: goto L_00273758;
    case 880u: goto L_00273764;
    case 881u: goto L_0027376C;
    case 882u: goto L_0027377C;
    case 883u: goto L_00273788;
    case 884u: goto L_00273794;
    case 885u: goto L_002737A0;
    case 886u: goto L_002737AC;
    case 887u: goto L_002737B4;
    case 888u: goto L_002737C4;
    case 889u: goto L_002737D0;
    case 890u: goto L_002737DC;
    case 891u: goto L_002737E4;
    case 892u: goto L_002737EC;
    case 893u: goto L_00273810;
    case 894u: goto L_0027383C;
    case 895u: goto L_00273864;
    case 896u: goto L_00273874;
    case 897u: goto L_0027387C;
    case 898u: goto L_00273884;
    case 899u: goto L_00273890;
    case 900u: goto L_0027389C;
    case 901u: goto L_002738AC;
    case 902u: goto L_002738B8;
    case 903u: goto L_002738C4;
    case 904u: goto L_002738D0;
    case 905u: goto L_002738DC;
    case 906u: goto L_002738E4;
    case 907u: goto L_002738F4;
    case 908u: goto L_00273900;
    case 909u: goto L_0027390C;
    case 910u: goto L_00273914;
    case 911u: goto L_0027391C;
    case 912u: goto L_00273940;
    case 913u: goto L_0027396C;
    case 914u: goto L_00273994;
    case 915u: goto L_002739A4;
    case 916u: goto L_002739AC;
    case 917u: goto L_002739B4;
    case 918u: goto L_002739C0;
    case 919u: goto L_002739CC;
    case 920u: goto L_002739DC;
    case 921u: goto L_002739E8;
    case 922u: goto L_002739F4;
    case 923u: goto L_00273A00;
    case 924u: goto L_00273A0C;
    case 925u: goto L_00273A1C;
    case 926u: goto L_00273A28;
    case 927u: goto L_00273A34;
    case 928u: goto L_00273A40;
    case 929u: goto L_00273A4C;
    case 930u: goto L_00273A54;
    case 931u: goto L_00273A64;
    case 932u: goto L_00273A70;
    case 933u: goto L_00273A7C;
    case 934u: goto L_00273A88;
    case 935u: goto L_00273A94;
    case 936u: goto L_00273AA4;
    case 937u: goto L_00273AB0;
    case 938u: goto L_00273ABC;
    case 939u: goto L_00273AC8;
    case 940u: goto L_00273AD4;
    case 941u: goto L_00273ADC;
    case 942u: goto L_00273AEC;
    case 943u: goto L_00273AF8;
    case 944u: goto L_00273B04;
    case 945u: goto L_00273B10;
    case 946u: goto L_00273B1C;
    case 947u: goto L_00273B2C;
    case 948u: goto L_00273B38;
    case 949u: goto L_00273B44;
    case 950u: goto L_00273B4C;
    case 951u: goto L_00273B54;
    case 952u: goto L_00273B70;
    case 953u: goto L_00273B9C;
    case 954u: goto L_00273BC4;
    case 955u: goto L_00273BD4;
    case 956u: goto L_00273BDC;
    case 957u: goto L_00273BE4;
    case 958u: goto L_00273BF0;
    case 959u: goto L_00273BFC;
    case 960u: goto L_00273C0C;
    case 961u: goto L_00273C18;
    case 962u: goto L_00273C24;
    case 963u: goto L_00273C30;
    case 964u: goto L_00273C3C;
    case 965u: goto L_00273C44;
    case 966u: goto L_00273C54;
    case 967u: goto L_00273C60;
    case 968u: goto L_00273C6C;
    case 969u: goto L_00273C78;
    case 970u: goto L_00273C84;
    case 971u: goto L_00273C8C;
    case 972u: goto L_00273C9C;
    case 973u: goto L_00273CA8;
    case 974u: goto L_00273CB4;
    case 975u: goto L_00273CC0;
    case 976u: goto L_00273CCC;
    case 977u: goto L_00273CD4;
    case 978u: goto L_00273CE4;
    case 979u: goto L_00273CF0;
    case 980u: goto L_00273CFC;
    case 981u: goto L_00273D08;
    case 982u: goto L_00273D14;
    case 983u: goto L_00273D24;
    case 984u: goto L_00273D30;
    case 985u: goto L_00273D3C;
    case 986u: goto L_00273D48;
    case 987u: goto L_00273D54;
    case 988u: goto L_00273D5C;
    case 989u: goto L_00273D6C;
    case 990u: goto L_00273D78;
    case 991u: goto L_00273D84;
    case 992u: goto L_00273D90;
    case 993u: goto L_00273D9C;
    case 994u: goto L_00273DA4;
    case 995u: goto L_00273DB4;
    case 996u: goto L_00273DC0;
    case 997u: goto L_00273DCC;
    case 998u: goto L_00273DD8;
    case 999u: goto L_00273DE4;
    case 1000u: goto L_00273DEC;
    case 1001u: goto L_00273DFC;
    case 1002u: goto L_00273E08;
    case 1003u: goto L_00273E14;
    case 1004u: goto L_00273E20;
    case 1005u: goto L_00273E2C;
    case 1006u: goto L_00273E3C;
    case 1007u: goto L_00273E48;
    case 1008u: goto L_00273E54;
    case 1009u: goto L_00273E5C;
    case 1010u: goto L_00273E64;
    case 1011u: goto L_00273E80;
    case 1012u: goto L_00273EAC;
    case 1013u: goto L_00273ED4;
    case 1014u: goto L_00273EE4;
    case 1015u: goto L_00273EEC;
    case 1016u: goto L_00273EF4;
    case 1017u: goto L_00273F00;
    case 1018u: goto L_00273F0C;
    case 1019u: goto L_00273F1C;
    case 1020u: goto L_00273F28;
    case 1021u: goto L_00273F34;
    case 1022u: goto L_00273F40;
    case 1023u: goto L_00273F4C;
    case 1024u: goto L_00273F5C;
    case 1025u: goto L_00273F68;
    case 1026u: goto L_00273F74;
    case 1027u: goto L_00273F80;
    case 1028u: goto L_00273F8C;
    case 1029u: goto L_00273F94;
    case 1030u: goto L_00273FA4;
    case 1031u: goto L_00273FB0;
    case 1032u: goto L_00273FBC;
    case 1033u: goto L_00273FC8;
    case 1034u: goto L_00273FD4;
    case 1035u: goto L_00273FE4;
    case 1036u: goto L_00273FF0;
    case 1037u: goto L_00273FFC;
    default: bad_entry(c, 0x00270000u); return;
    }
L_00270000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270008u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00270008u) [[unlikely]] return; }
    goto L_00270008;
L_00270004:
    set32(c.r[18], c.r[4].w[0] + 64u);
    c.budget -= 1;
L_00270008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270010u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x00270010u) [[unlikely]] return; }
L_00270010:
    c.f[13] = ld32((c.r[17].w[0] + 196u));
    c.f[14] = ld32((c.r[17].w[0] + 200u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270020u); c.f[12] = ld32((c.r[17].w[0] + 192u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00270020u) [[unlikely]] return; }
L_00270020:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027002Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x0027002Cu) [[unlikely]] return; }
L_0027002C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270038u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00270038u) [[unlikely]] return; }
L_00270038:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270044u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00270044u) [[unlikely]] return; }
L_00270044:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270050u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00270050u) [[unlikely]] return; }
L_00270050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270058u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x00270058u) [[unlikely]] return; }
L_00270058:
    set32(c.r[6], c.r[17].w[0] + 208u);
    set32(c.r[8], 0u + 1u);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270070u); mmi::paddub(c.r[7], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005C(c, 88u, depth + 1u); else { c.pc = 0x002704D0u; return; } if (c.pc != 0x00270070u) [[unlikely]] return; }
L_00270070:
    set32(c.r[5], c.r[18].w[0] + 128u);
    set32(c.r[6], c.r[17].w[0] + 240u);
    set32(c.r[7], c.r[16].w[0] + 24u);
    set32(c.r[8], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270088u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_005C(c, 133u, depth + 1u); else { c.pc = 0x00270A30u; return; } if (c.pc != 0x00270088u) [[unlikely]] return; }
L_00270088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270090u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x00270090u) [[unlikely]] return; }
L_00270090:
    set32(c.r[5], c.r[18].w[0] + 192u);
    set32(c.r[6], c.r[17].w[0] + 256u);
    set32(c.r[7], c.r[16].w[0] + 36u);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002700A8u); mmi::paddub(c.r[8], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_005C(c, 88u, depth + 1u); else { c.pc = 0x002704D0u; return; } if (c.pc != 0x002700A8u) [[unlikely]] return; }
L_002700A8:
    set32(c.r[5], c.r[18].w[0] + 320u);
    set32(c.r[6], c.r[17].w[0] + 288u);
    set32(c.r[7], c.r[16].w[0] + 60u);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002700C0u); mmi::paddub(c.r[8], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_005C(c, 133u, depth + 1u); else { c.pc = 0x00270A30u; return; } if (c.pc != 0x002700C0u) [[unlikely]] return; }
L_002700C0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002700E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027010Cu); mmi::paddub(c.r[16], c.r[7], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x0027010Cu) [[unlikely]] return; }
L_0027010C:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270134u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00270134u) [[unlikely]] return; }
L_00270134:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 762u)));
    c.budget -= 1;
L_00270138:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00270198; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270148u); set32(c.r[4], c.r[19].w[0] + 8320u);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x00270148u) [[unlikely]] return; }
L_00270148:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270154u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00270154u) [[unlikely]] return; }
L_00270154:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270160u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00270160u) [[unlikely]] return; }
L_00270160:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027016Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x0027016Cu) [[unlikely]] return; }
L_0027016C:
    c.f[0] = ld32((c.r[19].w[0] + 8012u));
    c.f[12] = 0u;
    c.f[14] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270184u); c.f[13] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00270184u) [[unlikely]] return; }
L_00270184:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270190u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00270190u) [[unlikely]] return; }
L_00270190:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 7820u)));  if (t) { goto L_002701F4; } }
L_00270198:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    c.r[4].d[0] = 0ull | 65535ull;
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002701B4u); c.r[4].d[0] = c.r[2].d[0] & c.r[4].d[0];  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002701B4u) [[unlikely]] return; }
L_002701B4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002701CCu); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002701CCu) [[unlikely]] return; }
L_002701CC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002701E4u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002701E4u) [[unlikely]] return; }
L_002701E4:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002701F0u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002701F0u) [[unlikely]] return; }
L_002701F0:
    set32(c.r[2], ld32((c.r[19].w[0] + 7820u)));
    c.budget -= 1;
L_002701F4:
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270200u); c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00270200u) [[unlikely]] return; }
    goto L_00270200;
L_002701FC:
    c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 1;
L_00270200:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270208u); c.r[4].d[0] = ld16((c.r[19].w[0] + 7816u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00270208u) [[unlikely]] return; }
L_00270208:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270218u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00270218u) [[unlikely]] return; }
L_00270218:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270224u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00270224u) [[unlikely]] return; }
L_00270224:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270230u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00270230u) [[unlikely]] return; }
L_00270230:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027023Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x0027023Cu) [[unlikely]] return; }
L_0027023C:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270248u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00270248u) [[unlikely]] return; }
L_00270248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270250u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x00270250u) [[unlikely]] return; }
L_00270250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270258u); c.r[4].d[0] = ld16((c.r[19].w[0] + 7916u));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00270258u) [[unlikely]] return; }
L_00270258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270260u); c.r[4].d[0] = ld16((c.r[19].w[0] + 7912u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00270260u) [[unlikely]] return; }
L_00270260:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270270u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00270270u) [[unlikely]] return; }
L_00270270:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027027Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x0027027Cu) [[unlikely]] return; }
L_0027027C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270288u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00270288u) [[unlikely]] return; }
L_00270288:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270294u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00270294u) [[unlikely]] return; }
L_00270294:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002702A0u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002702A0u) [[unlikely]] return; }
L_002702A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002702A8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x002702A8u) [[unlikely]] return; }
L_002702A8:
    c.f[13] = ld32((c.r[17].w[0] + 52u));
    c.f[14] = ld32((c.r[17].w[0] + 56u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002702B8u); c.f[12] = ld32((c.r[17].w[0] + 48u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002702B8u) [[unlikely]] return; }
L_002702B8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002702C4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002702C4u) [[unlikely]] return; }
L_002702C4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002702D0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002702D0u) [[unlikely]] return; }
L_002702D0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002702DCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002702DCu) [[unlikely]] return; }
L_002702DC:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002702E8u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002702E8u) [[unlikely]] return; }
L_002702E8:
    set32(c.r[6], c.r[17].w[0] + 64u);
    set32(c.r[8], 0u + 3u);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270300u); mmi::paddub(c.r[7], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005C(c, 88u, depth + 1u); else { c.pc = 0x002704D0u; return; } if (c.pc != 0x00270300u) [[unlikely]] return; }
L_00270300:
    c.f[12] = ld32((c.r[17].w[0] + 96u));
    c.f[13] = ld32((c.r[17].w[0] + 100u));
    c.f[14] = ld32((c.r[17].w[0] + 104u));
    set32(c.r[18], c.r[18].w[0] + 128u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270318u); set32(c.r[16], c.r[16].w[0] + 24u);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00270318u) [[unlikely]] return; }
L_00270318:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270324u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00270324u) [[unlikely]] return; }
L_00270324:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270330u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00270330u) [[unlikely]] return; }
L_00270330:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027033Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x0027033Cu) [[unlikely]] return; }
L_0027033C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270344u); set32(c.r[4], ld32((c.r[19].w[0] + 7888u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00270344u) [[unlikely]] return; }
L_00270344:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027034Cu); set32(c.r[4], ld32((c.r[19].w[0] + 7892u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x0027034Cu) [[unlikely]] return; }
L_0027034C:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270358u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00270358u) [[unlikely]] return; }
L_00270358:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270360u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x00270360u) [[unlikely]] return; }
L_00270360:
    c.f[13] = ld32((c.r[17].w[0] + 116u));
    c.f[14] = ld32((c.r[17].w[0] + 120u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270370u); c.f[12] = ld32((c.r[17].w[0] + 112u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00270370u) [[unlikely]] return; }
L_00270370:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027037Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x0027037Cu) [[unlikely]] return; }
L_0027037C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270388u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00270388u) [[unlikely]] return; }
L_00270388:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270394u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00270394u) [[unlikely]] return; }
L_00270394:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002703A0u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002703A0u) [[unlikely]] return; }
L_002703A0:
    set32(c.r[6], c.r[17].w[0] + 128u);
    set32(c.r[8], 0u + 2u);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002703B8u); mmi::paddub(c.r[7], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005C(c, 88u, depth + 1u); else { c.pc = 0x002704D0u; return; } if (c.pc != 0x002703B8u) [[unlikely]] return; }
L_002703B8:
    c.f[12] = ld32((c.r[17].w[0] + 160u));
    c.f[13] = ld32((c.r[17].w[0] + 164u));
    c.f[14] = ld32((c.r[17].w[0] + 168u));
    set32(c.r[18], c.r[18].w[0] + 128u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002703D0u); set32(c.r[16], c.r[16].w[0] + 24u);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002703D0u) [[unlikely]] return; }
L_002703D0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002703DCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002703DCu) [[unlikely]] return; }
L_002703DC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002703E8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002703E8u) [[unlikely]] return; }
L_002703E8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002703F4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002703F4u) [[unlikely]] return; }
L_002703F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002703FCu); set32(c.r[4], ld32((c.r[19].w[0] + 7896u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002703FCu) [[unlikely]] return; }
L_002703FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270404u); set32(c.r[4], ld32((c.r[19].w[0] + 7900u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00270404u) [[unlikely]] return; }
L_00270404:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270410u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00270410u) [[unlikely]] return; }
L_00270410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270418u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x00270418u) [[unlikely]] return; }
L_00270418:
    c.f[13] = ld32((c.r[17].w[0] + 180u));
    c.f[14] = ld32((c.r[17].w[0] + 184u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270428u); c.f[12] = ld32((c.r[17].w[0] + 176u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00270428u) [[unlikely]] return; }
L_00270428:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270434u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00270434u) [[unlikely]] return; }
L_00270434:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270440u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00270440u) [[unlikely]] return; }
L_00270440:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027044Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x0027044Cu) [[unlikely]] return; }
L_0027044C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270454u); set32(c.r[4], ld32((c.r[19].w[0] + 7908u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00270454u) [[unlikely]] return; }
L_00270454:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027045Cu); set32(c.r[4], ld32((c.r[19].w[0] + 7904u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x0027045Cu) [[unlikely]] return; }
L_0027045C:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270468u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00270468u) [[unlikely]] return; }
L_00270468:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270470u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x00270470u) [[unlikely]] return; }
L_00270470:
    c.f[13] = ld32((c.r[17].w[0] + 196u));
    c.f[14] = ld32((c.r[17].w[0] + 200u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270480u); c.f[12] = ld32((c.r[17].w[0] + 192u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00270480u) [[unlikely]] return; }
L_00270480:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027048Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x0027048Cu) [[unlikely]] return; }
L_0027048C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270498u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00270498u) [[unlikely]] return; }
L_00270498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002704A0u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002704A0u) [[unlikely]] return; }
L_002704A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002704A8u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002704A8u) [[unlikely]] return; }
L_002704A8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002704D0:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
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
    c.f[12] = ld32((c.r[6].w[0]));
    c.f[13] = ld32((c.r[6].w[0] + 4u));
    c.f[14] = ld32((c.r[6].w[0] + 8u));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[21], c.r[5], c.r[0]);
    mmi::paddub(c.r[19], c.r[8], c.r[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027052Cu); mmi::paddub(c.r[20], c.r[6], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0027052Cu) [[unlikely]] return; }
L_0027052C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270534u); mmi::paddub(c.r[4], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00270534u) [[unlikely]] return; }
L_00270534:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027053Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x0027053Cu) [[unlikely]] return; }
L_0027053C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270544u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x00270544u) [[unlikely]] return; }
L_00270544:
    set32(c.r[16], c.r[19].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[17].w[0]);
    c.f[3] = ld32((c.r[2].w[0] + 5088u));
    c.f[2] = ld32((c.r[2].w[0] + 5092u));
    c.f[1] = ld32((c.r[2].w[0] + 5096u));
    c.f[0] = ld32((c.r[2].w[0] + 5100u));
    set32(c.r[3], c.r[29].w[0] + 192u);
    st32((c.r[3].w[0]), c.f[3]);
    st32((c.r[3].w[0] + 4u), c.f[2]);
    st32((c.r[3].w[0] + 8u), c.f[1]);
    set32(c.r[2], 0u + 2u);
    c.budget -= 13;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; st32((c.r[3].w[0] + 12u), c.f[0]);  if (t) { goto L_00270580; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[17].w[0] + 7924u));  if (t) { goto L_00270598; } }
L_00270580:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_00270594; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[17].w[0] + 7920u));  if (t) { goto L_00270598; } }
L_00270594:
    c.f[20] = 0u;
    c.budget -= 1;
L_00270598:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002705A4u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 25u, depth + 1u); else { c.pc = 0x0013CB10u; return; } if (c.pc != 0x002705A4u) [[unlikely]] return; }
L_002705A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002705ACu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002705ACu) [[unlikely]] return; }
L_002705AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002705B4u); mmi::paddub(c.r[4], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x002705B4u) [[unlikely]] return; }
L_002705B4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002705C4u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 210u, depth + 1u); else { c.pc = 0x00102500u; return; } if (c.pc != 0x002705C4u) [[unlikely]] return; }
L_002705C4:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002705D0u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002705D0u) [[unlikely]] return; }
L_002705D0:
    set32(c.r[2], c.r[29].w[0] + 192u);
    ld128((c.r[2].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002705E4u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002705E4u) [[unlikely]] return; }
L_002705E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002705ECu); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002705ECu) [[unlikely]] return; }
L_002705EC:
    set32(c.r[3], c.r[16].w[0] + c.r[17].w[0]);
    c.f[3] = ld32((c.r[3].w[0] + 5152u));
    c.f[2] = ld32((c.r[3].w[0] + 5156u));
    c.f[1] = ld32((c.r[3].w[0] + 5160u));
    c.f[0] = ld32((c.r[3].w[0] + 5164u));
    set32(c.r[2], c.r[29].w[0] + 176u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027061Cu); st32((c.r[2].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0027061Cu) [[unlikely]] return; }
L_0027061C:
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    set32(c.r[22], c.r[29].w[0] + 240u);
    set32(c.r[2], c.r[29].w[0] + 244u);
    set32(c.r[30], c.r[29].w[0] + 248u);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[22].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 196u));
    set32(c.r[3], c.r[29].w[0] + 180u);
    set32(c.r[7], c.r[29].w[0] + 184u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 200u));
    set32(c.r[6], c.r[29].w[0] + 224u);
    mmi::paddub(c.r[4], c.r[22], c.r[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[30].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 176u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270688u); st32((c.r[7].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 34u, depth + 1u); else { c.pc = 0x0013CCC0u; return; } if (c.pc != 0x00270688u) [[unlikely]] return; }
L_00270688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270690u); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x00270690u) [[unlikely]] return; }
L_00270690:
    set32(c.r[23], c.r[29].w[0] + 256u);
    set32(c.r[4], c.r[29].w[0] + 224u);
    mmi::paddub(c.r[5], c.r[22], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002706A4u); mmi::paddub(c.r[6], c.r[23], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 34u, depth + 1u); else { c.pc = 0x0013CCC0u; return; } if (c.pc != 0x002706A4u) [[unlikely]] return; }
L_002706A4:
    c.f[2] = ld32((c.r[29].w[0] + 224u));
    c.f[1] = ld32((c.r[29].w[0] + 228u));
    c.f[0] = ld32((c.r[29].w[0] + 232u));
    set32(c.r[2], c.r[29].w[0] + 244u);
    set32(c.r[16], c.r[29].w[0] + 292u);
    st32((c.r[29].w[0] + 272u), c.f[2]);
    st32((c.r[29].w[0] + 276u), c.f[1]);
    st32((c.r[29].w[0] + 280u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0]));
    set32(c.r[17], c.r[29].w[0] + 296u);
    set32(c.r[18], c.r[29].w[0] + 308u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[29].w[0] + 288u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[22], c.r[29].w[0] + 312u);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[30].w[0]));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[23].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 260u));
    st32((c.r[29].w[0] + 304u), c.f[1]);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 264u));
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270708u); st32((c.r[22].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x00270708u) [[unlikely]] return; }
L_00270708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270710u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x00270710u) [[unlikely]] return; }
L_00270710:
    c.f[3] = ld32((c.r[20].w[0] + 16u));
    c.f[2] = ld32((c.r[20].w[0] + 20u));
    c.f[1] = ld32((c.r[20].w[0] + 24u));
    c.f[0] = ld32((c.r[20].w[0] + 28u));
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[2], c.r[29].w[0] + 192u);
    st32((c.r[4].w[0]), c.f[3]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[3] = ld32((c.r[20].w[0] + 32u));
    c.f[2] = ld32((c.r[20].w[0] + 36u));
    c.f[1] = ld32((c.r[20].w[0] + 40u));
    c.f[0] = ld32((c.r[20].w[0] + 44u));
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027075Cu); st32((c.r[2].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013CBB0u; return; } if (c.pc != 0x0027075Cu) [[unlikely]] return; }
L_0027075C:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270768u); c.f[22] = c.f[0];  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013CBB0u; return; } if (c.pc != 0x00270768u) [[unlikely]] return; }
L_00270768:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270774u); c.f[23] = c.f[0];  if (depth < kMaxDepth) unit_000F(c, 29u, depth + 1u); else { c.pc = 0x0013CBB0u; return; } if (c.pc != 0x00270774u) [[unlikely]] return; }
L_00270774:
    c.f[21] = c.f[0];
    c.f[0] = fp::add(c.f[22], c.f[23]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[21]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[4], c.r[21], c.r[0]);  if (t) { goto L_002707C0; } }
    mmi::paddub(c.r[4], c.r[21], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270798u); set32(c.r[21], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00270798u) [[unlikely]] return; }
L_00270798:
    c.f[0] = c.f[22] ^ fp::kSign;
    c.f[13] = fp::sub(c.f[0], c.f[20]);
    c.f[12] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002707ACu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002707ACu) [[unlikely]] return; }
L_002707AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002707B4u); mmi::paddub(c.r[4], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002707B4u) [[unlikely]] return; }
L_002707B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 160u) & ~15u, c.r[31]);  if (t) { goto L_002709E8; } }
    mmi::paddub(c.r[4], c.r[21], c.r[0]);
    c.budget -= 1;
L_002707C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002707C8u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002707C8u) [[unlikely]] return; }
L_002707C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::mul(c.f[2], c.f[21]);
    c.f[1] = fp::mul(c.f[0], c.f[22]);
    c.f[0] = fp::mul(c.f[2], c.f[22]);
    c.f[5] = fp::mul(c.f[21], c.f[21]);
    c.f[4] = fp::mul(c.f[22], c.f[22]);
    c.facc = fp::add(c.f[5], c.f[4]);
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[23], c.f[23]));
    fpu_div(c, 21u, c.f[2], c.f[1]);
    c.f[3] = fp::mul(c.f[23], c.f[23]);
    c.f[1] = fp::add(c.f[4], c.f[3]);
    c.f[1] = fp::sub(c.f[1], c.f[5]);
    c.f[0] = fp::mul(c.f[0], c.f[23]);
    c.f[1] = c.f[1] ^ fp::kSign;
    fpu_div(c, 22u, c.f[1], c.f[0]);
    c.f[6] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[6]));
    c.budget -= 24;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  if (t) { goto L_00270834; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[21] = c.f[6];  if (t) { goto L_00270850; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.budget -= 1;
L_00270834:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00270854; } }
    c.f[21] = c.f[0];
    c.budget -= 1;
L_00270850:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_00270854:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  if (t) { goto L_00270878; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[22] = c.f[0];  if (t) { goto L_00270894; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.budget -= 1;
L_00270878:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00270894; } }
    c.f[22] = c.f[0];
    c.budget -= 1;
L_00270894:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027089Cu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x0027089Cu) [[unlikely]] return; }
L_0027089C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002708A4u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002708A4u) [[unlikely]] return; }
L_002708A4:
    c.f[1] = fp::mul(c.f[21], c.f[21]);
    st32((c.r[22].w[0]), c.f[21]);
    c.r[1].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[16].w[0]), c.f[21]);  if (t) { goto L_002708E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[21] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002708D0u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002708D0u) [[unlikely]] return; }
L_002708D0:
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[12] = c.f[21];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002708E0u); st32((c.r[17].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002708E0u) [[unlikely]] return; }
L_002708E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.f[0]);  if (t) { goto L_00270914; } }
L_002708E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[21] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270900u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00270900u) [[unlikely]] return; }
L_00270900:
    st32((c.r[17].w[0]), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027090Cu); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x0027090Cu) [[unlikely]] return; }
L_0027090C:
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[18].w[0]), c.f[0]);
    c.budget -= 2;
L_00270914:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027091Cu); mmi::paddub(c.r[4], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0027091Cu) [[unlikely]] return; }
L_0027091C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270924u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x00270924u) [[unlikely]] return; }
L_00270924:
    mmi::paddub(c.r[4], c.r[21], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270930u); set32(c.r[21], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00270930u) [[unlikely]] return; }
L_00270930:
    c.f[0] = ld32((c.r[20].w[0] + 20u));
    c.f[12] = ld32((c.r[20].w[0] + 16u));
    c.f[14] = ld32((c.r[20].w[0] + 24u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270944u); c.f[13] = fp::sub(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00270944u) [[unlikely]] return; }
L_00270944:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027094Cu); mmi::paddub(c.r[4], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0027094Cu) [[unlikely]] return; }
L_0027094C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270954u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00270954u) [[unlikely]] return; }
L_00270954:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027095Cu); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0027095Cu) [[unlikely]] return; }
L_0027095C:
    c.f[1] = fp::mul(c.f[22], c.f[22]);
    st32((c.r[22].w[0]), c.f[22]);
    c.r[1].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[16].w[0]), c.f[22]);  if (t) { goto L_002709A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270988u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00270988u) [[unlikely]] return; }
L_00270988:
    st32((c.r[17].w[0]), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270994u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00270994u) [[unlikely]] return; }
L_00270994:
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.f[0]);  if (t) { goto L_002709CC; } }
L_002709A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002709B8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002709B8u) [[unlikely]] return; }
L_002709B8:
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002709C8u); st32((c.r[17].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002709C8u) [[unlikely]] return; }
L_002709C8:
    st32((c.r[18].w[0]), c.f[0]);
    c.budget -= 1;
L_002709CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002709D4u); mmi::paddub(c.r[4], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002709D4u) [[unlikely]] return; }
L_002709D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002709DCu); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x002709DCu) [[unlikely]] return; }
L_002709DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002709E4u); mmi::paddub(c.r[4], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002709E4u) [[unlikely]] return; }
L_002709E4:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002709E8:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
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
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_00270A30:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[12] = ld32((c.r[6].w[0]));
    c.f[13] = ld32((c.r[6].w[0] + 4u));
    c.f[14] = ld32((c.r[6].w[0] + 8u));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[19], c.r[7], c.r[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270A78u); mmi::paddub(c.r[18], c.r[8], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00270A78u) [[unlikely]] return; }
L_00270A78:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270A84u); set32(c.r[19], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00270A84u) [[unlikely]] return; }
L_00270A84:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270A90u); set32(c.r[19], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00270A90u) [[unlikely]] return; }
L_00270A90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270A98u); set32(c.r[4], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00270A98u) [[unlikely]] return; }
L_00270A98:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 762u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[18].d[0] = c.r[18].d[0] << 56;  goto L_00270AB8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270AACu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00270AACu) [[unlikely]] return; }
L_00270AAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);  if (t) { goto L_00270CCC; } }
    c.r[18].d[0] = c.r[18].d[0] << 56;
    c.budget -= 1;
L_00270AB8:
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    set32(c.r[3], c.r[18].w[0] + c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 8048u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[3].w[0] + 8048u);  if (t) { goto L_00270B58; } }
    set32(c.r[18], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[17].w[0]);
    st8((c.r[3].w[0] + 8050u), static_cast<std::uint8_t>(0u));
    c.f[0] = ld32((c.r[2].w[0] + 8032u));
    set32(c.r[19], c.r[2].w[0] + 8032u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F730000u);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.f[1] = c.r[2].w[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270AF8u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00270AF8u) [[unlikely]] return; }
L_00270AF8:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270B04u); set32(c.r[4], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00270B04u) [[unlikely]] return; }
L_00270B04:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    set32(c.r[2], 0u + 38u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { mmi::paddub(c.r[4], c.r[16], c.r[0]);  goto L_00270B48; }
    set32(c.r[2], c.r[18].w[0] + c.r[17].w[0]);
    c.f[1] = ld32((c.r[2].w[0] + 8040u));
    set32(c.r[17], c.r[2].w[0] + 8040u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F730000u);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.f[0] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270B38u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00270B38u) [[unlikely]] return; }
L_00270B38:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270B44u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00270B44u) [[unlikely]] return; }
L_00270B44:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00270B48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270B50u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00270B50u) [[unlikely]] return; }
L_00270B50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00270CC8; } }
L_00270B58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270B60u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00270B60u) [[unlikely]] return; }
L_00270B60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270B68u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x00270B68u) [[unlikely]] return; }
L_00270B68:
    set32(c.r[2], c.r[18].w[0] + c.r[17].w[0]);
    set32(c.r[19], c.r[2].w[0] + 8050u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 8050u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00270BA4; } }
    set32(c.r[21], c.r[29].w[0] + 148u);
    c.f[0] = ld32((c.r[17].w[0] + 8024u));
    c.f[20] = ld32((c.r[21].w[0]));
    set32(c.r[5], c.r[29].w[0] + 144u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.f[0] = fp::sub(c.f[20], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270B9Cu); st32((c.r[21].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_004E(c, 299u, depth + 1u); else { c.pc = 0x0023B2C0u; return; } if (c.pc != 0x00270B9Cu) [[unlikely]] return; }
L_00270B9C:
    st32((c.r[21].w[0]), c.f[20]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00270BA4:
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270BB8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0045(c, 218u, depth + 1u); else { c.pc = 0x00217E60u; return; } if (c.pc != 0x00270BB8u) [[unlikely]] return; }
L_00270BB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270BC0u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00270BC0u) [[unlikely]] return; }
L_00270BC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270BC8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x00270BC8u) [[unlikely]] return; }
L_00270BC8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270BD8u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 210u, depth + 1u); else { c.pc = 0x00102500u; return; } if (c.pc != 0x00270BD8u) [[unlikely]] return; }
L_00270BD8:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270BE4u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x00270BE4u) [[unlikely]] return; }
L_00270BE4:
    set32(c.r[19], c.r[29].w[0] + 168u);
    set32(c.r[21], c.r[29].w[0] + 164u);
    c.f[13] = ld32((c.r[21].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270BF8u); c.f[12] = ld32((c.r[19].w[0]));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00270BF8u) [[unlikely]] return; }
L_00270BF8:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    set32(c.r[18], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[17].w[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[22], c.r[2].w[0] + 8032u);
    st32((c.r[2].w[0] + 8032u), c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270C18u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00270C18u) [[unlikely]] return; }
L_00270C18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270C20u); set32(c.r[4], ld32((c.r[22].w[0])));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00270C20u) [[unlikely]] return; }
L_00270C20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270C28u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00270C28u) [[unlikely]] return; }
L_00270C28:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00270CC8; } }
    c.f[1] = ld32((c.r[21].w[0]));
    c.f[0] = ld32((c.r[19].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270C4Cu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00270C4Cu) [[unlikely]] return; }
L_00270C4C:
    c.f[13] = c.f[0];
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270C5Cu); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00270C5Cu) [[unlikely]] return; }
L_00270C5C:
    set32(c.r[3], c.r[18].w[0] + c.r[17].w[0]);
    c.f[2] = ld32((c.r[3].w[0] + 8040u));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    set32(c.r[17], c.r[3].w[0] + 8040u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.f[0] = c.r[2].w[0];
    c.f[3] = fp::cvt_s_w(c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270CACu);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00270CACu) [[unlikely]] return; }
L_00270CAC:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270CB8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00270CB8u) [[unlikely]] return; }
L_00270CB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270CC0u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00270CC0u) [[unlikely]] return; }
L_00270CC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270CC8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00270CC8u) [[unlikely]] return; }
L_00270CC8:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00270CCC:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00270D00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 14192u);
    set32(c.r[5], c.r[4].w[0] + 1984u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[6], c.r[4].w[0] + 4032u);
    set32(c.r[7], c.r[4].w[0] + 4544u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00270000u < 16384u) { entry = entries_005C[(t - 0x00270000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00270D30:
    set32(c.r[5], c.r[4].w[0] + 1984u);
    set32(c.r[6], c.r[4].w[0] + 4032u);
    c.budget -= 4;
    { set32(c.r[7], c.r[4].w[0] + 4544u);  goto L_00272130; }
L_00270D40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270D6Cu); mmi::paddub(c.r[16], c.r[7], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00270D6Cu) [[unlikely]] return; }
L_00270D6C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 762u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00270E18; } }
    c.f[13] = ld32((c.r[19].w[0] + 36u));
    c.f[14] = ld32((c.r[19].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270D88u); c.f[12] = ld32((c.r[19].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00270D88u) [[unlikely]] return; }
L_00270D88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270D90u); set32(c.r[4], c.r[19].w[0] + 8320u);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x00270D90u) [[unlikely]] return; }
L_00270D90:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270DA0u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00270DA0u) [[unlikely]] return; }
L_00270DA0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270DACu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00270DACu) [[unlikely]] return; }
L_00270DAC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270DB8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00270DB8u) [[unlikely]] return; }
L_00270DB8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270DC4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00270DC4u) [[unlikely]] return; }
L_00270DC4:
    c.f[0] = ld32((c.r[19].w[0] + 8012u));
    c.f[12] = 0u;
    c.f[14] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270DDCu); c.f[13] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00270DDCu) [[unlikely]] return; }
L_00270DDC:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270DE8u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00270DE8u) [[unlikely]] return; }
L_00270DE8:
    set32(c.r[2], ld32((c.r[19].w[0] + 7820u)));
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270DF8u); c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00270DF8u) [[unlikely]] return; }
L_00270DF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270E00u); c.r[4].d[0] = ld16((c.r[19].w[0] + 7816u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00270E00u) [[unlikely]] return; }
L_00270E00:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270E10u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00270E10u) [[unlikely]] return; }
L_00270E10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0])));  if (t) { goto L_00270EC8; } }
L_00270E18:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270E40u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00270E40u) [[unlikely]] return; }
L_00270E40:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    c.r[4].d[0] = 0ull | 65535ull;
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270E5Cu); c.r[4].d[0] = c.r[2].d[0] & c.r[4].d[0];  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00270E5Cu) [[unlikely]] return; }
L_00270E5C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270E74u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00270E74u) [[unlikely]] return; }
L_00270E74:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270E8Cu); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00270E8Cu) [[unlikely]] return; }
L_00270E8C:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270E98u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00270E98u) [[unlikely]] return; }
L_00270E98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270EA0u); c.r[4].d[0] = ld16((c.r[19].w[0] + 7820u));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00270EA0u) [[unlikely]] return; }
L_00270EA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270EA8u); c.r[4].d[0] = ld16((c.r[19].w[0] + 7816u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00270EA8u) [[unlikely]] return; }
L_00270EA8:
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = ld32((c.r[17].w[0] + 16u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270EC4u); c.f[13] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00270EC4u) [[unlikely]] return; }
L_00270EC4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_00270EC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270ED0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00270ED0u) [[unlikely]] return; }
L_00270ED0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270EDCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00270EDCu) [[unlikely]] return; }
L_00270EDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270EE4u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00270EE4u) [[unlikely]] return; }
L_00270EE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270EECu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00270EECu) [[unlikely]] return; }
L_00270EEC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00270F10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270F3Cu); mmi::paddub(c.r[16], c.r[7], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00270F3Cu) [[unlikely]] return; }
L_00270F3C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 762u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00270FD4; } }
    c.f[13] = ld32((c.r[19].w[0] + 36u));
    c.f[14] = ld32((c.r[19].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270F58u); c.f[12] = ld32((c.r[19].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00270F58u) [[unlikely]] return; }
L_00270F58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270F60u); set32(c.r[4], c.r[19].w[0] + 8320u);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x00270F60u) [[unlikely]] return; }
L_00270F60:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270F70u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00270F70u) [[unlikely]] return; }
L_00270F70:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270F80u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00270F80u) [[unlikely]] return; }
L_00270F80:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270F8Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00270F8Cu) [[unlikely]] return; }
L_00270F8C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270F98u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00270F98u) [[unlikely]] return; }
L_00270F98:
    c.f[0] = ld32((c.r[19].w[0] + 8012u));
    c.f[12] = 0u;
    c.f[14] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270FB0u); c.f[13] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00270FB0u) [[unlikely]] return; }
L_00270FB0:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270FBCu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00270FBCu) [[unlikely]] return; }
L_00270FBC:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270FCCu); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00270FCCu) [[unlikely]] return; }
L_00270FCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 7820u)));  if (t) { goto L_00271078; } }
L_00270FD4:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270FFCu); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00270FFCu) [[unlikely]] return; }
L_00270FFC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    c.r[4].d[0] = 0ull | 65535ull;
    set32(c.r[17], c.r[17].w[0] + 16u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027101Cu); c.r[4].d[0] = c.r[2].d[0] & c.r[4].d[0];  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x0027101Cu) [[unlikely]] return; }
L_0027101C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271034u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00271034u) [[unlikely]] return; }
L_00271034:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027104Cu); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x0027104Cu) [[unlikely]] return; }
L_0027104C:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271058u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00271058u) [[unlikely]] return; }
L_00271058:
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = ld32((c.r[17].w[0]));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271074u); c.f[13] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00271074u) [[unlikely]] return; }
L_00271074:
    set32(c.r[2], ld32((c.r[19].w[0] + 7820u)));
    c.budget -= 1;
L_00271078:
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271084u); c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00271084u) [[unlikely]] return; }
L_00271084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027108Cu); c.r[4].d[0] = ld16((c.r[19].w[0] + 7816u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x0027108Cu) [[unlikely]] return; }
L_0027108C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271098u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00271098u) [[unlikely]] return; }
L_00271098:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002710A4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002710A4u) [[unlikely]] return; }
L_002710A4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002710B0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002710B0u) [[unlikely]] return; }
L_002710B0:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002710BCu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002710BCu) [[unlikely]] return; }
L_002710BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002710C4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x002710C4u) [[unlikely]] return; }
L_002710C4:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002710D4u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002710D4u) [[unlikely]] return; }
L_002710D4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002710E0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002710E0u) [[unlikely]] return; }
L_002710E0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002710ECu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002710ECu) [[unlikely]] return; }
L_002710EC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002710F8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002710F8u) [[unlikely]] return; }
L_002710F8:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271104u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00271104u) [[unlikely]] return; }
L_00271104:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271114u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00271114u) [[unlikely]] return; }
L_00271114:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271120u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00271120u) [[unlikely]] return; }
L_00271120:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027112Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0027112Cu) [[unlikely]] return; }
L_0027112C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271138u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00271138u) [[unlikely]] return; }
L_00271138:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271144u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00271144u) [[unlikely]] return; }
L_00271144:
    c.f[13] = ld32((c.r[17].w[0] + 52u));
    c.f[14] = ld32((c.r[17].w[0] + 56u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271154u); c.f[12] = ld32((c.r[17].w[0] + 48u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00271154u) [[unlikely]] return; }
L_00271154:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271160u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00271160u) [[unlikely]] return; }
L_00271160:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027116Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0027116Cu) [[unlikely]] return; }
L_0027116C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271178u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00271178u) [[unlikely]] return; }
L_00271178:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271184u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00271184u) [[unlikely]] return; }
L_00271184:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027118Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x0027118Cu) [[unlikely]] return; }
L_0027118C:
    c.f[13] = ld32((c.r[17].w[0] + 68u));
    c.f[14] = ld32((c.r[17].w[0] + 72u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027119Cu); c.f[12] = ld32((c.r[17].w[0] + 64u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0027119Cu) [[unlikely]] return; }
L_0027119C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002711A8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002711A8u) [[unlikely]] return; }
L_002711A8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002711B4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002711B4u) [[unlikely]] return; }
L_002711B4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002711C0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002711C0u) [[unlikely]] return; }
L_002711C0:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002711CCu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002711CCu) [[unlikely]] return; }
L_002711CC:
    c.f[13] = ld32((c.r[17].w[0] + 84u));
    c.f[14] = ld32((c.r[17].w[0] + 88u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002711DCu); c.f[12] = ld32((c.r[17].w[0] + 80u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002711DCu) [[unlikely]] return; }
L_002711DC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002711E8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002711E8u) [[unlikely]] return; }
L_002711E8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002711F4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002711F4u) [[unlikely]] return; }
L_002711F4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271200u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00271200u) [[unlikely]] return; }
L_00271200:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027120Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0027120Cu) [[unlikely]] return; }
L_0027120C:
    c.f[13] = ld32((c.r[17].w[0] + 100u));
    c.f[14] = ld32((c.r[17].w[0] + 104u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027121Cu); c.f[12] = ld32((c.r[17].w[0] + 96u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0027121Cu) [[unlikely]] return; }
L_0027121C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271228u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00271228u) [[unlikely]] return; }
L_00271228:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271234u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00271234u) [[unlikely]] return; }
L_00271234:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027123Cu); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x0027123Cu) [[unlikely]] return; }
L_0027123C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271244u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00271244u) [[unlikely]] return; }
L_00271244:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00271260:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027128Cu); mmi::paddub(c.r[16], c.r[7], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x0027128Cu) [[unlikely]] return; }
L_0027128C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 762u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00271324; } }
    c.f[13] = ld32((c.r[19].w[0] + 36u));
    c.f[14] = ld32((c.r[19].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002712A8u); c.f[12] = ld32((c.r[19].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002712A8u) [[unlikely]] return; }
L_002712A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002712B0u); set32(c.r[4], c.r[19].w[0] + 8320u);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x002712B0u) [[unlikely]] return; }
L_002712B0:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002712C0u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002712C0u) [[unlikely]] return; }
L_002712C0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002712D0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002712D0u) [[unlikely]] return; }
L_002712D0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002712DCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002712DCu) [[unlikely]] return; }
L_002712DC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002712E8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002712E8u) [[unlikely]] return; }
L_002712E8:
    c.f[0] = ld32((c.r[19].w[0] + 8012u));
    c.f[12] = 0u;
    c.f[14] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271300u); c.f[13] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00271300u) [[unlikely]] return; }
L_00271300:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027130Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0027130Cu) [[unlikely]] return; }
L_0027130C:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027131Cu); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0027131Cu) [[unlikely]] return; }
L_0027131C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0])));  if (t) { goto L_002713C8; } }
L_00271324:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027134Cu); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0027134Cu) [[unlikely]] return; }
L_0027134C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    c.r[4].d[0] = 0ull | 65535ull;
    set32(c.r[17], c.r[17].w[0] + 16u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027136Cu); c.r[4].d[0] = c.r[2].d[0] & c.r[4].d[0];  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x0027136Cu) [[unlikely]] return; }
L_0027136C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271384u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00271384u) [[unlikely]] return; }
L_00271384:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027139Cu); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x0027139Cu) [[unlikely]] return; }
L_0027139C:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002713A8u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002713A8u) [[unlikely]] return; }
L_002713A8:
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = ld32((c.r[17].w[0]));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002713C4u); c.f[13] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002713C4u) [[unlikely]] return; }
L_002713C4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_002713C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002713D0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002713D0u) [[unlikely]] return; }
L_002713D0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002713DCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002713DCu) [[unlikely]] return; }
L_002713DC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002713E8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002713E8u) [[unlikely]] return; }
L_002713E8:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002713F4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002713F4u) [[unlikely]] return; }
L_002713F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002713FCu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x002713FCu) [[unlikely]] return; }
L_002713FC:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027140Cu); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0027140Cu) [[unlikely]] return; }
L_0027140C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271418u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00271418u) [[unlikely]] return; }
L_00271418:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271424u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00271424u) [[unlikely]] return; }
L_00271424:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271430u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00271430u) [[unlikely]] return; }
L_00271430:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027143Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0027143Cu) [[unlikely]] return; }
L_0027143C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271444u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x00271444u) [[unlikely]] return; }
L_00271444:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271454u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00271454u) [[unlikely]] return; }
L_00271454:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271460u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00271460u) [[unlikely]] return; }
L_00271460:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027146Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0027146Cu) [[unlikely]] return; }
L_0027146C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271474u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00271474u) [[unlikely]] return; }
L_00271474:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027147Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0027147Cu) [[unlikely]] return; }
L_0027147C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002714A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002714CCu); mmi::paddub(c.r[16], c.r[7], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002714CCu) [[unlikely]] return; }
L_002714CC:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002714F4u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002714F4u) [[unlikely]] return; }
L_002714F4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    c.r[4].d[0] = 0ull | 65535ull;
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271510u); c.r[4].d[0] = c.r[2].d[0] & c.r[4].d[0];  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00271510u) [[unlikely]] return; }
L_00271510:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271528u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00271528u) [[unlikely]] return; }
L_00271528:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271540u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00271540u) [[unlikely]] return; }
L_00271540:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027154Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0027154Cu) [[unlikely]] return; }
L_0027154C:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027155Cu); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0027155Cu) [[unlikely]] return; }
L_0027155C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271568u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00271568u) [[unlikely]] return; }
L_00271568:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271574u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00271574u) [[unlikely]] return; }
L_00271574:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271580u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00271580u) [[unlikely]] return; }
L_00271580:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027158Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0027158Cu) [[unlikely]] return; }
L_0027158C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271594u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x00271594u) [[unlikely]] return; }
L_00271594:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002715A4u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002715A4u) [[unlikely]] return; }
L_002715A4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002715B0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002715B0u) [[unlikely]] return; }
L_002715B0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002715BCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002715BCu) [[unlikely]] return; }
L_002715BC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002715C8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002715C8u) [[unlikely]] return; }
L_002715C8:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002715D4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002715D4u) [[unlikely]] return; }
L_002715D4:
    c.f[13] = ld32((c.r[17].w[0] + 52u));
    c.f[14] = ld32((c.r[17].w[0] + 56u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002715E4u); c.f[12] = ld32((c.r[17].w[0] + 48u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002715E4u) [[unlikely]] return; }
L_002715E4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002715F0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002715F0u) [[unlikely]] return; }
L_002715F0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002715FCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002715FCu) [[unlikely]] return; }
L_002715FC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271608u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00271608u) [[unlikely]] return; }
L_00271608:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271614u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00271614u) [[unlikely]] return; }
L_00271614:
    c.f[13] = ld32((c.r[17].w[0] + 68u));
    c.f[14] = ld32((c.r[17].w[0] + 72u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271624u); c.f[12] = ld32((c.r[17].w[0] + 64u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00271624u) [[unlikely]] return; }
L_00271624:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271630u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00271630u) [[unlikely]] return; }
L_00271630:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027163Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0027163Cu) [[unlikely]] return; }
L_0027163C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271648u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00271648u) [[unlikely]] return; }
L_00271648:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271654u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00271654u) [[unlikely]] return; }
L_00271654:
    c.f[13] = ld32((c.r[17].w[0] + 84u));
    c.f[14] = ld32((c.r[17].w[0] + 88u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271664u); c.f[12] = ld32((c.r[17].w[0] + 80u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00271664u) [[unlikely]] return; }
L_00271664:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271670u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00271670u) [[unlikely]] return; }
L_00271670:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027167Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0027167Cu) [[unlikely]] return; }
L_0027167C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271688u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00271688u) [[unlikely]] return; }
L_00271688:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271694u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00271694u) [[unlikely]] return; }
L_00271694:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027169Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x0027169Cu) [[unlikely]] return; }
L_0027169C:
    c.f[13] = ld32((c.r[17].w[0] + 100u));
    c.f[14] = ld32((c.r[17].w[0] + 104u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002716ACu); c.f[12] = ld32((c.r[17].w[0] + 96u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002716ACu) [[unlikely]] return; }
L_002716AC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002716B8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002716B8u) [[unlikely]] return; }
L_002716B8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002716C4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002716C4u) [[unlikely]] return; }
L_002716C4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002716D0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002716D0u) [[unlikely]] return; }
L_002716D0:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002716DCu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002716DCu) [[unlikely]] return; }
L_002716DC:
    c.f[13] = ld32((c.r[17].w[0] + 116u));
    c.f[14] = ld32((c.r[17].w[0] + 120u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002716ECu); c.f[12] = ld32((c.r[17].w[0] + 112u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002716ECu) [[unlikely]] return; }
L_002716EC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002716F8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002716F8u) [[unlikely]] return; }
L_002716F8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271704u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00271704u) [[unlikely]] return; }
L_00271704:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271710u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00271710u) [[unlikely]] return; }
L_00271710:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027171Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0027171Cu) [[unlikely]] return; }
L_0027171C:
    c.f[13] = ld32((c.r[17].w[0] + 132u));
    c.f[14] = ld32((c.r[17].w[0] + 136u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027172Cu); c.f[12] = ld32((c.r[17].w[0] + 128u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0027172Cu) [[unlikely]] return; }
L_0027172C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271738u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00271738u) [[unlikely]] return; }
L_00271738:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271744u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00271744u) [[unlikely]] return; }
L_00271744:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271750u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00271750u) [[unlikely]] return; }
L_00271750:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027175Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0027175Cu) [[unlikely]] return; }
L_0027175C:
    c.f[13] = ld32((c.r[17].w[0] + 148u));
    c.f[14] = ld32((c.r[17].w[0] + 152u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027176Cu); c.f[12] = ld32((c.r[17].w[0] + 144u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0027176Cu) [[unlikely]] return; }
L_0027176C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271778u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00271778u) [[unlikely]] return; }
L_00271778:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271784u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00271784u) [[unlikely]] return; }
L_00271784:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027178Cu); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x0027178Cu) [[unlikely]] return; }
L_0027178C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271794u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00271794u) [[unlikely]] return; }
L_00271794:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002717B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002717DCu); mmi::paddub(c.r[16], c.r[7], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002717DCu) [[unlikely]] return; }
L_002717DC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 762u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027188C; } }
    c.f[13] = ld32((c.r[19].w[0] + 36u));
    c.f[14] = ld32((c.r[19].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002717F8u); c.f[12] = ld32((c.r[19].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002717F8u) [[unlikely]] return; }
L_002717F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271800u); set32(c.r[4], c.r[19].w[0] + 8320u);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x00271800u) [[unlikely]] return; }
L_00271800:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271810u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00271810u) [[unlikely]] return; }
L_00271810:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271820u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00271820u) [[unlikely]] return; }
L_00271820:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027182Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0027182Cu) [[unlikely]] return; }
L_0027182C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271838u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00271838u) [[unlikely]] return; }
L_00271838:
    c.f[0] = ld32((c.r[19].w[0] + 8012u));
    c.f[12] = 0u;
    c.f[14] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271850u); c.f[13] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00271850u) [[unlikely]] return; }
L_00271850:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027185Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0027185Cu) [[unlikely]] return; }
L_0027185C:
    set32(c.r[2], ld32((c.r[19].w[0] + 7820u)));
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027186Cu); c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x0027186Cu) [[unlikely]] return; }
L_0027186C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271874u); c.r[4].d[0] = ld16((c.r[19].w[0] + 7816u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00271874u) [[unlikely]] return; }
L_00271874:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271884u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00271884u) [[unlikely]] return; }
L_00271884:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0])));  if (t) { goto L_00271930; } }
L_0027188C:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002718B4u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002718B4u) [[unlikely]] return; }
L_002718B4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    c.r[4].d[0] = 0ull | 65535ull;
    set32(c.r[17], c.r[17].w[0] + 16u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002718D4u); c.r[4].d[0] = c.r[2].d[0] & c.r[4].d[0];  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002718D4u) [[unlikely]] return; }
L_002718D4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002718ECu); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002718ECu) [[unlikely]] return; }
L_002718EC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271904u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00271904u) [[unlikely]] return; }
L_00271904:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271910u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00271910u) [[unlikely]] return; }
L_00271910:
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = ld32((c.r[17].w[0]));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027192Cu); c.f[13] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0027192Cu) [[unlikely]] return; }
L_0027192C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_00271930:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271938u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00271938u) [[unlikely]] return; }
L_00271938:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271944u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00271944u) [[unlikely]] return; }
L_00271944:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271950u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00271950u) [[unlikely]] return; }
L_00271950:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027195Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0027195Cu) [[unlikely]] return; }
L_0027195C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271964u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x00271964u) [[unlikely]] return; }
L_00271964:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271974u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00271974u) [[unlikely]] return; }
L_00271974:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271980u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00271980u) [[unlikely]] return; }
L_00271980:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027198Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0027198Cu) [[unlikely]] return; }
L_0027198C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271998u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00271998u) [[unlikely]] return; }
L_00271998:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002719A4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002719A4u) [[unlikely]] return; }
L_002719A4:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002719B4u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002719B4u) [[unlikely]] return; }
L_002719B4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002719C0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002719C0u) [[unlikely]] return; }
L_002719C0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002719CCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002719CCu) [[unlikely]] return; }
L_002719CC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002719D8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002719D8u) [[unlikely]] return; }
L_002719D8:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002719E4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002719E4u) [[unlikely]] return; }
L_002719E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002719ECu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x002719ECu) [[unlikely]] return; }
L_002719EC:
    c.f[13] = ld32((c.r[17].w[0] + 52u));
    c.f[14] = ld32((c.r[17].w[0] + 56u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002719FCu); c.f[12] = ld32((c.r[17].w[0] + 48u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002719FCu) [[unlikely]] return; }
L_002719FC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271A08u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00271A08u) [[unlikely]] return; }
L_00271A08:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271A14u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00271A14u) [[unlikely]] return; }
L_00271A14:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271A20u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00271A20u) [[unlikely]] return; }
L_00271A20:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271A2Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00271A2Cu) [[unlikely]] return; }
L_00271A2C:
    c.f[13] = ld32((c.r[17].w[0] + 68u));
    c.f[14] = ld32((c.r[17].w[0] + 72u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271A3Cu); c.f[12] = ld32((c.r[17].w[0] + 64u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00271A3Cu) [[unlikely]] return; }
L_00271A3C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271A48u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00271A48u) [[unlikely]] return; }
L_00271A48:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271A54u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00271A54u) [[unlikely]] return; }
L_00271A54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271A5Cu); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00271A5Cu) [[unlikely]] return; }
L_00271A5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271A64u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00271A64u) [[unlikely]] return; }
L_00271A64:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00271A80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271AACu); mmi::paddub(c.r[16], c.r[7], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00271AACu) [[unlikely]] return; }
L_00271AAC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 762u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00271B5C; } }
    c.f[13] = ld32((c.r[19].w[0] + 36u));
    c.f[14] = ld32((c.r[19].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271AC8u); c.f[12] = ld32((c.r[19].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00271AC8u) [[unlikely]] return; }
L_00271AC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271AD0u); set32(c.r[4], c.r[19].w[0] + 8320u);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x00271AD0u) [[unlikely]] return; }
L_00271AD0:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271AE0u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00271AE0u) [[unlikely]] return; }
L_00271AE0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271AF0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00271AF0u) [[unlikely]] return; }
L_00271AF0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271AFCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00271AFCu) [[unlikely]] return; }
L_00271AFC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271B08u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00271B08u) [[unlikely]] return; }
L_00271B08:
    c.f[0] = ld32((c.r[19].w[0] + 8012u));
    c.f[12] = 0u;
    c.f[14] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271B20u); c.f[13] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00271B20u) [[unlikely]] return; }
L_00271B20:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271B2Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00271B2Cu) [[unlikely]] return; }
L_00271B2C:
    set32(c.r[2], ld32((c.r[19].w[0] + 7820u)));
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271B3Cu); c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00271B3Cu) [[unlikely]] return; }
L_00271B3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271B44u); c.r[4].d[0] = ld16((c.r[19].w[0] + 7816u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00271B44u) [[unlikely]] return; }
L_00271B44:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271B54u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00271B54u) [[unlikely]] return; }
L_00271B54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0])));  if (t) { goto L_00271C00; } }
L_00271B5C:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271B84u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00271B84u) [[unlikely]] return; }
L_00271B84:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    c.r[4].d[0] = 0ull | 65535ull;
    set32(c.r[17], c.r[17].w[0] + 16u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271BA4u); c.r[4].d[0] = c.r[2].d[0] & c.r[4].d[0];  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00271BA4u) [[unlikely]] return; }
L_00271BA4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271BBCu); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00271BBCu) [[unlikely]] return; }
L_00271BBC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271BD4u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00271BD4u) [[unlikely]] return; }
L_00271BD4:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271BE0u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00271BE0u) [[unlikely]] return; }
L_00271BE0:
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = ld32((c.r[17].w[0]));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271BFCu); c.f[13] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00271BFCu) [[unlikely]] return; }
L_00271BFC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_00271C00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271C08u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00271C08u) [[unlikely]] return; }
L_00271C08:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271C14u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00271C14u) [[unlikely]] return; }
L_00271C14:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271C20u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00271C20u) [[unlikely]] return; }
L_00271C20:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271C2Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00271C2Cu) [[unlikely]] return; }
L_00271C2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271C34u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x00271C34u) [[unlikely]] return; }
L_00271C34:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271C44u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00271C44u) [[unlikely]] return; }
L_00271C44:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271C50u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00271C50u) [[unlikely]] return; }
L_00271C50:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271C5Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00271C5Cu) [[unlikely]] return; }
L_00271C5C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271C68u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00271C68u) [[unlikely]] return; }
L_00271C68:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271C74u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00271C74u) [[unlikely]] return; }
L_00271C74:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271C84u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00271C84u) [[unlikely]] return; }
L_00271C84:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271C90u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00271C90u) [[unlikely]] return; }
L_00271C90:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271C9Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00271C9Cu) [[unlikely]] return; }
L_00271C9C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271CA8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00271CA8u) [[unlikely]] return; }
L_00271CA8:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271CB4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00271CB4u) [[unlikely]] return; }
L_00271CB4:
    c.f[13] = ld32((c.r[17].w[0] + 52u));
    c.f[14] = ld32((c.r[17].w[0] + 56u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271CC4u); c.f[12] = ld32((c.r[17].w[0] + 48u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00271CC4u) [[unlikely]] return; }
L_00271CC4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271CD0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00271CD0u) [[unlikely]] return; }
L_00271CD0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271CDCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00271CDCu) [[unlikely]] return; }
L_00271CDC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271CE8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00271CE8u) [[unlikely]] return; }
L_00271CE8:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271CF4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00271CF4u) [[unlikely]] return; }
L_00271CF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271CFCu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x00271CFCu) [[unlikely]] return; }
L_00271CFC:
    c.f[13] = ld32((c.r[17].w[0] + 68u));
    c.f[14] = ld32((c.r[17].w[0] + 72u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271D0Cu); c.f[12] = ld32((c.r[17].w[0] + 64u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00271D0Cu) [[unlikely]] return; }
L_00271D0C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271D18u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00271D18u) [[unlikely]] return; }
L_00271D18:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271D24u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00271D24u) [[unlikely]] return; }
L_00271D24:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271D30u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00271D30u) [[unlikely]] return; }
L_00271D30:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271D3Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00271D3Cu) [[unlikely]] return; }
L_00271D3C:
    c.f[13] = ld32((c.r[17].w[0] + 84u));
    c.f[14] = ld32((c.r[17].w[0] + 88u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271D4Cu); c.f[12] = ld32((c.r[17].w[0] + 80u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00271D4Cu) [[unlikely]] return; }
L_00271D4C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271D58u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00271D58u) [[unlikely]] return; }
L_00271D58:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271D64u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00271D64u) [[unlikely]] return; }
L_00271D64:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271D70u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00271D70u) [[unlikely]] return; }
L_00271D70:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271D7Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00271D7Cu) [[unlikely]] return; }
L_00271D7C:
    c.f[13] = ld32((c.r[17].w[0] + 100u));
    c.f[14] = ld32((c.r[17].w[0] + 104u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271D8Cu); c.f[12] = ld32((c.r[17].w[0] + 96u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00271D8Cu) [[unlikely]] return; }
L_00271D8C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271D98u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00271D98u) [[unlikely]] return; }
L_00271D98:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271DA4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00271DA4u) [[unlikely]] return; }
L_00271DA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271DACu); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00271DACu) [[unlikely]] return; }
L_00271DAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271DB4u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00271DB4u) [[unlikely]] return; }
L_00271DB4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00271DD0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271DFCu); mmi::paddub(c.r[16], c.r[7], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00271DFCu) [[unlikely]] return; }
L_00271DFC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 762u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00271E80; } }
    c.f[13] = ld32((c.r[19].w[0] + 36u));
    c.f[14] = ld32((c.r[19].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271E18u); c.f[12] = ld32((c.r[19].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00271E18u) [[unlikely]] return; }
L_00271E18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271E20u); set32(c.r[4], c.r[19].w[0] + 8320u);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x00271E20u) [[unlikely]] return; }
L_00271E20:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271E30u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00271E30u) [[unlikely]] return; }
L_00271E30:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271E3Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00271E3Cu) [[unlikely]] return; }
L_00271E3C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271E48u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00271E48u) [[unlikely]] return; }
L_00271E48:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271E54u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00271E54u) [[unlikely]] return; }
L_00271E54:
    c.f[0] = ld32((c.r[19].w[0] + 8012u));
    c.f[12] = 0u;
    c.f[14] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271E6Cu); c.f[13] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00271E6Cu) [[unlikely]] return; }
L_00271E6C:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271E78u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00271E78u) [[unlikely]] return; }
L_00271E78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[17].w[0] + 16u));  if (t) { goto L_00271F04; } }
L_00271E80:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271EA8u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00271EA8u) [[unlikely]] return; }
L_00271EA8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    c.r[4].d[0] = 0ull | 65535ull;
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271EC4u); c.r[4].d[0] = c.r[2].d[0] & c.r[4].d[0];  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00271EC4u) [[unlikely]] return; }
L_00271EC4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271EDCu); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00271EDCu) [[unlikely]] return; }
L_00271EDC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271EF4u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00271EF4u) [[unlikely]] return; }
L_00271EF4:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271F00u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00271F00u) [[unlikely]] return; }
L_00271F00:
    c.f[12] = ld32((c.r[17].w[0] + 16u));
    c.budget -= 1;
L_00271F04:
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271F10u); c.f[13] = ld32((c.r[17].w[0] + 20u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00271F10u) [[unlikely]] return; }
L_00271F10:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271F1Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00271F1Cu) [[unlikely]] return; }
L_00271F1C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271F28u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00271F28u) [[unlikely]] return; }
L_00271F28:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271F34u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00271F34u) [[unlikely]] return; }
L_00271F34:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271F40u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00271F40u) [[unlikely]] return; }
L_00271F40:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271F50u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00271F50u) [[unlikely]] return; }
L_00271F50:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271F5Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00271F5Cu) [[unlikely]] return; }
L_00271F5C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271F68u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00271F68u) [[unlikely]] return; }
L_00271F68:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271F74u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00271F74u) [[unlikely]] return; }
L_00271F74:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271F80u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00271F80u) [[unlikely]] return; }
L_00271F80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271F88u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x00271F88u) [[unlikely]] return; }
L_00271F88:
    c.f[13] = ld32((c.r[17].w[0] + 52u));
    c.f[14] = ld32((c.r[17].w[0] + 56u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271F98u); c.f[12] = ld32((c.r[17].w[0] + 48u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00271F98u) [[unlikely]] return; }
L_00271F98:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271FA4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00271FA4u) [[unlikely]] return; }
L_00271FA4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271FB0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00271FB0u) [[unlikely]] return; }
L_00271FB0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271FBCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00271FBCu) [[unlikely]] return; }
L_00271FBC:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271FC8u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00271FC8u) [[unlikely]] return; }
L_00271FC8:
    c.f[13] = ld32((c.r[17].w[0] + 68u));
    c.f[14] = ld32((c.r[17].w[0] + 72u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271FD8u); c.f[12] = ld32((c.r[17].w[0] + 64u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00271FD8u) [[unlikely]] return; }
L_00271FD8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271FE4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00271FE4u) [[unlikely]] return; }
L_00271FE4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271FF0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00271FF0u) [[unlikely]] return; }
L_00271FF0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271FFCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00271FFCu) [[unlikely]] return; }
L_00271FFC:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272008u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00272008u) [[unlikely]] return; }
L_00272008:
    c.f[13] = ld32((c.r[17].w[0] + 84u));
    c.f[14] = ld32((c.r[17].w[0] + 88u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272018u); c.f[12] = ld32((c.r[17].w[0] + 80u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00272018u) [[unlikely]] return; }
L_00272018:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272024u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00272024u) [[unlikely]] return; }
L_00272024:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272030u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00272030u) [[unlikely]] return; }
L_00272030:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027203Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x0027203Cu) [[unlikely]] return; }
L_0027203C:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272048u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00272048u) [[unlikely]] return; }
L_00272048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272050u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x00272050u) [[unlikely]] return; }
L_00272050:
    c.f[13] = ld32((c.r[17].w[0] + 100u));
    c.f[14] = ld32((c.r[17].w[0] + 104u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272060u); c.f[12] = ld32((c.r[17].w[0] + 96u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00272060u) [[unlikely]] return; }
L_00272060:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027206Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x0027206Cu) [[unlikely]] return; }
L_0027206C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272078u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00272078u) [[unlikely]] return; }
L_00272078:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272084u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00272084u) [[unlikely]] return; }
L_00272084:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272090u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00272090u) [[unlikely]] return; }
L_00272090:
    c.f[13] = ld32((c.r[17].w[0] + 116u));
    c.f[14] = ld32((c.r[17].w[0] + 120u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002720A0u); c.f[12] = ld32((c.r[17].w[0] + 112u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002720A0u) [[unlikely]] return; }
L_002720A0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002720ACu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002720ACu) [[unlikely]] return; }
L_002720AC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002720B8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002720B8u) [[unlikely]] return; }
L_002720B8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002720C4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002720C4u) [[unlikely]] return; }
L_002720C4:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002720D0u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002720D0u) [[unlikely]] return; }
L_002720D0:
    c.f[13] = ld32((c.r[17].w[0] + 132u));
    c.f[14] = ld32((c.r[17].w[0] + 136u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002720E0u); c.f[12] = ld32((c.r[17].w[0] + 128u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002720E0u) [[unlikely]] return; }
L_002720E0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002720ECu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002720ECu) [[unlikely]] return; }
L_002720EC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002720F8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002720F8u) [[unlikely]] return; }
L_002720F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272100u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00272100u) [[unlikely]] return; }
L_00272100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272108u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00272108u) [[unlikely]] return; }
L_00272108:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00272130:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027215Cu); mmi::paddub(c.r[16], c.r[7], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x0027215Cu) [[unlikely]] return; }
L_0027215C:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272184u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00272184u) [[unlikely]] return; }
L_00272184:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    c.r[4].d[0] = 0ull | 65535ull;
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002721A0u); c.r[4].d[0] = c.r[2].d[0] & c.r[4].d[0];  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002721A0u) [[unlikely]] return; }
L_002721A0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002721B8u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002721B8u) [[unlikely]] return; }
L_002721B8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002721D0u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002721D0u) [[unlikely]] return; }
L_002721D0:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002721DCu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002721DCu) [[unlikely]] return; }
L_002721DC:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002721ECu); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002721ECu) [[unlikely]] return; }
L_002721EC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002721F8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002721F8u) [[unlikely]] return; }
L_002721F8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272204u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00272204u) [[unlikely]] return; }
L_00272204:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272210u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00272210u) [[unlikely]] return; }
L_00272210:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027221Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0027221Cu) [[unlikely]] return; }
L_0027221C:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027222Cu); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0027222Cu) [[unlikely]] return; }
L_0027222C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272238u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00272238u) [[unlikely]] return; }
L_00272238:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272244u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00272244u) [[unlikely]] return; }
L_00272244:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272250u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00272250u) [[unlikely]] return; }
L_00272250:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027225Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0027225Cu) [[unlikely]] return; }
L_0027225C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272264u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x00272264u) [[unlikely]] return; }
L_00272264:
    set32(c.r[6], c.r[17].w[0] + 48u);
    set32(c.r[8], 0u + 1u);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027227Cu); mmi::paddub(c.r[7], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005C(c, 88u, depth + 1u); else { c.pc = 0x002704D0u; return; } if (c.pc != 0x0027227Cu) [[unlikely]] return; }
L_0027227C:
    set32(c.r[5], c.r[18].w[0] + 128u);
    set32(c.r[6], c.r[17].w[0] + 80u);
    set32(c.r[7], c.r[16].w[0] + 24u);
    set32(c.r[8], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272294u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_005C(c, 133u, depth + 1u); else { c.pc = 0x00270A30u; return; } if (c.pc != 0x00272294u) [[unlikely]] return; }
L_00272294:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027229Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x0027229Cu) [[unlikely]] return; }
L_0027229C:
    set32(c.r[5], c.r[18].w[0] + 192u);
    set32(c.r[6], c.r[17].w[0] + 96u);
    set32(c.r[7], c.r[16].w[0] + 36u);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002722B4u); mmi::paddub(c.r[8], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_005C(c, 88u, depth + 1u); else { c.pc = 0x002704D0u; return; } if (c.pc != 0x002722B4u) [[unlikely]] return; }
L_002722B4:
    set32(c.r[5], c.r[18].w[0] + 320u);
    set32(c.r[6], c.r[17].w[0] + 128u);
    set32(c.r[7], c.r[16].w[0] + 60u);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002722CCu); mmi::paddub(c.r[8], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_005C(c, 133u, depth + 1u); else { c.pc = 0x00270A30u; return; } if (c.pc != 0x002722CCu) [[unlikely]] return; }
L_002722CC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002722F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027231Cu); mmi::paddub(c.r[16], c.r[7], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x0027231Cu) [[unlikely]] return; }
L_0027231C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 762u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002723B4; } }
    c.f[13] = ld32((c.r[19].w[0] + 36u));
    c.f[14] = ld32((c.r[19].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272338u); c.f[12] = ld32((c.r[19].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00272338u) [[unlikely]] return; }
L_00272338:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272340u); set32(c.r[4], c.r[19].w[0] + 8320u);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x00272340u) [[unlikely]] return; }
L_00272340:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272350u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00272350u) [[unlikely]] return; }
L_00272350:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272360u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00272360u) [[unlikely]] return; }
L_00272360:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027236Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0027236Cu) [[unlikely]] return; }
L_0027236C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272378u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00272378u) [[unlikely]] return; }
L_00272378:
    c.f[0] = ld32((c.r[19].w[0] + 8012u));
    c.f[12] = 0u;
    c.f[14] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272390u); c.f[13] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00272390u) [[unlikely]] return; }
L_00272390:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027239Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0027239Cu) [[unlikely]] return; }
L_0027239C:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002723ACu); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002723ACu) [[unlikely]] return; }
L_002723AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0])));  if (t) { goto L_00272458; } }
L_002723B4:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002723DCu); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002723DCu) [[unlikely]] return; }
L_002723DC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    c.r[4].d[0] = 0ull | 65535ull;
    set32(c.r[17], c.r[17].w[0] + 16u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002723FCu); c.r[4].d[0] = c.r[2].d[0] & c.r[4].d[0];  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002723FCu) [[unlikely]] return; }
L_002723FC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272414u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00272414u) [[unlikely]] return; }
L_00272414:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027242Cu); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x0027242Cu) [[unlikely]] return; }
L_0027242C:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272438u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00272438u) [[unlikely]] return; }
L_00272438:
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = ld32((c.r[17].w[0]));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272454u); c.f[13] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00272454u) [[unlikely]] return; }
L_00272454:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_00272458:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272460u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00272460u) [[unlikely]] return; }
L_00272460:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027246Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0027246Cu) [[unlikely]] return; }
L_0027246C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272478u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00272478u) [[unlikely]] return; }
L_00272478:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272484u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00272484u) [[unlikely]] return; }
L_00272484:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027248Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x0027248Cu) [[unlikely]] return; }
L_0027248C:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027249Cu); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0027249Cu) [[unlikely]] return; }
L_0027249C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002724A8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002724A8u) [[unlikely]] return; }
L_002724A8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002724B4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002724B4u) [[unlikely]] return; }
L_002724B4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002724C0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002724C0u) [[unlikely]] return; }
L_002724C0:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002724CCu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002724CCu) [[unlikely]] return; }
L_002724CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002724D4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x002724D4u) [[unlikely]] return; }
L_002724D4:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002724E4u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002724E4u) [[unlikely]] return; }
L_002724E4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002724F0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002724F0u) [[unlikely]] return; }
L_002724F0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002724FCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002724FCu) [[unlikely]] return; }
L_002724FC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272508u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00272508u) [[unlikely]] return; }
L_00272508:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272514u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00272514u) [[unlikely]] return; }
L_00272514:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027251Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x0027251Cu) [[unlikely]] return; }
L_0027251C:
    c.f[13] = ld32((c.r[17].w[0] + 52u));
    c.f[14] = ld32((c.r[17].w[0] + 56u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027252Cu); c.f[12] = ld32((c.r[17].w[0] + 48u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0027252Cu) [[unlikely]] return; }
L_0027252C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272538u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00272538u) [[unlikely]] return; }
L_00272538:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272544u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00272544u) [[unlikely]] return; }
L_00272544:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272550u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00272550u) [[unlikely]] return; }
L_00272550:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027255Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0027255Cu) [[unlikely]] return; }
L_0027255C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272564u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x00272564u) [[unlikely]] return; }
L_00272564:
    c.f[13] = ld32((c.r[17].w[0] + 68u));
    c.f[14] = ld32((c.r[17].w[0] + 72u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272574u); c.f[12] = ld32((c.r[17].w[0] + 64u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00272574u) [[unlikely]] return; }
L_00272574:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272580u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00272580u) [[unlikely]] return; }
L_00272580:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027258Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0027258Cu) [[unlikely]] return; }
L_0027258C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272598u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00272598u) [[unlikely]] return; }
L_00272598:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002725A4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002725A4u) [[unlikely]] return; }
L_002725A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002725ACu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x002725ACu) [[unlikely]] return; }
L_002725AC:
    c.f[13] = ld32((c.r[17].w[0] + 84u));
    c.f[14] = ld32((c.r[17].w[0] + 88u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002725BCu); c.f[12] = ld32((c.r[17].w[0] + 80u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002725BCu) [[unlikely]] return; }
L_002725BC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002725C8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002725C8u) [[unlikely]] return; }
L_002725C8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002725D4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002725D4u) [[unlikely]] return; }
L_002725D4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002725E0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002725E0u) [[unlikely]] return; }
L_002725E0:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002725ECu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002725ECu) [[unlikely]] return; }
L_002725EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002725F4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x002725F4u) [[unlikely]] return; }
L_002725F4:
    c.f[13] = ld32((c.r[17].w[0] + 100u));
    c.f[14] = ld32((c.r[17].w[0] + 104u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272604u); c.f[12] = ld32((c.r[17].w[0] + 96u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00272604u) [[unlikely]] return; }
L_00272604:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272610u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00272610u) [[unlikely]] return; }
L_00272610:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027261Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0027261Cu) [[unlikely]] return; }
L_0027261C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272628u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00272628u) [[unlikely]] return; }
L_00272628:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272634u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00272634u) [[unlikely]] return; }
L_00272634:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027263Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x0027263Cu) [[unlikely]] return; }
L_0027263C:
    c.f[13] = ld32((c.r[17].w[0] + 116u));
    c.f[14] = ld32((c.r[17].w[0] + 120u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027264Cu); c.f[12] = ld32((c.r[17].w[0] + 112u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0027264Cu) [[unlikely]] return; }
L_0027264C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272658u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00272658u) [[unlikely]] return; }
L_00272658:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272664u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00272664u) [[unlikely]] return; }
L_00272664:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272670u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00272670u) [[unlikely]] return; }
L_00272670:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027267Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0027267Cu) [[unlikely]] return; }
L_0027267C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272684u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x00272684u) [[unlikely]] return; }
L_00272684:
    c.f[13] = ld32((c.r[17].w[0] + 132u));
    c.f[14] = ld32((c.r[17].w[0] + 136u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272694u); c.f[12] = ld32((c.r[17].w[0] + 128u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00272694u) [[unlikely]] return; }
L_00272694:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002726A0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002726A0u) [[unlikely]] return; }
L_002726A0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002726ACu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002726ACu) [[unlikely]] return; }
L_002726AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002726B4u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002726B4u) [[unlikely]] return; }
L_002726B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002726BCu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002726BCu) [[unlikely]] return; }
L_002726BC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002726E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027270Cu); mmi::paddub(c.r[16], c.r[7], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x0027270Cu) [[unlikely]] return; }
L_0027270C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 762u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002727AC; } }
    c.f[13] = ld32((c.r[19].w[0] + 36u));
    c.f[14] = ld32((c.r[19].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272728u); c.f[12] = ld32((c.r[19].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00272728u) [[unlikely]] return; }
L_00272728:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272730u); set32(c.r[4], c.r[19].w[0] + 8320u);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x00272730u) [[unlikely]] return; }
L_00272730:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272740u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00272740u) [[unlikely]] return; }
L_00272740:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272750u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00272750u) [[unlikely]] return; }
L_00272750:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027275Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0027275Cu) [[unlikely]] return; }
L_0027275C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272768u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00272768u) [[unlikely]] return; }
L_00272768:
    c.f[0] = ld32((c.r[19].w[0] + 8012u));
    c.f[12] = 0u;
    c.f[14] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272780u); c.f[13] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00272780u) [[unlikely]] return; }
L_00272780:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027278Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0027278Cu) [[unlikely]] return; }
L_0027278C:
    set32(c.r[2], ld32((c.r[19].w[0] + 7820u)));
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027279Cu); c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x0027279Cu) [[unlikely]] return; }
L_0027279C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002727A4u); c.r[4].d[0] = ld16((c.r[19].w[0] + 7816u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002727A4u) [[unlikely]] return; }
L_002727A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_00272858; } }
L_002727AC:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002727D4u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002727D4u) [[unlikely]] return; }
L_002727D4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    c.r[4].d[0] = 0ull | 65535ull;
    set32(c.r[17], c.r[17].w[0] + 16u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002727F4u); c.r[4].d[0] = c.r[2].d[0] & c.r[4].d[0];  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002727F4u) [[unlikely]] return; }
L_002727F4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027280Cu); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0027280Cu) [[unlikely]] return; }
L_0027280C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272824u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00272824u) [[unlikely]] return; }
L_00272824:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272830u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00272830u) [[unlikely]] return; }
L_00272830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272838u); c.r[4].d[0] = ld16((c.r[19].w[0] + 7820u));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00272838u) [[unlikely]] return; }
L_00272838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272840u); c.r[4].d[0] = ld16((c.r[19].w[0] + 7816u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00272840u) [[unlikely]] return; }
L_00272840:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272854u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00272854u) [[unlikely]] return; }
L_00272854:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_00272858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272860u);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x00272860u) [[unlikely]] return; }
L_00272860:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272870u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00272870u) [[unlikely]] return; }
L_00272870:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027287Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x0027287Cu) [[unlikely]] return; }
L_0027287C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272888u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00272888u) [[unlikely]] return; }
L_00272888:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272894u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00272894u) [[unlikely]] return; }
L_00272894:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002728A0u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002728A0u) [[unlikely]] return; }
L_002728A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002728A8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x002728A8u) [[unlikely]] return; }
L_002728A8:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002728B8u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002728B8u) [[unlikely]] return; }
L_002728B8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002728C4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002728C4u) [[unlikely]] return; }
L_002728C4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002728D0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002728D0u) [[unlikely]] return; }
L_002728D0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002728DCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002728DCu) [[unlikely]] return; }
L_002728DC:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002728E8u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002728E8u) [[unlikely]] return; }
L_002728E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002728F0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x002728F0u) [[unlikely]] return; }
L_002728F0:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272900u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00272900u) [[unlikely]] return; }
L_00272900:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027290Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x0027290Cu) [[unlikely]] return; }
L_0027290C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272918u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00272918u) [[unlikely]] return; }
L_00272918:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272924u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00272924u) [[unlikely]] return; }
L_00272924:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272930u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00272930u) [[unlikely]] return; }
L_00272930:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272938u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x00272938u) [[unlikely]] return; }
L_00272938:
    c.f[13] = ld32((c.r[17].w[0] + 52u));
    c.f[14] = ld32((c.r[17].w[0] + 56u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272948u); c.f[12] = ld32((c.r[17].w[0] + 48u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00272948u) [[unlikely]] return; }
L_00272948:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272954u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00272954u) [[unlikely]] return; }
L_00272954:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272960u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00272960u) [[unlikely]] return; }
L_00272960:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027296Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x0027296Cu) [[unlikely]] return; }
L_0027296C:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272978u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00272978u) [[unlikely]] return; }
L_00272978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272980u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x00272980u) [[unlikely]] return; }
L_00272980:
    c.f[13] = ld32((c.r[17].w[0] + 68u));
    c.f[14] = ld32((c.r[17].w[0] + 72u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272990u); c.f[12] = ld32((c.r[17].w[0] + 64u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00272990u) [[unlikely]] return; }
L_00272990:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027299Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x0027299Cu) [[unlikely]] return; }
L_0027299C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002729A8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002729A8u) [[unlikely]] return; }
L_002729A8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002729B4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002729B4u) [[unlikely]] return; }
L_002729B4:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002729C0u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002729C0u) [[unlikely]] return; }
L_002729C0:
    c.f[13] = ld32((c.r[17].w[0] + 84u));
    c.f[14] = ld32((c.r[17].w[0] + 88u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002729D0u); c.f[12] = ld32((c.r[17].w[0] + 80u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002729D0u) [[unlikely]] return; }
L_002729D0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002729DCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002729DCu) [[unlikely]] return; }
L_002729DC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002729E8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002729E8u) [[unlikely]] return; }
L_002729E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002729F0u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002729F0u) [[unlikely]] return; }
L_002729F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002729F8u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002729F8u) [[unlikely]] return; }
L_002729F8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00272A20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272A4Cu); mmi::paddub(c.r[16], c.r[7], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00272A4Cu) [[unlikely]] return; }
L_00272A4C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 762u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00272AE4; } }
    c.f[13] = ld32((c.r[19].w[0] + 36u));
    c.f[14] = ld32((c.r[19].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272A68u); c.f[12] = ld32((c.r[19].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00272A68u) [[unlikely]] return; }
L_00272A68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272A70u); set32(c.r[4], c.r[19].w[0] + 8320u);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x00272A70u) [[unlikely]] return; }
L_00272A70:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272A80u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00272A80u) [[unlikely]] return; }
L_00272A80:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272A90u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00272A90u) [[unlikely]] return; }
L_00272A90:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272A9Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00272A9Cu) [[unlikely]] return; }
L_00272A9C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272AA8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00272AA8u) [[unlikely]] return; }
L_00272AA8:
    c.f[0] = ld32((c.r[19].w[0] + 8012u));
    c.f[12] = 0u;
    c.f[14] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272AC0u); c.f[13] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00272AC0u) [[unlikely]] return; }
L_00272AC0:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272ACCu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00272ACCu) [[unlikely]] return; }
L_00272ACC:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272ADCu); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00272ADCu) [[unlikely]] return; }
L_00272ADC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 7820u)));  if (t) { goto L_00272B7C; } }
L_00272AE4:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272B0Cu); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00272B0Cu) [[unlikely]] return; }
L_00272B0C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    c.r[4].d[0] = 0ull | 65535ull;
    set32(c.r[17], c.r[17].w[0] + 16u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272B2Cu); c.r[4].d[0] = c.r[2].d[0] & c.r[4].d[0];  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00272B2Cu) [[unlikely]] return; }
L_00272B2C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272B44u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00272B44u) [[unlikely]] return; }
L_00272B44:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272B5Cu); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00272B5Cu) [[unlikely]] return; }
L_00272B5C:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272B68u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00272B68u) [[unlikely]] return; }
L_00272B68:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272B78u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00272B78u) [[unlikely]] return; }
L_00272B78:
    set32(c.r[2], ld32((c.r[19].w[0] + 7820u)));
    c.budget -= 1;
L_00272B7C:
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272B88u); c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00272B88u) [[unlikely]] return; }
L_00272B88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272B90u); c.r[4].d[0] = ld16((c.r[19].w[0] + 7816u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00272B90u) [[unlikely]] return; }
L_00272B90:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272B9Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00272B9Cu) [[unlikely]] return; }
L_00272B9C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272BA8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00272BA8u) [[unlikely]] return; }
L_00272BA8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272BB4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00272BB4u) [[unlikely]] return; }
L_00272BB4:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272BC0u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00272BC0u) [[unlikely]] return; }
L_00272BC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272BC8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x00272BC8u) [[unlikely]] return; }
L_00272BC8:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272BD8u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00272BD8u) [[unlikely]] return; }
L_00272BD8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272BE4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00272BE4u) [[unlikely]] return; }
L_00272BE4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272BF0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00272BF0u) [[unlikely]] return; }
L_00272BF0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272BFCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00272BFCu) [[unlikely]] return; }
L_00272BFC:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272C08u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00272C08u) [[unlikely]] return; }
L_00272C08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272C10u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x00272C10u) [[unlikely]] return; }
L_00272C10:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272C20u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00272C20u) [[unlikely]] return; }
L_00272C20:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272C2Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00272C2Cu) [[unlikely]] return; }
L_00272C2C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272C38u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00272C38u) [[unlikely]] return; }
L_00272C38:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272C44u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00272C44u) [[unlikely]] return; }
L_00272C44:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272C50u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00272C50u) [[unlikely]] return; }
L_00272C50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272C58u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x00272C58u) [[unlikely]] return; }
L_00272C58:
    c.f[13] = ld32((c.r[17].w[0] + 52u));
    c.f[14] = ld32((c.r[17].w[0] + 56u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272C68u); c.f[12] = ld32((c.r[17].w[0] + 48u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00272C68u) [[unlikely]] return; }
L_00272C68:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272C74u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00272C74u) [[unlikely]] return; }
L_00272C74:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272C80u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00272C80u) [[unlikely]] return; }
L_00272C80:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272C8Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00272C8Cu) [[unlikely]] return; }
L_00272C8C:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272C98u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00272C98u) [[unlikely]] return; }
L_00272C98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272CA0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x00272CA0u) [[unlikely]] return; }
L_00272CA0:
    c.f[13] = ld32((c.r[17].w[0] + 68u));
    c.f[14] = ld32((c.r[17].w[0] + 72u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272CB0u); c.f[12] = ld32((c.r[17].w[0] + 64u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00272CB0u) [[unlikely]] return; }
L_00272CB0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272CBCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00272CBCu) [[unlikely]] return; }
L_00272CBC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272CC8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00272CC8u) [[unlikely]] return; }
L_00272CC8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272CD4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00272CD4u) [[unlikely]] return; }
L_00272CD4:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272CE0u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00272CE0u) [[unlikely]] return; }
L_00272CE0:
    c.f[13] = ld32((c.r[17].w[0] + 84u));
    c.f[14] = ld32((c.r[17].w[0] + 88u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272CF0u); c.f[12] = ld32((c.r[17].w[0] + 80u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00272CF0u) [[unlikely]] return; }
L_00272CF0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272CFCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00272CFCu) [[unlikely]] return; }
L_00272CFC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272D08u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00272D08u) [[unlikely]] return; }
L_00272D08:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272D14u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00272D14u) [[unlikely]] return; }
L_00272D14:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272D20u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00272D20u) [[unlikely]] return; }
L_00272D20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272D28u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x00272D28u) [[unlikely]] return; }
L_00272D28:
    c.f[13] = ld32((c.r[17].w[0] + 100u));
    c.f[14] = ld32((c.r[17].w[0] + 104u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272D38u); c.f[12] = ld32((c.r[17].w[0] + 96u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00272D38u) [[unlikely]] return; }
L_00272D38:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272D44u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00272D44u) [[unlikely]] return; }
L_00272D44:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272D50u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00272D50u) [[unlikely]] return; }
L_00272D50:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272D5Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00272D5Cu) [[unlikely]] return; }
L_00272D5C:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272D68u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00272D68u) [[unlikely]] return; }
L_00272D68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272D70u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x00272D70u) [[unlikely]] return; }
L_00272D70:
    c.f[13] = ld32((c.r[17].w[0] + 116u));
    c.f[14] = ld32((c.r[17].w[0] + 120u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272D80u); c.f[12] = ld32((c.r[17].w[0] + 112u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00272D80u) [[unlikely]] return; }
L_00272D80:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272D8Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00272D8Cu) [[unlikely]] return; }
L_00272D8C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272D98u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00272D98u) [[unlikely]] return; }
L_00272D98:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272DA4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00272DA4u) [[unlikely]] return; }
L_00272DA4:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272DB0u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00272DB0u) [[unlikely]] return; }
L_00272DB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272DB8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x00272DB8u) [[unlikely]] return; }
L_00272DB8:
    c.f[13] = ld32((c.r[17].w[0] + 132u));
    c.f[14] = ld32((c.r[17].w[0] + 136u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272DC8u); c.f[12] = ld32((c.r[17].w[0] + 128u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00272DC8u) [[unlikely]] return; }
L_00272DC8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272DD4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00272DD4u) [[unlikely]] return; }
L_00272DD4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272DE0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00272DE0u) [[unlikely]] return; }
L_00272DE0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272DECu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00272DECu) [[unlikely]] return; }
L_00272DEC:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272DF8u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00272DF8u) [[unlikely]] return; }
L_00272DF8:
    c.f[13] = ld32((c.r[17].w[0] + 148u));
    c.f[14] = ld32((c.r[17].w[0] + 152u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272E08u); c.f[12] = ld32((c.r[17].w[0] + 144u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00272E08u) [[unlikely]] return; }
L_00272E08:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272E14u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00272E14u) [[unlikely]] return; }
L_00272E14:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272E20u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00272E20u) [[unlikely]] return; }
L_00272E20:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272E2Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00272E2Cu) [[unlikely]] return; }
L_00272E2C:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272E38u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00272E38u) [[unlikely]] return; }
L_00272E38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272E40u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x00272E40u) [[unlikely]] return; }
L_00272E40:
    c.f[13] = ld32((c.r[17].w[0] + 164u));
    c.f[14] = ld32((c.r[17].w[0] + 168u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272E50u); c.f[12] = ld32((c.r[17].w[0] + 160u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00272E50u) [[unlikely]] return; }
L_00272E50:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272E5Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00272E5Cu) [[unlikely]] return; }
L_00272E5C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272E68u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00272E68u) [[unlikely]] return; }
L_00272E68:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272E74u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00272E74u) [[unlikely]] return; }
L_00272E74:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272E80u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00272E80u) [[unlikely]] return; }
L_00272E80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272E88u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x00272E88u) [[unlikely]] return; }
L_00272E88:
    c.f[13] = ld32((c.r[17].w[0] + 180u));
    c.f[14] = ld32((c.r[17].w[0] + 184u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272E98u); c.f[12] = ld32((c.r[17].w[0] + 176u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00272E98u) [[unlikely]] return; }
L_00272E98:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272EA4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00272EA4u) [[unlikely]] return; }
L_00272EA4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272EB0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00272EB0u) [[unlikely]] return; }
L_00272EB0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272EBCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00272EBCu) [[unlikely]] return; }
L_00272EBC:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272EC8u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00272EC8u) [[unlikely]] return; }
L_00272EC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272ED0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x00272ED0u) [[unlikely]] return; }
L_00272ED0:
    c.f[13] = ld32((c.r[17].w[0] + 196u));
    c.f[14] = ld32((c.r[17].w[0] + 200u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272EE0u); c.f[12] = ld32((c.r[17].w[0] + 192u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00272EE0u) [[unlikely]] return; }
L_00272EE0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272EECu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00272EECu) [[unlikely]] return; }
L_00272EEC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272EF8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00272EF8u) [[unlikely]] return; }
L_00272EF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272F00u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00272F00u) [[unlikely]] return; }
L_00272F00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272F08u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00272F08u) [[unlikely]] return; }
L_00272F08:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00272F30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272F5Cu); mmi::paddub(c.r[16], c.r[7], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00272F5Cu) [[unlikely]] return; }
L_00272F5C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 762u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00272FFC; } }
    c.f[13] = ld32((c.r[19].w[0] + 36u));
    c.f[14] = ld32((c.r[19].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272F78u); c.f[12] = ld32((c.r[19].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00272F78u) [[unlikely]] return; }
L_00272F78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272F80u); set32(c.r[4], c.r[19].w[0] + 8320u);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x00272F80u) [[unlikely]] return; }
L_00272F80:
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272F90u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00272F90u) [[unlikely]] return; }
L_00272F90:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272FA0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00272FA0u) [[unlikely]] return; }
L_00272FA0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272FACu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00272FACu) [[unlikely]] return; }
L_00272FAC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272FB8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00272FB8u) [[unlikely]] return; }
L_00272FB8:
    c.f[0] = ld32((c.r[19].w[0] + 8012u));
    c.f[12] = 0u;
    c.f[14] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272FD0u); c.f[13] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00272FD0u) [[unlikely]] return; }
L_00272FD0:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272FDCu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00272FDCu) [[unlikely]] return; }
L_00272FDC:
    set32(c.r[2], ld32((c.r[19].w[0] + 7820u)));
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272FECu); c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00272FECu) [[unlikely]] return; }
L_00272FEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272FF4u); c.r[4].d[0] = ld16((c.r[19].w[0] + 7816u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00272FF4u) [[unlikely]] return; }
L_00272FF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[17].w[0]));  if (t) { goto L_002730A8; } }
L_00272FFC:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273024u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00273024u) [[unlikely]] return; }
L_00273024:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    c.r[4].d[0] = 0ull | 65535ull;
    set32(c.r[17], c.r[17].w[0] + 16u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273044u); c.r[4].d[0] = c.r[2].d[0] & c.r[4].d[0];  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00273044u) [[unlikely]] return; }
L_00273044:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027305Cu); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0027305Cu) [[unlikely]] return; }
L_0027305C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273074u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00273074u) [[unlikely]] return; }
L_00273074:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273080u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00273080u) [[unlikely]] return; }
L_00273080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273088u); c.r[4].d[0] = ld16((c.r[19].w[0] + 7820u));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00273088u) [[unlikely]] return; }
L_00273088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273090u); c.r[4].d[0] = ld16((c.r[19].w[0] + 7816u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00273090u) [[unlikely]] return; }
L_00273090:
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002730A4u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002730A4u) [[unlikely]] return; }
L_002730A4:
    c.f[12] = ld32((c.r[17].w[0]));
    c.budget -= 1;
L_002730A8:
    c.f[14] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002730B4u); c.f[13] = ld32((c.r[17].w[0] + 4u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002730B4u) [[unlikely]] return; }
L_002730B4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002730C0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002730C0u) [[unlikely]] return; }
L_002730C0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002730CCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002730CCu) [[unlikely]] return; }
L_002730CC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002730D8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002730D8u) [[unlikely]] return; }
L_002730D8:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002730E4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002730E4u) [[unlikely]] return; }
L_002730E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002730ECu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x002730ECu) [[unlikely]] return; }
L_002730EC:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002730FCu); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002730FCu) [[unlikely]] return; }
L_002730FC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273108u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00273108u) [[unlikely]] return; }
L_00273108:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273114u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00273114u) [[unlikely]] return; }
L_00273114:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273120u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00273120u) [[unlikely]] return; }
L_00273120:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027312Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0027312Cu) [[unlikely]] return; }
L_0027312C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273134u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x00273134u) [[unlikely]] return; }
L_00273134:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273144u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00273144u) [[unlikely]] return; }
L_00273144:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273150u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00273150u) [[unlikely]] return; }
L_00273150:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027315Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0027315Cu) [[unlikely]] return; }
L_0027315C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273168u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00273168u) [[unlikely]] return; }
L_00273168:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273174u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00273174u) [[unlikely]] return; }
L_00273174:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027317Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x0027317Cu) [[unlikely]] return; }
L_0027317C:
    c.f[13] = ld32((c.r[17].w[0] + 52u));
    c.f[14] = ld32((c.r[17].w[0] + 56u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027318Cu); c.f[12] = ld32((c.r[17].w[0] + 48u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0027318Cu) [[unlikely]] return; }
L_0027318C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273198u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00273198u) [[unlikely]] return; }
L_00273198:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002731A4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002731A4u) [[unlikely]] return; }
L_002731A4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002731B0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002731B0u) [[unlikely]] return; }
L_002731B0:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002731BCu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002731BCu) [[unlikely]] return; }
L_002731BC:
    c.f[13] = ld32((c.r[17].w[0] + 68u));
    c.f[14] = ld32((c.r[17].w[0] + 72u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002731CCu); c.f[12] = ld32((c.r[17].w[0] + 64u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002731CCu) [[unlikely]] return; }
L_002731CC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002731D8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002731D8u) [[unlikely]] return; }
L_002731D8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002731E4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002731E4u) [[unlikely]] return; }
L_002731E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002731ECu); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002731ECu) [[unlikely]] return; }
L_002731EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002731F4u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002731F4u) [[unlikely]] return; }
L_002731F4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00273210:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 14176u);
    set32(c.r[5], c.r[4].w[0] + 1984u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[6], c.r[4].w[0] + 4032u);
    set32(c.r[7], c.r[4].w[0] + 4544u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00270000u < 16384u) { entry = entries_005C[(t - 0x00270000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00273240:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027326Cu); mmi::paddub(c.r[16], c.r[7], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x0027326Cu) [[unlikely]] return; }
L_0027326C:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273294u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00273294u) [[unlikely]] return; }
L_00273294:
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002732A4u); c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002732A4u) [[unlikely]] return; }
L_002732A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002732ACu); c.r[4].d[0] = ld16((c.r[19].w[0] + 88u));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002732ACu) [[unlikely]] return; }
L_002732AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002732B4u); c.r[4].d[0] = ld16((c.r[19].w[0] + 80u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002732B4u) [[unlikely]] return; }
L_002732B4:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002732C0u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002732C0u) [[unlikely]] return; }
L_002732C0:
    set32(c.r[16], c.r[16].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002732CCu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x002732CCu) [[unlikely]] return; }
L_002732CC:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002732DCu); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002732DCu) [[unlikely]] return; }
L_002732DC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002732E8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002732E8u) [[unlikely]] return; }
L_002732E8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002732F4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002732F4u) [[unlikely]] return; }
L_002732F4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273300u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00273300u) [[unlikely]] return; }
L_00273300:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027330Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0027330Cu) [[unlikely]] return; }
L_0027330C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273314u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x00273314u) [[unlikely]] return; }
L_00273314:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273324u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00273324u) [[unlikely]] return; }
L_00273324:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273330u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00273330u) [[unlikely]] return; }
L_00273330:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027333Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0027333Cu) [[unlikely]] return; }
L_0027333C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273348u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00273348u) [[unlikely]] return; }
L_00273348:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273354u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00273354u) [[unlikely]] return; }
L_00273354:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027335Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x0027335Cu) [[unlikely]] return; }
L_0027335C:
    c.f[13] = ld32((c.r[17].w[0] + 52u));
    c.f[14] = ld32((c.r[17].w[0] + 56u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027336Cu); c.f[12] = ld32((c.r[17].w[0] + 48u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0027336Cu) [[unlikely]] return; }
L_0027336C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273378u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00273378u) [[unlikely]] return; }
L_00273378:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273384u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00273384u) [[unlikely]] return; }
L_00273384:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273390u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00273390u) [[unlikely]] return; }
L_00273390:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027339Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0027339Cu) [[unlikely]] return; }
L_0027339C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002733A4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x002733A4u) [[unlikely]] return; }
L_002733A4:
    c.f[13] = ld32((c.r[17].w[0] + 68u));
    c.f[14] = ld32((c.r[17].w[0] + 72u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002733B4u); c.f[12] = ld32((c.r[17].w[0] + 64u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002733B4u) [[unlikely]] return; }
L_002733B4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002733C0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002733C0u) [[unlikely]] return; }
L_002733C0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002733CCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002733CCu) [[unlikely]] return; }
L_002733CC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002733D8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002733D8u) [[unlikely]] return; }
L_002733D8:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002733E4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002733E4u) [[unlikely]] return; }
L_002733E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002733ECu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x002733ECu) [[unlikely]] return; }
L_002733EC:
    c.f[13] = ld32((c.r[17].w[0] + 84u));
    c.f[14] = ld32((c.r[17].w[0] + 88u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002733FCu); c.f[12] = ld32((c.r[17].w[0] + 80u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002733FCu) [[unlikely]] return; }
L_002733FC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273408u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00273408u) [[unlikely]] return; }
L_00273408:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273414u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00273414u) [[unlikely]] return; }
L_00273414:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273420u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00273420u) [[unlikely]] return; }
L_00273420:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027342Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0027342Cu) [[unlikely]] return; }
L_0027342C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273434u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x00273434u) [[unlikely]] return; }
L_00273434:
    c.f[13] = ld32((c.r[17].w[0] + 100u));
    c.f[14] = ld32((c.r[17].w[0] + 104u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273444u); c.f[12] = ld32((c.r[17].w[0] + 96u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00273444u) [[unlikely]] return; }
L_00273444:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273450u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00273450u) [[unlikely]] return; }
L_00273450:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027345Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0027345Cu) [[unlikely]] return; }
L_0027345C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273468u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00273468u) [[unlikely]] return; }
L_00273468:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273474u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00273474u) [[unlikely]] return; }
L_00273474:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027347Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x0027347Cu) [[unlikely]] return; }
L_0027347C:
    c.f[13] = ld32((c.r[17].w[0] + 116u));
    c.f[14] = ld32((c.r[17].w[0] + 120u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027348Cu); c.f[12] = ld32((c.r[17].w[0] + 112u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0027348Cu) [[unlikely]] return; }
L_0027348C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273498u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00273498u) [[unlikely]] return; }
L_00273498:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002734A4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002734A4u) [[unlikely]] return; }
L_002734A4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002734B0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002734B0u) [[unlikely]] return; }
L_002734B0:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002734BCu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002734BCu) [[unlikely]] return; }
L_002734BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002734C4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x002734C4u) [[unlikely]] return; }
L_002734C4:
    c.f[13] = ld32((c.r[17].w[0] + 132u));
    c.f[14] = ld32((c.r[17].w[0] + 136u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002734D4u); c.f[12] = ld32((c.r[17].w[0] + 128u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002734D4u) [[unlikely]] return; }
L_002734D4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002734E0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002734E0u) [[unlikely]] return; }
L_002734E0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002734ECu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002734ECu) [[unlikely]] return; }
L_002734EC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002734F8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002734F8u) [[unlikely]] return; }
L_002734F8:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273504u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00273504u) [[unlikely]] return; }
L_00273504:
    c.f[13] = ld32((c.r[17].w[0] + 148u));
    c.f[14] = ld32((c.r[17].w[0] + 152u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273514u); c.f[12] = ld32((c.r[17].w[0] + 144u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00273514u) [[unlikely]] return; }
L_00273514:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273520u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00273520u) [[unlikely]] return; }
L_00273520:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027352Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0027352Cu) [[unlikely]] return; }
L_0027352C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273538u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00273538u) [[unlikely]] return; }
L_00273538:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273544u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00273544u) [[unlikely]] return; }
L_00273544:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027354Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x0027354Cu) [[unlikely]] return; }
L_0027354C:
    c.f[13] = ld32((c.r[17].w[0] + 164u));
    c.f[14] = ld32((c.r[17].w[0] + 168u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027355Cu); c.f[12] = ld32((c.r[17].w[0] + 160u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0027355Cu) [[unlikely]] return; }
L_0027355C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273568u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00273568u) [[unlikely]] return; }
L_00273568:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273574u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00273574u) [[unlikely]] return; }
L_00273574:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273580u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00273580u) [[unlikely]] return; }
L_00273580:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027358Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0027358Cu) [[unlikely]] return; }
L_0027358C:
    c.f[13] = ld32((c.r[17].w[0] + 180u));
    c.f[14] = ld32((c.r[17].w[0] + 184u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027359Cu); c.f[12] = ld32((c.r[17].w[0] + 176u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0027359Cu) [[unlikely]] return; }
L_0027359C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002735A8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002735A8u) [[unlikely]] return; }
L_002735A8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002735B4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002735B4u) [[unlikely]] return; }
L_002735B4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002735C0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002735C0u) [[unlikely]] return; }
L_002735C0:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002735CCu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002735CCu) [[unlikely]] return; }
L_002735CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002735D4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x002735D4u) [[unlikely]] return; }
L_002735D4:
    c.f[13] = ld32((c.r[17].w[0] + 196u));
    c.f[14] = ld32((c.r[17].w[0] + 200u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002735E4u); c.f[12] = ld32((c.r[17].w[0] + 192u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002735E4u) [[unlikely]] return; }
L_002735E4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002735F0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002735F0u) [[unlikely]] return; }
L_002735F0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002735FCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002735FCu) [[unlikely]] return; }
L_002735FC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273608u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00273608u) [[unlikely]] return; }
L_00273608:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273614u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00273614u) [[unlikely]] return; }
L_00273614:
    c.f[13] = ld32((c.r[17].w[0] + 212u));
    c.f[14] = ld32((c.r[17].w[0] + 216u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273624u); c.f[12] = ld32((c.r[17].w[0] + 208u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00273624u) [[unlikely]] return; }
L_00273624:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273630u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00273630u) [[unlikely]] return; }
L_00273630:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027363Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0027363Cu) [[unlikely]] return; }
L_0027363C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273648u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00273648u) [[unlikely]] return; }
L_00273648:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273654u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00273654u) [[unlikely]] return; }
L_00273654:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027365Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x0027365Cu) [[unlikely]] return; }
L_0027365C:
    c.f[13] = ld32((c.r[17].w[0] + 228u));
    c.f[14] = ld32((c.r[17].w[0] + 232u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027366Cu); c.f[12] = ld32((c.r[17].w[0] + 224u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0027366Cu) [[unlikely]] return; }
L_0027366C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273678u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00273678u) [[unlikely]] return; }
L_00273678:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273684u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00273684u) [[unlikely]] return; }
L_00273684:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273690u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00273690u) [[unlikely]] return; }
L_00273690:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027369Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0027369Cu) [[unlikely]] return; }
L_0027369C:
    c.f[13] = ld32((c.r[17].w[0] + 244u));
    c.f[14] = ld32((c.r[17].w[0] + 248u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002736ACu); c.f[12] = ld32((c.r[17].w[0] + 240u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002736ACu) [[unlikely]] return; }
L_002736AC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002736B8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002736B8u) [[unlikely]] return; }
L_002736B8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002736C4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002736C4u) [[unlikely]] return; }
L_002736C4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002736D0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002736D0u) [[unlikely]] return; }
L_002736D0:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002736DCu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002736DCu) [[unlikely]] return; }
L_002736DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002736E4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x002736E4u) [[unlikely]] return; }
L_002736E4:
    c.f[13] = ld32((c.r[17].w[0] + 260u));
    c.f[14] = ld32((c.r[17].w[0] + 264u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002736F4u); c.f[12] = ld32((c.r[17].w[0] + 256u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002736F4u) [[unlikely]] return; }
L_002736F4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273700u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00273700u) [[unlikely]] return; }
L_00273700:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027370Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0027370Cu) [[unlikely]] return; }
L_0027370C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273718u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00273718u) [[unlikely]] return; }
L_00273718:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273724u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00273724u) [[unlikely]] return; }
L_00273724:
    c.f[13] = ld32((c.r[17].w[0] + 276u));
    c.f[14] = ld32((c.r[17].w[0] + 280u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273734u); c.f[12] = ld32((c.r[17].w[0] + 272u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00273734u) [[unlikely]] return; }
L_00273734:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273740u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00273740u) [[unlikely]] return; }
L_00273740:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027374Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0027374Cu) [[unlikely]] return; }
L_0027374C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273758u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00273758u) [[unlikely]] return; }
L_00273758:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273764u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00273764u) [[unlikely]] return; }
L_00273764:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027376Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x0027376Cu) [[unlikely]] return; }
L_0027376C:
    c.f[13] = ld32((c.r[17].w[0] + 292u));
    c.f[14] = ld32((c.r[17].w[0] + 296u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027377Cu); c.f[12] = ld32((c.r[17].w[0] + 288u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0027377Cu) [[unlikely]] return; }
L_0027377C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273788u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00273788u) [[unlikely]] return; }
L_00273788:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273794u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00273794u) [[unlikely]] return; }
L_00273794:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002737A0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002737A0u) [[unlikely]] return; }
L_002737A0:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002737ACu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002737ACu) [[unlikely]] return; }
L_002737AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002737B4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x002737B4u) [[unlikely]] return; }
L_002737B4:
    c.f[13] = ld32((c.r[17].w[0] + 308u));
    c.f[14] = ld32((c.r[17].w[0] + 312u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002737C4u); c.f[12] = ld32((c.r[17].w[0] + 304u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002737C4u) [[unlikely]] return; }
L_002737C4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002737D0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002737D0u) [[unlikely]] return; }
L_002737D0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002737DCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002737DCu) [[unlikely]] return; }
L_002737DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002737E4u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002737E4u) [[unlikely]] return; }
L_002737E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002737ECu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002737ECu) [[unlikely]] return; }
L_002737EC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00273810:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027383Cu); mmi::paddub(c.r[16], c.r[7], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x0027383Cu) [[unlikely]] return; }
L_0027383C:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273864u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00273864u) [[unlikely]] return; }
L_00273864:
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273874u); c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00273874u) [[unlikely]] return; }
L_00273874:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027387Cu); c.r[4].d[0] = ld16((c.r[19].w[0] + 88u));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x0027387Cu) [[unlikely]] return; }
L_0027387C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273884u); c.r[4].d[0] = ld16((c.r[19].w[0] + 80u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00273884u) [[unlikely]] return; }
L_00273884:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273890u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00273890u) [[unlikely]] return; }
L_00273890:
    set32(c.r[16], c.r[16].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027389Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x0027389Cu) [[unlikely]] return; }
L_0027389C:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002738ACu); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002738ACu) [[unlikely]] return; }
L_002738AC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002738B8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002738B8u) [[unlikely]] return; }
L_002738B8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002738C4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002738C4u) [[unlikely]] return; }
L_002738C4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002738D0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002738D0u) [[unlikely]] return; }
L_002738D0:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002738DCu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002738DCu) [[unlikely]] return; }
L_002738DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002738E4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x002738E4u) [[unlikely]] return; }
L_002738E4:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002738F4u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002738F4u) [[unlikely]] return; }
L_002738F4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273900u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00273900u) [[unlikely]] return; }
L_00273900:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027390Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0027390Cu) [[unlikely]] return; }
L_0027390C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273914u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00273914u) [[unlikely]] return; }
L_00273914:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027391Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0027391Cu) [[unlikely]] return; }
L_0027391C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00273940:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027396Cu); mmi::paddub(c.r[16], c.r[7], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x0027396Cu) [[unlikely]] return; }
L_0027396C:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273994u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00273994u) [[unlikely]] return; }
L_00273994:
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002739A4u); c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002739A4u) [[unlikely]] return; }
L_002739A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002739ACu); c.r[4].d[0] = ld16((c.r[19].w[0] + 88u));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002739ACu) [[unlikely]] return; }
L_002739AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002739B4u); c.r[4].d[0] = ld16((c.r[19].w[0] + 80u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002739B4u) [[unlikely]] return; }
L_002739B4:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002739C0u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002739C0u) [[unlikely]] return; }
L_002739C0:
    set32(c.r[16], c.r[16].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002739CCu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x002739CCu) [[unlikely]] return; }
L_002739CC:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002739DCu); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002739DCu) [[unlikely]] return; }
L_002739DC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002739E8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002739E8u) [[unlikely]] return; }
L_002739E8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002739F4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002739F4u) [[unlikely]] return; }
L_002739F4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273A00u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00273A00u) [[unlikely]] return; }
L_00273A00:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273A0Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00273A0Cu) [[unlikely]] return; }
L_00273A0C:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273A1Cu); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00273A1Cu) [[unlikely]] return; }
L_00273A1C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273A28u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00273A28u) [[unlikely]] return; }
L_00273A28:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273A34u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00273A34u) [[unlikely]] return; }
L_00273A34:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273A40u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00273A40u) [[unlikely]] return; }
L_00273A40:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273A4Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00273A4Cu) [[unlikely]] return; }
L_00273A4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273A54u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x00273A54u) [[unlikely]] return; }
L_00273A54:
    c.f[13] = ld32((c.r[17].w[0] + 52u));
    c.f[14] = ld32((c.r[17].w[0] + 56u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273A64u); c.f[12] = ld32((c.r[17].w[0] + 48u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00273A64u) [[unlikely]] return; }
L_00273A64:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273A70u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00273A70u) [[unlikely]] return; }
L_00273A70:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273A7Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00273A7Cu) [[unlikely]] return; }
L_00273A7C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273A88u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00273A88u) [[unlikely]] return; }
L_00273A88:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273A94u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00273A94u) [[unlikely]] return; }
L_00273A94:
    c.f[13] = ld32((c.r[17].w[0] + 68u));
    c.f[14] = ld32((c.r[17].w[0] + 72u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273AA4u); c.f[12] = ld32((c.r[17].w[0] + 64u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00273AA4u) [[unlikely]] return; }
L_00273AA4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273AB0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00273AB0u) [[unlikely]] return; }
L_00273AB0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273ABCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00273ABCu) [[unlikely]] return; }
L_00273ABC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273AC8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00273AC8u) [[unlikely]] return; }
L_00273AC8:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273AD4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00273AD4u) [[unlikely]] return; }
L_00273AD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273ADCu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x00273ADCu) [[unlikely]] return; }
L_00273ADC:
    c.f[13] = ld32((c.r[17].w[0] + 84u));
    c.f[14] = ld32((c.r[17].w[0] + 88u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273AECu); c.f[12] = ld32((c.r[17].w[0] + 80u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00273AECu) [[unlikely]] return; }
L_00273AEC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273AF8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00273AF8u) [[unlikely]] return; }
L_00273AF8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273B04u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00273B04u) [[unlikely]] return; }
L_00273B04:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273B10u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00273B10u) [[unlikely]] return; }
L_00273B10:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273B1Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00273B1Cu) [[unlikely]] return; }
L_00273B1C:
    c.f[13] = ld32((c.r[17].w[0] + 100u));
    c.f[14] = ld32((c.r[17].w[0] + 104u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273B2Cu); c.f[12] = ld32((c.r[17].w[0] + 96u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00273B2Cu) [[unlikely]] return; }
L_00273B2C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273B38u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00273B38u) [[unlikely]] return; }
L_00273B38:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273B44u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00273B44u) [[unlikely]] return; }
L_00273B44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273B4Cu); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00273B4Cu) [[unlikely]] return; }
L_00273B4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273B54u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00273B54u) [[unlikely]] return; }
L_00273B54:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00273B70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273B9Cu); mmi::paddub(c.r[16], c.r[7], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00273B9Cu) [[unlikely]] return; }
L_00273B9C:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273BC4u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00273BC4u) [[unlikely]] return; }
L_00273BC4:
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273BD4u); c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00273BD4u) [[unlikely]] return; }
L_00273BD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273BDCu); c.r[4].d[0] = ld16((c.r[19].w[0] + 88u));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00273BDCu) [[unlikely]] return; }
L_00273BDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273BE4u); c.r[4].d[0] = ld16((c.r[19].w[0] + 80u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00273BE4u) [[unlikely]] return; }
L_00273BE4:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273BF0u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00273BF0u) [[unlikely]] return; }
L_00273BF0:
    set32(c.r[16], c.r[16].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273BFCu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x00273BFCu) [[unlikely]] return; }
L_00273BFC:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273C0Cu); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00273C0Cu) [[unlikely]] return; }
L_00273C0C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273C18u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00273C18u) [[unlikely]] return; }
L_00273C18:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273C24u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00273C24u) [[unlikely]] return; }
L_00273C24:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273C30u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00273C30u) [[unlikely]] return; }
L_00273C30:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273C3Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00273C3Cu) [[unlikely]] return; }
L_00273C3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273C44u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x00273C44u) [[unlikely]] return; }
L_00273C44:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273C54u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00273C54u) [[unlikely]] return; }
L_00273C54:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273C60u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00273C60u) [[unlikely]] return; }
L_00273C60:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273C6Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00273C6Cu) [[unlikely]] return; }
L_00273C6C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273C78u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00273C78u) [[unlikely]] return; }
L_00273C78:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273C84u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00273C84u) [[unlikely]] return; }
L_00273C84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273C8Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x00273C8Cu) [[unlikely]] return; }
L_00273C8C:
    c.f[13] = ld32((c.r[17].w[0] + 52u));
    c.f[14] = ld32((c.r[17].w[0] + 56u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273C9Cu); c.f[12] = ld32((c.r[17].w[0] + 48u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00273C9Cu) [[unlikely]] return; }
L_00273C9C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273CA8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00273CA8u) [[unlikely]] return; }
L_00273CA8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273CB4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00273CB4u) [[unlikely]] return; }
L_00273CB4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273CC0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00273CC0u) [[unlikely]] return; }
L_00273CC0:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273CCCu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00273CCCu) [[unlikely]] return; }
L_00273CCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273CD4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x00273CD4u) [[unlikely]] return; }
L_00273CD4:
    c.f[13] = ld32((c.r[17].w[0] + 68u));
    c.f[14] = ld32((c.r[17].w[0] + 72u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273CE4u); c.f[12] = ld32((c.r[17].w[0] + 64u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00273CE4u) [[unlikely]] return; }
L_00273CE4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273CF0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00273CF0u) [[unlikely]] return; }
L_00273CF0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273CFCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00273CFCu) [[unlikely]] return; }
L_00273CFC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273D08u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00273D08u) [[unlikely]] return; }
L_00273D08:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273D14u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00273D14u) [[unlikely]] return; }
L_00273D14:
    c.f[13] = ld32((c.r[17].w[0] + 84u));
    c.f[14] = ld32((c.r[17].w[0] + 88u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273D24u); c.f[12] = ld32((c.r[17].w[0] + 80u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00273D24u) [[unlikely]] return; }
L_00273D24:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273D30u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00273D30u) [[unlikely]] return; }
L_00273D30:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273D3Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00273D3Cu) [[unlikely]] return; }
L_00273D3C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273D48u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00273D48u) [[unlikely]] return; }
L_00273D48:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273D54u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00273D54u) [[unlikely]] return; }
L_00273D54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273D5Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x00273D5Cu) [[unlikely]] return; }
L_00273D5C:
    c.f[13] = ld32((c.r[17].w[0] + 100u));
    c.f[14] = ld32((c.r[17].w[0] + 104u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273D6Cu); c.f[12] = ld32((c.r[17].w[0] + 96u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00273D6Cu) [[unlikely]] return; }
L_00273D6C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273D78u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00273D78u) [[unlikely]] return; }
L_00273D78:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273D84u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00273D84u) [[unlikely]] return; }
L_00273D84:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273D90u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00273D90u) [[unlikely]] return; }
L_00273D90:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273D9Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00273D9Cu) [[unlikely]] return; }
L_00273D9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273DA4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x00273DA4u) [[unlikely]] return; }
L_00273DA4:
    c.f[13] = ld32((c.r[17].w[0] + 116u));
    c.f[14] = ld32((c.r[17].w[0] + 120u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273DB4u); c.f[12] = ld32((c.r[17].w[0] + 112u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00273DB4u) [[unlikely]] return; }
L_00273DB4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273DC0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00273DC0u) [[unlikely]] return; }
L_00273DC0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273DCCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00273DCCu) [[unlikely]] return; }
L_00273DCC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273DD8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00273DD8u) [[unlikely]] return; }
L_00273DD8:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273DE4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00273DE4u) [[unlikely]] return; }
L_00273DE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273DECu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x00273DECu) [[unlikely]] return; }
L_00273DEC:
    c.f[13] = ld32((c.r[17].w[0] + 132u));
    c.f[14] = ld32((c.r[17].w[0] + 136u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273DFCu); c.f[12] = ld32((c.r[17].w[0] + 128u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00273DFCu) [[unlikely]] return; }
L_00273DFC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273E08u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00273E08u) [[unlikely]] return; }
L_00273E08:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273E14u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00273E14u) [[unlikely]] return; }
L_00273E14:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273E20u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00273E20u) [[unlikely]] return; }
L_00273E20:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273E2Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00273E2Cu) [[unlikely]] return; }
L_00273E2C:
    c.f[13] = ld32((c.r[17].w[0] + 148u));
    c.f[14] = ld32((c.r[17].w[0] + 152u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273E3Cu); c.f[12] = ld32((c.r[17].w[0] + 144u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00273E3Cu) [[unlikely]] return; }
L_00273E3C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273E48u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00273E48u) [[unlikely]] return; }
L_00273E48:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273E54u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00273E54u) [[unlikely]] return; }
L_00273E54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273E5Cu); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00273E5Cu) [[unlikely]] return; }
L_00273E5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273E64u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00273E64u) [[unlikely]] return; }
L_00273E64:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00273E80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273EACu); mmi::paddub(c.r[16], c.r[7], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00273EACu) [[unlikely]] return; }
L_00273EAC:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273ED4u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00273ED4u) [[unlikely]] return; }
L_00273ED4:
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273EE4u); c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00273EE4u) [[unlikely]] return; }
L_00273EE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273EECu); c.r[4].d[0] = ld16((c.r[19].w[0] + 88u));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00273EECu) [[unlikely]] return; }
L_00273EEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273EF4u); c.r[4].d[0] = ld16((c.r[19].w[0] + 80u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00273EF4u) [[unlikely]] return; }
L_00273EF4:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273F00u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00273F00u) [[unlikely]] return; }
L_00273F00:
    set32(c.r[16], c.r[16].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273F0Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x00273F0Cu) [[unlikely]] return; }
L_00273F0C:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273F1Cu); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00273F1Cu) [[unlikely]] return; }
L_00273F1C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273F28u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00273F28u) [[unlikely]] return; }
L_00273F28:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273F34u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00273F34u) [[unlikely]] return; }
L_00273F34:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273F40u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00273F40u) [[unlikely]] return; }
L_00273F40:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273F4Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00273F4Cu) [[unlikely]] return; }
L_00273F4C:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273F5Cu); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00273F5Cu) [[unlikely]] return; }
L_00273F5C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273F68u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00273F68u) [[unlikely]] return; }
L_00273F68:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273F74u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00273F74u) [[unlikely]] return; }
L_00273F74:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273F80u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00273F80u) [[unlikely]] return; }
L_00273F80:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273F8Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00273F8Cu) [[unlikely]] return; }
L_00273F8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273F94u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x00273F94u) [[unlikely]] return; }
L_00273F94:
    c.f[13] = ld32((c.r[17].w[0] + 52u));
    c.f[14] = ld32((c.r[17].w[0] + 56u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273FA4u); c.f[12] = ld32((c.r[17].w[0] + 48u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00273FA4u) [[unlikely]] return; }
L_00273FA4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273FB0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00273FB0u) [[unlikely]] return; }
L_00273FB0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273FBCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00273FBCu) [[unlikely]] return; }
L_00273FBC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273FC8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00273FC8u) [[unlikely]] return; }
L_00273FC8:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273FD4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00273FD4u) [[unlikely]] return; }
L_00273FD4:
    c.f[13] = ld32((c.r[17].w[0] + 68u));
    c.f[14] = ld32((c.r[17].w[0] + 72u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273FE4u); c.f[12] = ld32((c.r[17].w[0] + 64u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00273FE4u) [[unlikely]] return; }
L_00273FE4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273FF0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00273FF0u) [[unlikely]] return; }
L_00273FF0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273FFCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00273FFCu) [[unlikely]] return; }
L_00273FFC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
    [[clang::musttail]] return unit_005D(c, 1u, depth);
}

}
