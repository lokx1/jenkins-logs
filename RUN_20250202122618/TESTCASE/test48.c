
#include <stdio.h>

void bigONotation(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("(%d, %d) ", i, j);
        }
        printf("\n");
    }
}

int main() {
    int testCases[] = {1, 2, 3, 4, 5};
    int numberOfTestCases = sizeof(testCases) / sizeof(testCases[0]);
    for (int i = 0; i < numberOfTestCases; i++) {
        printf("Test case %d: n = %d\n", i + 1, testCases[i]);
        bigONotation(testCases[i]);
        printf("\n");
    }
    return 0;
}
