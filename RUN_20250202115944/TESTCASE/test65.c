
#include <stdio.h>

void test_positive_number() {
    int num = 10;
    if (num > 0)
        printf("Test Positive: Passed\n");
    else
        printf("Test Positive: Failed\n");
}

void test_negative_number() {
    int num = -5;
    if (num < 0)
        printf("Test Negative: Passed\n");
    else
        printf("Test Negative: Failed\n");
}

void test_zero() {
    int num = 0;
    if (num == 0)
        printf("Test Zero: Passed\n");
    else
        printf("Test Zero: Failed\n");
}

int main() {
    test_positive_number();
    test_negative_number();
    test_zero();
    return 0;
}
