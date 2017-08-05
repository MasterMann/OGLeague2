#ifndef SCRIPTMAP_H
#define SCRIPTMAP_H

#include "scripthelper.h"

class World;
class ScriptMap
{
private:
    ScriptHelper mScriptHelper;
public:
    ScriptMap(World *world);
    void Init(std::string name);
    void PostInit();
    float barracksSpawnTime = 0;
    float neutralSpawnTime = 0;
    int m_SpawnInterations = 0;
    bool bPreviousNeutralSpawnEnabled = false;
    World *pWorld;
};

#endif // SCRIPTMAP_H
