/*************************************************************************************************
Sudoku
Write a program to solve a Sudoku puzzle by filling the empty cells.
Empty cells are indicated by the character '.'
You may assume that there will be only one unique solution.

A sudoku puzzle,
and its solution numbers marked in red.

Example :
For the above given diagrams, the corresponding input to your program will be
[[53..7....], [6..195...], [.98....6.], [8...6...3], [4..8.3..1], [7...2...6], [.6....28.], [...419..5], [....8..79]]
and we would expect your program to modify the above array of array of characters to
[[534678912], [672195348], [198342567], [859761423], [426853791], [713924856], [961537284], [287419635], [345286179]]
*************************************************************************************************/
#include <vector>
#include <algorithm>
using namespace std;

#define OWN

#ifdef OWN
static bool CheckValid(vector<vector<char>> &A, int row, int col, char num)
{
	for (int i = 0; i<(int)A.size(); i++)
	{
		if (A[i][col] == num) return false;
	}

	for (int j = 0; j<(int)A.size(); j++)
	{
		if (A[row][j] == num) return false;
	}

	int row_start = row / 3 * 3;
	int col_start = col / 3 * 3;
	for (int i = row_start; i<row_start + 3; i++)
	{
		for (int j = col_start; j<col_start + 3; j++)
		{
			if (A[i][j] == num) return false;
		}
	}

	return true;
}

bool GetEmptyPos(vector<vector<char>> &A, int &row, int &col)
{
	int i = 0, j = 0;
	for (; i < (int)A.size(); i++)
	{
		for (; j < (int)A.size(); j++)
		{
			if (A[i][j] == '.')
			{
				row = i;
				col = j;
				return true;
			}
		}
	}

	return false;
}

void Sudoku(vector<vector<char>> &A)
{
	for (int y = 1; y <= 9; y++)
	{
		int i = 0, j = 0;
		if (!GetEmptyPos(A, i, j)) return;

		char value = (char)(y + '0');
		if (CheckValid(A, i, j, value))
		{
			A[i][j] = value;
			Sudoku(A);
		}
	}
}

void SolveSudoku(vector<vector<char> > &A) {
	Sudoku(A);
}
#else

#endif