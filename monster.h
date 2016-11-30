#ifndef MONSTER
#define MONSTER
#include "functions.h"

const int sizeMw=43;
const int sizeMh=45;
const int NB_MAX_MONSTER=10;

using namespace std;

//enum EnumMonster {STANDARD,DORMEUR,DEAD};

struct Monster
{
    //EnumMonster typeMonster;

    SDL_Surface *source;
    SDL_Rect *lecture;
};

void initMonster(Monster &m);
void initMonsterSleep(Monster &m);

#endif // MONSTER

