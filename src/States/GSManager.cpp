#include <stdio.h>

#include "GSManager.h"
#include "GameState.h"

GSManager::GSManager()
{
    printf("State manager start\n");
}

GSManager::~GSManager()
{
    printf("State manager close\n");
}
