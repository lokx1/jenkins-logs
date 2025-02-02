
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
    printf("GCD of 101 and 10 is: %d\n", gcd(101, 10)); // Expected output: 1
    printf("GCD of 0 and 5 is: %d\n", gcd(0, 5)); // Expected output: 5
    printf("GCD of 5 and 0 is: %d\n", gcd(5, 0)); // Expected output: 5
    printf("GCD of 0 and 0 is: %d\n", gcd(0, 0)); // Expected output: 0
    printf("GCD of -48 and 18 is: %d\n", gcd(-48, 18)); // Expected output: 6
    printf("GCD of 48 and -18 is: %d\n", gcd(48, -18)); // Expected output: 6
    printf("GCD of -48 and -18 is: %d\n", gcd(-48, -18)); // Expected output: 6
    printf("GCD of 48 and 48 is: %d\n", gcd(48, 48)); // Expected output: 48
    return 0;
}
