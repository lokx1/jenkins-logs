
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

    int connect_status = connect(sockfd, (struct sockaddr*)&server_addr, sizeof(server_addr));
    if (connect_status == -1) {
        perror("Connection to the server failed");
        close(sockfd);
        return 1;
    }
    printf("Connected to the server successfully\n");

    const char *msg = "Hello, server!";
    int send_status = send(sockfd, msg, sizeof(msg), 0);
    if (send_status == -1) {
        perror("Sending message failed");
        close(sockfd);
        return 1;
    }
    printf("Message sent successfully\n");

    char buffer[1024];
    int recv_status = recv(sockfd, buffer, sizeof(buffer) - 1, 0);
    if (recv_status == -1) {
        perror("Receiving message failed");
        close(sockfd);
        return 1;
    }
    buffer[recv_status] = '\0';
    printf("Received message: %s\n", buffer);

    close(sockfd);
    return 0;
}
