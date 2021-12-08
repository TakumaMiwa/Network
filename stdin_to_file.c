#include<stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main(void) {
    int fd;
    char message[100];
    char *path="test.txt";

    printf("Input message!\n");
    read(0, message, sizeof(message));
    printf("Message is ...\n%s\n", message);

    fd = open(path, O_WRONLY|O_CREAT|O_TRUNC, S_IRWXU);
    write(fd, message, strlen(message));
    close(fd);
    return 0;
}