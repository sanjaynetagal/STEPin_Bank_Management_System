#include "mylib.h"
float sq_rt(float a)
{
    int counter = 1, sqroot=1, sqrt;
    if (a == 0 || a == 1)
    {
         return a;
    }
    else
    {
            while (sqroot <= a)
            {
            counter++;
            sqroot = counter*counter;
            }
            sqrt= counter - 1;

    }
       return sqrt;
}
