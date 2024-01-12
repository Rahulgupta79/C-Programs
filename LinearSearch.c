#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n;
    printf("Enter hoe many numbers you have to intered=");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter number=");
        scanf("%d",&arr[i]);
    }
    int index=0,data=0,s;
    printf("Enter number which you have to search=");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(s==arr[i])
        {
            index=i;
            data=arr[i];
            break;
        }
    }
    printf("data[%d]=%d",index,data);
    return 0;
}