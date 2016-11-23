#include "grid.h"

void initGrid(TGrid &grid)
{
    for (int i = 0 ; i < SIZE_H ; i++)
        for (int j = 0 ; j < SIZE_W ; j++)
            grid[i][j] = 0;
}

void convertTo_IJ (int &i, int &j)
{
    SDL_Event event;

    int x=event.button.x;
    int y=event.button.y;

    i = x % CASE_X;
    j = y % CASE_Y;

}

void convertTo_Px(int &x, int &y, int i, int j)
{
    x = j * CASE_X;
    y = i * CASE_Y;
}

