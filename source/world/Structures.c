#include<world/Structures.h>
//void SetBlock()
void Place_ChunkStructure(WorkerItem item, int x, int y, int z, Structure structure, World* world){
    switch (structure)
    {
        case Structure_Tree:
            World_SetBlock(world, x, y+1, z, Block_Log);
		    World_SetBlock(world, x, y+2, z, Block_Log);
			World_SetBlock(world, x, y+3, z, Block_Log);
            World_SetBlock(world, x, y+4, z, Block_Log);
            // leaves
			World_SetBlock(world, x, y+5, z, Block_Leaves);
            World_SetBlock(world, x+1, y+5, z, Block_Leaves);
            World_SetBlock(world, x-1, y+5, z, Block_Leaves);
            World_SetBlock(world, x, y+5, z+1, Block_Leaves);
            World_SetBlock(world, x, y+5, z-1, Block_Leaves);
            World_SetBlock(world, x+1, y+4, z, Block_Leaves);
            World_SetBlock(world, x-1, y+4, z, Block_Leaves);
            World_SetBlock(world, x, y+4, z+1, Block_Leaves);
            World_SetBlock(world, x, y+4, z-1, Block_Leaves);
            // thick part
            World_SetBlock(world, x+1, y+3, z, Block_Leaves);
            World_SetBlock(world, x-1, y+3, z, Block_Leaves);
            World_SetBlock(world, x, y+3, z+1, Block_Leaves);
            World_SetBlock(world, x, y+3, z-1, Block_Leaves);
            World_SetBlock(world, x+1, y+3, z-1, Block_Leaves);
            World_SetBlock(world, x-1, y+3, z+1, Block_Leaves);
            World_SetBlock(world, x+1, y+3, z+1, Block_Leaves);
            World_SetBlock(world, x-1, y+3, z-1, Block_Leaves);
            // thick part outside
            World_SetBlock(world, x+2, y+3, z+2, Block_Leaves);
            World_SetBlock(world, x+1, y+3, z+2, Block_Leaves);
            World_SetBlock(world, x+0, y+3, z+2, Block_Leaves);
            World_SetBlock(world, x-1, y+3, z+2, Block_Leaves);
            World_SetBlock(world, x-2, y+3, z+2, Block_Leaves);
            World_SetBlock(world, x+2, y+3, z-2, Block_Leaves);
            World_SetBlock(world, x+1, y+3, z-2, Block_Leaves);
            World_SetBlock(world, x+0, y+3, z-2, Block_Leaves);
            World_SetBlock(world, x-1, y+3, z-2, Block_Leaves);
            World_SetBlock(world, x-2, y+3, z-2, Block_Leaves);

            World_SetBlock(world, x-2, y+3, z+2, Block_Leaves);
            World_SetBlock(world, x-2, y+3, z+1, Block_Leaves);
            World_SetBlock(world, x-2, y+3, z+0, Block_Leaves);
            World_SetBlock(world, x-2, y+3, z-1, Block_Leaves);
            World_SetBlock(world, x-2, y+3, z-2, Block_Leaves);
            World_SetBlock(world, x+2, y+3, z+2, Block_Leaves);
            World_SetBlock(world, x+2, y+3, z+1, Block_Leaves);
            World_SetBlock(world, x+2, y+3, z+0, Block_Leaves);
            World_SetBlock(world, x+2, y+3, z-1, Block_Leaves);
            World_SetBlock(world, x+2, y+3, z-2, Block_Leaves);
            // thick part #2
            World_SetBlock(world, x+1, y+2, z, Block_Leaves);
            World_SetBlock(world, x-1, y+2, z, Block_Leaves);
            World_SetBlock(world, x, y+2, z+1, Block_Leaves);
            World_SetBlock(world, x, y+2, z-1, Block_Leaves);
            World_SetBlock(world, x+1, y+2, z-1, Block_Leaves);
            World_SetBlock(world, x-1, y+2, z+1, Block_Leaves);
            World_SetBlock(world, x+1, y+2, z+1, Block_Leaves);
            World_SetBlock(world, x-1, y+2, z-1, Block_Leaves);
            // thick part outside #2
            World_SetBlock(world, x+2, y+2, z+2, Block_Leaves);
            World_SetBlock(world, x+1, y+2, z+2, Block_Leaves);
            World_SetBlock(world, x+0, y+2, z+2, Block_Leaves);
            World_SetBlock(world, x-1, y+2, z+2, Block_Leaves);
            World_SetBlock(world, x-2, y+2, z+2, Block_Leaves);
            World_SetBlock(world, x+2, y+2, z-2, Block_Leaves);
            World_SetBlock(world, x+1, y+2, z-2, Block_Leaves);
            World_SetBlock(world, x+0, y+2, z-2, Block_Leaves);
            World_SetBlock(world, x-1, y+2, z-2, Block_Leaves);
            World_SetBlock(world, x-2, y+2, z-2, Block_Leaves);

            World_SetBlock(world, x-2, y+2, z+2, Block_Leaves);
            World_SetBlock(world, x-2, y+2, z+1, Block_Leaves);
            World_SetBlock(world, x-2, y+2, z+0, Block_Leaves);
            World_SetBlock(world, x-2, y+2, z-1, Block_Leaves);
            World_SetBlock(world, x-2, y+2, z-2, Block_Leaves);
            World_SetBlock(world, x+2, y+2, z+2, Block_Leaves);
            World_SetBlock(world, x+2, y+2, z+1, Block_Leaves);
            World_SetBlock(world, x+2, y+2, z+0, Block_Leaves);
            World_SetBlock(world, x+2, y+2, z-1, Block_Leaves);
            World_SetBlock(world, x+2, y+2, z-2, Block_Leaves);
            break;
        default:
            break;
    }
}