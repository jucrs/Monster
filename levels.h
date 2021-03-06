#ifndef LEVELS
#define LEVELS

#include "function.h"
#include "monster.h"
#include "grid.h"
#include "obstacle.h"

using TTabImg = array<SDL_Surface*,20>;


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
void initLevel2 (TGrid &grid);
void initLevel3 (TGrid &grid);
void initLevel4 (TGrid &grid);
void initLevel5 (TGrid &grid);
void initLevel6 (TGrid &grid);

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
void showLevel (SDL_Surface *screen, SDL_Surface *background, TGrid grid, TTabImg tabImg);

void fillingTab (TTabImg &tabImg);

void restartGame (bool &level, bool &game, bool &play, int numLevel, int &nbLife);
#endif // LEVELS

