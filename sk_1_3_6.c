#include <stdio.h>

int main() {
    int i, n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The first %d even numbers are:\n", n);
    for(i = 1; i <= n; i++) {
        printf("%d ", 2 * i);
    }

    return 0;
}
