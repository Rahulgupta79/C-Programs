#include<stdio.h>
long long int Fact(int num)
{
	long long int fact;
	if(num==0 || num==1)
	{
		return 1;
	}
	else
	{
		fact=num*Fact(num-1);
		return fact;
	}
}
int main()
{
	int num;
	long long int fact;
	printf("\nEnter number for Factorial =");
	scanf("%d",&num);
	fact=Fact(num);
	printf("\nFactorial =%lld",fact);
	return 0;
}
