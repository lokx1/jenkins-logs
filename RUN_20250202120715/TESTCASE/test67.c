
#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int testCases[][5] = {
        {5, 2, 8, 3, 1},
        {10, 9, 8, 7, 6},
        {1, 2, 3, 4, 5},
        {3, 1, 4, 1, 5},
        {0, -1, 3, -10, 5}
    };
    int n = 5;

    for (int t = 0; t < 5; t++) {
        printf("Test case %d:\n", t + 1);
        printf("Array before sorting:\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", testCases[t][i]);
        }
        printf("\n");

        bubbleSort(testCases[t], n);

        printf("Array after sorting:\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", testCases[t][i]);
        }
        printf("\n\n");
    }

    return 0;
}
