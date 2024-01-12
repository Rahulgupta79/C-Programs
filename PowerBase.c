#include<stdio.h>
#include<stdlib.h>
int main()
{
    int base,power,value=1,i=1;
    printf("Enter base(Number):");
    scanf("%d",&base);
    printf("Enter power(Base):");
    scanf("%d",&power);
    while(i<=power)
    {
        value=value*base;
        i++;
    }
    printf("Power of Value=%d",value);
    return 0;
}