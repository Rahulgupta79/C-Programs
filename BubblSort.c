#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    printf("Enter how many number yoy want to insert:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter number:");
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        for(int k=0;k<n-1;k++)
        {
            if(arr[k]>arr[k+1])
            {
                int temp=arr[k];
                arr[k]=arr[k+1];
                arr[k+1]=temp;
            }
            else
            {
                continue;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}