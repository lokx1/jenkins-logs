
#include <stdio.h>

void test_positive_number() {
    int num = 10;

    if (num > 0) {
        printf("Test Positive: Number is positive.\n");
    } else if (num < 0) {
        printf("Test Positive: Number is negative.\n");
    } else {
        printf("Test Positive: Number is zero.\n");
    }
}

void test_negative_number() {
    int num = -5;

    if (num > 0) {
        printf("Test Negative: Number is positive.\n");
    } else if (num < 0) {
        printf("Test Negative: Number is negative.\n");
    } else {
        printf("Test Negative: Number is zero.\n");
    }
}

void test_zero() {
    int num = 0;

    if (num > 0) {
        printf("Test Zero: Number is positive.\n");
    } else if (num < 0) {
        printf("Test Zero: Number is negative.\n");
    } else {
        printf("Test Zero: Number is zero.\n");
    }
}

int main() {
    test_positive_number();
    test_negative_number();
    test_zero();
    return 0;
}
