
#include <stdio.h>

void test_case1() {
    int a = 5, b = 3;
    printf("Test Case 1:\n");
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", a / b);
}

void test_case2() {
    int a = 10, b = 2;
    printf("Test Case 2:\n");
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", a / b);
}

void test_case3() {
    int a = 7, b = 0;
    printf("Test Case 3:\n");
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    // Handle division by zero
    if (b != 0) {
        printf("Division: %d\n", a / b);
    } else {
        printf("Division: undefined (division by zero)\n");
    }
}

void test_case4() {
    int a = -8, b = 4;
    printf("Test Case 4:\n");
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", a / b);
}

void test_case5() {
    int a = 15, b = -3;
    printf("Test Case 5:\n");
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", a / b);
}

int main() {
    test_case1();
    test_case2();
    test_case3();
    test_case4();
    test_case5();
    return 0;
}
