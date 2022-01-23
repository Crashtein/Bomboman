/**
 * \class game
 *
 * \brief Klasa game - główna klasa progarmu
 * Główna klasa programu.
 * Inicjuje game_menu, game_window oraz gamemap
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
#ifndef GAME_H
#define GAME_H

#include "game_menu.h"
#include "game_window.h"
#include "gamemap.h"

//główna klasa programu
class game
{
public:
    ///konstruktor
    game();
    ///destruktor
    ~game();
    ///Pokaż menu GUI
    void showMenu();
    ///Koniec programu, destrukcja wszystkiego
    void endGame();
    ///start gry
    void startGame(int nPlayers, QString mapName, int gameSpeed, bool bots);

private:
    ///GUI menu
    game_menu *menu=nullptr;
    ///GUI gry
    game_window *game_win=nullptr;
    ///Mapa prwoadzonej rozgrywki
    gamemap *gamemap_wsk=nullptr;
};

#endif // GAME_H
