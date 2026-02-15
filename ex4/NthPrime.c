#include "NthPrime.h"

int64_t NthPrime(int16_t num) {
    int64_t prime = 0;
    int16_t total = 0;
    while (total < num) {
        prime++;
        if (IsPrime(prime)) {
            total++;
        }
    }
    return prime;
}

bool IsPrime(int64_t prime) {
    if (prime<2) {
        return false;
    }
    for (int i=2; i*i<=prime; i++) {
        if (prime % i <= 0) {
            return false;
        }
    }
    return true;
}