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

void initSpeedUp(Obstacle &su)
{
    su.lecture.x=61;
    su.lecture.y=224;
    su.lecture.w=43;
    su.lecture.h=43;
}

void initSpeedDown(Obstacle &sd)
{
    sd.lecture.x=14;
    sd.lecture.y=224;
    sd.lecture.w=43;
    sd.lecture.h=43;
}

void initSpeedLeft(Obstacle &sl)
{
    sl.lecture.x=158;
    sl.lecture.y=224;
    sl.lecture.w=43;
    sl.lecture.h=43;
}

void initSpeedRight(Obstacle &sr)
{
    sr.lecture.x=106;
    sr.lecture.y=224;
    sr.lecture.w=43;
    sr.lecture.h=43;
}

void showBook(Obstacle &b, SDL_Surface *screen, int i, int j)
{
    int x,y;

   // b.source=loadImageWithColorKey("sprite.bmp",0,0,0);
    convertTo_Px(x,y,i,j);
    initBook(b);
    applySurface(x,y,b.source,screen, &b.lecture);


}

void showIce (Obstacle &g, SDL_Surface *screen, int i, int j)
{
    int x,y;

    //g.source=loadImageWithColorKey("sprite.bmp",0,0,0);
    convertTo_Px(x,y,i,j);
    initIce(g);
    applySurface(x,y,g.source,screen, &g.lecture);


}

void showSpeedUp (Obstacle &su, SDL_Surface *screen, int i, int j)
{
    int x,y;

   // su.source=loadImageWithColorKey("sprite.bmp",0,0,0);
    convertTo_Px(x,y,i,j);
    initSpeedUp(su);
    applySurface(x,y,su.source,screen, &su.lecture);
}

void showSpeedDown (Obstacle &sd, SDL_Surface *screen, int i, int j)
{
    int x,y;

    //sd.source=loadImageWithColorKey("sprite.bmp",0,0,0);
    convertTo_Px(x,y,i,j);
    initSpeedDown(sd);
    applySurface(x,y,sd.source,screen, &sd.lecture);
}

void showSpeedLeft (Obstacle &sl, SDL_Surface *screen, int i, int j)
{
    int x,y;

    //sl.source=loadImageWithColorKey("sprite.bmp",0,0,0);
    convertTo_Px(x,y,i,j);
    initSpeedLeft(sl);
    applySurface(x,y,sl.source,screen, &sl.lecture);
}

void showSpeedRight (Obstacle &sr, SDL_Surface *screen, int i, int j)
{
    int x,y;

    //sr.source=loadImageWithColorKey("sprite.bmp",0,0,0);
    convertTo_Px(x,y,i,j);
    initSpeedRight(sr);
    applySurface(x,y,sr.source,screen, &sr.lecture);
}












