#include "levels.h"

using namespace std;


void initLevel(Level lvl,int nbMonster, SDL_Surface *background, SDL_Surface *screen, TGrid &grid)
{
    SDL_Event event;
    Monster m;

    int x=event.button.x;
    int y=event.button.y;

    applySurface(0,0,background,screen,NULL);

    lvl.nbMonster=nbMonster;

    //initialisation du premier monstre de ce niveau (il y en a plusieurs (lvl.nbMonster) à faire)
    //initMonster(lvl.tabMonster[0],screen);

    initGrid(grid);
    afficherGrid(grid,SIZE_H,SIZE_W);

    //convertTo_Px(x,y,i,j);

    applySurface(x,y,m.source,screen,m.lecture);

    SDL_Flip(screen);
}
