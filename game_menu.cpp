#include "game_menu.h"
#include "ui_game_menu.h"
#include "game.h"

game_menu::game_menu(game *game,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::game_menu)
{
    this->parent=game;
    ui->setupUi(this);
}

game_menu::~game_menu()
{
    delete ui;
}

//use end game function
void game_menu::on_quit_pushButton_2_clicked()
{
    parent->endGame();
}

//start game, send map name, num players and game speed
void game_menu::on_start_pushButton_2_clicked()
{
    QString qMapName=ui->lineEdit_map->text();
    int nPlayers=ui->PlayerNumberBox_2->value();;
    int gameSpeed=ui->GameSpeedBox_2->value();;
    bool bots=ui->checkBox->isChecked();

    parent->startGame(nPlayers,qMapName,gameSpeed,bots);
}
