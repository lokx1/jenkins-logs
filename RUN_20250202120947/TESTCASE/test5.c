
#include <stdio.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>

int main() {
    int sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd == -1) {
        perror("Socket creation failed");
        return 1;
    }
    printf("Socket created successfully\n");

    // Test case 1: Check if socket is valid
    if (sockfd >= 0) {
        printf("Test case 1 passed: Socket is valid\n");
    } else {
        printf("Test case 1 failed: Socket is invalid\n");
    }

    // Close the socket
    if (close(sockfd) == 0) {
        printf("Socket closed successfully\n");
    } else {
        perror("Socket closure failed");
        return 1;
    }

    return 0;
}
