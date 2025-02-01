
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
  int data[] = {8, 7, 2, 1, 0, 9, 6};
  int n = sizeof(data) / sizeof(data[0]);
  
  printf("Unsorted Array\n");
  printArray(data, n);
  
  quickSort(data, 0, n - 1);
  
  printf("Sorted array in ascending order: \n");
  printArray(data, n);

  // Additional test cases

  int data2[] = {5, 3, 8, 4, 2, 7, 1, 10};
  int n2 = sizeof(data2) / sizeof(data2[0]);
  
  printf("Unsorted Array\n");
  printArray(data2, n2);
  
  quickSort(data2, 0, n2 - 1);
  
  printf("Sorted array in ascending order: \n");
  printArray(data2, n2);

  int data3[] = {-3, 0, 2, -5, 10, 7, 1};
  int n3 = sizeof(data3) / sizeof(data3[0]);
  
  printf("Unsorted Array\n");
  printArray(data3, n3);
  
  quickSort(data3, 0, n3 - 1);
  
  printf("Sorted array in ascending order: \n");
  printArray(data3, n3);

  return 0;
}
