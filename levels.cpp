#include "levels.h"
#include "obstacle.h"
#include "monster.h"

void initLevel1 (TGrid &grid)
{
    initGrid(grid);
    grid[8][0]=1;
    grid[2][1]=2;
    grid[8][3]=2;
    grid[3][4]=3;
    grid[2][0]=4;
    grid[8][1]=4;
    grid[1][2]=2;
}

void initLevel2 (TGrid &grid)
{
    initGrid(grid);
    grid[8][0]=1;
    grid[3][0]=2;
    grid[7][2]=2;
    grid[1][4]=2;
    grid[4][0]=3;
    grid[5][3]=3;
    grid[0][2]=4;
    grid[2][3]=4;
    grid[7][4]=4;
}

void initLevel3 (TGrid &grid)
{
    initGrid(grid);
    grid[4][2]=1;
    grid[0][3]=2;
    grid[8][3]=2;
    grid[4][0]=3;
    grid[1][1]=3;
    grid[6][1]=3;
    grid[6][3]=3;
    grid[3][2]=4;
    grid[7][0]=4;
    grid[5][2]=4;
    grid[8][2]=4;
    grid[0][4]=4;
    grid[2][0]=5;
    grid[3][3]=6;
    grid[4][4]=6;
    grid[0][1]=7;
}

void initLevel4 (TGrid &grid)
{
    initGrid(grid);
    grid[1][2]=1;
    grid[0][0]=2;
    grid[4][4]=2;
    grid[8][4]=2;
    grid[6][0]=3;
    grid[0][2]=3;
    grid[3][2]=3;
    grid[2][4]=3;
    grid[8][0]=4;
    grid[2][1]=4;
    grid[4][2]=4;
    grid[7][2]=4;
    grid[6][3]=4;
    grid[1][0]=5;
    grid[3][1]=5;
    grid[6][4]=6;
    grid[8][1]=7;
    grid[0][4]=8;
}

void initLevel5 (TGrid &grid)
{
    initGrid(grid);

}

void initLevel6 (TGrid &grid)
{
    initGrid(grid);

}

void showLevel (SDL_Surface *screen, SDL_Surface *background, TGrid grid, TTabImg tabImg)
{
    applySurface(0,0,background,screen,NULL);
    int x,y;


    for (int i=0; i < SIZE_H; i++)
    {
        for (int j=0; j < SIZE_W; j++)
        {
            switch (grid[i][j])
            {
            case 1: //Monster
                convertTo_Px(x,y,i,j);
                applySurface(x,y,tabImg[0],screen,NULL);
                break;

           case 2: //Monster sleep
                convertTo_Px(x,y,i,j);
                applySurface(x,y,tabImg[1],screen,NULL);
                break;

            case 3: //Gift
                convertTo_Px(x,y,i,j);
                applySurface(x,y,tabImg[2],screen,NULL);
                break;

            case 4: //Fit
                convertTo_Px(x,y,i,j);
                applySurface(x,y,tabImg[3],screen,NULL);
                break;

            case 5: //Speed up
                convertTo_Px(x,y,i,j);
                applySurface(x,y,tabImg[4],screen,NULL);
                 break;

            case 6: //Speed Down
                convertTo_Px(x,y,i,j);
                applySurface(x,y,tabImg[5],screen,NULL);
                break;

            case 7: //Speed left
                convertTo_Px(x,y,i,j);
                applySurface(x,y,tabImg[6],screen,NULL);
                break;

            case 8: //Speed Right
                convertTo_Px(x,y,i,j);
                applySurface(x,y,tabImg[7],screen,NULL);
                break;


            default:
                break;

            }
        }
    }
    SDL_Flip(screen);
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
        numLevel+=1;
        level=false;
    }

}










