
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
    // Test case 1
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

    // Test case 3: Array with negative numbers
    int arr3[] = {-1, -3, -2, -5, -4};
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

    // Test case 4: Array with duplicate numbers
    int arr4[] = {4, 5, 3, 4, 2, 1, 3};
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

    // Test case 5: Array with a single element
    int arr5[] = {1};
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

    return 0;
}
