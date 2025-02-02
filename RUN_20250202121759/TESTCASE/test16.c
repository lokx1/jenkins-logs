
#include <stdio.h>
#include <stdlib.h>

void create_test_file(const char *filename, const char *content) {
    FILE *file = fopen(filename, "w");
    if (file != NULL) {
        fputs(content, file);
        fclose(file);
    } else {
        printf("Error creating test file!\n");
        exit(1);
    }
}

int main() {
    // Create test file
    create_test_file("numbers.txt", "10 20 30 40 50\n60 70 80 90 100");

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
    printf("Numbers read from file:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
