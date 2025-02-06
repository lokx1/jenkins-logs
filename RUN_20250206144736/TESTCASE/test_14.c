#include <limits.h>
#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include "p31.c" 
void test_bubbleSort()
{
    int arr[] = {5, 2, 8, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    assert(arr[0] == 1 && arr[1] == 2 && arr[2] == 3 && arr[3] == 5 && arr[4] == 8);
}
void test_bubbleSort_boundary()
{
    int arr[] = {INT_MAX, INT_MIN};
    int n = sizeof(arr) / sizeof(arr[0]);
    assert(arr[0] == INT_MIN && arr[1] == INT_MAX);
}
void test_bubbleSort_epsilon()
{
    float arr[] = {3.14, 2.718};
    int n = sizeof(arr) / sizeof(arr[0]);
    assert(fabs(arr[0] - 2.718) < FLT_EPSILON && fabs(arr[1] - 3.14) < FLT_EPSILON);
}
void test_bubbleSort_invalid()
{
    int arr[] = {-1, -2};
    int n = sizeof(arr) / sizeof(arr[0]);
    assert(arr[0] == -1 && arr[1] == -2);
}
int main(void)
{
}