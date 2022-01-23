/**
 * \class gamemap
 *
 * \brief Klasa mapy gry
 *
 * Obiekt mapy, zarządzający obiektami MapObject, tworząc między nimi interakcję.
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
#ifndef GAMEMAP_H
#define GAMEMAP_H

#include <QtCore>
#include <QGraphicsScene>
#include <QKeyEvent>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include <QTimer>
#include "QDebug"
#include <QApplication>
#include <time.h>

#include "game.h"

///definicja
const int uninitialized = -1;
///definicja
const int wall = 0;
///definicja
const int stone = 1;
///definicja
const int empty = 2;
///definicja
const int player = 3;
///definicja
const int speed_bonus = 4;
///definicja
const int range_bonus = 5;
///definicja
const int nBomb_bonus = 6;
///definicja
const int flame = 7;
///definicja
const int bot = 8;
///definicja
const int bomb = 9;
///definicja kierunku ruchu
const int _none=0;
///definicja kierunku ruchu
const int _left=1;
///definicja kierunku ruchu
const int _up=2;
///definicja kierunku ruchu
const int _right=3;
///definicja kierunku ruchu
const int _down=4;
///szerokość jednego bloku
const int fieldW=48;
///szerokość jednego bloku
const int fieldH=48;
///Czas odświeżania ms
const int refreshMS=20;
///min 3->100%, ze wypadnie jeden z 3 bonusow, zwiekszanie parametru zmniejsza prawdopodobienstwo
const int bunus_param=6;
///*refreshMS daje czas utrzymywania się płomieni w ms
const int counter_flame=150;
///*refreshMS daje czas do wybuchu w ms
const int counter_bomb=200;


class MapObject;
class game_window;
class Bomboman;

//najbardziej rozbudowana klasa - mapa z obiektami gry, parent listy MapObject
class gamemap : public QObject
{
    Q_OBJECT
public:
    ///konstruktor
    gamemap(int nPlayers, QString mapName, int gameSpeed, bool bots,game *parentGame);
    ///destruktor
    ~gamemap();

public:
    ///ladowanie mapy
    void loadMap();
    ///przetwarzanie wcisnietych klawiszy
    void keyPressed(int key);
    ///powrót do menu, koniec gry
    void backToMenu();
    ///aktualizacja wskaźników w interfejsie GUI
    void updateCtrs();
    ///usuwanie MapObject z całej listy z polem toDelete=true
    void delToDel();
    ///dodawanie obiektu block, bonusów lub gracza
    void addMapObject(int x,int y,int type,int num=0);
    ///dodawanie flame lub bomby
    void addMapObject(int x,int y,int type,Bomboman *parentBomber);
    ///dodawanie obiektu typu MapObject na koniec listy obiektów mapy gry
    void addAtEnd(MapObject *wsk);
    ///zwraca główę listy obiektów mapy
    MapObject *getMapObjectHead();
    ///zwraca szerokość mapy
    int getMapWidth();
    ///zwraca wysokość mapy
    int getMapHeight();
    ///zwraca szybkość gry - startowa prędkość gry
    int getGameSpeed();
    ///przesyła parametry aktualizacji statystyk do GUI
    void updatePlayerCtrs(int playerNumber,int score,int speed,int nBombs,int range);

public slots:
    //update dla wszystkich obiektów wyzwalany co regularny okres z przerwania timera
    void update();

private:
    ///szerokosc mapy, ilosc pol
    int mapWidth;
    ///wysokosc mapy, ilosc pol
    int mapHeight;
    ///ilosc graczy
    int nPlayers;
    ///ilosc pikseli przeskakiwanych na jeden cykl, domyslnie 1
    int gameSpeed=1;
    ///ilosc cykli update na jeden cykl timera
    int gameNumberUpdateCycles;
    ///czy boty biorą udział jako pozostała ilość pól gracza powyżej liczby graczy
    bool bots;
    ///flaga pauzy gry
    bool pause=false;
    ///nazwa pliku mapy
    QString mapName;
    ///timer
    QTimer *timer;
    ///wskaznik na parenta
    game *parentGame;
    ///glowa listy z obiektami mapy
    MapObject *mapObjectHead;
    ///game gui
    game_window *game_win;

};

#endif // GAMEMAP_H
