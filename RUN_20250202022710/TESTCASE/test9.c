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
    printf("GCD of 48 and 18 is: %d\n", gcd(48, 18)); // Expected output: 6

    // Test case 2: gcd of 101 and 103
    printf("GCD of 101 and 103 is: %d\n", gcd(101, 103)); // Expected output: 1

    // Test case 3: gcd of 0 and 5
    printf("GCD of 0 and 5 is: %d\n", gcd(0, 5)); // Expected output: 5

    // Test case 4: gcd of 5 and 0
    printf("GCD of 5 and 0 is: %d\n", gcd(5, 0)); // Expected output: 5

    // Test case 5: gcd of 0 and 0
    printf("GCD of 0 and 0 is: %d\n", gcd(0, 0)); // Expected output: 0

    return 0;
}