
#include "levels.h"
#include "obstacle.h"
#include "monster.h"

using namespace std;



void initLevel1 (TGrid &grid)
{

    initGrid(grid);
    grid[2][4]=1;
    grid[1][3]=2;
    grid[3][0]=3;
    grid[1][1]=4;
    grid[0][0]=5;
    grid[0][4]=6;
    grid[6][0]=7;
    grid[6][4]=8;

    showGrid(grid);

}

void showLevel (SDL_Surface *screen, SDL_Surface *background, TGrid grid)
{
    Monster m,ms;
    Obstacle g,b,su,sd,sl,sr;

      m.source=loadImageWithColorKey("sprite.bmp",0,0,0);
      ms.source=loadImageWithColorKey("sprite.bmp",0,0,0);
      g.source=loadImageWithColorKey("sprite.bmp",0,0,0);
      b.source=loadImageWithColorKey("sprite.bmp",0,0,0);
      su.source=loadImageWithColorKey("sprite.bmp",0,0,0);
      sd.source=loadImageWithColorKey("sprite.bmp",0,0,0);
      sl.source=loadImageWithColorKey("sprite.bmp",0,0,0);
      sr.source=loadImageWithColorKey("sprite.bmp",0,0,0);

    applySurface(0,0,background,screen,NULL);

    for (int i=0; i < SIZE_H; i++)
    {
        for (int j=0; j < SIZE_W; j++)
        {
            switch (grid[i][j])
            {
            case 1:
                showMonster(m,screen,i,j);
                break;

           case 2:
                showMonsterSleep(ms,screen,i,j);
                break;

            case 3:
                showSapin(b,screen,i,j);
                break;

            case 4:
                showGift(g,screen,i,j);
                break;

            case 5:
            showSpeedDown(sd,screen,i,j);
                 break;

            case 6:
                showSpeedUp(su,screen,i,j);
                break;

            case 7:
                showSpeedRight(sr,screen,i,j);
                break;

            case 8:
                showSpeedLeft(sl,screen,i,j);
                break;


            default:
                break;

            }
        }
    }
    SDL_Flip(screen);
}















