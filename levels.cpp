#include "levels.h"

using namespace std;


void initLevel(Level &lvl,int nbMonster, SDL_Surface *background, SDL_Surface *screen, TGrid &grid)
{

    Monster m;

    int x;
    int y;

    applySurface(0,0,background,screen,NULL);

    lvl.nbMonster=nbMonster;

    //initialisation du premier monstre de ce niveau (il y en a plusieurs (lvl.nbMonster) à faire)


    initGrid(grid);

    grid[2][4]=1;

    afficherGrid(grid);
    for (int i = 0 ; i < SIZE_H ; i++)
    {
        for (int j = 0 ; j < SIZE_W ; j++)
        {
            if (grid[i][j] == 1)
            {
                convertTo_Px(x,y,i,j);
                initMonster(lvl.tabMonster[0],screen);
                applySurface(x,y,lvl.tabMonster[0].source,screen,lvl.tabMonster[0].lecture);
            }
        }
    }
    afficherGrid(grid);


    SDL_Flip(screen);
}
