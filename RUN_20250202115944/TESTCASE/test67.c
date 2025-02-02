
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
    int arr1[] = {5, 2, 8, 3, 1};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    printf("Test Case 1:\n");
    printf("Array before sorting:\n");
    for (int i = 0; i < n1; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    bubbleSort(arr1, n1);

    printf("Array after sorting:\n");
    for (int i = 0; i < n1; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    int arr2[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("Test Case 2:\n");
    printf("Array before sorting:\n");
    for (int i = 0; i < n2; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    bubbleSort(arr2, n2);

    printf("Array after sorting:\n");
    for (int i = 0; i < n2; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    int arr3[] = {1, 2, 3, 4, 5};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);

    printf("Test Case 3:\n");
    printf("Array before sorting:\n");
    for (int i = 0; i < n3; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    bubbleSort(arr3, n3);

    printf("Array after sorting:\n");
    for (int i = 0; i < n3; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    int arr4[] = {5};
    int n4 = sizeof(arr4) / sizeof(arr4[0]);

    printf("Test Case 4:\n");
    printf("Array before sorting:\n");
    for (int i = 0; i < n4; i++) {
        printf("%d ", arr4[i]);
    }
    printf("\n");

    bubbleSort(arr4, n4);

    printf("Array after sorting:\n");
    for (int i = 0; i < n4; i++) {
        printf("%d ", arr4[i]);
    }
    printf("\n");

    int arr5[] = {};
    int n5 = sizeof(arr5) / sizeof(arr5[0]);

    printf("Test Case 5:\n");
    printf("Array before sorting:\n");
    for (int i = 0; i < n5; i++) {
        printf("%d ", arr5[i]);
    }
    printf("\n");

    bubbleSort(arr5, n5);

    printf("Array after sorting:\n");
    for (int i = 0; i < n5; i++) {
        printf("%d ", arr5[i]);
    }
    printf("\n");

    return 0;
}
