#include <stdio.h>

int main() {
    int i, num, largest, smallest;

    printf("Enter 100 numbers:\n");
    scanf("%d", &num);   
    largest = smallest = num;  

    for(i = 2; i <= 100; i++) {
        scanf("%d", &num);

        if(num > largest) {
            largest = num;
        }
        if(num < smallest) {
            smallest = num;
        }
    }

    printf("Largest number = %d\n", largest);
    printf("Smallest number = %d\n", smallest);

    return 0;
}
