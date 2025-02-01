
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
    // Test case 1: Element is present in the array
    int arr1[] = {2, 3, 4, 10, 40};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int target1 = 10;
    int result1 = binarySearch(arr1, 0, n1 - 1, target1);
    if (result1 != -1)
        printf("Element %d found at index %d\n", target1, result1);
    else
        printf("Element %d not found in the array\n", target1);

    // Test case 2: Element is not present in the array
    int target2 = 5;
    int result2 = binarySearch(arr1, 0, n1 - 1, target2);
    if (result2 != -1)
        printf("Element %d found at index %d\n", target2, result2);
    else
        printf("Element %d not found in the array\n", target2);

    // Test case 3: Element is the first element
    int target3 = 2;
    int result3 = binarySearch(arr1, 0, n1 - 1, target3);
    if (result3 != -1)
        printf("Element %d found at index %d\n", target3, result3);
    else
        printf("Element %d not found in the array\n", target3);

    // Test case 4: Element is the last element
    int target4 = 40;
    int result4 = binarySearch(arr1, 0, n1 - 1, target4);
    if (result4 != -1)
        printf("Element %d found at index %d\n", target4, result4);
    else
        printf("Element %d not found in the array\n", target4);

    // Test case 5: Single element array, element present
    int arr2[] = {5};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int target5 = 5;
    int result5 = binarySearch(arr2, 0, n2 - 1, target5);
    if (result5 != -1)
        printf("Element %d found at index %d\n", target5, result5);
    else
        printf("Element %d not found in the array\n", target5);

    // Test case 6: Single element array, element not present
    int target6 = 1;
    int result6 = binarySearch(arr2, 0, n2 - 1, target6);
    if (result6 != -1)
        printf("Element %d found at index %d\n", target6, result6);
    else
        printf("Element %d not found in the array\n", target6);

    return 0;
}
