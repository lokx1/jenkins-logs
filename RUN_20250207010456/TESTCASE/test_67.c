#include <stdio.h>
#include "p35.c"

void test_greet() {
    void (*ptr)() = &greet; // Define function pointer to greet function
    (*ptr)(); // Calling function using function pointer
}

int main() {
    test_greet(); // Run the test case for greet function
    return 0;
}