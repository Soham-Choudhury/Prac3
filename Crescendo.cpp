#include "Player.h"
#include "Crescendo.h"
char Crescendo::makeMove(int games){
    char choice;
    char moves[5]={'P','S','R','P','S'};
    choice=moves[games];
    return choice;
};
