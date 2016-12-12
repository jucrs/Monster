#include "home.h"

void inithome(SDL_Surface *home, SDL_Surface *screen, bool &play, bool &game, bool &quit)
{

    applySurface(0,0,home,screen,NULL);
    SDL_Flip(screen);

    SDL_Event event;

    int x=event.button.x;
    int y=event.button.y;

    while (SDL_PollEvent(&event))
    {
        switch (event.type)
        {

        case SDL_MOUSEBUTTONDOWN:

            if ((x>455) && (x<480) && (y>410) && (y<485))
            {

                {
                    play=true;
                    game=false;
                }
            }
            break;

        case SDL_QUIT:

            quit=true;

            break;

        }

    }
}

