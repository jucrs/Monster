#ifndef GRID_H
#define GRID_H
#include "functions.h"
#include "levels.h"
//#include "monster.h"

using namespace std;

//Constantes
const int BORDER_X = 250;
const int BORDER_Y = 50;
const int CASE_X = 100;
const int CASE_Y = 100;

/**************** Définition de la grille *******************
* 1=monster                                                 *
* 2=sleeping monster                                        *
* 3=ice                                                     *
* 4=book                                                    *
* 5=speed down                                              *
* 6=speed up                                                *
* 7=speed right                                             *
* 8=speed left                                              *
*************************************************************/
const int SIZE_H = 9;
const int SIZE_W = 5;
using TGrid = array<array<int,SIZE_W>,SIZE_H>;

/****************** Nom de la fonction **********************
* initGrid                                                  *
******************** Auteur , Dates *************************
* Groupe / 23 novembre                                      *
********************* Description ***************************
* Initialisation d'une grille                               *
*********************** Entrées *****************************
* Une grille                                                *
*********************** Sorties *****************************
* Une grille contenant que des zéro                         *
************************************************************/
void initGrid(TGrid &grid);

/****************** Nom de la fonction **********************
* convertTo_IJ                                              *
******************** Auteur , Dates *************************
* Groupe / 23 novembre                                      *
********************* Description ***************************
* Convertit les coordonnées de l'écran choisi en coordonnées*
* de la grille                                              *
*********************** Entrées *****************************
* coordonnées x, y                                          *
*********************** Sorties *****************************
* coordonnées i, j                                          *
************************************************************/
void convertTo_IJ (int x, int y,int &i, int &j);

/****************** Nom de la fonction **********************
* convertTo_Px                                              *
******************** Auteur , Dates *************************
* Groupe / 23 novembre                                      *
********************* Description ***************************
* Convertit les coordonnées de la grille choisi en          *
* coordonnées de l'écran                                    *
*********************** Entrées *****************************
* coordonnées i, j                                          *
*********************** Sorties *****************************
* coordonnées x, y                                          *
************************************************************/
void convertTo_Px (int &x, int &y, int i, int j);

/****************** Nom de la fonction **********************
* showGrid                                                  *
******************** Auteur , Dates *************************
* Groupe / 23 novembre                                      *
********************* Description ***************************
* Affiche la grille sur le terminal                         *
*********************** Entrées *****************************
* La grille                                                 *
*********************** Sorties *****************************
* Aucune                                                    *
************************************************************/
void showGrid(TGrid grid);

void placeElem (Level &lvl, SDL_Surface *screen, TGrid grid, int x, int y);

#endif // GRID_H
