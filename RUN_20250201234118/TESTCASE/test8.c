
#include "stdio.h"

int is_even(int a) {
    return a % 2 == 0;
}

int main() {
    int test_values[] = {0, 1, -1, 2, -2, 100, 101, -101, 2147483647, -2147483648};
    int expected_results[] = {1, 0, 0, 1, 1, 1, 0, 0, 0, 1};
    int num_tests = sizeof(test_values) / sizeof(test_values[0]);
    int passed_tests = 0;

    for (int i = 0; i < num_tests; i++) {
        int result = is_even(test_values[i]);
        if (result == expected_results[i]) {
            passed_tests++;
            printf("Test %d passed\n", i);
        } else {
            printf("Test %d failed: is_even(%d) = %d, expected %d\n", i, test_values[i], result, expected_results[i]);
        }
    }

    printf("%d/%d tests passed\n", passed_tests, num_tests);
    return 0;
}
