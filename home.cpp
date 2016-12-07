#include "home.h"

void inithome(SDL_Surface *home, SDL_Surface *screen, bool &play, bool &level)
{

    applySurface(0,0,home,screen,NULL);
    SDL_Flip(screen);

    SDL_Event event;

    int x=event.button.x;
    int y=event.button.y;

    while (SDL_PollEvent(&event))
    {

        if ((x>455) && (x<480) && (y>410) && (y<485))
        {

                if (event.button.button==SDL_BUTTON_LEFT)
                {
                    play=true;
                    level=false;
                }
        }

    }
}
