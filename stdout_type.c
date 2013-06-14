#include <stdio.h>
#include <sys/stat.h>


int main() {

    struct stat fdstat;

    fstat(fileno(stdin), &fdstat);

    switch (fdstat.st_mode & S_IFMT) {
        case S_IFBLK:  printf("block device\n");            break;
        case S_IFCHR:  printf("character device\n");        break;
        case S_IFDIR:  printf("directory\n");               break;
        case S_IFIFO:  printf("FIFO/pipe\n");             break;
        case S_IFLNK:  printf("symlink\n");               break;
        case S_IFREG:  printf("regular file\n");          break;
        case S_IFSOCK: printf("socket\n");                break;
        default:       printf("unknown?\n");              break;
    }

}

