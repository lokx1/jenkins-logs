#include <limits.h>
#include <stdio.h>
#include <assert.h>
#include "p42.c" 
void test_greet()
{
    assert(print f("Hello! Welcome to Modular Programming.\n") == 0);
    int max = INT_MAX;
    assert(print f("Hello! Welcome to Modular Programming.%d\n", max) == 0);
    int negative = -1;
    assert(print f("Hello! Welcome to Modular Programming.%d\n", negative) == 0);
}
void test_farewell()
{
    assert(print f("Goodbye! Thank you for using Modular Programming.\n") == 0);
    int max = INT_MAX;
    assert(print f("Goodbye! Thank you for using Modular Programming.%d\n", max) == 0);
    int negative = -1;
    assert(print f("Goodbye! Thank you for using Modular Programming.%d\n", negative) == 0);
}
int main(void)
{
    return 0;
}