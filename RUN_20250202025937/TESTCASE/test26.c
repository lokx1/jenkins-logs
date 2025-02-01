
#include "stdio.h"

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    // Test case 1: a is greater than b
    int result1 = max(10, 5);
    printf("max(10, 5) = %d\n", result1); // Expected output: 10

    // Test case 2: b is greater than a
    int result2 = max(3, 7);
    printf("max(3, 7) = %d\n", result2); // Expected output: 7

    // Test case 3: a is equal to b
    int result3 = max(4, 4);
    printf("max(4, 4) = %d\n", result3); // Expected output: 4

    // Test case 4: negative numbers, a is greater than b
    int result4 = max(-1, -5);
    printf("max(-1, -5) = %d\n", result4); // Expected output: -1

    // Test case 5: negative numbers, b is greater than a
    int result5 = max(-10, -2);
    printf("max(-10, -2) = %d\n", result5); // Expected output: -2

    // Test case 6: a is zero, b is positive
    int result6 = max(0, 5);
    printf("max(0, 5) = %d\n", result6); // Expected output: 5

    // Test case 7: a is positive, b is zero
    int result7 = max(5, 0);
    printf("max(5, 0) = %d\n", result7); // Expected output: 5

    // Test case 8: a is zero, b is negative
    int result8 = max(0, -5);
    printf("max(0, -5) = %d\n", result8); // Expected output: 0

    // Test case 9: a is negative, b is zero
    int result9 = max(-5, 0);
    printf("max(-5, 0) = %d\n", result9); // Expected output: 0

    return 0;
}
