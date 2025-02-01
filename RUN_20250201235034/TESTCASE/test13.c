
#include "stdio.h"

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    // Test case 1: a < b
    int result1 = min(3, 5);
    printf("min(3, 5) = %d\n", result1); // Expected output: 3

    // Test case 2: a > b
    int result2 = min(10, 2);
    printf("min(10, 2) = %d\n", result2); // Expected output: 2

    // Test case 3: a == b
    int result3 = min(7, 7);
    printf("min(7, 7) = %d\n", result3); // Expected output: 7

    // Test case 4: a is negative, b is positive
    int result4 = min(-3, 4);
    printf("min(-3, 4) = %d\n", result4); // Expected output: -3

    // Test case 5: a is positive, b is negative
    int result5 = min(5, -6);
    printf("min(5, -6) = %d\n", result5); // Expected output: -6

    // Test case 6: both a and b are negative
    int result6 = min(-8, -2);
    printf("min(-8, -2) = %d\n", result6); // Expected output: -8

    return 0;
}
