#include <stdio.h>

int main() {
    int i, j, isPrime,sum=0;



    for (i = 2; i <= 500; i++) {
        isPrime = 1; // assume number is prime

        for (j = 2; j <= i/2; j++) {
            if (i % j == 0) {
                isPrime = 0; // not prime
                break;
            }
        }

        if (isPrime == 1) {
        
            sum=sum+i;
        }
    }
    printf("the summation of prime nos. between 1 & 500. is%d ",sum);
    return 0;
}
