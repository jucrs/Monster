#include "function.h"
#include "background.h"


using namespace std;


void setBackGrounds(SDL_Surface *background, SDL_Surface *screen)
{
    applySurface(0,0,background,screen,NULL);
}



