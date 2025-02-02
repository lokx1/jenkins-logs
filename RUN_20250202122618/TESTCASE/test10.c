
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int result;

    // Test case 1
    result = add(5, 3);
    printf("Test case 1: add(5, 3) = %d\n", result);

    // Test case 2
    result = add(0, 0);
    printf("Test case 2: add(0, 0) = %d\n", result);

    // Test case 3
    result = add(-1, 1);
    printf("Test case 3: add(-1, 1) = %d\n", result);

    // Test case 4
    result = add(-5, -3);
    printf("Test case 4: add(-5, -3) = %d\n", result);

    // Test case 5
    result = add(1000, 2000);
    printf("Test case 5: add(1000, 2000) = %d\n", result);

    return 0;
}
