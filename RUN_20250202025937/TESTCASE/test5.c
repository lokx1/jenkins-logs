
#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>

int main() {
    int sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd == -1) {
        perror("Socket creation failed");
        return 1;
    }
    printf("Socket created successfully\n");

    // Test case: Check if socket is valid
    if (sockfd < 0) {
        printf("Test failed: Invalid socket descriptor\n");
    } else {
        printf("Test passed: Valid socket descriptor\n");
    }

    // Close the socket
    if (close(sockfd) == -1) {
        perror("Socket close failed");
        return 1;
    }
    printf("Socket closed successfully\n");

    return 0;
}
