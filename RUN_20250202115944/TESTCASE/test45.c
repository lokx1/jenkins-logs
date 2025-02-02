
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

void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

int main() {
  int data1[] = {8, 7, 2, 1, 0, 9, 6};
  int n1 = sizeof(data1) / sizeof(data1[0]);
  printf("Unsorted Array 1\n");
  printArray(data1, n1);
  quickSort(data1, 0, n1 - 1);
  printf("Sorted array 1 in ascending order: \n");
  printArray(data1, n1);

  int data2[] = {3, 5, 2, 8, 6, 1, 4, 7};
  int n2 = sizeof(data2) / sizeof(data2[0]);
  printf("Unsorted Array 2\n");
  printArray(data2, n2);
  quickSort(data2, 0, n2 - 1);
  printf("Sorted array 2 in ascending order: \n");
  printArray(data2, n2);

  int data3[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
  int n3 = sizeof(data3) / sizeof(data3[0]);
  printf("Unsorted Array 3\n");
  printArray(data3, n3);
  quickSort(data3, 0, n3 - 1);
  printf("Sorted array 3 in ascending order: \n");
  printArray(data3, n3);

  return 0;
}
