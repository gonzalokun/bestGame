//Main game class

#ifndef GAME_H
#define GAME_H

#include <SFML/Window.hpp>
#include <vector>

class GameState;

class Game
{
    public:
        Game();
        ~Game();

        void changeState(GameState *);
        void pushState(GameState *);
        void popState();
        GameState* currentState();

        void handleEvents();
        void update();
        void draw();

        void startGameLoop();

    private:
        //GSManager *stateManager;
        bool running;
        std::vector<GameState *> states;
        sf::Window gameWindow;
};

#endif // GAME_H
