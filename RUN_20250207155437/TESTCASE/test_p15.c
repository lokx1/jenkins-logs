#include <stdio.h>
#include "p15.c"

int main() {
    int a = 5; // Binary: 101
    int b = 3; // Binary: 011

    printf("Bitwise AND: %d\n", a & b); // Binary: 001 (1)
    printf("Bitwise OR: %d\n", a | b);  // Binary: 111 (7)
    printf("Bitwise XOR: %d\n", a ^ b); // Binary: 110 (6)
    printf("Bitwise NOT for a: %d\n", ~a); // Binary: 1111111111111111111111111111010 (-6)

    return 0;
}