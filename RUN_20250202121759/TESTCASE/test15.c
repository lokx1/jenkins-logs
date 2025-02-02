
#include <stdio.h>

int binarySearch(int arr[], int low, int high, int target) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
            return mid; // Element found
        else if (arr[mid] < target)
            low = mid + 1; // Search in right half
        else
            high = mid - 1; // Search in left half
    }
    return -1; // Element not found
}

int main() {
    int arr1[] = {2, 3, 4, 10, 40};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int target1 = 10;
    int result1 = binarySearch(arr1, 0, n1 - 1, target1);
    if (result1 != -1)
        printf("Element %d found at index %d\n", target1, result1);
    else
        printf("Element %d not found in the array\n", target1);

    int arr2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int target2 = 5;
    int result2 = binarySearch(arr2, 0, n2 - 1, target2);
    if (result2 != -1)
        printf("Element %d found at index %d\n", target2, result2);
    else
        printf("Element %d not found in the array\n", target2);

    int arr3[] = {1, 3, 5, 7, 9, 11, 13, 15, 17};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    int target3 = 8;
    int result3 = binarySearch(arr3, 0, n3 - 1, target3);
    if (result3 != -1)
        printf("Element %d found at index %d\n", target3, result3);
    else
        printf("Element %d not found in the array\n", target3);

    int arr4[] = {-10, -5, 0, 5, 10, 15, 20};
    int n4 = sizeof(arr4) / sizeof(arr4[0]);
    int target4 = 15;
    int result4 = binarySearch(arr4, 0, n4 - 1, target4);
    if (result4 != -1)
        printf("Element %d found at index %d\n", target4, result4);
    else
        printf("Element %d not found in the array\n", target4);

    int arr5[] = {1, 2, 3, 4, 5};
    int n5 = sizeof(arr5) / sizeof(arr5[0]);
    int target5 = 6;
    int result5 = binarySearch(arr5, 0, n5 - 1, target5);
    if (result5 != -1)
        printf("Element %d found at index %d\n", target5, result5);
    else
        printf("Element %d not found in the array\n", target5);

    return 0;
}
