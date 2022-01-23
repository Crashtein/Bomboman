/**
 * \class Bomboman
 *
 * \brief Klasa Bombomana
 *
 * Klasa gracza, implementuje ruch, interakcje z otoczeniem mapy
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
#ifndef BOMBOMAN_H
#define BOMBOMAN_H
#include "mapobject.h"
#include "gamemap.h"
#include "gmapobject.h"

//klasa gracza, być może w przyszłości zostanie użyta jako baza dla bota
class Bomboman: public MapObject
{
public:
    ///Konstruktor
    Bomboman(int posX, int posY, int pNumber);
    ///Destruktor
    ~Bomboman();
    ///inicjalizacja grafiki dla Bombomana
    void setGraphics();
    ///move
    void move(int dir,int num);
    ///operacje poruszania się obiektu w lewo
    void moveLeft();
    ///operacje poruszania się obiektu w prawo
    void moveRight();
    ///operacje poruszania się obiektu w górę
    void moveUp();
    ///operacje poruszania się obiektu w dół
    void moveDown();
    ///Update obiektu
    void update();
    ///chęć położenia bomby
    void putBomb(int num);
    ///update wskaźniki w interfejsie
    void updateCtrs();
    ///zjedz bonus ktory jest przed toba, zmienia statystyki
    void consumeBonus();
    ///wykrywanie czy Bomboman został zraniony płomieniem bomby
    void meetFlame();
    ///przestawienie flagi chęci postawienia bomby
    void place_bomb();
    ///ustawienie liczby położonych bomb
    void setPlacedBombs(int num);
    ///Pobierz wartość położonych bomb
    int getPlacedBombs();
    ///Pobierz wartość zasięgu bomb Bomboman
    int getRange();

protected:
    ///aktualny kierunek
    int direction=_none;
    ///true gdy zmieniono kierunek
    bool directionChanged=false;
    ///nowy kierunek, wskazany przez gracza
    int newDirection=_none;
    ///numer gracza
    int playerNumber=0;
    ///punktacja
    int score=0;
    ///teoretyczna liczba pikseli na cykl ruchu,
    double speed=1;
    ///liczba bomb
    int nBombs=1;
    ///zasięg rażenia bomb
    int range=1;
    ///Ilość położonych bomb
    int placedBombs=0;
    ///czy kładzie bombę
    bool pBomb=false;
};

#endif // BOMBOMAN_H
