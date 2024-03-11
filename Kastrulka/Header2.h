#pragma once
#include "Header.h"
class matrix2 : public matrix 
{
private: 
int element = 1;
public:
matrix2();
matrix2(int r, int c, int** array); matrix2(matrix& m);

 void PrintM();
};
