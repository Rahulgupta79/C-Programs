#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
int getsum(int arr[],int n)
{
	int sum=0,i;
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	return sum;
}
int main()
{
	int arr[SIZE],i,n,sum;
	printf("\nEnter numbers how much you uses:");
	scanf("%d",&n);
	fflush(stdin);
	if(n>SIZE)
	{
		printf("Count is out of range");
	}
	else
	{
		for(i=0;i<n;i++)
		{
			printf("\nEnter numbers:");
			scanf("%d",&arr[i]);
		}
		sum=getsum(arr,n);
		printf("Sum =%d",sum);
	}
	return 0;
}
