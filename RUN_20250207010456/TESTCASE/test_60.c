#include <stdio.h>
#include "p52.c"

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Test the sum of the two numbers
    if (num1 + num2 != 3) {
        printf("Sum test failed\n");
        return 1;
    } else {
        printf("Sum test passed\n");
    }

    // Test the difference between the two numbers
    if (num1 - num2 != -1) {
        printf("Difference test failed\n");
        return 1;
    } else {
        printf("Difference test passed\n");
    }

    // Test the product of the two numbers
    if (num1 * num2 != 6) {
        printf("Product test failed\n");
        return 1;
    } else {
        printf("Product test passed\n");
    }

    // Test the quotient of the two numbers
    if (num1 / num2 != 0.5) {
        printf("Quotient test failed\n");
        return 1;
    } else {
        printf("Quotient test passed\n");
    }

    // Test the remainder of the two numbers
    if (num1 % num2 != 1) {
        printf("Remainder test failed\n");
        return 1;
    } else {
        printf("Remainder test passed\n");
    }

    return 0;
}