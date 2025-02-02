
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
    // Test case 1: General case with random numbers
    int arr1[] = {64, 34, 25, 12, 22, 11, 90};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int i;
    printf("Test case 1 - Array before sorting: ");
    for (i = 0; i < n1; i++)
        printf("%d ", arr1[i]);
    printf("\n");
    bubbleSort(arr1, n1);
    printf("Test case 1 - Array after sorting: ");
    for (i = 0; i < n1; i++)
        printf("%d ", arr1[i]);
    printf("\n");

    // Test case 2: Already sorted array
    int arr2[] = {1, 2, 3, 4, 5, 6, 7};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("Test case 2 - Array before sorting: ");
    for (i = 0; i < n2; i++)
        printf("%d ", arr2[i]);
    printf("\n");
    bubbleSort(arr2, n2);
    printf("Test case 2 - Array after sorting: ");
    for (i = 0; i < n2; i++)
        printf("%d ", arr2[i]);
    printf("\n");

    // Test case 3: Reverse sorted array
    int arr3[] = {9, 8, 7, 6, 5, 4, 3};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    printf("Test case 3 - Array before sorting: ");
    for (i = 0; i < n3; i++)
        printf("%d ", arr3[i]);
    printf("\n");
    bubbleSort(arr3, n3);
    printf("Test case 3 - Array after sorting: ");
    for (i = 0; i < n3; i++)
        printf("%d ", arr3[i]);
    printf("\n");

    // Test case 4: Array with all elements the same
    int arr4[] = {5, 5, 5, 5, 5};
    int n4 = sizeof(arr4) / sizeof(arr4[0]);
    printf("Test case 4 - Array before sorting: ");
    for (i = 0; i < n4; i++)
        printf("%d ", arr4[i]);
    printf("\n");
    bubbleSort(arr4, n4);
    printf("Test case 4 - Array after sorting: ");
    for (i = 0; i < n4; i++)
        printf("%d ", arr4[i]);
    printf("\n");

    // Test case 5: Empty array
    int arr5[] = {};
    int n5 = sizeof(arr5) / sizeof(arr5[0]);
    printf("Test case 5 - Array before sorting: ");
    for (i = 0; i < n5; i++)
        printf("%d ", arr5[i]);
    printf("\n");
    bubbleSort(arr5, n5);
    printf("Test case 5 - Array after sorting: ");
    for (i = 0; i < n5; i++)
        printf("%d ", arr5[i]);
    printf("\n");

    return 0;
}
