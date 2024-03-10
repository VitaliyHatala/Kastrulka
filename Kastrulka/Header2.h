#pragma once
#include "Header.h"

class matrix2 : public matrix {
public:
   matrix2() : matrix() {}
   matrix2(int r, int c, int** arr) : matrix(r, c, arr) {}
   matrix2(matrix& m);
   void fillWithOnes();
};
