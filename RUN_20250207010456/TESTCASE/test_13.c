#include <stdio.h>
#include "p15.c"

int main() {
    int a = 5; // Binary: 101
    int b = 3; // Binary: 011

    printf("Bitwise AND: %d\n", a & b); // Binary: 001 (1)
    if(a & b != 1) {
        printf("Test failed!\n");
        return -1;
    }

    printf("Bitwise OR: %d\n", a | b);  // Binary: 111 (7)
    if(a | b != 7) {
        printf("Test failed!\n");
        return -1;
    }

    printf("Bitwise XOR: %d\n", a ^ b); // Binary: 110 (6)
    if(a ^ b != 6) {
        printf("Test failed!\n");
        return -1;
    }

    printf("Bitwise NOT for a: %d\n", ~a); // Binary: 1111111111111111111111111111000 (6)
    if(~a != 6) {
        printf("Test failed!\n");
        return -1;
    }

    return 0;
}