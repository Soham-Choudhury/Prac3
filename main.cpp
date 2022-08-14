#include <iostream>
#include <array>
#include "RandomComputer.h"
#include "Avalanche.h"
#include "Toolbox.h"
#include "Bureaucrat.h"
#include "Referee.h"
#include "Player.h"
#include "FistfullODollars.h"
#include "PaperDoll.h"
#include "Crescendo.h"
#include "Human.h"
#include "Tournament.h"

int main(){
    Player *player1=new Avalanche;
    Player *player2=new Bureaucrat;
    Player *player3=new Bureaucrat;
    Player *player4=new Toolbox;
    Player *player5=new Toolbox;
    Player *player6=new Crescendo;
    Player *player7=new Crescendo;
    Player *player8=new FistfullODollars;
    
    std::array <Player*, 8> competitors={player1,player2,player3,player4,player5,player6,player7,player8};
    Tournament tournament;
    Player *winner=tournament.run(competitors);
    std::cout<<"Winner: "<<winner<<std::endl;
    std::cout<<"Toolbox: "<<player4<<std::endl;
    std::cout<<"Toolbox: "<<player5<<std::endl;
    //std::cout<<player1->makeMove(i)<<std::endl;
    return 0;

};