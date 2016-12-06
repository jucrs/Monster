
#include "levels.h"
#include "obstacle.h"
#include "monster.h"

using namespace std;



void initLevel1 (TGrid &grid)
{

    initGrid(grid);
    grid[3][1]=1;
    grid[3][4]=2;
    grid[0][1]=3;
    grid[8][1]=4;
//    grid[0][0]=5;
//    grid[0][4]=6;
//    grid[6][0]=7;
//    grid[6][4]=8;

    showGrid(grid);

}

void showLevel (SDL_Surface *screen, SDL_Surface *background, TGrid grid, TTabImg tabImg)
{

    Obstacle su,sd,sl,sr;

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
                initSpeedUp(su);
                applySurface(x,y,tabImg[4],screen,NULL);
                 break;

            case 6: //Speed Down
                convertTo_Px(x,y,i,j);
                initSpeedDown(sd);
                applySurface(x,y,tabImg[5],screen,NULL);
                break;

            case 7: //Speed left
                convertTo_Px(x,y,i,j);
                initSpeedLeft(sl);
                applySurface(x,y,tabImg[6],screen,NULL);
                break;

            case 8: //Speed Right
                convertTo_Px(x,y,i,j);
                initSpeedRight(sr);
                applySurface(x,y,tabImg[7],screen,NULL);
                break;


            default:
                break;

            }
        }
    }
    SDL_Flip(screen);
}















