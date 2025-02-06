#include "p47.c"
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
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
    int test_cases[] = {INT_MIN, INT_MAX};
        int n = test_cases[i];
        assert(factorial(n) == 1);
    }
    return 0;
}