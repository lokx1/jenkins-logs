#include <stdio.h>
#include <assert.h>

void test_program_51() {
    FILE *fp;
    char buffer[100];

    /* Test case 1: Input is a positive number */
    fp = freopen("test.txt", "w", stdout);
    printf("5");
    fclose(fp);
    fp = freopen("test.txt", "r", stdin);
    main();
    fclose(fp);
    fp = freopen("test.txt", "r", stdout);
    fgets(buffer, 100, fp);
    assert(strcmp(buffer, "The number is positive.\n") == 0);
    fclose(fp);

    /* Test case 2: Input is a negative number */
    fp = freopen("test.txt", "w", stdout);
    printf("-3");
    fclose(fp);
    fp = freopen("test.txt", "r", stdin);
    main();
    fclose(fp);
    fp = freopen("test.txt", "r", stdout);
    fgets(buffer, 100, fp);
    assert(strcmp(buffer, "The number is negative.\n") == 0);
    fclose(fp);

    /* Test case 3: Input is zero */
    fp = freopen("test.txt", "w", stdout);
    printf("0");
    fclose(fp);
    fp = freopen("test.txt", "r", stdin);
    main();
    fclose(fp);
    fp = freopen("test.txt", "r", stdout);
    fgets(buffer, 100, fp);
    assert(strcmp(buffer, "The number is zero.\n") == 0);
    fclose(fp);

    printf("All test cases passed.\n");
}

int main() {
    test_program_51();
    return 0;
}