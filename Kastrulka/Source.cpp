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
