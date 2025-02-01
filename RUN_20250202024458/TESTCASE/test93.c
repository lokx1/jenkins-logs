#include <stdio.h>

int linearSearch(int arr[], int n, int target) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == target)
            return i;
    }
    return -1;
}

int main() {
    int arr1[] = {2, 4, 6, 8, 10};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int target1 = 6;
    int index1 = linearSearch(arr1, n1, target1);

    if (index1 != -1)
        printf("Test Case 1 Passed\n");
    else
        printf("Test Case 1 Failed\n");

    int arr2[] = {1, 3, 5, 7, 9};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int target2 = 2;
    int index2 = linearSearch(arr2, n2, target2);

    if (index2 == -1)
        printf("Test Case 2 Passed\n");
    else
        printf("Test Case 2 Failed\n");

    return 0;
}