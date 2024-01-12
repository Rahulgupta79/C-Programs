#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    int n;
    printf("Enter how many array yoiu want to create:");
    scanf("%d",&n);
    p=(int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
    {
        printf("Enter number=");
        scanf("%d",&p[i]);
    }

    for(int i=0;i<n;i++)
    {
        printf("%d\t",p[i]);
    }
    return 0;
}