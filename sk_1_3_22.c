#include <stdio.h>

int main() {
    int i,n,count=0;

    printf("Enter a number:");
    scanf("%d", &n);   
    

    for(i=1; n>0 ; i++) {
        n=n/10;
        count++;


    }
    printf("number of digits are %d",count);

    return 0;
}
