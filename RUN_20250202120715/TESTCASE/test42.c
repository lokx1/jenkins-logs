
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
    // Test case 1: Normal array
    int arr1[] = {12, 11, 13, 5, 6};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int i;

    printf("Test case 1 - Array before sorting: ");
    for (i = 0; i < n1; i++)
        printf("%d ", arr1[i]);
    printf("\n");

    insertionSort(arr1, n1);

    printf("Test case 1 - Array after sorting: ");
    for (i = 0; i < n1; i++)
        printf("%d ", arr1[i]);
    printf("\n");

    // Test case 2: Already sorted array
    int arr2[] = {1, 2, 3, 4, 5};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("Test case 2 - Array before sorting: ");
    for (i = 0; i < n2; i++)
        printf("%d ", arr2[i]);
    printf("\n");

    insertionSort(arr2, n2);

    printf("Test case 2 - Array after sorting: ");
    for (i = 0; i < n2; i++)
        printf("%d ", arr2[i]);
    printf("\n");

    // Test case 3: Reverse sorted array
    int arr3[] = {5, 4, 3, 2, 1};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);

    printf("Test case 3 - Array before sorting: ");
    for (i = 0; i < n3; i++)
        printf("%d ", arr3[i]);
    printf("\n");

    insertionSort(arr3, n3);

    printf("Test case 3 - Array after sorting: ");
    for (i = 0; i < n3; i++)
        printf("%d ", arr3[i]);
    printf("\n");

    // Test case 4: Array with duplicates
    int arr4[] = {2, 3, 2, 3, 1};
    int n4 = sizeof(arr4) / sizeof(arr4[0]);

    printf("Test case 4 - Array before sorting: ");
    for (i = 0; i < n4; i++)
        printf("%d ", arr4[i]);
    printf("\n");

    insertionSort(arr4, n4);

    printf("Test case 4 - Array after sorting: ");
    for (i = 0; i < n4; i++)
        printf("%d ", arr4[i]);
    printf("\n");

    // Test case 5: Single element array
    int arr5[] = {42};
    int n5 = sizeof(arr5) / sizeof(arr5[0]);

    printf("Test case 5 - Array before sorting: ");
    for (i = 0; i < n5; i++)
        printf("%d ", arr5[i]);
    printf("\n");

    insertionSort(arr5, n5);

    printf("Test case 5 - Array after sorting: ");
    for (i = 0; i < n5; i++)
        printf("%d ", arr5[i]);
    printf("\n");

    // Test case 6: Empty array
    int arr6[] = {};
    int n6 = sizeof(arr6) / sizeof(arr6[0]);

    printf("Test case 6 - Array before sorting: ");
    for (i = 0; i < n6; i++)
        printf("%d ", arr6[i]);
    printf("\n");

    insertionSort(arr6, n6);

    printf("Test case 6 - Array after sorting: ");
    for (i = 0; i < n6; i++)
        printf("%d ", arr6[i]);
    printf("\n");

    return 0;
}
