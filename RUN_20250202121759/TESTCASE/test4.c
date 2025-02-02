
#include "stdio.h"

int subtract(int a, int b) {
    return a - b;
}

int main() {
    // Test case 1: Positive numbers
    int result1 = subtract(10, 5);
    printf("Test 1: subtract(10, 5) = %d\n", result1);

    // Test case 2: Negative numbers
    int result2 = subtract(-10, -5);
    printf("Test 2: subtract(-10, -5) = %d\n", result2);

    // Test case 3: Positive and negative numbers
    int result3 = subtract(10, -5);
    printf("Test 3: subtract(10, -5) = %d\n", result3);

    // Test case 4: Zero
    int result4 = subtract(0, 0);
    printf("Test 4: subtract(0, 0) = %d\n", result4);

    // Test case 5: Large numbers
    int result5 = subtract(1000000, 500000);
    printf("Test 5: subtract(1000000, 500000) = %d\n", result5);

    return 0;
}
