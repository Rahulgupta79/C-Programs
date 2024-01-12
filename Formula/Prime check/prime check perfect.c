#include<stdio.h>
#include<stdlib.h>
int isprime(int n)
{
	int flag=1,i;
	if(n<2)
	{
		flag=0;
	}
	else
	{
		for(i=2;i<=n/2;i++)
		{
			if(n%i==0)
			{
				flag=0;
				break;
			}
		}
	}
	return flag;
}
int main()
{
	int m,n;
	printf("\nEnter m and n");
	scanf("%d%d",&m,&n);
	fflush(stdin);
	if(isprime(m))
	{
		printf("%d\t",m);
	}
	while(m!=n)
	{
		if(m<n)
		{
			m++;
		}
		else
		{
			m--;
		}
		if(isprime(m))
		{
			printf("%d\t",m);
		}
	}
	return 0;
}
