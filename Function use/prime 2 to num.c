#include<stdio.h>
void prime(int num)
{
	int n,m,num;
	for(n=2;n<=num;n++)
	{
		for(m=2;m<=num;m++)
		{
			if(n%m==0)
			break;
		}
		if(m==n)
		{
			printf("\n%d\t",n);
		}
	}
}
int main()
{
	int num;
	printf("\nEnter number");
	scanf("%d",&num);
	prime(num);
	printf("\nPrime numbers=");
	return 0;
}

