#include<stdio.h>
int main()
{
	int n,m,t,p,j;
	printf("\nEnter two number");
	scanf("%d%d",&n,&m);
	if(n!=m)
	{
		while(p!=0)
		{
			t=n/m;
			j=t/n;
			p=t%n==0;
		}
		printf("GCD of %d and %d:=%d",n,m,j);
	}
	else
	{
		printf("Gcdof %d and %d:=%d",n,m,n);
	}
	return 0;
}
