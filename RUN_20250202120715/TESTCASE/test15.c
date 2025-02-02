
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
    // Test case 1
    int arr1[] = {2, 3, 4, 10, 40};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int target1 = 10;
    int result1 = binarySearch(arr1, 0, n1 - 1, target1);
    if (result1 != -1)
        printf("Test Case 1: Element %d found at index %d\n", target1, result1);
    else
        printf("Test Case 1: Element %d not found in the array\n", target1);

    // Test case 2
    int arr2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int target2 = 5;
    int result2 = binarySearch(arr2, 0, n2 - 1, target2);
    if (result2 != -1)
        printf("Test Case 2: Element %d found at index %d\n", target2, result2);
    else
        printf("Test Case 2: Element %d not found in the array\n", target2);

    // Test case 3
    int arr3[] = {1, 3, 5, 7, 9};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    int target3 = 6;
    int result3 = binarySearch(arr3, 0, n3 - 1, target3);
    if (result3 != -1)
        printf("Test Case 3: Element %d found at index %d\n", target3, result3);
    else
        printf("Test Case 3: Element %d not found in the array\n", target3);

    // Test case 4
    int arr4[] = {10, 20, 30, 40, 50};
    int n4 = sizeof(arr4) / sizeof(arr4[0]);
    int target4 = 50;
    int result4 = binarySearch(arr4, 0, n4 - 1, target4);
    if (result4 != -1)
        printf("Test Case 4: Element %d found at index %d\n", target4, result4);
    else
        printf("Test Case 4: Element %d not found in the array\n", target4);

    // Test case 5
    int arr5[] = {5, 15, 25, 35, 45, 55};
    int n5 = sizeof(arr5) / sizeof(arr5[0]);
    int target5 = 15;
    int result5 = binarySearch(arr5, 0, n5 - 1, target5);
    if (result5 != -1)
        printf("Test Case 5: Element %d found at index %d\n", target5, result5);
    else
        printf("Test Case 5: Element %d not found in the array\n", target5);

    return 0;
}
