
#include "stdio.h"

int add(int a, int b) {
    return a + b;
}

int main() {
    // Test case 1: Positive numbers
    int result1 = add(5, 10);
    printf("add(5, 10) = %d\n", result1);

    // Test case 2: Negative numbers
    int result2 = add(-5, -10);
    printf("add(-5, -10) = %d\n", result2);

    // Test case 3: Positive and negative number
    int result3 = add(5, -10);
    printf("add(5, -10) = %d\n", result3);

    // Test case 4: Zero as one of the operands
    int result4 = add(0, 10);
    printf("add(0, 10) = %d\n", result4);

    // Test case 5: Both operands are zero
    int result5 = add(0, 0);
    printf("add(0, 0) = %d\n", result5);

    return 0;
}
