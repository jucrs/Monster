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
            if (!level)
            {
                //choix du design du niveau en fonction de celui-ci
                switch (numLevel)
                {
                case 1:
                    initLevel1(grid);
                    level=true;
                    break;
                default:
                    break;
                }
            }

            //showGrid(grid);

            //affichage du niveau
            showLevel(screen,background,grid,tabImg);

            Event(clic,quit,grid,x,y);
            //                int x=event.button.x;
            //                int y=event.button.y;

//                if (event.button.button==SDL_BUTTON_LEFT && secondeClic==false)
//                {
//                    cout << "MONSTRE" << endl;
//                    convertTo_IJ(x,y,i,j);

//                    if(grid[i][j]==1) //vérification existence d'un monstre dans la case
//                    {
//                        mi=i;
//                        mj=j;
//                        firstClic=true;
//                    }
//                }
//                else if (event.button.button==SDL_BUTTON_LEFT && (firstClic==true))
//                {

//                    convertTo_IJ(x,y,i,j);
//                    secondeClic=true;
//                }
//                else if( event.type == SDL_QUIT )
//                {
//                    quit = true;
//                }
//            }

//            if (firstClic==true && secondeClic==true)
//            {
//                mooveMonster(grid,mi,mj,i,j);
//                mooveObstacle(grid,i,j);
//                firstClic=false;
//                secondeClic=false;
//            }

//            //vérification si le niveau est fini
//            finishLevel(grid,level,numLevel);
        }



    }
    SDL_FreeSurface(screen);

    SDL_Quit();

    return EXIT_SUCCESS;
}

