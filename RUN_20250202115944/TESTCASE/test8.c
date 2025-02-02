
#include <stdio.h>

void testBitwiseOperations() {
    unsigned int num1 = 10; // Binary: 1010
    unsigned int num2 = 6;  // Binary: 0110

    // Test Bitwise AND
    unsigned int result_and = num1 & num2;
    printf("Bitwise AND: %u (Expected: 2)\n", result_and);

    // Test Bitwise OR
    unsigned int result_or = num1 | num2;
    printf("Bitwise OR: %u (Expected: 14)\n", result_or);

    // Test Bitwise XOR
    unsigned int result_xor = num1 ^ num2;
    printf("Bitwise XOR: %u (Expected: 12)\n", result_xor);

    // Test Bitwise NOT
    unsigned int result_not = ~num1;
    printf("Bitwise NOT of num1: %u (Expected: 4294967285)\n", result_not);

    // Test Bitwise Left Shift
    unsigned int result_left_shift = num1 << 2;
    printf("Left shift of num1 by 2: %u (Expected: 40)\n", result_left_shift);

    // Test Bitwise Right Shift
    unsigned int result_right_shift = num1 >> 2;
    printf("Right shift of num1 by 2: %u (Expected: 2)\n", result_right_shift);
}

int main() {
    testBitwiseOperations();
    return 0;
}
