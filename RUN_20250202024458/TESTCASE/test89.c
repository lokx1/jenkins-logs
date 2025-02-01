#include <stdio.h>
#include <string.h>
#include <assert.h>

void test_main(int argc, char *argv[]) {
    FILE *fp = freopen("test.out", "w", stdout);
    main(argc, argv);
    freopen("/dev/stdout", "w", stdout);
    fp = fopen("test.out", "r");
    char output[100];
    fgets(output, 100, fp);
    fclose(fp);

    if (argc < 2) {
        assert(strcmp(output, "Usage: test <arg1>\n") == 0);
    } else {
        char expected_output[100];
        sprintf(expected_output, "Argument passed: %s\n", argv[1]);
        assert(strcmp(output, expected_output) == 0);
    }
}

int main() {
    char *test1[] = {"test"};
    test_main(1, test1);

    char *test2[] = {"test", "arg1"};
    test_main(2, test2);

    return 0;
}