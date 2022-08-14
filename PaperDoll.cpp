#include "PaperDoll.h"

char PaperDoll::makeMove(int games){
    char choice;
    char moves[5]={'P','S','S','P','S'};
    choice=moves[games];
    return choice;
};