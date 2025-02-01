#include "stdio.h"

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int main() {
    // Test case 1: base = 2, exp = 3, expected result = 8
    printf("%d\n", power(2, 3));

    // Test case 2: base = 5, exp = 0, expected result = 1
    printf("%d\n", power(5, 0));

    // Test case 3: base = 7, exp = 2, expected result = 49
    printf("%d\n", power(7, 2));

    // Test case 4: base = 10, exp = 5, expected result = 100000
    printf("%d\n", power(10, 5));

    // Test case 5: base = 3, exp = 3, expected result = 27
    printf("%d\n", power(3, 3));

    return 0;
}