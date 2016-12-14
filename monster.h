#ifndef MONSTER
#define MONSTER
#include "function.h"
#include "grid.h"
#include "levels.h"

const int sizeMw=60;
const int sizeMh=60;
using TTabImg = array<SDL_Surface*,20>;

/****************** Nom de la fonction **********************
* mooveMonster                                              *
******************** Auteur , Dates *************************
* Groupe                                                    *
********************* Description ***************************
* Permet le mouvement du monstre                            *
*********************** Entrées *****************************
* la grille                                                 *
*********************** Sorties *****************************
* la grille                                                 *
************************************************************/
void moveMonster (SDL_Surface *screen, TGrid &grid, TTabImg &tabImg, int &mi, int &mj, int &i, int &j, int &nbLife,bool &level,bool &game);


#endif // MONSTER

