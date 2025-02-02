
#include <stdio.h>

void test_bitwise_operations(int a, int b) {
    printf("Testing with a = %d, b = %d\n", a, b);
    printf("Bitwise AND: %d\n", a & b);
    printf("Bitwise OR: %d\n", a | b);
    printf("Bitwise XOR: %d\n", a ^ b);
    printf("Bitwise NOT for a: %d\n", ~a);
    printf("Bitwise NOT for b: %d\n", ~b);
    printf("\n");
}

int main() {
    // Test case 1: a = 5, b = 3
    test_bitwise_operations(5, 3);

    // Test case 2: a = 0, b = 0
    test_bitwise_operations(0, 0);

    // Test case 3: a = -1, b = 1
    test_bitwise_operations(-1, 1);

    // Test case 4: a = 7, b = 8
    test_bitwise_operations(7, 8);

    // Test case 5: a = 15, b = 15
    test_bitwise_operations(15, 15);

    return 0;
}
