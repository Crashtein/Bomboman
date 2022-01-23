#include "gmapobject.h"

//inicjalizacja static val
QGraphicsScene* GMapObject::scene=nullptr;

//const int uninitialized = -1;
//const int wall = 0;
//const int stone = 1;
//const int empty = 2;
//const int player = 3;
//const int speed_bonus = 4;
//const int range_bonus = 5;
//const int nBomb_bonus = 6;
//const int flame = 7;
//const int bot = 8;

GMapObject::GMapObject(int x, int y, int type, int playerN)
{
    this->posX=x;
    this->posY=y;
    this->direction=_right;

    switch(type){
    case wall:
        pix=QPixmap(":/Images/bomboman_data/wall.png");
        break;
    case stone:
        pix=QPixmap(":/Images/bomboman_data/stone.png");
        break;
    case player:
        switch(playerN){
        case 1:
            pix=QPixmap(":/Images/bomboman_data/player_one.png");
            break;
        case 2:
            pix=QPixmap(":/Images/bomboman_data/player_two.png");
            break;
        case 3:
            pix=QPixmap(":/Images/bomboman_data/player_three.png");
            break;
        case 4:
            pix=QPixmap(":/Images/bomboman_data/player_four.png");
            break;
        default:
            break;
        }
        break;
    case speed_bonus:
        pix=QPixmap(":/Images/bomboman_data/speed_bonus.png");
        break;
    case range_bonus:
        pix=QPixmap(":/Images/bomboman_data/rangebonus.png");
        break;
    case nBomb_bonus:
        pix=QPixmap(":/Images/bomboman_data/nBomb_bonus.png");
        break;
    case flame:
        pix=QPixmap(":/Images/bomboman_data/flame.png");
        break;
    case bomb:
        pix=QPixmap(":/Images/bomboman_data/bomb.png");
        break;
    case bot:
        switch(playerN){
        case 5:
            pix=QPixmap(":/Images/bomboman_data/player_five.png");
            break;
        case 6:
            pix=QPixmap(":/Images/bomboman_data/player_six.png");
            break;
        case 7:
            pix=QPixmap(":/Images/bomboman_data/player_seven.png");
            break;
        case 8:
            pix=QPixmap(":/Images/bomboman_data/player_eight.png");
            break;
        default:
            break;
        }
        break;
    default:
        break;
    }
    pixItem=new QGraphicsPixmapItem;
    graphicsUpdate();
}

GMapObject::~GMapObject()
{
    delete pixItem;
}

void GMapObject::graphicsUpdate()
{
    switch(direction){
    case _up:
        pixItem->setPixmap(QPixmap(pix.transformed(QTransform().rotate(270))));
        break;
    case _left:
        pixItem->setPixmap(QPixmap(pix.transformed(QTransform().scale(-1,1))));
        break;
    case _down:
        pixItem->setPixmap(QPixmap(pix.transformed(QTransform().rotate(90))));
        break;
    default:    //none or right
        pixItem->setPixmap(pix);
        break;
    }
    pixItem->setPos(posX,posY);
    scene->addItem(pixItem);
}

void GMapObject::graphicsUpdate(int x, int y, int direction)
{
    if(posX>x){
        this->direction=_left;
    }else if(posX<x){
        this->direction=_right;
    }else if(posY<y){
        this->direction=_down;
    }else if(posY>y){
        this->direction=_up;
    }else{
       this->direction=direction;
    }
    posX=x;
    posY=y;
    graphicsUpdate();
}

void GMapObject::setStaticScene(QGraphicsScene *parentScene)
{
    scene=parentScene;
}
