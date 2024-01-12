#include<stdio.h>
long long int fact(int num)
{
	if(num==0||num==1)
	{
		return 1;
	}
	else
	{
		return num*fact(num-1);
	}
}
int main()
{
	int num;
	long long int factorial;
	printf("\nEnter number:");
	scanf("%d",&num);
	factorial=fact(num);
	printf("\nFactorial =%lld",factorial);
	return 0;
}
