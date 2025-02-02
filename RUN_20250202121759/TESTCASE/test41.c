
#include <stdio.h>

void test_positive();
void test_negative();
void test_zero();

int main() {
    test_positive();
    test_negative();
    test_zero();
    return 0;
}

void test_positive() {
    int num = 5;
    printf("Testing positive number:\n");
    if (num > 0)
        printf("The number is positive.\n");
    else if (num < 0)
        printf("The number is negative.\n");
    else
        printf("The number is zero.\n");
}

void test_negative() {
    int num = -3;
    printf("Testing negative number:\n");
    if (num > 0)
        printf("The number is positive.\n");
    else if (num < 0)
        printf("The number is negative.\n");
    else
        printf("The number is zero.\n");
}

void test_zero() {
    int num = 0;
    printf("Testing zero:\n");
    if (num > 0)
        printf("The number is positive.\n");
    else if (num < 0)
        printf("The number is negative.\n");
    else
        printf("The number is zero.\n");
}
