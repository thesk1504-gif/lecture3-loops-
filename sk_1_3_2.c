#include <stdio.h>

int main() {
    int i;

    printf("The first 10 odd numbers are:\n");
    for(i = 1; i <= 20; i++) {
        if(i % 2 != 0) {
            printf("%d ", i);
        }
    }

    return 0;
}
