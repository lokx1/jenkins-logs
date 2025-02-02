
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
    int test_cases[] = {1, 2, 3, 4, 5};
    int num_tests = sizeof(test_cases) / sizeof(test_cases[0]);

    for (int i = 0; i < num_tests; i++) {
        printf("Test case %d: n = %d\n", i + 1, test_cases[i]);
        bigONotation(test_cases[i]);
        printf("\n");
    }

    return 0;
}
