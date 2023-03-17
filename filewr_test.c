#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main()
{
    int fd;
    const char *temp = "I love BASS";

    if (0 < (fd = creat("./temp0.txt", 0644))) {
        write(fd, temp, strlen(temp));
    } else {
        printf("Failed to create file.");
        return -1;
    }

    char str[1024];
    fd = open("./temp0.txt", O_RDONLY, 0644);
    read(fd, str, 1024);
    int len = strlen(str);

    printf("%s\n", str);
    printf("string length : %d\n", len);

    return 0;
}
