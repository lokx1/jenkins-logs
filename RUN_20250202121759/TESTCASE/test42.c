
#include <stdio.h>

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        // Move elements of arr[0..i-1], that are greater than key, to one position ahead of their current position
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
        {4, 3, 2, 10, 12},
        {1, 2, 3, 4, 5},
        {5, 4, 3, 2, 1},
        {10, 20, 30, 40, 50}
    };
    int n = 5;
    int i, j;

    for (i = 0; i < 5; i++) {
        printf("Test case %d:\n", i + 1);
        printf("Array before sorting: ");
        for (j = 0; j < n; j++)
            printf("%d ", test_cases[i][j]);
        printf("\n");

        insertionSort(test_cases[i], n);

        printf("Array after sorting: ");
        for (j = 0; j < n; j++)
            printf("%d ", test_cases[i][j]);
        printf("\n\n");
    }

    return 0;
}
