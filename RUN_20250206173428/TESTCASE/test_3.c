#include <stdio.h>
#include <assert.h>
#include <float.h>
#include <limits.h>
#include "p45.c"
void test_getSingletonInstance()
{
    assert(singleton1 == singleton2);
}
void test_boundaryValues()
{
    int maxInt = INT_MAX;
    int minInt = INT_MIN;
    assert(getSingletonInstance()->data == maxInt);
    assert(getSingletonInstance()->data == minInt);
    float maxFloat = FLT_MAX;
    float minFloat = FLT_MIN;
    assert(getSingletonInstance()->data == maxFloat);
    assert(getSingletonInstance()->data == minFloat);
}
void test_invalidInputs()
{
    assert(getSingletonInstance("abc") == NULL);
    assert(getSingletonInstance(-1) == NULL);
}
void test_epsilonComparisons()
{
    float eps = FLT_EPSILON;
    assert(getSingletonInstance()->data == 0.0 f + eps);
}
int main(void)
{
    return 0;
}