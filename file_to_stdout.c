#include<stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main(void) {
    int fd;
    char message[100];
    char *path="test.txt";

    fd = open(path, O_RDONLY|O_CREAT, S_IRWXU);
    read(fd, message, sizeof(message));
    close(fd);

    printf("The content of File is ...\n");
    write(1, message, strlen(message));
    return 0;
}