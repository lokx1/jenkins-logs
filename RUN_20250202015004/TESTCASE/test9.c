
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
    printf("GCD of 48 and 18 is: %d\n", gcd(48, 18)); // Expected output: 6
    printf("GCD of 100 and 25 is: %d\n", gcd(100, 25)); // Expected output: 25
    printf("GCD of 7 and 3 is: %d\n", gcd(7, 3)); // Expected output: 1
    printf("GCD of 0 and 5 is: %d\n", gcd(0, 5)); // Expected output: 5
    printf("GCD of 5 and 0 is: %d\n", gcd(5, 0)); // Expected output: 5
    printf("GCD of 0 and 0 is: %d\n", gcd(0, 0)); // Expected output: 0
    printf("GCD of -48 and 18 is: %d\n", gcd(-48, 18)); // Expected output: 6
    printf("GCD of 48 and -18 is: %d\n", gcd(48, -18)); // Expected output: 6
    printf("GCD of -48 and -18 is: %d\n", gcd(-48, -18)); // Expected output: 6
    return 0;
}
