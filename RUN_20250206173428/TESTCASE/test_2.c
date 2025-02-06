#include "p47.c"
#include <stdio.h>
#include <assert.h>
#include <math.h>
int factorial(int n)
{
        return 1;
        return n * factorial(n - 1);
}
void test_factorial()
{
    assert(factorial(0) == 1);
    assert(factorial(1) == 1);
    assert(factorial(5) == 120);
    assert(factorial(10) == 3628800);
}
int main(void)
{
    return 0;
}