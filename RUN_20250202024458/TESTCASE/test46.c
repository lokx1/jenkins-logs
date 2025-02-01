#include <assert.h>

void test_linearSearch() {
    int arr1[] = {5, 2, 8, 3, 1};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    assert(linearSearch(arr1, n1, 8) == 2);

    int arr2[] = {1, 2, 3, 4, 5};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    assert(linearSearch(arr2, n2, 3) == 2);

    int arr3[] = {5, 4, 3, 2, 1};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    assert(linearSearch(arr3, n3, 1) == 4);

    int arr4[] = {1, 1, 1, 1, 1};
    int n4 = sizeof(arr4) / sizeof(arr4[0]);
    assert(linearSearch(arr4, n4, 1) == 0);

    int arr5[] = {1, 2, 3, 4, 5};
    int n5 = sizeof(arr5) / sizeof(arr5[0]);
    assert(linearSearch(arr5, n5, 6) == -1);
}

int main() {
    test_linearSearch();
    return 0;
}