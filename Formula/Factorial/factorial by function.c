#include<stdio.h>
 long long int factorial(n)
{
	 long long int fact=1;
	if(n<0)
	{
		fact=0;
	}
	while(n>1)
	{
		fact=fact*n;
		n--;
	}
	return fact;
}
int main()
{
	int n;
 	long long int fact;	
	printf("\nEnter number=");
	scanf("%d",&n);
	fact=factorial(n);
	printf("Factorial of %d =%lld",n,fact);
	return 0;
}

