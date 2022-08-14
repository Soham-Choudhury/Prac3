#ifndef RANDOMCOMPUTER
#define RANDOMCOMPUTER
#include "Player.h"

class RandomComputer : public Player {
    public:
    virtual char makeMove(int games);
};

#endif // RANDOMCOMPUTER