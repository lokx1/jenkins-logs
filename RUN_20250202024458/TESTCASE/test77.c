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
    printf("GCD of 48 and 18 is: %d\n", gcd(48, 18)); // Expected output is 6
    printf("GCD of 101 and 103 is: %d\n", gcd(101, 103)); // Expected output is 1
    printf("GCD of 111 and 222 is: %d\n", gcd(111, 222)); // Expected output is 111
    printf("GCD of 0 and 5 is: %d\n", gcd(0, 5)); // Expected output is 5
    printf("GCD of 5 and 0 is: %d\n", gcd(5, 0)); // Expected output is 5

    return 0;
}