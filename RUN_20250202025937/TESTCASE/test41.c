
#include <stdio.h>

void test_positive_number() {
    int num = 5;
    printf("Test with positive number (5):\n");
    if (num > 0)
        printf("The number is positive.\n");
    else if (num < 0)
        printf("The number is negative.\n");
    else
        printf("The number is zero.\n");
}

void test_negative_number() {
    int num = -3;
    printf("Test with negative number (-3):\n");
    if (num > 0)
        printf("The number is positive.\n");
    else if (num < 0)
        printf("The number is negative.\n");
    else
        printf("The number is zero.\n");
}

void test_zero() {
    int num = 0;
    printf("Test with zero (0):\n");
    if (num > 0)
        printf("The number is positive.\n");
    else if (num < 0)
        printf("The number is negative.\n");
    else
        printf("The number is zero.\n");
}

int main() {
    test_positive_number();
    test_negative_number();
    test_zero();
    return 0;
}
