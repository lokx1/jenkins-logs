
#include "stdio.h"

int subtract(int a, int b) {
    return a - b;
}

int main() {
    // Test case 1: Positive numbers
    int result1 = subtract(10, 5);
    printf("subtract(10, 5) = %d\n", result1);

    // Test case 2: Negative numbers
    int result2 = subtract(-10, -5);
    printf("subtract(-10, -5) = %d\n", result2);

    // Test case 3: Mixed positive and negative numbers
    int result3 = subtract(10, -5);
    printf("subtract(10, -5) = %d\n", result3);

    // Test case 4: Zero as the first argument
    int result4 = subtract(0, 5);
    printf("subtract(0, 5) = %d\n", result4);

    // Test case 5: Zero as the second argument
    int result5 = subtract(5, 0);
    printf("subtract(5, 0) = %d\n", result5);

    // Test case 6: Both arguments zero
    int result6 = subtract(0, 0);
    printf("subtract(0, 0) = %d\n", result6);

    // Test case 7: Large numbers
    int result7 = subtract(1000000, 500000);
    printf("subtract(1000000, 500000) = %d\n", result7);

    return 0;
}
