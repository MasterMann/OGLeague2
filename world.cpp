#include "world.h"
#include "timemanager.h"
#include "map.h"
#include "objectmanager.h"
#include "playermanager.h"
#include "datamanager.h"
#include "scripts/scriptmap.h"
#include "netserver.h"
#include "common/gameinfo.hpp"

World::World()
{
    gameinfo = new GameInfo;
    server = new NetServer;
    timemanager = new TimeManager(this);
    map = new Map(this);
    playermanager = new PlayerManager(this);
    objectmanager = new ObjectManager(this);
    scriptmap = new ScriptMap(this);
}

World::~World()
{
    delete scriptmap;
    delete objectmanager;
    delete playermanager;
    delete map;
    delete timemanager;
    delete server;
    delete gameinfo;
}
