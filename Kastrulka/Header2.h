#pragma once
#include "Header.h"

class matrix2  {
private:
	int row;
	int col;
public:
	matrix2();
	matrix2(int r, int c);
	matrix2(const matrix& m);
	friend ostream& operator<<(ostream& os, const matrix2& m);
	friend istream& operator>>(istream& is, matrix2& m);
	bool operator+(istream& is, matrix2& m);
	bool operator-(istream& is, matrix2& m);
};
void printMatrix(matrix2* m,int size);
