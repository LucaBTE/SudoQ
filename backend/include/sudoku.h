#ifndef SUDOKU_H
#define SUDOKU_H

#define SIZE 9

/*
cells is an array of pointers, each pointer (cell[0], cell[1], ...)
points to an array of integer that is a row of the grid
cells
  |
  |--> cells[0] --> [0, 0, 0, ...]
  |
  |--> cells[1] --> [0, 0, 0, ...]
  |
  |--> cells[2] --> [0, 0, 0, ...]
  ...
*/
typedef struct
{
    int **cells;
    int size;
} Grid;

void initialize(Grid *sudokuGrid);
void freeGrid(Grid *grid);
void populate(Grid *sudokuGrid);
void printGrid(Grid *grid);
#endif