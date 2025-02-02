
#include "stdio.h"

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    // Test case 1: a is greater than b
    int a1 = 5, b1 = 3;
    printf("Test 1: max(%d, %d) = %d\n", a1, b1, max(a1, b1)); // Expected output: 5

    // Test case 2: b is greater than a
    int a2 = 2, b2 = 8;
    printf("Test 2: max(%d, %d) = %d\n", a2, b2, max(a2, b2)); // Expected output: 8

    // Test case 3: a is equal to b
    int a3 = 7, b3 = 7;
    printf("Test 3: max(%d, %d) = %d\n", a3, b3, max(a3, b3)); // Expected output: 7

    // Test case 4: a is negative, b is positive
    int a4 = -10, b4 = 5;
    printf("Test 4: max(%d, %d) = %d\n", a4, b4, max(a4, b4)); // Expected output: 5

    // Test case 5: both a and b are negative
    int a5 = -3, b5 = -7;
    printf("Test 5: max(%d, %d) = %d\n", a5, b5, max(a5, b5)); // Expected output: -3

    return 0;
}
