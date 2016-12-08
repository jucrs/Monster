#ifndef FUNCTIONS
#define FUNCTIONS

#include <iostream>
#include <array>
#include <cstdlib>
#include <string>
#include <sstream>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>

const int SCREEN_WIDTH=700;
const int SCREEN_HEIGHT=700;
const int SCREEN_BPP=32;

using namespace std;

/****************** Nom de la fonction **********************
* loadImageWithColorKey                                     *
******************** Auteur , Dates *************************
* Professeur /                       *
********************* Description ***************************
* Télécharge une image en enlevant une couleur              *
*********************** Entrées *****************************
* nom de l'image et les couleurs rouge/vert/bleu            *
*********************** Sorties *****************************
* l'image avec la couleur enlevé                            *
************************************************************/
SDL_Surface *loadImageWithColorKey(string filename, int r, int g, int b);

/****************** Nom de la fonction **********************
* loadImage                                                 *
******************** Auteur , Dates *************************
* Professeurs /                      *
********************* Description ***************************
* Vous décrivez ici ce que fait cette fonction              *
*********************** Entrées *****************************
* Vous décrivez ici les données en entrée de la fonction    *
*********************** Sorties *****************************
* Vous détaillez ici ce que renvoie la fonction             *
************************************************************/
SDL_Surface *loadImage(string filename);

/****************** Nom de la fonction **********************
* applySurface                                              *
******************** Auteur , Dates *************************
* Professeurs /                       *
********************* Description ***************************
* Envoie dans la mémoire tampon  de l'élément               *
*********************** Entrées *****************************
* Positionnement du future élément et sa source             *
*********************** Sorties *****************************
* L'écran modifié et le rectangle de lectur s'il y en a un  *
************************************************************/
void applySurface(int x, int y, SDL_Surface *source, SDL_Surface *destination, SDL_Rect *clip);



#endif // FUNCTIONS

