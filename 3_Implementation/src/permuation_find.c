#include "mylib.h"
float permuation_find(float a, float b)
{
    long long fact=1, num, den;
    int perm,i=1,sub;
    while(i<=a)
    {
        fact = i*fact;
        i++;
    }
    num=fact;                    // n!
    sub = a-b;
    fact=1;
    i=1;
    while(i<=sub)
    {
        fact=i*fact;
        i++;
    }
    den = fact;                // (n-r)!
    perm = num/den;
    return perm;
}
