#include "obstacle.h"

void initBook (obstacle &b)
{
    b.source=loadImageWithColorKey("sprite.bmp",255,255,255);

    b.lecture->x=75;
    b.lecture->y=70;
    b.lecture->w=68;
    b.lecture->h=69;
}

void initIce (obstacle &g)
{
    g.source=loadImageWithColorKey("sprite.bmp",255,255,255);

    g.lecture->x=0;
    g.lecture->y=70;
    g.lecture->w=64;
    g.lecture->h=68;
}
