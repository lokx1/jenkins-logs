
#include "stdio.h"

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    // Test case 1: gcd of 48 and 18
    int result1 = gcd(48, 18);
    printf("gcd(48, 18) = %d\n", result1); // Expected output: 6

    // Test case 2: gcd of 101 and 10
    int result2 = gcd(101, 10);
    printf("gcd(101, 10) = %d\n", result2); // Expected output: 1

    // Test case 3: gcd of 0 and 5
    int result3 = gcd(0, 5);
    printf("gcd(0, 5) = %d\n", result3); // Expected output: 5

    // Test case 4: gcd of 5 and 0
    int result4 = gcd(5, 0);
    printf("gcd(5, 0) = %d\n", result4); // Expected output: 5

    // Test case 5: gcd of 0 and 0
    int result5 = gcd(0, 0);
    printf("gcd(0, 0) = %d\n", result5); // Expected output: 0

    // Test case 6: gcd of 270 and 192
    int result6 = gcd(270, 192);
    printf("gcd(270, 192) = %d\n", result6); // Expected output: 6

    // Test case 7: gcd of two equal numbers
    int result7 = gcd(7, 7);
    printf("gcd(7, 7) = %d\n", result7); // Expected output: 7

    // Test case 8: gcd of a negative and positive number
    int result8 = gcd(-48, 18);
    printf("gcd(-48, 18) = %d\n", result8); // Expected output: 6

    return 0;
}
