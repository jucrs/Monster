#include "obstacle.h"
#include "levels.h"


void fillingTab (TTabImg &tabImg)
{
    tabImg[0]=loadImageWithColorKey("monster.png",0,255,0);
    tabImg[1]=loadImageWithColorKey("snowman.png",0,255,0);
    tabImg[2]=loadImageWithColorKey("gift.png",0,255,0);
    tabImg[3]=loadImageWithColorKey("fit.png",0,255,0);
    tabImg[4]=loadImageWithColorKey("arrowDown.png",0,255,0);
    tabImg[5]=loadImageWithColorKey("arrowUp.png",0,255,0);
    tabImg[6]=loadImageWithColorKey("arrowRight.png",0,255,0);
    tabImg[7]=loadImageWithColorKey("arrowLeft.png",0,255,0);
    tabImg[8]=loadImage("finishlevel.png");
    tabImg[9]=loadImage("finishgame.png");
    tabImg[10]=loadImage("gameOver.png");
    tabImg[11]=loadImageWithColorKey("heart.png",0,255,0);
}

void switchObstacle (SDL_Surface *screen,TGrid &grid,TTabImg &tabImg, int &mi, int &mj,int i, int j,int nbLife,bool &level,bool &game)
{
    switch (grid[i][j])
    {
    case 2: //si l'obstacle est un bonhome de neige
        grid[i][j]=1;
        break;
    case 3: //si l'obstacle est un cadeau
        grid[i][j]=0;
        break;
    case 5: //si l'obstacle est une flèche vers le bas
        grid[mi][mj]=0;
        grid[mi-1][mj]=1;
        grid[mi][mj]=0;
        mi--;
        i--;
        moveMonster(screen,grid,tabImg,mi,mj,i,j,nbLife,level,game);
        break;
    case 6: //si l'obstacle est une flèche vers le haut
        break;
    case 7: //si l'obstacle est une flèche vers la droite
        break;
    case 8: //si l'obstacle est une flèche vers la gauche
        break;
    }
}


void lost (SDL_Surface *screen, TTabImg &tabImg,int nbLife,bool &game, bool &level)
{
    switch (nbLife)
    {
    case 1:
        applySurface(25,67,tabImg[11],screen,NULL);
        level=false;
        break;
    case 2:
        applySurface(25,67,tabImg[11],screen,NULL);
        applySurface(25,123,tabImg[11],screen,NULL);
        level=false;
        break;
    case 3:
        applySurface(25,67,tabImg[11],screen,NULL);
        applySurface(25,123,tabImg[11],screen,NULL);
        applySurface(25,169,tabImg[11],screen,NULL);
        level=false;
        break;
    default:
        {
            applySurface(0,0,tabImg[10],screen,NULL);
            SDL_Delay(1000);
            game=true;
            break;
        }

    }SDL_Flip(screen);
}


