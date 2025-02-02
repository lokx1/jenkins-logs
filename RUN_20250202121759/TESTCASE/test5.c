
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>

void test_socket_creation() {
    int sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd == -1) {
        perror("Socket creation failed");
        exit(1);
    } else {
        printf("Socket created successfully\n");
        close(sockfd);
    }
}

int main() {
    test_socket_creation();
    return 0;
}
