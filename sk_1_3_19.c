#include <stdio.h>

int main() {
    int i;

    printf("Numbers divisible by 5 from 1 to 100 are:\n");

    for (i = 1; i <= 100; i++) {
        if (i % 5 == 0)
            printf("%d \n", i);
    }

    return 0;
}
