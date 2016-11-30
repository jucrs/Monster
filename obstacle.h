#ifndef OBSTACLE_H
#define OBSTACLE_H
#include "functions.h"

using namespace std;

struct obstacle
{
    SDL_Surface *source;
    SDL_Rect *lecture;
};

void initBook(obstacle &b);
void initIce (obstacle &g);

#endif // OBSTACLE_H

