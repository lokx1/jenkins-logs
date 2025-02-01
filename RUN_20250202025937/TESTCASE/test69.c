
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
    int testCases[] = {1, 2, 3, 4, 5, 10, 11, 13, 17, 19, 20, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 100};
    int expectedResults[] = {0, 1, 1, 0, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0};
    int numTests = sizeof(testCases) / sizeof(testCases[0]);
    for (int i = 0; i < numTests; i++) {
        int result = isPrime(testCases[i]);
        if (result == expectedResults[i]) {
            printf("Test case %d passed.\n", testCases[i]);
        } else {
            printf("Test case %d failed. Expected %d but got %d.\n", testCases[i], expectedResults[i], result);
        }
    }
}

int main() {
    testIsPrime();
    return 0;
}
