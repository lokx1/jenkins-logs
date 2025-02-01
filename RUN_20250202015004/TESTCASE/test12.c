
#include "stdio.h"

int add(int a, int b) {
    return a + b;
}

int main() {
    // Test case 1: Positive numbers
    int result1 = add(5, 10);
    printf("add(5, 10) = %d\n", result1); // Expected output: 15

    // Test case 2: Negative numbers
    int result2 = add(-3, -7);
    printf("add(-3, -7) = %d\n", result2); // Expected output: -10

    // Test case 3: Positive and negative number
    int result3 = add(10, -4);
    printf("add(10, -4) = %d\n", result3); // Expected output: 6

    // Test case 4: Zero
    int result4 = add(0, 5);
    printf("add(0, 5) = %d\n", result4); // Expected output: 5

    // Test case 5: Both zeros
    int result5 = add(0, 0);
    printf("add(0, 0) = %d\n", result5); // Expected output: 0

    return 0;
}
