
#include "stdio.h"

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    // Test case 1: a is greater than b
    int result1 = max(10, 5);
    printf("max(10, 5) = %d\n", result1); // Expected output: 10

    // Test case 2: a is less than b
    int result2 = max(3, 7);
    printf("max(3, 7) = %d\n", result2); // Expected output: 7

    // Test case 3: a is equal to b
    int result3 = max(4, 4);
    printf("max(4, 4) = %d\n", result3); // Expected output: 4

    // Test case 4: a is negative, b is positive
    int result4 = max(-2, 5);
    printf("max(-2, 5) = %d\n", result4); // Expected output: 5

    // Test case 5: a is positive, b is negative
    int result5 = max(6, -3);
    printf("max(6, -3) = %d\n", result5); // Expected output: 6

    // Test case 6: both a and b are negative
    int result6 = max(-5, -10);
    printf("max(-5, -10) = %d\n", result6); // Expected output: -5

    return 0;
}
