#include <stdio.h>

int main() {
    int i,n;

    printf("Enter a number:");
    scanf("%d", &n);   
    
     printf("the factors of %d are:",n);
    for(i=1; i<=n ; i++) {
        if(n%i==0)
        {
            printf("\n%d",i);
        }
        


    }

    return 0;
}
