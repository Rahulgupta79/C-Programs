#include<stdio.h>
#define SIZE 100
int main()
{
	int num[SIZE],n,i,j,isprime=1;
	printf("\nEnter how number you want to check:");
	scanf("%d",&n);
	if(n>SIZE)
	{
		printf("\nCount is out of Range");
	}
	else
	{
		for(i=0;i<n;i++)
		{
			printf("Enter number:");
			scanf("%d",&num[i]);
			if(num[i]==2)
			{
				printf("\nPrime\n");
				continue;
			}
			for(j=2;i<num[i];j++)
			{
				if(num[i]%j==0)
				{
				isprime=0;
				break;
				}
			}
			if(isprime==0)
			{
				printf("\nNot prime\n");
			}
			else
			{
				printf("\nPrime\n");
			}
		}
	}
	return 0;
}
