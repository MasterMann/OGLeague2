#include "world.h"
#include "timemanager.h"
#include "playermanager.h"
#include "common/gameinfo.hpp"
#include "map/map.h"
#include "data/datamanager.h"
#include "scripts/scriptmap.h"
#include "object/objectmanager.h"
#include "net/netserver.h"
#include "packets/packets.hpp"

World::World()
{
    gameinfo = new GameInfo;
    packets = new Packets;
    server = new NetServer(this);
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
