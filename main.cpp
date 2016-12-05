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
    //Monster m,ms;
    //Obstacle g,b,su,sd,sl,sr;

  //  m.source=loadImageWithColorKey("sprite.bmp",0,0,0);
  //  ms.source=loadImageWithColorKey("sprite.bmp",0,0,0);
  //  g.source=loadImageWithColorKey("sprite.bmp",0,0,0);
  //  b.source=loadImageWithColorKey("sprite.bmp",0,0,0);
  //  su.source=loadImageWithColorKey("sprite.bmp",0,0,0);
  //  sd.source=loadImageWithColorKey("sprite.bmp",0,0,0);
  //  sl.source=loadImageWithColorKey("sprite.bmp",0,0,0);
  // sr.source=loadImageWithColorKey("sprite.bmp",0,0,0);


    while(!quit)
    {

        while(!play && !quit)
        {
            inithome(home,screen,play,level,quit);
        }

        while(!level && !quit)
        {
            initLevel1(grid);
            showLevel(screen,background,grid);

            int x=event.button.x;
            int y=event.button.y;

            while (SDL_PollEvent(&event))
            {
                if( event.type == SDL_QUIT )
                {
                    quit = true;
                }
                else if ((x>75) && (x<120) && (y>506) && (y<551))
                {
                    if (event.button.button==SDL_BUTTON_LEFT)
                    {
                        level=true;
                        play=false;
                    }
                }

            }
        }

    }
    SDL_FreeSurface(screen);

    SDL_Quit();

    return EXIT_SUCCESS;
}

