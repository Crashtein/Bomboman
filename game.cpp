#include "game.h"

game::game()
{

}

game::~game()
{
    delete menu;
    delete game_win;
    delete gamemap_wsk;
}

void game::showMenu()
{
    if(gamemap_wsk!=nullptr){
        delete gamemap_wsk;
        gamemap_wsk=nullptr;
    }
    if(menu!=nullptr){
        menu->show();
    }else{
        menu=new game_menu(this);
    }
    menu->show();
}

void game::endGame()
{
    exit(0);
}

void game::startGame(int nPlayers, QString mapName, int gameSpeed, bool bots)
{
    menu->hide();
    gamemap_wsk = new gamemap(nPlayers,mapName,gameSpeed,bots,this);
}
