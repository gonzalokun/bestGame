#include <stdio.h>

#include "GSManager.h"
#include "GameState.h"

GSManager::GSManager()
{
    printf("State manager start\n");
}

GameState* GSManager::currentState()
{
    //Returns the last element in the vector
    return states.back();
}

GSManager::~GSManager()
{
    printf("State manager close\n");

    states.clear();
    //delete currState;
}
