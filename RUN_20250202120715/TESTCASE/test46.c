
#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1; // Element not found
}

int main() {
    // Test case 1: Key is present in the array
    {
        int arr[] = {5, 2, 8, 3, 1};
        int n = sizeof(arr) / sizeof(arr[0]);
        int key = 8;
        int index = linearSearch(arr, n, key);
        if (index != -1) {
            printf("Test case 1: Element found at index %d\n", index);
        } else {
            printf("Test case 1: Element not found\n");
        }
    }

    // Test case 2: Key is not present in the array
    {
        int arr[] = {5, 2, 8, 3, 1};
        int n = sizeof(arr) / sizeof(arr[0]);
        int key = 7;
        int index = linearSearch(arr, n, key);
        if (index != -1) {
            printf("Test case 2: Element found at index %d\n", index);
        } else {
            printf("Test case 2: Element not found\n");
        }
    }

    // Test case 3: Key is the first element in the array
    {
        int arr[] = {5, 2, 8, 3, 1};
        int n = sizeof(arr) / sizeof(arr[0]);
        int key = 5;
        int index = linearSearch(arr, n, key);
        if (index != -1) {
            printf("Test case 3: Element found at index %d\n", index);
        } else {
            printf("Test case 3: Element not found\n");
        }
    }

    // Test case 4: Key is the last element in the array
    {
        int arr[] = {5, 2, 8, 3, 1};
        int n = sizeof(arr) / sizeof(arr[0]);
        int key = 1;
        int index = linearSearch(arr, n, key);
        if (index != -1) {
            printf("Test case 4: Element found at index %d\n", index);
        } else {
            printf("Test case 4: Element not found\n");
        }
    }

    // Test case 5: Array is empty
    {
        int arr[] = {};
        int n = sizeof(arr) / sizeof(arr[0]);
        int key = 1;
        int index = linearSearch(arr, n, key);
        if (index != -1) {
            printf("Test case 5: Element found at index %d\n", index);
        } else {
            printf("Test case 5: Element not found\n");
        }
    }

    return 0;
}
