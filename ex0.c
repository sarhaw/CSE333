//UW CSE333 Example 0

#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        printf("Invalid input - too many inputs");
        return -1;
    }
    
    double answer = 3.0;
    int num;
    sscanf(argv[1], "%d", &num);

    printf("%d\n", num);

    if (num == 0) {
        printf("Invalid input - non-int input");
        return 1;
    }

    for (int n=1; n<=num; n++) {
        answer += (n%2 ? 1.0 : -1.0) * (4.0 / (2*n * (2*n+1) * (2*n+2)));
    }

    printf("Our estimate of Pi is %f\n", answer);

    return 0;
}

//fix non-int answers