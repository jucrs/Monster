#include "home.h"

void inithome(SDL_Surface *home, SDL_Surface *screen,SDL_Surface *home2, bool &play, bool &game,bool &quit)
{

    applySurface(0,0,home,screen,NULL);

    SDL_Event event;

    while (SDL_PollEvent(&event))
    {
        switch (event.type)
        {
            case SDL_QUIT:
                quit = true;
                break;
            case SDL_MOUSEBUTTONUP:
            {
                int x=event.button.x;
                int y=event.button.y;
                if ((x>265) && (x<350) && (y>320) && (y<700))
                {
                    play=true;
                }
                break;
            }
            case SDL_MOUSEMOTION:
            {
                int x=event.button.x;
                int y=event.button.y;
                if ((x>265) && (x<350) && (y>320) && (y<700))
                {
                    applySurface(0,0,home2,screen,NULL);
                }
                break;
            }
        }
        SDL_Flip(screen);
    }

}
