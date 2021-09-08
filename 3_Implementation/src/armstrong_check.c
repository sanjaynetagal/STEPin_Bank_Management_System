#include "mylib.h"
float armstrong_check(float a)
{
    int originalNum, remainder, result = 0;
    originalNum = a;

    while (originalNum != 0)
        {
        remainder = originalNum % 10;
        result += remainder * remainder * remainder;
        originalNum /= 10;
    }

    if (result == a)
        return 1;
    else
        return 0;

}
