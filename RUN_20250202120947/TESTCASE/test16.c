
#include <stdio.h>
#include <stdlib.h>

void create_test_file() {
    FILE *file = fopen("numbers.txt", "w");
    if (file == NULL) {
        printf("Error creating test file!\n");
        exit(1);
    }
    fprintf(file, "12 45 78 23 56 89 34 67 90 123 456 789 1011");
    fclose(file);
}

int main() {
    create_test_file();

    FILE *file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int numbers[100];
    int count = 0;
    int num;

    while (fscanf(file, "%d", &num) == 1) {
        numbers[count] = num;
        count++;
    }

    fclose(file);

    printf("Numbers read from file:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
