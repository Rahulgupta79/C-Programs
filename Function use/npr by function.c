#include<stdio.h>
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
	long long int np,nr;
	printf("\nEnter number=");
	scanf("%d%d",&n,&r);
	if(n<r)
	{
		printf("\n please give n greater than r");
	}
	else
	{
		np=factorial(n);
		nr=factorial(r);	
	}
	printf("\nNpr of %d and %d=%d",n,r,np/nr);
	return 0;
}


