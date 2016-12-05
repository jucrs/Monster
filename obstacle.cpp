#include "obstacle.h"

void initSapin (Obstacle &b)
{
    b.lecture.x=75;
    b.lecture.y=70;
    b.lecture.w=68;
    b.lecture.h=69;
}

void initGift (Obstacle &g)
{
    g.lecture.x=0;
    g.lecture.y=70;
    g.lecture.w=64;
    g.lecture.h=68;
}

void showSapin(Obstacle &b, SDL_Surface *screen, int i, int j)
{
    int x,y;

    b.source=loadImage("sapin.png");
    convertTo_Px(x,y,i,j);
    initSapin(b);
    applySurface(x,y,b.source,screen,NULL);


}

void showGift (Obstacle &g, SDL_Surface *screen, int i, int j)
{
    int x,y;

     g.source=loadImage("gift.png");
    convertTo_Px(x,y,i,j);
    initGift(g);
    applySurface(x,y,g.source,screen,NULL);


}
