#include "world.h"
#include "../obj/gameobjectsall.h"
#include <string.h>

#include <iostream>

using namespace std;
using namespace Game;

std::string World::levelName() const
{
    return mLevelName;
}

void World::setLevelName(const std::string &levelName)
{
    mLevelName = levelName;
}

Content::Manager *World::content()
{
    return &mContent;
}

ObjectManager *World::objectmanager()
{
    return &mObjectManager;
}

void World::init()
{

}

GameObject *World::CreateGameObject(string className, string loadName, r3dPoint3D pos, int flags, void *data)
{
    GameObject *obj;
    if(className == "ObjAiBase")
        obj = new ObjAiBase();
    else if(className == "ObjAiMinion")
        obj = new ObjAiMinion();
    else if(className == "ObjAiHero")
        obj = new ObjAiHero();
    else if(className == "ObjAiTurret")
        obj = new ObjAiTurret();
    else if(className == "AttackableUnit")
        obj = new AttackableUnit();
    else if(className == "ObjAnimatedBuilding")
        obj = new ObjAnimatedBuilding();
    else if(className == "ObjBarracksDampener")
        obj = new ObjBarracksDampener();
    else if(className == "ObjHQ")
        obj = new ObjHQ();
    else if(className == "ObjTurret")
        obj = new ObjTurret();
    else if(className == "ObjBarracks")
        obj = new ObjBarracks();
    else if(className == "ObjBuilding")
        obj = new ObjBuilding();
    else if(className == "ObjLake")
        obj = new ObjLake();
    else if(className == "ObjLevelSizer")
        obj = new ObjLevelSizer();
    else if(className == "ObjNavPoint")
        obj = new ObjNavPoint();
    else if(className == "ObjShop")
        obj = new ObjShop();
    else if(className == "ObjSpawnPoint")
        obj = new ObjSpawnPoint();
    else if(className == "ObjSpellMissile")
        obj = new ObjSpellMissile();
    else if(className == "GameObject")
        obj = new GameObject();
    else
        return nullptr;

    obj->pWorld = this;
    mObjectManager.add(obj);
    obj->Load(loadName);
    cout<<"Created "<<loadName<<" as "<<className<<": "<<(obj!=nullptr?"true":"false")<<endl;
    return obj;
}

GameObject *World::CreateWorldObject(string loadName)
{

    static struct {
        string name; //String identifier in loadName
        string obj;  //Object class name
        bool client; //Client only
    } objs[] = {
        {"Spawn_Barracks",  "ObjBarracks",          0},
        {"__Spawn_",        "ObjSpawnPoint",		0},
        {"__LevelSize_",    "ObjLevelSizer",		0},
        {"Barracks",        "ObjBarracksDampener",	0},
        {"__ANIMS_",        "ObjAnimatedBuilding",	1},
        {"HQ_",             "ObjHQ",                0},
        {"Turret",          "ObjTurret",            0},
        {"Shop",            "ObjShop",              0},
        {"Lake",            "ObjLake",              1},
        {"__NAV_",          "ObjNavPoint",          0}
    };
    for(auto o : objs)
    {
        if(strstr(loadName.c_str(), o.name.c_str())!=0)
        {
            if(o.client)
                return nullptr;
            r3dPoint3D pos;
            pos.x = 0;
            pos.y = 0;
            pos.z = 0;
            GameObject* obj = CreateGameObject(o.obj, loadName, pos, 64, 0);
            obj->assignIDByName();
            return obj;
        }
    }
    return nullptr;
}

void World::LoadWorld()
{
    mGrid.load(mContent.getFile("LEVELS/"+mLevelName+"/AIPath.aimesh_ngrid"));
    ifstream dsc(mContent.getFile("LEVELS/"+mLevelName+"/Scene/room.dsc"));
    std::string name, quality;
    while(dsc >> name >> quality)
    {
        if(name.size()<6)
            continue;
        name = name.substr(0, name.size() - 4);
        CreateWorldObject(name);
    }
}
