#include <stdio.h>
#include <assert.h>
#include "p35.c" 
void greet()
{
}
int main(void)
{
    void(*ptr)() = &greet; 
    assert(ptr == &greet); 
    assert((*ptr)() == 0); 
    void(*invalid_ptr) = NULL; 
    assert(invalid_ptr == NULL); 
    assert((*invalid_ptr)() == 0); 
    float a = 1.23456789;
    float b = 1.23456789 f;
    assert(a == b); 
    return 0;
}