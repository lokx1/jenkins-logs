#include <stdio.h>

void test_bitwise_operations() {
    int a = 5; // Binary: 101
    int b = 3; // Binary: 011

    if((a & b) == 1)
        printf("Test Bitwise AND: Passed\n");
    else
        printf("Test Bitwise AND: Failed\n");

    if((a | b) == 7)
        printf("Test Bitwise OR: Passed\n");
    else
        printf("Test Bitwise OR: Failed\n");

    if((a ^ b) == 6)
        printf("Test Bitwise XOR: Passed\n");
    else
        printf("Test Bitwise XOR: Failed\n");

    if((~a) == -6)
        printf("Test Bitwise NOT for a: Passed\n");
    else
        printf("Test Bitwise NOT for a: Failed\n");
}

int main() {
    test_bitwise_operations();
    return 0;
}