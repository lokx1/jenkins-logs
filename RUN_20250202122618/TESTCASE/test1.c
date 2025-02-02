
#include <stdio.h>

void create_test_file() {
    FILE *fp = fopen("example.txt", "w");
    if (fp != NULL) {
        fputs("Hello, World!\nThis is a test file.\n", fp);
        fclose(fp);
    }
}

int main() {
    create_test_file();
    
    FILE *fp;
    char ch;

    fp = fopen("example.txt", "r");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}
