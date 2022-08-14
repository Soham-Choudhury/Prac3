#ifndef PAPERDOLL
#define PAPERDOLL
#include "Player.h"

class PaperDoll : public Player {
    public:
    virtual char makeMove(int games);
};

#endif // PAPERDOLL