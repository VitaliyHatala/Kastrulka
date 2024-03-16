#include "Header2.h"

matrix::matrix(){
}
matrix::matrix(int r, int c, int** a)
{ rows = r;
 cols = c; array = a;
}
matrix::matrix(const matrix& m){
 rows = m.rows; cols = m.cols;
 array = m.array;}

void matrix::trans()
{
	int** trans_arr = new int*[cols];
	for (int i = 0; i < cols; i++) {
		trans_arr[i] = new int[rows];
	}
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			trans_arr[j][i] = array[i][j];
		}
	}
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << trans_arr[i][j] << " ";
		}
		cout << endl;
	}
}

ostream& operator<<(ostream& os, const matrix& m)
{ os << m.rows << " " << m.cols << endl;
 for (int i = 0; i < m.rows; i++)  {
  for (int j = 0; j < m.cols; j++)   {
   os << m.array[i][j] << ' ';  }
  cout << endl; }
 return os;}
istream& operator>>(istream& is, matrix& m)
{ is >> m.rows >> m.cols;
 m.array = new int* [m.rows];
 for (int i = 0; i < m.rows; i++) {
  m.array[i] = new int[m.cols]; }
 for (int i = 0; i < m.rows; i++) 
 {  for (int j = 0; j < m.cols; j++) 
  {   is >> m.array[i][j];
  } }
 return is;}

void storeOn(matrix* array, int size,ifstream& fin)
{
	for (int i = 0; i < size; i++) {
		fin >> array[i];
		cout << array[i]<<endl;
	}
}

void store_arraydefault_Off(int size,int size2,ofstream& fout)
{
	int value = 0;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size2; j++) {
			cout << "Enter value: ";
			cin >> value;
			fout << value<<" ";
		}
		fout << endl;
	}
}
