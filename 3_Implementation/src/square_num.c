#include "mylib.h"
float square_num(float a)
{
    float square;
    if(a==0)
    {
        return -1;
    }
    else
    {
        square= a*a;
    }
    return square;
}
