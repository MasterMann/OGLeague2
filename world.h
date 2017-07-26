#ifndef IWORLD_H
#define IWORLD_H

enum GGameState_s : int
{
  GAMESTATE_PREGAME = 0x0,
  GAMESTATE_SPAWN = 0x1,
  GAMESTATE_GAMELOOP = 0x2,
  GAMESTATE_ENDGAME = 0x3,
  GAMESTATE_PRE_EXIT = 0x4,
  GAMESTATE_EXIT = 0x5
};

class Map;
class TimeManager;
class NetServer;
class PlayerManager;
class ObjectManager;
class GameInfo;
class ScriptMap;
class DataManager;
class Packets;
struct World
{
    TimeManager *timemanager;
    Map *map;
    PlayerManager *playermanager;
    ObjectManager *objectmanager;
    ScriptMap *scriptmap;
    NetServer *server;
    Packets *packets;
    GameInfo *gameinfo;
    DataManager *scriptmanager;
    GGameState_s gamestate = GAMESTATE_PREGAME;
    World();
    ~World();
};

#endif // IWORLD_H
