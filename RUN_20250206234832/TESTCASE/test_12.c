#include <stdio.h>
#include "p35.c"

int main(void) {
    void (*ptr)() = &greet;
    (*ptr)(); // Calling function using function pointer
    return 0;
}