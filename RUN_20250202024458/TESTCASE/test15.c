Sure, here are some test cases for your binary search function:

```c
#include <stdio.h>

int binarySearch(int arr[], int low, int high, int target) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int arr1[] = {2, 3, 4, 10, 40};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int target1 = 10;
    int result1 = binarySearch(arr1, 0, n1 - 1, target1);
    printf("Test case 1: %d\n", result1);  // Expected output: 3

    int arr2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int target2 = 5;
    int result2 = binarySearch(arr2, 0, n2 - 1, target2);
    printf("Test case 2: %d\n", result2);  // Expected output: 4

    int arr3[] = {-10, -5, 0, 5, 10};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    int target3 = -5;
    int result3 = binarySearch(arr3, 0, n3 - 1, target3);
    printf("Test case 3: %d\n", result3);  // Expected output: 1

    int arr4[] = {100, 200, 300, 400, 500};
    int n4 = sizeof(arr4) / sizeof(arr4[0]);
    int target4 = 600;
    int result4 = binarySearch(arr4, 0, n4 - 1, target4);
    printf("Test case 4: %d\n", result4);  // Expected output: -1

    return 0;
}
```

In these test cases, we test for different scenarios such as when the target is in the middle of the array, when it's at the beginning or the end, and when it's not in the array at all.