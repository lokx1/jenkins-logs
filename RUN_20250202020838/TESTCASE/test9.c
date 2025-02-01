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
    printf("Test 1: %d\n", gcd(48, 18)); // Expected output: 6
    printf("Test 2: %d\n", gcd(101, 103)); // Expected output: 1
    printf("Test 3: %d\n", gcd(56, 48)); // Expected output: 8
    printf("Test 4: %d\n", gcd(81, 153)); // Expected output: 9
    printf("Test 5: %d\n", gcd(100, 100)); // Expected output: 100

    return 0;
}