
#include "stdio.h"

int multiply(int a, int b) {
    return a * b;
}

int main() {
    // Test case 1: both positive numbers
    int result1 = multiply(3, 4);
    printf("Test 1: multiply(3, 4) = %d\n", result1);

    // Test case 2: one positive, one negative number
    int result2 = multiply(-5, 6);
    printf("Test 2: multiply(-5, 6) = %d\n", result2);

    // Test case 3: both negative numbers
    int result3 = multiply(-7, -8);
    printf("Test 3: multiply(-7, -8) = %d\n", result3);

    // Test case 4: one number is zero
    int result4 = multiply(0, 9);
    printf("Test 4: multiply(0, 9) = %d\n", result4);

    // Test case 5: both numbers are zero
    int result5 = multiply(0, 0);
    printf("Test 5: multiply(0, 0) = %d\n", result5);

    return 0;
}
