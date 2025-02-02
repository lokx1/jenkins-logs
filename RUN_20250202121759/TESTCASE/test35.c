
#include <stdio.h>

void selectionSort(int arr[], int n) {
    int i, j, minIndex, temp;
    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        // Swap arr[i] and arr[minIndex]
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int arr1[] = {64, 34, 25, 12, 22, 11, 90};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int i;

    printf("Test Case 1:\n");
    printf("Array before sorting: ");
    for (i = 0; i < n1; i++)
        printf("%d ", arr1[i]);
    printf("\n");

    selectionSort(arr1, n1);

    printf("Array after sorting: ");
    for (i = 0; i < n1; i++)
        printf("%d ", arr1[i]);
    printf("\n");

    int arr2[] = {5, 4, 3, 2, 1};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("Test Case 2:\n");
    printf("Array before sorting: ");
    for (i = 0; i < n2; i++)
        printf("%d ", arr2[i]);
    printf("\n");

    selectionSort(arr2, n2);

    printf("Array after sorting: ");
    for (i = 0; i < n2; i++)
        printf("%d ", arr2[i]);
    printf("\n");

    int arr3[] = {1, 2, 3, 4, 5};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);

    printf("Test Case 3:\n");
    printf("Array before sorting: ");
    for (i = 0; i < n3; i++)
        printf("%d ", arr3[i]);
    printf("\n");

    selectionSort(arr3, n3);

    printf("Array after sorting: ");
    for (i = 0; i < n3; i++)
        printf("%d ", arr3[i]);
    printf("\n");

    int arr4[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int n4 = sizeof(arr4) / sizeof(arr4[0]);

    printf("Test Case 4:\n");
    printf("Array before sorting: ");
    for (i = 0; i < n4; i++)
        printf("%d ", arr4[i]);
    printf("\n");

    selectionSort(arr4, n4);

    printf("Array after sorting: ");
    for (i = 0; i < n4; i++)
        printf("%d ", arr4[i]);
    printf("\n");

    int arr5[] = {100, 90, 80, 70, 60, 50, 40, 30, 20, 10};
    int n5 = sizeof(arr5) / sizeof(arr5[0]);

    printf("Test Case 5:\n");
    printf("Array before sorting: ");
    for (i = 0; i < n5; i++)
        printf("%d ", arr5[i]);
    printf("\n");

    selectionSort(arr5, n5);

    printf("Array after sorting: ");
    for (i = 0; i < n5; i++)
        printf("%d ", arr5[i]);
    printf("\n");

    return 0;
}
