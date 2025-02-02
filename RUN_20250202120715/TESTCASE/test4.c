
#include "stdio.h"

int subtract(int a, int b) {
    return a - b;
}

int main() {
    // Test case 1
    int result1 = subtract(10, 5);
    printf("subtract(10, 5) = %d\n", result1);

    // Test case 2
    int result2 = subtract(0, 0);
    printf("subtract(0, 0) = %d\n", result2);

    // Test case 3
    int result3 = subtract(-5, -10);
    printf("subtract(-5, -10) = %d\n", result3);

    // Test case 4
    int result4 = subtract(100, 50);
    printf("subtract(100, 50) = %d\n", result4);

    // Test case 5
    int result5 = subtract(5, 10);
    printf("subtract(5, 10) = %d\n", result5);

    return 0;
}
