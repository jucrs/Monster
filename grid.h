#ifndef GRID_H
#define GRID_H
#include "functions.h"

using namespace std;

//Constantes
const int BORDER_X = 19;
const int BORDER_Y = 34;
const int CASE_X = 50;
const int CASE_Y = 54;

// Défintion grille
const int SIZE_H = 9;
const int SIZE_W = 5;
using TGrid = array<array<int,SIZE_W>,SIZE_H>;

void initGrid(TGrid &grid);
void convertTo_IJ (int x, int y,int &i, int &j);
void convertTo_Px (int &x, int &y, int i, int j);

void afficherGrid(TGrid grid, int size, int size2);

#endif // GRID_H
