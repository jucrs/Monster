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

/****************** Nom de la fonction **********************
*                                             *
******************** Auteur , Dates *************************
* Nom/Date : Éventuellement la version                      *
********************* Description ***************************
* Télécharge une image en enlevant une couleur              *
*********************** Entrées *****************************
* nom de l'image et les couleurs rouge/vert/bleu            *
*********************** Sorties *****************************
* l'image avec la couleur enlevé                            *
************************************************************/
SDL_Surface *loadImageWithColorKey(std::string filename, int r, int g, int b);

/****************** Nom de la fonction **********************
* NOM_FONCTION                                              *
******************** Auteur , Dates *************************
* Nom/Date : Éventuellement la version                      *
********************* Description ***************************
* Vous décrivez ici ce que fait cette fonction              *
*********************** Entrées *****************************
* Vous décrivez ici les données en entrée de la fonction    *
*********************** Sorties *****************************
* Vous détaillez ici ce que renvoie la fonction             *
************************************************************/
SDL_Surface *loadImage(std::string filename);

/****************** Nom de la fonction **********************
* NOM_FONCTION                                              *
******************** Auteur , Dates *************************
* Nom/Date : Éventuellement la version                      *
********************* Description ***************************
* Envoie dans la mémoire tampon  de l'élément               *
*********************** Entrées *****************************
* Positionnement du future élément et sa source             *
*********************** Sorties *****************************
* L'écran modifié et le rectangle de lectur s'il y en a un  *
************************************************************/
void applySurface(int x, int y, SDL_Surface* source, SDL_Surface* destination, SDL_Rect* clip);

/****************** Nom de la fonction **********************
* NOM_FONCTION                                              *
******************** Auteur , Dates *************************
* Nom/Date : Éventuellement la version                      *
********************* Description ***************************
* Vous décrivez ici ce que fait cette fonction              *
*********************** Entrées *****************************
* Vous décrivez ici les données en entrée de la fonction    *
*********************** Sorties *****************************
* Vous détaillez ici ce que renvoie la fonction             *
************************************************************/
void showMessageScreen(std::string message,int x,int y, TTF_Font *font,int fontSize,SDL_Color textColor,SDL_Surface* &screen);

#endif // FUNCTIONS

