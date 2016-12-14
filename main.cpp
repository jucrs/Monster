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
    SDL_Surface *home2;
    home2=loadImage("home2.png");


    //SDL_Event event;

    bool quit=false;
    bool play=false;
    bool level=false;
    bool game=false;
    bool clic=false;
    bool end=false;


    int numLevel=1;
    int nbLife=3;

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
            inithome(home,screen,home2,play,level,quit);
        }
        //boucle de jeu

        while(!game && !quit)
        {
            //si nouveau niveau
            if (!level)
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
                    break;

 /*               case 4:
                    initLevel3(grid);
                    level=true;
                    break;

                case 5:
                    initLevel3(grid);
                    level=true;
                    break;

                case 6:
                    initLevel3(grid);
                    level=true;
                    break;
*/
                default:
                    applySurface(0,0,tabImg[9],screen,NULL);
                    SDL_Flip(screen);
                    SDL_Delay(2000);
                    game=true;
                    end=true;

                    break;

                }
            }

            //Gestion des vies
            Event(screen,tabImg,clic,quit,grid,x,y,nbLife,level,game, numLevel);

            //affichage du niveau
            showLevel(screen,background,grid,tabImg);
            lost(screen,tabImg,nbLife,game,level);
            finishLevel(screen,tabImg,grid,level,numLevel,end);

            //showGrid(grid);


            SDL_Flip(screen);
        }

        SDL_FreeSurface(screen);

        restartGame(level,game,play,numLevel,nbLife);

    }
    SDL_FreeSurface(screen);

    SDL_Quit();

    return EXIT_SUCCESS;
}

