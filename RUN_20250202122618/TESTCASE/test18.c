
#include <stdio.h>

void test_case(int num1, int num2) {
    printf("Test with num1 = %d, num2 = %d\n", num1, num2);
    printf("Sum: %d\n", num1 + num2);
    printf("Difference: %d\n", num1 - num2);
    printf("Product: %d\n", num1 * num2);
    if (num2 != 0) {
        printf("Quotient: %d\n", num1 / num2);
        printf("Remainder: %d\n", num1 % num2);
    } else {
        printf("Quotient: Undefined (division by zero)\n");
        printf("Remainder: Undefined (division by zero)\n");
    }
    printf("\n");
}

int main() {
    test_case(10, 5);
    test_case(20, 4);
    test_case(15, 0);
    test_case(-10, 3);
    test_case(0, 7);
    return 0;
}
