#include "monster.h"
#include "levels.h"

using namespace std;


void initMonster(Monster &m)
{
    m.lecture.x=16;
    m.lecture.y=147;
    m.lecture.w=sizeMw;
    m.lecture.h=sizeMh;
}

void initMonsterSleep(Monster &m2)
{
    m2.lecture.x=0;
    m2.lecture.y=0;
    m2.lecture.w=75;
    m2.lecture.h=68;
}

void showMonster(Monster &m, SDL_Surface *screen, int i, int j)
{
    int x,y;

    //m.source=loadImageWithColorKey("sprite.bmp",0,0,0);
    convertTo_Px(x,y,i,j);
    initMonster(m);
    applySurface(x,y,m.source,screen, &m.lecture);


}

void showMonsterSleep(Monster &ms, SDL_Surface *screen, int i, int j)
{
    int x,y;

   // ms.source=loadImageWithColorKey("sprite.bmp",0,0,0);
    convertTo_Px(x,y,i,j);
    initMonsterSleep(ms);
    applySurface(x,y,ms.source,screen, &ms.lecture);


}




