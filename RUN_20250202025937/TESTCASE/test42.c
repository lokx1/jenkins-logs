
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

void testInsertionSort() {
    int arr1[] = {12, 11, 13, 5, 6};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    insertionSort(arr1, n1);
    printf("Test 1 - Expected: 5 6 11 12 13, Got: ");
    for (int i = 0; i < n1; i++) printf("%d ", arr1[i]);
    printf("\n");

    int arr2[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    insertionSort(arr2, n2);
    printf("Test 2 - Expected: 1 1 2 3 3 4 5 5 5 6 9, Got: ");
    for (int i = 0; i < n2; i++) printf("%d ", arr2[i]);
    printf("\n");

    int arr3[] = {1};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    insertionSort(arr3, n3);
    printf("Test 3 - Expected: 1, Got: ");
    for (int i = 0; i < n3; i++) printf("%d ", arr3[i]);
    printf("\n");

    int arr4[] = {};
    int n4 = sizeof(arr4) / sizeof(arr4[0]);
    insertionSort(arr4, n4);
    printf("Test 4 - Expected: (empty), Got: ");
    for (int i = 0; i < n4; i++) printf("%d ", arr4[i]);
    printf("\n");

    int arr5[] = {-1, -3, -2, -5, -4};
    int n5 = sizeof(arr5) / sizeof(arr5[0]);
    insertionSort(arr5, n5);
    printf("Test 5 - Expected: -5 -4 -3 -2 -1, Got: ");
    for (int i = 0; i < n5; i++) printf("%d ", arr5[i]);
    printf("\n");
}

int main() {
    testInsertionSort();
    return 0;
}
