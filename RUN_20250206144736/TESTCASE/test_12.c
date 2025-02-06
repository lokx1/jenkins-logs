#include <float.h>
#include <limits.h>
#include <stdio.h>
#include <assert.h>
#include "p35.c"
void greet()
{
}
int main(void)
{
    void(*ptr)() = &greet; 
    assert(INT_MAX == 2147483647);
    assert(INT_MIN == -2147483648);
    assert(FLT_MAX == 3.402823 e+38);
    assert(FLT_MIN == 1.175494351 e-38);
    float a = 0.1 f;
    float b = 0.2 f;
    assert((a - b) < FLT_EPSILON);
    return 0;
}