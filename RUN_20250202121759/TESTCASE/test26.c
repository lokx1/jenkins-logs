
#include "stdio.h"

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    // Test case 1: a is greater than b
    int result1 = max(5, 3);
    printf("max(5, 3) = %d\n", result1);

    // Test case 2: b is greater than a
    int result2 = max(2, 4);
    printf("max(2, 4) = %d\n", result2);

    // Test case 3: a is equal to b
    int result3 = max(7, 7);
    printf("max(7, 7) = %d\n", result3);

    // Test case 4: a is negative, b is positive
    int result4 = max(-1, 1);
    printf("max(-1, 1) = %d\n", result4);

    // Test case 5: a is positive, b is negative
    int result5 = max(1, -1);
    printf("max(1, -1) = %d\n", result5);

    // Test case 6: both a and b are negative
    int result6 = max(-3, -5);
    printf("max(-3, -5) = %d\n", result6);

    // Test case 7: a is zero, b is positive
    int result7 = max(0, 5);
    printf("max(0, 5) = %d\n", result7);

    // Test case 8: a is positive, b is zero
    int result8 = max(5, 0);
    printf("max(5, 0) = %d\n", result8);

    // Test case 9: both a and b are zero
    int result9 = max(0, 0);
    printf("max(0, 0) = %d\n", result9);

    return 0;
}
