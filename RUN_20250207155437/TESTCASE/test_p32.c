#include <stdio.h>
#include "p32.c"

int main() {
    int arr[] = {5, 2, 8, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 8;

    // Test case 1: Element found in the array
    int index = linearSearch(arr, n, key);
    if (index != -1) {
        printf("Element found at index %d\n", index);
    } else {
        printf("Element not found\n");
    }

    // Test case 2: Element not found in the array
    int key = 9;
    index = linearSearch(arr, n, key);
    if (index != -1) {
        printf("Element found at index %d\n", index);
    } else {
        printf("Element not found\n");
    }

    return 0;
}