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

<<<<<<< HEAD
void initSapin(Obstacle &b);
void initGift (Obstacle &g);
void showSapin(Obstacle &b, SDL_Surface *screen, int i, int j);
void showGift (Obstacle &g, SDL_Surface *screen, int i, int j);

=======
void initBook(Obstacle &b);
void initIce (Obstacle &g);
void showBook(Obstacle &b, SDL_Surface *screen, int i, int j);
void showIce (Obstacle &g, SDL_Surface *screen, int i, int j);
void initSpeedUp(Obstacle &su);
void initSpeedDown(Obstacle &sd);
void initSpeedLeft(Obstacle &sl);
void initSpeedRight(Obstacle &sr);
void showSpeedUp (Obstacle &su, SDL_Surface *screen, int i, int j);
void showSpeedDown (Obstacle &sd, SDL_Surface *screen, int i, int j);
void showSpeedLeft (Obstacle &sl, SDL_Surface *screen, int i, int j);
void showSpeedRight (Obstacle &sr, SDL_Surface *screen, int i, int j);
>>>>>>> 0413ed8aaab7fc5b2c13695f56615815cae3f299
#endif // OBSTACLE_H

