
#include <stdio.h>
#include <stdlib.h>

void create_test_file(const char *filename, const char *content) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error creating test file!\n");
        exit(1);
    }
    fprintf(file, "%s", content);
    fclose(file);
}

int main() {
    // Test case 1: Normal case with multiple numbers
    create_test_file("numbers.txt", "10 20 30 40 50\n");
    FILE *file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int numbers[100];
    int count = 0;
    int num;

    // Read numbers from file
    while (fscanf(file, "%d", &num) == 1) {
        numbers[count] = num;
        count++;
    }

    fclose(file);

    // Print array contents
    printf("Test case 1 - Numbers read from file:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Test case 2: Empty file
    create_test_file("numbers.txt", "");
    file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    count = 0;

    // Read numbers from file
    while (fscanf(file, "%d", &num) == 1) {
        numbers[count] = num;
        count++;
    }

    fclose(file);

    // Print array contents
    printf("Test case 2 - Numbers read from file:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Test case 3: File with negative numbers
    create_test_file("numbers.txt", "-1 -2 -3 -4 -5\n");
    file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    count = 0;

    // Read numbers from file
    while (fscanf(file, "%d", &num) == 1) {
        numbers[count] = num;
        count++;
    }

    fclose(file);

    // Print array contents
    printf("Test case 3 - Numbers read from file:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
