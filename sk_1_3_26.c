#include <stdio.h>

int main() {
    int i,n,r, sum=0,k;

    printf("Enter a number:");
    scanf("%d", &n);
    
    
    k=n;

    for(i=1; n>0 ; i++) {
        
        r=n%10;
        n=n/10;
        sum=sum+(r*r*r);


    }
    printf("number of digits are %d",sum);
    
    if(k==sum)
    {
    printf("\n the given no. is armstrong");
    }
    else
    {
    printf("\n the given no. is not a armstrong");
    }
    return 0;
}
