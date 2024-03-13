#include "Header2.h"

matrix2::matrix2() : matrix() {}

matrix2::matrix2(int r, int c, int** a) : matrix(r, c, a) {}

matrix2::matrix2(matrix& m) : matrix(m) {}void matrix2::PrintM()
{
	cout << element << " ";
}


UpperMatrix::UpperMatrix() {}
UpperMatrix::UpperMatrix(int r, int c, int** array) : matrix (r,c,array) {}
UpperMatrix::UpperMatrix(matrix& m) : matrix(m) {} 

void UpperMatrix::PrintM()
{
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (j >= i) {
              array[i][j] = 1;
            }
            else {
               
                array[i][j] = 0;
            }
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}


LowerMatrix:: LowerMatrix() {}
LowerMatrix::LowerMatrix(int r, int c, int** array) : matrix(r, c, array) {}
LowerMatrix::LowerMatrix(matrix& m) : matrix(m) {}

void LowerMatrix::PrintM()
{
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (j <= i) {
                array[i][j] = 1;
            }
            else {

                array[i][j] = 0;
            }
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}

