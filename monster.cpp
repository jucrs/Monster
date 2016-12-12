#include "monster.h"
#include "levels.h"
#include "obstacle.h"

void moveMonster (TGrid &grid,int &mi, int &mj, int &i, int &j,bool &level)
{
    if (i < mi && j==mj) //colonne situé au-dessus du monstre
    {
        while (grid[mi-1][mj]==0)
        {
            grid[mi][mj]=0;
            grid[mi-1][mj]=1;
            grid[mi][mj]=0;
            mi--;
            i--;
        }
        SwitchObstacle(grid,mi-1,mj);

        if (mi-1<0)
        {
            cout << "perdu"<< endl;
            level=false;
        }

    }
    else if (i == mi && j>mj) //ligne situé à droite du monstre
    {
        while (grid[mi][mj+1] == 0)
        {
            grid[mi][mj]=0;
            grid[mi][mj+1]=1;
            grid[mi][mj]=0;
            mj++;
        }
        SwitchObstacle(grid,mi,mj+1);

        if (mj+1>SIZE_W)
        {
            cout << "perdu"<< endl;
            level=false;
        }
    }
    else if (i > mi && j == mj) //colonne situé en-dessous du monstre
    {
        while (grid[mi+1][mj] == 0)
        {
            grid[mi][mj]=0;
            grid[mi+1][mj]=1;
            grid[mi][mj]=0;
            mi++;
        }
        SwitchObstacle(grid,mi+1,mj);

        if (mi+1>=SIZE_H)
        {
            cout << "perdu"<< endl;
            level=false;
        }
    }
    else if (i == mi && j<mj) //ligne situé à gauche du monstre
    {
        while (grid[mi][mj-1] == 0)
        {
            grid[mi][mj]=0;
            grid[mi][mj-1]=1;
            grid[mi][mj]=0;
            mj--;
        }
        SwitchObstacle(grid,mi,mj-1);

        if (mj-1<0)
        {
            cout << "perdu"<< endl;
            level=false;
        }
    }
}



