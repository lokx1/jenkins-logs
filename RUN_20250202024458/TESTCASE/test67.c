#include <assert.h>

void test_bubbleSort() {
    // Test case 1: Normal array
    int arr1[] = {5, 2, 8, 3, 1};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    bubbleSort(arr1, n1);
    for (int i = 0; i < n1 - 1; i++) {
        assert(arr1[i] <= arr1[i + 1]);
    }

    // Test case 2: Array with negative numbers
    int arr2[] = {-1, -3, -2, -5, -4};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    bubbleSort(arr2, n2);
    for (int i = 0; i < n2 - 1; i++) {
        assert(arr2[i] <= arr2[i + 1]);
    }

    // Test case 3: Array with all same elements
    int arr3[] = {1, 1, 1, 1, 1};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    bubbleSort(arr3, n3);
    for (int i = 0; i < n3 - 1; i++) {
        assert(arr3[i] == arr3[i + 1]);
    }

    // Test case 4: Array with one element
    int arr4[] = {5};
    int n4 = sizeof(arr4) / sizeof(arr4[0]);
    bubbleSort(arr4, n4);
    assert(arr4[0] == 5);
}

int main() {
    test_bubbleSort();
    return 0;
}