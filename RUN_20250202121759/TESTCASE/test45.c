
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

// main function
int main() {
  // Test case 1
  int data1[] = {8, 7, 2, 1, 0, 9, 6};
  int n1 = sizeof(data1) / sizeof(data1[0]);
  printf("Test Case 1 - Unsorted Array\n");
  printArray(data1, n1);
  quickSort(data1, 0, n1 - 1);
  printf("Test Case 1 - Sorted array in ascending order: \n");
  printArray(data1, n1);

  // Test case 2: Already sorted array
  int data2[] = {1, 2, 3, 4, 5};
  int n2 = sizeof(data2) / sizeof(data2[0]);
  printf("Test Case 2 - Unsorted Array\n");
  printArray(data2, n2);
  quickSort(data2, 0, n2 - 1);
  printf("Test Case 2 - Sorted array in ascending order: \n");
  printArray(data2, n2);

  // Test case 3: Array with all equal elements
  int data3[] = {5, 5, 5, 5, 5};
  int n3 = sizeof(data3) / sizeof(data3[0]);
  printf("Test Case 3 - Unsorted Array\n");
  printArray(data3, n3);
  quickSort(data3, 0, n3 - 1);
  printf("Test Case 3 - Sorted array in ascending order: \n");
  printArray(data3, n3);

  // Test case 4: Array with negative numbers
  int data4[] = {-3, -1, -7, -4, -5, -6, -2};
  int n4 = sizeof(data4) / sizeof(data4[0]);
  printf("Test Case 4 - Unsorted Array\n");
  printArray(data4, n4);
  quickSort(data4, 0, n4 - 1);
  printf("Test Case 4 - Sorted array in ascending order: \n");
  printArray(data4, n4);

  // Test case 5: Empty array
  int data5[] = {};
  int n5 = sizeof(data5) / sizeof(data5[0]);
  printf("Test Case 5 - Unsorted Array\n");
  printArray(data5, n5);
  quickSort(data5, 0, n5 - 1);
  printf("Test Case 5 - Sorted array in ascending order: \n");
  printArray(data5, n5);

  return 0;
}
