#include <stdio.h>

int main() {
    int num, square, temp, pow10 = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    square = num * num;
    temp = num;

    
    while (temp > 0) {
        pow10 *= 10;
        temp /= 10;
    }

    
    if (square % pow10 == num)
        printf("%d is an Automorphic number.\n", num);
    else
        printf("%d is NOT an Automorphic number.\n", num);

    return 0;
}
