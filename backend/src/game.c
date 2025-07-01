#include <stdlib.h>
#include <stdio.h>
#include "game.h"
#include "sudoku.h"


void newGame(const int size){
    Grid sudokuGrid;
    initialize(&sudokuGrid);
    populate(&sudokuGrid);
    printGrid(&sudokuGrid);
    freeGrid(&sudokuGrid);
}
