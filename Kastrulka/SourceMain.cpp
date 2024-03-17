#include "Header.h"
#include "Header2.h"
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
	storeOn(a,4,file);
	a[0].trans();
	
	cout << endl << "matrix addition: " << endl;
	for (int i = 0; i < a[0].getRows(); i++)
	{
		for (int j = 0; j < a[0].getRows(); j++)
		{
			cout << a[0].getValue(i, j) + a[1].getValue(i, j) << " ";
		}
		cout << endl;
	}
	cout << endl << "matrix subtraction: " << endl;;
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
	store_arraydefault_Off(row, col,file2);
}
