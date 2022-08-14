#ifndef BUREAUCRAT
#define BUREAUCRAT
#include "Player.h"

class Bureaucrat : public Player {
    public:
    virtual char makeMove(int games);
};

#endif // BUREAUCRAT