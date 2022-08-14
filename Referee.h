#ifndef REFEREE
#define REFEREE
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

class Referee {
    //char output;
    public:
    Player* refGame(Player* Player1, Player* Player2);
    Referee(){
    }
    
};


#endif // REFEREE