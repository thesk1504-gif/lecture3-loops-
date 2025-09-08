#include <stdio.h>

int main() {
    int i,n,r,rev=0;

    printf("Enter a number:");
    scanf("%d", &n);   
    

    for(i=1; n>0 ; i++) {
        
        r=n%10;
        n=n/10;

        rev=rev*10+r;
        


    }
    printf("the reverse no. is %d",rev);

    return 0;
}
