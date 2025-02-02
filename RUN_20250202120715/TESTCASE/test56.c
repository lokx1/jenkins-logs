
#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>

int main() {
    int sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd == -1) {
        perror("Socket creation failed");
        return 1;
    }
    printf("Socket created successfully\n");

    struct sockaddr_in server_addr;
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(8080);
    server_addr.sin_addr.s_addr = inet_addr("127.0.0.1");

    if (connect(sockfd, (struct sockaddr*)&server_addr, sizeof(server_addr)) == -1) {
        perror("Connection failed");
        close(sockfd);
        return 1;
    }
    printf("Connected to server successfully\n");

    const char *message = "Hello, Server!";
    if (send(sockfd, message, sizeof(message), 0) == -1) {
        perror("Send failed");
        close(sockfd);
        return 1;
    }
    printf("Message sent successfully\n");

    char buffer[1024];
    int bytes_received = recv(sockfd, buffer, sizeof(buffer) - 1, 0);
    if (bytes_received == -1) {
        perror("Receive failed");
        close(sockfd);
        return 1;
    }
    buffer[bytes_received] = '\0';
    printf("Received message: %s\n", buffer);

    close(sockfd);
    return 0;
}
