#include <misc/noise.h>
int Get_Random(int x, int y, int seed){
    int r=seed+x*374761393+y*668265263;
    r=(r^(r>>13))*1274126177;
    r=r^(r>>16);
    r=(r/10000000)/2;
    if(r>=100){return 100;}
    return r;
}