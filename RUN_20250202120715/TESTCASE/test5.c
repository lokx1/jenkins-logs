
#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>

int main() {
    int sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd == -1) {
        perror("Socket creation failed");
        return 1;
    }
    printf("Socket created successfully\n");

    struct sockaddr_in server_addr;
    memset(&server_addr, 0, sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(8080);
    server_addr.sin_addr.s_addr = inet_addr("127.0.0.1");

    if (connect(sockfd, (struct sockaddr*)&server_addr, sizeof(server_addr)) == -1) {
        perror("Connection to the server failed");
        close(sockfd);
        return 1;
    }
    printf("Connected to the server successfully\n");

    const char *message = "Hello, Server!";
    if (send(sockfd, message, strlen(message), 0) == -1) {
        perror("Sending message failed");
        close(sockfd);
        return 1;
    }
    printf("Message sent successfully\n");

    char buffer[1024];
    ssize_t bytes_received = recv(sockfd, buffer, sizeof(buffer) - 1, 0);
    if (bytes_received == -1) {
        perror("Receiving message failed");
        close(sockfd);
        return 1;
    }
    buffer[bytes_received] = '\0';
    printf("Received message: %s\n", buffer);

    close(sockfd);
    printf("Socket closed successfully\n");
    return 0;
}
