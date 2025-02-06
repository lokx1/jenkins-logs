#include "p79.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

int main() {
    // Test #1: Check if PI is defined and has the correct value
    assert(PI == 3.14159);
    
    // Test #2: Check if SQUARE macro works correctly for different inputs
    assert(SQUARE(0) == 0);
    assert(SQUARE(1) == 1);
    assert(SQUARE(2) == 4);
    assert(SQUARE(3) == 9);
    
    // Test #3: Check if DEBUG and TEST macros are defined correctly
#ifdef DEBUG
    printf("DEBUG is defined\n");
#else
    printf("DEBUG is not defined\n");
#endif
    
#ifndef TEST
    printf("TEST is not defined\n");
#else
    printf("TEST is defined\n");
#endif
    
    return 0;
}