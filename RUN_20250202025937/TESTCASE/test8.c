
#include <stdio.h>

void test_bitwise_operations() {
    unsigned int num1 = 10; // Binary: 1010
    unsigned int num2 = 6;  // Binary: 0110

    // Expected output for each operation
    unsigned int expected_and = 2; // Binary: 0010
    unsigned int expected_or = 14; // Binary: 1110
    unsigned int expected_xor = 12; // Binary: 1100
    unsigned int expected_not_num1 = 4294967285; // 32-bit unsigned NOT of 10
    unsigned int expected_left_shift = 40; // Binary: 101000
    unsigned int expected_right_shift = 2; // Binary: 10

    // Test Bitwise AND
    unsigned int result_and = num1 & num2;
    printf("Bitwise AND: %u (Expected: %u)\n", result_and, expected_and);

    // Test Bitwise OR
    unsigned int result_or = num1 | num2;
    printf("Bitwise OR: %u (Expected: %u)\n", result_or, expected_or);

    // Test Bitwise XOR
    unsigned int result_xor = num1 ^ num2;
    printf("Bitwise XOR: %u (Expected: %u)\n", result_xor, expected_xor);

    // Test Bitwise NOT (Unary)
    unsigned int result_not_num1 = ~num1;
    printf("Bitwise NOT of num1: %u (Expected: %u)\n", result_not_num1, expected_not_num1);

    // Test Bitwise Left Shift
    unsigned int result_left_shift = num1 << 2;
    printf("Left shift of num1 by 2: %u (Expected: %u)\n", result_left_shift, expected_left_shift);

    // Test Bitwise Right Shift
    unsigned int result_right_shift = num1 >> 2;
    printf("Right shift of num1 by 2: %u (Expected: %u)\n", result_right_shift, expected_right_shift);
}

int main() {
    test_bitwise_operations();
    return 0;
}
