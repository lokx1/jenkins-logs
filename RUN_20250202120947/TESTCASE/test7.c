
#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int test_cases[][7] = {
        {64, 34, 25, 12, 22, 11, 90},
        {5, 1, 4, 2, 8, 0, -1},
        {3, 3, 3, 3, 3, 3, 3},
        {90, 11, 22, 12, 25, 34, 64},
        {1, 2, 3, 4, 5, 6, 7}
    };
    int n = 7;
    int i, j;

    for (i = 0; i < 5; i++) {
        printf("Test case %d:\n", i + 1);
        printf("Array before sorting: ");
        for (j = 0; j < n; j++)
            printf("%d ", test_cases[i][j]);
        printf("\n");

        bubbleSort(test_cases[i], n);

        printf("Array after sorting: ");
        for (j = 0; j < n; j++)
            printf("%d ", test_cases[i][j]);
        printf("\n\n");
    }

    return 0;
}
