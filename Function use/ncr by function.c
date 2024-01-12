#include<stdio.h>
#include<stdlib.h>
 long long int factorial(int num)
{
	 long long int fact=1;
	if(num<0)
	{
		fact=0;
	}
	while(num>1)
	{
		fact=fact*num;
		num--;
	}
	return fact;
}
int main()
{
	int n,r;
	long long int np,nr,nc,ncr;
	printf("\nEnter number=");
	scanf("%d%d",&n,&r);
	int c=n-r;
	fflush(stdin);
	if(n<r)
	{
		printf("\n please give n greater than r");
	}
	else
	{
		np=factorial(n);
		nr=factorial(r);
		nc=factorial(c);
		ncr=np/(nr*nc);
		printf("\nNcr of %d and %d=%lld",n,r,ncr);
	}
	return 0;
}


