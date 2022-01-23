/********************************************************************************
** Form generated from reading UI file 'game_menu.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_MENU_H
#define UI_GAME_MENU_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_game_menu
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *start_pushButton_2;
    QSpacerItem *horizontalSpacer_6;
    QSplitter *splitter_2;
    QLabel *label_nplayers;
    QSpinBox *PlayerNumberBox_2;
    QSplitter *splitter_3;
    QLabel *label_speed;
    QSpinBox *GameSpeedBox_2;
    QSplitter *splitter;
    QLabel *label;
    QCheckBox *checkBox;
    QGridLayout *gridLayout_6;
    QLabel *label_map;
    QLineEdit *lineEdit_map;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *quit_pushButton_2;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QMainWindow *game_menu)
    {
        if (game_menu->objectName().isEmpty())
            game_menu->setObjectName(QString::fromUtf8("game_menu"));
        game_menu->resize(480, 480);
        game_menu->setMinimumSize(QSize(480, 480));
        game_menu->setMaximumSize(QSize(480, 480));
        QPalette palette;
        game_menu->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Images/bomboman_data/player_seven.png"), QSize(), QIcon::Normal, QIcon::Off);
        game_menu->setWindowIcon(icon);
        game_menu->setAutoFillBackground(false);
        game_menu->setStyleSheet(QString::fromUtf8("background-image: url(:/Images/bomboman_data/menu.png);"));
        game_menu->setIconSize(QSize(48, 48));
        centralwidget = new QWidget(game_menu);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(17, 110, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 0, 0, 1, 1);

        start_pushButton_2 = new QPushButton(centralwidget);
        start_pushButton_2->setObjectName(QString::fromUtf8("start_pushButton_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(start_pushButton_2->sizePolicy().hasHeightForWidth());
        start_pushButton_2->setSizePolicy(sizePolicy);
        start_pushButton_2->setMinimumSize(QSize(150, 50));
        start_pushButton_2->setMaximumSize(QSize(150, 50));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        start_pushButton_2->setFont(font);
        start_pushButton_2->setLayoutDirection(Qt::LeftToRight);
        start_pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(174, 231, 255);"));

        gridLayout->addWidget(start_pushButton_2, 0, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        splitter_2 = new QSplitter(centralwidget);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        label_nplayers = new QLabel(splitter_2);
        label_nplayers->setObjectName(QString::fromUtf8("label_nplayers"));
        sizePolicy.setHeightForWidth(label_nplayers->sizePolicy().hasHeightForWidth());
        label_nplayers->setSizePolicy(sizePolicy);
        label_nplayers->setMinimumSize(QSize(180, 20));
        label_nplayers->setMaximumSize(QSize(180, 16777215));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        font1.setKerning(true);
        label_nplayers->setFont(font1);
        label_nplayers->setAutoFillBackground(false);
        label_nplayers->setStyleSheet(QString::fromUtf8("color: rgb(174, 231, 255);"));
        splitter_2->addWidget(label_nplayers);
        PlayerNumberBox_2 = new QSpinBox(splitter_2);
        PlayerNumberBox_2->setObjectName(QString::fromUtf8("PlayerNumberBox_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(50);
        sizePolicy1.setVerticalStretch(20);
        sizePolicy1.setHeightForWidth(PlayerNumberBox_2->sizePolicy().hasHeightForWidth());
        PlayerNumberBox_2->setSizePolicy(sizePolicy1);
        PlayerNumberBox_2->setMinimumSize(QSize(60, 20));
        PlayerNumberBox_2->setMaximumSize(QSize(60, 20));
        PlayerNumberBox_2->setSizeIncrement(QSize(50, 20));
        QFont font2;
        font2.setPointSize(14);
        font2.setKerning(true);
        PlayerNumberBox_2->setFont(font2);
        PlayerNumberBox_2->setAutoFillBackground(true);
        PlayerNumberBox_2->setStyleSheet(QString::fromUtf8("color: rgb(174, 231, 255);"));
        PlayerNumberBox_2->setMinimum(1);
        PlayerNumberBox_2->setMaximum(4);
        splitter_2->addWidget(PlayerNumberBox_2);

        verticalLayout->addWidget(splitter_2);

        splitter_3 = new QSplitter(centralwidget);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setOrientation(Qt::Horizontal);
        label_speed = new QLabel(splitter_3);
        label_speed->setObjectName(QString::fromUtf8("label_speed"));
        sizePolicy.setHeightForWidth(label_speed->sizePolicy().hasHeightForWidth());
        label_speed->setSizePolicy(sizePolicy);
        label_speed->setMinimumSize(QSize(180, 20));
        label_speed->setMaximumSize(QSize(180, 16777215));
        label_speed->setFont(font1);
        label_speed->setAutoFillBackground(false);
        label_speed->setStyleSheet(QString::fromUtf8("color: rgb(174, 231, 255);"));
        splitter_3->addWidget(label_speed);
        GameSpeedBox_2 = new QSpinBox(splitter_3);
        GameSpeedBox_2->setObjectName(QString::fromUtf8("GameSpeedBox_2"));
        sizePolicy1.setHeightForWidth(GameSpeedBox_2->sizePolicy().hasHeightForWidth());
        GameSpeedBox_2->setSizePolicy(sizePolicy1);
        GameSpeedBox_2->setMinimumSize(QSize(60, 20));
        GameSpeedBox_2->setMaximumSize(QSize(60, 20));
        GameSpeedBox_2->setBaseSize(QSize(50, 20));
        GameSpeedBox_2->setFont(font2);
        GameSpeedBox_2->setAutoFillBackground(true);
        GameSpeedBox_2->setStyleSheet(QString::fromUtf8("color: rgb(174, 231, 255);"));
        GameSpeedBox_2->setMinimum(1);
        GameSpeedBox_2->setMaximum(48);
        GameSpeedBox_2->setSingleStep(1);
        GameSpeedBox_2->setValue(3);
        splitter_3->addWidget(GameSpeedBox_2);

        verticalLayout->addWidget(splitter_3);

        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        label = new QLabel(splitter);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(180, 20));
        label->setMaximumSize(QSize(180, 16777215));
        label->setFont(font);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8("color: rgb(174, 231, 255);"));
        splitter->addWidget(label);
        checkBox = new QCheckBox(splitter);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        sizePolicy.setHeightForWidth(checkBox->sizePolicy().hasHeightForWidth());
        checkBox->setSizePolicy(sizePolicy);
        checkBox->setMinimumSize(QSize(14, 14));
        checkBox->setMaximumSize(QSize(14, 14));
        checkBox->setFont(font);
        checkBox->setAutoFillBackground(false);
        checkBox->setStyleSheet(QString::fromUtf8("color: rgb(174, 231, 255);\n"
"background-color: rgb(255, 255, 255);"));
        splitter->addWidget(checkBox);

        verticalLayout->addWidget(splitter);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_map = new QLabel(centralwidget);
        label_map->setObjectName(QString::fromUtf8("label_map"));
        sizePolicy.setHeightForWidth(label_map->sizePolicy().hasHeightForWidth());
        label_map->setSizePolicy(sizePolicy);
        label_map->setMinimumSize(QSize(180, 20));
        label_map->setMaximumSize(QSize(180, 16777215));
        label_map->setFont(font1);
        label_map->setAutoFillBackground(false);
        label_map->setStyleSheet(QString::fromUtf8("color: rgb(174, 231, 255);"));

        gridLayout_6->addWidget(label_map, 0, 0, 1, 1);

        lineEdit_map = new QLineEdit(centralwidget);
        lineEdit_map->setObjectName(QString::fromUtf8("lineEdit_map"));
        sizePolicy.setHeightForWidth(lineEdit_map->sizePolicy().hasHeightForWidth());
        lineEdit_map->setSizePolicy(sizePolicy);
        lineEdit_map->setMinimumSize(QSize(180, 0));
        lineEdit_map->setMaximumSize(QSize(100, 30));
        lineEdit_map->setFont(font2);
        lineEdit_map->setAutoFillBackground(false);
        lineEdit_map->setStyleSheet(QString::fromUtf8("color: rgb(174, 231, 255);"));

        gridLayout_6->addWidget(lineEdit_map, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_6);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        quit_pushButton_2 = new QPushButton(centralwidget);
        quit_pushButton_2->setObjectName(QString::fromUtf8("quit_pushButton_2"));
        sizePolicy.setHeightForWidth(quit_pushButton_2->sizePolicy().hasHeightForWidth());
        quit_pushButton_2->setSizePolicy(sizePolicy);
        quit_pushButton_2->setMinimumSize(QSize(150, 50));
        quit_pushButton_2->setMaximumSize(QSize(150, 50));
        quit_pushButton_2->setFont(font);
        quit_pushButton_2->setLayoutDirection(Qt::LeftToRight);
        quit_pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(174, 231, 255);"));

        gridLayout_2->addWidget(quit_pushButton_2, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        verticalSpacer_2 = new QSpacerItem(17, 112, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        gridLayout_3->addLayout(verticalLayout, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        game_menu->setCentralWidget(centralwidget);

        retranslateUi(game_menu);

        QMetaObject::connectSlotsByName(game_menu);
    } // setupUi

    void retranslateUi(QMainWindow *game_menu)
    {
        game_menu->setWindowTitle(QCoreApplication::translate("game_menu", "Bomboman Menu", nullptr));
        start_pushButton_2->setText(QCoreApplication::translate("game_menu", "Start Game", nullptr));
        label_nplayers->setText(QCoreApplication::translate("game_menu", "Number of Players", nullptr));
        label_speed->setText(QCoreApplication::translate("game_menu", "Game Speed", nullptr));
        label->setText(QCoreApplication::translate("game_menu", "Allow Bots", nullptr));
        checkBox->setText(QString());
        label_map->setText(QCoreApplication::translate("game_menu", "Map Name:", nullptr));
        lineEdit_map->setText(QCoreApplication::translate("game_menu", "bomboman.txt", nullptr));
        quit_pushButton_2->setText(QCoreApplication::translate("game_menu", "Quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class game_menu: public Ui_game_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_MENU_H
