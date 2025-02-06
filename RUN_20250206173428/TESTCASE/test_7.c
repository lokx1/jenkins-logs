#include <float.h>
#include <limits.h>
#include <stdio.h>
#include <assert.h>
#include "p46.c"
int main(void)
{
    assert(sum_of_first_10_natural_numbers(INT_MAX) == INT_MAX);
    assert(sum_of_first_10_natural_numbers(FLT_MIN) == FLT_MIN);
    assert(sum_of_first_10_natural_numbers(INT_MAX, 2.0 f) == INT_MAX * 2.0 f);
    assert(sum_of_first_10_natural_numbers(FLT_MIN, 2.0 f) == FLT_MIN * 2.0 f);
    assert(sum_of_first_10_natural_numbers(-1) == -1);
    assert(sum_of_first_10_natural_numbers(INT_MAX + 1) == INT_MAX + 1);
    assert(sum_of_first_10_natural_numbers(FLT_MIN / 2.0 f) == FLT_MIN / 2.0 f);
    assert(sum_of_first_10_natural_numbers(5) == 5 * (5 + 1) / 2);
    assert(sum_of_first_10_natural_numbers(10) == 10 * (10 + 1) / 2);
    return 0;
}