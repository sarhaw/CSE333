//UW CSE333 Exercise 0

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        printf("Invalid input - too many inputs");
        return EXIT_FAILURE;
    }
    
    int num;
    sscanf(argv[1], "%d", &num);

    if (num <= 0) {
        printf("Invalid input - input must be a positive integer");
        return EXIT_FAILURE;
    }

    double answer = 3.0;
    //nilakantha algorithm
    for (int n=1; n<=num; n++) {
        answer += (n%2 ? 1.0 : -1.0) * (4.0 / (2*n * (2*n+1) * (2*n+2)));
    }

    printf("Our estimate of Pi is %.20f\n", answer); //print to 20 decimal places

    return EXIT_SUCCESS;
}