#ifndef NAVIGATIONMANAGER_H
#define NAVIGATIONMANAGER_H

#include "r3d.hpp"

class World;
class Map
{
private:
    r3dNavGrid mGrid;
    World* pWorld;
public:
    Map(World *world);
    void init();
};

#endif // NAVIGATIONMANAGER_H
