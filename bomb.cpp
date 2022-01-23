#include "bomb.h"


Bomb::Bomb(int posX, int posY, Bomboman *parentBomber)
{
    this->x=posX*fieldW;
    this->y=posY*fieldH;
    this->parentBomber=parentBomber;
    type=bomb;
    setGraphics();
}

Bomb::~Bomb(){
    if(gObject!=nullptr){
        delete gObject;
        gObject=nullptr;
    }
}

void Bomb::update()
{
    if(toDelete && counter!=0){
        counter=1;
    }
    counter--;
    if(counter==0){
        toDelete=true;
        if(type==bomb){
            int n=parentBomber->getPlacedBombs();
            if(n>=1)
                n--;
                parentBomber->setPlacedBombs(n);
            spreadFlame();
        }
    }
}

void Bomb::spreadFlame()
{
    map->addMapObject(x/fieldW,y/fieldH,flame,parentBomber);

    int r=parentBomber->getRange();
    int posX,posY;
    MapObject *wsk;

    bool found=false;
    for(int i=1;i<r+1;i++){
        wsk=map->getMapObjectHead();
        posX=x+fieldW*i;
        posY=y;
        while(wsk->getNextObject()!=nullptr){
            if(wsk->getNextObject()->getX()==posX && wsk->getNextObject()->getY()==posY){
                if(wsk->getNextObject()->getType()==stone || wsk->getNextObject()->getType()==bomb){
                    wsk->getNextObject()->setToDelete();
                    found=true;
                    map->addMapObject(posX/fieldW,posY/fieldH,flame,parentBomber);
                    break;
                }else if(wsk->getNextObject()->getType()==wall){
                    found=true;
                    break;
                }
            }
            wsk=wsk->getNextObject();
        }
        if(!found){
            map->addMapObject(posX/fieldW,posY/fieldH,flame,parentBomber);
        }else{
            break;
        }
    }
    found=false;
    for(int i=1;i<r+1;i++){
        wsk=map->getMapObjectHead();
        posX=x;
        posY=y+fieldH*i;
        while(wsk->getNextObject()!=nullptr){
            if(wsk->getNextObject()->getX()==posX && wsk->getNextObject()->getY()==posY){
                if(wsk->getNextObject()->getType()==stone || wsk->getNextObject()->getType()==bomb){
                    wsk->getNextObject()->setToDelete();
                    found=true;
                    map->addMapObject(posX/fieldW,posY/fieldH,flame,parentBomber);
                    break;
                }else if(wsk->getNextObject()->getType()==wall){
                    found=true;
                    break;
                }
            }
            wsk=wsk->getNextObject();
        }
        if(!found){
            map->addMapObject(posX/fieldW,posY/fieldH,flame,parentBomber);
        }else{
            break;
        }
    }
    found=false;
    for(int i=1;i<r+1;i++){
        wsk=map->getMapObjectHead();
        posX=x-fieldW*i;
        posY=y;
        while(wsk->getNextObject()!=nullptr){
            if(wsk->getNextObject()->getX()==posX && wsk->getNextObject()->getY()==posY){
                if(wsk->getNextObject()->getType()==stone || wsk->getNextObject()->getType()==bomb){
                    wsk->getNextObject()->setToDelete();
                    found=true;
                    map->addMapObject(posX/fieldW,posY/fieldH,flame,parentBomber);
                    break;
                }else if(wsk->getNextObject()->getType()==wall){
                    found=true;
                    break;
                }
            }
            wsk=wsk->getNextObject();
        }
        if(!found){
            map->addMapObject(posX/fieldW,posY/fieldH,flame,parentBomber);
        }else{
            break;
        }
    }
    found=false;
    for(int i=1;i<r+1;i++){
        wsk=map->getMapObjectHead();
        posX=x;
        posY=y-fieldH*i;
        while(wsk->getNextObject()!=nullptr){
            if(wsk->getNextObject()->getX()==posX && wsk->getNextObject()->getY()==posY){
                if(wsk->getNextObject()->getType()==stone || wsk->getNextObject()->getType()==bomb){
                    wsk->getNextObject()->setToDelete();
                    found=true;
                    map->addMapObject(posX/fieldW,posY/fieldH,flame,parentBomber);
                    break;
                }else if(wsk->getNextObject()->getType()==wall){
                    found=true;
                    break;
                }
            }
            wsk=wsk->getNextObject();
        }
        if(!found){
            map->addMapObject(posX/fieldW,posY/fieldH,flame,parentBomber);
        }else{
            break;
        }
    }
}

