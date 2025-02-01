
#include "stdio.h"

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int result;

    // Test case 1: a is greater than b
    result = max(10, 5);
    printf("max(10, 5) = %d\n", result); // Expected output: 10

    // Test case 2: b is greater than a
    result = max(3, 7);
    printf("max(3, 7) = %d\n", result); // Expected output: 7

    // Test case 3: a is equal to b
    result = max(4, 4);
    printf("max(4, 4) = %d\n", result); // Expected output: 4

    // Test case 4: negative numbers, a is greater
    result = max(-1, -10);
    printf("max(-1, -10) = %d\n", result); // Expected output: -1

    // Test case 5: negative numbers, b is greater
    result = max(-20, -5);
    printf("max(-20, -5) = %d\n", result); // Expected output: -5

    // Test case 6: zero and positive number
    result = max(0, 8);
    printf("max(0, 8) = %d\n", result); // Expected output: 8

    // Test case 7: zero and negative number
    result = max(0, -3);
    printf("max(0, -3) = %d\n", result); // Expected output: 0

    return 0;
}
