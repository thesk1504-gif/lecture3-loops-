#include <stdio.h>

int main() 
{

    int n ,i,first=1,second=1,next;

    printf("enter a number :- ");
    scanf("%d",&n);

    printf("fibonacci series upto %d term is",n);


    for(i=1;i<=n;i++)
    {
        if(i==1 || i==2)
        {
             printf("1 ");
        }
         else
        {
        next=first+second;
        printf("%d ",next);
        first=second;
        second=next;
        
        }
    }
    return 0;
}
