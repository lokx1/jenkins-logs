
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
    int arr1[] = {5, 2, 8, 3, 1};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int key1 = 8;
    int index1 = linearSearch(arr1, n1, key1);
    if (index1 != -1) {
        printf("Test case 1: Element found at index %d\n", index1);
    } else {
        printf("Test case 1: Element not found\n");
    }

    // Test case 2: Key is not present in the array
    int arr2[] = {5, 2, 8, 3, 1};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int key2 = 4;
    int index2 = linearSearch(arr2, n2, key2);
    if (index2 != -1) {
        printf("Test case 2: Element found at index %d\n", index2);
    } else {
        printf("Test case 2: Element not found\n");
    }

    // Test case 3: Key is the first element in the array
    int arr3[] = {5, 2, 8, 3, 1};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    int key3 = 5;
    int index3 = linearSearch(arr3, n3, key3);
    if (index3 != -1) {
        printf("Test case 3: Element found at index %d\n", index3);
    } else {
        printf("Test case 3: Element not found\n");
    }

    // Test case 4: Key is the last element in the array
    int arr4[] = {5, 2, 8, 3, 1};
    int n4 = sizeof(arr4) / sizeof(arr4[0]);
    int key4 = 1;
    int index4 = linearSearch(arr4, n4, key4);
    if (index4 != -1) {
        printf("Test case 4: Element found at index %d\n", index4);
    } else {
        printf("Test case 4: Element not found\n");
    }

    // Test case 5: Array is empty
    int arr5[] = {};
    int n5 = sizeof(arr5) / sizeof(arr5[0]);
    int key5 = 10;
    int index5 = linearSearch(arr5, n5, key5);
    if (index5 != -1) {
        printf("Test case 5: Element found at index %d\n", index5);
    } else {
        printf("Test case 5: Element not found\n");
    }

    return 0;
}
