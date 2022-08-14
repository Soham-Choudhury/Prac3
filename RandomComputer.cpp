#include "RandomComputer.h"
#include <random>
#include <ctime>
using namespace std;
char RandomComputer::makeMove(int games){
    games=0;
    char move;
    srand(time(0));
    int choice=rand() % 3; //https://www.delftstack.com/howto/cpp/generate-random-number-in-range-cpp/
    switch (choice){
        case 0: move='R'; break;
        case 1: move='P'; break;
        case 2: move='S'; break;
    };
    return choice;
};
