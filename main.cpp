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
    bool game=false;
    bool secondeClic=false;

    int i,j;
    int mi=i;
    int mj=j;

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
        convertTo_IJ(452,326,i,j);

        while(!play && !quit)
        {
            inithome(home,screen,play,level);
        }

        while(!level && !quit)
        {
            if (!game)
            {
                initLevel1(grid);
                game=true;
            }

            showGrid(grid);

            showLevel(screen,background,grid,tabImg);


//            mi=3;
//            mj=1;
//            mooveMonster(grid,mi,mj,2,1);

            showGrid(grid);

            showLevel(screen,background,grid,tabImg);

            while (SDL_PollEvent(&event))
            {
                int x=event.button.x;
                int y=event.button.y;


                if (event.button.button==SDL_BUTTON_LEFT && secondeClic==false)
                {

                    cout << "MONSTRE" << endl;
                    convertTo_IJ(x,y,i,j);


                    if(grid[i][j]==1) //vérification existence d'un monstre dans la case
                    {

                        mi=i;
                        mj=j;
                        secondeClic=true;

                    }

                }

                if (event.button.button==SDL_BUTTON_LEFT && (secondeClic==true))
                {

                    convertTo_IJ(x,y,i,j);
                    mooveMonster(grid,mi,mj,2,1);
                }


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

