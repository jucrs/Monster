#include "levels.h"

using namespace std;


void initLevel1 (TGrid &grid)
{

   initGrid(grid);
   grid[2][4]=1;

   showGrid(grid);

}

void showLevel ()
{
    for (int i=0; i < SIZE_H; i++)
    {
        for (int j=0; j < SIZE_W; j++)
        {
            switch (grid[i][j])
            {
            case 1:

                convertTo_Px(x,y,i,j);
                initMonster(lvl.tabMonster[0],screen);
                applySurface(x,y,lvl.tabMonster[0].source,screen,lvl.tabMonster[0].lecture);
                break;

            default:
                break;
            }
        }
    }
}
