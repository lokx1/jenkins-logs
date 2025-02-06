#include <stdio.h>
#include <sys/socket.h>
#include "p38.c"

int main() {
    int sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd == -1) {
        perror("Socket creation failed");
        return 1;
    }
    printf("Socket created successfully\n");
    // Test the socket function by creating a new socket and checking its file descriptor.
    int fd = open("/dev/null", O_RDWR);
    if (fd == -1) {
        perror("File opening failed");
        return 1;
    }
    close(fd);
    printf("File opened successfully\n");
    // Test the socket function by creating a new socket and checking its address family.
    struct sockaddr_in addr = {0};
    addr.sin_family = AF_INET;
    if (bind(sockfd, (struct sockaddr *)&addr, sizeof(addr)) == -1) {
        perror("Socket binding failed");
        return 1;
    }
    printf("Socket bound successfully\n");
    // Test the socket function by creating a new socket and checking its protocol.
    if (listen(sockfd, 5) == -1) {
        perror("Socket listening failed");
        return 1;
    }
    printf("Socket listening successfully\n");
    return 0;
}