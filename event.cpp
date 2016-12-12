#include "function.h"
#include "grid.h"
#include "monster.h"


void Event (bool &clic, bool &quit, TGrid &grid, int &x,int &y, bool &level)
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
                    moveMonster(grid,x,y,i,j,level);
                    clic = false;
                }
                break;

            }
        }
    }

