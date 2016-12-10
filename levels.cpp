#include "levels.h"
#include "obstacle.h"
#include "monster.h"

void initLevel1 (TGrid &grid)
{

    initGrid(grid);
    grid[3][1]=1;
    grid[3][4]=2;

}

void initLevel2 (TGrid &grid)
{
    initGrid(grid);
    grid[2][1]=1;
    grid[2][4]=4;
    grid[8][3]=3;
    grid[7][2]=2;
}

void initLevel3 (TGrid &grid)
{
    initGrid(grid);
    grid[0][0]=1;
    grid[1][0]=3;
    grid[0][1]=3;
    grid[3][0]=4;
    grid[8][3]=4;
    grid[2][4]=4;
    grid[7][2]=2;
    grid[0][2]=2;
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


void fillingTab (TTabImg &tabImg)
{
    tabImg[0]=loadImageWithColorKey("monster.png",0,0,255);
    tabImg[1]=loadImageWithColorKey("snowman.png",0,0,255);
    tabImg[2]=loadImageWithColorKey("gift.png",0,0,255);
    tabImg[3]=loadImageWithColorKey("fit.png",0,0,255);
//    tabImg[4]=loadImageWithColorKey("sprite.bmp",0,0,255);
//    tabImg[5]=loadImageWithColorKey("sprite.bmp",0,0,255);
//    tabImg[6]=loadImageWithColorKey("sprite.bmp",0,0,255);
//    tabImg[7]=loadImageWithColorKey("sprite.bmp",0,0,255);
}













