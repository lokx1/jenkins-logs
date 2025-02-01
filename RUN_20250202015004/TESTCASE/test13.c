
#include "stdio.h"

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    // Test case 1: a < b
    int result1 = min(3, 5);
    printf("min(3, 5) = %d\n", result1); // Expected output: 3

    // Test case 2: a > b
    int result2 = min(10, 7);
    printf("min(10, 7) = %d\n", result2); // Expected output: 7

    // Test case 3: a == b
    int result3 = min(4, 4);
    printf("min(4, 4) = %d\n", result3); // Expected output: 4

    // Test case 4: a is negative, b is positive
    int result4 = min(-3, 2);
    printf("min(-3, 2) = %d\n", result4); // Expected output: -3

    // Test case 5: both a and b are negative
    int result5 = min(-5, -8);
    printf("min(-5, -8) = %d\n", result5); // Expected output: -8

    // Test case 6: a is zero, b is positive
    int result6 = min(0, 5);
    printf("min(0, 5) = %d\n", result6); // Expected output: 0

    return 0;
}
