#ifndef LEVELS
#define LEVELS

#include "functions.h"
#include "monster.h"
#include "grid.h"


const int NB_MAX_MONSTER = 45;

struct Level
{
    std::array<Monster,NB_MAX_MONSTER> tabMonster;
    int nbMonster;

    SDL_Surface *source;

};

//Définition des prototypes de fonctions
void initLevel(Level &lvl, int nbMonster, SDL_Surface *background, SDL_Surface *screen, TGrid &grid);

#endif // LEVELS

