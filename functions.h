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


SDL_Surface *loadImageWithColorKey(std::string filename, int r, int g, int b);

SDL_Surface *loadImage(std::string filename);

void applySurface(int x, int y, SDL_Surface* source, SDL_Surface* destination, SDL_Rect* clip);

void showMessageScreen(std::string message,int x,int y, TTF_Font *font,int fontSize,SDL_Color textColor,SDL_Surface* &screen);

#endif // FUNCTIONS

