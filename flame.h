/**
 * \class Flame
 *
 * \brief Klasa Flame - niszczącego ognia
 *
 * Klasa obiektu typu Flame.
 * Obiekt znika po określonym czasie.
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
#ifndef Flame_H
#define Flame_H
#include "bomb.h"

//klasa obiektu płomienia, przez określony czas "płonie" na mapie raniąc graczy
class Flame: public Bomb
{
public:
    ///konstruktor
    Flame(int posX, int posY, Bomboman *parentB);
    ///Destruktor
    ~Flame();
    ///Update licznika
    void update();

private:
    ///licznik do zgaśnięcia płomienia
    int counter=counter_flame;
};

#endif // Flame_H
