/********************************************************************************
** Form generated from reading UI file 'game_window.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_WINDOW_H
#define UI_GAME_WINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_game_window
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_5;
    QGraphicsView *graphicsView;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_info_esc;
    QLabel *label_info_pause;
    QSpacerItem *verticalSpacer_9;
    QLabel *label_player1_keys;
    QGridLayout *gridLayout_4;
    QLabel *label_player1_speed;
    QLCDNumber *lcdNumber_player1_radius;
    QLCDNumber *lcdNumber_player1_speed;
    QLCDNumber *lcdNumber_player1_bombs;
    QLabel *label_player1_radius;
    QLabel *label_player1_bombs;
    QLCDNumber *lcdNumber_player1_score;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_10;
    QLabel *label_player2_keys;
    QGridLayout *gridLayout_3;
    QLCDNumber *lcdNumber_player2_score;
    QLabel *label_player2_bombs;
    QLabel *label_player2_radius;
    QLabel *label_player2_speed;
    QLCDNumber *lcdNumber_player2_bombs;
    QLCDNumber *lcdNumber_player2_speed;
    QLCDNumber *lcdNumber_player2_radius;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_11;
    QLabel *label_player3_keys;
    QGridLayout *gridLayout_2;
    QLCDNumber *lcdNumber_player3_radius;
    QLabel *label_player3_bombs;
    QLCDNumber *lcdNumber_player3_bombs;
    QLabel *label_player3_radius;
    QLCDNumber *lcdNumber_player3_score;
    QLCDNumber *lcdNumber_player3_speed;
    QLabel *label_player3_speed;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_12;
    QLabel *label_player4_keys;
    QGridLayout *gridLayout;
    QLCDNumber *lcdNumber_player4_score;
    QLabel *label_player4_speed;
    QLabel *label_player4_bombs;
    QLCDNumber *lcdNumber_player4_bombs;
    QLabel *label_player4_radius;
    QLCDNumber *lcdNumber_player4_radius;
    QLCDNumber *lcdNumber_player4_speed;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_6;

    void setupUi(QMainWindow *game_window)
    {
        if (game_window->objectName().isEmpty())
            game_window->setObjectName(QString::fromUtf8("game_window"));
        game_window->resize(470, 754);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Images/bomboman_data/player_seven.png"), QSize(), QIcon::Normal, QIcon::Off);
        game_window->setWindowIcon(icon);
        game_window->setStyleSheet(QString::fromUtf8("background-color: rgb(84, 55, 31);"));
        centralwidget = new QWidget(game_window);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy);
        graphicsView->setMinimumSize(QSize(0, 0));
        graphicsView->setMaximumSize(QSize(16777215, 16777215));
        graphicsView->setSizeIncrement(QSize(0, 0));
        graphicsView->setFocusPolicy(Qt::NoFocus);
        graphicsView->setAutoFillBackground(true);
        graphicsView->setStyleSheet(QString::fromUtf8("background-image: url(:/Images/bomboman_data/way.png);"));
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout->addWidget(graphicsView);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy1);
        frame_2->setMinimumSize(QSize(250, 610));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(33, 166, 255);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        widget = new QWidget(frame_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 291, 603));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_info_esc = new QLabel(widget);
        label_info_esc->setObjectName(QString::fromUtf8("label_info_esc"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_info_esc->sizePolicy().hasHeightForWidth());
        label_info_esc->setSizePolicy(sizePolicy2);
        label_info_esc->setMaximumSize(QSize(280, 16777215));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_info_esc->setFont(font);

        verticalLayout->addWidget(label_info_esc);

        label_info_pause = new QLabel(widget);
        label_info_pause->setObjectName(QString::fromUtf8("label_info_pause"));
        sizePolicy2.setHeightForWidth(label_info_pause->sizePolicy().hasHeightForWidth());
        label_info_pause->setSizePolicy(sizePolicy2);
        label_info_pause->setMaximumSize(QSize(280, 16777215));
        label_info_pause->setFont(font);

        verticalLayout->addWidget(label_info_pause);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout->addItem(verticalSpacer_9);

        label_player1_keys = new QLabel(widget);
        label_player1_keys->setObjectName(QString::fromUtf8("label_player1_keys"));
        label_player1_keys->setEnabled(true);
        sizePolicy2.setHeightForWidth(label_player1_keys->sizePolicy().hasHeightForWidth());
        label_player1_keys->setSizePolicy(sizePolicy2);
        label_player1_keys->setMaximumSize(QSize(280, 40));
        label_player1_keys->setFont(font);
        label_player1_keys->setStyleSheet(QString::fromUtf8("color: rgb(106, 0, 255);"));

        verticalLayout->addWidget(label_player1_keys);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_player1_speed = new QLabel(widget);
        label_player1_speed->setObjectName(QString::fromUtf8("label_player1_speed"));
        label_player1_speed->setEnabled(true);
        sizePolicy2.setHeightForWidth(label_player1_speed->sizePolicy().hasHeightForWidth());
        label_player1_speed->setSizePolicy(sizePolicy2);
        label_player1_speed->setMaximumSize(QSize(20, 16777215));
        label_player1_speed->setFont(font);
        label_player1_speed->setStyleSheet(QString::fromUtf8("color: rgb(106, 0, 255);"));

        gridLayout_4->addWidget(label_player1_speed, 0, 0, 1, 1);

        lcdNumber_player1_radius = new QLCDNumber(widget);
        lcdNumber_player1_radius->setObjectName(QString::fromUtf8("lcdNumber_player1_radius"));
        sizePolicy2.setHeightForWidth(lcdNumber_player1_radius->sizePolicy().hasHeightForWidth());
        lcdNumber_player1_radius->setSizePolicy(sizePolicy2);
        lcdNumber_player1_radius->setMinimumSize(QSize(0, 30));
        lcdNumber_player1_radius->setMaximumSize(QSize(40, 16777215));
        QFont font1;
        font1.setPointSize(14);
        lcdNumber_player1_radius->setFont(font1);
        lcdNumber_player1_radius->setStyleSheet(QString::fromUtf8("color: rgb(106, 0, 255);"));
        lcdNumber_player1_radius->setFrameShadow(QFrame::Plain);
        lcdNumber_player1_radius->setLineWidth(2);
        lcdNumber_player1_radius->setDigitCount(2);
        lcdNumber_player1_radius->setSegmentStyle(QLCDNumber::Outline);
        lcdNumber_player1_radius->setProperty("value", QVariant(0.000000000000000));
        lcdNumber_player1_radius->setProperty("intValue", QVariant(0));

        gridLayout_4->addWidget(lcdNumber_player1_radius, 0, 5, 1, 1);

        lcdNumber_player1_speed = new QLCDNumber(widget);
        lcdNumber_player1_speed->setObjectName(QString::fromUtf8("lcdNumber_player1_speed"));
        sizePolicy2.setHeightForWidth(lcdNumber_player1_speed->sizePolicy().hasHeightForWidth());
        lcdNumber_player1_speed->setSizePolicy(sizePolicy2);
        lcdNumber_player1_speed->setMinimumSize(QSize(0, 30));
        lcdNumber_player1_speed->setMaximumSize(QSize(40, 16777215));
        lcdNumber_player1_speed->setFont(font1);
        lcdNumber_player1_speed->setStyleSheet(QString::fromUtf8("color: rgb(106, 0, 255);"));
        lcdNumber_player1_speed->setFrameShadow(QFrame::Plain);
        lcdNumber_player1_speed->setLineWidth(2);
        lcdNumber_player1_speed->setDigitCount(2);
        lcdNumber_player1_speed->setSegmentStyle(QLCDNumber::Outline);
        lcdNumber_player1_speed->setProperty("value", QVariant(0.000000000000000));
        lcdNumber_player1_speed->setProperty("intValue", QVariant(0));

        gridLayout_4->addWidget(lcdNumber_player1_speed, 0, 1, 1, 1);

        lcdNumber_player1_bombs = new QLCDNumber(widget);
        lcdNumber_player1_bombs->setObjectName(QString::fromUtf8("lcdNumber_player1_bombs"));
        sizePolicy2.setHeightForWidth(lcdNumber_player1_bombs->sizePolicy().hasHeightForWidth());
        lcdNumber_player1_bombs->setSizePolicy(sizePolicy2);
        lcdNumber_player1_bombs->setMinimumSize(QSize(0, 30));
        lcdNumber_player1_bombs->setMaximumSize(QSize(40, 16777215));
        lcdNumber_player1_bombs->setFont(font1);
        lcdNumber_player1_bombs->setStyleSheet(QString::fromUtf8("color: rgb(106, 0, 255);"));
        lcdNumber_player1_bombs->setFrameShadow(QFrame::Plain);
        lcdNumber_player1_bombs->setLineWidth(2);
        lcdNumber_player1_bombs->setDigitCount(2);
        lcdNumber_player1_bombs->setSegmentStyle(QLCDNumber::Outline);
        lcdNumber_player1_bombs->setProperty("value", QVariant(0.000000000000000));
        lcdNumber_player1_bombs->setProperty("intValue", QVariant(0));

        gridLayout_4->addWidget(lcdNumber_player1_bombs, 0, 3, 1, 1);

        label_player1_radius = new QLabel(widget);
        label_player1_radius->setObjectName(QString::fromUtf8("label_player1_radius"));
        label_player1_radius->setEnabled(true);
        sizePolicy2.setHeightForWidth(label_player1_radius->sizePolicy().hasHeightForWidth());
        label_player1_radius->setSizePolicy(sizePolicy2);
        label_player1_radius->setMaximumSize(QSize(20, 16777215));
        label_player1_radius->setFont(font);
        label_player1_radius->setStyleSheet(QString::fromUtf8("color: rgb(106, 0, 255);"));

        gridLayout_4->addWidget(label_player1_radius, 0, 4, 1, 1);

        label_player1_bombs = new QLabel(widget);
        label_player1_bombs->setObjectName(QString::fromUtf8("label_player1_bombs"));
        label_player1_bombs->setEnabled(true);
        sizePolicy2.setHeightForWidth(label_player1_bombs->sizePolicy().hasHeightForWidth());
        label_player1_bombs->setSizePolicy(sizePolicy2);
        label_player1_bombs->setMaximumSize(QSize(20, 16777215));
        label_player1_bombs->setFont(font);
        label_player1_bombs->setStyleSheet(QString::fromUtf8("color: rgb(106, 0, 255);"));

        gridLayout_4->addWidget(label_player1_bombs, 0, 2, 1, 1);

        lcdNumber_player1_score = new QLCDNumber(widget);
        lcdNumber_player1_score->setObjectName(QString::fromUtf8("lcdNumber_player1_score"));
        sizePolicy2.setHeightForWidth(lcdNumber_player1_score->sizePolicy().hasHeightForWidth());
        lcdNumber_player1_score->setSizePolicy(sizePolicy2);
        lcdNumber_player1_score->setMinimumSize(QSize(0, 40));
        lcdNumber_player1_score->setMaximumSize(QSize(100, 16777215));
        lcdNumber_player1_score->setFont(font1);
        lcdNumber_player1_score->setStyleSheet(QString::fromUtf8("color: rgb(106, 0, 255);"));
        lcdNumber_player1_score->setFrameShadow(QFrame::Plain);
        lcdNumber_player1_score->setLineWidth(2);
        lcdNumber_player1_score->setDigitCount(4);
        lcdNumber_player1_score->setSegmentStyle(QLCDNumber::Outline);
        lcdNumber_player1_score->setProperty("value", QVariant(0.000000000000000));
        lcdNumber_player1_score->setProperty("intValue", QVariant(0));

        gridLayout_4->addWidget(lcdNumber_player1_score, 0, 6, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 0, 7, 1, 1);


        verticalLayout->addLayout(gridLayout_4);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout->addItem(verticalSpacer_10);

        label_player2_keys = new QLabel(widget);
        label_player2_keys->setObjectName(QString::fromUtf8("label_player2_keys"));
        label_player2_keys->setEnabled(true);
        sizePolicy2.setHeightForWidth(label_player2_keys->sizePolicy().hasHeightForWidth());
        label_player2_keys->setSizePolicy(sizePolicy2);
        label_player2_keys->setMaximumSize(QSize(280, 40));
        label_player2_keys->setFont(font);
        label_player2_keys->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 85);"));

        verticalLayout->addWidget(label_player2_keys);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        lcdNumber_player2_score = new QLCDNumber(widget);
        lcdNumber_player2_score->setObjectName(QString::fromUtf8("lcdNumber_player2_score"));
        sizePolicy2.setHeightForWidth(lcdNumber_player2_score->sizePolicy().hasHeightForWidth());
        lcdNumber_player2_score->setSizePolicy(sizePolicy2);
        lcdNumber_player2_score->setMinimumSize(QSize(0, 40));
        lcdNumber_player2_score->setMaximumSize(QSize(100, 16777215));
        lcdNumber_player2_score->setFont(font1);
        lcdNumber_player2_score->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 85);"));
        lcdNumber_player2_score->setFrameShadow(QFrame::Plain);
        lcdNumber_player2_score->setLineWidth(2);
        lcdNumber_player2_score->setDigitCount(4);
        lcdNumber_player2_score->setSegmentStyle(QLCDNumber::Outline);
        lcdNumber_player2_score->setProperty("value", QVariant(0.000000000000000));
        lcdNumber_player2_score->setProperty("intValue", QVariant(0));

        gridLayout_3->addWidget(lcdNumber_player2_score, 0, 6, 1, 1);

        label_player2_bombs = new QLabel(widget);
        label_player2_bombs->setObjectName(QString::fromUtf8("label_player2_bombs"));
        label_player2_bombs->setEnabled(true);
        sizePolicy2.setHeightForWidth(label_player2_bombs->sizePolicy().hasHeightForWidth());
        label_player2_bombs->setSizePolicy(sizePolicy2);
        label_player2_bombs->setMaximumSize(QSize(20, 16777215));
        label_player2_bombs->setFont(font);
        label_player2_bombs->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 85);"));

        gridLayout_3->addWidget(label_player2_bombs, 0, 2, 1, 1);

        label_player2_radius = new QLabel(widget);
        label_player2_radius->setObjectName(QString::fromUtf8("label_player2_radius"));
        label_player2_radius->setEnabled(true);
        sizePolicy2.setHeightForWidth(label_player2_radius->sizePolicy().hasHeightForWidth());
        label_player2_radius->setSizePolicy(sizePolicy2);
        label_player2_radius->setMaximumSize(QSize(20, 16777215));
        label_player2_radius->setFont(font);
        label_player2_radius->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 85);"));

        gridLayout_3->addWidget(label_player2_radius, 0, 4, 1, 1);

        label_player2_speed = new QLabel(widget);
        label_player2_speed->setObjectName(QString::fromUtf8("label_player2_speed"));
        label_player2_speed->setEnabled(true);
        sizePolicy2.setHeightForWidth(label_player2_speed->sizePolicy().hasHeightForWidth());
        label_player2_speed->setSizePolicy(sizePolicy2);
        label_player2_speed->setMaximumSize(QSize(20, 16777215));
        label_player2_speed->setFont(font);
        label_player2_speed->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 85);"));

        gridLayout_3->addWidget(label_player2_speed, 0, 0, 1, 1);

        lcdNumber_player2_bombs = new QLCDNumber(widget);
        lcdNumber_player2_bombs->setObjectName(QString::fromUtf8("lcdNumber_player2_bombs"));
        sizePolicy2.setHeightForWidth(lcdNumber_player2_bombs->sizePolicy().hasHeightForWidth());
        lcdNumber_player2_bombs->setSizePolicy(sizePolicy2);
        lcdNumber_player2_bombs->setMinimumSize(QSize(0, 30));
        lcdNumber_player2_bombs->setMaximumSize(QSize(40, 16777215));
        lcdNumber_player2_bombs->setFont(font1);
        lcdNumber_player2_bombs->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 85);"));
        lcdNumber_player2_bombs->setFrameShadow(QFrame::Plain);
        lcdNumber_player2_bombs->setLineWidth(2);
        lcdNumber_player2_bombs->setDigitCount(2);
        lcdNumber_player2_bombs->setSegmentStyle(QLCDNumber::Outline);
        lcdNumber_player2_bombs->setProperty("value", QVariant(0.000000000000000));
        lcdNumber_player2_bombs->setProperty("intValue", QVariant(0));

        gridLayout_3->addWidget(lcdNumber_player2_bombs, 0, 3, 1, 1);

        lcdNumber_player2_speed = new QLCDNumber(widget);
        lcdNumber_player2_speed->setObjectName(QString::fromUtf8("lcdNumber_player2_speed"));
        sizePolicy2.setHeightForWidth(lcdNumber_player2_speed->sizePolicy().hasHeightForWidth());
        lcdNumber_player2_speed->setSizePolicy(sizePolicy2);
        lcdNumber_player2_speed->setMinimumSize(QSize(0, 30));
        lcdNumber_player2_speed->setMaximumSize(QSize(40, 16777215));
        lcdNumber_player2_speed->setFont(font1);
        lcdNumber_player2_speed->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 85);"));
        lcdNumber_player2_speed->setFrameShadow(QFrame::Plain);
        lcdNumber_player2_speed->setLineWidth(2);
        lcdNumber_player2_speed->setDigitCount(2);
        lcdNumber_player2_speed->setSegmentStyle(QLCDNumber::Outline);
        lcdNumber_player2_speed->setProperty("value", QVariant(0.000000000000000));
        lcdNumber_player2_speed->setProperty("intValue", QVariant(0));

        gridLayout_3->addWidget(lcdNumber_player2_speed, 0, 1, 1, 1);

        lcdNumber_player2_radius = new QLCDNumber(widget);
        lcdNumber_player2_radius->setObjectName(QString::fromUtf8("lcdNumber_player2_radius"));
        sizePolicy2.setHeightForWidth(lcdNumber_player2_radius->sizePolicy().hasHeightForWidth());
        lcdNumber_player2_radius->setSizePolicy(sizePolicy2);
        lcdNumber_player2_radius->setMinimumSize(QSize(0, 30));
        lcdNumber_player2_radius->setMaximumSize(QSize(40, 16777215));
        lcdNumber_player2_radius->setFont(font1);
        lcdNumber_player2_radius->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 85);"));
        lcdNumber_player2_radius->setFrameShadow(QFrame::Plain);
        lcdNumber_player2_radius->setLineWidth(2);
        lcdNumber_player2_radius->setDigitCount(2);
        lcdNumber_player2_radius->setSegmentStyle(QLCDNumber::Outline);
        lcdNumber_player2_radius->setProperty("value", QVariant(0.000000000000000));
        lcdNumber_player2_radius->setProperty("intValue", QVariant(0));

        gridLayout_3->addWidget(lcdNumber_player2_radius, 0, 5, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 7, 1, 1);


        verticalLayout->addLayout(gridLayout_3);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout->addItem(verticalSpacer_11);

        label_player3_keys = new QLabel(widget);
        label_player3_keys->setObjectName(QString::fromUtf8("label_player3_keys"));
        label_player3_keys->setEnabled(true);
        sizePolicy2.setHeightForWidth(label_player3_keys->sizePolicy().hasHeightForWidth());
        label_player3_keys->setSizePolicy(sizePolicy2);
        label_player3_keys->setMaximumSize(QSize(280, 40));
        label_player3_keys->setFont(font);
        label_player3_keys->setStyleSheet(QString::fromUtf8("color: rgb(252, 255, 71);"));

        verticalLayout->addWidget(label_player3_keys);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lcdNumber_player3_radius = new QLCDNumber(widget);
        lcdNumber_player3_radius->setObjectName(QString::fromUtf8("lcdNumber_player3_radius"));
        sizePolicy2.setHeightForWidth(lcdNumber_player3_radius->sizePolicy().hasHeightForWidth());
        lcdNumber_player3_radius->setSizePolicy(sizePolicy2);
        lcdNumber_player3_radius->setMinimumSize(QSize(0, 30));
        lcdNumber_player3_radius->setMaximumSize(QSize(40, 16777215));
        lcdNumber_player3_radius->setFont(font1);
        lcdNumber_player3_radius->setStyleSheet(QString::fromUtf8("color: rgb(252, 255, 71);"));
        lcdNumber_player3_radius->setFrameShadow(QFrame::Plain);
        lcdNumber_player3_radius->setLineWidth(2);
        lcdNumber_player3_radius->setDigitCount(2);
        lcdNumber_player3_radius->setSegmentStyle(QLCDNumber::Outline);
        lcdNumber_player3_radius->setProperty("value", QVariant(0.000000000000000));
        lcdNumber_player3_radius->setProperty("intValue", QVariant(0));

        gridLayout_2->addWidget(lcdNumber_player3_radius, 0, 5, 1, 1);

        label_player3_bombs = new QLabel(widget);
        label_player3_bombs->setObjectName(QString::fromUtf8("label_player3_bombs"));
        label_player3_bombs->setEnabled(true);
        sizePolicy2.setHeightForWidth(label_player3_bombs->sizePolicy().hasHeightForWidth());
        label_player3_bombs->setSizePolicy(sizePolicy2);
        label_player3_bombs->setMaximumSize(QSize(20, 16777215));
        label_player3_bombs->setFont(font);
        label_player3_bombs->setStyleSheet(QString::fromUtf8("color: rgb(252, 255, 71);"));

        gridLayout_2->addWidget(label_player3_bombs, 0, 2, 1, 1);

        lcdNumber_player3_bombs = new QLCDNumber(widget);
        lcdNumber_player3_bombs->setObjectName(QString::fromUtf8("lcdNumber_player3_bombs"));
        sizePolicy2.setHeightForWidth(lcdNumber_player3_bombs->sizePolicy().hasHeightForWidth());
        lcdNumber_player3_bombs->setSizePolicy(sizePolicy2);
        lcdNumber_player3_bombs->setMinimumSize(QSize(0, 30));
        lcdNumber_player3_bombs->setMaximumSize(QSize(40, 16777215));
        lcdNumber_player3_bombs->setFont(font1);
        lcdNumber_player3_bombs->setStyleSheet(QString::fromUtf8("color: rgb(252, 255, 71);"));
        lcdNumber_player3_bombs->setFrameShadow(QFrame::Plain);
        lcdNumber_player3_bombs->setLineWidth(2);
        lcdNumber_player3_bombs->setDigitCount(2);
        lcdNumber_player3_bombs->setSegmentStyle(QLCDNumber::Outline);
        lcdNumber_player3_bombs->setProperty("value", QVariant(0.000000000000000));
        lcdNumber_player3_bombs->setProperty("intValue", QVariant(0));

        gridLayout_2->addWidget(lcdNumber_player3_bombs, 0, 3, 1, 1);

        label_player3_radius = new QLabel(widget);
        label_player3_radius->setObjectName(QString::fromUtf8("label_player3_radius"));
        label_player3_radius->setEnabled(true);
        sizePolicy2.setHeightForWidth(label_player3_radius->sizePolicy().hasHeightForWidth());
        label_player3_radius->setSizePolicy(sizePolicy2);
        label_player3_radius->setMaximumSize(QSize(20, 16777215));
        label_player3_radius->setFont(font);
        label_player3_radius->setStyleSheet(QString::fromUtf8("color: rgb(252, 255, 71);"));

        gridLayout_2->addWidget(label_player3_radius, 0, 4, 1, 1);

        lcdNumber_player3_score = new QLCDNumber(widget);
        lcdNumber_player3_score->setObjectName(QString::fromUtf8("lcdNumber_player3_score"));
        sizePolicy2.setHeightForWidth(lcdNumber_player3_score->sizePolicy().hasHeightForWidth());
        lcdNumber_player3_score->setSizePolicy(sizePolicy2);
        lcdNumber_player3_score->setMinimumSize(QSize(0, 40));
        lcdNumber_player3_score->setMaximumSize(QSize(100, 16777215));
        lcdNumber_player3_score->setFont(font1);
        lcdNumber_player3_score->setStyleSheet(QString::fromUtf8("color: rgb(252, 255, 71);"));
        lcdNumber_player3_score->setFrameShadow(QFrame::Plain);
        lcdNumber_player3_score->setLineWidth(2);
        lcdNumber_player3_score->setDigitCount(4);
        lcdNumber_player3_score->setSegmentStyle(QLCDNumber::Outline);
        lcdNumber_player3_score->setProperty("value", QVariant(0.000000000000000));
        lcdNumber_player3_score->setProperty("intValue", QVariant(0));

        gridLayout_2->addWidget(lcdNumber_player3_score, 0, 6, 1, 1);

        lcdNumber_player3_speed = new QLCDNumber(widget);
        lcdNumber_player3_speed->setObjectName(QString::fromUtf8("lcdNumber_player3_speed"));
        sizePolicy2.setHeightForWidth(lcdNumber_player3_speed->sizePolicy().hasHeightForWidth());
        lcdNumber_player3_speed->setSizePolicy(sizePolicy2);
        lcdNumber_player3_speed->setMinimumSize(QSize(0, 30));
        lcdNumber_player3_speed->setMaximumSize(QSize(40, 16777215));
        lcdNumber_player3_speed->setFont(font1);
        lcdNumber_player3_speed->setStyleSheet(QString::fromUtf8("color: rgb(252, 255, 71);"));
        lcdNumber_player3_speed->setFrameShadow(QFrame::Plain);
        lcdNumber_player3_speed->setLineWidth(2);
        lcdNumber_player3_speed->setDigitCount(2);
        lcdNumber_player3_speed->setSegmentStyle(QLCDNumber::Outline);
        lcdNumber_player3_speed->setProperty("value", QVariant(0.000000000000000));
        lcdNumber_player3_speed->setProperty("intValue", QVariant(0));

        gridLayout_2->addWidget(lcdNumber_player3_speed, 0, 1, 1, 1);

        label_player3_speed = new QLabel(widget);
        label_player3_speed->setObjectName(QString::fromUtf8("label_player3_speed"));
        label_player3_speed->setEnabled(true);
        sizePolicy2.setHeightForWidth(label_player3_speed->sizePolicy().hasHeightForWidth());
        label_player3_speed->setSizePolicy(sizePolicy2);
        label_player3_speed->setMaximumSize(QSize(20, 16777215));
        label_player3_speed->setFont(font);
        label_player3_speed->setStyleSheet(QString::fromUtf8("color: rgb(252, 255, 71);"));

        gridLayout_2->addWidget(label_player3_speed, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 7, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout->addItem(verticalSpacer_12);

        label_player4_keys = new QLabel(widget);
        label_player4_keys->setObjectName(QString::fromUtf8("label_player4_keys"));
        label_player4_keys->setEnabled(true);
        sizePolicy2.setHeightForWidth(label_player4_keys->sizePolicy().hasHeightForWidth());
        label_player4_keys->setSizePolicy(sizePolicy2);
        label_player4_keys->setMaximumSize(QSize(280, 40));
        label_player4_keys->setFont(font);
        label_player4_keys->setStyleSheet(QString::fromUtf8("color: rgb(255, 140, 0);"));

        verticalLayout->addWidget(label_player4_keys);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lcdNumber_player4_score = new QLCDNumber(widget);
        lcdNumber_player4_score->setObjectName(QString::fromUtf8("lcdNumber_player4_score"));
        sizePolicy2.setHeightForWidth(lcdNumber_player4_score->sizePolicy().hasHeightForWidth());
        lcdNumber_player4_score->setSizePolicy(sizePolicy2);
        lcdNumber_player4_score->setMinimumSize(QSize(0, 40));
        lcdNumber_player4_score->setMaximumSize(QSize(100, 16777215));
        lcdNumber_player4_score->setFont(font1);
        lcdNumber_player4_score->setStyleSheet(QString::fromUtf8("color: rgb(255, 140, 0);"));
        lcdNumber_player4_score->setFrameShape(QFrame::Box);
        lcdNumber_player4_score->setFrameShadow(QFrame::Plain);
        lcdNumber_player4_score->setLineWidth(2);
        lcdNumber_player4_score->setDigitCount(4);
        lcdNumber_player4_score->setSegmentStyle(QLCDNumber::Outline);
        lcdNumber_player4_score->setProperty("value", QVariant(0.000000000000000));
        lcdNumber_player4_score->setProperty("intValue", QVariant(0));

        gridLayout->addWidget(lcdNumber_player4_score, 0, 6, 1, 1);

        label_player4_speed = new QLabel(widget);
        label_player4_speed->setObjectName(QString::fromUtf8("label_player4_speed"));
        label_player4_speed->setEnabled(true);
        sizePolicy2.setHeightForWidth(label_player4_speed->sizePolicy().hasHeightForWidth());
        label_player4_speed->setSizePolicy(sizePolicy2);
        label_player4_speed->setMaximumSize(QSize(20, 16777215));
        label_player4_speed->setFont(font);
        label_player4_speed->setStyleSheet(QString::fromUtf8("color: rgb(255, 140, 0);"));

        gridLayout->addWidget(label_player4_speed, 0, 0, 1, 1);

        label_player4_bombs = new QLabel(widget);
        label_player4_bombs->setObjectName(QString::fromUtf8("label_player4_bombs"));
        label_player4_bombs->setEnabled(true);
        sizePolicy2.setHeightForWidth(label_player4_bombs->sizePolicy().hasHeightForWidth());
        label_player4_bombs->setSizePolicy(sizePolicy2);
        label_player4_bombs->setMaximumSize(QSize(20, 16777215));
        label_player4_bombs->setFont(font);
        label_player4_bombs->setStyleSheet(QString::fromUtf8("color: rgb(255, 140, 0);"));

        gridLayout->addWidget(label_player4_bombs, 0, 2, 1, 1);

        lcdNumber_player4_bombs = new QLCDNumber(widget);
        lcdNumber_player4_bombs->setObjectName(QString::fromUtf8("lcdNumber_player4_bombs"));
        sizePolicy2.setHeightForWidth(lcdNumber_player4_bombs->sizePolicy().hasHeightForWidth());
        lcdNumber_player4_bombs->setSizePolicy(sizePolicy2);
        lcdNumber_player4_bombs->setMinimumSize(QSize(0, 30));
        lcdNumber_player4_bombs->setMaximumSize(QSize(40, 16777215));
        lcdNumber_player4_bombs->setFont(font1);
        lcdNumber_player4_bombs->setStyleSheet(QString::fromUtf8("color: rgb(255, 140, 0);"));
        lcdNumber_player4_bombs->setFrameShape(QFrame::Box);
        lcdNumber_player4_bombs->setFrameShadow(QFrame::Plain);
        lcdNumber_player4_bombs->setLineWidth(2);
        lcdNumber_player4_bombs->setDigitCount(2);
        lcdNumber_player4_bombs->setSegmentStyle(QLCDNumber::Outline);
        lcdNumber_player4_bombs->setProperty("value", QVariant(0.000000000000000));
        lcdNumber_player4_bombs->setProperty("intValue", QVariant(0));

        gridLayout->addWidget(lcdNumber_player4_bombs, 0, 3, 1, 1);

        label_player4_radius = new QLabel(widget);
        label_player4_radius->setObjectName(QString::fromUtf8("label_player4_radius"));
        label_player4_radius->setEnabled(true);
        sizePolicy2.setHeightForWidth(label_player4_radius->sizePolicy().hasHeightForWidth());
        label_player4_radius->setSizePolicy(sizePolicy2);
        label_player4_radius->setMaximumSize(QSize(20, 16777215));
        label_player4_radius->setFont(font);
        label_player4_radius->setStyleSheet(QString::fromUtf8("color: rgb(255, 140, 0);"));

        gridLayout->addWidget(label_player4_radius, 0, 4, 1, 1);

        lcdNumber_player4_radius = new QLCDNumber(widget);
        lcdNumber_player4_radius->setObjectName(QString::fromUtf8("lcdNumber_player4_radius"));
        sizePolicy2.setHeightForWidth(lcdNumber_player4_radius->sizePolicy().hasHeightForWidth());
        lcdNumber_player4_radius->setSizePolicy(sizePolicy2);
        lcdNumber_player4_radius->setMinimumSize(QSize(0, 30));
        lcdNumber_player4_radius->setMaximumSize(QSize(40, 16777215));
        lcdNumber_player4_radius->setFont(font1);
        lcdNumber_player4_radius->setStyleSheet(QString::fromUtf8("color: rgb(255, 140, 0);"));
        lcdNumber_player4_radius->setFrameShape(QFrame::Box);
        lcdNumber_player4_radius->setFrameShadow(QFrame::Plain);
        lcdNumber_player4_radius->setLineWidth(2);
        lcdNumber_player4_radius->setDigitCount(2);
        lcdNumber_player4_radius->setSegmentStyle(QLCDNumber::Outline);
        lcdNumber_player4_radius->setProperty("value", QVariant(0.000000000000000));
        lcdNumber_player4_radius->setProperty("intValue", QVariant(0));

        gridLayout->addWidget(lcdNumber_player4_radius, 0, 5, 1, 1);

        lcdNumber_player4_speed = new QLCDNumber(widget);
        lcdNumber_player4_speed->setObjectName(QString::fromUtf8("lcdNumber_player4_speed"));
        sizePolicy2.setHeightForWidth(lcdNumber_player4_speed->sizePolicy().hasHeightForWidth());
        lcdNumber_player4_speed->setSizePolicy(sizePolicy2);
        lcdNumber_player4_speed->setMinimumSize(QSize(0, 30));
        lcdNumber_player4_speed->setMaximumSize(QSize(40, 16777215));
        lcdNumber_player4_speed->setFont(font1);
        lcdNumber_player4_speed->setStyleSheet(QString::fromUtf8("color: rgb(255, 140, 0);"));
        lcdNumber_player4_speed->setFrameShape(QFrame::Box);
        lcdNumber_player4_speed->setFrameShadow(QFrame::Plain);
        lcdNumber_player4_speed->setLineWidth(2);
        lcdNumber_player4_speed->setDigitCount(2);
        lcdNumber_player4_speed->setSegmentStyle(QLCDNumber::Outline);
        lcdNumber_player4_speed->setProperty("value", QVariant(0.000000000000000));
        lcdNumber_player4_speed->setProperty("intValue", QVariant(0));

        gridLayout->addWidget(lcdNumber_player4_speed, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 7, 1, 1);


        verticalLayout->addLayout(gridLayout);


        verticalLayout_2->addWidget(frame_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer_6 = new QSpacerItem(2, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        game_window->setCentralWidget(centralwidget);

        retranslateUi(game_window);

        QMetaObject::connectSlotsByName(game_window);
    } // setupUi

    void retranslateUi(QMainWindow *game_window)
    {
        game_window->setWindowTitle(QCoreApplication::translate("game_window", "Bomboman", nullptr));
        label_info_esc->setText(QCoreApplication::translate("game_window", "Esc-End Game", nullptr));
        label_info_pause->setText(QCoreApplication::translate("game_window", "Space-Pause", nullptr));
        label_player1_keys->setText(QCoreApplication::translate("game_window", "Player 1 CTRL,Arrows", nullptr));
        label_player1_speed->setText(QCoreApplication::translate("game_window", "S", nullptr));
        label_player1_radius->setText(QCoreApplication::translate("game_window", "R", nullptr));
        label_player1_bombs->setText(QCoreApplication::translate("game_window", "B", nullptr));
        label_player2_keys->setText(QCoreApplication::translate("game_window", "Player 2 Q,W,S,A,D", nullptr));
        label_player2_bombs->setText(QCoreApplication::translate("game_window", "B", nullptr));
        label_player2_radius->setText(QCoreApplication::translate("game_window", "R", nullptr));
        label_player2_speed->setText(QCoreApplication::translate("game_window", "S", nullptr));
        label_player3_keys->setText(QCoreApplication::translate("game_window", "Player 3 0,8,5,4,6", nullptr));
        label_player3_bombs->setText(QCoreApplication::translate("game_window", "B", nullptr));
        label_player3_radius->setText(QCoreApplication::translate("game_window", "R", nullptr));
        label_player3_speed->setText(QCoreApplication::translate("game_window", "S", nullptr));
        label_player4_keys->setText(QCoreApplication::translate("game_window", "Player 4 G, U,J,H,K", nullptr));
        label_player4_speed->setText(QCoreApplication::translate("game_window", "S", nullptr));
        label_player4_bombs->setText(QCoreApplication::translate("game_window", "B", nullptr));
        label_player4_radius->setText(QCoreApplication::translate("game_window", "R", nullptr));
    } // retranslateUi

};

namespace Ui {
    class game_window: public Ui_game_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_WINDOW_H
