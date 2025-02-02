
#include <stdio.h>

/* Function to test */
int calculate_sum(int a, int b) {
    return a + b;
}

/* Test case function */
void test_calculate_sum() {
    int a, b, expected_sum, result;

    // Test case 1
    a = 5;
    b = 10;
    expected_sum = 15;
    result = calculate_sum(a, b);
    printf("Test case 1: calculate_sum(%d, %d) = %d, expected = %d\n", a, b, result, expected_sum);

    // Test case 2
    a = -5;
    b = 5;
    expected_sum = 0;
    result = calculate_sum(a, b);
    printf("Test case 2: calculate_sum(%d, %d) = %d, expected = %d\n", a, b, result, expected_sum);

    // Test case 3
    a = 0;
    b = 0;
    expected_sum = 0;
    result = calculate_sum(a, b);
    printf("Test case 3: calculate_sum(%d, %d) = %d, expected = %d\n", a, b, result, expected_sum);

    // Test case 4
    a = -10;
    b = -20;
    expected_sum = -30;
    result = calculate_sum(a, b);
    printf("Test case 4: calculate_sum(%d, %d) = %d, expected = %d\n", a, b, result, expected_sum);

    // Test case 5
    a = 2147483647;
    b = 1;
    expected_sum = -2147483648; // Overflow behavior in C
    result = calculate_sum(a, b);
    printf("Test case 5: calculate_sum(%d, %d) = %d, expected = %d\n", a, b, result, expected_sum);
}

int main() {
    test_calculate_sum();
    return 0;
}
