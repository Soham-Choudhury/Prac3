#include "Player.h"
#include "FistfullODollars.h"
char FistfullODollars::makeMove(int games){
    char choice;
    char moves[5]={'R','P','P','R','P'};
    choice=moves[games];
    return choice;
};