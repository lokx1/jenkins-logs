
#include <stdio.h>

void test_number(int num) {
    if (num > 0)
        printf("The number %d is positive.\n", num);
    else if (num < 0)
        printf("The number %d is negative.\n", num);
    else
        printf("The number %d is zero.\n", num);
}

int main() {
    printf("Test Case 1: ");
    test_number(10); // Positive number

    printf("Test Case 2: ");
    test_number(-5); // Negative number

    printf("Test Case 3: ");
    test_number(0); // Zero

    printf("Test Case 4: ");
    test_number(123456789); // Large positive number

    printf("Test Case 5: ");
    test_number(-987654321); // Large negative number

    return 0;
}
