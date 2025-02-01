
#include <stdio.h>

void test_bitwise_operations() {
    int a = 5; // Binary: 101
    int b = 3; // Binary: 011

    printf("Test 1: Bitwise AND: %d\n", a & b); // Expected: 1
    printf("Test 2: Bitwise OR: %d\n", a | b);  // Expected: 7
    printf("Test 3: Bitwise XOR: %d\n", a ^ b); // Expected: 6
    printf("Test 4: Bitwise NOT for a: %d\n", ~a); // Expected: -6
}

int main() {
    test_bitwise_operations();
    return 0;
}
