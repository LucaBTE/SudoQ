#include "sudoku.h"
#include "utils.h"
#include <stdlib.h>
#include <stdio.h>

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

// free memory allocation of the grid struct
void freeGrid(Grid *grid)
{
    for (int i = 0; i < grid->size; i++)
    {
        // free memory for each row
        free(grid->cells[i]);
    }
    // free memory for ptrs array 'cells'.
    free(grid->cells);
}

void populate(Grid *grid)
{
    for (int i = 0; i < grid->size; i++)
    {
        for (int j = 0; j < grid->size; j++)
        {
            grid->cells[i][j] = pickNumber(grid->cells, i, j);
        }
    }
}

void printGrid(Grid *grid)
{
    int size = grid->size;
    for (int i = 0; i < size; i++)
    {

        if (i % 3 == 0)
        {
            printf("----------------------\n");
        }

        for (int j = 0; j < size; j++)
        {
            if (j % 3 == 0)
            {
                printf("|");
            }
            printf("%d ", grid->cells[i][j]);
            if (j == size - 1)
            {
                printf("|");
            }
        }

        printf("\n");
        if (i == size - 1)
        {
            printf("----------------------\n");
        }
    }
}