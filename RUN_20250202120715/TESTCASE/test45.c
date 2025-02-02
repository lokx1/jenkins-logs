
#include <stdio.h>

// function to swap elements
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

// function to find the partition position
int partition(int array[], int low, int high) {
  int pivot = array[high];
  int i = (low - 1);
  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
      i++;
      swap(&array[i], &array[j]);
    }
  }
  swap(&array[i + 1], &array[high]);
  return (i + 1);
}

void quickSort(int array[], int low, int high) {
  if (low < high) {
    int pi = partition(array, low, high);
    quickSort(array, low, pi - 1);
    quickSort(array, pi + 1, high);
  }
}

// function to print array elements
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

// Test case 1: Basic test with positive integers
void test1() {
  int data[] = {8, 7, 2, 1, 0, 9, 6};
  int n = sizeof(data) / sizeof(data[0]);
  printf("Test 1 - Unsorted Array\n");
  printArray(data, n);
  quickSort(data, 0, n - 1);
  printf("Test 1 - Sorted Array\n");
  printArray(data, n);
}

// Test case 2: Array with negative integers
void test2() {
  int data[] = {-3, -1, -7, -4, -5, -2};
  int n = sizeof(data) / sizeof(data[0]);
  printf("Test 2 - Unsorted Array\n");
  printArray(data, n);
  quickSort(data, 0, n - 1);
  printf("Test 2 - Sorted Array\n");
  printArray(data, n);
}

// Test case 3: Array with mixed positive and negative integers
void test3() {
  int data[] = {3, -1, 4, -2, 5, -6, 0};
  int n = sizeof(data) / sizeof(data[0]);
  printf("Test 3 - Unsorted Array\n");
  printArray(data, n);
  quickSort(data, 0, n - 1);
  printf("Test 3 - Sorted Array\n");
  printArray(data, n);
}

// Test case 4: Array with all elements the same
void test4() {
  int data[] = {5, 5, 5, 5, 5};
  int n = sizeof(data) / sizeof(data[0]);
  printf("Test 4 - Unsorted Array\n");
  printArray(data, n);
  quickSort(data, 0, n - 1);
  printf("Test 4 - Sorted Array\n");
  printArray(data, n);
}

// Test case 5: Array with a single element
void test5() {
  int data[] = {42};
  int n = sizeof(data) / sizeof(data[0]);
  printf("Test 5 - Unsorted Array\n");
  printArray(data, n);
  quickSort(data, 0, n - 1);
  printf("Test 5 - Sorted Array\n");
  printArray(data, n);
}

// Test case 6: Empty array
void test6() {
  int data[] = {};
  int n = sizeof(data) / sizeof(data[0]);
  printf("Test 6 - Unsorted Array\n");
  printArray(data, n);
  quickSort(data, 0, n - 1);
  printf("Test 6 - Sorted Array\n");
  printArray(data, n);
}

int main() {
  test1();
  test2();
  test3();
  test4();
  test5();
  test6();
  return 0;
}
