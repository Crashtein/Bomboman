/**
 * \class Block
 *
 * \brief Klasa nieruchomych, prostych bloków
 *
 * Klasa nieruchomych i niefunkcyjnych obiektów mapy różnych typów.
 * Może być wykorzystana dla utworzenia bonusów oraz niszczonych/trwałych obiektów mapy.
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

#ifndef BLOCK_H
#define BLOCK_H
#include "mapobject.h"
#include "gamemap.h"
#include "gmapobject.h"

//klasa bonusów, ścian, kamieni
class Block: public MapObject
{
public:
    Block(int posX, int posY, int type);
    ////przy destrukcji sprawdza czy jesli typ był stone, to zostawia losowy bonus dla gracza (czasami - losowanie rand)
    ~Block();
    ///rozwinięcie wirtualnego update z MapObject
    void update(){};
    ///rozwinięcie wirtualnego move z MapObject
    void move(int dir,int num){};
    ///rozwinięcie wirtualnego putBomb z MapObject
    void putBomb(int num){};
};

#endif // BLOCK_H
