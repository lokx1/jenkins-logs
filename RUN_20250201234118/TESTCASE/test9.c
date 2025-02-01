
#include "stdio.h"

int add(int a, int b) {
    return a + b;
}

int main() {
    // Test case 1
    int result1 = add(2, 3);
    printf("add(2, 3) = %d\n", result1); // Expected output: 5

    // Test case 2
    int result2 = add(-1, 5);
    printf("add(-1, 5) = %d\n", result2); // Expected output: 4

    // Test case 3
    int result3 = add(0, 0);
    printf("add(0, 0) = %d\n", result3); // Expected output: 0

    // Test case 4
    int result4 = add(-5, -7);
    printf("add(-5, -7) = %d\n", result4); // Expected output: -12

    // Test case 5
    int result5 = add(100, 200);
    printf("add(100, 200) = %d\n", result5); // Expected output: 300

    return 0;
}
