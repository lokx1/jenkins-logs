#include "stdio.h"

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    // Test case 1: when a is less than b
    int a = 5;
    int b = 10;
    printf("Test case 1: Minimum of %d and %d is %d\n", a, b, min(a, b));

    // Test case 2: when a is greater than b
    a = 15;
    b = 10;
    printf("Test case 2: Minimum of %d and %d is %d\n", a, b, min(a, b));

    // Test case 3: when a is equal to b
    a = 20;
    b = 20;
    printf("Test case 3: Minimum of %d and %d is %d\n", a, b, min(a, b));

    return 0;
}