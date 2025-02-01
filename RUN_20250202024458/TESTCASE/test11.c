#include <stdio.h>
#include <assert.h>

void test_program55() {
    int arr1[5] = {10, 20, 30, 40, 50};
    int arr2[5] = {50, 40, 30, 20, 10};
    int arr3[5] = {10, 10, 10, 10, 10};
    int arr4[5] = {-10, -20, -30, -40, -50};
    int arr5[5] = {0, 0, 0, 0, 0};

    assert(program55(arr1, 5) == (150, 30.0, 50, 10));
    assert(program55(arr2, 5) == (150, 30.0, 50, 10));
    assert(program55(arr3, 5) == (50, 10.0, 10, 10));
    assert(program55(arr4, 5) == (-150, -30.0, -10, -50));
    assert(program55(arr5, 5) == (0, 0.0, 0, 0));

    printf("All test cases passed\n");
}

int main() {
    test_program55();
    return 0;
}