#ifndef MONSTER
#define MONSTER
#include "function.h"
#include "grid.h"

const int sizeMw=60;
const int sizeMh=60;

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
void mooveMonster (TGrid &grid, int &mi, int &mj, int &i, int &j);

void finishLevel(TGrid grid, bool &level, int numLevel);
#endif // MONSTER

