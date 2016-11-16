#ifndef LEVELS
#define LEVELS

#include <iostream>
#include <array>

#include "functions.h"
#include "monster.h"


const int NB_MAX_MONSTER = 45;

//using tabMonster=std::array<monster,NB_MAX_MONSTER>;

struct Level
{
    std::array<monster,NB_MAX_MONSTER> tabMonster;
    int nbMonster;

    //... et tout plein de choses
};

//Définition des prototypes de fonctions
void initLevel(Level &lvl,int nbMonster, SDL_Surface *background, SDL_Surface *screen);

#endif // LEVELS

