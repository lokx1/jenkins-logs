
#include <stdio.h>

void test_open_nonexistent_file() {
    FILE *file = fopen("nonexistent_file.txt", "r");
    if (file == NULL) {
        printf("Test passed: Error opening nonexistent file.\n");
    } else {
        printf("Test failed: Opened nonexistent file.\n");
        fclose(file);
    }
}

void test_open_existing_file() {
    FILE *file = fopen("existent_file.txt", "w");
    if (file == NULL) {
        printf("Test setup failed: Could not create file.\n");
        return;
    }
    fclose(file);

    file = fopen("existent_file.txt", "r");
    if (file != NULL) {
        printf("Test passed: Successfully opened existing file.\n");
        fclose(file);
    } else {
        printf("Test failed: Could not open existing file.\n");
    }

    remove("existent_file.txt");
}

int main() {
    test_open_nonexistent_file();
    test_open_existing_file();
    return 0;
}
