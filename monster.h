#ifndef MONSTER
#define MONSTER
#include "function.h"
#include "grid.h"


const int sizeMw=43;
const int sizeMh=45;
//const int NB_MAX_MONSTER=10;

using namespace std;

struct Monster
{
    SDL_Surface *source;
    SDL_Rect lecture;
};

void initMonster(Monster &m);
void initMonsterSleep(Monster &m2);
void showMonster(Monster &m, SDL_Surface *screen, int i, int j);
void showMonsterSleep(Monster &m, SDL_Surface *screen, int i, int j);
#endif // MONSTER

