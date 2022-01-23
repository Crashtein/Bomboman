#include "mapobject.h"
#include "gamemap.h"
#include "gmapobject.h"

gamemap* MapObject::map=nullptr;


MapObject::~MapObject(){

}

void MapObject::setGraphics()
{
    gObject=new GMapObject((int)x,(int)y,type);
}

void MapObject::setX(int x)
{
    this->x=x;
}

void MapObject::setY(int y)
{
    this->y=y;
}

int MapObject::getX()
{
    return x;
}

int MapObject::getY()
{
    return y;
}

void MapObject::setToDelete(bool toDelete)
{
    this->toDelete=toDelete;
}

bool MapObject::getToDelete()
{
    return toDelete;
}

void MapObject::setNextObject(MapObject *obj)
{
    this->nextMapObject=obj;
}

MapObject *MapObject::getNextObject()
{
    return nextMapObject;
}

void MapObject::setType(int type)
{
    this->type=type;
}

int MapObject::getType()
{
    return type;
}

void MapObject::setStaticMap(gamemap *mapParent)
{
    map=mapParent;
}

