//UW CSE333 Exercise 7

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <dirent.h> //posix library

int main(int argc, char** argv) {
    //int16_t StrLength = strlen(argv[1]); //gets string length
    char* dir = argv[1];

    printf(dir);

    DIR* dirp = opendir(dir);
    struct dirent* file = readdir(dirp);

    if (dirp == NULL) {
        perror("Could not open directory");
        exit(EXIT_FAILURE);
    }

    while ((file = readdir(dirp)) != NULL) {
        // Print the name of the entry
        printf("%s\n", file->d_name);
    }

    return closedir(dirp);
}