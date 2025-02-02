
#include <stdio.h>

void test_bitwise_operations() {
    unsigned int num1 = 10; // Binary: 1010
    unsigned int num2 = 6;  // Binary: 0110

    // Test Bitwise AND
    if ((num1 & num2) == 2) {
        printf("Test Bitwise AND passed.\n");
    } else {
        printf("Test Bitwise AND failed.\n");
    }

    // Test Bitwise OR
    if ((num1 | num2) == 14) {
        printf("Test Bitwise OR passed.\n");
    } else {
        printf("Test Bitwise OR failed.\n");
    }

    // Test Bitwise XOR
    if ((num1 ^ num2) == 12) {
        printf("Test Bitwise XOR passed.\n");
    } else {
        printf("Test Bitwise XOR failed.\n");
    }

    // Test Bitwise NOT
    if ((~num1) == 4294967285U) {
        printf("Test Bitwise NOT passed.\n");
    } else {
        printf("Test Bitwise NOT failed.\n");
    }

    // Test Bitwise Left Shift
    if ((num1 << 2) == 40) {
        printf("Test Bitwise Left Shift passed.\n");
    } else {
        printf("Test Bitwise Left Shift failed.\n");
    }

    // Test Bitwise Right Shift
    if ((num1 >> 2) == 2) {
        printf("Test Bitwise Right Shift passed.\n");
    } else {
        printf("Test Bitwise Right Shift failed.\n");
    }
}

int main() {
    test_bitwise_operations();
    return 0;
}
