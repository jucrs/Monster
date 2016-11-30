#include "monster.h"

using namespace std;


void initMonster(Monster &m)
{
    //m.typeMonster=STANDARD;



    m.source=loadImageWithColorKey("sprite.bmp",255,255,255);

    m.lecture->x=16;
    m.lecture->y=147;
    m.lecture->w=sizeMw;
    m.lecture->h=sizeMh;
}

void initMonsterSleep(Monster &m)
{
    //m.typeMonster=DORMEUR;



    m.source=loadImageWithColorKey("sprite.bmp",255,255,255);

    m.lecture->x=0;
    m.lecture->y=0;
    m.lecture->w=75;
    m.lecture->h=68;
}
