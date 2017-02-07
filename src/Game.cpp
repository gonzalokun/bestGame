#include <stdio.h>
#include <stdlib.h>

#include "Game.h"
#include "States/GSManager.h"

Game::Game()
{
    printf("Game Start!\n");
}

Game::~Game()
{
    printf("Closing game\n");
}
