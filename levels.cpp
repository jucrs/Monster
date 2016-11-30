#include "levels.h"
#include "obstacle.h"

using namespace std;


void initLevel1 (TGrid &grid)
{

   initGrid(grid);
   grid[2][4]=1;
   grid[1][3]=2;
   grid[3][0]=3;
   grid[1][1]=4;
   showGrid(grid);

}

void showLevel (Monster &m, obstacle &g, obstacle &b,SDL_Surface *screen, SDL_Surface *background, TGrid grid)
{
//    Monster m;
//    obstacle g,b;

    applySurface(0,0,background,screen,NULL);

    int x,y;
    for (int i=0; i < SIZE_H; i++)
    {
        for (int j=0; j < SIZE_W; j++)
        {
            switch (grid[i][j])
            {
            case 1:
                convertTo_Px(x,y,i,j);
                initMonster(m);
                applySurface(x,y,m.source,screen,m.lecture);
                break;

            case 2:
                convertTo_Px(x,y,i,j);
                initMonsterSleep(m);
                applySurface(x,y,m.source,screen,m.lecture);
                break;

 /*           case 3:
                convertTo_Px(x,y,i,j);
                initIce(g);
                applySurface(x,y,g.source,screen,g.lecture);
                break;

            case 4:
                convertTo_Px(x,y,i,j);
                initBook(b);
                applySurface(x,y,b.source,screen,b.lecture);
                break;
*/
             default:
                break;

            }
        }
    }
    SDL_Flip(screen);
}

//---------------------------------A FAIRE !!! -------------------------------------
/*void mooveMonster (TGrid grid)
{
    int x=event.button.x;
    int y=event.button.y;
    int i,j;

    SDL_Event event;

    while (SDL_PollEvent(&event))
    {
        if (event.type == SDL_BUTTON_LEFT)
        {
            convertTo_IJ(x,y,i,j);
            if(valeurCase(grid,i,j)==1)
            {

            }
        }
    }

}
//----------------------------------------------------------------------------------

int valeurCase (TGrid grid, int i, int j)
{
    int val;

    val=grid[i][j];

    return val;
}
*/













