#ifndef WORLD_H
#define WORLD_H

#include <memory>
#include "dep/wink.hpp"
#include "dep/r3d.hpp"
#include "scripts/scriptmap.h"
#include "objectmanager.h"


enum GGameState_s : int
{
  GAMESTATE_PREGAME = 0x0,
  GAMESTATE_SPAWN = 0x1,
  GAMESTATE_GAMELOOP = 0x2,
  GAMESTATE_ENDGAME = 0x3,
  GAMESTATE_PRE_EXIT = 0x4,
  GAMESTATE_EXIT = 0x5
};


class World
{
private:
    ObjectManager mObjectManager;
    r3dNavGrid mGrid;
    std::string mLevelName;
    ScriptMap mScriptMap;
    GGameState_s mGameState = GAMESTATE_PREGAME;
public:

    World();
    ObjectManager &objectmanager();
    void init();
    std::string levelName() const;
    void setLevelName(const std::string &levelName);
    void LoadWorld();
    void LoadGame();
    void Play();
    GGameState_s gameState() const;
    void setGameState(const GGameState_s &gameState);
};

#endif // WORLD_H