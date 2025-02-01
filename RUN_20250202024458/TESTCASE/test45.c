Sure, here are some test cases for the above C code:

```C
#include <assert.h>

void test_swap() {
    int a = 5, b = 10;
    swap(&a, &b);
    assert(a == 10 && b == 5);
}

void test_partition() {
    int array[] = {10, 80, 30, 90, 40, 50, 70};
    int low = 0, high = 6;
    int pi = partition(array, low, high);
    assert(pi == 4);
    for(int i = 0; i < pi; i++)
        assert(array[i] <= array[pi]);
    for(int i = pi + 1; i <= high; i++)
        assert(array[i] > array[pi]);
}

void test_quickSort() {
    int array[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(array) / sizeof(array[0]);
    quickSort(array, 0, n - 1);
    for(int i = 0; i < n - 1; i++)
        assert(array[i] <= array[i + 1]);
}

void test_printArray() {
    int array[] = {1, 2, 3, 4, 5};
    int n = sizeof(array) / sizeof(array[0]);
    printArray(array, n);
}

int main() {
    test_swap();
    test_partition();
    test_quickSort();
    test_printArray();
    return 0;
}
```

In these tests, `test_swap()` checks if the `swap` function correctly swaps the values of two integers. `test_partition()` checks if the `partition` function correctly partitions an array around a pivot. `test_quickSort()` checks if the `quickSort` function correctly sorts an array in ascending order. `test_printArray()` is used to print the array.