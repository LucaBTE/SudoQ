#include "sudoku.h"
#include <stdlib.h>

/*Initialization to 0 of every cell with malloc
two parameters: ptr to grid struct
*/
void initialize(Grid *grid)
{
    grid->size = SIZE;
    // n.SIZE arrays of int ptr allocated dynamically
    grid->cells = (int **)malloc(SIZE * sizeof(int *));
    for (int i = 0; i < SIZE; i++)
    {
        /*dinamically allocation of a int array and assigned to cells[i]:
            each element of grid->cells[] is a pointer to an int array[SIZE]
        */
        grid->cells[i] = (int *)malloc(SIZE * sizeof(int));
        // cell i, j default assigned to 0
        for (int j = 0; j < SIZE; j++)
        {
            grid->cells[i][j] = 0;
        }
    }
}

//free memory allocation of the grid struct
void freeGrid(Grid *grid)
{
    for (int i = 0; i < grid->size; i++)
    {
        //free memory for each row
        free(grid->cells[i]);
    }
    //free memory for ptrs array 'cells'.
    free(grid->cells);
}

void populate(Grid *grid)
{
}