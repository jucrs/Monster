#ifndef OBSTACLE_H
#define OBSTACLE_H
#include "function.h"
#include "grid.h"

using namespace std;


struct Obstacle
{

    SDL_Surface *source;
    SDL_Rect lecture;
};


void initSapin(Obstacle &b);
void initGift (Obstacle &g);
void showSapin(Obstacle &b, SDL_Surface *screen, int i, int j);
void showGift (Obstacle &g, SDL_Surface *screen, int i, int j);


void initSpeedUp(Obstacle &su);
void initSpeedDown(Obstacle &sd);
void initSpeedLeft(Obstacle &sl);
void initSpeedRight(Obstacle &sr);
void showSpeedUp (Obstacle &su, SDL_Surface *screen, int i, int j);
void showSpeedDown (Obstacle &sd, SDL_Surface *screen, int i, int j);
void showSpeedLeft (Obstacle &sl, SDL_Surface *screen, int i, int j);
void showSpeedRight(Obstacle &sr, SDL_Surface *screen, int i, int j);

#endif // OBSTACLE_H

