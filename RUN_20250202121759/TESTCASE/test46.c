
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
    // Test case 1: Element is present in the array
    int arr1[] = {5, 2, 8, 3, 1};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int key1 = 8;
    int index1 = linearSearch(arr1, n1, key1);
    if (index1 != -1) {
        printf("Test case 1: Element found at index %d\n", index1);
    } else {
        printf("Test case 1: Element not found\n");
    }

    // Test case 2: Element is not present in the array
    int arr2[] = {10, 20, 30, 40, 50};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int key2 = 25;
    int index2 = linearSearch(arr2, n2, key2);
    if (index2 != -1) {
        printf("Test case 2: Element found at index %d\n", index2);
    } else {
        printf("Test case 2: Element not found\n");
    }

    // Test case 3: Element is the first element in the array
    int arr3[] = {7, 9, 11, 13};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    int key3 = 7;
    int index3 = linearSearch(arr3, n3, key3);
    if (index3 != -1) {
        printf("Test case 3: Element found at index %d\n", index3);
    } else {
        printf("Test case 3: Element not found\n");
    }

    // Test case 4: Element is the last element in the array
    int arr4[] = {3, 6, 9, 12, 15};
    int n4 = sizeof(arr4) / sizeof(arr4[0]);
    int key4 = 15;
    int index4 = linearSearch(arr4, n4, key4);
    if (index4 != -1) {
        printf("Test case 4: Element found at index %d\n", index4);
    } else {
        printf("Test case 4: Element not found\n");
    }

    // Test case 5: Array with one element where the element is the key
    int arr5[] = {100};
    int n5 = sizeof(arr5) / sizeof(arr5[0]);
    int key5 = 100;
    int index5 = linearSearch(arr5, n5, key5);
    if (index5 != -1) {
        printf("Test case 5: Element found at index %d\n", index5);
    } else {
        printf("Test case 5: Element not found\n");
    }

    // Test case 6: Array with one element where the element is not the key
    int arr6[] = {200};
    int n6 = sizeof(arr6) / sizeof(arr6[0]);
    int key6 = 300;
    int index6 = linearSearch(arr6, n6, key6);
    if (index6 != -1) {
        printf("Test case 6: Element found at index %d\n", index6);
    } else {
        printf("Test case 6: Element not found\n");
    }

    return 0;
}
