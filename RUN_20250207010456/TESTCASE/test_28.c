#include <stdio.h>
#include "p32.c" // include the original file

int main() {
    int arr[] = {5, 2, 8, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 8;

    int index = linearSearch(arr, n, key);

    if (index != -1) {
        printf("Element found at index %d\n", index);
    } else {
        printf("Element not found\n");
    }

    return 0;
}