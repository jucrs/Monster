#ifndef MONSTER
#define MONSTER
#include "functions.h"

const int sizeMw=43;
const int sizeMh=45;

enum EnumMonster {STANDARD,DORMEUR,DEAD};

struct Monster
{
    EnumMonster typeMonster;
    int casei;
    int casej;
    int w;
    int h;
    int mvt_x;
    int mvt_y;

    SDL_Surface *source;
    SDL_Rect *lecture;
};

void initMonster(Monster &m, SDL_Surface *screen);

#endif // MONSTER

