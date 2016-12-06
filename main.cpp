#include <iostream>
#include "function.h"
#include "levels.h"
#include "home.h"
#include "grid.h"

using namespace std;

int main()
{
    SDL_Init(SDL_INIT_EVERYTHING);

    //Mise en place de l'écran
    SDL_Surface *screen;
    screen=SDL_SetVideoMode(SCREEN_WIDTH,SCREEN_HEIGHT,SCREEN_BPP,SDL_SWSURFACE);

    //Définition des fonds d'écran
    SDL_Surface *background;
    background=loadImage("background.png");
    SDL_Surface *home;
    home=loadImage("home.png");

    SDL_Event event;

    bool quit=false;
    bool play=false;
    bool level=false;

    TGrid grid;

    TTabImg tabImg;

    tabImg[0]=loadImage("monster.png");
    tabImg[1]=loadImage("snowman.png");
    tabImg[2]=loadImage("gift.png");
    tabImg[3]=loadImage("fit.png");
//    tabImg[4]=loadImageWithColorKey("sprite.bmp",255,255,255);
//    tabImg[5]=loadImageWithColorKey("sprite.bmp",255,255,255);
//    tabImg[6]=loadImageWithColorKey("sprite.bmp",255,255,255);
//    tabImg[7]=loadImageWithColorKey("sprite.bmp",255,255,255);

    while(!quit)
    {

        while(!play && !quit)
        {
            inithome(home,screen,play,level,quit);
        }

        while(!level && !quit)
        {
            initLevel1(grid);
            showLevel(screen,background,grid,tabImg);

            mooveMonster(grid);

            int x=event.button.x;
            int y=event.button.y;


            while (SDL_PollEvent(&event))
            {
                if( event.type == SDL_QUIT )
                {
                    quit = true;
                }
            }
        }

    }
    SDL_FreeSurface(screen);

    SDL_Quit();

    return EXIT_SUCCESS;
}

