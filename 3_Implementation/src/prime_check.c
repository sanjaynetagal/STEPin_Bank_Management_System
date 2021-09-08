#include "mylib.h"
int prime_check(int a)
{
    int i, count=0;
    for(i=2; i<a; i++)
    {
        if(a%i == 0)
        {
            count++;
            break;
        }
    }
    if(count==0)
        return 1;
    else
        return 0;
}
