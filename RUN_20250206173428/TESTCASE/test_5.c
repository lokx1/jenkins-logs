#include <float.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "p32.c" 
void testBoundaryValues()
{
    int arr[] = {5, 2, 8, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = INT_MAX; 
    int index = linearSearch(arr, n, key);
    assert(index == -1); 
}
void testEpsilonComparisons()
{
    float arr[] = {5.0 f, 2.0 f, 8.0 f, 3.0 f, 1.0 f};
    int n = sizeof(arr) / sizeof(arr[0]);
    float key = FLT_MIN; 
    int index = linearSearch(arr, n, key);
    assert(index == -1); 
}
void testInvalidInputs()
{
    int arr[] = {5, 2, 8, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = -1; 
    int index = linearSearch(arr, n, key);
    assert(index == -1); 
}
void testValidOutputs()
{
    int arr[] = {5, 2, 8, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 8; 
    int index = linearSearch(arr, n, key);
    assert(index == 2); 
}
int main(void)
{
    return 0;
}