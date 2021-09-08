#include "mylib.h"
float cal_speed(float a, float b)
{
    float speed;
    if(b==0)
    {
        return -1;
    }
    else
    {
        speed=a/b;
    }
return speed;
}
