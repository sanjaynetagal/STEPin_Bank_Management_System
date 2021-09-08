#include "math.h"
#include "mylib.h"
int rem_num(int a, int b)
{
    float rem;
    if(b==0)
       {
        return -1;
       }
    else
        {
        rem=a%b;
        }
return rem;
}
