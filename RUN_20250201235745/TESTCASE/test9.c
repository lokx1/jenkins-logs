
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
    printf("GCD of %d and %d is %d\n", 48, 18, gcd(48, 18)); // Test case 1
    printf("GCD of %d and %d is %d\n", 101, 10, gcd(101, 10)); // Test case 2
    printf("GCD of %d and %d is %d\n", 54, 24, gcd(54, 24)); // Test case 3
    printf("GCD of %d and %d is %d\n", 0, 5, gcd(0, 5)); // Test case 4
    printf("GCD of %d and %d is %d\n", 5, 0, gcd(5, 0)); // Test case 5
    printf("GCD of %d and %d is %d\n", 0, 0, gcd(0, 0)); // Test case 6
    printf("GCD of %d and %d is %d\n", 56, 98, gcd(56, 98)); // Test case 7
    printf("GCD of %d and %d is %d\n", 123456, 789012, gcd(123456, 789012)); // Test case 8
    return 0;
}
