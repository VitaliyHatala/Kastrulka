#include "Header.h"
#include "Header2.h"
int determinant(int** matrix, int size);
int main()
{
    ifstream file("Text.txt");
    matrix m;
    matrix* a = new matrix[100];
    int** array2 = new int* [4];
    for (int i = 0; i < 4; i++)
    {
        array2 = new int* [4];
    }
    storeOn(a, 4, file);
    a[0].trans();

    cout << "matrix addition: " << endl;
    for (int i = 0; i < a[0].getRows(); i++)
    {
        for (int j = 0; j < a[0].getRows(); j++)
        {
            cout << a[0].getValue(i, j) + a[1].getValue(i, j) << " ";
        }
        cout << endl;
    }
    cout << endl << "matrix subtraction: " << endl;
    for (int i = 0; i < a[0].getRows(); i++)
    {
        for (int j = 0; j < a[0].getRows(); j++)
        {
            cout << a[2].getValue(i, j) - a[3].getValue(i, j) << " ";
        }  cout << endl;
    }
    matrix2 m2;
    cout << endl;
    int row, col;
    cout << "Enter rows: ";
    cin >> row;
    cout << "Enter cols: ";
    cin >> col; cout << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            m2.PrintM();
        }  cout << endl;
    }
    ofstream file2("Text2.txt");
    cout << "Enter rows: "; cin >> row; cout << "Enter cols: "; cin >> col; cout << endl;
    int value;
    store_arraydefault_Off(row, col, file2);


    int** Diagonal1 = new int* [row];
    for (int i = 0; i < row; ++i)
    {
        Diagonal1[i] = new int[col];
    }

    DiagonalMatrix diagonalMatrix(row, col, Diagonal1);
    cout << "DiagonalMatrix:" << endl;
    diagonalMatrix.PrintD();
    cout << endl;



    int** Diagonal = new int* [row];
    for (int i = 0; i < row; ++i)
    {
        Diagonal[i] = new int[col];
    }

    ifstream infile("Text2.txt");


    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            int num;
            infile >> num;
            if (i == j) {
                Diagonal[i][j] = num;

            }
            else
                Diagonal[i][j] = 0;
        }
    }

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cout << Diagonal[i][j] << " ";
        }
        cout << endl;
    }





    int size;
    cout << "Enter the size of the square matrix: ";
    cin >> size;

    int** matrix = new int* [size];
    for (int i = 0; i < size; ++i)
    {
        matrix[i] = new int[size];
    }

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            cout << "Enter element at position (" << i + 1 << ", " << j + 1 << "): ";
            cin >> matrix[i][j];
        }
    }

    cout << "Enter matrix:" << endl;
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int det = determinant(matrix, size);
    cout << "Determinant of the matrix: " << det << endl;


    return 0;
}

int determinant(int** matrix, int size) {
    int det = 0;
    int sign = 1;

    if (size == 1) {
        det = matrix[0][0];
    }
    else if (size == 2) {
        det = (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
    }

    else {
        for (int i = 0; i < size; ++i) {
            int** cofactor = new int* [size - 1];
            for (int j = 0; j < size - 1; ++j) {
                cofactor[j] = new int[size - 1];
            }
            int sub_i = 0, sub_j = 0;
            for (int j = 1; j < size; ++j) {
                for (int k = 0; k < size; ++k) {
                    if (k == i) {
                        continue;
                    }
                    cofactor[sub_i][sub_j] = matrix[j][k];
                    ++sub_j;
                }
                ++sub_i;
                sub_j = 0;
            }

            det += sign * matrix[0][i] * determinant(cofactor, size - 1);
            sign = -sign;
            for (int j = 0; j < size - 1; ++j) {
                delete[] cofactor[j];
            }
            delete[] cofactor;
        }
    }

    return det;
}
