#include "Referee.h"
#include "Player.h"
#include "RandomComputer.h"
#include "Avalanche.h"
#include "Crescendo.h"
#include "FistfullODollars.h"
#include "PaperDoll.h"
#include "Bureaucrat.h"
#include "Toolbox.h"
#include "Human.h"
#include "Tournament.h"
#include <iostream>

Player* Referee::refGame(Player* Player1, Player* Player2){
    Player* output;
    int games[2]={0,0}; //making counting grid, if player 1 wins a round, count in games[0] increases by 1, same thing with player 2 with games[1]
        for (int i=0; i<5; i++){
            char player1=Player1->makeMove(i);//calling for player 1 to make move
            char player2=Player2->makeMove(i); //calling for player 2 to make move
            //std::cout<<"Player 1(R): "<<player1<<std::endl;
            //std::cout<<"Player 2(P): "<<player2<<std::endl;
            
            if (player1 == 'R'&& player2 =='R'){
                games[0]+=games[0]+1; //Player 1 wins
            }
            else if (player1 == 'R'&& player2 == 'P'){
                games[1]+=games[1]+1; //Player 2 wins
            }
            else if (player1 == 'R'&& player2 == 'S'){
                games[0]+=games[0]+1; //Player 1 wins
            }
            else if (player1 == 'P'&& player2 == 'R'){
                games[0]+=games[0]+1; //Player 1 wins
            }
            else if (player1 == 'P'&& player2 == 'P'){
                games[0]+=games[0]+1; //Player 1 wins
            }
            else if (player1 == 'P'&& player2 == 'S'){
                games[1]+=games[1]+1; //Player 2 wins
            }
            else if (player1 == 'S'&& player2 == 'R'){
                games[1]+=games[1]+1; //Player 2 wins
            }
            else if (player1 == 'S'&& player2 == 'P'){
                games[0]+=games[0]+1; //Player 1 wins
            }
            else if (player1 == 'S'&& player2 == 'S'){
                games[0]+=games[0]+1; //Player 1 wins
            }
       };

    if (games[0]>games[1]){
        //check if player 1 won
        output=Player1;
    } 
    else if (games[0]==games[1]){ //if tied then player 1 won
        output=Player1;
    }
    else if (games[0]<games[1]) {
        output=Player2;
    }
    //std::cout<<"Player 1: "<<games[0]<<std::endl;
    //std::cout<<"Player 2: "<<games[1]<<std::endl;

    return output;
};