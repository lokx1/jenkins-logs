
#include <stdio.h>

void test_positive() {
    int num = 5;
    if (num > 0)
        printf("The number is positive.\n");
    else if (num < 0)
        printf("The number is negative.\n");
    else
        printf("The number is zero.\n");
}

void test_negative() {
    int num = -3;
    if (num > 0)
        printf("The number is positive.\n");
    else if (num < 0)
        printf("The number is negative.\n");
    else
        printf("The number is zero.\n");
}

void test_zero() {
    int num = 0;
    if (num > 0)
        printf("The number is positive.\n");
    else if (num < 0)
        printf("The number is negative.\n");
    else
        printf("The number is zero.\n");
}

int main() {
    printf("Test Case 1: Positive Number\n");
    test_positive();
    printf("\nTest Case 2: Negative Number\n");
    test_negative();
    printf("\nTest Case 3: Zero\n");
    test_zero();
    return 0;
}
