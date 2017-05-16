#include "world.h"
#include <string.h>
#include <iostream>

using namespace std;

World::World()
    : mObjectManager(this),
      mScriptMap(this)
{
}

ObjectManager &World::objectmanager()
{
    return mObjectManager;
}

void World::init()
{

}

string World::levelName() const
{
    return mLevelName;
}

void World::setLevelName(const string &levelName)
{
    mLevelName = levelName;
}

void World::LoadWorld()
{
    mGrid.load("LEVELS/"+mLevelName+"/AIPath.aimesh_ngrid");
    r3dFile dsc("LEVELS/"+mLevelName+"/Scene/room.dsc");
    std::string name, quality;
    while(dsc >> name >> quality)
    {
        if(name.size()<6)
            continue;
        name = name.substr(0, name.size() - 4);
        mObjectManager.CreateWorldObject(name);
    }
}

void World::LoadGame()
{
    //init CharacterDataArraay
    //init SpellManager
    //init objectManager
    //load ai Mesh
    //load world
    LoadWorld();
    //init NavPointManager
    //load mission aka map script
    mScriptMap.Init(mLevelName);
}

void World::Play()
{
    //Load game
    LoadGame();
    //Update objects
    //Post load game script
    mScriptMap.PostInit();
    //Update objects
    //etc...
    mGameState = GAMESTATE_GAMELOOP;
    while(mGameState == GAMESTATE_GAMELOOP)
    {

    }
}

GGameState_s World::gameState() const
{
    return mGameState;
}

void World::setGameState(const GGameState_s &gameState)
{
    mGameState = gameState;
}



