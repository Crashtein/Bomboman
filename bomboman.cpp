#include "bomboman.h"
#include "bomb.h"


Bomboman::Bomboman(int posX, int posY, int pNumber)
{
    x=posX*fieldW;
    y=posY*fieldH;
    type=player;
    direction=_none;
    directionChanged=true;
    playerNumber=pNumber;
    setGraphics();
}

Bomboman::~Bomboman()
{
    delete gObject;
}


void Bomboman::move(int dir, int num)
{
    if(playerNumber==num && direction!=dir){
        newDirection=dir;
    }
}

void Bomboman::update()
{
    for(int i = speed;i>0;i--){
        switch(newDirection){
        case _up:
            this->moveUp();
            break;
        case _left:
            this->moveLeft();
            break;
        case _down:
            this->moveDown();
            break;
        case _right:
            this->moveRight();
            break;
        default:
            break;
        }
        //    this->consumeCoin();
        //    this->graphicUpdate();
        //    this->meetMonster();
        consumeBonus();
        updateCtrs();
        if(score<0){
            toDelete=true;
        }
        gObject->graphicsUpdate(x,y,newDirection);
        place_bomb();
    }
}

void Bomboman::putBomb(int num)
{
    if(playerNumber==num){
        pBomb=true;
    }
}

void Bomboman::updateCtrs()
{
    map->updatePlayerCtrs(playerNumber,score,speed,nBombs,range);
}

void Bomboman::consumeBonus()   //or get hurt by flame
{
    MapObject *wskMapObject;
    wskMapObject=map->getMapObjectHead();

    while(wskMapObject!=nullptr){
        if((y-wskMapObject->getY()<fieldH*3/4 && y-wskMapObject->getY()>-fieldH*3/4)
                && (x-wskMapObject->getX()<fieldW*3/4 && x-wskMapObject->getX()>-fieldW*3/4)  && (wskMapObject->getType()==nBomb_bonus||wskMapObject->getType()==speed_bonus||wskMapObject->getType()==range_bonus||wskMapObject->getType()==flame) && !wskMapObject->getToDelete()){
            score+=10;
            switch(wskMapObject->getType()){
            case nBomb_bonus:
                nBombs++;
                break;
            case speed_bonus:
                speed++;
                break;
            case range_bonus:
                range++;
                break;
            case flame:
                score-=50;
            default:
                break;
            }
            wskMapObject->setToDelete();
            break;
        }
        wskMapObject=wskMapObject->getNextObject();
    }
}

void Bomboman::place_bomb()
{
    if(pBomb){
        MapObject *wskMapObject;
        int _x=(x+fieldW*0.5)/fieldW;
        int _y=(y+fieldW*0.5)/fieldH;
        _x=_x*fieldW;
        _y=_y*fieldH;
        bool isPossible=true;
        wskMapObject=map->getMapObjectHead();
        while(wskMapObject!=nullptr){
            if(wskMapObject->getX()==_x && wskMapObject->getY()==_y && wskMapObject->getType()==bomb){
                isPossible=false;
                break;
            }
            wskMapObject=wskMapObject->getNextObject();
        }
        if(isPossible && placedBombs<nBombs){
            wskMapObject=map->getMapObjectHead();
            while(wskMapObject->getNextObject()!=nullptr){
                wskMapObject=wskMapObject->getNextObject();
            }
            wskMapObject->setNextObject(new Bomb(_x/fieldW,_y/fieldH,this));
            wskMapObject=wskMapObject->getNextObject();
            wskMapObject->setNextObject(nullptr);
            placedBombs++;
        }
        pBomb=false;
    }
}

void Bomboman::setPlacedBombs(int num)
{
    placedBombs=num;
}

int Bomboman::getPlacedBombs()
{
    return placedBombs;
}

int Bomboman::getRange()
{
    return range;
}

void Bomboman::setGraphics()
{
    gObject=new GMapObject((int)x,(int)y,type,playerNumber);
}

void Bomboman::moveLeft()
{
    MapObject *wskMapObject;
    bool isPossible=true;
    wskMapObject=map->getMapObjectHead();
    while(wskMapObject!=nullptr){
        if(x-wskMapObject->getX()==fieldW && (wskMapObject->getType()==wall || wskMapObject->getType()==stone || wskMapObject->getType()==bomb) && y-wskMapObject->getY()<fieldH && y-wskMapObject->getY()>-fieldH){
            isPossible=false;
            break;
        }
        wskMapObject=wskMapObject->getNextObject();
    }
    if(y==map->getMapHeight()*fieldH || y==-fieldW){
        isPossible=false;
    }
    if(isPossible){
        if(x==-fieldW){
            x=map->getMapWidth()*fieldW;
        }else{
            x-=map->getGameSpeed();
        }
        if(newDirection==_left && direction!=_left){
            directionChanged=true;
            direction=_left;
        }
    }else{
        switch(direction){
        case _up:
            this->moveUp();
            break;
        case _down:
            this->moveDown();
            break;
        case _right:
            this->moveRight();
            break;
        default:
            break;
        }
    }
}

void Bomboman::moveRight()
{
    MapObject *wskMapObject;
    bool isPossible=true;
    wskMapObject=map->getMapObjectHead();
    while(wskMapObject!=nullptr){
        if(x-wskMapObject->getX()==-fieldW && (wskMapObject->getType()==wall || wskMapObject->getType()==stone || wskMapObject->getType()==bomb) && y-wskMapObject->getY()<fieldH && y-wskMapObject->getY()>-fieldH){
            isPossible=false;
            break;
        }
        wskMapObject=wskMapObject->getNextObject();
    }
    if(y==map->getMapHeight()*fieldH || y==-fieldW){
        isPossible=false;
    }
    if(isPossible){
        if(x==map->getMapWidth()*fieldW){
            x=-fieldW;
        }else{
            x+=map->getGameSpeed();
        }
        if(newDirection==_right && direction!=_right){
            directionChanged=true;
            direction=_right;
        }
    }else{
        switch(direction){
        case _up:
            this->moveUp();
            break;
        case _left:
            this->moveLeft();
            break;
        case _down:
            this->moveDown();
            break;
        default:
            break;
        }
    }
}

void Bomboman::moveUp()
{
    MapObject *wskMapObject;
    bool isPossible=true;
    wskMapObject=map->getMapObjectHead();
    while(wskMapObject!=nullptr){
        if(y-wskMapObject->getY()==fieldH && (wskMapObject->getType()==wall || wskMapObject->getType()==stone || wskMapObject->getType()==bomb) && x-wskMapObject->getX()<fieldW && x-wskMapObject->getX()>-fieldW){
            isPossible=false;
            break;
        }
        wskMapObject=wskMapObject->getNextObject();
    }
    if(x==map->getMapWidth()*fieldW || x==-fieldW){
        isPossible=false;
    }
    if(isPossible){
        if(y==-fieldH){
            y=map->getMapHeight()*fieldH;
        }else{
            y-=map->getGameSpeed();
        }
        if(newDirection==_up && direction!=_up){
            directionChanged=true;
            direction=_up;
        }
    }else{
        switch(direction){
        case _left:
            this->moveLeft();
            break;
        case _down:
            this->moveDown();
            break;
        case _right:
            this->moveRight();
            break;
        default:
            break;
        }
    }
}

void Bomboman::moveDown()
{
    MapObject *wskMapObject;
    bool isPossible=true;
    wskMapObject=map->getMapObjectHead();
    while(wskMapObject!=nullptr){
        if(y-wskMapObject->getY()==-fieldH && (wskMapObject->getType()==wall || wskMapObject->getType()==stone || wskMapObject->getType()==bomb) && x-wskMapObject->getX()<fieldW && x-wskMapObject->getX()>-fieldW){
            isPossible=false;
            break;
        }
        wskMapObject=wskMapObject->getNextObject();
    }
    if(x==map->getMapWidth()*fieldW || x==-fieldW){
        isPossible=false;
    }
    if(isPossible){
        if(y==map->getMapHeight()*fieldH){
            y=-fieldH;
        }else{
            y+=map->getGameSpeed();
        }
        if(newDirection==_down && direction!=_down){
            directionChanged=true;
            direction=_down;
        }
    }else{
        switch(direction){
        case _up:
            this->moveUp();
            break;
        case _left:
            this->moveLeft();
            break;
        case _right:
            this->moveRight();
            break;
        default:
            break;
        }
    }
}

