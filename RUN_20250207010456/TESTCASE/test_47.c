#include <stdio.h>
#include "p61.c"

int main() {
    // Test reading numbers from file and storing them in an array
    FILE *file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int numbers[100];
    int count = 0;
    int num;

    // Read numbers from file and store them in array
    while (fscanf(file, "%d", &num) == 1) {
        numbers[count] = num;
        count++;
    }

    fclose(file);

    // Test printing the contents of the array
    printf("Numbers read from file:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}