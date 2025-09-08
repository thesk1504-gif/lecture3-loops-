#include <stdio.h>

int main() {
    int i,n,r,rev=0,original;

    printf("Enter a number:");
    scanf("%d", &n); 

    original=n;

    for(i=1; n>0 ; i++) {
        
        r=n%10;
        n=n/10;

        rev=rev*10+r;
        


    }
    printf("the reverse no. is %d",rev);

    if(original==rev)
    {
    printf("\n the given no. is palindrome");
    }
    else
    {
    printf("\n the given no. is not a palindrome");
    }
    return 0;
}
