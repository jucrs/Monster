#include "function.h"
#include "grid.h"
#include "monster.h"


void Event (SDL_Surface *screen, TTabImg &tabImg, bool &clic, bool &quit, TGrid &grid, int &x, int &y, int &nbLife, bool &level, bool &game, int numLevel)
{
    SDL_Event event;
    int i,j;

    while (SDL_PollEvent(&event))
    {
        switch (event.type)
        {
        case SDL_QUIT:
            quit=true;
            break;

        case SDL_MOUSEBUTTONDOWN:
            if (!clic)
            {
                int k = event.button.x;
                int l = event.button.y;

                convertTo_IJ(k,l,x,y);

                if (grid[x][y]==1)
                {
                    clic=true;
                }
            }
            break;

        case SDL_MOUSEBUTTONUP:
                if (clic)
                {
                    convertTo_IJ(event.button.x,event.button.y,i,j);
                    moveMonster(screen,grid,tabImg,x,y,i,j,nbLife,level,game);
                    clic = false;
                }
                break;
            }
        }
    }

