//UW CSE333 Exercise 4

#include "NthPrime.h"

int main(int argc, char** argv) {
    //test 1
    int16_t x = 1;
    int64_t answer = NthPrime(x);
    printf("#%d prime: %lld\n", x, answer);
    if (answer != 2) {
        printf("oopsies!\n");
        return EXIT_FAILURE;
    }

    //test 2
    x = 2;
    answer = NthPrime(x);
    printf("#%d prime: %lld\n", x, answer);
    if (answer != 3) {
        printf("oopsies!\n");
        return EXIT_FAILURE;
    }

    //test 3
    x = 11;
    answer = NthPrime(x);
    printf("#%d prime: %lld\n", x, answer);
    if (answer != 31) {
        printf("oopsies!\n");
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}

/* running code
gcc -Wall -g -std=c17 -c -o NthPrime.o NthPrime.c
gcc -Wall -g -std=c17 -c -o ex4.o ex4.c
gcc -Wall -g -std=c17 -o ex4 ex4.o NthPrime.o
*/