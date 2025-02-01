
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int result;

    // Test case 1
    result = add(5, 3);
    printf("Test 1 - add(5, 3): Expected: 8, Got: %d\n", result);

    // Test case 2
    result = add(-1, 1);
    printf("Test 2 - add(-1, 1): Expected: 0, Got: %d\n", result);

    // Test case 3
    result = add(0, 0);
    printf("Test 3 - add(0, 0): Expected: 0, Got: %d\n", result);

    // Test case 4
    result = add(-5, -3);
    printf("Test 4 - add(-5, -3): Expected: -8, Got: %d\n", result);

    // Test case 5
    result = add(2147483647, 0);
    printf("Test 5 - add(2147483647, 0): Expected: 2147483647, Got: %d\n", result);

    // Test case 6
    result = add(-2147483648, 0);
    printf("Test 6 - add(-2147483648, 0): Expected: -2147483648, Got: %d\n", result);

    return 0;
}
