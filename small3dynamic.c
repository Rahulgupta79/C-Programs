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
    if(*p>*q)
    {
        if(*q>*r)
        {
            printf("Small=%d",*r);
        }
        else
        {
            printf("Small=%d",*q);
        }
    }
    else
    {
        if(*q>*r)
        {
            if(*p>*r)
            {
                printf("Small=%d",*r);
            }
            else
            {
                printf("Small=%d",*p);
            }
        }
        else
        {
            printf("Small=%d",*p);
        }
    }
    return 0;
}