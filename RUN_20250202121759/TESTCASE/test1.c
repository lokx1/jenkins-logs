
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("example.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    fputs("This is a test file.\nIt contains multiple lines.\nEnd of file.", fp);
    fclose(fp);

    fp = fopen("example.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}
