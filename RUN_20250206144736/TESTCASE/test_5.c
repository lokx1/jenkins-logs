#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "p32.c" 
void testLinearSearchExistingElement()
{
    int arr[] = {5, 2, 8, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 8;
    int index = linearSearch(arr, n, key);
    assert(index == 2);
}
void testLinearSearchNonExistingElement()
{
    int arr[] = {5, 2, 8, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 9;
    int index = linearSearch(arr, n, key);
    assert(index == -1);
}
void testLinearSearchBoundaryElement()
{
    int arr[] = {5, 2, 8, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = INT_MAX; 
    int index = linearSearch(arr, n, key);
    assert(index == -1);
}
void testLinearSearchFloatingPointElement()
{
    int arr[] = {5.0, 2.0, 8.0, 3.0, 1.0}; 
    int n = sizeof(arr) / sizeof(arr[0]);
    float key = 8.0; 
    int index = linearSearch(arr, n, key);
    assert(index == 2);
}
int main(void)
{
    return 0;
}