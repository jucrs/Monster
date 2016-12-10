#include <iostream>
#include "function.h"
#include "levels.h"
#include "home.h"
#include "grid.h"
#include "event.h"

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

    //SDL_Event event;

    bool quit=false;
    bool play=false;
    bool level=false;
    bool game=false;
    bool clic=false;


    int numLevel=1;

    TGrid grid;
    TTabImg tabImg;

    //Remplissage du tableau d'images
    fillingTab(tabImg);
    int x, y;

    while(!quit)
    {

        while(!play && !quit)
        {
            //mise en place du menu
            inithome(home,screen,play,level);
        }
        //boucle de jeu
        while(!game && !quit)
        {
            //si nouveau niveau
            if (!level && numLevel<=3)
            {

                //choix du design du niveau en fonction de celui-ci
                switch (numLevel)
                {
                case 1:
                    initLevel1(grid);
                    level=true;
                    break;

                case 2:

                    initLevel2(grid);
                    level=true;
                    break;

                case 3:
                    initLevel3(grid);
                    level=true;

                }
            }

            if(numLevel>3)
            {
                quit=true;
            }


            //affichage du niveau
            showLevel(screen,background,grid,tabImg);

            Event(clic,quit,grid,x,y);

            finishLevel(grid,level,numLevel);

        }



    }
    SDL_FreeSurface(screen);

    SDL_Quit();

    return EXIT_SUCCESS;
}

