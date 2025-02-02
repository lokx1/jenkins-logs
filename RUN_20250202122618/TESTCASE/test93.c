
#include <stdio.h>

int linearSearch(int arr[], int n, int target) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == target)
            return i; // Return index if element is found
    }
    return -1; // Return -1 if element is not found
}

int main() {
    // Test case 1
    int arr1[] = {2, 4, 6, 8, 10};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int target1 = 6;
    int index1 = linearSearch(arr1, n1, target1);

    if (index1 != -1)
        printf("Element %d found at index %d\n", target1, index1);
    else
        printf("Element %d not found in the array\n", target1);

    // Test case 2
    int arr2[] = {1, 3, 5, 7, 9};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int target2 = 4;
    int index2 = linearSearch(arr2, n2, target2);

    if (index2 != -1)
        printf("Element %d found at index %d\n", target2, index2);
    else
        printf("Element %d not found in the array\n", target2);

    // Test case 3
    int arr3[] = {10, 20, 30, 40, 50};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    int target3 = 50;
    int index3 = linearSearch(arr3, n3, target3);

    if (index3 != -1)
        printf("Element %d found at index %d\n", target3, index3);
    else
        printf("Element %d not found in the array\n", target3);

    // Test case 4
    int arr4[] = {15};
    int n4 = sizeof(arr4) / sizeof(arr4[0]);
    int target4 = 15;
    int index4 = linearSearch(arr4, n4, target4);

    if (index4 != -1)
        printf("Element %d found at index %d\n", target4, index4);
    else
        printf("Element %d not found in the array\n", target4);

    // Test case 5
    int arr5[] = {};
    int n5 = sizeof(arr5) / sizeof(arr5[0]);
    int target5 = 1;
    int index5 = linearSearch(arr5, n5, target5);

    if (index5 != -1)
        printf("Element %d found at index %d\n", target5, index5);
    else
        printf("Element %d not found in the array\n", target5);

    return 0;
}
