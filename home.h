#ifndef HOME_H
#define HOME_H
#include "function.h"

/****************** Nom de la fonction **********************
* inithome                                                  *
******************** Auteur , Dates *************************
* Groupe                                                    *
********************* Description ***************************
* Initialise le menu                                        *
*********************** Entrées *****************************
* fond d'écran, écran                                       *
*********************** Sorties *****************************
* fond d'écran, écran, play, level, quit                    *
************************************************************/
void inithome(SDL_Surface *home, SDL_Surface *screen, bool &play, bool &game);

#endif // HOME_H
