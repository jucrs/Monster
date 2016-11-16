#include "home.h"

void inithome(SDL_Surface *home, SDL_Surface *screen, SDL_Event event, bool &play, bool &level, bool &quit)
{

    applySurface(0,0,home,screen,NULL);
    SDL_Flip(screen);

    int x=event.button.x;
    int y=event.button.y;

    while (SDL_PollEvent(&event))
    {
        if ((x>195) && (x<240) && (y>345) && (y<390))
        {
            if (event.button.button==SDL_BUTTON_LEFT)
                SDL_Quit();
        }
        if ((x>120) && (x<183) && (y>280) && (y<350))
        {
            if (SDL_WaitEvent(&event))
                if (event.button.button==SDL_BUTTON_LEFT)
                {
                    play=true;
                    level=false;
                }
        }
        if( event.type == SDL_QUIT )
        {
            quit = true;
        }
    }
}
