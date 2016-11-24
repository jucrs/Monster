#ifndef GRID_H
#define GRID_H
#include "functions.h"

using namespace std;

//Constantes
const int BORDER_X = 21;
const int BORDER_Y = 34;
const int CASE_X = 50;
const int CASE_Y = 54;

// Défintion grille
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
* Télécharge une image en enlevant une couleur              *
*********************** Entrées *****************************
* nom de l'image et les couleurs rouge/vert/bleu            *
*********************** Sorties *****************************
* l'image avec la couleur enlevé                            *
************************************************************/
void convertTo_IJ (int x, int y,int &i, int &j);

/****************** Nom de la fonction **********************
* loadImageWithColorKey                                     *
******************** Auteur , Dates *************************
* Groupe / 23 novembre                                      *
********************* Description ***************************
* Télécharge une image en enlevant une couleur              *
*********************** Entrées *****************************
* nom de l'image et les couleurs rouge/vert/bleu            *
*********************** Sorties *****************************
* l'image avec la couleur enlevé                            *
************************************************************/
void convertTo_Px (int &x, int &y, int i, int j);

void afficherGrid(TGrid grid);

#endif // GRID_H
