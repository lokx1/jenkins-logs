
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

    if (close(sockfd) == -1) {
        perror("Socket close failed");
        return 1;
    }
    printf("Socket closed successfully\n");

    return 0;
}
