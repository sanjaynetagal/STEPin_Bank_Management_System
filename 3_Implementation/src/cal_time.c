#include "mylib.h"
float cal_time(float a, float b)
{
    float time;
    if(b==0)
    {
        return -1;
    }
    else
    {
        time=a/b;
    }
return time;
}
