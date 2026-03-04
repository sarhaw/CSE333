//UW CSE333 Exercise 7

#include <iostream> //for cout, endl
#include <cstdlib> //for EXIT_SUCCESS;

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main(int argc, char** argv) {
    cout << "Which positive integer would you like me to factorize? "; 

    int num;
    cin >> num;

    // if (argc != 1) {
    //     printf("Invalid input - wrong number of inputs");
    //     return EXIT_FAILURE;
    // }

    if (num <= 0) {
        printf("Invalid input - input must be a positive integer");
        return EXIT_FAILURE;
    }

    string out = "";
    for (int i=1; i<=num; i++) {
        if (num%i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    return EXIT_SUCCESS;
}