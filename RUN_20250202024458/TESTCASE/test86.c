#include "stdio.h"

int add(int a, int b) {
    return a + b;
}

int main() {
    // Test case 1: Positive numbers
    if (add(1, 2) != 3) {
        printf("Test case 1 failed\n");
        return 1;
    }

    // Test case 2: Zero
    if (add(0, 0) != 0) {
        printf("Test case 2 failed\n");
        return 1;
    }

    // Test case 3: Negative numbers
    if (add(-1, -2) != -3) {
        printf("Test case 3 failed\n");
        return 1;
    }

    // Test case 4: Positive and negative number
    if (add(5, -3) != 2) {
        printf("Test case 4 failed\n");
        return 1;
    }

    printf("All test cases passed\n");
    return 0;
}