
#include "stdio.h"

int modulus(int a, int b) {
    return a % b;
}

int main() {
    // Test case 1: Positive numbers
    int a1 = 10, b1 = 3;
    printf("modulus(%d, %d) = %d\n", a1, b1, modulus(a1, b1));

    // Test case 2: Negative and positive number
    int a2 = -10, b2 = 3;
    printf("modulus(%d, %d) = %d\n", a2, b2, modulus(a2, b2));

    // Test case 3: Positive and negative number
    int a3 = 10, b3 = -3;
    printf("modulus(%d, %d) = %d\n", a3, b3, modulus(a3, b3));

    // Test case 4: Negative numbers
    int a4 = -10, b4 = -3;
    printf("modulus(%d, %d) = %d\n", a4, b4, modulus(a4, b4));

    // Test case 5: Dividend is zero
    int a5 = 0, b5 = 3;
    printf("modulus(%d, %d) = %d\n", a5, b5, modulus(a5, b5));

    // Test case 6: Divisor is one
    int a6 = 10, b6 = 1;
    printf("modulus(%d, %d) = %d\n", a6, b6, modulus(a6, b6));

    // Test case 7: Divisor is negative one
    int a7 = 10, b7 = -1;
    printf("modulus(%d, %d) = %d\n", a7, b7, modulus(a7, b7));

    // Test case 8: Divisor is greater than dividend
    int a8 = 3, b8 = 10;
    printf("modulus(%d, %d) = %d\n", a8, b8, modulus(a8, b8));

    // Test case 9: Dividend is equal to divisor
    int a9 = 10, b9 = 10;
    printf("modulus(%d