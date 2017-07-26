#include "map.h"
#include "world.h"
#include "common/gameinfo.hpp"

Map::Map(World *world)
    :pWorld(world)
{

}

void Map::init()
{
    mGrid.load("LEVELS/"+pWorld->gameinfo->getMapName()+"/AIPath.aimesh_ngrid");
}
