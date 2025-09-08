#include <stdio.h>

int main() {
    int i,n,sum=0,temp;

    printf("Enter a number:");
    scanf("%d", &n);   
    
     
    for(i=1; i<=n/2 ; i++) {
    
        if(n%i==0)
        {
            sum=sum+i;
        }
    
}

    if(n==sum)
    {
        printf("\nthe no. is prefect no.");
    }
    else
    {
        printf("\nthe no. not is prefect no.");

    }

    return 0;
}
