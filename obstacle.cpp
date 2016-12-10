#include "obstacle.h"


void SwitchObstacle (TGrid &grid,int i, int j)
{
    switch (grid[i][j])
    {
    case 2:
        grid[i][j]=1;
        break;
    case 3:
        grid[i][j]=0;
    }
}







