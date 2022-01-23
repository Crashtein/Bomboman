#include "flame.h"

Flame::Flame(int posX, int posY, Bomboman *parentB)
{
    this->x=posX*fieldW;
    this->y=posY*fieldH;
    parentBomber=parentB;
    type=flame;
    setGraphics();
}

Flame::~Flame()
{
    if(gObject!=nullptr){
        delete gObject;
        gObject=nullptr;
    }
}

void Flame::update()
{
    counter--;
    if(counter<=0){
        toDelete=true;
    }
}

