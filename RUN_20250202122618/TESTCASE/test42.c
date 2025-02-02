
#include <stdio.h>

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int test_cases[][5] = {
        {12, 11, 13, 5, 6},
        {3, 1, 4, 1, 5},
        {10, 9, 8, 7, 6},
        {1, 2, 3, 4, 5},
        {5, 4, 3, 2, 1}
    };
    int num_cases = sizeof(test_cases) / sizeof(test_cases[0]);
    int n = 5;
    int i, j;

    for (i = 0; i < num_cases; i++) {
        printf("Test case %d - Array before sorting: ", i + 1);
        for (j = 0; j < n; j++)
            printf("%d ", test_cases[i][j]);
        printf("\n");

        insertionSort(test_cases[i], n);

        printf("Test case %d - Array after sorting: ", i + 1);
        for (j = 0; j < n; j++)
            printf("%d ", test_cases[i][j]);
        printf("\n");
    }

    return 0;
}
