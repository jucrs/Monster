#include "obstacle.h"

void initBook (Obstacle &b)
{
    b.lecture.x=75;
    b.lecture.y=70;
    b.lecture.w=68;
    b.lecture.h=69;
}

void initIce (Obstacle &g)
{
    g.lecture.x=0;
    g.lecture.y=70;
    g.lecture.w=64;
    g.lecture.h=68;
}

void showBook(Obstacle &b, SDL_Surface *screen, int i, int j)
{
    int x,y;

    b.source=loadImageWithColorKey("sprite.bmp",255,255,255);
    convertTo_Px(x,y,i,j);
    initBook(b);
    applySurface(x,y,b.source,screen, &b.lecture);


}

void showIce (Obstacle &g, SDL_Surface *screen, int i, int j)
{
    int x,y;

     g.source=loadImageWithColorKey("sprite.bmp",255,255,255);
    convertTo_Px(x,y,i,j);
    initIce(g);
    applySurface(x,y,g.source,screen, &g.lecture);


}
