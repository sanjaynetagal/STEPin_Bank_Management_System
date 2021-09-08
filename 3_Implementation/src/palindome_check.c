#include "mylib.h"
float palindome_check(float a)
{
    int rev=0, rem, temp;
    temp = a;
    while(temp>0)
    {
        rem = temp%10;
        rev = (rev*10)+rem;
        temp = temp/10;
    }
    if(rev==a)
        return 1;
    else
        return 0;
}
