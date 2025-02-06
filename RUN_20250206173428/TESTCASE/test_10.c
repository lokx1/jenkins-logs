#include <float.h>
#include <limits.h>
#include "p42.c"
#include <stdio.h>
#include <assert.h> 
#define EPS 1 e-9 
void greet();
void farewell();
int main(void)
{
    return 0;
}
void greet()
{
    assert(print f("Hello! Welcome to Modular Programming.\n") == 29); 
}
void farewell()
{
    assert(print f("Goodbye! Thank you for using Modular Programming.\n") == 31); 
}
void greet_boundary()
{
    assert(print f("Hello! Welcome to Modular Programming.%d", INT_MAX) == 29); 
}
void farewell_boundary()
{
    assert(print f("Goodbye! Thank you for using Modular Programming.%f", FLT_MIN) == 31); 
}
void greet_float()
{
    assert(print f("Hello! Welcome to Modular Programming.%f", 3.14) == 29); 
}
void farewell_float()
{
    assert(print f("Goodbye! Thank you for using Modular Programming.%f", 3.14) == 31); 
}
void greet_epsilon()
{
    assert(print f("Hello! Welcome to Modular Programming.%f", 3.14) == 29); 
}
void farewell_epsilon()
{
    assert(print f("Goodbye! Thank you for using Modular Programming.%f", 3.14) == 31); 
}