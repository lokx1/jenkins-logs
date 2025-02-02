
#include "stdio.h"

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int result;

    // Test case 1: Positive numbers
    result = multiply(3, 4);
    printf("Test case 1: multiply(3, 4) = %d\n", result);

    // Test case 2: Negative and positive number
    result = multiply(-2, 5);
    printf("Test case 2: multiply(-2, 5) = %d\n", result);

    // Test case 3: Two negative numbers
    result = multiply(-3, -6);
    printf("Test case 3: multiply(-3, -6) = %d\n", result);

    // Test case 4: Zero and a positive number
    result = multiply(0, 7);
    printf("Test case 4: multiply(0, 7) = %d\n", result);

    // Test case 5: Zero and a negative number
    result = multiply(0, -8);
    printf("Test case 5: multiply(0, -8) = %d\n", result);

    // Test case 6: Large numbers
    result = multiply(12345, 6789);
    printf("Test case 6: multiply(12345, 6789) = %d\n", result);

    return 0;
}
