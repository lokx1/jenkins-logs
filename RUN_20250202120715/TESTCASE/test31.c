
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    int pipefd[2];
    pid_t cpid;
    char buffer[6];

    if (pipe(pipefd) == -1) {
        perror("Pipe creation failed");
        exit(EXIT_FAILURE);
    }

    cpid = fork();
    if (cpid == -1) {
        perror("Fork failed");
        exit(EXIT_FAILURE);
    }

    if (cpid == 0) {    /* Child reads from pipe */
        close(pipefd[1]);          /* Close unused write end */
        read(pipefd[0], buffer, 5);
        buffer[5] = '\0';          /* Null-terminate the string */
        printf("Child received: %s\n", buffer);
        close(pipefd[0]);
        _exit(EXIT_SUCCESS);

    } else {            /* Parent writes to pipe */
        close(pipefd[0]);          /* Close unused read end */
        write(pipefd[1], "hello", 5);
        close(pipefd[1]);          /* Reader will see EOF */
        wait(NULL);                /* Wait for child */
        exit(EXIT_SUCCESS);
    }
}
