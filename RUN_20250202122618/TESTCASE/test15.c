
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

    int arr2[] = {1, 5, 8, 12, 20, 25, 30};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int target2 = 25;
    int result2 = binarySearch(arr2, 0, n2 - 1, target2);
    if (result2 != -1)
        printf("Element %d found at index %d\n", target2, result2);
    else
        printf("Element %d not found in the array\n", target2);

    int arr3[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    int target3 = 11;
    int result3 = binarySearch(arr3, 0, n3 - 1, target3);
    if (result3 != -1)
        printf("Element %d found at index %d\n", target3, result3);
    else
        printf("Element %d not found in the array\n", target3);

    return 0;
}
