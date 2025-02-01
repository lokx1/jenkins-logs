#include "stdio.h"

int add(int a, int b) {
    return a + b;
}

int main() {
    int result;

    // Test case 1: Adding two positive numbers
    result = add(5, 10);
    printf("Test case 1 result: %d\n", result); // Expected output: 15

    // Test case 2: Adding two negative numbers
    result = add(-5, -10);
    printf("Test case 2 result: %d\n", result); // Expected output: -15

    // Test case 3: Adding a positive number and a negative number
    result = add(5, -10);
    printf("Test case 3 result: %d\n", result); // Expected output: -5

    // Test case 4: Adding zero and a positive number
    result = add(0, 10);
    printf("Test case 4 result: %d\n", result); // Expected output: 10

    // Test case 5: Adding zero and a negative number
    result = add(0, -10);
    printf("Test case 5 result: %d\n", result); // Expected output: -10

    return 0;
}