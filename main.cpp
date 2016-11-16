#include <iostream>

#include "backGrounds.h"
#include "functions.h"
#include "levels.h"
#include "home.h"

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
    SDL_Surface *home;
    home=loadImage("home.bmp");

    SDL_Event event;

    bool quit=false;
    bool play=false;
    bool level=false;

    Level lvl;
    /*monster m;
    initMonster(m);*/


    while(!quit)
    {

        while(!play)
        {
            inithome(home,screen,event,play,level,quit);

        }
        while(!level)
        {
            int x=event.button.x;
            int y=event.button.y;

            initLevel(lvl,3,background,screen);
            SDL_Flip(screen);

            while (SDL_PollEvent(&event))
            {
                if ((x>75) && (x<120) && (y>506) && (y<551))
                {
                    if (event.button.button==SDL_BUTTON_LEFT)
                    {
                        level=true;
                        play=false;
                    }
                }
                if( event.type == SDL_QUIT )
                {
                    quit = true;
                }
            }
        }

    }
    SDL_FreeSurface(screen);

    SDL_Quit();

    return EXIT_SUCCESS;
}

