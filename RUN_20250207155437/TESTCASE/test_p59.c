#include <stdio.h>
#include "p59.c"

int main() {
    int num;
    
    // Testing factorial function with 0 input
    printf("Testing factorial(0): ");
    if (factorial(0) == 1) {
        printf("Passed\n");
    } else {
        printf("Failed\n");
    }
    
    // Testing factorial function with 1 input
    printf("Testing factorial(1): ");
    if (factorial(1) == 1) {
        printf("Passed\n");
    } else {
        printf("Failed\n");
    }
    
    // Testing factorial function with 5 input
    printf("Testing factorial(5): ");
    if (factorial(5) == 120) {
        printf("Passed\n");
    } else {
        printf("Failed\n");
    }
    
    // Testing factorial function with negative input
    printf("Testing factorial(-3): ");
    if (factorial(-3) == -1) {
        printf("Passed\n");
    } else {
        printf("Failed\n");
    }
    
    return 0;
}