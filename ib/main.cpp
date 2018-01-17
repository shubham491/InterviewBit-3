#include <vector>
#include <string>
using namespace std;

vector<vector<int>> SpialOrderMatrix(int A);
vector<vector<int>> PascalTriangle(int A);
vector<int> KthPascalTriangle(int A);
vector<vector<int>> AntiDiagonal(vector<vector<int> > &A);
int NobleInteger(vector<int> &A);
vector<int> WaveArray(vector<int> &A);
int Triplets(vector<string> &A);
string LargestNumber(const vector<int> &A);
bool HotelBooking(vector<int> &arrive, vector<int> &depart, int K);
int MaxDistance(const vector<int> &A);
vector<int> MaxUnsortedSubarray(vector<int> &A);
int FindDuplicate(vector<int> &A);
vector<int> PrimeSum(int A);
void RotateMatrix(vector<vector<int> > &A);
void NextPermutation(vector<int> &A);
vector<int> FindPermutation(const string A, int B);
int RepeatNumber(const vector<int> &A);
int MaxConsecutiveGap(const vector<int> &A);

struct Interval {
	int start;
	int end;
	Interval() : start(0), end(0) {}
	Interval(int s, int e) : start(s), end(e) {}
};
vector<Interval> MergeIntervals(vector<Interval> &intervals, Interval newInterval);
vector<Interval> MergeOverlappingIntervals(vector<Interval> &A);
void SetMatrixZeros(vector<vector<int> > &A);
int FirstMissingInteger(vector<int> &A);
int HammingDistance(const vector<int> &A);
vector<string> FizzBuzz(int A);
int IsPower(int A);
int TitleToNumber(string A);
string ConvertToTitle(int A);
int IsPalindrome(int A);
int ReverseInt(int A);
int GCD(int A, int B);
int TrailingZeroes(int A);
int FindPermutationRank(string A);
int CoprimeDivisor(int A, int B);
int FindPermutationRank2(string A);
int UniquePaths(int A, int B);
void RearrangeArray(vector<int> &A);

enum TEST_CASE
{
	eSPIRAL_ORDER_MATRIX,
	ePASCAL_TRIANGLE,
	eROW_PASCAL_TRIANGLE,
	eANTI_DIAGONALS,
	eNOBLE_INTEGER,
	eTRIPLETS_WITH_SUM,
	eLARGEST_NUMBER,
	eWAVE_ARRAY,
	eHOTEL_BOOKINGS,
	eMAX_DISTANCE,
	eMAXIMUM_UNSORTED_ARRAY,
	eFIND_DUPLICATE,
	eROTATE_MATRIX,
	ePRIME_SUM,
	eMERGE_INTERVALS,
	eNEXT_PERMUTATION,
	eFIND_PERMUTATION,
	eMERGE_OVERLAPPING_INTERVALS,
	eMAX_CONSECUTIVE_GAP,
	eSET_MATRIX_ZEROS,
	eFIRST_MISSING_INTEGER,
	e3TIMES_REPEAT_NUMBER,
	eHAMMING_DISTANCE,
	eFIZZ_BUZZ,
	eIS_POWER,
	eEXCEL_COLUMN_NUM,
	eCONVERT_TO_TITLE,
	ePALINDROME_INT,
	eREVERSE_INT,
	eGCD,
	eTRAILING_ZEROS,
	eFIND_PERMUTATION_RANK,
	eCOPRIME_DIVISOR,
	eFIND_PERMUTATION_RANK2,
	eGRID_UNIQUE_PATHS,
	eREARRANGE_ARRAY,
};

int main()
{
	TEST_CASE test = eREARRANGE_ARRAY;

	switch (test)
	{
	case eSPIRAL_ORDER_MATRIX:
	{

	}
	case ePASCAL_TRIANGLE:
	{

	}
	case eROW_PASCAL_TRIANGLE:
	{

	}
	case eANTI_DIAGONALS:
	{

	}
	case eNOBLE_INTEGER:
	{

	}
	case eTRIPLETS_WITH_SUM:
	{

	}
	case eLARGEST_NUMBER:
	{

	}
	case eWAVE_ARRAY:
	{

	}
	case eHOTEL_BOOKINGS:
	{

	}
	case eMAX_DISTANCE:
	{

	}
	case eMAXIMUM_UNSORTED_ARRAY:
	{

	}
	case eFIND_DUPLICATE:
	{
		vector<int> A = { 442, 249, 406, 112, 202, 98, 228, 99, 38, 10, 402, 505, 104, 340, 265, 317, 190, 403, 148, 276, 145, 199, 456, 489, 237, 226, 470, 342, 405, 339, 142, 234, 542, 96, 71, 297, 261, 262, 130, 119, 428, 82, 432, 219, 430, 439, 188, 397, 227, 478, 400, 111, 451, 388, 34, 303, 158, 68, 74, 502, 36, 80, 243, 508, 73, 324, 103, 325, 46, 211, 133, 144, 480, 404, 231, 416, 401, 370, 3, 48, 407, 195, 212, 300, 47, 409, 44, 21, 248, 105, 56, 319, 117, 149, 334, 455, 544, 429, 464, 143, 75, 197, 316, 292, 352, 282, 525, 194, 87, 242, 283, 333, 356, 440, 338, 100, 366, 368, 520, 129, 479, 499, 408, 496, 307, 173, 347, 101, 293, 523, 114, 5, 393, 178, 329, 394, 302, 59, 492, 175, 537, 538, 454, 217, 84, 344, 126, 360, 471, 433, 238, 465, 62, 165, 43, 139, 530, 512, 280, 312, 518, 385, 8, 29, 93, 467, 320, 64, 120, 452, 391, 358, 522, 445, 274, 240, 172, 449, 205, 18, 328, 453, 278, 536, 69, 331, 166, 92, 50, 462, 501, 27, 106, 72, 30, 11, 289, 318, 343, 245, 497, 411, 218, 363, 151, 85, 37, 337, 285, 511, 137, 426, 155, 254, 376, 136, 235, 90, 418, 60, 487, 181, 232, 486, 287, 515, 362, 86, 395, 255, 159, 527, 336, 378, 375, 115, 15, 179, 33, 67, 177, 247, 51, 424, 284, 357, 157, 162, 253, 135, 216, 122, 41, 118, 359, 209, 355, 373, 437, 23, 214, 97, 191, 447, 83, 267, 256, 20, 52, 236, 39, 259, 204, 353, 510, 55, 203, 305, 290, 206, 413, 488, 14, 380, 174, 540, 299, 463, 485, 371, 309, 186, 481, 192, 200, 156, 288, 534, 475, 382, 184, 152, 220, 189, 521, 443, 110, 160, 369, 171, 183, 468, 65, 108, 427, 423, 516, 146, 384, 138, 222, 35, 365, 163, 458, 132, 498, 372, 66, 345, 326, 396, 40, 141, 22, 491, 19, 286, 415, 434, 121, 1, 270, 313, 78, 446, 379, 392, 31, 9, 180, 420, 45, 76, 26, 460, 49, 89, 279, 54, 57, 208, 519, 241, 275, 386, 441, 533, 296, 507, 422, 109, 196, 361, 2, 4, 474, 182, 53, 310, 414, 291, 364, 61, 535, 398, 134, 24, 509, 335, 484, 263, 476, 154, 304, 25, 306, 444, 32, 266, 210, 539, 473, 322, 7, 466, 529, 436, 350, 494, 16, 161, 116, 459, 168, 301, 215, 213, 91, 438, 102, 224, 277, 13, 17, 28, 258, 70, 531, 541, 532, 315, 187, 381, 170, 272, 147, 223, 252, 421, 81, 271, 201, 164, 176, 58, 257, 321, 95, 377, 472, 113, 94, 457, 153, 469, 225, 140, 399, 281, 308, 230, 193, 390, 514, 483, 412, 327, 12, 543, 367, 493, 504, 419, 524, 198, 77, 295, 417, 389, 374, 435, 42, 330, 528, 311, 490, 387, 341, 517, 127, 298, 169, 185, 125, 233, 410, 477, 128, 239, 107, 448, 354, 221, 425, 264, 294, 323, 88, 526, 124, 351, 349, 506, 150, 348, 246, 482, 260, 251, 167, 503, 250, 268, 273, 207, 540, 332, 63, 431, 131, 383, 6, 495, 244, 346, 269, 79, 450, 513, 123, 461, 314, 229, 500 };
		int ret = FindDuplicate(A);
	}
	case eROTATE_MATRIX:
	{

	}
	case ePRIME_SUM:
	{

	}
	case eMERGE_INTERVALS:
	{
		vector<Interval> A = {
			Interval(6037774, 6198243), Interval(6726550, 7004541), Interval(8842554, 10866536), Interval(11027721, 11341296), Interval(11972532, 14746848),
			Interval(16374805, 16706396), Interval(17557262, 20518214), Interval(22139780, 22379559), Interval(27212352, 28404611), Interval(28921768, 29621583),
			Interval(29823256, 32060921), Interval(33950165, 36418956), Interval(37225039, 37785557), Interval(40087908, 41184444), Interval(41922814, 45297414),
			Interval(48142402, 48244133), Interval(48622983, 50443163), Interval(50898369, 55612831), Interval(57030757, 58120901), Interval(59772759, 59943999),
			Interval(61141939, 64859907), Interval(65277782, 65296274), Interval(67497842, 68386607), Interval(70414085, 73339545), Interval(73896106, 75605861),
			Interval(79672668, 84539434), Interval(84821550, 86558001), Interval(91116470, 92198054), Interval(96147808, 98979097), Interval(36210193, 61984219) };
		Interval B = { Interval(36210193, 61984219) };

		vector<Interval> ret = MergeIntervals(A, B);
		break;
	}
	case eNEXT_PERMUTATION:
	{
		vector<int> A = { 769, 533 };
		//vector<int> A = { 1,2,3, 4,5 };
		NextPermutation(A);
		break;
	}
	case eFIND_PERMUTATION:
	{
		string A = "IDDID";
		int B = 6;
		vector<int> ret = FindPermutation(A, B);
		break;
	}
	case eMAX_CONSECUTIVE_GAP:
	{
		vector<int> A = { 5, 3, 1, 8, 9, 2, 4 };
		int ret = MaxConsecutiveGap(A);
	}
	case eMERGE_OVERLAPPING_INTERVALS:
	{
		//vector<Interval> A = { Interval(4, 100), Interval(48, 94), Interval(16, 21), Interval(58, 71), Interval(36, 53), Interval(49, 68), Interval(18, 42), Interval(37, 90), Interval(68, 75), Interval(6, 57), Interval(25, 78), Interval(58, 79), Interval(18, 29), Interval(69, 94), Interval(5, 31), Interval(10, 87), Interval(21, 35), Interval(1, 32), Interval(7, 24), Interval(17, 85), Interval(30, 95), Interval(5, 63), Interval(1, 17), Interval(67, 100), Interval(53, 55), Interval(30, 63), Interval(7, 76), Interval(33, 51), Interval(62, 68), Interval(78, 83), Interval(12, 24), Interval(31, 73), Interval(64, 74), Interval(33, 40), Interval(51, 63), Interval(17, 31), Interval(14, 29), Interval(9, 15), Interval(39, 70), Interval(13, 67), Interval(27, 100), Interval(10, 71), Interval(18, 47), Interval(48, 79), Interval(70, 73), Interval(44, 59), Interval(68, 78), Interval(24, 67), Interval(32, 70), Interval(29, 94), Interval(45, 90), Interval(10, 76), Interval(12, 28), Interval(31, 78), Interval(9, 44), Interval(29, 83), Interval(21, 35), Interval(46, 93), Interval(66, 83), Interval(21, 72), Interval(29, 37), Interval(6, 11), Interval(56, 87), Interval(10, 26), Interval(11, 12), Interval(15, 88), Interval(3, 13), Interval(56, 70), Interval(40, 73), Interval(25, 62), Interval(63, 73), Interval(47, 74), Interval(8, 36) };
		vector<Interval> A = { Interval(92, 98), Interval(10, 86), Interval(61, 91), Interval(8, 71), Interval(53, 65), Interval(19, 79), Interval(20, 50) };
		vector<Interval> ret = MergeOverlappingIntervals(A);
		break;
	}
	case eSET_MATRIX_ZEROS:
	{
		vector<vector<int>> A = { {1, 0, 1}, {1, 1, 1}, {1, 1, 1} };
		SetMatrixZeros(A);
		break;
	}
	case eFIRST_MISSING_INTEGER:
	{
		//vector<int> A = { 417, 929, 845, 462, 675, 175, 73, 867, 14, 201, 777, 407, 80, 882, 785, 563, 209, 261, 776, 362, 730, 74, 649, 465, 353, 801, 503, 154, 998, 286, 520, 692, 68, 805, 835, 210, 819, 341, 564, 215, 984, 643, 381, 793, 726, 213, 866, 706, 97, 538, 308, 797, 883, 59, 328, 743, 694, 607, 729, 821, 32, 672, 130, 13, 76, 724, 384, 444, 884, 192, 917, 75, 551, 96, 418, 840, 235, 433, 290, 954, 549, 950, 21, 711, 781, 132, 296, 44, 439, 164, 401, 505, 923, 136, 317, 548, 787, 224, 23, 185, 6, 350, 822, 457, 489, 133, 31, 830, 386, 671, 999, 255, 222, 944, 952, 637, 523, 494, 916, 95, 734, 908, 90, 541, 470, 941, 876, 264, 880, 761, 535, 738, 128, 772, 39, 553, 656, 603, 868, 292, 117, 966, 259, 619, 836, 818, 493, 592, 380, 500, 599, 839, 268, 67, 591, 126, 773, 635, 800, 842, 536, 668, 896, 260, 664, 506, 280, 435, 618, 398, 533, 647, 373, 713, 745, 478, 129, 844, 640, 886, 972, 62, 636, 79, 600, 263, 52, 719, 665, 376, 351, 623, 276, 66, 316, 813, 663, 831, 160, 237, 567, 928, 543, 508, 638, 487, 234, 997, 307, 480, 620, 890, 216, 147, 271, 989, 872, 994, 488, 291, 331, 8, 769, 481, 924, 166, 89, 824, -4, 590, 416, 17, 814, 728, 18, 673, 662, 410, 727, 667, 631, 660, 625, 683, 33, 436, 930, 91, 141, 948, 138, 113, 253, 56, 432, 744, 302, 211, 262, 968, 945, 396, 240, 594, 684, 958, 343, 879, 155, 395, 288, 550, 482, 557, 826, 598, 795, 914, 892, 690, 964, 981, 150, 179, 515, 205, 265, 823, 799, 190, 236, 24, 498, 229, 420, 753, 936, 191, 366, 935, 434, 311, 920, 167, 817, 220, 219, 741, -2, 674, 330, 909, 162, 443, 412, 974, 294, 864, 971, 760, 225, 681, 689, 608, 931, 427, 687, 466, 894, 303, 390, 242, 339, 252, 20, 218, 499, 232, 184, 490, 4, 957, 597, 477, 354, 677, 691, 25, 580, 897, 542, 186, 359, 346, 409, 655, 979, 853, 411, 344, 358, 559, 765, 383, 484, 181, 82, 514, 582, 593, 77, 228, 921, 348, 453, 274, 449, 106, 657, 783, 782, 811, 333, 305, 784, 581, 746, 858, 249, 479, 652, 270, 429, 614, 903, 102, 378, 575, 119, 196, 12, 990, 356, 277, 169, 70, 518, 282, 676, 137, 622, 616, 357, 913, 161, 3, 589, 327 };
		//vector<int> A = { 649, 212, 373, 955, 612, 297, 131, 319, 238, 287, 996, 116, 846, 615, 261, 387, 910, 813, 2, 861, 857, 241, 690, 326, 325, 330, 279, 967, 594, 568, 865, 520, 556, 754, 353, 468, 919, 347, 57, 265, 102, 869, 579, 267, 134, 529, 523, 744, 299, 501, 805, 439, 759, 845, 193, 306, 573, 88, 712, 850, 806, 882, 229, 474, 85, 170, 682, 988, 144, 665, 821, 391, 453, 760, 377, 524, 81, 618, 419, 380, 781, 388, 576, 457, 221, 341, 49, 720, 691, 948, 931, 987, 974, 809, 930, 403, 951, 513, 946, 687, 668, 303, 750, 393, 167, 742, 0, 62, 502, 398, 84, 870, 945, 483, 873, 969, 396, 203, 446, 316, 254, 548, 235, 659, 109, 455, 217, 977, 916, 740, 290, 284, 189, 887, 497, 541, 336, 71, 196, 257, 64, 569, 372, 927, 784, 448, 32, 947, 310, 133, 999, 875, 119, 676, 454, 440, 986, 164, 286, 174, 790, 825, 169, 683, 262, 611, 828, 19, 107, 228, 37, 233, 313, 348, 195, 964, 903, 808, 509, 473, 701, 994, 796, 854, 768, 764, 855, 897, -4, 656, 418, 96, 981, 477, 432, 117, 351, 504, 763, 920, 465, 14, 245, 285, 296, 142, 51, 33, 735, 839, 463, 646, 404, 822, 635, 814, 613, 970, 713, 271, 545, 522, 475, 637, 1000, 301, 252, 469, 962, 44, 466, 244, 60, 312, 40, 693, 716, 926, 200, 35, 929, 898, 625, 726, 308, 835, 583, 503, 892, 48, 159, 585, 386, 610, 332, 104, 595, 685, 864, 933, 176, 630, 818, 434, 604, 848, 562, 275, 3, 390, 460, 417, 581, 978, 367, 472, 761, 799, 991, 906, 672, 258, 77, 696, 626, 358, 45, 913, 9, 826, 725, 444, 237, 346, 423, 944, 714, 194, 350, 762, 154, 704, 39, 114, 710, 141, 700, 628, 397, 90, 923, 83, 93, 499, 510, 804, 191, 78, 515, 671, 540, 4, 355, 137, 550, 493, 494, 642, 183, 528, 531, 293, 695, 216, 836, 555, 660, 539, 960, 533, 936, 603, 608, 975, 425, 597, 607, 997, 802, 884, 106, 746, 677, 918, 74, 435, 410, 17, 211, 171, 153, 590, 538, 853, 345, 819, 146, 657, 755, 250, 54, 214, 283, 232, -2, 717, 24, 537, 359, 860, 269, 794, 162, 578, 885, 575, 727, 20, 430, -1, 370, 482, 281, 11, 644, 68, 158, 411, 124, 99, 443, 706, 175, 907, 184, -5, 69, 584, 546, 900, 264, 662, 881, 486, 777, 337, 126, 6, 480, 255, 741, 557, 236, 72, 63, 226, 519, 640, 416, 225, 389, 552, 5, 511, 25, 322, 108, 50, 549, 127, 766, 517, 925, 165, 699, 451, 95, 112, 842, 774, 567, 13, 61, 408, 829, 816, 559, 437, 26, 733, 294, 747, 219, 834, 168, 58, 218, 399, 886, 976, 431, 666, 773, 858, 758, 679, 327, 420, 820, 728, 932, 179, 669, 940, 512, 270, 488, 596, 352, 780, 675, 151, 110, 824, 684, 10, 871, 253, 719, 535, 730, 786, 879, 197, 767, 678, 135, 288, 458, 407, 394, 309, 789, 161, 530, 801, 753, 73, 79, 832, 427, 268, 724, 965, 130, 643, 849, 349, 847, 92, 138, 652, 204, 734, 320, 743, 589, 661, 272, 851, 34, 582, 983, 782, 756, 318, 891, 89, 132, 467, 697, 899, 516, 553, 498, 770, 155, 772, 331, 248, 152, 428, 505, 650, 689, 143, 866, 663, 220, 934, 922, 952, 91, 972, 563, 462, 52, 100, 307, 118, 937, 342, 295, 765, 239, 178, 201, 776, 634, 587, 41, 324, 872, 908, 379, 422, 292, 23, 495, 600, 291, 328, 737, 629, 968, 210, 476, 778, 953, 30, 334, 867, 205, 192, 75, 87, 366, 98, 616, 935, 436, 413, 489, 305, 395, 525, 534, 282, 592, 333, 421, 889, 895, 815, 145, 963, 7, 206, 705, 376, 775, 707, 698, 381, 811, 335, 993, 315, 230, 215, 902, 748, 982, 21, 586, 939, 752, 621, 123, 234, 954, 361, 609, 461, 732, 544, 863, 101, 129, 383, 844, 456, 360, 339, 149, 354, 817, 15, 66, 46, 810, 779, 369, 959, 481, 622, 247, 795, 909, 491, 883, 785, 471, 382, 424, 841, 260, 876, 280, 574, 837, 36, 673, 654, 160, 8, 803, 973, 147, 783, 617, 18, 599, 121, 447, 139, 304, 543, 561, 793, 688, 632, 365, 506, 738, 31, 172, 942, 317, 338, 856, 478, 276, 314, 577, 484, 605, 565, 957, 751, 888, 591, 113, 877, 29, 28, 558, 492, 570, 125, 664, 949, 1, 224, 496, 971, 769, 329, 580, 894, 638, 961, 256, 378, 429, 56, 479, 251, 989, 464, 490, 514, 190, 385, 601, 812, 928, 788, 442, 718, 202, 213, 277, 289, 917, 449, 371, 915, 166 };
		//vector<int> A = { 699, 2, 690, 936, 319, 784, 562, 35, 151, 698, 126, 730, 587, 157, 201, 761, 956, 359, 198, 986, 915, 7, 703, 324, 814, 382, 294, 204, 120, 731, 615, 330, 486, 52, 223, 376, 649, 458, 564, 971, 72, 605, 177, 20, 461, 790, 872, 363, 916, 435, 991, 184, 410, 320, 16, 480, 768, 801, 117, 338, 650, 786, 17, 369, 979, 304, 445, 688, 862, 229, 311, 351, 985, 697, 135, 299, 310, 3, 643, 221, 831, 196, 887, 679, 484, 209, 824, 292, 588, 721, 140, 675, 827, 913, 271, 170, 812, 552, 334, 860, 981, 550, 308, 584, 442, 328, 251, 456, 976, 31, 507, 954, 982, 742, 45, 727, 794, 309, 527, 623, 56, 843, 436, 681, 143, 130, 689, 870, 362, 580, 560, 474, 385, 525, 881, 51, 890, 917, 820, 826, 139, 443, 978, 144, 512, 205, 682, 188, 344, 429, 497, 181, 749, 864, 664, 145, 621, 629, 886, 572, 89, 725, 945, 29, 553, 977, 783, 590, 236, 728, 125, 90, 492, 261, 543, 259, 662, 622, 285, 392, 561, 670, 200, 504, 246, 513, 910, 583, 460, 179, 207, 709, 127, 926, 816, 426, 520, 174, 464, 883, 780, 5, 268, 606, 1, 109, 704, 391, 661, 924, 516, 241, 477, 952, 405, 522, 247, 335, 356, 839, 423, 779, 4, 43, 720, 238, 965, 951, 914, 10, 496, 775, 651, 788, 373, 491, 746, 799, 518, 93, 86, 774, 652, 955, 494, 252, 781, 946, 412, 202, 741, 719, 612, 673, 896, 1000, 289, 554, 69, 424, 980, 506, 593, 889, 25, 959, 28, 736, 8, 969, 865, 657, 567, 434, 9, 167, 357, 929, 645, 250, 565, 94, 928, 473, 509, 823, 313, 762, -1, 208, 903, 922, 655, 948, 326, 485, 150, 73, 505, 225, 122, 129, 648, 838, 811, 972, 735, 78, 428, 740, 782, 632, 316, 440, 737, 297, 873, 281, 479, 654, 0, 633, 212, 152, 154, 470, 866, 79, 722, 958, 732, 900, 832, 278, 58, 842, 745, 540, 169, 347, 592, 438, 882, 462, 53, 34, 519, 489, 85, 757, 919, 701, 15, 211, 667, 637, 74, 573, 240, 559, -2, 472, 203, 112, 162, 776, -4, 155, 837, 99, 98, 64, 101, 983, 366, 853, 970, 482, 40, 921, 374, 758, 413, 339, 705, 771, 360, 734, 282, 219, 766, 535, 133, 532, 254 };
		vector<int> A = { 1,1,1 };
		int ret = FirstMissingInteger(A);
		int a = 0;
		break;
	}
	case e3TIMES_REPEAT_NUMBER:
	{
		//vector<int> A = { 1, 2, 3, 1, 1 };
		vector<int> A = { 1000545, 1000038, 1000647, 1000038, 1000562, 1000038, 1000586, 1000487, 1000951, 1000226, 1000038, 1000145, 1000038, 1000761, 1000196, 1000038, 1000821, 1000829, 1000038, 1000570, 1000846, 1000038, 1000178, 1001000, 1000038, 1000568, 1000278, 1000734, 1000048, 1000038, 1000002, 1000271, 1000388, 1000315, 1000816, 1000038, 1000038, 1000846, 1000305, 1000853, 1000383, 1000116, 1000797, 1000279, 1000038, 1000038, 1000049, 1000108, 1000789, 1000240, 1000201, 1000506, 1000429, 1000857, 1000649, 1000898, 1000211, 1000000, 1000178, 1000038, 1000569, 1000695, 1000451, 1000159, 1000038, 1000038, 1000038, 1000129, 1000038, 1000038, 1000904, 1000038, 1000038, 1000902, 1000525, 1000038, 1000166, 1000038, 1000765, 1000038, 1000561, 1000417, 1000523, 1000668, 1000296, 1000038, 1000038, 1000038, 1000461, 1000654, 1000924, 1000985, 1000038, 1000426, 1000038, 1000038, 1000038, 1000904, 1000775, 1000148, 1000961, 1000038, 1000038, 1000038, 1000833, 1000332, 1000038, 1000038, 1000512, 1000322, 1000592, 1000524, 1000788, 1000057, 1000497, 1000625, 1000599, 1000484, 1000038, 1000747, 1000457, 1000111, 1000038, 1000038, 1000493, 1000287, 1000007, 1000695, 1000344, 1000098, 1000038, 1000191, 1000038, 1000576, 1000481, 1000488, 1000199, 1000038, 1000663, 1000176, 1000038, 1000521, 1000721, 1000728, 1000247, 1000038, 1000038, 1000460, 1000644, 1000038, 1000497, 1000966, 1000431, 1000038, 1000975, 1000063, 1000580, 1000669, 1000038, 1000038, 1000492, 1000038, 1000038, 1000529, 1000553, 1000333, 1000038, 1000341, 1000569, 1000862, 1000017, 1000532, 1000571, 1000508, 1000402, 1000285, 1000611, 1000210, 1000646, 1000110, 1000038, 1000553, 1000273, 1000729, 1000038, 1000038, 1000720, 1000400, 1000038, 1000983, 1000038, 1000766, 1000038, 1000180, 1000494, 1000765, 1000136, 1000038, 1000029, 1000246, 1000991, 1000038, 1000759, 1000038, 1000038, 1000045, 1000038, 1000648, 1000038, 1000038, 1000694, 1000914, 1000990, 1000038, 1000038, 1000758, 1000435, 1000038, 1000554, 1000038, 1000452, 1000156, 1000038, 1000322, 1000828, 1000868, 1000038, 1000973, 1000991, 1000464, 1000294, 1000633, 1000038, 1000582, 1000229, 1000285, 1000038, 1000038, 1000086, 1000038, 1000989, 1000038, 1000038, 1000157, 1000307, 1000369, 1000300, 1000038, 1000038, 1000038, 1000244, 1000038, 1000038, 1000222, 1000458, 1000038, 1000523, 1000434, 1000316, 1000038, 1000256, 1000038, 1000695, 1000038, 1000469 };
		int ret = RepeatNumber(A);
		break;
	}
	case eHAMMING_DISTANCE:
	{
		vector<int> A = { 2,4,6 };
		int ret = HammingDistance(A);
		break;
	}
	case eFIZZ_BUZZ:
	{
		vector<string> ret = FizzBuzz(30);
		break;
	}
	case eIS_POWER:
	{
		int ret = IsPower(7988);
		break;
	}
	case eEXCEL_COLUMN_NUM:
	{
		int ret = TitleToNumber("AAA");
		break;
	}
	case eCONVERT_TO_TITLE:
	{
		string ret = ConvertToTitle(943566);
		break;
	}
	case ePALINDROME_INT:
	{
		int ret = IsPalindrome(-2147447412);
		break;
	}
	case eREVERSE_INT:
	{
		int ret = ReverseInt(-1234567891);
		break;
	}
	case eGCD:
	{
		int ret = GCD(10, 20);
		break;
	}
	case eTRAILING_ZEROS:
	{
		int ret = TrailingZeroes(9247);
		break;
	}
	case eFIND_PERMUTATION_RANK:
	{
		int ret = FindPermutationRank("sadasdsasassasas");
		break;
	}
	case eCOPRIME_DIVISOR:
	{
		int ret = CoprimeDivisor(2, 2);
		break;
	}
	case eFIND_PERMUTATION_RANK2:
	{
		int ret = FindPermutationRank2("asasdsdsadasdadsadasdsa");
		break;
	}
	case eGRID_UNIQUE_PATHS:
	{
		int ret = UniquePaths(15, 19);
		break;
	}
	case eREARRANGE_ARRAY:
	{
		vector<int> A = { 2, 1, 3, 0 };
		RearrangeArray(A);
	}
	}
	return 0;
}