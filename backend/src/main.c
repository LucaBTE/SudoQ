#include <stdio.h>
#include <stdlib.h>
#include "game.h"
#include "time.h"

int main(){
    srand(time(NULL));
    newGame(9);
    return 0;
}