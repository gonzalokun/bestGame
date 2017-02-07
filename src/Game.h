//Main game class

#ifndef GAME_H
#define GAME_H

class GSManager;

class Game
{
    public:
        Game();
        virtual ~Game();

        void startGameLoop();

    private:
        bool running;
        GSManager *stateManager;
};

#endif // GAME_H
