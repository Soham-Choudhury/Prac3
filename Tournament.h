#ifndef TOURNAMENT
#define TOURNAMENT
#include "Player.h"
#include <array>

class Tournament {
    public:
    virtual Player* run(std::array <Player *, 8>  competitors);
    Tournament () {};
};


#endif // Player