#ifndef MONSTER
#define MONSTER
#include "function.h"
#include "grid.h"


const int sizeMw=43;
const int sizeMh=45;
//const int NB_MAX_MONSTER=10;

using namespace std;

struct Monster
{
    SDL_Surface *source;
    SDL_Rect lecture;
};

/****************** Nom de la fonction **********************
* initMonter/initMonsterSleep                               *
******************** Auteur , Dates *************************
* Groupe                                                    *
********************* Description ***************************
* Initialisation des monstres                               *
*********************** Entrées *****************************
* un monstre                                                *
*********************** Sorties *****************************
* un monstre                                                *
************************************************************/
void initMonster(Monster &m);
void initMonsterSleep(Monster &m2);

/****************** Nom de la fonction **********************
* showMoster/showMonsterSleep                               *
******************** Auteur , Dates *************************
* Groupe                                                    *
********************* Description ***************************
* affiche les monstres                                      *
*********************** Entrées *****************************
* monstre, case i,j                                         *
*********************** Sorties *****************************
* monstre, écran                                            *
************************************************************/
void showMonster(Monster &m, SDL_Surface *screen, int i, int j);
void showMonsterSleep(Monster &m, SDL_Surface *screen, int i, int j);

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
void mooveMonster (TGrid grid);
#endif // MONSTER

