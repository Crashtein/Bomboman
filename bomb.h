/**
 * \class Bomb
 *
 * \brief Klasa bomby Bombomana
 *
 * Klasa opisująca obiekt, który ma czas życia określony counter
 * W czasie destrukcji tworzy obiekty płomienia na mapie
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

#ifndef BOMB_H
#define BOMB_H
#include "gamemap.h"
#include "gmapobject.h"
#include "bomboman.h"

class Flame;

//klasa wybuchającej bomby
class Bomb: public MapObject
{
public:
    ///Konstruktor
    Bomb(int posX, int posY,Bomboman *parentBomber);
    ///Nie używany
    Bomb(){};
    ///Destruktor
    ~Bomb();
    ///odliczanie do wybuchu/wybuch/obsługa wybuchu od wybuchu innej bomby
    void update();
    ///Nie rusza się
    void move(int dir,int num){};
    ///Nie kładzie bomby
    void putBomb(int num){};
    ///rozprzestrzenianie niszczących płomieni (po wybuchu)
    void spreadFlame();

protected:
    ///Parent Bomboman
    Bomboman *parentBomber=nullptr;
    ///Licznik czasu życia
    int counter=200;
};

#endif // BOMB_H
