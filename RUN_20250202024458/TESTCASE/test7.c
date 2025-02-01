#include <assert.h>

void test_bubbleSort() {
    int arr1[] = {64, 34, 25, 12, 22, 11, 90};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    bubbleSort(arr1, n1);
    for (int i = 0; i < n1 - 1; i++)
        assert(arr1[i] <= arr1[i + 1]);

    int arr2[] = {1, 2, 3, 4, 5, 6, 7};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    bubbleSort(arr2, n2);
    for (int i = 0; i < n2 - 1; i++)
        assert(arr2[i] <= arr2[i + 1]);

    int arr3[] = {7, 6, 5, 4, 3, 2, 1};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    bubbleSort(arr3, n3);
    for (int i = 0; i < n3 - 1; i++)
        assert(arr3[i] <= arr3[i + 1]);
}

int main() {
    test_bubbleSort();
    printf("All test cases passed successfully.\n");
    return 0;
}