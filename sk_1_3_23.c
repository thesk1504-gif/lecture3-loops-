#include <stdio.h>

int main() {
    int i,n,r, sum=0;

    printf("Enter a number:");
    scanf("%d", &n);   
    

    for(i=1; n>0 ; i++) {
        
        r=n%10;
        n=n/10;
        sum=sum+r;


    }
    printf("number of digits are %d",sum);

    return 0;
}
