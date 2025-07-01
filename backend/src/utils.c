#include "utils.h"
#include <stdlib.h>
#include <math.h>
#include <stdio.h>


//FIX THE ALG
int pickNumber(int **cells, int row, int col)
{

    if (row == 0 && col == 0)
    {
        return rand() % 9 + 1;
    }
    int number = rand() % 9 + 1;
    
    for (int i = 0; i < row; i++)
    {
        while (number == cells[i][col])
        {
            number = rand() % 9 + 1;
        }
    }

    for (int i = 0; i < col; i++)
    {
        while (number == cells[row][i])
        {
            number = rand() % 9 + 1;
        }
    }
    return number;
}