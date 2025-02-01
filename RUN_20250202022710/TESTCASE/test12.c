#include "stdio.h"

int add(int a, int b) {
    return a + b;
}

int main() {
    int result1 = add(5, 10);
    printf("Test Case 1: %d\n", result1); // Expected output: 15

    int result2 = add(-5, 10);
    printf("Test Case 2: %d\n", result2); // Expected output: 5

    int result3 = add(0, 0);
    printf("Test Case 3: %d\n", result3); // Expected output: 0

    int result4 = add(-5, -10);
    printf("Test Case 4: %d\n", result4); // Expected output: -15

    return 0;
}