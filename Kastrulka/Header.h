#pragma once 
#include <fstream> 
#include <iostream> 
#include <string> 
 
using namespace std; 
 
class matrix { 
protected: 
 int rows; 
 int cols; 
 int** array; 
public: 
 matrix(); 
 matrix(int r, int c, int** array); 
 matrix(const matrix& m); 
 friend ostream& operator<<(ostream& os, const matrix& m); 
 friend istream& operator>>(istream& is, matrix& m); 
 
 int getRows() { return rows; } 
 int getCols() { return cols; } 
 int getValue(int i, int j) { return array[i][j]; } 
};
