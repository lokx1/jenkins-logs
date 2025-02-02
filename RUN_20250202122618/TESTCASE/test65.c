
#include <stdio.h>

void test_check_number(int num) {
    printf("Testing with input: %d\n", num);
    if (num > 0)
        printf("Expected: The number is positive.\n");
    else if (num < 0)
        printf("Expected: The number is negative.\n");
    else
        printf("Expected: The number is zero.\n");
}

int main() {
    // Test case 1: Positive number
    test_check_number(10);

    // Test case 2: Negative number
    test_check_number(-5);

    // Test case 3: Zero
    test_check_number(0);

    // Test case 4: Large positive number
    test_check_number(1000000);

    // Test case 5: Large negative number
    test_check_number(-1000000);

    return 0;
}
