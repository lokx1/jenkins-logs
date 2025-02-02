
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
    // Test Case 1: Element is present in the array
    int arr1[] = {2, 3, 4, 10, 40};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int target1 = 10;
    int result1 = binarySearch(arr1, 0, n1 - 1, target1);
    if (result1 != -1)
        printf("Test Case 1: Element %d found at index %d\n", target1, result1);
    else
        printf("Test Case 1: Element %d not found in the array\n", target1);

    // Test Case 2: Element is not present in the array
    int arr2[] = {2, 3, 4, 10, 40};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int target2 = 5;
    int result2 = binarySearch(arr2, 0, n2 - 1, target2);
    if (result2 != -1)
        printf("Test Case 2: Element %d found at index %d\n", target2, result2);
    else
        printf("Test Case 2: Element %d not found in the array\n", target2);

    // Test Case 3: Element is the first element in the array
    int arr3[] = {2, 3, 4, 10, 40};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    int target3 = 2;
    int result3 = binarySearch(arr3, 0, n3 - 1, target3);
    if (result3 != -1)
        printf("Test Case 3: Element %d found at index %d\n", target3, result3);
    else
        printf("Test Case 3: Element %d not found in the array\n", target3);

    // Test Case 4: Element is the last element in the array
    int arr4[] = {2, 3, 4, 10, 40};
    int n4 = sizeof(arr4) / sizeof(arr4[0]);
    int target4 = 40;
    int result4 = binarySearch(arr4, 0, n4 - 1, target4);
    if (result4 != -1)
        printf("Test Case 4: Element %d found at index %d\n", target4, result4);
    else
        printf("Test Case 4: Element %d not found in the array\n", target4);

    // Test Case 5: Array has one element which is the target
    int arr5[] = {10};
    int n5 = sizeof(arr5) / sizeof(arr5[0]);
    int target5 = 10;
    int result5 = binarySearch(arr5, 0, n5 - 1, target5);
    if (result5 != -1)
        printf("Test Case 5: Element %d found at index %d\n", target5, result5);
    else
        printf("Test Case 5: Element %d not found in the array\n", target5);

    // Test Case 6: Array has one element which is not the target
    int arr6[] = {10};
    int n6 = sizeof(arr6) / sizeof(arr6[0]);
    int target6 = 5;
    int result6 = binarySearch(arr6, 0, n6 - 1, target6);
    if (result6 != -1)
        printf("Test Case 6: Element %d found at index %d\n", target6, result6);
    else
        printf("Test Case 6: Element %d not found in the array\n", target6);

    return 0;
}
