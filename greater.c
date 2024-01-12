#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i=0;
    printf("how much value you want to input=");
    scanf("%d",&n);
    int arr[n];
    while(i<n)
    {
        scanf("%d",&arr[i]);
        i++;
    }
    int greater=arr[0];
    i=0;
    //5
    //2 23 45 11 67
    //0  1  2 3  4
    //greater=arr[0];
    //greater=arr[i];
    while(i<n)
    {
        if(greater<arr[i])
        {
            greater=arr[i];
        }
        i++;
    }
    printf("Greater=%d",greater);
    return 0;
}