#include <float.h>
#include <limits.h>
#include <stdio.h>
#include <assert.h>
#include "p45.c" 
void test_singleton()
{
    assert(singleton1 == singleton2); 
}
void test_boundary()
{
    int i = INT_MAX;
    float f = FLT_MIN;
    assert(i == getSingletonInstance()->data); 
    assert(fabs(f - getSingletonInstance()->data) < 0.001); 
}
void test_invalid()
{
    assert(singleton == getSingletonInstance()); 
}
int main(void)
{
    return 0;
}