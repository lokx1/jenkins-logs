
#include "stdio.h"

int modulus(int a, int b) {
    return a % b;
}

int main() {
    // Test case 1: Positive numbers
    int result1 = modulus(10, 3);
    printf("modulus(10, 3) = %d\n", result1);

    // Test case 2: Negative dividend
    int result2 = modulus(-10, 3);
    printf("modulus(-10, 3) = %d\n", result2);

    // Test case 3: Negative divisor
    int result3 = modulus(10, -3);
    printf("modulus(10, -3) = %d\n", result3);

    // Test case 4: Both negative
    int result4 = modulus(-10, -3);
    printf("modulus(-10, -3) = %d\n", result4);

    // Test case 5: Dividend is zero
    int result5 = modulus(0, 3);
    printf("modulus(0, 3) = %d\n", result5);

    // Test case 6: Divisor is one
    int result6 = modulus(10, 1);
    printf("modulus(10, 1) = %d\n", result6);

    // Test case 7: Divisor is negative one
    int result7 = modulus(10, -1);
    printf("modulus(10, -1) = %d\n", result7);

    // Test case 8: Divisor larger than dividend
    int result8 = modulus(3, 10);
    printf("modulus(3, 10) = %d\n", result8);

    return 0;
}
