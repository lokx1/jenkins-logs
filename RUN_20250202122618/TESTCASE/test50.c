
#include <stdio.h>

void test_file_open_nonexistent() {
    FILE *fp;

    fp = fopen("nonexistent.txt", "r");

    if (fp == NULL) {
        perror("Error opening nonexistent.txt");
    } else {
        fclose(fp);
    }
}

void test_file_open_existing() {
    FILE *fp;

    fp = fopen("existing.txt", "w");

    if (fp == NULL) {
        perror("Error opening existing.txt");
    } else {
        fprintf(fp, "This is a test file.\n");
        fclose(fp);
    }

    fp = fopen("existing.txt", "r");

    if (fp == NULL) {
        perror("Error opening existing.txt");
    } else {
        fclose(fp);
    }
}

int main() {
    test_file_open_nonexistent();
    test_file_open_existing();
    return 0;
}
