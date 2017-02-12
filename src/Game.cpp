#include <stdio.h>
#include <stdlib.h>

#include "Game.h"
#include <SFML/Window.hpp>

Game::Game()
{
    printf("Game Start!\n");
}

//*
void Game::changeState(GameState* state)
{
    //
}

void Game::pushState(GameState* state)
{
    //
}

void Game::popState()
{
    //
}
//*/

GameState* Game::currentState()
{
    return states.back();
}

Game::~Game()
{
    printf("Closing game\n");
    states.clear();
}
