
#include <stdio.h>

void test_bitwise_operations(unsigned int num1, unsigned int num2) {
    // Bitwise AND
    printf("Bitwise AND of %u and %u: %u\n", num1, num2, num1 & num2);

    // Bitwise OR
    printf("Bitwise OR of %u and %u: %u\n", num1, num2, num1 | num2);

    // Bitwise XOR
    printf("Bitwise XOR of %u and %u: %u\n", num1, num2, num1 ^ num2);

    // Bitwise NOT (Unary)
    printf("Bitwise NOT of %u: %u\n", num1, ~num1);

    // Bitwise Left Shift
    printf("Left shift of %u by 2: %u\n", num1, num1 << 2);

    // Bitwise Right Shift
    printf("Right shift of %u by 2: %u\n", num1, num1 >> 2);
}

int main() {
    printf("Test Case 1:\n");
    test_bitwise_operations(10, 6);

    printf("\nTest Case 2:\n");
    test_bitwise_operations(15, 9);

    printf("\nTest Case 3:\n");
    test_bitwise_operations(255, 128);

    printf("\nTest Case 4:\n");
    test_bitwise_operations(1024, 512);

    printf("\nTest Case 5:\n");
    test_bitwise_operations(0, 1);

    return 0;
}
