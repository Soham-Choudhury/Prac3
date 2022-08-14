#include <iostream>
#include "Human.h"

char Human::makeMove(int games){
    games=0;
    char move;
    //std::cout<<"Enter move: "<<std::endl;
    std::cin>>move; // taking Human player input
    return move; //returning human reponse to main function
};