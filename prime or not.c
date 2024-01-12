#include<stdio.h>
int prime(int num)
{
	int i;
	int isprime=1;
	if(num<2)
	{
		isprime=0;
	}
	else
	{
		for(i=2;i<=num/2;i++)
		{
			if(num%i==0)
			{
				isprime=0;
				break;
			}
		}
	}
	return isprime;
}
int main()
{
	int num,isprime;
	printf("\nEnter number:");
	scanf("%d",&num);
	isprime=prime(num);
	if(isprime==1)
	{
		printf("\nprime =%d",num);
	}
	else
	{
		if(isprime==0)
		printf("\nNot Prime =%d",num);
	}
	return 0;
}
