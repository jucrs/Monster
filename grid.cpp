#include "grid.h"

void initGrid(TGrid &grid)
{
    for (int i = 0 ; i < SIZE_H ; i++)
        for (int j = 0 ; j < SIZE_W ; j++)
            grid[i][j] = 0;
}

void convertTo_IJ (int x, int y, int &i, int &j)
{
    i = (y-BORDER_Y)/ CASE_Y;
    j = (x-BORDER_X)/ CASE_X;

    cout << i << " " << j << endl;

}

void convertTo_Px(int &x, int &y, int i, int j)
{
    x = BORDER_X + j * CASE_Y + 5;
    y = BORDER_Y + i * CASE_X + 5;
}

void showGrid(TGrid grid)
{

    for (int i = 0; i < SIZE_H ; i++)
    {
        for( int j = 0 ; j < SIZE_W ; j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}


