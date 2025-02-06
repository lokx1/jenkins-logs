#include <stdio.h>
#include <sys/socket.h>
#include "p37.c"

int main() {
    int sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd == -1) {
        perror("Socket creation failed");
        return 1;
    }
    printf("Socket created successfully\n");
    return 0;
}