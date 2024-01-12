#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,i,count=0;
    printf("Enter a number:");
    scanf("%d",&x);
    for(i=2;i<=x/2;i++)
    {
        if(x%i==0)
        {
           count++;
        }
        }
        if(count==0)
        {
            printf("Prime Number=%d",x);
        }
        else
        {
            printf("Not Prime Number=%d",x);
        }
    return 0;
}