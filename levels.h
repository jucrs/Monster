#ifndef LEVELS
#define LEVELS

#include "function.h"
#include "monster.h"
#include "grid.h"
#include "obstacle.h"



/****************** Nom de la fonction **********************
* initlevel1                                                *
******************** Auteur , Dates *************************
* Groupe                                                    *
********************* Description ***************************
* Initialise le niveau 1                                    *
*********************** Entrées *****************************
* la grille                                                 *
*********************** Sorties *****************************
* la grille                                                 *
************************************************************/
void initLevel1 (TGrid &grid);

/****************** Nom de la fonction **********************
* shwoLevel                                                 *
******************** Auteur , Dates *************************
* Groupe                                                    *
********************* Description ***************************
* Affiche le niveau                                         *
*********************** Entrées *****************************
* fond d'écran, écran, grille                               *
*********************** Sorties *****************************
* fond d'écran, écran                                       *
************************************************************/
void showLevel (SDL_Surface *screen, SDL_Surface *background, TGrid grid);


bool caseFree (TGrid grid, int i, int j);
#endif // LEVELS

