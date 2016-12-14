#include "monster.h"
#include "levels.h"
#include "obstacle.h"

void moveMonster (SDL_Surface *screen,TGrid &grid,TTabImg &tabImg, int &mi, int &mj, int &i, int &j,int &nbLife,bool &level,bool &game)
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
        if (mi-1<0)
        {
            nbLife-=1;
        }

        switchObstacle(screen,grid,tabImg,mi,mj,mi-1,mj,nbLife,level,game);


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
        switchObstacle(screen,grid,tabImg,mi,mj,mi,mj+1,nbLife,level,game);

        if (mj+1>SIZE_W)
        {
            nbLife=-1;
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
        switchObstacle(screen,grid,tabImg,mi,mj,mi+1,mj,nbLife,level,game);

        if (mi+1>=SIZE_H)
        {
            nbLife=-1;
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
        switchObstacle(screen,grid,tabImg,mi,mj,mi,mj-1,nbLife,level,game);

        if (mj-1<0)
        {
            nbLife=-1;
        }
    }
}



