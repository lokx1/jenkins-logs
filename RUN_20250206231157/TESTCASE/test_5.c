Here is a test case for the linear search function:
```c
#include <stdio.h>
#include "p32.c"

int main() {
    int arr[] = {5, 2, 8, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 8;

    // Test case: search for element in the middle of the array
    int index = linearSearch(arr, n, key);
    if (index != -1) {
        printf("Element found at index %d\n", index);
    } else {
        printf("Element not found\n");
    }

    // Test case: search for element at the beginning of the array
    key = 5;
    index = linearSearch(arr, n, key);
    if (index != -1) {
        printf("Element found at index %d\n", index);
    } else {
        printf("Element not found\n");
    }

    // Test case: search for element at the end of the array
    key = 1;
    index = linearSearch(arr, n, key);
    if (index != -1) {
        printf("Element found at index %d\n", index);
    } else {
        printf("Element not found\n");
    }

    // Test case: search for element that is not in the array
    key = 9;
    index = linearSearch(arr, n, key);
    if (index != -1) {
        printf("Element found at index %d\n", index);
    } else {
        printf("Element not found\n");
    }

    return 0;
}
```