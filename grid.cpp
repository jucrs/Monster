#include "grid.h"

void initGrid(TGrid &grid)
{
    for (int i = 0 ; i < SIZE_H ; i++)
        for (int j = 0 ; j < SIZE_W ; j++)
            grid[i][j] = 0;
}

void convertTo_IJ (int x, int y, int &i, int &j)
{
    i = x % CASE_X;
    j = y % CASE_Y;

}

void convertTo_Px(int &x, int &y, int i, int j)
{
    x = j * CASE_X;
    y = i * CASE_Y;
}

void afficherGrid(TGrid grid, int size, int size2)
{

    for (int i = 0; i < size ; i++)
    {
        for( int j = 0 ; j < size2 ; j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}


