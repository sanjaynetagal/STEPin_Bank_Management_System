#include "mylib.h"
float combination_find(float a, float b)
{
   long long fact=1, numerator, denominator;
    int comb, i=1, sub;
    /*printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);*/
    while(i<=a)
    {
        fact = i*fact;
        i++;
    }
    numerator=fact;                    // n!
    sub = a-b;
    fact=1;
    i=1;
    while(i<=sub)
    {
        fact=i*fact;
        i++;
    }
    denominator = fact;               // (n-r)!
    fact = 1;
    i=1;
    while(i<=b)
    {
        fact = i*fact;
        i++;
    }
    denominator = (fact*denominator);
    comb = numerator/denominator;
    return comb;
}
