
#include <stdio.h>

void test_positive_number() {
    printf("Test Positive Number:\n");
    int num = 5;
    if (num > 0)
        printf("The number is positive.\n");
    else if (num < 0)
        printf("The number is negative.\n");
    else
        printf("The number is zero.\n");
}

void test_negative_number() {
    printf("Test Negative Number:\n");
    int num = -3;
    if (num > 0)
        printf("The number is positive.\n");
    else if (num < 0)
        printf("The number is negative.\n");
    else
        printf("The number is zero.\n");
}

void test_zero() {
    printf("Test Zero:\n");
    int num = 0;
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
