#include "gamemap.h"

#include "game_window.h"
#include "block.h"
#include "bomboman.h"
#include "mapobject.h"
#include "gmapobject.h"
#include "bomb.h"
#include "flame.h"

gamemap::gamemap(int nPlayers, QString mapName, int gameSpeed, bool bots, game *parentGame)
{
    this->nPlayers=nPlayers;
    this->mapName=mapName;
    this->gameNumberUpdateCycles=gameSpeed;
    this->bots=bots;
    this->parentGame=parentGame;
    game_win=new game_window;
    game_win->setGamemap(this);
    MapObject::setStaticMap(this);
    GMapObject::setStaticScene(game_win->getScene());
    this->loadMap();
    game_win->setViewSize(mapWidth*fieldW,mapHeight*fieldH);
    game_win->show();

    timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(update()));
    timer->start(refreshMS);

    srand(time(NULL));
}

gamemap::~gamemap()
{
    MapObject *wskMapObject;
    while(mapObjectHead!=nullptr){
        wskMapObject=mapObjectHead->getNextObject();
        delete mapObjectHead;
        mapObjectHead=wskMapObject;
    }
    delete timer;
    delete game_win;
}

void gamemap::loadMap()
{
    int playersToAdd=this->nPlayers;
    int botNumber=5;
    mapObjectHead=nullptr;
    MapObject *wskMapObject;
    std::ifstream data;
    data.open(mapName.toStdString().c_str(), std::ios::in);
    int temp;
    if(data.good()==true){
        data>>mapHeight>>mapWidth;
        for(int i=0;i<mapHeight;i++){
            for(int j=0;j<mapWidth;j++){
                data>>temp;
                if(i==0 && j==0){
                    if(temp==wall || temp==stone || temp==nBomb_bonus || temp==speed_bonus || temp==range_bonus){
                        wskMapObject=new Block(j,i,temp);
                    }else if(temp==player && playersToAdd>0){
                        wskMapObject=new Bomboman(j,i,nPlayers-playersToAdd+1);
                        playersToAdd--;
                    }else if(temp==player && playersToAdd<=0){
                        //add bot object
                    }
                    mapObjectHead=wskMapObject;
                }else{
                    if(temp==wall || temp==stone || temp==nBomb_bonus || temp==speed_bonus || temp==range_bonus){
                        wskMapObject->setNextObject(new Block(j,i,temp));
                        wskMapObject=wskMapObject->getNextObject();
                    }else if(temp==player && playersToAdd>0){
                        wskMapObject->setNextObject(new Bomboman(j,i,nPlayers-playersToAdd+1));
                        playersToAdd--;
                        wskMapObject=wskMapObject->getNextObject();
                    }else if(temp==player && playersToAdd<=0){
                        //add bot object

                        botNumber++;
                    }
                }
                wskMapObject->setNextObject(nullptr);
            }
        }
    }else{
        parentGame->showMenu();
    }
    data.close();
}

void gamemap::keyPressed(int key)
{
    MapObject *wskMapObject;
    wskMapObject=mapObjectHead;
    switch(key){
    case Qt::Key_Space:
        pause=!pause;
        break;
    case Qt::Key_Escape:
        backToMenu();
        break;
    case Qt::Key_Up:
        while(wskMapObject!=nullptr){
            wskMapObject->move(_up,1);
            wskMapObject=wskMapObject->getNextObject();
        }
        break;
    case Qt::Key_Down:
        while(wskMapObject!=nullptr){
            wskMapObject->move(_down,1);
            wskMapObject=wskMapObject->getNextObject();
        }
        break;
    case Qt::Key_Left:
        while(wskMapObject!=nullptr){
            wskMapObject->move(_left,1);
            wskMapObject=wskMapObject->getNextObject();
        }
        break;
    case Qt::Key_Right:
        while(wskMapObject!=nullptr){
            wskMapObject->move(_right,1);
            wskMapObject=wskMapObject->getNextObject();
        }
        break;
    case Qt::Key_W:
        while(wskMapObject!=nullptr){
            wskMapObject->move(_up,2);
            wskMapObject=wskMapObject->getNextObject();
        }
        break;
    case Qt::Key_S:
        while(wskMapObject!=nullptr){
            wskMapObject->move(_down,2);
            wskMapObject=wskMapObject->getNextObject();
        }
        break;
    case Qt::Key_A:
        while(wskMapObject!=nullptr){
            wskMapObject->move(_left,2);
            wskMapObject=wskMapObject->getNextObject();
        }
        break;
    case Qt::Key_D:
        while(wskMapObject!=nullptr){
            wskMapObject->move(_right,2);
            wskMapObject=wskMapObject->getNextObject();
        }
        break;
    case Qt::Key_8:
        while(wskMapObject!=nullptr){
            wskMapObject->move(_up,3);
            wskMapObject=wskMapObject->getNextObject();
        }
        break;
    case Qt::Key_5:
        while(wskMapObject!=nullptr){
            wskMapObject->move(_down,3);
            wskMapObject=wskMapObject->getNextObject();
        }
        break;
    case Qt::Key_4:
        while(wskMapObject!=nullptr){
            wskMapObject->move(_left,3);
            wskMapObject=wskMapObject->getNextObject();
        }
        break;
    case Qt::Key_6:
        while(wskMapObject!=nullptr){
            wskMapObject->move(_right,3);
            wskMapObject=wskMapObject->getNextObject();
        }
        break;
    case Qt::Key_U:
        while(wskMapObject!=nullptr){
            wskMapObject->move(_up,4);
            wskMapObject=wskMapObject->getNextObject();
        }
        break;
    case Qt::Key_J:
        while(wskMapObject!=nullptr){
            wskMapObject->move(_down,4);
            wskMapObject=wskMapObject->getNextObject();
        }
        break;
    case Qt::Key_H:
        while(wskMapObject!=nullptr){
            wskMapObject->move(_left,4);
            wskMapObject=wskMapObject->getNextObject();
        }
        break;
    case Qt::Key_K:
        while(wskMapObject!=nullptr){
            wskMapObject->move(_right,4);
            wskMapObject=wskMapObject->getNextObject();
        }
        break;
    case Qt::Key_Control:
        while(wskMapObject!=nullptr){
            wskMapObject->putBomb(1);
            wskMapObject=wskMapObject->getNextObject();
        }
        break;
    case Qt::Key_Q:
        while(wskMapObject!=nullptr){
            wskMapObject->putBomb(2);
            wskMapObject=wskMapObject->getNextObject();
        }
        break;
    case Qt::Key_0:
        while(wskMapObject!=nullptr){
            wskMapObject->putBomb(3);
            wskMapObject=wskMapObject->getNextObject();
        }
        break;
    case Qt::Key_G:
        while(wskMapObject!=nullptr){
            wskMapObject->putBomb(4);
            wskMapObject=wskMapObject->getNextObject();
        }
        break;
    default:
        break;
    }
}

void gamemap::backToMenu()
{
    parentGame->showMenu();
}

void gamemap::delToDel()
{
    MapObject *wskMapObject=mapObjectHead;
    MapObject *wskMapObject2;
    while(mapObjectHead->getToDelete()){
        wskMapObject=mapObjectHead->getNextObject();
        delete mapObjectHead;
        mapObjectHead=wskMapObject;
    }
    while(wskMapObject->getNextObject()!=nullptr){
        if(wskMapObject->getNextObject()->getToDelete()){
            if(wskMapObject->getNextObject()->getNextObject()!=nullptr){
                wskMapObject2=wskMapObject->getNextObject()->getNextObject();
                delete wskMapObject->getNextObject();
                wskMapObject->setNextObject(wskMapObject2);
            }else if(wskMapObject->getNextObject()!=nullptr){
                wskMapObject2=wskMapObject->getNextObject();
                delete wskMapObject2;
                wskMapObject->setNextObject(nullptr);
                break;
            }
        }
        wskMapObject=wskMapObject->getNextObject();
    }
}

void gamemap::addMapObject(int x, int y, int type, int num)
{
    MapObject *wsk=nullptr;
    switch(type){
    case wall:
        wsk=new Block(x,y,type);
        break;
    case stone:
        wsk=new Block(x,y,type);
        break;
    case empty:
        break;
    case player:
        wsk=new Bomboman(x,y,num);
        break;
    case speed_bonus:
        wsk=new Block(x,y,type);
        break;
    case range_bonus:
        wsk=new Block(x,y,type);
        break;
    case nBomb_bonus:
        wsk=new Block(x,y,type);
        break;
    case flame:
        //wsk=new Flame(x,y,parentBomber);
        break;
    case bot:
        //wsk=new Bot(x,y,num); //to be added
        break;
    case bomb:
        //wsk=new Bomb(x,y,parentBomber);
        break;
    default:
        break;
    }
    if(wsk){
        addAtEnd(wsk);
    }
}

void gamemap::addMapObject(int x, int y, int type, Bomboman *parentBomber)
{
    MapObject *wsk=nullptr;
    switch(type){
    case flame:
        wsk=new Flame(x,y,parentBomber);
        break;
    case bomb:
        wsk=new Bomb(x,y,parentBomber);
        break;
    default:
        break;
    }
    if(wsk){
        addAtEnd(wsk);
    }
}

void gamemap::addAtEnd(MapObject *wsk)
{
    MapObject *wskMapObject=mapObjectHead;
    while(wskMapObject->getNextObject()!=nullptr){
        wskMapObject=wskMapObject->getNextObject();
    }
    wskMapObject->setNextObject(wsk);
    wskMapObject=wskMapObject->getNextObject();
    wskMapObject->setNextObject(nullptr);
}

MapObject* gamemap::getMapObjectHead()
{
    return mapObjectHead;
}

int gamemap::getMapWidth()
{
    return mapWidth;
}

int gamemap::getMapHeight()
{
    return mapHeight;
}

int gamemap::getGameSpeed()
{
    return gameSpeed;
}

void gamemap::updatePlayerCtrs(int playerNumber, int score, int speed, int nBombs, int range)
{
    game_win->updateCtrs(playerNumber,score,speed,nBombs,range);
}

void gamemap::update()
{
    if(!pause){
        for(int i=gameNumberUpdateCycles;i>0;i--){
            MapObject *wskMapObject;
            wskMapObject=mapObjectHead;
            while(wskMapObject!=nullptr){
                wskMapObject->update();
                wskMapObject=wskMapObject->getNextObject();
            }
            game_win->update();
            delToDel();
        }
    }
}
