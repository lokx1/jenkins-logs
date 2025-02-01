```C
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function prototypes
void greet();
void farewell();

// Test function prototypes
void test_greet();
void test_farewell();

int main() {
    test_greet();
    test_farewell();
    return 0;
}

// Function definitions
void greet() {
    printf("Hello! Welcome to Modular Programming.\n");
}

void farewell() {
    printf("Goodbye! Thank you for using Modular Programming.\n");
}

// Test function definitions
void test_greet() {
    FILE *stream;
    char *buf;
    size_t len;
    stream = open_memstream(&buf, &len);
    if (stream == NULL) {
        perror("open_memstream");
        exit(EXIT_FAILURE);
    }

    // Redirect stdout to stream.
    stdout = stream;

    greet();

    // Flush stream and reset stdout.
    fflush(stream);
    stdout = freopen("/dev/tty", "a", stdout);

    assert(strcmp(buf, "Hello! Welcome to Modular Programming.\n") == 0);

    free(buf);
    fclose(stream);
}

void test_farewell() {
    FILE *stream;
    char *buf;
    size_t len;
    stream = open_memstream(&buf, &len);
    if (stream == NULL) {
        perror("open_memstream");
        exit(EXIT_FAILURE);
    }

    // Redirect stdout to stream.
    stdout = stream;

    farewell();

    // Flush stream and reset stdout.
    fflush(stream);
    stdout = freopen("/dev/tty", "a", stdout);

    assert(strcmp(buf, "Goodbye! Thank you for using Modular Programming.\n") == 0);

    free(buf);
    fclose(stream);
}
