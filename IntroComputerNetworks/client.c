#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdint.h>
#include <time.h>

struct dhcp_packet {
    uint8_t op;           // Operation code (1 = BOOTREQUEST, 2 = BOOTREPLY)
    uint32_t ciaddr;      // Client IP address (0 if client is in INIT state)
    uint32_t yiaddr;      // 'Your' (client) IP address
    uint32_t fromIPAddr;  // should be 0.0.0.0 on client->server
    uint32_t toIPAddr;    // should be 255.255.255.255 on client->server
    uint16_t transID;     // transaction ID – random number client->server
};

int main(int argc, char *argv[]) {
    int sockfd;
    struct sockaddr_in server_addr;
    struct dhcp_packet packet;
    struct dhcp_packet response;
    int port;
    struct in_addr addr;
    
    // check if port number was given
    if (argc != 2) {
        printf("Usage: %s <port>\n", argv[0]);
        return 1;
    }
    
    port = atoi(argv[1]);
    
    // create socket
    sockfd = socket(AF_INET, SOCK_DGRAM, 0);
    if (sockfd < 0) {
        printf("socket creation failed\n");
        return 1;
    }
    
    // enable broadcast
    int broadcast_enable = 1;
    if (setsockopt(sockfd, SOL_SOCKET, SO_BROADCAST, &broadcast_enable, sizeof(broadcast_enable)) == -1) {
        perror("setsockopt failed");
        exit(EXIT_FAILURE);
    }
    
    // set up the packet
    packet.op = 1;  // bootrequest
    packet.ciaddr = inet_addr("0.0.0.0");
    packet.fromIPAddr = inet_addr("0.0.0.0");
    packet.toIPAddr = inet_addr("255.255.255.255");
    packet.yiaddr = inet_addr("0.0.0.0");
    
    // random transaction id
    srand(time(NULL));
    packet.transID = rand();
    
    // set up server address
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(port);
    server_addr.sin_addr.s_addr = inet_addr("255.255.255.255");
    
    // send the packet
    printf("Sending request...\n");
    if (sendto(sockfd, &packet, sizeof(packet), 0, (struct sockaddr *)&server_addr, sizeof(server_addr)) < 0) {
        printf("sendto failed\n");
        close(sockfd);
        return 1;
    }
    
    // wait for response
    printf("Waiting for response...\n");
    socklen_t addr_len = sizeof(server_addr);
    if (recvfrom(sockfd, &response, sizeof(response), 0, (struct sockaddr *)&server_addr, &addr_len) < 0) {
        printf("recvfrom failed\n");
        close(sockfd);
        return 1;
    }
    
    // check if response is valid
    if (response.op != 2) {
        printf("Wrong op code: %d\n", response.op);
        close(sockfd);
        return 1;
    }
    
    if (response.toIPAddr != inet_addr("255.255.255.255")) {
        printf("Wrong toIPAddr\n");
        close(sockfd);
        return 1;
    }
    
    // print all fields
    printf("Response received! Fields:\n");
    printf("op: %d\n", response.op);
    
    addr.s_addr = response.ciaddr;
    printf("ciaddr: %s\n", inet_ntoa(addr));
    
    addr.s_addr = response.yiaddr;
    printf("yiaddr: %s\n", inet_ntoa(addr));
    
    addr.s_addr = response.fromIPAddr;
    printf("fromIPAddr: %s\n", inet_ntoa(addr));
    
    addr.s_addr = response.toIPAddr;
    printf("toIPAddr: %s\n", inet_ntoa(addr));
    
    printf("transID: %d\n", response.transID);
    
    close(sockfd);
    return 0;
}