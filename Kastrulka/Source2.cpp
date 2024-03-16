#include "Header2.h"

matrix2::matrix2() : matrix() {}

matrix2::matrix2(int r, int c, int** a) : matrix(r, c, a) {}

matrix2::matrix2(matrix& m) : matrix(m) {}void matrix2::PrintM()
{
	cout << element << " ";
}

DiagonalMatrix::DiagonalMatrix() : matrix() {}

DiagonalMatrix::DiagonalMatrix(int r, int c, int** a) : matrix(r, c, a) {}

DiagonalMatrix::DiagonalMatrix(matrix& m) : matrix(m) {}
void DiagonalMatrix::PrintD()
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (i == j)
			{
				array[i][j] = 1;
			}
			else
			{
				array[i][j] = 0;
			}
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
}
