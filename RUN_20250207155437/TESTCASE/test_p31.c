#include "p31.c"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main() {
    int arr[] = {5, 2, 8, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array before sorting:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    bubbleSort(arr, n);

    assert(arr[0] == 1 && arr[1] == 2 && arr[2] == 3 && arr[3] == 5 && arr[4] == 8);

    return 0;
}