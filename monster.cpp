#include "monster.h"
#include "levels.h"

using namespace std;


//void initMonster(Monster &m)
//{
//    m.lecture.x=16;
//    m.lecture.y=147;
//    m.lecture.w=sizeMw;
//    m.lecture.h=sizeMh;
//}

//void initMonsterSleep(Monster &m2)
//{
//    m2.lecture.x=0;
//    m2.lecture.y=0;
//    m2.lecture.w=75;
//    m2.lecture.h=68;
//}

//void showMonster(Monster &m, SDL_Surface *screen, int i, int j)
//{
//    int x,y;

//initMonster(m);



//}

//void showMonsterSleep(Monster &ms, SDL_Surface *screen, int i, int j)
//{
//    int x,y;


//    //ms.source=loadImage("snowman.png");
//    convertTo_Px(x,y,i,j);
//    initMonsterSleep(ms);
//    applySurface(x,y,ms.source,screen,NULL);

//    /*ms.source=loadImageWithColorKey("sprite.bmp",0,0,0);
//    convertTo_Px(x,y,i,j);
//    initMonsterSleep(ms);
//    applySurface(x,y,ms.source,screen, &ms.lecture);*/



//}


//---------------------------------A FAIRE !!! -------------------------------------
void mooveMonster (TGrid &grid,int &mi, int &mj, int i, int j)
{
    //int i,j;

    //convertTo_IJ(x,y,i,j);

    if (i < mi && j==mj) //colonne situé au-dessus du monstre
    {
        while (grid[mi-1][mj]==0)
        {
            grid[mi-1][mj]=1;
            grid[mi][mj]=0;
            mi--;
        }

        grid[mi+1][mj]=0;
    }
    else if (i == mi && j>mj) //ligne situé à droite du monstre
    {
        while (grid[mi][mj+1] == 0)
        {
            grid[mi][mj+1]=1;
            grid[mi][mj]=0;
            mj++;
        }
        grid[mi][mj]=0;
    }
    else if (i > mi && j == mj) //colonne situé en-dessous du monstre
    {
        while (grid[mi+1][mj] == 0)
        {
            grid[mi+1][mj]=1;
            grid[mi][mj]=0;
            mi++;
        }
        grid[mi][mj]=0;
    }
    else if (i == mi && j<mj) //ligne situé à droite du monstre
    {
        while (grid[mi][mj-1] == 0)
        {
            grid[mi][mj-1]=1;
            grid[mi][mj]=0;
            mj++;
        }
        grid[mi][mj]=0;
    }
}
//----------------------------------------------------------------------------------




