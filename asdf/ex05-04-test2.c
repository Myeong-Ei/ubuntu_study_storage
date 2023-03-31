#include <sys/types.h>
#include <dirent.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    DIR *dirp;
    struct dirent *dentry;

    int file_num = 0;
    int dir_num = 0;

    if ((dirp = opendir(".")) == NULL) {
        exit(1);
    }

    while ((dentry = readdir(dirp)) != NULL) {
        if (dentry->d_type == DT_DIR) {
            dir_num++;
        }
        else {
            file_num++;
        }
    }
    printf("file number : %d\ndir number : %d\n", file_num, dir_num);

    closedir(dirp);
    return 0;
}
