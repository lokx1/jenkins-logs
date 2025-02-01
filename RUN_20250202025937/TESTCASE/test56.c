
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

    // Test case 1: Verify socket creation
    if (sockfd != -1) {
        printf("Test Case 1 Passed: Socket creation successful\n");
    } else {
        printf("Test Case 1 Failed: Socket creation failed\n");
    }

    // Test case 2: Verify socket file descriptor is valid
    if (sockfd >= 0) {
        printf("Test Case 2 Passed: Valid socket file descriptor\n");
    } else {
        printf("Test Case 2 Failed: Invalid socket file descriptor\n");
    }

    close(sockfd);
    return 0;
}
