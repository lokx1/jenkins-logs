
#include "stdio.h"

int add(int a, int b) {
    return a + b;
}

int main() {
    // Test case 1: Positive numbers
    int result1 = add(3, 5);
    printf("add(3, 5) = %d\n", result1);

    // Test case 2: Negative numbers
    int result2 = add(-3, -5);
    printf("add(-3, -5) = %d\n", result2);

    // Test case 3: Positive and negative number
    int result3 = add(3, -5);
    printf("add(3, -5) = %d\n", result3);

    // Test case 4: Zero
    int result4 = add(0, 5);
    printf("add(0, 5) = %d\n", result4);

    // Test case 5: Both zero
    int result5 = add(0, 0);
    printf("add(0, 0) = %d\n", result5);

    // Test case 6: Large numbers
    int result6 = add(2147483647, -1);
    printf("add(2147483647, -1) = %d\n", result6);

    return 0;
}
