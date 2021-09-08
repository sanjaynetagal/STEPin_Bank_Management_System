#include "mylib.h"
float fact_num(float a)
{
    float fact=1,x;
    for(x=1;x<=a;x++)
    {
        fact=fact*x;
    }
    return fact;
}
