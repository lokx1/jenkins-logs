
#include <stdio.h>

void test_bitwise_operations() {
    int a = 5; // Binary: 101
    int b = 3; // Binary: 011

    int result_and = a & b; // Expected: 1
    int result_or = a | b;  // Expected: 7
    int result_xor = a ^ b; // Expected: 6
    int result_not_a = ~a;  // Expected: -6

    printf("Test Bitwise AND: %d\n", result_and);
    printf("Test Bitwise OR: %d\n", result_or);
    printf("Test Bitwise XOR: %d\n", result_xor);
    printf("Test Bitwise NOT for a: %d\n", result_not_a);
}

int main() {
    test_bitwise_operations();
    return 0;
}
