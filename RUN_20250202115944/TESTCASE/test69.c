
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

void testIsPrime() {
    int testCases[] = {2, 3, 4, 5, 10, 13, 17, 19, 20, 23, 25, 29, 31, 37, 40, 41, 43, 47, 50, 53, 59, 60, 61, 67, 70, 71, 73, 79, 80, 83, 89, 97, 100};
    int expectedResults[] = {1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0};
    int numTests = sizeof(testCases) / sizeof(testCases[0]);
    int passed = 1;

    for (int i = 0; i < numTests; i++) {
        int result = isPrime(testCases[i]);
        if (result != expectedResults[i]) {
            printf("Test failed for input %d: expected %d, got %d\n", testCases[i], expectedResults[i], result);
            passed = 0;
        }
    }

    if (passed) {
        printf("All tests passed successfully.\n");
    }
}

int main() {
    testIsPrime();
    return 0;
}
