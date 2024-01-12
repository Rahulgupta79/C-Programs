#include<stdio.h>
void Prime1(n,i)
{
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		break;
	}
	if(i==n)
	{
		printf("Prime =%d",n);
	}
	else
	{
		printf("\nNot Prime =%d",n);
	}
}
void Prime2(m,i)
{
	for(i=2;i<=m;i++)
	{
		if(m%i==0)
		break;
	}
	if(i==m)
	{
		printf("Prime =%d",m);
	}
	else
	{
		printf("\nNot Prime =%d",m);
	}
}
int main()
{
	int n,m,i;
	printf("\nEnter two numbers");
	scanf("%d%d",&n,&m);
	Prime1(n,i);
	Prime2(m,i);
	return 0;
}
