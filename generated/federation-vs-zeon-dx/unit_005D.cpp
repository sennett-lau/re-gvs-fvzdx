#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_005D[4096] = {
    1, 0, 2, 0, 0, 3, 0, 4, 0, 0, 0, 5, 0, 0, 6, 0, 0, 7, 0, 0, 8, 0, 0, 9, 0, 0, 0, 10, 0, 0, 11, 0,
    0, 12, 0, 0, 13, 0, 0, 14, 0, 15, 0, 0, 0, 16, 0, 0, 17, 0, 0, 18, 0, 0, 19, 0, 0, 20, 0, 0, 0, 21, 0, 0,
    22, 0, 0, 23, 0, 0, 24, 0, 0, 25, 0, 26, 0, 0, 0, 27, 0, 0, 28, 0, 0, 29, 0, 0, 30, 0, 0, 31, 0, 0, 0, 32,
    0, 0, 33, 0, 0, 34, 0, 0, 35, 0, 0, 36, 0, 37, 0, 0, 0, 38, 0, 0, 39, 0, 0, 40, 0, 0, 41, 0, 0, 42, 0, 0,
    0, 43, 0, 0, 44, 0, 0, 45, 0, 0, 46, 0, 0, 47, 0, 48, 0, 0, 0, 49, 0, 0, 50, 0, 0, 51, 0, 0, 52, 0, 0, 53,
    0, 0, 0, 54, 0, 0, 55, 0, 0, 56, 0, 0, 57, 0, 0, 58, 0, 59, 0, 0, 0, 60, 0, 0, 61, 0, 0, 62, 0, 0, 63, 0,
    0, 64, 0, 0, 0, 65, 0, 0, 66, 0, 0, 67, 0, 0, 68, 0, 0, 69, 0, 70, 0, 0, 0, 71, 0, 0, 72, 0, 0, 73, 0, 0,
    74, 0, 0, 75, 0, 0, 0, 76, 0, 0, 77, 0, 0, 78, 0, 0, 79, 0, 0, 80, 0, 81, 0, 0, 0, 82, 0, 0, 83, 0, 0, 84,
    0, 0, 85, 0, 0, 86, 0, 87, 0, 0, 0, 88, 0, 0, 89, 0, 0, 90, 0, 0, 91, 0, 0, 92, 0, 93, 0, 0, 0, 94, 0, 0,
    95, 0, 0, 96, 0, 0, 97, 0, 0, 98, 0, 99, 0, 0, 0, 100, 0, 0, 101, 0, 0, 102, 0, 0, 103, 0, 0, 104, 0, 105, 0, 0,
    0, 106, 0, 0, 107, 0, 0, 108, 0, 0, 109, 0, 0, 110, 0, 111, 0, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 0, 115, 0, 0, 116,
    0, 117, 0, 0, 0, 118, 0, 0, 119, 0, 0, 120, 0, 0, 121, 0, 0, 122, 0, 123, 0, 0, 0, 124, 0, 0, 125, 0, 0, 126, 0, 0,
    127, 0, 0, 128, 0, 129, 0, 0, 0, 130, 0, 0, 131, 0, 0, 132, 0, 0, 133, 0, 0, 134, 0, 135, 0, 0, 0, 136, 0, 0, 137, 0,
    0, 138, 0, 0, 139, 0, 0, 140, 0, 141, 0, 0, 0, 142, 0, 0, 143, 0, 0, 144, 0, 0, 145, 0, 0, 146, 0, 147, 0, 0, 0, 148,
    0, 0, 149, 0, 0, 150, 0, 0, 151, 0, 0, 152, 0, 153, 0, 0, 0, 154, 0, 0, 155, 0, 0, 156, 0, 157, 0, 158, 0, 0, 0, 0,
    0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 163,
    0, 164, 0, 0, 165, 0, 0, 166, 0, 0, 0, 167, 0, 0, 168, 0, 0, 169, 0, 0, 170, 0, 0, 171, 0, 172, 0, 0, 0, 173, 0, 0,
    174, 0, 0, 175, 0, 0, 176, 0, 0, 177, 0, 178, 0, 0, 0, 179, 0, 0, 180, 0, 0, 181, 0, 0, 182, 0, 0, 183, 0, 0, 0, 184,
    0, 0, 185, 0, 0, 186, 0, 0, 187, 0, 0, 188, 0, 189, 0, 0, 0, 190, 0, 0, 191, 0, 0, 192, 0, 0, 193, 0, 0, 194, 0, 0,
    0, 195, 0, 0, 196, 0, 0, 197, 0, 0, 198, 0, 0, 199, 0, 200, 0, 0, 0, 201, 0, 0, 202, 0, 0, 203, 0, 0, 204, 0, 0, 205,
    0, 0, 0, 206, 0, 0, 207, 0, 0, 208, 0, 0, 209, 0, 0, 210, 0, 211, 0, 0, 0, 212, 0, 0, 213, 0, 0, 214, 0, 0, 215, 0,
    0, 216, 0, 0, 0, 217, 0, 0, 218, 0, 0, 219, 0, 0, 220, 0, 0, 221, 0, 222, 0, 0, 0, 223, 0, 0, 224, 0, 0, 225, 0, 0,
    226, 0, 0, 227, 0, 0, 0, 228, 0, 0, 229, 0, 0, 230, 0, 0, 231, 0, 0, 232, 0, 233, 0, 0, 0, 234, 0, 0, 235, 0, 0, 236,
    0, 0, 237, 0, 0, 238, 0, 0, 0, 239, 0, 0, 240, 0, 0, 241, 0, 0, 242, 0, 0, 243, 0, 244, 0, 0, 0, 245, 0, 0, 246, 0,
    0, 247, 0, 0, 248, 0, 0, 249, 0, 0, 0, 250, 0, 0, 251, 0, 0, 252, 0, 0, 253, 0, 0, 254, 0, 255, 0, 0, 0, 256, 0, 0,
    257, 0, 0, 258, 0, 0, 259, 0, 0, 260, 0, 0, 0, 261, 0, 0, 262, 0, 0, 263, 0, 0, 264, 0, 0, 265, 0, 266, 0, 0, 0, 267,
    0, 0, 268, 0, 0, 269, 0, 0, 270, 0, 0, 271, 0, 0, 0, 272, 0, 0, 273, 0, 0, 274, 0, 0, 275, 0, 0, 276, 0, 277, 0, 0,
    0, 278, 0, 0, 279, 0, 0, 280, 0, 0, 281, 0, 0, 282, 0, 0, 0, 283, 0, 0, 284, 0, 0, 285, 0, 286, 0, 287, 0, 0, 0, 0,
    0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 292,
    0, 293, 0, 0, 294, 0, 0, 295, 0, 0, 0, 296, 0, 0, 297, 0, 0, 298, 0, 0, 299, 0, 0, 300, 0, 301, 0, 0, 0, 302, 0, 0,
    303, 0, 0, 304, 0, 0, 305, 0, 0, 306, 0, 307, 0, 0, 0, 308, 0, 0, 309, 0, 0, 310, 0, 0, 311, 0, 0, 312, 0, 313, 0, 0,
    0, 314, 0, 0, 315, 0, 0, 316, 0, 0, 317, 0, 0, 318, 0, 319, 0, 0, 0, 320, 0, 0, 321, 0, 0, 322, 0, 0, 323, 0, 0, 324,
    0, 325, 0, 0, 0, 326, 0, 0, 327, 0, 0, 328, 0, 0, 329, 0, 0, 330, 0, 0, 0, 331, 0, 0, 332, 0, 0, 333, 0, 0, 334, 0,
    0, 335, 0, 0, 0, 336, 0, 0, 337, 0, 0, 338, 0, 0, 339, 0, 0, 340, 0, 341, 0, 0, 0, 342, 0, 0, 343, 0, 0, 344, 0, 0,
    345, 0, 0, 346, 0, 0, 0, 347, 0, 0, 348, 0, 0, 349, 0, 0, 350, 0, 0, 351, 0, 352, 0, 0, 0, 353, 0, 0, 354, 0, 0, 355,
    0, 0, 356, 0, 0, 357, 0, 0, 0, 358, 0, 0, 359, 0, 0, 360, 0, 0, 361, 0, 0, 362, 0, 363, 0, 0, 0, 364, 0, 0, 365, 0,
    0, 366, 0, 0, 367, 0, 0, 368, 0, 369, 0, 0, 0, 370, 0, 0, 371, 0, 0, 372, 0, 0, 373, 0, 0, 374, 0, 375, 0, 0, 0, 376,
    0, 0, 377, 0, 0, 378, 0, 0, 379, 0, 0, 380, 0, 381, 0, 0, 0, 382, 0, 0, 383, 0, 0, 384, 0, 385, 0, 386, 0, 0, 0, 0,
    0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 390, 0, 391,
    0, 392, 0, 0, 393, 0, 0, 394, 0, 0, 0, 395, 0, 0, 396, 0, 0, 397, 0, 0, 398, 0, 0, 399, 0, 400, 0, 0, 0, 401, 0, 0,
    402, 0, 0, 403, 0, 0, 404, 0, 0, 405, 0, 406, 0, 0, 0, 407, 0, 0, 408, 0, 0, 409, 0, 0, 410, 0, 0, 411, 0, 0, 0, 412,
    0, 0, 413, 0, 0, 414, 0, 0, 415, 0, 0, 416, 0, 417, 0, 0, 0, 418, 0, 0, 419, 0, 0, 420, 0, 0, 421, 0, 0, 422, 0, 0,
    0, 423, 0, 0, 424, 0, 0, 425, 0, 0, 426, 0, 0, 427, 0, 428, 0, 0, 0, 429, 0, 0, 430, 0, 0, 431, 0, 0, 432, 0, 0, 433,
    0, 0, 0, 434, 0, 0, 435, 0, 0, 436, 0, 0, 437, 0, 0, 438, 0, 439, 0, 0, 0, 440, 0, 0, 441, 0, 0, 442, 0, 0, 443, 0,
    0, 444, 0, 445, 0, 0, 0, 446, 0, 0, 447, 0, 0, 448, 0, 449, 0, 450, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 454, 0, 455, 0, 456, 0, 0, 457, 0, 0, 458, 0, 0, 0, 459,
    0, 0, 460, 0, 0, 461, 0, 0, 462, 0, 0, 463, 0, 464, 0, 0, 0, 465, 0, 0, 466, 0, 0, 467, 0, 0, 468, 0, 0, 469, 0, 470,
    0, 0, 0, 471, 0, 0, 472, 0, 0, 473, 0, 0, 474, 0, 0, 475, 0, 476, 0, 0, 0, 477, 0, 0, 478, 0, 0, 479, 0, 0, 480, 0,
    0, 481, 0, 482, 0, 0, 0, 483, 0, 0, 484, 0, 0, 485, 0, 0, 486, 0, 0, 487, 0, 0, 0, 488, 0, 0, 489, 0, 0, 490, 0, 0,
    491, 0, 0, 492, 0, 493, 0, 0, 0, 494, 0, 0, 495, 0, 0, 496, 0, 0, 497, 0, 0, 498, 0, 0, 0, 499, 0, 0, 500, 0, 0, 501,
    0, 0, 502, 0, 0, 503, 0, 504, 0, 0, 0, 505, 0, 0, 506, 0, 0, 507, 0, 0, 508, 0, 0, 509, 0, 510, 0, 0, 0, 511, 0, 0,
    512, 0, 0, 513, 0, 0, 514, 0, 0, 515, 0, 516, 0, 0, 0, 517, 0, 0, 518, 0, 0, 519, 0, 0, 520, 0, 0, 521, 0, 522, 0, 0,
    0, 523, 0, 0, 524, 0, 0, 525, 0, 0, 526, 0, 0, 527, 0, 0, 0, 528, 0, 0, 529, 0, 0, 530, 0, 531, 0, 532, 0, 0, 0, 0,
    0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 536, 0, 537,
    0, 538, 0, 0, 539, 0, 0, 540, 0, 0, 0, 541, 0, 0, 542, 0, 0, 543, 0, 0, 544, 0, 0, 545, 0, 546, 0, 0, 0, 547, 0, 0,
    548, 0, 0, 549, 0, 0, 550, 0, 0, 551, 0, 552, 0, 0, 0, 553, 0, 0, 554, 0, 0, 555, 0, 0, 556, 0, 0, 557, 0, 558, 0, 0,
    0, 559, 0, 0, 560, 0, 0, 561, 0, 0, 562, 0, 0, 563, 0, 564, 0, 0, 0, 565, 0, 0, 566, 0, 0, 567, 0, 568, 0, 569, 0, 0,
    0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0, 573, 0, 574,
    0, 575, 0, 0, 576, 0, 0, 577, 0, 0, 0, 578, 0, 0, 579, 0, 0, 580, 0, 0, 581, 0, 0, 582, 0, 583, 0, 0, 0, 584, 0, 0,
    585, 0, 0, 586, 0, 0, 587, 0, 0, 588, 0, 589, 0, 0, 0, 590, 0, 0, 591, 0, 0, 592, 0, 0, 593, 0, 0, 594, 0, 0, 0, 595,
    0, 0, 596, 0, 0, 597, 0, 0, 598, 0, 0, 599, 0, 600, 0, 0, 0, 601, 0, 0, 602, 0, 0, 603, 0, 0, 604, 0, 0, 605, 0, 0,
    0, 606, 0, 0, 607, 0, 0, 608, 0, 609, 0, 610, 0, 0, 0, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 612,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0, 614, 0, 615, 0, 616, 0, 0, 617, 0, 0, 618, 0, 0, 0, 619, 0, 0, 620, 0,
    0, 621, 0, 0, 622, 0, 0, 623, 0, 624, 0, 0, 0, 625, 0, 0, 626, 0, 0, 627, 0, 0, 628, 0, 0, 629, 0, 630, 0, 0, 0, 631,
    0, 0, 632, 0, 0, 633, 0, 0, 634, 0, 0, 635, 0, 636, 0, 0, 0, 637, 0, 0, 638, 0, 0, 639, 0, 0, 640, 0, 0, 641, 0, 642,
    0, 0, 0, 643, 0, 0, 644, 0, 0, 645, 0, 646, 0, 647, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 649,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 651, 0, 652, 0, 653, 0, 0, 654, 0, 0, 655, 0, 0, 0, 656, 0, 0, 657, 0,
    0, 658, 0, 0, 659, 0, 0, 660, 0, 661, 0, 0, 0, 662, 0, 0, 663, 0, 0, 664, 0, 665, 0, 666, 0, 0, 0, 0, 0, 0, 0, 0,
    667, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 0, 0, 0, 0, 669, 0, 0, 0, 670, 0, 671, 0, 672, 0, 0,
    673, 0, 0, 674, 0, 0, 0, 675, 0, 0, 676, 0, 0, 677, 0, 0, 678, 0, 0, 679, 0, 680, 0, 0, 0, 681, 0, 0, 682, 0, 0, 683,
    0, 684, 0, 685, 0, 0, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 687, 0, 0, 0, 688, 0, 0, 0, 689, 0, 0, 0, 690,
    0, 691, 0, 692, 0, 693, 0, 0, 0, 0, 0, 0, 694, 0, 0, 0, 0, 0, 0, 695, 0, 0, 0, 696, 0, 0, 0, 697, 0, 0, 0, 698,
    0, 699, 0, 700, 0, 701, 0, 0, 0, 0, 0, 0, 702, 0, 0, 0, 0, 703, 0, 704, 0, 0, 0, 705, 0, 706, 0, 707, 0, 708, 0, 0,
    0, 0, 0, 0, 709, 0, 0, 0, 0, 0, 0, 710, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 711, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 712, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 713, 0, 0, 0, 0, 714, 0, 0, 0, 0, 715, 0, 0, 0, 0, 0, 0,
    716, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 717, 0, 718, 0, 0, 0, 0, 719, 0, 0, 0, 0, 0, 720, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 721, 0, 0, 722, 0, 0, 0, 0, 723, 0, 0, 0, 0, 0, 0, 724, 0, 0, 0, 0, 725, 0, 0, 726, 0, 727,
    0, 0, 0, 0, 728, 0, 0, 0, 0, 0, 0, 0, 729, 0, 0, 0, 0, 0, 0, 730, 0, 0, 0, 0, 731, 0, 732, 0, 733, 0, 734, 0,
    735, 0, 0, 0, 0, 736, 0, 0, 0, 0, 0, 0, 737, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 738, 0, 0, 0, 0, 739, 0, 0, 740,
    0, 0, 0, 0, 741, 0, 0, 0, 0, 0, 0, 0, 742, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 743, 0, 0, 0, 0, 744, 0, 0,
    745, 0, 746, 0, 0, 747, 0, 748, 0, 0, 0, 0, 749, 0, 0, 0, 0, 0, 0, 0, 750, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    751, 0, 0, 0, 0, 752, 0, 0, 0, 0, 753, 0, 0, 0, 0, 754, 0, 0, 0, 0, 755, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    756, 0, 0, 0, 0, 757, 0, 0, 758, 0, 0, 0, 0, 0, 0, 0, 759, 0, 0, 0, 0, 760, 0, 0, 0, 0, 0, 0, 761, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 762, 0, 0, 0, 0, 763, 0, 764, 0, 0, 765, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 766, 0, 0, 0, 0, 0, 0, 0, 0, 0, 767, 0,
    0, 768, 0, 769, 0, 770, 0, 0, 0, 0, 771, 0, 0, 0, 772, 0, 773, 0, 774, 0, 0, 0, 775, 0, 0, 776, 0, 0, 0, 0, 777, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 778, 0, 0, 0, 0, 0, 779, 0, 0, 0, 780, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 781, 0, 0, 782, 0, 783, 0, 784, 0, 785, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 786, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 787, 0, 0, 0, 0, 788, 0, 0, 0, 0, 0, 0, 0, 0,
    789, 0, 0, 0, 0, 790, 0, 0, 0, 0, 0, 791, 0, 0, 0, 0, 792, 0, 0, 0, 0, 0, 0, 0, 793, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 794, 0, 0, 0, 0, 0, 0, 795, 0, 0, 0, 796, 0, 0, 0, 0, 797, 0, 0, 0, 0, 0, 798, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 799, 0, 0, 0, 0, 800, 0, 801, 0, 0, 0, 0, 802, 0, 0, 0, 0, 803, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 804, 0, 0, 805, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 806, 0, 0, 0, 807, 0, 0, 0, 0, 0, 0, 0, 0, 808, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 809, 0, 0, 0, 0, 0, 0, 0, 0, 810, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 811, 0, 0, 812, 0, 0, 0, 0, 0, 813, 0, 0, 0, 0,
    0, 814, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 815, 0, 0, 0, 0, 0, 0, 0, 816, 0, 0, 0,
    0, 0, 0, 0, 817, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 818, 0, 0, 0, 0, 0, 819, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 820, 0, 0, 0, 0, 0, 821, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 822, 0, 0, 0, 0, 0, 0,
    823, 0, 0, 0, 0, 824, 0, 825, 0, 0, 826, 0, 0, 827, 0, 0, 0, 0, 0, 828, 0, 829, 0, 0, 0, 0, 0, 830, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 831, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 832, 0, 0, 0, 0, 0, 0,
    833, 0, 0, 0, 0, 834, 0, 0, 0, 0, 0, 0, 0, 0, 0, 835, 0, 0, 0, 0, 0, 0, 836, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 837, 0, 0, 0, 0, 0, 838, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    839, 0, 0, 0, 0, 840, 0, 0, 841, 0, 842, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 843, 0, 0, 0, 0, 0, 0, 0, 844, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 845, 0, 0, 0, 0, 0, 846, 0, 0, 0, 0, 847, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 848, 0, 0, 0, 0, 0, 0, 849, 0, 0, 850, 0, 0, 851, 0, 852, 0, 0, 0, 0, 853, 0, 854, 0, 0,
    0, 0, 0, 855, 0, 0, 0, 0, 0, 0, 0, 0, 856, 0, 0, 0, 0, 0, 0, 857, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 858, 0, 0, 0, 0, 0, 0, 0, 0, 859, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 860, 0, 0, 0, 0, 0, 0, 861, 0,
    0, 862, 0, 0, 863, 0, 864, 0, 0, 0, 0, 865, 0, 0, 866, 0, 0, 0, 0, 0, 867, 0, 0, 0, 0, 0, 0, 0, 0, 868, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 869, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 870, 0, 0, 0, 0, 0, 871, 0, 0,
    0, 0, 0, 0, 872, 0, 0, 0, 0, 873, 0, 0, 874, 0, 0, 875, 0, 876, 0, 0, 0, 0, 877, 0, 878, 0, 0, 0, 0, 0, 879, 0,
    0, 0, 0, 0, 0, 0, 0, 880, 0, 0, 0, 0, 0, 0, 0, 0, 881, 0, 0, 0, 0, 0, 0, 0, 882, 0, 0, 0, 0, 0, 0, 883,
    0, 884, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 885, 0, 0, 0, 0, 0, 886, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 887, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 888, 0, 0, 0, 0, 0, 889, 0, 0, 0,
    0, 0, 890, 0, 891, 0, 0, 0, 0, 0, 0, 892, 0, 0, 893, 0, 894, 0, 0, 0, 0, 895, 0, 896, 0, 0, 0, 0, 0, 897, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 898, 0, 0, 0, 899, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 900, 0,
    0, 0, 0, 0, 901, 0, 0, 0, 0, 0, 902, 0, 903, 0, 0, 0, 0, 0, 0, 904, 0, 0, 0, 0, 0, 0, 905, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 906, 0, 0, 0, 0, 0, 0, 0, 0, 907, 0, 0, 0, 0, 908, 0, 0,
    909, 0, 0, 0, 910, 0, 0, 0, 911, 0, 912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 913, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 914, 0, 0, 0, 915, 0, 0, 0, 0, 0, 916, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 917, 0, 0, 0, 0, 0, 918, 0, 0, 0, 0, 0, 919, 0, 920, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    921, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 922, 0, 923, 0, 0, 0, 0, 924, 0, 0, 0, 0, 0, 0, 0,
    925, 0, 0, 0, 0, 0, 0, 0, 0, 926, 0, 927, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 928, 0, 0, 0,
    0, 0, 929, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 930, 0, 0, 0, 0, 0, 0, 931, 0, 0, 0, 0, 932, 0, 0, 933, 0, 0, 934,
    0, 935, 0, 0, 0, 0, 0, 0, 936, 0, 0, 0, 0, 0, 937, 0, 0, 938, 0, 0, 0, 0, 0, 939, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_005D(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00274000;
    case 2u: goto L_00274008;
    case 3u: goto L_00274014;
    case 4u: goto L_0027401C;
    case 5u: goto L_0027402C;
    case 6u: goto L_00274038;
    case 7u: goto L_00274044;
    case 8u: goto L_00274050;
    case 9u: goto L_0027405C;
    case 10u: goto L_0027406C;
    case 11u: goto L_00274078;
    case 12u: goto L_00274084;
    case 13u: goto L_00274090;
    case 14u: goto L_0027409C;
    case 15u: goto L_002740A4;
    case 16u: goto L_002740B4;
    case 17u: goto L_002740C0;
    case 18u: goto L_002740CC;
    case 19u: goto L_002740D8;
    case 20u: goto L_002740E4;
    case 21u: goto L_002740F4;
    case 22u: goto L_00274100;
    case 23u: goto L_0027410C;
    case 24u: goto L_00274118;
    case 25u: goto L_00274124;
    case 26u: goto L_0027412C;
    case 27u: goto L_0027413C;
    case 28u: goto L_00274148;
    case 29u: goto L_00274154;
    case 30u: goto L_00274160;
    case 31u: goto L_0027416C;
    case 32u: goto L_0027417C;
    case 33u: goto L_00274188;
    case 34u: goto L_00274194;
    case 35u: goto L_002741A0;
    case 36u: goto L_002741AC;
    case 37u: goto L_002741B4;
    case 38u: goto L_002741C4;
    case 39u: goto L_002741D0;
    case 40u: goto L_002741DC;
    case 41u: goto L_002741E8;
    case 42u: goto L_002741F4;
    case 43u: goto L_00274204;
    case 44u: goto L_00274210;
    case 45u: goto L_0027421C;
    case 46u: goto L_00274228;
    case 47u: goto L_00274234;
    case 48u: goto L_0027423C;
    case 49u: goto L_0027424C;
    case 50u: goto L_00274258;
    case 51u: goto L_00274264;
    case 52u: goto L_00274270;
    case 53u: goto L_0027427C;
    case 54u: goto L_0027428C;
    case 55u: goto L_00274298;
    case 56u: goto L_002742A4;
    case 57u: goto L_002742B0;
    case 58u: goto L_002742BC;
    case 59u: goto L_002742C4;
    case 60u: goto L_002742D4;
    case 61u: goto L_002742E0;
    case 62u: goto L_002742EC;
    case 63u: goto L_002742F8;
    case 64u: goto L_00274304;
    case 65u: goto L_00274314;
    case 66u: goto L_00274320;
    case 67u: goto L_0027432C;
    case 68u: goto L_00274338;
    case 69u: goto L_00274344;
    case 70u: goto L_0027434C;
    case 71u: goto L_0027435C;
    case 72u: goto L_00274368;
    case 73u: goto L_00274374;
    case 74u: goto L_00274380;
    case 75u: goto L_0027438C;
    case 76u: goto L_0027439C;
    case 77u: goto L_002743A8;
    case 78u: goto L_002743B4;
    case 79u: goto L_002743C0;
    case 80u: goto L_002743CC;
    case 81u: goto L_002743D4;
    case 82u: goto L_002743E4;
    case 83u: goto L_002743F0;
    case 84u: goto L_002743FC;
    case 85u: goto L_00274408;
    case 86u: goto L_00274414;
    case 87u: goto L_0027441C;
    case 88u: goto L_0027442C;
    case 89u: goto L_00274438;
    case 90u: goto L_00274444;
    case 91u: goto L_00274450;
    case 92u: goto L_0027445C;
    case 93u: goto L_00274464;
    case 94u: goto L_00274474;
    case 95u: goto L_00274480;
    case 96u: goto L_0027448C;
    case 97u: goto L_00274498;
    case 98u: goto L_002744A4;
    case 99u: goto L_002744AC;
    case 100u: goto L_002744BC;
    case 101u: goto L_002744C8;
    case 102u: goto L_002744D4;
    case 103u: goto L_002744E0;
    case 104u: goto L_002744EC;
    case 105u: goto L_002744F4;
    case 106u: goto L_00274504;
    case 107u: goto L_00274510;
    case 108u: goto L_0027451C;
    case 109u: goto L_00274528;
    case 110u: goto L_00274534;
    case 111u: goto L_0027453C;
    case 112u: goto L_0027454C;
    case 113u: goto L_00274558;
    case 114u: goto L_00274564;
    case 115u: goto L_00274570;
    case 116u: goto L_0027457C;
    case 117u: goto L_00274584;
    case 118u: goto L_00274594;
    case 119u: goto L_002745A0;
    case 120u: goto L_002745AC;
    case 121u: goto L_002745B8;
    case 122u: goto L_002745C4;
    case 123u: goto L_002745CC;
    case 124u: goto L_002745DC;
    case 125u: goto L_002745E8;
    case 126u: goto L_002745F4;
    case 127u: goto L_00274600;
    case 128u: goto L_0027460C;
    case 129u: goto L_00274614;
    case 130u: goto L_00274624;
    case 131u: goto L_00274630;
    case 132u: goto L_0027463C;
    case 133u: goto L_00274648;
    case 134u: goto L_00274654;
    case 135u: goto L_0027465C;
    case 136u: goto L_0027466C;
    case 137u: goto L_00274678;
    case 138u: goto L_00274684;
    case 139u: goto L_00274690;
    case 140u: goto L_0027469C;
    case 141u: goto L_002746A4;
    case 142u: goto L_002746B4;
    case 143u: goto L_002746C0;
    case 144u: goto L_002746CC;
    case 145u: goto L_002746D8;
    case 146u: goto L_002746E4;
    case 147u: goto L_002746EC;
    case 148u: goto L_002746FC;
    case 149u: goto L_00274708;
    case 150u: goto L_00274714;
    case 151u: goto L_00274720;
    case 152u: goto L_0027472C;
    case 153u: goto L_00274734;
    case 154u: goto L_00274744;
    case 155u: goto L_00274750;
    case 156u: goto L_0027475C;
    case 157u: goto L_00274764;
    case 158u: goto L_0027476C;
    case 159u: goto L_00274790;
    case 160u: goto L_002747BC;
    case 161u: goto L_002747E4;
    case 162u: goto L_002747F4;
    case 163u: goto L_002747FC;
    case 164u: goto L_00274804;
    case 165u: goto L_00274810;
    case 166u: goto L_0027481C;
    case 167u: goto L_0027482C;
    case 168u: goto L_00274838;
    case 169u: goto L_00274844;
    case 170u: goto L_00274850;
    case 171u: goto L_0027485C;
    case 172u: goto L_00274864;
    case 173u: goto L_00274874;
    case 174u: goto L_00274880;
    case 175u: goto L_0027488C;
    case 176u: goto L_00274898;
    case 177u: goto L_002748A4;
    case 178u: goto L_002748AC;
    case 179u: goto L_002748BC;
    case 180u: goto L_002748C8;
    case 181u: goto L_002748D4;
    case 182u: goto L_002748E0;
    case 183u: goto L_002748EC;
    case 184u: goto L_002748FC;
    case 185u: goto L_00274908;
    case 186u: goto L_00274914;
    case 187u: goto L_00274920;
    case 188u: goto L_0027492C;
    case 189u: goto L_00274934;
    case 190u: goto L_00274944;
    case 191u: goto L_00274950;
    case 192u: goto L_0027495C;
    case 193u: goto L_00274968;
    case 194u: goto L_00274974;
    case 195u: goto L_00274984;
    case 196u: goto L_00274990;
    case 197u: goto L_0027499C;
    case 198u: goto L_002749A8;
    case 199u: goto L_002749B4;
    case 200u: goto L_002749BC;
    case 201u: goto L_002749CC;
    case 202u: goto L_002749D8;
    case 203u: goto L_002749E4;
    case 204u: goto L_002749F0;
    case 205u: goto L_002749FC;
    case 206u: goto L_00274A0C;
    case 207u: goto L_00274A18;
    case 208u: goto L_00274A24;
    case 209u: goto L_00274A30;
    case 210u: goto L_00274A3C;
    case 211u: goto L_00274A44;
    case 212u: goto L_00274A54;
    case 213u: goto L_00274A60;
    case 214u: goto L_00274A6C;
    case 215u: goto L_00274A78;
    case 216u: goto L_00274A84;
    case 217u: goto L_00274A94;
    case 218u: goto L_00274AA0;
    case 219u: goto L_00274AAC;
    case 220u: goto L_00274AB8;
    case 221u: goto L_00274AC4;
    case 222u: goto L_00274ACC;
    case 223u: goto L_00274ADC;
    case 224u: goto L_00274AE8;
    case 225u: goto L_00274AF4;
    case 226u: goto L_00274B00;
    case 227u: goto L_00274B0C;
    case 228u: goto L_00274B1C;
    case 229u: goto L_00274B28;
    case 230u: goto L_00274B34;
    case 231u: goto L_00274B40;
    case 232u: goto L_00274B4C;
    case 233u: goto L_00274B54;
    case 234u: goto L_00274B64;
    case 235u: goto L_00274B70;
    case 236u: goto L_00274B7C;
    case 237u: goto L_00274B88;
    case 238u: goto L_00274B94;
    case 239u: goto L_00274BA4;
    case 240u: goto L_00274BB0;
    case 241u: goto L_00274BBC;
    case 242u: goto L_00274BC8;
    case 243u: goto L_00274BD4;
    case 244u: goto L_00274BDC;
    case 245u: goto L_00274BEC;
    case 246u: goto L_00274BF8;
    case 247u: goto L_00274C04;
    case 248u: goto L_00274C10;
    case 249u: goto L_00274C1C;
    case 250u: goto L_00274C2C;
    case 251u: goto L_00274C38;
    case 252u: goto L_00274C44;
    case 253u: goto L_00274C50;
    case 254u: goto L_00274C5C;
    case 255u: goto L_00274C64;
    case 256u: goto L_00274C74;
    case 257u: goto L_00274C80;
    case 258u: goto L_00274C8C;
    case 259u: goto L_00274C98;
    case 260u: goto L_00274CA4;
    case 261u: goto L_00274CB4;
    case 262u: goto L_00274CC0;
    case 263u: goto L_00274CCC;
    case 264u: goto L_00274CD8;
    case 265u: goto L_00274CE4;
    case 266u: goto L_00274CEC;
    case 267u: goto L_00274CFC;
    case 268u: goto L_00274D08;
    case 269u: goto L_00274D14;
    case 270u: goto L_00274D20;
    case 271u: goto L_00274D2C;
    case 272u: goto L_00274D3C;
    case 273u: goto L_00274D48;
    case 274u: goto L_00274D54;
    case 275u: goto L_00274D60;
    case 276u: goto L_00274D6C;
    case 277u: goto L_00274D74;
    case 278u: goto L_00274D84;
    case 279u: goto L_00274D90;
    case 280u: goto L_00274D9C;
    case 281u: goto L_00274DA8;
    case 282u: goto L_00274DB4;
    case 283u: goto L_00274DC4;
    case 284u: goto L_00274DD0;
    case 285u: goto L_00274DDC;
    case 286u: goto L_00274DE4;
    case 287u: goto L_00274DEC;
    case 288u: goto L_00274E10;
    case 289u: goto L_00274E3C;
    case 290u: goto L_00274E64;
    case 291u: goto L_00274E74;
    case 292u: goto L_00274E7C;
    case 293u: goto L_00274E84;
    case 294u: goto L_00274E90;
    case 295u: goto L_00274E9C;
    case 296u: goto L_00274EAC;
    case 297u: goto L_00274EB8;
    case 298u: goto L_00274EC4;
    case 299u: goto L_00274ED0;
    case 300u: goto L_00274EDC;
    case 301u: goto L_00274EE4;
    case 302u: goto L_00274EF4;
    case 303u: goto L_00274F00;
    case 304u: goto L_00274F0C;
    case 305u: goto L_00274F18;
    case 306u: goto L_00274F24;
    case 307u: goto L_00274F2C;
    case 308u: goto L_00274F3C;
    case 309u: goto L_00274F48;
    case 310u: goto L_00274F54;
    case 311u: goto L_00274F60;
    case 312u: goto L_00274F6C;
    case 313u: goto L_00274F74;
    case 314u: goto L_00274F84;
    case 315u: goto L_00274F90;
    case 316u: goto L_00274F9C;
    case 317u: goto L_00274FA8;
    case 318u: goto L_00274FB4;
    case 319u: goto L_00274FBC;
    case 320u: goto L_00274FCC;
    case 321u: goto L_00274FD8;
    case 322u: goto L_00274FE4;
    case 323u: goto L_00274FF0;
    case 324u: goto L_00274FFC;
    case 325u: goto L_00275004;
    case 326u: goto L_00275014;
    case 327u: goto L_00275020;
    case 328u: goto L_0027502C;
    case 329u: goto L_00275038;
    case 330u: goto L_00275044;
    case 331u: goto L_00275054;
    case 332u: goto L_00275060;
    case 333u: goto L_0027506C;
    case 334u: goto L_00275078;
    case 335u: goto L_00275084;
    case 336u: goto L_00275094;
    case 337u: goto L_002750A0;
    case 338u: goto L_002750AC;
    case 339u: goto L_002750B8;
    case 340u: goto L_002750C4;
    case 341u: goto L_002750CC;
    case 342u: goto L_002750DC;
    case 343u: goto L_002750E8;
    case 344u: goto L_002750F4;
    case 345u: goto L_00275100;
    case 346u: goto L_0027510C;
    case 347u: goto L_0027511C;
    case 348u: goto L_00275128;
    case 349u: goto L_00275134;
    case 350u: goto L_00275140;
    case 351u: goto L_0027514C;
    case 352u: goto L_00275154;
    case 353u: goto L_00275164;
    case 354u: goto L_00275170;
    case 355u: goto L_0027517C;
    case 356u: goto L_00275188;
    case 357u: goto L_00275194;
    case 358u: goto L_002751A4;
    case 359u: goto L_002751B0;
    case 360u: goto L_002751BC;
    case 361u: goto L_002751C8;
    case 362u: goto L_002751D4;
    case 363u: goto L_002751DC;
    case 364u: goto L_002751EC;
    case 365u: goto L_002751F8;
    case 366u: goto L_00275204;
    case 367u: goto L_00275210;
    case 368u: goto L_0027521C;
    case 369u: goto L_00275224;
    case 370u: goto L_00275234;
    case 371u: goto L_00275240;
    case 372u: goto L_0027524C;
    case 373u: goto L_00275258;
    case 374u: goto L_00275264;
    case 375u: goto L_0027526C;
    case 376u: goto L_0027527C;
    case 377u: goto L_00275288;
    case 378u: goto L_00275294;
    case 379u: goto L_002752A0;
    case 380u: goto L_002752AC;
    case 381u: goto L_002752B4;
    case 382u: goto L_002752C4;
    case 383u: goto L_002752D0;
    case 384u: goto L_002752DC;
    case 385u: goto L_002752E4;
    case 386u: goto L_002752EC;
    case 387u: goto L_00275310;
    case 388u: goto L_0027533C;
    case 389u: goto L_00275364;
    case 390u: goto L_00275374;
    case 391u: goto L_0027537C;
    case 392u: goto L_00275384;
    case 393u: goto L_00275390;
    case 394u: goto L_0027539C;
    case 395u: goto L_002753AC;
    case 396u: goto L_002753B8;
    case 397u: goto L_002753C4;
    case 398u: goto L_002753D0;
    case 399u: goto L_002753DC;
    case 400u: goto L_002753E4;
    case 401u: goto L_002753F4;
    case 402u: goto L_00275400;
    case 403u: goto L_0027540C;
    case 404u: goto L_00275418;
    case 405u: goto L_00275424;
    case 406u: goto L_0027542C;
    case 407u: goto L_0027543C;
    case 408u: goto L_00275448;
    case 409u: goto L_00275454;
    case 410u: goto L_00275460;
    case 411u: goto L_0027546C;
    case 412u: goto L_0027547C;
    case 413u: goto L_00275488;
    case 414u: goto L_00275494;
    case 415u: goto L_002754A0;
    case 416u: goto L_002754AC;
    case 417u: goto L_002754B4;
    case 418u: goto L_002754C4;
    case 419u: goto L_002754D0;
    case 420u: goto L_002754DC;
    case 421u: goto L_002754E8;
    case 422u: goto L_002754F4;
    case 423u: goto L_00275504;
    case 424u: goto L_00275510;
    case 425u: goto L_0027551C;
    case 426u: goto L_00275528;
    case 427u: goto L_00275534;
    case 428u: goto L_0027553C;
    case 429u: goto L_0027554C;
    case 430u: goto L_00275558;
    case 431u: goto L_00275564;
    case 432u: goto L_00275570;
    case 433u: goto L_0027557C;
    case 434u: goto L_0027558C;
    case 435u: goto L_00275598;
    case 436u: goto L_002755A4;
    case 437u: goto L_002755B0;
    case 438u: goto L_002755BC;
    case 439u: goto L_002755C4;
    case 440u: goto L_002755D4;
    case 441u: goto L_002755E0;
    case 442u: goto L_002755EC;
    case 443u: goto L_002755F8;
    case 444u: goto L_00275604;
    case 445u: goto L_0027560C;
    case 446u: goto L_0027561C;
    case 447u: goto L_00275628;
    case 448u: goto L_00275634;
    case 449u: goto L_0027563C;
    case 450u: goto L_00275644;
    case 451u: goto L_00275660;
    case 452u: goto L_0027568C;
    case 453u: goto L_002756B4;
    case 454u: goto L_002756C4;
    case 455u: goto L_002756CC;
    case 456u: goto L_002756D4;
    case 457u: goto L_002756E0;
    case 458u: goto L_002756EC;
    case 459u: goto L_002756FC;
    case 460u: goto L_00275708;
    case 461u: goto L_00275714;
    case 462u: goto L_00275720;
    case 463u: goto L_0027572C;
    case 464u: goto L_00275734;
    case 465u: goto L_00275744;
    case 466u: goto L_00275750;
    case 467u: goto L_0027575C;
    case 468u: goto L_00275768;
    case 469u: goto L_00275774;
    case 470u: goto L_0027577C;
    case 471u: goto L_0027578C;
    case 472u: goto L_00275798;
    case 473u: goto L_002757A4;
    case 474u: goto L_002757B0;
    case 475u: goto L_002757BC;
    case 476u: goto L_002757C4;
    case 477u: goto L_002757D4;
    case 478u: goto L_002757E0;
    case 479u: goto L_002757EC;
    case 480u: goto L_002757F8;
    case 481u: goto L_00275804;
    case 482u: goto L_0027580C;
    case 483u: goto L_0027581C;
    case 484u: goto L_00275828;
    case 485u: goto L_00275834;
    case 486u: goto L_00275840;
    case 487u: goto L_0027584C;
    case 488u: goto L_0027585C;
    case 489u: goto L_00275868;
    case 490u: goto L_00275874;
    case 491u: goto L_00275880;
    case 492u: goto L_0027588C;
    case 493u: goto L_00275894;
    case 494u: goto L_002758A4;
    case 495u: goto L_002758B0;
    case 496u: goto L_002758BC;
    case 497u: goto L_002758C8;
    case 498u: goto L_002758D4;
    case 499u: goto L_002758E4;
    case 500u: goto L_002758F0;
    case 501u: goto L_002758FC;
    case 502u: goto L_00275908;
    case 503u: goto L_00275914;
    case 504u: goto L_0027591C;
    case 505u: goto L_0027592C;
    case 506u: goto L_00275938;
    case 507u: goto L_00275944;
    case 508u: goto L_00275950;
    case 509u: goto L_0027595C;
    case 510u: goto L_00275964;
    case 511u: goto L_00275974;
    case 512u: goto L_00275980;
    case 513u: goto L_0027598C;
    case 514u: goto L_00275998;
    case 515u: goto L_002759A4;
    case 516u: goto L_002759AC;
    case 517u: goto L_002759BC;
    case 518u: goto L_002759C8;
    case 519u: goto L_002759D4;
    case 520u: goto L_002759E0;
    case 521u: goto L_002759EC;
    case 522u: goto L_002759F4;
    case 523u: goto L_00275A04;
    case 524u: goto L_00275A10;
    case 525u: goto L_00275A1C;
    case 526u: goto L_00275A28;
    case 527u: goto L_00275A34;
    case 528u: goto L_00275A44;
    case 529u: goto L_00275A50;
    case 530u: goto L_00275A5C;
    case 531u: goto L_00275A64;
    case 532u: goto L_00275A6C;
    case 533u: goto L_00275A90;
    case 534u: goto L_00275ABC;
    case 535u: goto L_00275AE4;
    case 536u: goto L_00275AF4;
    case 537u: goto L_00275AFC;
    case 538u: goto L_00275B04;
    case 539u: goto L_00275B10;
    case 540u: goto L_00275B1C;
    case 541u: goto L_00275B2C;
    case 542u: goto L_00275B38;
    case 543u: goto L_00275B44;
    case 544u: goto L_00275B50;
    case 545u: goto L_00275B5C;
    case 546u: goto L_00275B64;
    case 547u: goto L_00275B74;
    case 548u: goto L_00275B80;
    case 549u: goto L_00275B8C;
    case 550u: goto L_00275B98;
    case 551u: goto L_00275BA4;
    case 552u: goto L_00275BAC;
    case 553u: goto L_00275BBC;
    case 554u: goto L_00275BC8;
    case 555u: goto L_00275BD4;
    case 556u: goto L_00275BE0;
    case 557u: goto L_00275BEC;
    case 558u: goto L_00275BF4;
    case 559u: goto L_00275C04;
    case 560u: goto L_00275C10;
    case 561u: goto L_00275C1C;
    case 562u: goto L_00275C28;
    case 563u: goto L_00275C34;
    case 564u: goto L_00275C3C;
    case 565u: goto L_00275C4C;
    case 566u: goto L_00275C58;
    case 567u: goto L_00275C64;
    case 568u: goto L_00275C6C;
    case 569u: goto L_00275C74;
    case 570u: goto L_00275C90;
    case 571u: goto L_00275CBC;
    case 572u: goto L_00275CE4;
    case 573u: goto L_00275CF4;
    case 574u: goto L_00275CFC;
    case 575u: goto L_00275D04;
    case 576u: goto L_00275D10;
    case 577u: goto L_00275D1C;
    case 578u: goto L_00275D2C;
    case 579u: goto L_00275D38;
    case 580u: goto L_00275D44;
    case 581u: goto L_00275D50;
    case 582u: goto L_00275D5C;
    case 583u: goto L_00275D64;
    case 584u: goto L_00275D74;
    case 585u: goto L_00275D80;
    case 586u: goto L_00275D8C;
    case 587u: goto L_00275D98;
    case 588u: goto L_00275DA4;
    case 589u: goto L_00275DAC;
    case 590u: goto L_00275DBC;
    case 591u: goto L_00275DC8;
    case 592u: goto L_00275DD4;
    case 593u: goto L_00275DE0;
    case 594u: goto L_00275DEC;
    case 595u: goto L_00275DFC;
    case 596u: goto L_00275E08;
    case 597u: goto L_00275E14;
    case 598u: goto L_00275E20;
    case 599u: goto L_00275E2C;
    case 600u: goto L_00275E34;
    case 601u: goto L_00275E44;
    case 602u: goto L_00275E50;
    case 603u: goto L_00275E5C;
    case 604u: goto L_00275E68;
    case 605u: goto L_00275E74;
    case 606u: goto L_00275E84;
    case 607u: goto L_00275E90;
    case 608u: goto L_00275E9C;
    case 609u: goto L_00275EA4;
    case 610u: goto L_00275EAC;
    case 611u: goto L_00275ED0;
    case 612u: goto L_00275EFC;
    case 613u: goto L_00275F24;
    case 614u: goto L_00275F34;
    case 615u: goto L_00275F3C;
    case 616u: goto L_00275F44;
    case 617u: goto L_00275F50;
    case 618u: goto L_00275F5C;
    case 619u: goto L_00275F6C;
    case 620u: goto L_00275F78;
    case 621u: goto L_00275F84;
    case 622u: goto L_00275F90;
    case 623u: goto L_00275F9C;
    case 624u: goto L_00275FA4;
    case 625u: goto L_00275FB4;
    case 626u: goto L_00275FC0;
    case 627u: goto L_00275FCC;
    case 628u: goto L_00275FD8;
    case 629u: goto L_00275FE4;
    case 630u: goto L_00275FEC;
    case 631u: goto L_00275FFC;
    case 632u: goto L_00276008;
    case 633u: goto L_00276014;
    case 634u: goto L_00276020;
    case 635u: goto L_0027602C;
    case 636u: goto L_00276034;
    case 637u: goto L_00276044;
    case 638u: goto L_00276050;
    case 639u: goto L_0027605C;
    case 640u: goto L_00276068;
    case 641u: goto L_00276074;
    case 642u: goto L_0027607C;
    case 643u: goto L_0027608C;
    case 644u: goto L_00276098;
    case 645u: goto L_002760A4;
    case 646u: goto L_002760AC;
    case 647u: goto L_002760B4;
    case 648u: goto L_002760D0;
    case 649u: goto L_002760FC;
    case 650u: goto L_00276124;
    case 651u: goto L_00276134;
    case 652u: goto L_0027613C;
    case 653u: goto L_00276144;
    case 654u: goto L_00276150;
    case 655u: goto L_0027615C;
    case 656u: goto L_0027616C;
    case 657u: goto L_00276178;
    case 658u: goto L_00276184;
    case 659u: goto L_00276190;
    case 660u: goto L_0027619C;
    case 661u: goto L_002761A4;
    case 662u: goto L_002761B4;
    case 663u: goto L_002761C0;
    case 664u: goto L_002761CC;
    case 665u: goto L_002761D4;
    case 666u: goto L_002761DC;
    case 667u: goto L_00276200;
    case 668u: goto L_0027622C;
    case 669u: goto L_00276254;
    case 670u: goto L_00276264;
    case 671u: goto L_0027626C;
    case 672u: goto L_00276274;
    case 673u: goto L_00276280;
    case 674u: goto L_0027628C;
    case 675u: goto L_0027629C;
    case 676u: goto L_002762A8;
    case 677u: goto L_002762B4;
    case 678u: goto L_002762C0;
    case 679u: goto L_002762CC;
    case 680u: goto L_002762D4;
    case 681u: goto L_002762E4;
    case 682u: goto L_002762F0;
    case 683u: goto L_002762FC;
    case 684u: goto L_00276304;
    case 685u: goto L_0027630C;
    case 686u: goto L_00276330;
    case 687u: goto L_0027634C;
    case 688u: goto L_0027635C;
    case 689u: goto L_0027636C;
    case 690u: goto L_0027637C;
    case 691u: goto L_00276384;
    case 692u: goto L_0027638C;
    case 693u: goto L_00276394;
    case 694u: goto L_002763B0;
    case 695u: goto L_002763CC;
    case 696u: goto L_002763DC;
    case 697u: goto L_002763EC;
    case 698u: goto L_002763FC;
    case 699u: goto L_00276404;
    case 700u: goto L_0027640C;
    case 701u: goto L_00276414;
    case 702u: goto L_00276430;
    case 703u: goto L_00276444;
    case 704u: goto L_0027644C;
    case 705u: goto L_0027645C;
    case 706u: goto L_00276464;
    case 707u: goto L_0027646C;
    case 708u: goto L_00276474;
    case 709u: goto L_00276490;
    case 710u: goto L_002764AC;
    case 711u: goto L_002764D8;
    case 712u: goto L_00276510;
    case 713u: goto L_0027653C;
    case 714u: goto L_00276550;
    case 715u: goto L_00276564;
    case 716u: goto L_00276580;
    case 717u: goto L_002765AC;
    case 718u: goto L_002765B4;
    case 719u: goto L_002765C8;
    case 720u: goto L_002765E0;
    case 721u: goto L_00276618;
    case 722u: goto L_00276624;
    case 723u: goto L_00276638;
    case 724u: goto L_00276654;
    case 725u: goto L_00276668;
    case 726u: goto L_00276674;
    case 727u: goto L_0027667C;
    case 728u: goto L_00276690;
    case 729u: goto L_002766B0;
    case 730u: goto L_002766CC;
    case 731u: goto L_002766E0;
    case 732u: goto L_002766E8;
    case 733u: goto L_002766F0;
    case 734u: goto L_002766F8;
    case 735u: goto L_00276700;
    case 736u: goto L_00276714;
    case 737u: goto L_00276730;
    case 738u: goto L_0027675C;
    case 739u: goto L_00276770;
    case 740u: goto L_0027677C;
    case 741u: goto L_00276790;
    case 742u: goto L_002767B0;
    case 743u: goto L_002767E0;
    case 744u: goto L_002767F4;
    case 745u: goto L_00276800;
    case 746u: goto L_00276808;
    case 747u: goto L_00276814;
    case 748u: goto L_0027681C;
    case 749u: goto L_00276830;
    case 750u: goto L_00276850;
    case 751u: goto L_00276880;
    case 752u: goto L_00276894;
    case 753u: goto L_002768A8;
    case 754u: goto L_002768BC;
    case 755u: goto L_002768D0;
    case 756u: goto L_00276900;
    case 757u: goto L_00276914;
    case 758u: goto L_00276920;
    case 759u: goto L_00276940;
    case 760u: goto L_00276954;
    case 761u: goto L_00276970;
    case 762u: goto L_002769C4;
    case 763u: goto L_002769D8;
    case 764u: goto L_002769E0;
    case 765u: goto L_002769EC;
    case 766u: goto L_00276A50;
    case 767u: goto L_00276A78;
    case 768u: goto L_00276A84;
    case 769u: goto L_00276A8C;
    case 770u: goto L_00276A94;
    case 771u: goto L_00276AA8;
    case 772u: goto L_00276AB8;
    case 773u: goto L_00276AC0;
    case 774u: goto L_00276AC8;
    case 775u: goto L_00276AD8;
    case 776u: goto L_00276AE4;
    case 777u: goto L_00276AF8;
    case 778u: goto L_00276B4C;
    case 779u: goto L_00276B64;
    case 780u: goto L_00276B74;
    case 781u: goto L_00276BC4;
    case 782u: goto L_00276BD0;
    case 783u: goto L_00276BD8;
    case 784u: goto L_00276BE0;
    case 785u: goto L_00276BE8;
    case 786u: goto L_00276C10;
    case 787u: goto L_00276C48;
    case 788u: goto L_00276C5C;
    case 789u: goto L_00276C80;
    case 790u: goto L_00276C94;
    case 791u: goto L_00276CAC;
    case 792u: goto L_00276CC0;
    case 793u: goto L_00276CE0;
    case 794u: goto L_00276E18;
    case 795u: goto L_00276E34;
    case 796u: goto L_00276E44;
    case 797u: goto L_00276E58;
    case 798u: goto L_00276E70;
    case 799u: goto L_00276E9C;
    case 800u: goto L_00276EB0;
    case 801u: goto L_00276EB8;
    case 802u: goto L_00276ECC;
    case 803u: goto L_00276EE0;
    case 804u: goto L_00276F08;
    case 805u: goto L_00276F14;
    case 806u: goto L_00276F44;
    case 807u: goto L_00276F54;
    case 808u: goto L_00276F78;
    case 809u: goto L_0027700C;
    case 810u: goto L_00277030;
    case 811u: goto L_00277148;
    case 812u: goto L_00277154;
    case 813u: goto L_0027716C;
    case 814u: goto L_00277184;
    case 815u: goto L_002771D0;
    case 816u: goto L_002771F0;
    case 817u: goto L_00277210;
    case 818u: goto L_00277258;
    case 819u: goto L_00277270;
    case 820u: goto L_002772A0;
    case 821u: goto L_002772B8;
    case 822u: goto L_002772E4;
    case 823u: goto L_00277300;
    case 824u: goto L_00277314;
    case 825u: goto L_0027731C;
    case 826u: goto L_00277328;
    case 827u: goto L_00277334;
    case 828u: goto L_0027734C;
    case 829u: goto L_00277354;
    case 830u: goto L_0027736C;
    case 831u: goto L_002773AC;
    case 832u: goto L_002773E4;
    case 833u: goto L_00277400;
    case 834u: goto L_00277414;
    case 835u: goto L_0027743C;
    case 836u: goto L_00277458;
    case 837u: goto L_002774AC;
    case 838u: goto L_002774C4;
    case 839u: goto L_00277500;
    case 840u: goto L_00277514;
    case 841u: goto L_00277520;
    case 842u: goto L_00277528;
    case 843u: goto L_00277554;
    case 844u: goto L_00277574;
    case 845u: goto L_002775C4;
    case 846u: goto L_002775DC;
    case 847u: goto L_002775F0;
    case 848u: goto L_0027761C;
    case 849u: goto L_00277638;
    case 850u: goto L_00277644;
    case 851u: goto L_00277650;
    case 852u: goto L_00277658;
    case 853u: goto L_0027766C;
    case 854u: goto L_00277674;
    case 855u: goto L_0027768C;
    case 856u: goto L_002776B0;
    case 857u: goto L_002776CC;
    case 858u: goto L_0027770C;
    case 859u: goto L_00277730;
    case 860u: goto L_0027775C;
    case 861u: goto L_00277778;
    case 862u: goto L_00277784;
    case 863u: goto L_00277790;
    case 864u: goto L_00277798;
    case 865u: goto L_002777AC;
    case 866u: goto L_002777B8;
    case 867u: goto L_002777D0;
    case 868u: goto L_002777F4;
    case 869u: goto L_0027782C;
    case 870u: goto L_0027785C;
    case 871u: goto L_00277874;
    case 872u: goto L_00277890;
    case 873u: goto L_002778A4;
    case 874u: goto L_002778B0;
    case 875u: goto L_002778BC;
    case 876u: goto L_002778C4;
    case 877u: goto L_002778D8;
    case 878u: goto L_002778E0;
    case 879u: goto L_002778F8;
    case 880u: goto L_0027791C;
    case 881u: goto L_00277940;
    case 882u: goto L_00277960;
    case 883u: goto L_0027797C;
    case 884u: goto L_00277984;
    case 885u: goto L_002779C8;
    case 886u: goto L_002779E0;
    case 887u: goto L_00277A28;
    case 888u: goto L_00277A58;
    case 889u: goto L_00277A70;
    case 890u: goto L_00277A88;
    case 891u: goto L_00277A90;
    case 892u: goto L_00277AAC;
    case 893u: goto L_00277AB8;
    case 894u: goto L_00277AC0;
    case 895u: goto L_00277AD4;
    case 896u: goto L_00277ADC;
    case 897u: goto L_00277AF4;
    case 898u: goto L_00277B34;
    case 899u: goto L_00277B44;
    case 900u: goto L_00277B78;
    case 901u: goto L_00277B90;
    case 902u: goto L_00277BA8;
    case 903u: goto L_00277BB0;
    case 904u: goto L_00277BCC;
    case 905u: goto L_00277BE8;
    case 906u: goto L_00277C3C;
    case 907u: goto L_00277C60;
    case 908u: goto L_00277C74;
    case 909u: goto L_00277C80;
    case 910u: goto L_00277C90;
    case 911u: goto L_00277CA0;
    case 912u: goto L_00277CA8;
    case 913u: goto L_00277CD8;
    case 914u: goto L_00277D0C;
    case 915u: goto L_00277D1C;
    case 916u: goto L_00277D34;
    case 917u: goto L_00277D88;
    case 918u: goto L_00277DA0;
    case 919u: goto L_00277DB8;
    case 920u: goto L_00277DC0;
    case 921u: goto L_00277E00;
    case 922u: goto L_00277E44;
    case 923u: goto L_00277E4C;
    case 924u: goto L_00277E60;
    case 925u: goto L_00277E80;
    case 926u: goto L_00277EA4;
    case 927u: goto L_00277EAC;
    case 928u: goto L_00277EF0;
    case 929u: goto L_00277F08;
    case 930u: goto L_00277F34;
    case 931u: goto L_00277F50;
    case 932u: goto L_00277F64;
    case 933u: goto L_00277F70;
    case 934u: goto L_00277F7C;
    case 935u: goto L_00277F84;
    case 936u: goto L_00277FA0;
    case 937u: goto L_00277FB8;
    case 938u: goto L_00277FC4;
    case 939u: goto L_00277FDC;
    default: bad_entry(c, 0x00274000u); return;
    }
L_00274000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274008u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00274008u) [[unlikely]] return; }
L_00274008:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274014u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00274014u) [[unlikely]] return; }
L_00274014:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027401Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x0027401Cu) [[unlikely]] return; }
L_0027401C:
    c.f[13] = ld32((c.r[17].w[0] + 84u));
    c.f[14] = ld32((c.r[17].w[0] + 88u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027402Cu); c.f[12] = ld32((c.r[17].w[0] + 80u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0027402Cu) [[unlikely]] return; }
L_0027402C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274038u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00274038u) [[unlikely]] return; }
L_00274038:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274044u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00274044u) [[unlikely]] return; }
L_00274044:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274050u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00274050u) [[unlikely]] return; }
L_00274050:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027405Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0027405Cu) [[unlikely]] return; }
L_0027405C:
    c.f[13] = ld32((c.r[17].w[0] + 100u));
    c.f[14] = ld32((c.r[17].w[0] + 104u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027406Cu); c.f[12] = ld32((c.r[17].w[0] + 96u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0027406Cu) [[unlikely]] return; }
L_0027406C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274078u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00274078u) [[unlikely]] return; }
L_00274078:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274084u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00274084u) [[unlikely]] return; }
L_00274084:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274090u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00274090u) [[unlikely]] return; }
L_00274090:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027409Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0027409Cu) [[unlikely]] return; }
L_0027409C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002740A4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x002740A4u) [[unlikely]] return; }
L_002740A4:
    c.f[13] = ld32((c.r[17].w[0] + 116u));
    c.f[14] = ld32((c.r[17].w[0] + 120u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002740B4u); c.f[12] = ld32((c.r[17].w[0] + 112u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002740B4u) [[unlikely]] return; }
L_002740B4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002740C0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002740C0u) [[unlikely]] return; }
L_002740C0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002740CCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002740CCu) [[unlikely]] return; }
L_002740CC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002740D8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002740D8u) [[unlikely]] return; }
L_002740D8:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002740E4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002740E4u) [[unlikely]] return; }
L_002740E4:
    c.f[13] = ld32((c.r[17].w[0] + 132u));
    c.f[14] = ld32((c.r[17].w[0] + 136u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002740F4u); c.f[12] = ld32((c.r[17].w[0] + 128u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002740F4u) [[unlikely]] return; }
L_002740F4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274100u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00274100u) [[unlikely]] return; }
L_00274100:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027410Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0027410Cu) [[unlikely]] return; }
L_0027410C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274118u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00274118u) [[unlikely]] return; }
L_00274118:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274124u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00274124u) [[unlikely]] return; }
L_00274124:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027412Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x0027412Cu) [[unlikely]] return; }
L_0027412C:
    c.f[13] = ld32((c.r[17].w[0] + 148u));
    c.f[14] = ld32((c.r[17].w[0] + 152u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027413Cu); c.f[12] = ld32((c.r[17].w[0] + 144u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0027413Cu) [[unlikely]] return; }
L_0027413C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274148u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00274148u) [[unlikely]] return; }
L_00274148:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274154u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00274154u) [[unlikely]] return; }
L_00274154:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274160u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00274160u) [[unlikely]] return; }
L_00274160:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027416Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0027416Cu) [[unlikely]] return; }
L_0027416C:
    c.f[13] = ld32((c.r[17].w[0] + 164u));
    c.f[14] = ld32((c.r[17].w[0] + 168u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027417Cu); c.f[12] = ld32((c.r[17].w[0] + 160u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0027417Cu) [[unlikely]] return; }
L_0027417C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274188u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00274188u) [[unlikely]] return; }
L_00274188:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274194u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00274194u) [[unlikely]] return; }
L_00274194:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002741A0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002741A0u) [[unlikely]] return; }
L_002741A0:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002741ACu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002741ACu) [[unlikely]] return; }
L_002741AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002741B4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x002741B4u) [[unlikely]] return; }
L_002741B4:
    c.f[13] = ld32((c.r[17].w[0] + 180u));
    c.f[14] = ld32((c.r[17].w[0] + 184u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002741C4u); c.f[12] = ld32((c.r[17].w[0] + 176u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002741C4u) [[unlikely]] return; }
L_002741C4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002741D0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002741D0u) [[unlikely]] return; }
L_002741D0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002741DCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002741DCu) [[unlikely]] return; }
L_002741DC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002741E8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002741E8u) [[unlikely]] return; }
L_002741E8:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002741F4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002741F4u) [[unlikely]] return; }
L_002741F4:
    c.f[13] = ld32((c.r[17].w[0] + 196u));
    c.f[14] = ld32((c.r[17].w[0] + 200u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274204u); c.f[12] = ld32((c.r[17].w[0] + 192u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00274204u) [[unlikely]] return; }
L_00274204:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274210u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00274210u) [[unlikely]] return; }
L_00274210:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027421Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0027421Cu) [[unlikely]] return; }
L_0027421C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274228u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00274228u) [[unlikely]] return; }
L_00274228:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274234u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00274234u) [[unlikely]] return; }
L_00274234:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027423Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x0027423Cu) [[unlikely]] return; }
L_0027423C:
    c.f[13] = ld32((c.r[17].w[0] + 212u));
    c.f[14] = ld32((c.r[17].w[0] + 216u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027424Cu); c.f[12] = ld32((c.r[17].w[0] + 208u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0027424Cu) [[unlikely]] return; }
L_0027424C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274258u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00274258u) [[unlikely]] return; }
L_00274258:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274264u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00274264u) [[unlikely]] return; }
L_00274264:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274270u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00274270u) [[unlikely]] return; }
L_00274270:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027427Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0027427Cu) [[unlikely]] return; }
L_0027427C:
    c.f[13] = ld32((c.r[17].w[0] + 228u));
    c.f[14] = ld32((c.r[17].w[0] + 232u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027428Cu); c.f[12] = ld32((c.r[17].w[0] + 224u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0027428Cu) [[unlikely]] return; }
L_0027428C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274298u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00274298u) [[unlikely]] return; }
L_00274298:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002742A4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002742A4u) [[unlikely]] return; }
L_002742A4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002742B0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002742B0u) [[unlikely]] return; }
L_002742B0:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002742BCu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002742BCu) [[unlikely]] return; }
L_002742BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002742C4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x002742C4u) [[unlikely]] return; }
L_002742C4:
    c.f[13] = ld32((c.r[17].w[0] + 244u));
    c.f[14] = ld32((c.r[17].w[0] + 248u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002742D4u); c.f[12] = ld32((c.r[17].w[0] + 240u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002742D4u) [[unlikely]] return; }
L_002742D4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002742E0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002742E0u) [[unlikely]] return; }
L_002742E0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002742ECu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002742ECu) [[unlikely]] return; }
L_002742EC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002742F8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002742F8u) [[unlikely]] return; }
L_002742F8:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274304u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00274304u) [[unlikely]] return; }
L_00274304:
    c.f[13] = ld32((c.r[17].w[0] + 260u));
    c.f[14] = ld32((c.r[17].w[0] + 264u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274314u); c.f[12] = ld32((c.r[17].w[0] + 256u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00274314u) [[unlikely]] return; }
L_00274314:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274320u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00274320u) [[unlikely]] return; }
L_00274320:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027432Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0027432Cu) [[unlikely]] return; }
L_0027432C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274338u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00274338u) [[unlikely]] return; }
L_00274338:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274344u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00274344u) [[unlikely]] return; }
L_00274344:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027434Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x0027434Cu) [[unlikely]] return; }
L_0027434C:
    c.f[13] = ld32((c.r[17].w[0] + 276u));
    c.f[14] = ld32((c.r[17].w[0] + 280u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027435Cu); c.f[12] = ld32((c.r[17].w[0] + 272u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0027435Cu) [[unlikely]] return; }
L_0027435C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274368u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00274368u) [[unlikely]] return; }
L_00274368:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274374u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00274374u) [[unlikely]] return; }
L_00274374:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274380u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00274380u) [[unlikely]] return; }
L_00274380:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027438Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0027438Cu) [[unlikely]] return; }
L_0027438C:
    c.f[13] = ld32((c.r[17].w[0] + 292u));
    c.f[14] = ld32((c.r[17].w[0] + 296u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027439Cu); c.f[12] = ld32((c.r[17].w[0] + 288u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0027439Cu) [[unlikely]] return; }
L_0027439C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002743A8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002743A8u) [[unlikely]] return; }
L_002743A8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002743B4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002743B4u) [[unlikely]] return; }
L_002743B4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002743C0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002743C0u) [[unlikely]] return; }
L_002743C0:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002743CCu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002743CCu) [[unlikely]] return; }
L_002743CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002743D4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x002743D4u) [[unlikely]] return; }
L_002743D4:
    c.f[13] = ld32((c.r[17].w[0] + 308u));
    c.f[14] = ld32((c.r[17].w[0] + 312u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002743E4u); c.f[12] = ld32((c.r[17].w[0] + 304u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002743E4u) [[unlikely]] return; }
L_002743E4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002743F0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002743F0u) [[unlikely]] return; }
L_002743F0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002743FCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002743FCu) [[unlikely]] return; }
L_002743FC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274408u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00274408u) [[unlikely]] return; }
L_00274408:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274414u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00274414u) [[unlikely]] return; }
L_00274414:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027441Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x0027441Cu) [[unlikely]] return; }
L_0027441C:
    c.f[13] = ld32((c.r[17].w[0] + 324u));
    c.f[14] = ld32((c.r[17].w[0] + 328u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027442Cu); c.f[12] = ld32((c.r[17].w[0] + 320u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0027442Cu) [[unlikely]] return; }
L_0027442C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274438u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00274438u) [[unlikely]] return; }
L_00274438:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274444u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00274444u) [[unlikely]] return; }
L_00274444:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274450u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00274450u) [[unlikely]] return; }
L_00274450:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027445Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0027445Cu) [[unlikely]] return; }
L_0027445C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274464u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x00274464u) [[unlikely]] return; }
L_00274464:
    c.f[13] = ld32((c.r[17].w[0] + 340u));
    c.f[14] = ld32((c.r[17].w[0] + 344u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274474u); c.f[12] = ld32((c.r[17].w[0] + 336u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00274474u) [[unlikely]] return; }
L_00274474:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274480u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00274480u) [[unlikely]] return; }
L_00274480:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027448Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0027448Cu) [[unlikely]] return; }
L_0027448C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274498u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00274498u) [[unlikely]] return; }
L_00274498:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002744A4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002744A4u) [[unlikely]] return; }
L_002744A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002744ACu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x002744ACu) [[unlikely]] return; }
L_002744AC:
    c.f[13] = ld32((c.r[17].w[0] + 356u));
    c.f[14] = ld32((c.r[17].w[0] + 360u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002744BCu); c.f[12] = ld32((c.r[17].w[0] + 352u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002744BCu) [[unlikely]] return; }
L_002744BC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002744C8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002744C8u) [[unlikely]] return; }
L_002744C8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002744D4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002744D4u) [[unlikely]] return; }
L_002744D4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002744E0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002744E0u) [[unlikely]] return; }
L_002744E0:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002744ECu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002744ECu) [[unlikely]] return; }
L_002744EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002744F4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x002744F4u) [[unlikely]] return; }
L_002744F4:
    c.f[13] = ld32((c.r[17].w[0] + 372u));
    c.f[14] = ld32((c.r[17].w[0] + 376u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274504u); c.f[12] = ld32((c.r[17].w[0] + 368u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00274504u) [[unlikely]] return; }
L_00274504:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274510u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00274510u) [[unlikely]] return; }
L_00274510:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027451Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0027451Cu) [[unlikely]] return; }
L_0027451C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274528u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00274528u) [[unlikely]] return; }
L_00274528:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274534u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00274534u) [[unlikely]] return; }
L_00274534:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027453Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x0027453Cu) [[unlikely]] return; }
L_0027453C:
    c.f[13] = ld32((c.r[17].w[0] + 388u));
    c.f[14] = ld32((c.r[17].w[0] + 392u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027454Cu); c.f[12] = ld32((c.r[17].w[0] + 384u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0027454Cu) [[unlikely]] return; }
L_0027454C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274558u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00274558u) [[unlikely]] return; }
L_00274558:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274564u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00274564u) [[unlikely]] return; }
L_00274564:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274570u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00274570u) [[unlikely]] return; }
L_00274570:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027457Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0027457Cu) [[unlikely]] return; }
L_0027457C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274584u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x00274584u) [[unlikely]] return; }
L_00274584:
    c.f[13] = ld32((c.r[17].w[0] + 404u));
    c.f[14] = ld32((c.r[17].w[0] + 408u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274594u); c.f[12] = ld32((c.r[17].w[0] + 400u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00274594u) [[unlikely]] return; }
L_00274594:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002745A0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002745A0u) [[unlikely]] return; }
L_002745A0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002745ACu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002745ACu) [[unlikely]] return; }
L_002745AC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002745B8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002745B8u) [[unlikely]] return; }
L_002745B8:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002745C4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002745C4u) [[unlikely]] return; }
L_002745C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002745CCu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x002745CCu) [[unlikely]] return; }
L_002745CC:
    c.f[13] = ld32((c.r[17].w[0] + 420u));
    c.f[14] = ld32((c.r[17].w[0] + 424u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002745DCu); c.f[12] = ld32((c.r[17].w[0] + 416u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002745DCu) [[unlikely]] return; }
L_002745DC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002745E8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002745E8u) [[unlikely]] return; }
L_002745E8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002745F4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002745F4u) [[unlikely]] return; }
L_002745F4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274600u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00274600u) [[unlikely]] return; }
L_00274600:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027460Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0027460Cu) [[unlikely]] return; }
L_0027460C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274614u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x00274614u) [[unlikely]] return; }
L_00274614:
    c.f[13] = ld32((c.r[17].w[0] + 436u));
    c.f[14] = ld32((c.r[17].w[0] + 440u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274624u); c.f[12] = ld32((c.r[17].w[0] + 432u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00274624u) [[unlikely]] return; }
L_00274624:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274630u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00274630u) [[unlikely]] return; }
L_00274630:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027463Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0027463Cu) [[unlikely]] return; }
L_0027463C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274648u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00274648u) [[unlikely]] return; }
L_00274648:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274654u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00274654u) [[unlikely]] return; }
L_00274654:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027465Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x0027465Cu) [[unlikely]] return; }
L_0027465C:
    c.f[13] = ld32((c.r[17].w[0] + 452u));
    c.f[14] = ld32((c.r[17].w[0] + 456u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027466Cu); c.f[12] = ld32((c.r[17].w[0] + 448u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0027466Cu) [[unlikely]] return; }
L_0027466C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274678u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00274678u) [[unlikely]] return; }
L_00274678:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274684u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00274684u) [[unlikely]] return; }
L_00274684:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274690u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00274690u) [[unlikely]] return; }
L_00274690:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027469Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0027469Cu) [[unlikely]] return; }
L_0027469C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002746A4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x002746A4u) [[unlikely]] return; }
L_002746A4:
    c.f[13] = ld32((c.r[17].w[0] + 468u));
    c.f[14] = ld32((c.r[17].w[0] + 472u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002746B4u); c.f[12] = ld32((c.r[17].w[0] + 464u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002746B4u) [[unlikely]] return; }
L_002746B4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002746C0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002746C0u) [[unlikely]] return; }
L_002746C0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002746CCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002746CCu) [[unlikely]] return; }
L_002746CC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002746D8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002746D8u) [[unlikely]] return; }
L_002746D8:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002746E4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002746E4u) [[unlikely]] return; }
L_002746E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002746ECu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x002746ECu) [[unlikely]] return; }
L_002746EC:
    c.f[13] = ld32((c.r[17].w[0] + 484u));
    c.f[14] = ld32((c.r[17].w[0] + 488u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002746FCu); c.f[12] = ld32((c.r[17].w[0] + 480u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002746FCu) [[unlikely]] return; }
L_002746FC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274708u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00274708u) [[unlikely]] return; }
L_00274708:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274714u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00274714u) [[unlikely]] return; }
L_00274714:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274720u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00274720u) [[unlikely]] return; }
L_00274720:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027472Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0027472Cu) [[unlikely]] return; }
L_0027472C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274734u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x00274734u) [[unlikely]] return; }
L_00274734:
    c.f[13] = ld32((c.r[17].w[0] + 500u));
    c.f[14] = ld32((c.r[17].w[0] + 504u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274744u); c.f[12] = ld32((c.r[17].w[0] + 496u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00274744u) [[unlikely]] return; }
L_00274744:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274750u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00274750u) [[unlikely]] return; }
L_00274750:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027475Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0027475Cu) [[unlikely]] return; }
L_0027475C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274764u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00274764u) [[unlikely]] return; }
L_00274764:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027476Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0027476Cu) [[unlikely]] return; }
L_0027476C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00274790:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002747BCu); mmi::paddub(c.r[16], c.r[7], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002747BCu) [[unlikely]] return; }
L_002747BC:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002747E4u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002747E4u) [[unlikely]] return; }
L_002747E4:
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002747F4u); c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002747F4u) [[unlikely]] return; }
L_002747F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002747FCu); c.r[4].d[0] = ld16((c.r[19].w[0] + 88u));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002747FCu) [[unlikely]] return; }
L_002747FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274804u); c.r[4].d[0] = ld16((c.r[19].w[0] + 80u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00274804u) [[unlikely]] return; }
L_00274804:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274810u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00274810u) [[unlikely]] return; }
L_00274810:
    set32(c.r[16], c.r[16].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027481Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x0027481Cu) [[unlikely]] return; }
L_0027481C:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027482Cu); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0027482Cu) [[unlikely]] return; }
L_0027482C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274838u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00274838u) [[unlikely]] return; }
L_00274838:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274844u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00274844u) [[unlikely]] return; }
L_00274844:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274850u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00274850u) [[unlikely]] return; }
L_00274850:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027485Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0027485Cu) [[unlikely]] return; }
L_0027485C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274864u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x00274864u) [[unlikely]] return; }
L_00274864:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274874u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00274874u) [[unlikely]] return; }
L_00274874:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274880u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00274880u) [[unlikely]] return; }
L_00274880:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027488Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0027488Cu) [[unlikely]] return; }
L_0027488C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274898u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00274898u) [[unlikely]] return; }
L_00274898:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002748A4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002748A4u) [[unlikely]] return; }
L_002748A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002748ACu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x002748ACu) [[unlikely]] return; }
L_002748AC:
    c.f[13] = ld32((c.r[17].w[0] + 52u));
    c.f[14] = ld32((c.r[17].w[0] + 56u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002748BCu); c.f[12] = ld32((c.r[17].w[0] + 48u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002748BCu) [[unlikely]] return; }
L_002748BC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002748C8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002748C8u) [[unlikely]] return; }
L_002748C8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002748D4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002748D4u) [[unlikely]] return; }
L_002748D4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002748E0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002748E0u) [[unlikely]] return; }
L_002748E0:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002748ECu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002748ECu) [[unlikely]] return; }
L_002748EC:
    c.f[13] = ld32((c.r[17].w[0] + 68u));
    c.f[14] = ld32((c.r[17].w[0] + 72u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002748FCu); c.f[12] = ld32((c.r[17].w[0] + 64u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002748FCu) [[unlikely]] return; }
L_002748FC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274908u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00274908u) [[unlikely]] return; }
L_00274908:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274914u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00274914u) [[unlikely]] return; }
L_00274914:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274920u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00274920u) [[unlikely]] return; }
L_00274920:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027492Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0027492Cu) [[unlikely]] return; }
L_0027492C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274934u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x00274934u) [[unlikely]] return; }
L_00274934:
    c.f[13] = ld32((c.r[17].w[0] + 84u));
    c.f[14] = ld32((c.r[17].w[0] + 88u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274944u); c.f[12] = ld32((c.r[17].w[0] + 80u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00274944u) [[unlikely]] return; }
L_00274944:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274950u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00274950u) [[unlikely]] return; }
L_00274950:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027495Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0027495Cu) [[unlikely]] return; }
L_0027495C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274968u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00274968u) [[unlikely]] return; }
L_00274968:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274974u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00274974u) [[unlikely]] return; }
L_00274974:
    c.f[13] = ld32((c.r[17].w[0] + 100u));
    c.f[14] = ld32((c.r[17].w[0] + 104u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274984u); c.f[12] = ld32((c.r[17].w[0] + 96u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00274984u) [[unlikely]] return; }
L_00274984:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274990u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00274990u) [[unlikely]] return; }
L_00274990:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027499Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0027499Cu) [[unlikely]] return; }
L_0027499C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002749A8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002749A8u) [[unlikely]] return; }
L_002749A8:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002749B4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002749B4u) [[unlikely]] return; }
L_002749B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002749BCu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x002749BCu) [[unlikely]] return; }
L_002749BC:
    c.f[13] = ld32((c.r[17].w[0] + 116u));
    c.f[14] = ld32((c.r[17].w[0] + 120u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002749CCu); c.f[12] = ld32((c.r[17].w[0] + 112u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002749CCu) [[unlikely]] return; }
L_002749CC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002749D8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002749D8u) [[unlikely]] return; }
L_002749D8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002749E4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002749E4u) [[unlikely]] return; }
L_002749E4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002749F0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002749F0u) [[unlikely]] return; }
L_002749F0:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002749FCu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002749FCu) [[unlikely]] return; }
L_002749FC:
    c.f[13] = ld32((c.r[17].w[0] + 132u));
    c.f[14] = ld32((c.r[17].w[0] + 136u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274A0Cu); c.f[12] = ld32((c.r[17].w[0] + 128u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00274A0Cu) [[unlikely]] return; }
L_00274A0C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274A18u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00274A18u) [[unlikely]] return; }
L_00274A18:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274A24u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00274A24u) [[unlikely]] return; }
L_00274A24:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274A30u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00274A30u) [[unlikely]] return; }
L_00274A30:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274A3Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00274A3Cu) [[unlikely]] return; }
L_00274A3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274A44u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x00274A44u) [[unlikely]] return; }
L_00274A44:
    c.f[13] = ld32((c.r[17].w[0] + 148u));
    c.f[14] = ld32((c.r[17].w[0] + 152u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274A54u); c.f[12] = ld32((c.r[17].w[0] + 144u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00274A54u) [[unlikely]] return; }
L_00274A54:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274A60u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00274A60u) [[unlikely]] return; }
L_00274A60:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274A6Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00274A6Cu) [[unlikely]] return; }
L_00274A6C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274A78u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00274A78u) [[unlikely]] return; }
L_00274A78:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274A84u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00274A84u) [[unlikely]] return; }
L_00274A84:
    c.f[13] = ld32((c.r[17].w[0] + 164u));
    c.f[14] = ld32((c.r[17].w[0] + 168u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274A94u); c.f[12] = ld32((c.r[17].w[0] + 160u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00274A94u) [[unlikely]] return; }
L_00274A94:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274AA0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00274AA0u) [[unlikely]] return; }
L_00274AA0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274AACu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00274AACu) [[unlikely]] return; }
L_00274AAC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274AB8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00274AB8u) [[unlikely]] return; }
L_00274AB8:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274AC4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00274AC4u) [[unlikely]] return; }
L_00274AC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274ACCu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x00274ACCu) [[unlikely]] return; }
L_00274ACC:
    c.f[13] = ld32((c.r[17].w[0] + 180u));
    c.f[14] = ld32((c.r[17].w[0] + 184u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274ADCu); c.f[12] = ld32((c.r[17].w[0] + 176u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00274ADCu) [[unlikely]] return; }
L_00274ADC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274AE8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00274AE8u) [[unlikely]] return; }
L_00274AE8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274AF4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00274AF4u) [[unlikely]] return; }
L_00274AF4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274B00u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00274B00u) [[unlikely]] return; }
L_00274B00:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274B0Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00274B0Cu) [[unlikely]] return; }
L_00274B0C:
    c.f[13] = ld32((c.r[17].w[0] + 196u));
    c.f[14] = ld32((c.r[17].w[0] + 200u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274B1Cu); c.f[12] = ld32((c.r[17].w[0] + 192u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00274B1Cu) [[unlikely]] return; }
L_00274B1C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274B28u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00274B28u) [[unlikely]] return; }
L_00274B28:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274B34u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00274B34u) [[unlikely]] return; }
L_00274B34:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274B40u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00274B40u) [[unlikely]] return; }
L_00274B40:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274B4Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00274B4Cu) [[unlikely]] return; }
L_00274B4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274B54u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x00274B54u) [[unlikely]] return; }
L_00274B54:
    c.f[13] = ld32((c.r[17].w[0] + 212u));
    c.f[14] = ld32((c.r[17].w[0] + 216u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274B64u); c.f[12] = ld32((c.r[17].w[0] + 208u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00274B64u) [[unlikely]] return; }
L_00274B64:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274B70u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00274B70u) [[unlikely]] return; }
L_00274B70:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274B7Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00274B7Cu) [[unlikely]] return; }
L_00274B7C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274B88u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00274B88u) [[unlikely]] return; }
L_00274B88:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274B94u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00274B94u) [[unlikely]] return; }
L_00274B94:
    c.f[13] = ld32((c.r[17].w[0] + 228u));
    c.f[14] = ld32((c.r[17].w[0] + 232u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274BA4u); c.f[12] = ld32((c.r[17].w[0] + 224u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00274BA4u) [[unlikely]] return; }
L_00274BA4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274BB0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00274BB0u) [[unlikely]] return; }
L_00274BB0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274BBCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00274BBCu) [[unlikely]] return; }
L_00274BBC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274BC8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00274BC8u) [[unlikely]] return; }
L_00274BC8:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274BD4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00274BD4u) [[unlikely]] return; }
L_00274BD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274BDCu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x00274BDCu) [[unlikely]] return; }
L_00274BDC:
    c.f[13] = ld32((c.r[17].w[0] + 244u));
    c.f[14] = ld32((c.r[17].w[0] + 248u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274BECu); c.f[12] = ld32((c.r[17].w[0] + 240u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00274BECu) [[unlikely]] return; }
L_00274BEC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274BF8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00274BF8u) [[unlikely]] return; }
L_00274BF8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274C04u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00274C04u) [[unlikely]] return; }
L_00274C04:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274C10u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00274C10u) [[unlikely]] return; }
L_00274C10:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274C1Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00274C1Cu) [[unlikely]] return; }
L_00274C1C:
    c.f[13] = ld32((c.r[17].w[0] + 260u));
    c.f[14] = ld32((c.r[17].w[0] + 264u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274C2Cu); c.f[12] = ld32((c.r[17].w[0] + 256u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00274C2Cu) [[unlikely]] return; }
L_00274C2C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274C38u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00274C38u) [[unlikely]] return; }
L_00274C38:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274C44u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00274C44u) [[unlikely]] return; }
L_00274C44:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274C50u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00274C50u) [[unlikely]] return; }
L_00274C50:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274C5Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00274C5Cu) [[unlikely]] return; }
L_00274C5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274C64u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x00274C64u) [[unlikely]] return; }
L_00274C64:
    c.f[13] = ld32((c.r[17].w[0] + 276u));
    c.f[14] = ld32((c.r[17].w[0] + 280u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274C74u); c.f[12] = ld32((c.r[17].w[0] + 272u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00274C74u) [[unlikely]] return; }
L_00274C74:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274C80u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00274C80u) [[unlikely]] return; }
L_00274C80:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274C8Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00274C8Cu) [[unlikely]] return; }
L_00274C8C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274C98u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00274C98u) [[unlikely]] return; }
L_00274C98:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274CA4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00274CA4u) [[unlikely]] return; }
L_00274CA4:
    c.f[13] = ld32((c.r[17].w[0] + 292u));
    c.f[14] = ld32((c.r[17].w[0] + 296u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274CB4u); c.f[12] = ld32((c.r[17].w[0] + 288u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00274CB4u) [[unlikely]] return; }
L_00274CB4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274CC0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00274CC0u) [[unlikely]] return; }
L_00274CC0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274CCCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00274CCCu) [[unlikely]] return; }
L_00274CCC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274CD8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00274CD8u) [[unlikely]] return; }
L_00274CD8:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274CE4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00274CE4u) [[unlikely]] return; }
L_00274CE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274CECu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x00274CECu) [[unlikely]] return; }
L_00274CEC:
    c.f[13] = ld32((c.r[17].w[0] + 308u));
    c.f[14] = ld32((c.r[17].w[0] + 312u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274CFCu); c.f[12] = ld32((c.r[17].w[0] + 304u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00274CFCu) [[unlikely]] return; }
L_00274CFC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274D08u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00274D08u) [[unlikely]] return; }
L_00274D08:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274D14u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00274D14u) [[unlikely]] return; }
L_00274D14:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274D20u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00274D20u) [[unlikely]] return; }
L_00274D20:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274D2Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00274D2Cu) [[unlikely]] return; }
L_00274D2C:
    c.f[13] = ld32((c.r[17].w[0] + 324u));
    c.f[14] = ld32((c.r[17].w[0] + 328u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274D3Cu); c.f[12] = ld32((c.r[17].w[0] + 320u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00274D3Cu) [[unlikely]] return; }
L_00274D3C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274D48u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00274D48u) [[unlikely]] return; }
L_00274D48:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274D54u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00274D54u) [[unlikely]] return; }
L_00274D54:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274D60u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00274D60u) [[unlikely]] return; }
L_00274D60:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274D6Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00274D6Cu) [[unlikely]] return; }
L_00274D6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274D74u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x00274D74u) [[unlikely]] return; }
L_00274D74:
    c.f[13] = ld32((c.r[17].w[0] + 340u));
    c.f[14] = ld32((c.r[17].w[0] + 344u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274D84u); c.f[12] = ld32((c.r[17].w[0] + 336u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00274D84u) [[unlikely]] return; }
L_00274D84:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274D90u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00274D90u) [[unlikely]] return; }
L_00274D90:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274D9Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00274D9Cu) [[unlikely]] return; }
L_00274D9C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274DA8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00274DA8u) [[unlikely]] return; }
L_00274DA8:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274DB4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00274DB4u) [[unlikely]] return; }
L_00274DB4:
    c.f[13] = ld32((c.r[17].w[0] + 356u));
    c.f[14] = ld32((c.r[17].w[0] + 360u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274DC4u); c.f[12] = ld32((c.r[17].w[0] + 352u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00274DC4u) [[unlikely]] return; }
L_00274DC4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274DD0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00274DD0u) [[unlikely]] return; }
L_00274DD0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274DDCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00274DDCu) [[unlikely]] return; }
L_00274DDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274DE4u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00274DE4u) [[unlikely]] return; }
L_00274DE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274DECu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00274DECu) [[unlikely]] return; }
L_00274DEC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00274E10:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274E3Cu); mmi::paddub(c.r[16], c.r[7], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00274E3Cu) [[unlikely]] return; }
L_00274E3C:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274E64u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00274E64u) [[unlikely]] return; }
L_00274E64:
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274E74u); c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00274E74u) [[unlikely]] return; }
L_00274E74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274E7Cu); c.r[4].d[0] = ld16((c.r[19].w[0] + 88u));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00274E7Cu) [[unlikely]] return; }
L_00274E7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274E84u); c.r[4].d[0] = ld16((c.r[19].w[0] + 80u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00274E84u) [[unlikely]] return; }
L_00274E84:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274E90u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00274E90u) [[unlikely]] return; }
L_00274E90:
    set32(c.r[16], c.r[16].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274E9Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x00274E9Cu) [[unlikely]] return; }
L_00274E9C:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274EACu); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00274EACu) [[unlikely]] return; }
L_00274EAC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274EB8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00274EB8u) [[unlikely]] return; }
L_00274EB8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274EC4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00274EC4u) [[unlikely]] return; }
L_00274EC4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274ED0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00274ED0u) [[unlikely]] return; }
L_00274ED0:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274EDCu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00274EDCu) [[unlikely]] return; }
L_00274EDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274EE4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x00274EE4u) [[unlikely]] return; }
L_00274EE4:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274EF4u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00274EF4u) [[unlikely]] return; }
L_00274EF4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274F00u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00274F00u) [[unlikely]] return; }
L_00274F00:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274F0Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00274F0Cu) [[unlikely]] return; }
L_00274F0C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274F18u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00274F18u) [[unlikely]] return; }
L_00274F18:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274F24u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00274F24u) [[unlikely]] return; }
L_00274F24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274F2Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x00274F2Cu) [[unlikely]] return; }
L_00274F2C:
    c.f[13] = ld32((c.r[17].w[0] + 52u));
    c.f[14] = ld32((c.r[17].w[0] + 56u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274F3Cu); c.f[12] = ld32((c.r[17].w[0] + 48u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00274F3Cu) [[unlikely]] return; }
L_00274F3C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274F48u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00274F48u) [[unlikely]] return; }
L_00274F48:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274F54u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00274F54u) [[unlikely]] return; }
L_00274F54:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274F60u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00274F60u) [[unlikely]] return; }
L_00274F60:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274F6Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00274F6Cu) [[unlikely]] return; }
L_00274F6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274F74u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x00274F74u) [[unlikely]] return; }
L_00274F74:
    c.f[13] = ld32((c.r[17].w[0] + 68u));
    c.f[14] = ld32((c.r[17].w[0] + 72u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274F84u); c.f[12] = ld32((c.r[17].w[0] + 64u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00274F84u) [[unlikely]] return; }
L_00274F84:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274F90u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00274F90u) [[unlikely]] return; }
L_00274F90:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274F9Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00274F9Cu) [[unlikely]] return; }
L_00274F9C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274FA8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00274FA8u) [[unlikely]] return; }
L_00274FA8:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274FB4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00274FB4u) [[unlikely]] return; }
L_00274FB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274FBCu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x00274FBCu) [[unlikely]] return; }
L_00274FBC:
    c.f[13] = ld32((c.r[17].w[0] + 84u));
    c.f[14] = ld32((c.r[17].w[0] + 88u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274FCCu); c.f[12] = ld32((c.r[17].w[0] + 80u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00274FCCu) [[unlikely]] return; }
L_00274FCC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274FD8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00274FD8u) [[unlikely]] return; }
L_00274FD8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274FE4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00274FE4u) [[unlikely]] return; }
L_00274FE4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274FF0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00274FF0u) [[unlikely]] return; }
L_00274FF0:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274FFCu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00274FFCu) [[unlikely]] return; }
L_00274FFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275004u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x00275004u) [[unlikely]] return; }
L_00275004:
    c.f[13] = ld32((c.r[17].w[0] + 100u));
    c.f[14] = ld32((c.r[17].w[0] + 104u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275014u); c.f[12] = ld32((c.r[17].w[0] + 96u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00275014u) [[unlikely]] return; }
L_00275014:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275020u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00275020u) [[unlikely]] return; }
L_00275020:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027502Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0027502Cu) [[unlikely]] return; }
L_0027502C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275038u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00275038u) [[unlikely]] return; }
L_00275038:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275044u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00275044u) [[unlikely]] return; }
L_00275044:
    c.f[13] = ld32((c.r[17].w[0] + 116u));
    c.f[14] = ld32((c.r[17].w[0] + 120u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275054u); c.f[12] = ld32((c.r[17].w[0] + 112u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00275054u) [[unlikely]] return; }
L_00275054:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275060u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00275060u) [[unlikely]] return; }
L_00275060:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027506Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0027506Cu) [[unlikely]] return; }
L_0027506C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275078u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00275078u) [[unlikely]] return; }
L_00275078:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275084u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00275084u) [[unlikely]] return; }
L_00275084:
    c.f[13] = ld32((c.r[17].w[0] + 132u));
    c.f[14] = ld32((c.r[17].w[0] + 136u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275094u); c.f[12] = ld32((c.r[17].w[0] + 128u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00275094u) [[unlikely]] return; }
L_00275094:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002750A0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002750A0u) [[unlikely]] return; }
L_002750A0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002750ACu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002750ACu) [[unlikely]] return; }
L_002750AC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002750B8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002750B8u) [[unlikely]] return; }
L_002750B8:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002750C4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002750C4u) [[unlikely]] return; }
L_002750C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002750CCu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x002750CCu) [[unlikely]] return; }
L_002750CC:
    c.f[13] = ld32((c.r[17].w[0] + 148u));
    c.f[14] = ld32((c.r[17].w[0] + 152u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002750DCu); c.f[12] = ld32((c.r[17].w[0] + 144u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002750DCu) [[unlikely]] return; }
L_002750DC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002750E8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002750E8u) [[unlikely]] return; }
L_002750E8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002750F4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002750F4u) [[unlikely]] return; }
L_002750F4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275100u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00275100u) [[unlikely]] return; }
L_00275100:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027510Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0027510Cu) [[unlikely]] return; }
L_0027510C:
    c.f[13] = ld32((c.r[17].w[0] + 164u));
    c.f[14] = ld32((c.r[17].w[0] + 168u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027511Cu); c.f[12] = ld32((c.r[17].w[0] + 160u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0027511Cu) [[unlikely]] return; }
L_0027511C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275128u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00275128u) [[unlikely]] return; }
L_00275128:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275134u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00275134u) [[unlikely]] return; }
L_00275134:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275140u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00275140u) [[unlikely]] return; }
L_00275140:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027514Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0027514Cu) [[unlikely]] return; }
L_0027514C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275154u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x00275154u) [[unlikely]] return; }
L_00275154:
    c.f[13] = ld32((c.r[17].w[0] + 180u));
    c.f[14] = ld32((c.r[17].w[0] + 184u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275164u); c.f[12] = ld32((c.r[17].w[0] + 176u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00275164u) [[unlikely]] return; }
L_00275164:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275170u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00275170u) [[unlikely]] return; }
L_00275170:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027517Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0027517Cu) [[unlikely]] return; }
L_0027517C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275188u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00275188u) [[unlikely]] return; }
L_00275188:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275194u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00275194u) [[unlikely]] return; }
L_00275194:
    c.f[13] = ld32((c.r[17].w[0] + 196u));
    c.f[14] = ld32((c.r[17].w[0] + 200u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002751A4u); c.f[12] = ld32((c.r[17].w[0] + 192u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002751A4u) [[unlikely]] return; }
L_002751A4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002751B0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002751B0u) [[unlikely]] return; }
L_002751B0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002751BCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002751BCu) [[unlikely]] return; }
L_002751BC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002751C8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002751C8u) [[unlikely]] return; }
L_002751C8:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002751D4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002751D4u) [[unlikely]] return; }
L_002751D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002751DCu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x002751DCu) [[unlikely]] return; }
L_002751DC:
    c.f[13] = ld32((c.r[17].w[0] + 212u));
    c.f[14] = ld32((c.r[17].w[0] + 216u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002751ECu); c.f[12] = ld32((c.r[17].w[0] + 208u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002751ECu) [[unlikely]] return; }
L_002751EC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002751F8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002751F8u) [[unlikely]] return; }
L_002751F8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275204u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00275204u) [[unlikely]] return; }
L_00275204:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275210u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00275210u) [[unlikely]] return; }
L_00275210:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027521Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0027521Cu) [[unlikely]] return; }
L_0027521C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275224u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x00275224u) [[unlikely]] return; }
L_00275224:
    c.f[13] = ld32((c.r[17].w[0] + 228u));
    c.f[14] = ld32((c.r[17].w[0] + 232u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275234u); c.f[12] = ld32((c.r[17].w[0] + 224u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00275234u) [[unlikely]] return; }
L_00275234:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275240u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00275240u) [[unlikely]] return; }
L_00275240:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027524Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0027524Cu) [[unlikely]] return; }
L_0027524C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275258u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00275258u) [[unlikely]] return; }
L_00275258:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275264u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00275264u) [[unlikely]] return; }
L_00275264:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027526Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x0027526Cu) [[unlikely]] return; }
L_0027526C:
    c.f[13] = ld32((c.r[17].w[0] + 244u));
    c.f[14] = ld32((c.r[17].w[0] + 248u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027527Cu); c.f[12] = ld32((c.r[17].w[0] + 240u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0027527Cu) [[unlikely]] return; }
L_0027527C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275288u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00275288u) [[unlikely]] return; }
L_00275288:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275294u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00275294u) [[unlikely]] return; }
L_00275294:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002752A0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002752A0u) [[unlikely]] return; }
L_002752A0:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002752ACu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002752ACu) [[unlikely]] return; }
L_002752AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002752B4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x002752B4u) [[unlikely]] return; }
L_002752B4:
    c.f[13] = ld32((c.r[17].w[0] + 260u));
    c.f[14] = ld32((c.r[17].w[0] + 264u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002752C4u); c.f[12] = ld32((c.r[17].w[0] + 256u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002752C4u) [[unlikely]] return; }
L_002752C4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002752D0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002752D0u) [[unlikely]] return; }
L_002752D0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002752DCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002752DCu) [[unlikely]] return; }
L_002752DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002752E4u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002752E4u) [[unlikely]] return; }
L_002752E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002752ECu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002752ECu) [[unlikely]] return; }
L_002752EC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00275310:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027533Cu); mmi::paddub(c.r[16], c.r[7], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x0027533Cu) [[unlikely]] return; }
L_0027533C:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275364u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00275364u) [[unlikely]] return; }
L_00275364:
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275374u); c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00275374u) [[unlikely]] return; }
L_00275374:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027537Cu); c.r[4].d[0] = ld16((c.r[19].w[0] + 88u));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x0027537Cu) [[unlikely]] return; }
L_0027537C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275384u); c.r[4].d[0] = ld16((c.r[19].w[0] + 80u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00275384u) [[unlikely]] return; }
L_00275384:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275390u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00275390u) [[unlikely]] return; }
L_00275390:
    set32(c.r[16], c.r[16].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027539Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x0027539Cu) [[unlikely]] return; }
L_0027539C:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002753ACu); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002753ACu) [[unlikely]] return; }
L_002753AC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002753B8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002753B8u) [[unlikely]] return; }
L_002753B8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002753C4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002753C4u) [[unlikely]] return; }
L_002753C4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002753D0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002753D0u) [[unlikely]] return; }
L_002753D0:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002753DCu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002753DCu) [[unlikely]] return; }
L_002753DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002753E4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x002753E4u) [[unlikely]] return; }
L_002753E4:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002753F4u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002753F4u) [[unlikely]] return; }
L_002753F4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275400u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00275400u) [[unlikely]] return; }
L_00275400:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027540Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0027540Cu) [[unlikely]] return; }
L_0027540C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275418u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00275418u) [[unlikely]] return; }
L_00275418:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275424u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00275424u) [[unlikely]] return; }
L_00275424:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027542Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x0027542Cu) [[unlikely]] return; }
L_0027542C:
    c.f[13] = ld32((c.r[17].w[0] + 52u));
    c.f[14] = ld32((c.r[17].w[0] + 56u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027543Cu); c.f[12] = ld32((c.r[17].w[0] + 48u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0027543Cu) [[unlikely]] return; }
L_0027543C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275448u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00275448u) [[unlikely]] return; }
L_00275448:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275454u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00275454u) [[unlikely]] return; }
L_00275454:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275460u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00275460u) [[unlikely]] return; }
L_00275460:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027546Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0027546Cu) [[unlikely]] return; }
L_0027546C:
    c.f[13] = ld32((c.r[17].w[0] + 68u));
    c.f[14] = ld32((c.r[17].w[0] + 72u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027547Cu); c.f[12] = ld32((c.r[17].w[0] + 64u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0027547Cu) [[unlikely]] return; }
L_0027547C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275488u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00275488u) [[unlikely]] return; }
L_00275488:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275494u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00275494u) [[unlikely]] return; }
L_00275494:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002754A0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002754A0u) [[unlikely]] return; }
L_002754A0:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002754ACu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002754ACu) [[unlikely]] return; }
L_002754AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002754B4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x002754B4u) [[unlikely]] return; }
L_002754B4:
    c.f[13] = ld32((c.r[17].w[0] + 84u));
    c.f[14] = ld32((c.r[17].w[0] + 88u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002754C4u); c.f[12] = ld32((c.r[17].w[0] + 80u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002754C4u) [[unlikely]] return; }
L_002754C4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002754D0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002754D0u) [[unlikely]] return; }
L_002754D0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002754DCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002754DCu) [[unlikely]] return; }
L_002754DC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002754E8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002754E8u) [[unlikely]] return; }
L_002754E8:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002754F4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002754F4u) [[unlikely]] return; }
L_002754F4:
    c.f[13] = ld32((c.r[17].w[0] + 100u));
    c.f[14] = ld32((c.r[17].w[0] + 104u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275504u); c.f[12] = ld32((c.r[17].w[0] + 96u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00275504u) [[unlikely]] return; }
L_00275504:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275510u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00275510u) [[unlikely]] return; }
L_00275510:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027551Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0027551Cu) [[unlikely]] return; }
L_0027551C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275528u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00275528u) [[unlikely]] return; }
L_00275528:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275534u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00275534u) [[unlikely]] return; }
L_00275534:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027553Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x0027553Cu) [[unlikely]] return; }
L_0027553C:
    c.f[13] = ld32((c.r[17].w[0] + 116u));
    c.f[14] = ld32((c.r[17].w[0] + 120u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027554Cu); c.f[12] = ld32((c.r[17].w[0] + 112u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0027554Cu) [[unlikely]] return; }
L_0027554C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275558u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00275558u) [[unlikely]] return; }
L_00275558:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275564u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00275564u) [[unlikely]] return; }
L_00275564:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275570u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00275570u) [[unlikely]] return; }
L_00275570:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027557Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0027557Cu) [[unlikely]] return; }
L_0027557C:
    c.f[13] = ld32((c.r[17].w[0] + 132u));
    c.f[14] = ld32((c.r[17].w[0] + 136u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027558Cu); c.f[12] = ld32((c.r[17].w[0] + 128u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0027558Cu) [[unlikely]] return; }
L_0027558C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275598u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00275598u) [[unlikely]] return; }
L_00275598:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002755A4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002755A4u) [[unlikely]] return; }
L_002755A4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002755B0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002755B0u) [[unlikely]] return; }
L_002755B0:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002755BCu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002755BCu) [[unlikely]] return; }
L_002755BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002755C4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x002755C4u) [[unlikely]] return; }
L_002755C4:
    c.f[13] = ld32((c.r[17].w[0] + 148u));
    c.f[14] = ld32((c.r[17].w[0] + 152u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002755D4u); c.f[12] = ld32((c.r[17].w[0] + 144u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002755D4u) [[unlikely]] return; }
L_002755D4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002755E0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002755E0u) [[unlikely]] return; }
L_002755E0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002755ECu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002755ECu) [[unlikely]] return; }
L_002755EC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002755F8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002755F8u) [[unlikely]] return; }
L_002755F8:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275604u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00275604u) [[unlikely]] return; }
L_00275604:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027560Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x0027560Cu) [[unlikely]] return; }
L_0027560C:
    c.f[13] = ld32((c.r[17].w[0] + 164u));
    c.f[14] = ld32((c.r[17].w[0] + 168u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027561Cu); c.f[12] = ld32((c.r[17].w[0] + 160u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0027561Cu) [[unlikely]] return; }
L_0027561C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275628u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00275628u) [[unlikely]] return; }
L_00275628:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275634u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00275634u) [[unlikely]] return; }
L_00275634:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027563Cu); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x0027563Cu) [[unlikely]] return; }
L_0027563C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275644u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00275644u) [[unlikely]] return; }
L_00275644:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00275660:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027568Cu); mmi::paddub(c.r[16], c.r[7], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x0027568Cu) [[unlikely]] return; }
L_0027568C:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002756B4u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002756B4u) [[unlikely]] return; }
L_002756B4:
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002756C4u); c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002756C4u) [[unlikely]] return; }
L_002756C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002756CCu); c.r[4].d[0] = ld16((c.r[19].w[0] + 88u));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002756CCu) [[unlikely]] return; }
L_002756CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002756D4u); c.r[4].d[0] = ld16((c.r[19].w[0] + 80u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002756D4u) [[unlikely]] return; }
L_002756D4:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002756E0u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002756E0u) [[unlikely]] return; }
L_002756E0:
    set32(c.r[16], c.r[16].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002756ECu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x002756ECu) [[unlikely]] return; }
L_002756EC:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002756FCu); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002756FCu) [[unlikely]] return; }
L_002756FC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275708u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00275708u) [[unlikely]] return; }
L_00275708:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275714u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00275714u) [[unlikely]] return; }
L_00275714:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275720u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00275720u) [[unlikely]] return; }
L_00275720:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027572Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0027572Cu) [[unlikely]] return; }
L_0027572C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275734u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x00275734u) [[unlikely]] return; }
L_00275734:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275744u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00275744u) [[unlikely]] return; }
L_00275744:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275750u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00275750u) [[unlikely]] return; }
L_00275750:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027575Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0027575Cu) [[unlikely]] return; }
L_0027575C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275768u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00275768u) [[unlikely]] return; }
L_00275768:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275774u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00275774u) [[unlikely]] return; }
L_00275774:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027577Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x0027577Cu) [[unlikely]] return; }
L_0027577C:
    c.f[13] = ld32((c.r[17].w[0] + 52u));
    c.f[14] = ld32((c.r[17].w[0] + 56u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027578Cu); c.f[12] = ld32((c.r[17].w[0] + 48u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0027578Cu) [[unlikely]] return; }
L_0027578C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275798u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00275798u) [[unlikely]] return; }
L_00275798:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002757A4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002757A4u) [[unlikely]] return; }
L_002757A4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002757B0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002757B0u) [[unlikely]] return; }
L_002757B0:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002757BCu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002757BCu) [[unlikely]] return; }
L_002757BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002757C4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x002757C4u) [[unlikely]] return; }
L_002757C4:
    c.f[13] = ld32((c.r[17].w[0] + 68u));
    c.f[14] = ld32((c.r[17].w[0] + 72u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002757D4u); c.f[12] = ld32((c.r[17].w[0] + 64u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002757D4u) [[unlikely]] return; }
L_002757D4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002757E0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002757E0u) [[unlikely]] return; }
L_002757E0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002757ECu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002757ECu) [[unlikely]] return; }
L_002757EC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002757F8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002757F8u) [[unlikely]] return; }
L_002757F8:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275804u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00275804u) [[unlikely]] return; }
L_00275804:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027580Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x0027580Cu) [[unlikely]] return; }
L_0027580C:
    c.f[13] = ld32((c.r[17].w[0] + 84u));
    c.f[14] = ld32((c.r[17].w[0] + 88u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027581Cu); c.f[12] = ld32((c.r[17].w[0] + 80u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0027581Cu) [[unlikely]] return; }
L_0027581C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275828u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00275828u) [[unlikely]] return; }
L_00275828:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275834u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00275834u) [[unlikely]] return; }
L_00275834:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275840u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00275840u) [[unlikely]] return; }
L_00275840:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027584Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0027584Cu) [[unlikely]] return; }
L_0027584C:
    c.f[13] = ld32((c.r[17].w[0] + 100u));
    c.f[14] = ld32((c.r[17].w[0] + 104u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027585Cu); c.f[12] = ld32((c.r[17].w[0] + 96u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0027585Cu) [[unlikely]] return; }
L_0027585C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275868u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00275868u) [[unlikely]] return; }
L_00275868:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275874u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00275874u) [[unlikely]] return; }
L_00275874:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275880u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00275880u) [[unlikely]] return; }
L_00275880:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027588Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0027588Cu) [[unlikely]] return; }
L_0027588C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275894u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x00275894u) [[unlikely]] return; }
L_00275894:
    c.f[13] = ld32((c.r[17].w[0] + 116u));
    c.f[14] = ld32((c.r[17].w[0] + 120u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002758A4u); c.f[12] = ld32((c.r[17].w[0] + 112u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002758A4u) [[unlikely]] return; }
L_002758A4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002758B0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002758B0u) [[unlikely]] return; }
L_002758B0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002758BCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002758BCu) [[unlikely]] return; }
L_002758BC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002758C8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002758C8u) [[unlikely]] return; }
L_002758C8:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002758D4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002758D4u) [[unlikely]] return; }
L_002758D4:
    c.f[13] = ld32((c.r[17].w[0] + 132u));
    c.f[14] = ld32((c.r[17].w[0] + 136u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002758E4u); c.f[12] = ld32((c.r[17].w[0] + 128u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002758E4u) [[unlikely]] return; }
L_002758E4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002758F0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002758F0u) [[unlikely]] return; }
L_002758F0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002758FCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002758FCu) [[unlikely]] return; }
L_002758FC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275908u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00275908u) [[unlikely]] return; }
L_00275908:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275914u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00275914u) [[unlikely]] return; }
L_00275914:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027591Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x0027591Cu) [[unlikely]] return; }
L_0027591C:
    c.f[13] = ld32((c.r[17].w[0] + 148u));
    c.f[14] = ld32((c.r[17].w[0] + 152u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027592Cu); c.f[12] = ld32((c.r[17].w[0] + 144u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0027592Cu) [[unlikely]] return; }
L_0027592C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275938u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00275938u) [[unlikely]] return; }
L_00275938:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275944u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00275944u) [[unlikely]] return; }
L_00275944:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275950u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00275950u) [[unlikely]] return; }
L_00275950:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027595Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0027595Cu) [[unlikely]] return; }
L_0027595C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275964u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x00275964u) [[unlikely]] return; }
L_00275964:
    c.f[13] = ld32((c.r[17].w[0] + 164u));
    c.f[14] = ld32((c.r[17].w[0] + 168u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275974u); c.f[12] = ld32((c.r[17].w[0] + 160u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00275974u) [[unlikely]] return; }
L_00275974:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275980u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00275980u) [[unlikely]] return; }
L_00275980:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027598Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0027598Cu) [[unlikely]] return; }
L_0027598C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275998u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00275998u) [[unlikely]] return; }
L_00275998:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002759A4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002759A4u) [[unlikely]] return; }
L_002759A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002759ACu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x002759ACu) [[unlikely]] return; }
L_002759AC:
    c.f[13] = ld32((c.r[17].w[0] + 180u));
    c.f[14] = ld32((c.r[17].w[0] + 184u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002759BCu); c.f[12] = ld32((c.r[17].w[0] + 176u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002759BCu) [[unlikely]] return; }
L_002759BC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002759C8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002759C8u) [[unlikely]] return; }
L_002759C8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002759D4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002759D4u) [[unlikely]] return; }
L_002759D4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002759E0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002759E0u) [[unlikely]] return; }
L_002759E0:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002759ECu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002759ECu) [[unlikely]] return; }
L_002759EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002759F4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x002759F4u) [[unlikely]] return; }
L_002759F4:
    c.f[13] = ld32((c.r[17].w[0] + 196u));
    c.f[14] = ld32((c.r[17].w[0] + 200u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275A04u); c.f[12] = ld32((c.r[17].w[0] + 192u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00275A04u) [[unlikely]] return; }
L_00275A04:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275A10u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00275A10u) [[unlikely]] return; }
L_00275A10:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275A1Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00275A1Cu) [[unlikely]] return; }
L_00275A1C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275A28u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00275A28u) [[unlikely]] return; }
L_00275A28:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275A34u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00275A34u) [[unlikely]] return; }
L_00275A34:
    c.f[13] = ld32((c.r[17].w[0] + 212u));
    c.f[14] = ld32((c.r[17].w[0] + 216u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275A44u); c.f[12] = ld32((c.r[17].w[0] + 208u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00275A44u) [[unlikely]] return; }
L_00275A44:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275A50u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00275A50u) [[unlikely]] return; }
L_00275A50:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275A5Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00275A5Cu) [[unlikely]] return; }
L_00275A5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275A64u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00275A64u) [[unlikely]] return; }
L_00275A64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275A6Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00275A6Cu) [[unlikely]] return; }
L_00275A6C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00275A90:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275ABCu); mmi::paddub(c.r[16], c.r[7], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00275ABCu) [[unlikely]] return; }
L_00275ABC:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275AE4u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00275AE4u) [[unlikely]] return; }
L_00275AE4:
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275AF4u); c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00275AF4u) [[unlikely]] return; }
L_00275AF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275AFCu); c.r[4].d[0] = ld16((c.r[19].w[0] + 88u));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00275AFCu) [[unlikely]] return; }
L_00275AFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275B04u); c.r[4].d[0] = ld16((c.r[19].w[0] + 80u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00275B04u) [[unlikely]] return; }
L_00275B04:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275B10u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00275B10u) [[unlikely]] return; }
L_00275B10:
    set32(c.r[16], c.r[16].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275B1Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x00275B1Cu) [[unlikely]] return; }
L_00275B1C:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275B2Cu); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00275B2Cu) [[unlikely]] return; }
L_00275B2C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275B38u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00275B38u) [[unlikely]] return; }
L_00275B38:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275B44u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00275B44u) [[unlikely]] return; }
L_00275B44:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275B50u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00275B50u) [[unlikely]] return; }
L_00275B50:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275B5Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00275B5Cu) [[unlikely]] return; }
L_00275B5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275B64u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x00275B64u) [[unlikely]] return; }
L_00275B64:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275B74u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00275B74u) [[unlikely]] return; }
L_00275B74:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275B80u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00275B80u) [[unlikely]] return; }
L_00275B80:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275B8Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00275B8Cu) [[unlikely]] return; }
L_00275B8C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275B98u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00275B98u) [[unlikely]] return; }
L_00275B98:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275BA4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00275BA4u) [[unlikely]] return; }
L_00275BA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275BACu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x00275BACu) [[unlikely]] return; }
L_00275BAC:
    c.f[13] = ld32((c.r[17].w[0] + 52u));
    c.f[14] = ld32((c.r[17].w[0] + 56u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275BBCu); c.f[12] = ld32((c.r[17].w[0] + 48u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00275BBCu) [[unlikely]] return; }
L_00275BBC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275BC8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00275BC8u) [[unlikely]] return; }
L_00275BC8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275BD4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00275BD4u) [[unlikely]] return; }
L_00275BD4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275BE0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00275BE0u) [[unlikely]] return; }
L_00275BE0:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275BECu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00275BECu) [[unlikely]] return; }
L_00275BEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275BF4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x00275BF4u) [[unlikely]] return; }
L_00275BF4:
    c.f[13] = ld32((c.r[17].w[0] + 68u));
    c.f[14] = ld32((c.r[17].w[0] + 72u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275C04u); c.f[12] = ld32((c.r[17].w[0] + 64u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00275C04u) [[unlikely]] return; }
L_00275C04:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275C10u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00275C10u) [[unlikely]] return; }
L_00275C10:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275C1Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00275C1Cu) [[unlikely]] return; }
L_00275C1C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275C28u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00275C28u) [[unlikely]] return; }
L_00275C28:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275C34u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00275C34u) [[unlikely]] return; }
L_00275C34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275C3Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x00275C3Cu) [[unlikely]] return; }
L_00275C3C:
    c.f[13] = ld32((c.r[17].w[0] + 84u));
    c.f[14] = ld32((c.r[17].w[0] + 88u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275C4Cu); c.f[12] = ld32((c.r[17].w[0] + 80u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00275C4Cu) [[unlikely]] return; }
L_00275C4C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275C58u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00275C58u) [[unlikely]] return; }
L_00275C58:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275C64u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00275C64u) [[unlikely]] return; }
L_00275C64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275C6Cu); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00275C6Cu) [[unlikely]] return; }
L_00275C6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275C74u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00275C74u) [[unlikely]] return; }
L_00275C74:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00275C90:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275CBCu); mmi::paddub(c.r[16], c.r[7], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00275CBCu) [[unlikely]] return; }
L_00275CBC:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275CE4u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00275CE4u) [[unlikely]] return; }
L_00275CE4:
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275CF4u); c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00275CF4u) [[unlikely]] return; }
L_00275CF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275CFCu); c.r[4].d[0] = ld16((c.r[19].w[0] + 88u));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00275CFCu) [[unlikely]] return; }
L_00275CFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275D04u); c.r[4].d[0] = ld16((c.r[19].w[0] + 80u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00275D04u) [[unlikely]] return; }
L_00275D04:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275D10u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00275D10u) [[unlikely]] return; }
L_00275D10:
    set32(c.r[16], c.r[16].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275D1Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x00275D1Cu) [[unlikely]] return; }
L_00275D1C:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275D2Cu); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00275D2Cu) [[unlikely]] return; }
L_00275D2C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275D38u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00275D38u) [[unlikely]] return; }
L_00275D38:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275D44u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00275D44u) [[unlikely]] return; }
L_00275D44:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275D50u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00275D50u) [[unlikely]] return; }
L_00275D50:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275D5Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00275D5Cu) [[unlikely]] return; }
L_00275D5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275D64u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x00275D64u) [[unlikely]] return; }
L_00275D64:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275D74u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00275D74u) [[unlikely]] return; }
L_00275D74:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275D80u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00275D80u) [[unlikely]] return; }
L_00275D80:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275D8Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00275D8Cu) [[unlikely]] return; }
L_00275D8C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275D98u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00275D98u) [[unlikely]] return; }
L_00275D98:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275DA4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00275DA4u) [[unlikely]] return; }
L_00275DA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275DACu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x00275DACu) [[unlikely]] return; }
L_00275DAC:
    c.f[13] = ld32((c.r[17].w[0] + 52u));
    c.f[14] = ld32((c.r[17].w[0] + 56u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275DBCu); c.f[12] = ld32((c.r[17].w[0] + 48u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00275DBCu) [[unlikely]] return; }
L_00275DBC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275DC8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00275DC8u) [[unlikely]] return; }
L_00275DC8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275DD4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00275DD4u) [[unlikely]] return; }
L_00275DD4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275DE0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00275DE0u) [[unlikely]] return; }
L_00275DE0:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275DECu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00275DECu) [[unlikely]] return; }
L_00275DEC:
    c.f[13] = ld32((c.r[17].w[0] + 68u));
    c.f[14] = ld32((c.r[17].w[0] + 72u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275DFCu); c.f[12] = ld32((c.r[17].w[0] + 64u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00275DFCu) [[unlikely]] return; }
L_00275DFC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275E08u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00275E08u) [[unlikely]] return; }
L_00275E08:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275E14u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00275E14u) [[unlikely]] return; }
L_00275E14:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275E20u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00275E20u) [[unlikely]] return; }
L_00275E20:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275E2Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00275E2Cu) [[unlikely]] return; }
L_00275E2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275E34u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x00275E34u) [[unlikely]] return; }
L_00275E34:
    c.f[13] = ld32((c.r[17].w[0] + 84u));
    c.f[14] = ld32((c.r[17].w[0] + 88u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275E44u); c.f[12] = ld32((c.r[17].w[0] + 80u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00275E44u) [[unlikely]] return; }
L_00275E44:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275E50u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00275E50u) [[unlikely]] return; }
L_00275E50:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275E5Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00275E5Cu) [[unlikely]] return; }
L_00275E5C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275E68u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00275E68u) [[unlikely]] return; }
L_00275E68:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275E74u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00275E74u) [[unlikely]] return; }
L_00275E74:
    c.f[13] = ld32((c.r[17].w[0] + 100u));
    c.f[14] = ld32((c.r[17].w[0] + 104u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275E84u); c.f[12] = ld32((c.r[17].w[0] + 96u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00275E84u) [[unlikely]] return; }
L_00275E84:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275E90u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00275E90u) [[unlikely]] return; }
L_00275E90:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275E9Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00275E9Cu) [[unlikely]] return; }
L_00275E9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275EA4u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00275EA4u) [[unlikely]] return; }
L_00275EA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275EACu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00275EACu) [[unlikely]] return; }
L_00275EAC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00275ED0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275EFCu); mmi::paddub(c.r[16], c.r[7], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00275EFCu) [[unlikely]] return; }
L_00275EFC:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275F24u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00275F24u) [[unlikely]] return; }
L_00275F24:
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275F34u); c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00275F34u) [[unlikely]] return; }
L_00275F34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275F3Cu); c.r[4].d[0] = ld16((c.r[19].w[0] + 88u));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00275F3Cu) [[unlikely]] return; }
L_00275F3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275F44u); c.r[4].d[0] = ld16((c.r[19].w[0] + 80u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00275F44u) [[unlikely]] return; }
L_00275F44:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275F50u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00275F50u) [[unlikely]] return; }
L_00275F50:
    set32(c.r[16], c.r[16].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275F5Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x00275F5Cu) [[unlikely]] return; }
L_00275F5C:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275F6Cu); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00275F6Cu) [[unlikely]] return; }
L_00275F6C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275F78u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00275F78u) [[unlikely]] return; }
L_00275F78:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275F84u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00275F84u) [[unlikely]] return; }
L_00275F84:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275F90u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00275F90u) [[unlikely]] return; }
L_00275F90:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275F9Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00275F9Cu) [[unlikely]] return; }
L_00275F9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275FA4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x00275FA4u) [[unlikely]] return; }
L_00275FA4:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275FB4u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00275FB4u) [[unlikely]] return; }
L_00275FB4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275FC0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00275FC0u) [[unlikely]] return; }
L_00275FC0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275FCCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00275FCCu) [[unlikely]] return; }
L_00275FCC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275FD8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00275FD8u) [[unlikely]] return; }
L_00275FD8:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275FE4u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00275FE4u) [[unlikely]] return; }
L_00275FE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275FECu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x00275FECu) [[unlikely]] return; }
L_00275FEC:
    c.f[13] = ld32((c.r[17].w[0] + 52u));
    c.f[14] = ld32((c.r[17].w[0] + 56u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275FFCu); c.f[12] = ld32((c.r[17].w[0] + 48u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00275FFCu) [[unlikely]] return; }
L_00275FFC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276008u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00276008u) [[unlikely]] return; }
L_00276008:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276014u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00276014u) [[unlikely]] return; }
L_00276014:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276020u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00276020u) [[unlikely]] return; }
L_00276020:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027602Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0027602Cu) [[unlikely]] return; }
L_0027602C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276034u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 322u, depth + 1u); else { c.pc = 0x0013BB00u; return; } if (c.pc != 0x00276034u) [[unlikely]] return; }
L_00276034:
    c.f[13] = ld32((c.r[17].w[0] + 68u));
    c.f[14] = ld32((c.r[17].w[0] + 72u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276044u); c.f[12] = ld32((c.r[17].w[0] + 64u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00276044u) [[unlikely]] return; }
L_00276044:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276050u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00276050u) [[unlikely]] return; }
L_00276050:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027605Cu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0027605Cu) [[unlikely]] return; }
L_0027605C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276068u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00276068u) [[unlikely]] return; }
L_00276068:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276074u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00276074u) [[unlikely]] return; }
L_00276074:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027607Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x0027607Cu) [[unlikely]] return; }
L_0027607C:
    c.f[13] = ld32((c.r[17].w[0] + 84u));
    c.f[14] = ld32((c.r[17].w[0] + 88u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027608Cu); c.f[12] = ld32((c.r[17].w[0] + 80u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0027608Cu) [[unlikely]] return; }
L_0027608C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276098u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00276098u) [[unlikely]] return; }
L_00276098:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002760A4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002760A4u) [[unlikely]] return; }
L_002760A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002760ACu); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002760ACu) [[unlikely]] return; }
L_002760AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002760B4u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002760B4u) [[unlikely]] return; }
L_002760B4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002760D0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002760FCu); mmi::paddub(c.r[16], c.r[7], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002760FCu) [[unlikely]] return; }
L_002760FC:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276124u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00276124u) [[unlikely]] return; }
L_00276124:
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276134u); c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00276134u) [[unlikely]] return; }
L_00276134:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027613Cu); c.r[4].d[0] = ld16((c.r[19].w[0] + 88u));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x0027613Cu) [[unlikely]] return; }
L_0027613C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276144u); c.r[4].d[0] = ld16((c.r[19].w[0] + 80u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00276144u) [[unlikely]] return; }
L_00276144:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276150u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00276150u) [[unlikely]] return; }
L_00276150:
    set32(c.r[16], c.r[16].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027615Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x0027615Cu) [[unlikely]] return; }
L_0027615C:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027616Cu); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0027616Cu) [[unlikely]] return; }
L_0027616C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276178u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00276178u) [[unlikely]] return; }
L_00276178:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276184u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00276184u) [[unlikely]] return; }
L_00276184:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276190u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00276190u) [[unlikely]] return; }
L_00276190:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027619Cu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0027619Cu) [[unlikely]] return; }
L_0027619C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002761A4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x002761A4u) [[unlikely]] return; }
L_002761A4:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002761B4u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002761B4u) [[unlikely]] return; }
L_002761B4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002761C0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002761C0u) [[unlikely]] return; }
L_002761C0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002761CCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002761CCu) [[unlikely]] return; }
L_002761CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002761D4u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002761D4u) [[unlikely]] return; }
L_002761D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002761DCu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002761DCu) [[unlikely]] return; }
L_002761DC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00276200:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027622Cu); mmi::paddub(c.r[16], c.r[7], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x0027622Cu) [[unlikely]] return; }
L_0027622C:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276254u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00276254u) [[unlikely]] return; }
L_00276254:
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276264u); c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00276264u) [[unlikely]] return; }
L_00276264:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027626Cu); c.r[4].d[0] = ld16((c.r[19].w[0] + 88u));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x0027626Cu) [[unlikely]] return; }
L_0027626C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276274u); c.r[4].d[0] = ld16((c.r[19].w[0] + 80u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00276274u) [[unlikely]] return; }
L_00276274:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276280u); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00276280u) [[unlikely]] return; }
L_00276280:
    set32(c.r[16], c.r[16].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027628Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x0027628Cu) [[unlikely]] return; }
L_0027628C:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027629Cu); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0027629Cu) [[unlikely]] return; }
L_0027629C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002762A8u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002762A8u) [[unlikely]] return; }
L_002762A8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002762B4u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002762B4u) [[unlikely]] return; }
L_002762B4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002762C0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002762C0u) [[unlikely]] return; }
L_002762C0:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002762CCu); set32(c.r[18], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002762CCu) [[unlikely]] return; }
L_002762CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002762D4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x002762D4u) [[unlikely]] return; }
L_002762D4:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002762E4u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002762E4u) [[unlikely]] return; }
L_002762E4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002762F0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002762F0u) [[unlikely]] return; }
L_002762F0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002762FCu); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002762FCu) [[unlikely]] return; }
L_002762FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276304u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00276304u) [[unlikely]] return; }
L_00276304:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027630Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0027630Cu) [[unlikely]] return; }
L_0027630C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00276330:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00276354; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027634Cu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x0027634Cu) [[unlikely]] return; }
L_0027634C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[16].w[0] + 32u));  if (t) { goto L_00276360; } }
L_00276354:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027635Cu); mmi::paddub(c.r[4], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0027635Cu) [[unlikely]] return; }
L_0027635C:
    c.f[12] = ld32((c.r[16].w[0] + 32u));
    c.budget -= 1;
L_00276360:
    c.f[14] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027636Cu); c.f[13] = ld32((c.r[16].w[0] + 36u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0027636Cu) [[unlikely]] return; }
L_0027636C:
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027637Cu); c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x0027637Cu) [[unlikely]] return; }
L_0027637C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276384u); c.r[4].d[0] = ld16((c.r[16].w[0] + 84u));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00276384u) [[unlikely]] return; }
L_00276384:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027638Cu); c.r[4].d[0] = ld16((c.r[16].w[0] + 80u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x0027638Cu) [[unlikely]] return; }
L_0027638C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276394u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00276394u) [[unlikely]] return; }
L_00276394:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002763B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002763D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002763CCu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002763CCu) [[unlikely]] return; }
L_002763CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[16].w[0] + 32u));  if (t) { goto L_002763E0; } }
L_002763D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002763DCu); mmi::paddub(c.r[4], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002763DCu) [[unlikely]] return; }
L_002763DC:
    c.f[12] = ld32((c.r[16].w[0] + 32u));
    c.budget -= 1;
L_002763E0:
    c.f[14] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002763ECu); c.f[13] = ld32((c.r[16].w[0] + 36u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002763ECu) [[unlikely]] return; }
L_002763EC:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002763FCu); c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002763FCu) [[unlikely]] return; }
L_002763FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276404u); c.r[4].d[0] = ld16((c.r[16].w[0] + 88u));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00276404u) [[unlikely]] return; }
L_00276404:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027640Cu); c.r[4].d[0] = ld16((c.r[16].w[0] + 80u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x0027640Cu) [[unlikely]] return; }
L_0027640C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276414u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00276414u) [[unlikely]] return; }
L_00276414:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00276430:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276444u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00276444u) [[unlikely]] return; }
L_00276444:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027644Cu); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 14u, depth + 1u); else { c.pc = 0x0013C650u; return; } if (c.pc != 0x0027644Cu) [[unlikely]] return; }
L_0027644C:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027645Cu); c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0027645Cu) [[unlikely]] return; }
L_0027645C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276464u); c.r[4].d[0] = ld16((c.r[16].w[0] + 88u));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00276464u) [[unlikely]] return; }
L_00276464:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027646Cu); c.r[4].d[0] = ld16((c.r[16].w[0] + 80u));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x0027646Cu) [[unlikely]] return; }
L_0027646C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276474u); set32(c.r[4], c.r[16].w[0] + 8320u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00276474u) [[unlikely]] return; }
L_00276474:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00276490:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 8404u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_002764E0; } }
L_002764AC:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 16u);  goto L_002764DC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 14448u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002764D8u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002764D8u) [[unlikely]] return; }
L_002764D8:
    set32(c.r[16], c.r[16].w[0] + 16u);
    c.budget -= 1;
L_002764DC:
    c.budget -= 1;
L_002764E0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002764ACu | kUnwind; return; } goto L_002764AC; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00276510:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027653Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0027653Cu) [[unlikely]] return; }
L_0027653C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276550u); set32(c.r[4], c.r[2].w[0] + 4032u);  if (depth < kMaxDepth) unit_000F(c, 14u, depth + 1u); else { c.pc = 0x0013C650u; return; } if (c.pc != 0x00276550u) [[unlikely]] return; }
L_00276550:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276564u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00276564u) [[unlikely]] return; }
L_00276564:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00276580:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002765ACu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002765ACu) [[unlikely]] return; }
L_002765AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002765B4u); set32(c.r[4], 0u + 16384u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002765B4u) [[unlikely]] return; }
L_002765B4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002765C8u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002765C8u) [[unlikely]] return; }
L_002765C8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002765E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1260u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (t) { goto L_00276640; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276618u); set32(c.r[4], c.r[17].w[0] + 2112u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00276618u) [[unlikely]] return; }
L_00276618:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276624u); set32(c.r[4], c.r[2].w[0] + 14432u);  if (depth < kMaxDepth) unit_000F(c, 14u, depth + 1u); else { c.pc = 0x0013C650u; return; } if (c.pc != 0x00276624u) [[unlikely]] return; }
L_00276624:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276638u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00276638u) [[unlikely]] return; }
L_00276638:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_00276694; } }
L_00276640:
    set32(c.r[2], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276654u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00276654u) [[unlikely]] return; }
L_00276654:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276668u); set32(c.r[4], c.r[2].w[0] + 4032u);  if (depth < kMaxDepth) unit_000F(c, 14u, depth + 1u); else { c.pc = 0x0013C650u; return; } if (c.pc != 0x00276668u) [[unlikely]] return; }
L_00276668:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276674u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 260u, depth + 1u); else { c.pc = 0x0026F440u; return; } if (c.pc != 0x00276674u) [[unlikely]] return; }
L_00276674:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027667Cu); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x0027667Cu) [[unlikely]] return; }
L_0027667C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276690u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00276690u) [[unlikely]] return; }
L_00276690:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00276694:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002766B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002766CCu); mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 221u, depth + 1u); else { c.pc = 0x002D70A0u; return; } if (c.pc != 0x002766CCu) [[unlikely]] return; }
L_002766CC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002766E0u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002766E0u) [[unlikely]] return; }
L_002766E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002766E8u); set32(c.r[4], c.r[17].w[0] + 928u);  if (depth < kMaxDepth) unit_000F(c, 14u, depth + 1u); else { c.pc = 0x0013C650u; return; } if (c.pc != 0x002766E8u) [[unlikely]] return; }
L_002766E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002766F0u); set32(c.r[4], ld32((c.r[17].w[0] + 924u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002766F0u) [[unlikely]] return; }
L_002766F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002766F8u); set32(c.r[4], ld32((c.r[17].w[0] + 920u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002766F8u) [[unlikely]] return; }
L_002766F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276700u); set32(c.r[4], ld32((c.r[17].w[0] + 916u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00276700u) [[unlikely]] return; }
L_00276700:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276714u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00276714u) [[unlikely]] return; }
L_00276714:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00276730:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027675Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0027675Cu) [[unlikely]] return; }
L_0027675C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276770u); set32(c.r[4], c.r[2].w[0] + 4032u);  if (depth < kMaxDepth) unit_000F(c, 14u, depth + 1u); else { c.pc = 0x0013C650u; return; } if (c.pc != 0x00276770u) [[unlikely]] return; }
L_00276770:
    set32(c.r[2], ld32((c.r[16].w[0] + 1292u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027677Cu); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x0027677Cu) [[unlikely]] return; }
L_0027677C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276790u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00276790u) [[unlikely]] return; }
L_00276790:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002767B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002767E0u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002767E0u) [[unlikely]] return; }
L_002767E0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002767F4u); set32(c.r[4], c.r[2].w[0] + 4032u);  if (depth < kMaxDepth) unit_000F(c, 14u, depth + 1u); else { c.pc = 0x0013C650u; return; } if (c.pc != 0x002767F4u) [[unlikely]] return; }
L_002767F4:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276800u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 260u, depth + 1u); else { c.pc = 0x0026F440u; return; } if (c.pc != 0x00276800u) [[unlikely]] return; }
L_00276800:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276808u); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00276808u) [[unlikely]] return; }
L_00276808:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276814u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 275u, depth + 1u); else { c.pc = 0x0026F650u; return; } if (c.pc != 0x00276814u) [[unlikely]] return; }
L_00276814:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027681Cu); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x0027681Cu) [[unlikely]] return; }
L_0027681C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276830u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00276830u) [[unlikely]] return; }
L_00276830:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00276850:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276880u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00276880u) [[unlikely]] return; }
L_00276880:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276894u); set32(c.r[4], c.r[2].w[0] + 4032u);  if (depth < kMaxDepth) unit_000F(c, 14u, depth + 1u); else { c.pc = 0x0013C650u; return; } if (c.pc != 0x00276894u) [[unlikely]] return; }
L_00276894:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002768A8u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x002768A8u) [[unlikely]] return; }
L_002768A8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002768BCu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002768BCu) [[unlikely]] return; }
L_002768BC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002768D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276900u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00276900u) [[unlikely]] return; }
L_00276900:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276914u); set32(c.r[4], c.r[2].w[0] + 4032u);  if (depth < kMaxDepth) unit_000F(c, 14u, depth + 1u); else { c.pc = 0x0013C650u; return; } if (c.pc != 0x00276914u) [[unlikely]] return; }
L_00276914:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276920u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 275u, depth + 1u); else { c.pc = 0x0026F650u; return; } if (c.pc != 0x00276920u) [[unlikely]] return; }
L_00276920:
    c.r[1].d[0] = 0ull + static_cast<std::uint64_t>(-32767ll);
    c.r[1].d[0] = c.r[2].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (t) { goto L_00276938; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    mmi::paddub(c.r[4], c.r[2], c.r[0]);
    c.budget -= 2;
L_00276938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276940u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00276940u) [[unlikely]] return; }
L_00276940:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276954u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00276954u) [[unlikely]] return; }
L_00276954:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00276970:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    set32(c.r[17], c.r[20].w[0] + 320u);
    set32(c.r[3], c.r[6].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[3].w[0] + 1984u);
    set32(c.r[18], c.r[6].w[0] - 19u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002769C4u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002769C4u) [[unlikely]] return; }
L_002769C4:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002769D8u); set32(c.r[4], c.r[2].w[0] + 4032u);  if (depth < kMaxDepth) unit_000F(c, 14u, depth + 1u); else { c.pc = 0x0013C650u; return; } if (c.pc != 0x002769D8u) [[unlikely]] return; }
L_002769D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002769E0u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x002769E0u) [[unlikely]] return; }
L_002769E0:
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002769ECu); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0045(c, 216u, depth + 1u); else { c.pc = 0x00217E10u; return; } if (c.pc != 0x002769ECu) [[unlikely]] return; }
L_002769EC:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0; c.r[2].d[0] = c.r[18].d[0] & 1ull;  if (t) { goto L_00276A00; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] << 2);  if (t) { goto L_00276A04; } }
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.budget -= 1;
L_00276A00:
    set32(c.r[3], c.r[2].w[0] << 2);
    c.budget -= 1;
L_00276A04:
    set32(c.r[2], c.r[28].w[0] - 29024u);
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { mmi::paddub(c.r[4], c.r[16], c.r[0]);  goto L_00276AA0; }
    set32(c.r[19], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[19].w[0] + c.r[17].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    set32(c.r[18], c.r[2].w[0] + 4u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F730000u);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.f[1] = c.r[2].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276A50u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00276A50u) [[unlikely]] return; }
L_00276A50:
    set32(c.r[3], c.r[19].w[0] + c.r[17].w[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.f[1] = ld32((c.r[3].w[0] + 52u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F730000u);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[17], c.r[3].w[0] + 52u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276A78u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00276A78u) [[unlikely]] return; }
L_00276A78:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276A84u); set32(c.r[4], ld32((c.r[18].w[0])));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00276A84u) [[unlikely]] return; }
L_00276A84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276A8Cu); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00276A8Cu) [[unlikely]] return; }
L_00276A8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276A94u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00276A94u) [[unlikely]] return; }
L_00276A94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);  if (t) { goto L_00276BEC; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00276AA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276AA8u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00276AA8u) [[unlikely]] return; }
L_00276AA8:
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276AB8u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0045(c, 218u, depth + 1u); else { c.pc = 0x00217E60u; return; } if (c.pc != 0x00276AB8u) [[unlikely]] return; }
L_00276AB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276AC0u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00276AC0u) [[unlikely]] return; }
L_00276AC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276AC8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x00276AC8u) [[unlikely]] return; }
L_00276AC8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276AD8u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 210u, depth + 1u); else { c.pc = 0x00102500u; return; } if (c.pc != 0x00276AD8u) [[unlikely]] return; }
L_00276AD8:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276AE4u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x00276AE4u) [[unlikely]] return; }
L_00276AE4:
    set32(c.r[19], c.r[29].w[0] + 136u);
    set32(c.r[20], c.r[29].w[0] + 132u);
    c.f[13] = ld32((c.r[20].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276AF8u); c.f[12] = ld32((c.r[19].w[0]));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00276AF8u) [[unlikely]] return; }
L_00276AF8:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.f[0] = c.r[2].w[0];
    set32(c.r[21], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[21].w[0] + c.r[17].w[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41100000u);
    set32(c.r[18], c.r[2].w[0] + 4u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[3] = c.r[2].w[0];
    fpu_div(c, 12u, c.f[0], c.f[3]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276B4Cu);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00276B4Cu) [[unlikely]] return; }
L_00276B4C:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.f[1] = ld32((c.r[20].w[0]));
    c.f[0] = ld32((c.r[19].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276B64u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00276B64u) [[unlikely]] return; }
L_00276B64:
    c.f[13] = c.f[0];
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276B74u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00276B74u) [[unlikely]] return; }
L_00276B74:
    set32(c.r[3], c.r[21].w[0] + c.r[17].w[0]);
    c.f[2] = ld32((c.r[3].w[0] + 52u));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    set32(c.r[17], c.r[3].w[0] + 52u);
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276BC4u);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00276BC4u) [[unlikely]] return; }
L_00276BC4:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276BD0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00276BD0u) [[unlikely]] return; }
L_00276BD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276BD8u); set32(c.r[4], ld32((c.r[18].w[0])));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00276BD8u) [[unlikely]] return; }
L_00276BD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276BE0u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00276BE0u) [[unlikely]] return; }
L_00276BE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276BE8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00276BE8u) [[unlikely]] return; }
L_00276BE8:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00276BEC:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00276C10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    set32(c.r[16], c.r[18].w[0] + 320u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276C48u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00276C48u) [[unlikely]] return; }
L_00276C48:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276C5Cu); set32(c.r[4], c.r[2].w[0] + 4032u);  if (depth < kMaxDepth) unit_000F(c, 14u, depth + 1u); else { c.pc = 0x0013C650u; return; } if (c.pc != 0x00276C5Cu) [[unlikely]] return; }
L_00276C5C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[19], c.r[2].w[0] - 19u);
    c.r[1].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[19].w[0] << 2);  if (t) { goto L_00276CA0; } }
    set32(c.r[2], c.r[19].w[0] << 14);
    set32(c.r[2], c.r[2].w[0] - 8192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276C80u); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00276C80u) [[unlikely]] return; }
L_00276C80:
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276C94u); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00276C94u) [[unlikely]] return; }
L_00276C94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0])));  if (t) { goto L_00276CB0; } }
    set32(c.r[2], c.r[19].w[0] << 2);
    c.budget -= 1;
L_00276CA0:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276CACu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00276CACu) [[unlikely]] return; }
L_00276CAC:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00276CB0:
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276CC0u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00276CC0u) [[unlikely]] return; }
L_00276CC0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00276CE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 338u));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[3], 0u + 3u);
    set32(c.r[16], c.r[18].w[0] + 320u);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; mmi::paddub(c.r[17], c.r[5], c.r[0]);  if (t) { goto L_00276DD4; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_00276DA4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00276D60; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276D34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 4u)));  if (t) { goto L_00276E08; } }
L_00276D34:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 23u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276D4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00276E04; } }
L_00276D4C:
    st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), 0u);  if (t) { goto L_00276E04; } }
L_00276D60:
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E450000u);
    c.r[2].d[0] = c.r[2].d[0] | 63788ull;
    c.f[0] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F140000u);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] | 31457ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0]), c.f[1]);  if (t) { goto L_00276E04; } }
    set32(c.r[2], 0u + 10u);
    st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00276E04; } }
L_00276DA4:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 23u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00276E04; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00276E04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00276E04; } }
L_00276DD4:
    c.f[2] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E450000u);
    c.r[2].d[0] = c.r[2].d[0] | 63788ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0]), c.f[1]);  if (t) { goto L_00276E04; } }
    st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00276E04:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_00276E08:
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276E18u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00276E18u) [[unlikely]] return; }
L_00276E18:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[29].w[0] + 64u);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276E34u); set32(c.r[5], c.r[2].w[0] + 4032u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x00276E34u) [[unlikely]] return; }
L_00276E34:
    c.f[13] = ld32((c.r[29].w[0] + 68u));
    c.f[14] = ld32((c.r[29].w[0] + 72u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276E44u); c.f[12] = ld32((c.r[29].w[0] + 64u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00276E44u) [[unlikely]] return; }
L_00276E44:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276E58u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00276E58u) [[unlikely]] return; }
L_00276E58:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00276E70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276E9Cu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00276E9Cu) [[unlikely]] return; }
L_00276E9C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276EB0u); set32(c.r[4], c.r[2].w[0] + 4032u);  if (depth < kMaxDepth) unit_000F(c, 14u, depth + 1u); else { c.pc = 0x0013C650u; return; } if (c.pc != 0x00276EB0u) [[unlikely]] return; }
L_00276EB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276EB8u); set32(c.r[4], ld32((c.r[16].w[0] + 320u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00276EB8u) [[unlikely]] return; }
L_00276EB8:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276ECCu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00276ECCu) [[unlikely]] return; }
L_00276ECC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00276EE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[17], c.r[16].w[0] + 320u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[18], c.r[0], c.r[0]);  if (t) { goto L_00276F20; } }
    c.r[5].d[0] = c.r[18].d[0] << 56;
    c.budget -= 1;
L_00276F08:
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276F14u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0049(c, 69u, depth + 1u); else { c.pc = 0x00224EF0u; return; } if (c.pc != 0x00276F14u) [[unlikely]] return; }
L_00276F14:
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[2].d[0] << 56;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    c.budget -= 3;
L_00276F20:
    c.r[2].d[0] = c.r[18].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[1].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.r[5].d[0] = c.r[18].d[0] << 56;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00276F08u | kUnwind; return; } goto L_00276F08; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276F44u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 142u, depth + 1u); else { c.pc = 0x002E5AC0u; return; } if (c.pc != 0x00276F44u) [[unlikely]] return; }
L_00276F44:
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276F54u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 142u, depth + 1u); else { c.pc = 0x002E5AC0u; return; } if (c.pc != 0x00276F54u) [[unlikely]] return; }
L_00276F54:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8387u)));
    c.r[3].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00276F7C; } }
    set32(c.r[2], c.r[4].w[0] - 2u);
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276F78u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007D(c, 269u, depth + 1u); else { c.pc = 0x002F6CB0u; return; } if (c.pc != 0x00276F78u) [[unlikely]] return; }
L_00276F78:
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 1;
L_00276F7C:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00277004; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00277000; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[5], c.r[3].w[0] + 25952u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 28022u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00276FD8; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 2068u)));
    set32(c.r[3], 0u + 104u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0027700C; } }
    set32(c.r[3], 0u + 72u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00277000; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_00277010; } }
L_00276FD8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2070u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00277000; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 2068u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0027700C; } }
    set32(c.r[3], 0u + 92u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0027700C; } }
L_00277000:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00277004:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027700Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0078(c, 202u, depth + 1u); else { c.pc = 0x002E2780u; return; } if (c.pc != 0x0027700Cu) [[unlikely]] return; }
L_0027700C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00277010:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00277030:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 344u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 340u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 343u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[8], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[8].d[0]; set32(c.r[5], c.r[17].w[0] + 320u);  if (t) { goto L_002771B0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8391u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002771B0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[16], c.r[3].w[0] + 25952u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 28022u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002770D0; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2068u)));
    set32(c.r[3], 0u + 104u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002770B0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 63236ull;
    st32((c.r[17].w[0] + 1260u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 769u)));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st8((c.r[17].w[0] + 769u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_002770B0:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2068u)));
    set32(c.r[3], 0u + 72u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002771B0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65284ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1260u), c.r[3].w[0]);  if (t) { goto L_002771B0; } }
L_002770D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2070u)));
    set32(c.r[7], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[7].d[0];  if (t) { goto L_002771B0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2068u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[7].d[0];  if (t) { goto L_00277188; } }
    st8((c.r[5].w[0] + 24u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[17].w[0] + 532u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[17].w[0] + 1068u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x45100000u);
    c.r[2].d[0] = c.r[2].d[0] | 24576ull;
    st32((c.r[17].w[0] + 1228u), c.r[2].w[0]);
    set32(c.r[2], 0u + 13u);
    st8((c.r[17].w[0] + 580u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    set32(c.r[3], 0u - 29184u);
    set32(c.r[2], 0u + 4u);
    set32(c.r[5], 0u + 48u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st16((c.r[17].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    st16((c.r[17].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 8052u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[17].w[0] + 8053u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 1580u), static_cast<std::uint16_t>(0u));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277148u); st16((c.r[17].w[0] + 1576u), static_cast<std::uint16_t>(c.r[8].w[0]));  if (depth < kMaxDepth) unit_0076(c, 55u, depth + 1u); else { c.pc = 0x002D8DE0u; return; } if (c.pc != 0x00277148u) [[unlikely]] return; }
L_00277148:
    set32(c.r[5], 0u + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277154u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 54u, depth + 1u); else { c.pc = 0x002D8D10u; return; } if (c.pc != 0x00277154u) [[unlikely]] return; }
L_00277154:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 58u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027716Cu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0027716Cu) [[unlikely]] return; }
L_0027716C:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 58u);
    set32(c.r[7], 0u + 120u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277184u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00277184u) [[unlikely]] return; }
L_00277184:
    st8((c.r[17].w[0] + 743u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00277188:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2068u)));
    set32(c.r[3], 0u + 92u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002771B0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 63236ull;
    st32((c.r[17].w[0] + 1260u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 769u)));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st8((c.r[17].w[0] + 769u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_002771B0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002771D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 14640u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00274000u < 16384u) { entry = entries_005D[(t - 0x00274000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002771F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 14688u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00274000u < 16384u) { entry = entries_005D[(t - 0x00274000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00277210:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    st8((c.r[4].w[0] + 575u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00277260; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[7], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277258u); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00277258u) [[unlikely]] return; }
L_00277258:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002772E8; } }
L_00277260:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277270u);  if (depth < kMaxDepth) unit_0076(c, 178u, depth + 1u); else { c.pc = 0x002DAF40u; return; } if (c.pc != 0x00277270u) [[unlikely]] return; }
L_00277270:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_002772C4; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F980000u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = c.r[2].d[0] | 40265ull;
    set32(c.r[5], 0u + 2u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002772A0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002772A0u) [[unlikely]] return; }
L_002772A0:
    set32(c.r[5], 0u + 2u);
    c.f[12] = 0u;
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002772B8u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002772B8u) [[unlikely]] return; }
L_002772B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002772E4; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_002772C4:
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 4u);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002772E4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002772E4u) [[unlikely]] return; }
L_002772E4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002772E8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00277300:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277314u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00277314u) [[unlikely]] return; }
L_00277314:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027731Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x0027731Cu) [[unlikely]] return; }
L_0027731C:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277328u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x00277328u) [[unlikely]] return; }
L_00277328:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277334u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x00277334u) [[unlikely]] return; }
L_00277334:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);  if (t) { goto L_00277360; } }
    set32(c.r[5], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027734Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x0027734Cu) [[unlikely]] return; }
L_0027734C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277354u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x00277354u) [[unlikely]] return; }
L_00277354:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002773E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.budget -= 1;
L_00277360:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027736Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x0027736Cu) [[unlikely]] return; }
L_0027736C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);  if (t) { goto L_002773A0; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 754u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 1260u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 1260u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.budget -= 11;
L_002773A0:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002773ACu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002773ACu) [[unlikely]] return; }
L_002773AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002773E4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002773E4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002773E4u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002773E4u) [[unlikely]] return; }
L_002773E4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002773E8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00277400:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277414u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x00277414u) [[unlikely]] return; }
L_00277414:
    c.f[1] = ld32((c.r[16].w[0] + 7796u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0027743C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027743Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0027743Cu) [[unlikely]] return; }
L_0027743C:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277458u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x00277458u) [[unlikely]] return; }
L_00277458:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027747C; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002774E8; } }
L_0027747C:
    set32(c.r[3], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002774CC; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F980000u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = c.r[2].d[0] | 40265ull;
    set32(c.r[5], 0u + 2u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002774ACu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002774ACu) [[unlikely]] return; }
L_002774AC:
    set32(c.r[5], 0u + 2u);
    c.f[12] = 0u;
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002774C4u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002774C4u) [[unlikely]] return; }
L_002774C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002774EC; } }
L_002774CC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 1156u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1164u));
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    c.budget -= 7;
L_002774E8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002774EC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00277500:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277514u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x00277514u) [[unlikely]] return; }
L_00277514:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277520u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x00277520u) [[unlikely]] return; }
L_00277520:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277528u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00277528u) [[unlikely]] return; }
L_00277528:
    c.f[1] = ld32((c.r[16].w[0] + 7756u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);  if (t) { goto L_00277568; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277554u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x00277554u) [[unlikely]] return; }
L_00277554:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.budget -= 5;
L_00277568:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277574u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 178u, depth + 1u); else { c.pc = 0x002DAF40u; return; } if (c.pc != 0x00277574u) [[unlikely]] return; }
L_00277574:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0027759C; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002775DC; } }
L_0027759C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F980000u);
    c.r[2].d[0] = c.r[2].d[0] | 40265ull;
    set32(c.r[5], 0u + 2u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002775C4u); st32((c.r[16].w[0] + 104u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002775C4u) [[unlikely]] return; }
L_002775C4:
    set32(c.r[5], 0u + 2u);
    c.f[12] = 0u;
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002775DCu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002775DCu) [[unlikely]] return; }
L_002775DC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002775F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[13] = c.r[2].w[0];
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027761Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 191u, depth + 1u); else { c.pc = 0x002DE200u; return; } if (c.pc != 0x0027761Cu) [[unlikely]] return; }
L_0027761C:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277638u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x00277638u) [[unlikely]] return; }
L_00277638:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277644u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x00277644u) [[unlikely]] return; }
L_00277644:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277650u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x00277650u) [[unlikely]] return; }
L_00277650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277658u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00277658u) [[unlikely]] return; }
L_00277658:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);  if (t) { goto L_00277680; } }
    set32(c.r[5], 0u + 11u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027766Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x0027766Cu) [[unlikely]] return; }
L_0027766C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277674u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x00277674u) [[unlikely]] return; }
L_00277674:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0027771C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.budget -= 1;
L_00277680:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027768Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x0027768Cu) [[unlikely]] return; }
L_0027768C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);  if (t) { goto L_002776A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F980000u);
    c.r[2].d[0] = c.r[2].d[0] | 40265ull;
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.budget -= 4;
L_002776A4:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002776B0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002776B0u) [[unlikely]] return; }
L_002776B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41B80000u);  if (t) { goto L_002776C0; } }
    st32((c.r[16].w[0] + 104u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B80000u);
    c.budget -= 2;
L_002776C0:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002776CCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002776CCu) [[unlikely]] return; }
L_002776CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00277718; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00277714; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027770Cu); st8((c.r[16].w[0] + 575u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0027770Cu) [[unlikely]] return; }
L_0027770C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277718; } }
L_00277714:
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 1;
L_00277718:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0027771C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00277730:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41980000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[13] = c.r[2].w[0];
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027775Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 191u, depth + 1u); else { c.pc = 0x002DE200u; return; } if (c.pc != 0x0027775Cu) [[unlikely]] return; }
L_0027775C:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277778u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x00277778u) [[unlikely]] return; }
L_00277778:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277784u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x00277784u) [[unlikely]] return; }
L_00277784:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277790u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x00277790u) [[unlikely]] return; }
L_00277790:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277798u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00277798u) [[unlikely]] return; }
L_00277798:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41A80000u);  if (t) { goto L_002777C4; } }
    set32(c.r[5], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002777ACu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002777ACu) [[unlikely]] return; }
L_002777AC:
    set32(c.r[5], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002777B8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 60u, depth + 1u); else { c.pc = 0x002D8F40u; return; } if (c.pc != 0x002777B8u) [[unlikely]] return; }
L_002777B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00277884; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A80000u);
    c.budget -= 1;
L_002777C4:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002777D0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002777D0u) [[unlikely]] return; }
L_002777D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42080000u);  if (t) { goto L_002777E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F170000u);
    c.r[2].d[0] = c.r[2].d[0] | 41209ull;
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42080000u);
    c.budget -= 4;
L_002777E8:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002777F4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002777F4u) [[unlikely]] return; }
L_002777F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42180000u);  if (t) { goto L_00277820; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00277818; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DF50000u);
    c.r[2].d[0] = c.r[2].d[0] | 49807ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_0027781C; } }
L_00277818:
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 1;
L_0027781C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42180000u);
    c.budget -= 1;
L_00277820:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027782Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x0027782Cu) [[unlikely]] return; }
L_0027782C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00277880; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0027787C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[5], 0u + 2u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027785Cu); st8((c.r[16].w[0] + 575u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x0027785Cu) [[unlikely]] return; }
L_0027785C:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277874u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00277874u) [[unlikely]] return; }
L_00277874:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277880; } }
L_0027787C:
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 1;
L_00277880:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00277884:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00277890:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002778A4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002778A4u) [[unlikely]] return; }
L_002778A4:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002778B0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002778B0u) [[unlikely]] return; }
L_002778B0:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002778BCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x002778BCu) [[unlikely]] return; }
L_002778BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002778C4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002778C4u) [[unlikely]] return; }
L_002778C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);  if (t) { goto L_002778EC; } }
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002778D8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002778D8u) [[unlikely]] return; }
L_002778D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002778E0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002778E0u) [[unlikely]] return; }
L_002778E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0027792C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.budget -= 1;
L_002778EC:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002778F8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002778F8u) [[unlikely]] return; }
L_002778F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41E80000u);  if (t) { goto L_00277910; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F450000u);
    c.r[2].d[0] = c.r[2].d[0] | 12058ull;
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E80000u);
    c.budget -= 4;
L_00277910:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027791Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x0027791Cu) [[unlikely]] return; }
L_0027791C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00277928; } }
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 1;
L_00277928:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0027792C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00277940:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 14720u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00274000u < 16384u) { entry = entries_005D[(t - 0x00274000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00277960:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 575u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027797Cu); set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x0027797Cu) [[unlikely]] return; }
L_0027797C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277984u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x00277984u) [[unlikely]] return; }
L_00277984:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00277994; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00277994:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002779E8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[7], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002779C8u); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002779C8u) [[unlikely]] return; }
L_002779C8:
    c.f[12] = 0u;
    set32(c.r[6], 0u + 6u);
    set32(c.r[7], 0u + 32u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002779E0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002779E0u) [[unlikely]] return; }
L_002779E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00277A5C; } }
L_002779E8:
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00277A34; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], 0u + 2u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[1] = c.f[1] ^ fp::kSign;
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277A28u); st32((c.r[16].w[0] + 52u), 0u);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x00277A28u) [[unlikely]] return; }
L_00277A28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00277A40; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00277A34:
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    c.budget -= 3;
L_00277A40:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 10u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277A58u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00277A58u) [[unlikely]] return; }
L_00277A58:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00277A5C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00277A70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277A88u); set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x00277A88u) [[unlikely]] return; }
L_00277A88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277A90u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x00277A90u) [[unlikely]] return; }
L_00277A90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00277AA4; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
L_00277AA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277AACu);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x00277AACu) [[unlikely]] return; }
L_00277AAC:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277AB8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x00277AB8u) [[unlikely]] return; }
L_00277AB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277AC0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00277AC0u) [[unlikely]] return; }
L_00277AC0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);  if (t) { goto L_00277AE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277AD4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 72u, depth + 1u); else { c.pc = 0x002D9110u; return; } if (c.pc != 0x00277AD4u) [[unlikely]] return; }
L_00277AD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277ADCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 69u, depth + 1u); else { c.pc = 0x002D9080u; return; } if (c.pc != 0x00277ADCu) [[unlikely]] return; }
L_00277ADC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00277B7C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.budget -= 1;
L_00277AE8:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277AF4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x00277AF4u) [[unlikely]] return; }
L_00277AF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);  if (t) { goto L_00277B28; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 754u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 1260u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 1260u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.budget -= 11;
L_00277B28:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277B34u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x00277B34u) [[unlikely]] return; }
L_00277B34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00277B78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277B44u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x00277B44u) [[unlikely]] return; }
L_00277B44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00277B78; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 10u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277B78u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00277B78u) [[unlikely]] return; }
L_00277B78:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00277B7C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00277B90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277BA8u); set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x00277BA8u) [[unlikely]] return; }
L_00277BA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277BB0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x00277BB0u) [[unlikely]] return; }
L_00277BB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00277BC4; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
L_00277BC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277BCCu);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x00277BCCu) [[unlikely]] return; }
L_00277BCC:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277BE8u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x00277BE8u) [[unlikely]] return; }
L_00277BE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00277C0C; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00277C4C; } }
L_00277C0C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 1164u));
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_00277C48; } }
    c.f[12] = ld32((c.r[16].w[0] + 1156u));
    c.f[13] = ld32((c.r[16].w[0] + 1160u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277C3Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 107u, depth + 1u); else { c.pc = 0x002DD2A0u; return; } if (c.pc != 0x00277C3Cu) [[unlikely]] return; }
L_00277C3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00277C50; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_00277C48:
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00277C4C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00277C50:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00277C60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277C74u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x00277C74u) [[unlikely]] return; }
L_00277C74:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277C80u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x00277C80u) [[unlikely]] return; }
L_00277C80:
    c.f[12] = ld32((c.r[16].w[0] + 1156u));
    c.f[13] = ld32((c.r[16].w[0] + 1160u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277C90u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 107u, depth + 1u); else { c.pc = 0x002DD2A0u; return; } if (c.pc != 0x00277C90u) [[unlikely]] return; }
L_00277C90:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277CA0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 121u, depth + 1u); else { c.pc = 0x002D5980u; return; } if (c.pc != 0x00277CA0u) [[unlikely]] return; }
L_00277CA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277CA8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x00277CA8u) [[unlikely]] return; }
L_00277CA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00277CB8; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00277CB8:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277CD8u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 178u, depth + 1u); else { c.pc = 0x002DAF40u; return; } if (c.pc != 0x00277CD8u) [[unlikely]] return; }
L_00277CD8:
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00277D04; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);  if (t) { goto L_00277D10; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00277D04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277D0Cu);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00277D0Cu) [[unlikely]] return; }
L_00277D0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.budget -= 1;
L_00277D10:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277D1Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x00277D1Cu) [[unlikely]] return; }
L_00277D1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);  if (t) { goto L_00277D44; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277D34u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 178u, depth + 1u); else { c.pc = 0x002DAF40u; return; } if (c.pc != 0x00277D34u) [[unlikely]] return; }
L_00277D34:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00277D88; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.budget -= 1;
L_00277D44:
    c.f[2] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], 0u + 2u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    fpu_div(c, 1u, c.f[1], c.f[2]);
    st32((c.r[16].w[0] + 104u), c.f[1]);
    c.f[1] = c.f[1] ^ fp::kSign;
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277D88u); st32((c.r[16].w[0] + 52u), 0u);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x00277D88u) [[unlikely]] return; }
L_00277D88:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00277DA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277DB8u); set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x00277DB8u) [[unlikely]] return; }
L_00277DB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277DC0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x00277DC0u) [[unlikely]] return; }
L_00277DC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00277DD0; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00277DD0:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00277DF8; } }
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
L_00277DF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277E00u);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00277E00u) [[unlikely]] return; }
L_00277E00:
    c.f[1] = ld32((c.r[16].w[0] + 7796u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00277E2C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 274u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00277E3C; } }
L_00277E2C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7813u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00277E4C; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00277E3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277E44u);  if (depth < kMaxDepth) unit_0076(c, 72u, depth + 1u); else { c.pc = 0x002D9110u; return; } if (c.pc != 0x00277E44u) [[unlikely]] return; }
L_00277E44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277E4Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 69u, depth + 1u); else { c.pc = 0x002D9080u; return; } if (c.pc != 0x00277E4Cu) [[unlikely]] return; }
L_00277E4C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00277E60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 14752u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00274000u < 16384u) { entry = entries_005D[(t - 0x00274000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00277E80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    st8((c.r[4].w[0] + 575u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277EA4u); set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x00277EA4u) [[unlikely]] return; }
L_00277EA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277EACu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x00277EACu) [[unlikely]] return; }
L_00277EAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00277EBC; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00277EBC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 2u);  if (t) { goto L_00277F14; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[7], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277EF0u); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x00277EF0u) [[unlikely]] return; }
L_00277EF0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    c.f[12] = 0u;
    set32(c.r[6], 0u + 6u);
    set32(c.r[7], 0u + 18u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277F08u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x00277F08u) [[unlikely]] return; }
L_00277F08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00277F38; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_00277F14:
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[6], 0u + 5u);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277F34u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00277F34u) [[unlikely]] return; }
L_00277F34:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00277F38:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00277F50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277F64u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x00277F64u) [[unlikely]] return; }
L_00277F64:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277F70u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x00277F70u) [[unlikely]] return; }
L_00277F70:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277F7Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x00277F7Cu) [[unlikely]] return; }
L_00277F7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277F84u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x00277F84u) [[unlikely]] return; }
L_00277F84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00277F98; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
L_00277F98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277FA0u);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00277FA0u) [[unlikely]] return; }
L_00277FA0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);  if (t) { goto L_00277FD0; } }
    set32(c.r[5], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277FB8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 79u, depth + 1u); else { c.pc = 0x002D9240u; return; } if (c.pc != 0x00277FB8u) [[unlikely]] return; }
L_00277FB8:
    set32(c.r[5], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277FC4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 76u, depth + 1u); else { c.pc = 0x002D91D0u; return; } if (c.pc != 0x00277FC4u) [[unlikely]] return; }
L_00277FC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { [[clang::musttail]] return unit_005E(c, 5u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.budget -= 1;
L_00277FD0:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277FDCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x00277FDCu) [[unlikely]] return; }
L_00277FDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);  if (t) { [[clang::musttail]] return unit_005E(c, 2u, depth); } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 754u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 1260u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    c.budget -= 7;
    [[clang::musttail]] return unit_005E(c, 1u, depth);
}

}
