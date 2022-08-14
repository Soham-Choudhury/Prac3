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
#include <array>
#include <iostream>

Player* Tournament:: run(std::array <Player *, 8>  competitors) {
    Referee referee;
    Player* player1=competitors[0]; 
    Player* player2=competitors[1];
    Player* player3=competitors[2];
    Player* player4=competitors[3];
    Player* player5=competitors[4];
    Player* player6=competitors[5];
    Player* player7=competitors[6];
    Player* player8=competitors[7];
   
    Player* winnermatch1=referee.refGame(player1,player2);//first tier begins
    Player* winnermatch2=referee.refGame(player3,player4);
    Player* winnermatch3=referee.refGame(player5,player6);
    Player* winnermatch4=referee.refGame(player7,player8);

    Player* winnermatch5=referee.refGame(winnermatch1,winnermatch2);//second tier begins
    Player* winnermatch6=referee.refGame(winnermatch3,winnermatch4);

    Player* finalswinner=referee.refGame(winnermatch5,winnermatch6);//finals
    //std::cout<<match12<<std::endl;
    std::cout<<finalswinner<<std::endl;
    return finalswinner;
};