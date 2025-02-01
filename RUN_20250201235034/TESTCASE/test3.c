
#include "stdio.h"

int multiply(int a, int b) {
    return a * b;
}

int main() {
    // Test case 1: Positive numbers
    int result1 = multiply(3, 4);
    printf("multiply(3, 4) = %d\n", result1);

    // Test case 2: Negative and positive number
    int result2 = multiply(-2, 5);
    printf("multiply(-2, 5) = %d\n", result2);

    // Test case 3: Two negative numbers
    int result3 = multiply(-3, -6);
    printf("multiply(-3, -6) = %d\n", result3);

    // Test case 4: Zero and a positive number
    int result4 = multiply(0, 7);
    printf("multiply(0, 7) = %d\n", result4);

    // Test case 5: Zero and a negative number
    int result5 = multiply(0, -8);
    printf("multiply(0, -8) = %d\n", result5);

    // Test case 6: Large numbers
    int result6 = multiply(1000, 500);
    printf("multiply(1000, 500) = %d\n", result6);

    return 0;
}
