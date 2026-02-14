//UW CSE333 Exercise 4

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
    FILE* f = fopen(argv[1], "rb"); //pointer to file
    char buffer; //stores each read char
    fseek(f, 0, SEEK_END); //moves to end of file
    int size = ftell(f); //size of file
    for (int i=1; i<=size+1; i++) {
        fread(&buffer, 1, 1, f); //reads char at current point
        printf("%c", buffer);
        fseek(f, -i, SEEK_END); //starting from end of file, moves back i spaces
    }
    return EXIT_SUCCESS;
}