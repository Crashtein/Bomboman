/**
 * \class GMapObject
 *
 * \brief Klasa graficznego obiektu dla obiektu mapy gry
 *
 * Klasa obiektów reprezentacji graficznej obiektów mapy.
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
#ifndef GMAPOBJECT_H
#define GMAPOBJECT_H

#include <QPixmap>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include "mapobject.h"
#include "gamemap.h"

//obiekt grafiki obiektu mapy
class GMapObject
{
public:
    ///konstruktor
    GMapObject(int x,int y,int type,int playerN=0);
    ///destruktor
    ~GMapObject();
    ///Rysowanie przy konstrukcji obiektu
    void graphicsUpdate();
    ///Update grafiki w trakcie gry - po stworzeniu
    void graphicsUpdate(int x, int y, int direction=0);
    ///ustawia wskaźnik na QGraphicsScene z game_window przedstawiające wszystkie graficzne obiekty gry
    static void setStaticScene(QGraphicsScene* parentScene);

protected:
    ///QGraphicsScene z graficznymi obiektami wszystkich obiektów gamemap
    static QGraphicsScene *scene;
    ///pozycja x w pikselach
    int posX;
    ///pozycja y w pikselach
    int posY;
    ///kierunek grafiki - dla obrotu
    int direction;
    ///mapa graficzna
    QPixmap pix;
    ///Obiekt graficzny do ustawienia na scene
    QGraphicsPixmapItem *pixItem;
};

#endif // GMAPOBJECT_H
