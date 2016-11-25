#include "levels.h"

using namespace std;


void initLevel1 (TGrid &grid)
{

   initGrid(grid);
   grid[2][4]=1;
   showGrid(grid);

}

void showLevel(Monster m, SDL_Surface *screen, SDL_Surface *background, TGrid grid)
{
    applySurface(0,0,background,screen,NULL);

    int x,y;
    for (int i=0; i < SIZE_H; i++)
    {
        for (int j=0; j < SIZE_W; j++)
        {
            switch (grid[i][j])
            {
            case 1:
                convertTo_Px(x,y,i,j);
                //initMonster(m);
                applySurface(x,y,m.source,screen,m.lecture);
                break;

            default:
                break;
            }
        }
    }
    SDL_Flip(screen);
}
