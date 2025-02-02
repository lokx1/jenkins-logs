
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
    int test1[] = {64, 34, 25, 12, 22, 11, 90};
    int n1 = sizeof(test1) / sizeof(test1[0]);
    int i;

    printf("Test Case 1 - Array before sorting: ");
    for (i = 0; i < n1; i++)
        printf("%d ", test1[i]);
    printf("\n");

    bubbleSort(test1, n1);

    printf("Test Case 1 - Array after sorting: ");
    for (i = 0; i < n1; i++)
        printf("%d ", test1[i]);
    printf("\n");

    int test2[] = {5, 1, 4, 2, 8};
    int n2 = sizeof(test2) / sizeof(test2[0]);

    printf("Test Case 2 - Array before sorting: ");
    for (i = 0; i < n2; i++)
        printf("%d ", test2[i]);
    printf("\n");

    bubbleSort(test2, n2);

    printf("Test Case 2 - Array after sorting: ");
    for (i = 0; i < n2; i++)
        printf("%d ", test2[i]);
    printf("\n");

    int test3[] = {1, 2, 3, 4, 5};
    int n3 = sizeof(test3) / sizeof(test3[0]);

    printf("Test Case 3 - Array before sorting: ");
    for (i = 0; i < n3; i++)
        printf("%d ", test3[i]);
    printf("\n");

    bubbleSort(test3, n3);

    printf("Test Case 3 - Array after sorting: ");
    for (i = 0; i < n3; i++)
        printf("%d ", test3[i]);
    printf("\n");

    int test4[] = {5, 4, 3, 2, 1};
    int n4 = sizeof(test4) / sizeof(test4[0]);

    printf("Test Case 4 - Array before sorting: ");
    for (i = 0; i < n4; i++)
        printf("%d ", test4[i]);
    printf("\n");

    bubbleSort(test4, n4);

    printf("Test Case 4 - Array after sorting: ");
    for (i = 0; i < n4; i++)
        printf("%d ", test4[i]);
    printf("\n");

    int test5[] = {10};
    int n5 = sizeof(test5) / sizeof(test5[0]);

    printf("Test Case 5 - Array before sorting: ");
    for (i = 0; i < n5; i++)
        printf("%d ", test5[i]);
    printf("\n");

    bubbleSort(test5, n5);

    printf("Test Case 5 - Array after sorting: ");
    for (i = 0; i < n5; i++)
        printf("%d ", test5[i]);
    printf("\n");

    return 0;
}
