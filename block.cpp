#include "block.h"

//const int speed_bonus = 4;
//const int range_bonus = 5;
//const int nBomb_bonus = 6;

Block::Block(int posX, int posY, int type){
    this->x=posX*fieldW;
    this->y=posY*fieldH;
    this->type=type;
    setGraphics();
}

Block::~Block()
{
    delete gObject;

    if(toDelete && type==stone){
        int typ =rand()%bunus_param+4; //rand, 4,5,6 to bonusy, reszta nie daje bonusu
        switch(typ){
        case speed_bonus:
            map->addMapObject(x/fieldW,y/fieldH,speed_bonus);
            break;
        case range_bonus:
            map->addMapObject(x/fieldW,y/fieldH,range_bonus);
            break;
        case nBomb_bonus:
            map->addMapObject(x/fieldW,y/fieldH,nBomb_bonus);
            break;
        default:
            break;
        }
    }
}
