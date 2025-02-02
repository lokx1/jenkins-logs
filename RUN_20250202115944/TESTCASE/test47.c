
#include "stdio.h"

int is_odd(int a) {
    return a % 2 != 0;
}

int main() {
    int numbers[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, -1, -2, -3, -4, -5};
    int expected_results[] = {0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 0, 1};
    int num_tests = sizeof(numbers) / sizeof(numbers[0]);
    int passed_tests = 0;

    for (int i = 0; i < num_tests; i++) {
        int result = is_odd(numbers[i]);
        if (result == expected_results[i]) {
            passed_tests++;
        } else {
            printf("Test failed for input %d: expected %d, got %d\n", numbers[i], expected_results[i], result);
        }
    }

    if (passed_tests == num_tests) {
        printf("All tests passed.\n");
    } else {
        printf("%d out of %d tests passed.\n", passed_tests, num_tests);
    }

    return 0;
}
