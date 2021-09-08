#include "mylib.h"
int compound_interest(float a, float b, float c)
{
    int CI;
    CI = a* ((pow((1 + c / 100),b) - 1));
    return CI;
}
