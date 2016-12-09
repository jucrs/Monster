#include "monster.h"
#include "levels.h"

void moveMonster (TGrid &grid,int &mi, int &mj, int &i, int &j)
{
    if (i < mi && j==mj) //colonne situé au-dessus du monstre
    {
        while (grid[mi-1][mj]==0 && (mi-1)>= 0)
        {
            grid[mi][mj]=0;
            grid[mi-1][mj]=1;
            grid[mi][mj]=0;
            mi--;
            i--;
        }
        i--;
    }
    else if (i == mi && j>mj) //ligne situé à droite du monstre
    {
        while (grid[mi][mj+1] == 0 && (mj+1)<5)
        {
            grid[mi][mj]=0;
            grid[mi][mj+1]=1;
            grid[mi][mj]=0;
            mj++;
        }
    }
    else if (i > mi && j == mj) //colonne situé en-dessous du monstre
    {
        while (grid[mi+1][mj] == 0 && (mi+1)<9)
        {
            grid[mi][mj]=0;
            grid[mi+1][mj]=1;
            grid[mi][mj]=0;
            mi++;
        }
    }
    else if (i == mi && j<mj) //ligne situé à gauche du monstre
    {
        while (grid[mi][mj-1] == 0 && (mj-1)>=0)
        {
            grid[mi][mj]=0;
            grid[mi][mj-1]=1;
            grid[mi][mj]=0;
            mj--;
        }
    }
}

void finishLevel(TGrid grid,bool &level,int &numLevel)
{
    int nbMonster;
    for (int i=0;i<SIZE_H;i++)
    {
        for (int j=0;j<SIZE_W;j++)
        {
            if (grid[i][j]==2)
            {
                nbMonster+=1;
            }
        }
    }
    if (nbMonster==0)
    {
        level=false;
        numLevel+=1;
    }
}

