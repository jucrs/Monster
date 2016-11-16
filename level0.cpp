#include "levels.h"

using namespace std;

// Fonctions

void initLevel(Level lvl,int nbMonster, SDL_Surface *background, SDL_Surface *screen)
{
    applySurface(0,0,background,screen,NULL);

    lvl.nbMonster=nbMonster;
    //initialisation du premier monstre de ce niveau (il y en a plusieurs (lvl.nbMonster) à faire)
    //initMonster( lvl.tabMonster[0] );

}
