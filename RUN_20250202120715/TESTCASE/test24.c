
#include <stdio.h>

void test_bitwise_operations(int a, int b) {
    printf("Testing with a = %d, b = %d\n", a, b);
    printf("Bitwise AND: %d\n", a & b);
    printf("Bitwise OR: %d\n", a | b);
    printf("Bitwise XOR: %d\n", a ^ b);
    printf("Bitwise NOT for a: %d\n", ~a);
    printf("Bitwise NOT for b: %d\n", ~b);
}

int main() {
    test_bitwise_operations(5, 3);  // Original test case
    test_bitwise_operations(0, 0);  // Edge case: both zero
    test_bitwise_operations(-1, -1); // Edge case: both negative
    test_bitwise_operations(7, 8);  // Different bits set
    test_bitwise_operations(15, 1); // Testing with all bits set in a small range
    test_bitwise_operations(1024, 512); // Larger numbers with single bits set

    return 0;
}
