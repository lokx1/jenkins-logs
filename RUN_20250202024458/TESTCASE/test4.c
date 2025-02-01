#include "stdio.h"

int subtract(int a, int b) {
    return a - b;
}

int main() {
    int result1 = subtract(10, 5);
    printf("Test Case 1: %d\n", result1); // Expect: 5

    int result2 = subtract(-3, -7);
    printf("Test Case 2: %d\n", result2); // Expect: 4

    int result3 = subtract(0, 0);
    printf("Test Case 3: %d\n", result3); // Expect: 0

    int result4 = subtract(100, 200);
    printf("Test Case 4: %d\n", result4); // Expect: -100

    return 0;
}