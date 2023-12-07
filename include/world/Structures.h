#pragma once
#include <world/WorkQueue.h>
#include <world/World.h>
#include <stdint.h>
#include <world/Direction.h>
typedef uint8_t Structure;
enum { Structure_Tree,
       Structure_Cactus };
void Place_ChunkStructure(WorkerItem item, int x, int y, int z, Structure structure, World* world);