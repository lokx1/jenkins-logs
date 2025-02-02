
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
    int testCases[] = {2, 3, 4, 5, 10, 13, 17, 19, 23, 24, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 100, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 200};
    int expectedResults[] = {1, 1, 0, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0};
    int numTestCases = sizeof(testCases) / sizeof(testCases[0]);
    int i;

    for (i = 0; i < numTestCases; i++) {
        int result = isPrime(testCases[i]);
        if (result == expectedResults[i]) {
            printf("Test case %d passed. Input: %d, Output: %d\n", i + 1, testCases[i], result);
        } else {
            printf("Test case %d failed. Input: %d, Expected: %d, Got: %d\n", i + 1, testCases[i], expectedResults[i], result);
        }
    }
}

int main() {
    test_isPrime();
    return 0;
}
