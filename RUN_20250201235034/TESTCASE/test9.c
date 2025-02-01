
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
    printf("gcd(48, 18) = %d\n", gcd(48, 18)); // Expected output: 6
    printf("gcd(101, 10) = %d\n", gcd(101, 10)); // Expected output: 1
    printf("gcd(0, 5) = %d\n", gcd(0, 5)); // Expected output: 5
    printf("gcd(5, 0) = %d\n", gcd(5, 0)); // Expected output: 5
    printf("gcd(0, 0) = %d\n", gcd(0, 0)); // Expected output: 0
    printf("gcd(54, 24) = %d\n", gcd(54, 24)); // Expected output: 6
    printf("gcd(7, 3) = %d\n", gcd(7, 3)); // Expected output: 1
    printf("gcd(56, 98) = %d\n", gcd(56, 98)); // Expected output: 14
    return 0;
}
