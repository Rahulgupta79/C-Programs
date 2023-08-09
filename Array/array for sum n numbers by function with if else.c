#include<stdio.h>
#define SIZE 100
int sum(int num[SIZE],int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
		{
			sum=sum+num[i];
			printf("%d+",num[i]);
		}
		return sum;
}
int main()
{
	int num[SIZE],i,n,Sum;
	printf("\nEnter how many numbers you want to add:");
	scanf("%d",&n);
	if(n>SIZE)
	{
		printf("\nNumbers are above of range");
	}
	else
	{
		for(i=0;i<n;i++)
		{
			printf("\nEnter number[%d]:",i+1);
			scanf("%d",&num[i]);
		}
		Sum=sum(num,n);
		printf("\b=%d",Sum);
	}
	return 0;
}
