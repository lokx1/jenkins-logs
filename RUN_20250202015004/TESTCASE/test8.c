
#include "stdio.h"

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int main() {
    // Test case 1: base = 2, exp = 3
    int result1 = power(2, 3);
    printf("power(2, 3) = %d\n", result1); // Expected output: 8

    // Test case 2: base = 5, exp = 0
    int result2 = power(5, 0);
    printf("power(5, 0) = %d\n", result2); // Expected output: 1

    // Test case 3: base = 7, exp = 2
    int result3 = power(7, 2);
    printf("power(7, 2) = %d\n", result3); // Expected output: 49

    // Test case 4: base = 0, exp = 5
    int result4 = power(0, 5);
    printf("power(0, 5) = %d\n", result4); // Expected output: 0

    // Test case 5: base = 3, exp = 4
    int result5 = power(3, 4);
    printf("power(3, 4) = %d\n", result5); // Expected output: 81

    // Test case 6: base = 1, exp = 10
    int result6 = power(1, 10);
    printf("power(1, 10) = %d\n", result6); // Expected output: 1

    return 0;
}
