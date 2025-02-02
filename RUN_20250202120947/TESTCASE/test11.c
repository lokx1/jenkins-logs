
#include <stdio.h>

void test_case_1() {
    int arr[5] = {10, 20, 30, 40, 50};
    int sum = 0, max = arr[0], min = arr[0];
    float average;
    int i;

    for (i = 0; i < 5; i++) {
        sum += arr[i];
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    average = (float)sum / 5;

    printf("Test Case 1:\n");
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
}

void test_case_2() {
    int arr[5] = {5, 15, 25, 35, 45};
    int sum = 0, max = arr[0], min = arr[0];
    float average;
    int i;

    for (i = 0; i < 5; i++) {
        sum += arr[i];
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    average = (float)sum / 5;

    printf("Test Case 2:\n");
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
}

void test_case_3() {
    int arr[5] = {100, 200, 300, 400, 500};
    int sum = 0, max = arr[0], min = arr[0];
    float average;
    int i;

    for (i = 0; i < 5; i++) {
        sum += arr[i];
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    average = (float)sum / 5;

    printf("Test Case 3:\n");
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
}

void test_case_4() {
    int arr[5] = {1, 2, 3, 4, 5};
    int sum = 0, max = arr[0], min = arr[0];
    float average;
    int i;

    for (i = 0; i < 5; i++) {
        sum += arr[i];
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    average = (float)sum / 5;

    printf("Test Case 4:\n");
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
}

void test_case_5() {
    int arr[5] = {-10, -20, -30, -40, -50};
    int sum = 0, max = arr[0], min = arr[0];
    float average;
    int i;

    for (i = 0; i < 5; i++) {
        sum += arr[i];
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    average = (float)sum / 5;

    printf("Test Case 5:\n");
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
}

int main() {
    test_case_1();
    test_case_2();
    test_case_3();
    test_case_4();
    test_case_5();
    return 0;
}
