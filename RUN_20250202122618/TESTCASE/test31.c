
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    int pipefd[2];
    char buffer[6]; // Increase buffer size to hold null terminator

    if (pipe(pipefd) == -1) {
        perror("Pipe creation failed");
        return 1;
    }

    pid_t pid = fork();

    if (pid == -1) {
        perror("Fork failed");
        return 1;
    }

    if (pid == 0) {
        // Child process
        close(pipefd[0]); // Close unused read end
        write(pipefd[1], "hello", 5);
        close(pipefd[1]); // Close write end after writing
    } else {
        // Parent process
        close(pipefd[1]); // Close unused write end
        read(pipefd[0], buffer, 5);
        buffer[5] = '\0'; // Null terminate the string
        printf("Message received from pipe: %s\n", buffer);
        close(pipefd[0]); // Close read end after reading
        wait(NULL); // Wait for child process to finish
    }

    return 0;
}
