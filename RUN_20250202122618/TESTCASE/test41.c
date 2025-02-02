
#include <stdio.h>

void test_positive_number() {
    int num = 5;
    if (num > 0)
        printf("The number is positive.\n");
    else if (num < 0)
        printf("The number is negative.\n");
    else
        printf("The number is zero.\n");
}

void test_negative_number() {
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
    printf("Test with a positive number:\n");
    test_positive_number();
    printf("Test with a negative number:\n");
    test_negative_number();
    printf("Test with zero:\n");
    test_zero();
    return 0;
}
