
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
    printf("GCD of 48 and 18: %d\n", gcd(48, 18)); // Expected: 6
    printf("GCD of 101 and 10: %d\n", gcd(101, 10)); // Expected: 1
    printf("GCD of 56 and 98: %d\n", gcd(56, 98)); // Expected: 14
    printf("GCD of 0 and 5: %d\n", gcd(0, 5)); // Expected: 5
    printf("GCD of 5 and 0: %d\n", gcd(5, 0)); // Expected: 5
    printf("GCD of 0 and 0: %d\n", gcd(0, 0)); // Expected: 0
    printf("GCD of 123456 and 789012: %d\n", gcd(123456, 789012)); // Expected: 12
    return 0;
}
