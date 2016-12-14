#include "monster.h"
#include "levels.h"
#include "obstacle.h"

void moveMonster (SDL_Surface *screen,TGrid &grid,TTabImg &tabImg, int &mi, int &mj, int &i, int &j,int &nbLife,bool &level,bool &game)
{
    if (i < mi && j==mj) //ligne situé au-dessus du monstre
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
            cout << "nombre de vie haut: " << nbLife << endl;
            level=false;
        }
        else
        switchObstacle(screen,grid,tabImg,mi,mj,mi-1,mj,nbLife,level,game);
    }


    else if (i == mi && j>mj) //colonne situé à droite du monstre
    {
        while (grid[mi][mj+1] == 0)
        {
            grid[mi][mj]=0;
            grid[mi][mj+1]=1;
            grid[mi][mj]=0;
            mj++;
            j++;
        }


        if (mj+1>SIZE_W)
        {
            nbLife-=1;
            cout << "nombre de vie droite: " << nbLife << endl;
            level=false;
        }
        else
            switchObstacle(screen,grid,tabImg,mi,mj,mi,mj+1,nbLife,level,game);
    }


    else if (i > mi && j == mj) //ligne situé en-dessous du monstre
    {
        while (grid[mi+1][mj] == 0)
        {
            grid[mi][mj]=0;
            grid[mi+1][mj]=1;
            grid[mi][mj]=0;
            mi++;
            i++;
        }


        if (mi+1>=SIZE_H)
        {
            nbLife-=1;
            cout << "nombre de vie bas: " << nbLife << endl;
            level=false;
        }
        else
        switchObstacle(screen,grid,tabImg,mi,mj,mi+1,mj,nbLife,level,game);
    }


    else if (i == mi && j<mj) //colonne situé à gauche du monstre
    {
        while (grid[mi][mj-1] == 0)
        {
            grid[mi][mj]=0;
            grid[mi][mj-1]=1;
            grid[mi][mj]=0;
            mj--;
            j--;
        }

        if (mj-1<0)
        {
            nbLife-=1;
            cout << "nombre de vie gauche: " << nbLife << endl;
            level=false;
        }
        else
        switchObstacle(screen,grid,tabImg,mi,mj,mi,mj-1,nbLife,level,game);

    }

}



