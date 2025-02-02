
#include "stdio.h"

int is_odd(int a) {
    return a % 2 != 0;
}

int main() {
    // Test case 1: Test with an odd number
    int test1 = 3;
    printf("is_odd(%d) = %d\n", test1, is_odd(test1)); // Expected output: 1

    // Test case 2: Test with an even number
    int test2 = 4;
    printf("is_odd(%d) = %d\n", test2, is_odd(test2)); // Expected output: 0

    // Test case 3: Test with zero
    int test3 = 0;
    printf("is_odd(%d) = %d\n", test3, is_odd(test3)); // Expected output: 0

    // Test case 4: Test with a negative odd number
    int test4 = -5;
    printf("is_odd(%d) = %d\n", test4, is_odd(test4)); // Expected output: 1

    // Test case 5: Test with a negative even number
    int test5 = -6;
    printf("is_odd(%d) = %d\n", test5, is_odd(test5)); // Expected output: 0

    return 0;
}
