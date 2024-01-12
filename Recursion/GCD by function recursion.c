#include<stdio.h>
int gcd(int n1,int n2)
{
	if(n1%n2==0)
	{
		return n2;
	}
	else
	{
		return gcd(n2,n1%n2);
	}
}
int main()
{
	int n1,n2,e;
	printf("\nEnter two numbers for hcf");
	scanf("%d%d",&n1,&n2);
	e=gcd(n1,n2);
	printf("GCD=%d",e);
	return 0;
}
