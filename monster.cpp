#include "monster.h"

using namespace std;


void initMonster(monster &m, SDL_Surface *screen)
{
    m.typeMonster=STANDARD;

    m.casex=0;
    m.casey=0;
    m.w=sizeMw;
    m.h=sizeMh;
    m.mvt_x=0;
    m.mvt_y=0;

    m.source=loadImageWithColorKey("sprite.bmp",255,255,255);

    m.lecture->x=16;
    m.lecture->y=147;
    m.lecture->w=sizeMw;
    m.lecture->h=sizeMh;


}
