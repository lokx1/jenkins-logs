
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
    int test_numbers[] = {2, 3, 4, 5, 10, 13, 17, 19, 20, 23, 25, 29, 31, 37, 40, 41, 43, 47, 50, 53};
    int expected_results[] = {1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1};
    int num_tests = sizeof(test_numbers) / sizeof(test_numbers[0]);
    
    for (int i = 0; i < num_tests; i++) {
        int result = isPrime(test_numbers[i]);
        if (result == expected_results[i]) {
            printf("Test passed for %d: isPrime(%d) = %d\n", test_numbers[i], test_numbers[i], result);
        } else {
            printf("Test failed for %d: isPrime(%d) = %d, expected %d\n", test_numbers[i], test_numbers[i], result, expected_results[i]);
        }
    }
}

int main() {
    test_isPrime();
    return 0;
}
