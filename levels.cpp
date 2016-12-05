
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

    showGrid(grid);

}

void showLevel (SDL_Surface *screen, SDL_Surface *background, TGrid grid)
{
    Monster m;
    Obstacle g,b;

    applySurface(0,0,background,screen,NULL);

    //int x,y;

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
                showMonsterSleep(m,screen,i,j);
                break;

            case 3:
                showSapin(b,screen,i,j);
                break;

            case 4:
                showGift(g,screen,i,j);
                break;

            default:
                break;

            }
        }
    }
    SDL_Flip(screen);
}















