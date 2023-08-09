#include<stdio.h>
#define SIZE 100
int main()
{
	int num[SIZE],i,n,sum=0;
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
		for(i=0;i<n;i++)
		{
			sum=sum+num[i];
			printf("%d+",num[i]);
		}
		printf("\b=%d",sum);
	}
	return 0;
}
