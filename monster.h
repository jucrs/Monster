#ifndef MONSTER
#define MONSTER
#include "functions.h"
#include "levels.h"

const int sizeMw=43;
const int sizeMh=45;

enum EnumMonster {STANDARD,DORMEUR,DEAD};

struct monster
{
    EnumMonster typeMonster;
    int casex;
    int casey;
    int w;
    int h;
    int mvt_x;
    int mvt_y;

    SDL_Surface *source;
    SDL_Rect *lecture;
};

void initMonster(monster &m);

#endif // MONSTER

