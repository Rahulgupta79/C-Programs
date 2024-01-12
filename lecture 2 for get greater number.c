#include<stdio.h>
#define SIZE 100
int getmax(int arr[],int n)
{
	int max,i=0;
	max=arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	return max;
}
int main()
{
	int arr[SIZE],i,n,max;
	printf("\nEnter how many numbers you use:");
	scanf("%d",&n);
	if(n>SIZE)
	{
		printf("Count is out of size");
	}
	else
	{
		for(i=0;i<n;i++)
		{
			printf("\nEnter numbers-:");
			scanf("%d",&arr[i]);
		}
		max=getmax(arr,n);
		printf("Geater number:%d",max);
	}
	return 0;
}
