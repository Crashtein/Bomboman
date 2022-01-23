/**
 * \class game_menu
 *
 * \brief Klasa okna menu
 *
 * Menu dla wyboru opcji oraz mapy.
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
#ifndef GAME_MENU_H
#define GAME_MENU_H

#include <QMainWindow>

class game;

QT_BEGIN_NAMESPACE
namespace Ui { class game_menu; }
QT_END_NAMESPACE

//gui menu głównego
class game_menu : public QMainWindow
{
    Q_OBJECT

public:
    ///konstruktor
    game_menu(game *game,QWidget *parent = nullptr);
    ///destruktor
    ~game_menu();

private slots:
    ///wywołanie końca progarmu
    void on_quit_pushButton_2_clicked();
    ///start gry
    void on_start_pushButton_2_clicked();

private:
    ///UI menu
    Ui::game_menu *ui;
    ///Parent - gra
    game *parent;
};
#endif // GAME_MENU_H
