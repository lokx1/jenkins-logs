
#include "stdio.h"

int add(int a, int b) {
    return a + b;
}

int main() {
    // Test case 1: Add two positive numbers
    int result1 = add(3, 4);
    printf("add(3, 4) = %d\n", result1); // Expected output: 7

    // Test case 2: Add a positive number and zero
    int result2 = add(5, 0);
    printf("add(5, 0) = %d\n", result2); // Expected output: 5

    // Test case 3: Add two negative numbers
    int result3 = add(-3, -7);
    printf("add(-3, -7) = %d\n", result3); // Expected output: -10

    // Test case 4: Add a positive and a negative number
    int result4 = add(10, -5);
    printf("add(10, -5) = %d\n", result4); // Expected output: 5

    // Test case 5: Add zero and zero
    int result5 = add(0, 0);
    printf("add(0, 0) = %d\n", result5); // Expected output: 0

    return 0;
}
