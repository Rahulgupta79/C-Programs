#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,*q,*r;
    p=(int*)malloc(sizeof(int));
    q=(int*)malloc(sizeof(int));
    r=(int*)malloc(sizeof(int));
    printf("Enter three number=");
    scanf("%d%d%d",p,q,r);
    if(*p<*q)
    {
        if(*q<*r)
        {
            printf("Greater=%d",*r);
        }
        else
        {
            printf("Greater=%d",*q);
        }
    }
    else
    {
        if(*q>*r)
        {
            printf("Greater=%d",*p);
        }
        else
        {
            if(*p<*r)
            {
                printf("Greater=%d",*r);
            }
            else
            {
                printf("Greater=%d",*p);
            }
        }
    }
    return 0;
}