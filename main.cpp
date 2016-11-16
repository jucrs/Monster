#include <iostream>

#include "backGrounds.h"
#include "functions.h"
#include "levels.h"

using namespace std;

int main()
{
    //Mise en place de l'écran
    SDL_Surface *screen;
    SDL_Init(SDL_INIT_EVERYTHING);
    screen=SDL_SetVideoMode(SCREEN_WIDTH,SCREEN_HEIGHT,SCREEN_BPP,SDL_SWSURFACE);

    //Définition des fonds d'écran
    SDL_Surface *background;
    background=loadImage("background.bmp");

    SDL_Event event;

    bool quit=false;

    Level lvl;
    /*
    monster m;
    initMonster(m);
*/

    while(!quit)
    {
        initLevel(lvl,3,background,screen);
        SDL_Flip(screen);


        while(SDL_PollEvent(&event))
            if( event.type == SDL_QUIT ){
                quit = true;
            }

    }
    SDL_FreeSurface(screen);

    SDL_Quit();

    return EXIT_SUCCESS;
}

