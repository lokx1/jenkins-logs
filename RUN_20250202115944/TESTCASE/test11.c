
#include <stdio.h>

void test_case(int arr[], int size, int expected_sum, float expected_average, int expected_max, int expected_min) {
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

    printf("Test Case:\n");
    printf("Expected Sum: %d, Calculated Sum: %d\n", expected_sum, sum);
    printf("Expected Average: %.2f, Calculated Average: %.2f\n", expected_average, average);
    printf("Expected Maximum: %d, Calculated Maximum: %d\n", expected_max, max);
    printf("Expected Minimum: %d, Calculated Minimum: %d\n", expected_min, min);
    printf("\n");
}

int main() {
    int arr1[] = {10, 20, 30, 40, 50};
    test_case(arr1, 5, 150, 30.00, 50, 10);

    int arr2[] = {5, 7, 2, 9, 1};
    test_case(arr2, 5, 24, 4.80, 9, 1);

    int arr3[] = {-1, -2, -3, -4, -5};
    test_case(arr3, 5, -15, -3.00, -1, -5);

    int arr4[] = {100, 200, 300, 400, 500};
    test_case(arr4, 5, 1500, 300.00, 500, 100);

    int arr5[] = {0, 0, 0, 0, 0};
    test_case(arr5, 5, 0, 0.00, 0, 0);

    return 0;
}
