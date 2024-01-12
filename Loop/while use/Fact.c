#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long int i,fac=1;
	printf("\nEnter a number:");
	scanf("%lld",&i);
	while(i!=1)
	{
		fac=fac*i;
		i--;
	}
	printf("Factorial =%lld",fac);
	return 0;
}//This program is perfect for factorial 20
