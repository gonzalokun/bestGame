#ifndef GSMANAGER_H
#define GSMANAGER_H

#include <vector>

class GameState;

class GSManager
{
    public:
        GSManager();
        virtual ~GSManager();

        void changeState(GameState *);
        void pushState(GameState *);
        void popState();
        GameState* currentState();

    private:
        std::vector<GameState *> states; //State Array/Stack
        //GameState *currState;
};

#endif // GSMANAGER_H
