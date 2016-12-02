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

    m.source=loadImageWithColorKey("sprite.bmp",255,255,255);
    convertTo_Px(x,y,i,j);
    initMonster(m);
    applySurface(x,y,m.source,screen, &m.lecture);


}

void showMonsterSleep(Monster &m, SDL_Surface *screen, int i, int j)
{
    int x,y;

    m.source=loadImageWithColorKey("sprite.bmp",255,255,255);
    convertTo_Px(x,y,i,j);
    initMonsterSleep(m);
    applySurface(x,y,m.source,screen, &m.lecture);


}


//---------------------------------A FAIRE !!! -------------------------------------
/*void mooveMonster (TGrid grid)
{
    int x=event.button.x;
    int y=event.button.y;

    int i,j;

    SDL_Event event;

    while (SDL_PollEvent(&event))
    {
        if (event.type == SDL_BUTTON_LEFT)
        {
            convertTo_IJ(x,y,i,j);

            if(grid[i][j]==1)
            {

            }
        }
    }

}
//----------------------------------------------------------------------------------


*/

