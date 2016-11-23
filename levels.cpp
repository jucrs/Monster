#include "levels.h"

using namespace std;


void initLevel(Level lvl,int nbMonster, SDL_Surface *background, SDL_Surface *screen, TGrid &grid)
{
    SDL_Event event;
    Monster m;

    int x=event.button.x;
    int y=event.button.y;

    applySurface(0,0,background,screen,NULL);

    //lvl.nbMonster=nbMonster;

    //initialisation du premier monstre de ce niveau (il y en a plusieurs (lvl.nbMonster) à faire)
    //initMonster(lvl.tabMonster[0],screen);

    initGrid(grid);

    grid[0][0]=1;
    afficherGrid(grid,SIZE_H,SIZE_W);

    for (int i = 0 ; i < SIZE_H ; i++){
        for (int j = 0 ; j < SIZE_W ; j++){
            if (grid[i][j] == 1){
                convertTo_Px(x,y,i,j);
                applySurface(x,y,m.source,screen,m.lecture);
            }
        }
    }
    afficherGrid(grid,SIZE_H,SIZE_W);



    //


    SDL_Flip(screen);
}
