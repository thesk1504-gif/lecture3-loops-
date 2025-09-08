#include <stdio.h>

int main() {
    int i, n, fact=1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if(n==0){
    printf("the factorial of 0 is: 1");
    }
    else{
    for(i = 1; i <= n; i++) {
        fact=fact*i;
    }
    printf("the factorial of %d is: %d\n", n, fact);

    }


    return 0;
}
