#include "Header2.h"

matrix2::matrix2() : matrix() {}

matrix2::matrix2(int r, int c, int** a) : matrix(r, c, a) {}

matrix2::matrix2(matrix& m) : matrix(m) {}void matrix2::PrintM()
{
	cout << element << " ";
}