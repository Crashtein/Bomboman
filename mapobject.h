/**
 * \class MapObject
 *
 * \brief Klasa obiektu mapy gry
 *
 * Klasa obiektu gry. Klasa wirtualna. Baza dla obiektów mapy.
 *
 * \author Paweł Kluk
 *
 * \version 1.1
 *
 * \date 2020/09/28 18:16:20
 *
 * Contact: kluk.pl@gmail.com
 *
 */
#ifndef MAPOBJECT_H
#define MAPOBJECT_H

#include "gamemap.h"
class GMapObject;

//bazowa klasa dla polimorficznych obiektów mapy
class MapObject
{
public:
    ///destruktor
    virtual ~MapObject()=0;
    ///update - aktualizacja obiektu
    virtual void update()=0;
    ///ruch
    virtual void move(int dir,int num)=0;
    ///utworzenie obiektu graficznego GMapObject i inicjalizacja grafiki
    virtual void setGraphics();
    ///ustawienie chęci postawienia bomby
    virtual void putBomb(int num)=0;
    ///Set X
    virtual void setX(int x);
    ///Set Y
    virtual void setY(int y);
    ///Get X
    virtual int getX();
    ///Get Y
    virtual int getY();
    ///Ustawia flagę toDelete - obiekt do skasowania w następnym update
    virtual void setToDelete(bool toDelete=true);
    ///zwraca czy obiekt jest do skasowania
    virtual bool getToDelete();
    ///ustawiwa wskaźnik na następny obiekt
    virtual void setNextObject(MapObject *obj);
    ///zwraca wskaźnik na następny obiekt
    virtual MapObject* getNextObject();
    ///ustawia typ obiektu
    virtual void setType(int type);
    ///zwraca typ obiektu
    virtual int getType();
    ///ustawia wskaźnik na gamemap dla wszystkich obiektów tej klasy
    static void setStaticMap(gamemap* mapParent);

protected:
    ///statyczny wskaźnik na gamemap, zarządzający wszystkimi MapObject
    static gamemap *map;
    ///wskaznik na nastepny element listy
    MapObject *nextMapObject=nullptr;
    ///wskaznik na osobisty obiekt graficzny
    GMapObject *gObject;

    ///numer gracza
    int playerNumber=0;
    ///wspolrzedna x
    int x;
    ///wspolrzedna y
    int y;
    ///flaga czy obiekt mapy do skasowania
    bool toDelete=false;
    ///typ obiektu mapy
    int type=-1;
};


#endif // MAPOBJECT_H
