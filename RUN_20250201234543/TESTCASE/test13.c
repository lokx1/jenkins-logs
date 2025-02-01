
#include "stdio.h"

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    // Test case 1: a is less than b
    int result1 = min(3, 5);
    printf("min(3, 5) = %d\n", result1);

    // Test case 2: a is greater than b
    int result2 = min(10, 7);
    printf("min(10, 7) = %d\n", result2);

    // Test case 3: a is equal to b
    int result3 = min(4, 4);
    printf("min(4, 4) = %d\n", result3);

    // Test case 4: a is negative, b is positive
    int result4 = min(-3, 5);
    printf("min(-3, 5) = %d\n", result4);

    // Test case 5: a is positive, b is negative
    int result5 = min(3, -5);
    printf("min(3, -5) = %d\n", result5);

    // Test case 6: both a and b are negative
    int result6 = min(-7, -2);
    printf("min(-7, -2) = %d\n", result6);

    return 0;
}
