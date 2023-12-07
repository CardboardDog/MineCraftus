#include <world/worldgen/SmeaGen.h>

#include <sino/sino.h>
#include <misc/noise.h>
void SmeaGen_Init(SmeaGen* gen, World* world) { gen->world = world; }

// based off https://github.com/smealum/3dscraft/blob/master/source/generation.c
void SmeaGen_Generate(WorkQueue* queue, WorkerItem item, void* this) {
	SmeaGen* gen = this;
	for (int x = 0; x < CHUNK_SIZE; x++) {
		for (int z = 0; z < CHUNK_SIZE; z++) {
			float px = (float)(x + item.chunk->x * CHUNK_SIZE);
			float pz = (float)(z + item.chunk->z * CHUNK_SIZE);

			// biomes
			// biome size is four
			int biome = Get_Random((item.chunk->x/4),(item.chunk->z/4),198239012);

			// mountains
			int mountain = 0;
			int flats = 0;
			if(Get_Random(item.chunk->x,item.chunk->z,120394877)>20){mountain=1;flats=2;}else{mountain=2;flats=1;};

			const int smeasClusterSize = 8;
			const int smeasChunkHeight = 16;
			int height = (int)(((sino_2d((px) / (smeasClusterSize * 4), (pz) / (smeasClusterSize * 4))*mountain)/flats) * smeasClusterSize) +
				     (smeasChunkHeight * smeasClusterSize / 2);

			for (int y = 0; y < height - 3; y++) {
				Chunk_SetBlock(item.chunk, x, y, z, Block_Stone);
			}
			for (int y = height - 3; y < height; y++) {
				if(biome>40 && biome<80){
					Chunk_SetBlock(item.chunk, x, y, z, Block_Sandstone);
				}else{
					Chunk_SetBlock(item.chunk, x, y, z, Block_Dirt);
				}
			}

			// 1% of land will be covered by trees
			bool tree = (Get_Random(x,z,112987328)<1);

			// biome top layer
			if(biome<20){
				// plains %20
				Chunk_SetBlock(item.chunk, x, height, z, Block_Grass);
			}else if(biome<40){
				// tundra %20
				Chunk_SetBlock(item.chunk, x, height, z, Block_Snow_Grass);
			}else if(biome<80){
				//dessert %40
				Chunk_SetBlock(item.chunk, x, height, z, Block_Sand);
			}else if(biome<90){
				// taiga %10
				Chunk_SetBlock(item.chunk, x, height, z, Block_Snow_Grass);
			}else{
				// forrest %10
				Chunk_SetBlock(item.chunk, x, height, z, Block_Grass);
				tree = (Get_Random(x,z,112987328)<10);
			}
			if(tree){
				if(biome>40 && biome<80){
					Chunk_SetBlock(item.chunk, x, height+1, z, Block_Cactus);
				}else{
					Chunk_SetBlock(item.chunk, x, height+1, z, Block_Log);
					Chunk_SetBlock(item.chunk, x, height+2, z, Block_Log);
					Chunk_SetBlock(item.chunk, x, height+3, z, Block_Log);
					Chunk_SetBlock(item.chunk, x, height+4, z, Block_Leaves);
				}
			}
		}
	}
}