#include "scriptmap.h"
#include "scripthelper.h"
#include "world.h"

ScriptMap::ScriptMap(World *world)
    : pWorld(world),
      mScriptHelper(world)
{
}

void ScriptMap::Init(std::string name)
{
    mScriptHelper.LoadLuaFile("LEVELS/"+name+"/Scripts/LevelScript.lua");
    mScriptHelper.State()["OnLevelInit"]();
}

void ScriptMap::PostInit()
{
    mScriptHelper.State()["OnPostLevelLoad"]();
}
