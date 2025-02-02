
#include <stdio.h>

void test_array(int arr[], int size) {
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
    printf("\n");

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
    printf("\n");
}

int main() {
    int test1[] = {10, 20, 30, 40, 50};
    int test2[] = {5, 15, 25, 35, 45, 55};
    int test3[] = {-10, -20, -30, -40, -50};
    int test4[] = {100};
    int test5[] = {3, 3, 3, 3, 3};

    test_array(test1, 5);
    test_array(test2, 6);
    test_array(test3, 5);
    test_array(test4, 1);
    test_array(test5, 5);

    return 0;
}
