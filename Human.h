#ifndef HUMAN
#define HUMAN
#include "Player.h"

class Human : public Player {
    public:
    virtual char makeMove(int games);
};

#endif // HUMAN