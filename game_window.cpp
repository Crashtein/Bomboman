#include "game_window.h"
#include "ui_game_window.h"
#include "gamemap.h"

game_window::game_window(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::game_window)
{
    scene=new QGraphicsScene;
    ui->setupUi(this);
}

game_window::~game_window()
{
    delete scene;
    delete ui;
}

void game_window::setViewSize(int w, int h)
{
    ui->graphicsView->setFixedSize(w,h);
    ui->graphicsView->setScene(scene);
}

void game_window::keyPressEvent(QKeyEvent *event)
{
    map->keyPressed(event->key());
}

void game_window::update()
{
    scene->update();
}

void game_window::updateCtrs(int pNumber, int score, int speed, int nBombs, int radius)
{
    switch(pNumber){
    case 1:
        ui->lcdNumber_player1_score->display(score);
        ui->lcdNumber_player1_speed->display(speed);
        ui->lcdNumber_player1_bombs->display(nBombs);
        ui->lcdNumber_player1_radius->display(radius);
        break;
    case 2:
        ui->lcdNumber_player2_score->display(score);
        ui->lcdNumber_player2_speed->display(speed);
        ui->lcdNumber_player2_bombs->display(nBombs);
        ui->lcdNumber_player2_radius->display(radius);
        break;
    case 3:
        ui->lcdNumber_player3_score->display(score);
        ui->lcdNumber_player3_speed->display(speed);
        ui->lcdNumber_player3_bombs->display(nBombs);
        ui->lcdNumber_player3_radius->display(radius);
        break;
    case 4:
        ui->lcdNumber_player4_score->display(score);
        ui->lcdNumber_player4_speed->display(speed);
        ui->lcdNumber_player4_bombs->display(nBombs);
        ui->lcdNumber_player4_radius->display(radius);
    break;
    default:
        break;
    }
}

QGraphicsScene *game_window::getScene()
{
    return scene;
}

void game_window::setGamemap(gamemap *gamemap)
{
    map=gamemap;
}
