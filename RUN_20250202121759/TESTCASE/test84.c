
#include <stdio.h>

void test_operations(int a, int b) {
    printf("Testing with a = %d, b = %d\n", a, b);
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    if (b != 0) {
        printf("Division: %d\n", a / b);
    } else {
        printf("Division: Undefined (division by zero)\n");
    }
}

int main() {
    test_operations(5, 3);
    test_operations(10, 2);
    test_operations(7, 0);
    test_operations(-4, 5);
    test_operations(0, 3);
    return 0;
}
