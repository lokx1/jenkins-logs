
#include <stdio.h>

int isPrime(int num) {
    int i;

    if (num <= 1)
        return 0;

    for (i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }

    return 1;
}

void test_isPrime() {
    int test_cases[] = {2, 3, 4, 5, 10, 13, 17, 19, 23, 24, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 100, 101, 103, 107};
    int expected_results[] = {1, 1, 0, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1};
    int num_tests = sizeof(test_cases) / sizeof(test_cases[0]);
    int i;

    for (i = 0; i < num_tests; i++) {
        int result = isPrime(test_cases[i]);
        if (result == expected_results[i]) {
            printf("Test case %d passed: %d is %sprime.\n", i + 1, test_cases[i], result ? "" : "not ");
        } else {
            printf("Test case %d failed: %d was expected to be %sprime.\n", i + 1, test_cases[i], expected_results[i] ? "" : "not ");
        }
    }
}

int main() {
    test_isPrime();
    return 0;
}
