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

<<<<<<< HEAD
    m.source=loadImage("monster.png");
=======
    //m.source=loadImageWithColorKey("sprite.bmp",0,0,0);
>>>>>>> 0413ed8aaab7fc5b2c13695f56615815cae3f299
    convertTo_Px(x,y,i,j);
    initMonster(m);
    applySurface(x,y,m.source,screen,NULL);


}

void showMonsterSleep(Monster &ms, SDL_Surface *screen, int i, int j)
{
    int x,y;

<<<<<<< HEAD
    m.source=loadImage("snowman.png");
    convertTo_Px(x,y,i,j);
    initMonsterSleep(m);
    applySurface(x,y,m.source,screen,NULL);
=======
   // ms.source=loadImageWithColorKey("sprite.bmp",0,0,0);
    convertTo_Px(x,y,i,j);
    initMonsterSleep(ms);
    applySurface(x,y,ms.source,screen, &ms.lecture);
>>>>>>> 0413ed8aaab7fc5b2c13695f56615815cae3f299


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

