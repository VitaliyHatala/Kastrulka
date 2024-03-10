#include "Header2.h"

void matrix2::fillWithOnes()
{
    for (int i = 0; i < getRows(); ++i)
    {
        for (int j = 0; j < getCols(); ++j)
        {
            arr[i][j] = 1;
        }
    }
}