#include<stdio.h>
#define SIZE 100
int main()
{
	int num[SIZE],i,n,quo;
	long long int rem;
	printf("\nEnter numbers for get binary:");
	scanf("%d",&n);
	if(n>SIZE)
	{
		printf("please try again");
	}
	else
	{
		for(i=0;i<n;i++)
		{
			printf("\nEnter number[%d]:",i+1);
			scanf("%d",&num[i]);
		}
		printf("Binary=");
		for(i=0;i<n;i++)
		{
			while(quo!=0)
			{
				rem=num[i]%2;
				quo=num[i]/2;
			}
			printf("%d",rem);
		}
	}
	return 0;
}
