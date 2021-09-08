#include "mylib.h"
float cal_distance(float a, float b)
{
    float distance;
    if(b==0)
    {
        return -1;
    }
    else
    {
        distance=a*b;
    }
return distance;
}
