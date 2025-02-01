#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main() {
    int pipefd[2];
    char buffer[6]; // Buffer size increased to 6 to accommodate null character

    if (pipe(pipefd) == -1) {
        perror("Pipe creation failed");
        return 1;
    }

    write(pipefd[1], "hello", 5);
    close(pipefd[1]); // Close write end of pipe

    read(pipefd[0], buffer, 5);
    buffer[5] = '\0'; // Null terminate the buffer to make it a valid string

    printf("Message received from pipe: %s\n", buffer);

    close(pipefd[0]); // Close read end of pipe

    return 0;
}