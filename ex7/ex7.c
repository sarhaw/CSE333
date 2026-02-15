//UW CSE333 Exercise 7

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>

int main(int argc, char** argv) {
    int16_t StrLength = sizeof(argv[1]) / sizeof(char);
    if (argv[0] == '/') {
        StrLength--;
        argv
    }
    if (argv[StrLength-1] == '/') {
        StrLength--;
    }
    char str[StrLength];
    //char str[StrLength] = argv[1];
    printf("%s", str);
    if (str[0] == '/') {
        for (int i=0; i<StrLength; i++) {
            
        }
    }
}