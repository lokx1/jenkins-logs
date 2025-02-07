#include <stdio.h>
#include "p61.c"

int main() {
    // Test that file can be opened successfully
    FILE *file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    } else {
        printf("File opened successfully\n");
    }
    
    // Test that the array can be filled with numbers from the file
    int numbers[100];
    int count = 0;
    int num;
    
    while (fscanf(file, "%d", &num) == 1) {
        numbers[count] = num;
        count++;
    }
    
    if (count > 0) {
        printf("Array filled with %d numbers\n", count);
    } else {
        printf("Error reading from file\n");
        return 1;
    }
    
    // Test that the array can be printed correctly
    printf("Numbers read from file:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    
    return 0;
}