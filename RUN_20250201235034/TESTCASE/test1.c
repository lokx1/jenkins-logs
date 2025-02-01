
#include "stdio.h"

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int result;

    // Test case 1: a is greater than b
    result = max(10, 5);
    printf("max(10, 5) = %d\n", result);

    // Test case 2: b is greater than a
    result = max(3, 8);
    printf("max(3, 8) = %d\n", result);

    // Test case 3: a is equal to b
    result = max(7, 7);
    printf("max(7, 7) = %d\n", result);

    // Test case 4: a is negative and b is positive
    result = max(-5, 4);
    printf("max(-5, 4) = %d\n", result);

    // Test case 5: a is positive and b is negative
    result = max(12, -3);
    printf("max(12, -3) = %d\n", result);

    // Test case 6: both a and b are negative
    result = max(-8, -15);
    printf("max(-8, -15) = %d\n", result);

    return 0;
}
