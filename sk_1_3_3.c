#include <stdio.h>

int main() {
    int i = 1;   // counter for how many even numbers printed
    int num = 2; // first even number

    printf("First 10 even numbers are:\n");

    do {
        printf("%d ", num);
        num += 2;  // go to next even number
        i++;
    } while (i <= 10);

    return 0;
}
