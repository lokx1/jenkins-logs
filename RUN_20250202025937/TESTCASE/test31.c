
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main() {
    int pipefd[2];
    char buffer[6]; // Increased size to accommodate null terminator

    if (pipe(pipefd) == -1) {
        perror("Pipe creation failed");
        return 1;
    }

    write(pipefd[1], "hello", 5);
    read(pipefd[0], buffer, 5);
    buffer[5] = '\0'; // Null terminate the string

    printf("Message received from pipe: %s\n", buffer);

    return 0;
}
