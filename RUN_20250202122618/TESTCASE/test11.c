
#include <stdio.h>

void test_case(int arr[], int size) {
    int sum = 0, max = arr[0], min = arr[0];
    float average;
    int i;

    for (i = 0; i < size; i++) {
        sum += arr[i];
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    average = (float)sum / size;

    printf("Array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nSum: %d\n", sum);
    printf("Average: %.2f\n", average);
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
    printf("\n");
}

int main() {
    int arr1[] = {10, 20, 30, 40, 50};
    int arr2[] = {5, 15, 25, 35, 45};
    int arr3[] = {1, 2, 3, 4, 5};
    int arr4[] = {-10, -20, -30, -40, -50};
    int arr5[] = {100, 200, 300, 400, 500};

    test_case(arr1, 5);
    test_case(arr2, 5);
    test_case(arr3, 5);
    test_case(arr4, 5);
    test_case(arr5, 5);

    return 0;
}
