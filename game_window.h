/**
 * \class game_window
 *
 * \brief Klasa okna gry
 *
 * Wizualizacja mapy oraz parametrów graczy.
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
#ifndef GAME_WINDOW_H
#define GAME_WINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QKeyEvent>

class gamemap;

QT_BEGIN_NAMESPACE
namespace Ui { class game_window; }
QT_END_NAMESPACE

//gui w trakcie gry
class game_window : public QMainWindow
{
    Q_OBJECT

public:
    ///konstruktor
    game_window(QWidget *parent = nullptr);
    ///destruktor
    ~game_window();
    ///Ustawienie wielkości obiektu GraphicsView
    void setViewSize(int w, int h);
    ///Update grafiki
    void update();
    ///update liczników/statystyk graczy
    void updateCtrs(int pNumber,int score, int speed, int nBombs, int radius);
    ///zwraca QGraphicsScene z graficzną mapą
    QGraphicsScene* getScene();
    ///ustawia wskaźnik na obiekt mapy gry
    void setGamemap(gamemap* gamemap);


private:
    ///UI
    Ui::game_window *ui;
    ///Obsługa klawiatury do sterowania dla graczy
    void keyPressEvent(QKeyEvent *event);
    ///scena dla QGraphicsView, przechowująca grafikę mapy
    QGraphicsScene *scene;
    ///Wskaźnik na mapę rozgrywki
    gamemap *map;

};

#endif // GAME_H
