#include<stdio.h>
#include<stdlib.h>
long bit(long int num);
int main()
{
	long int num;
	printf("Enter number for Binary:");
	scanf("%ld",&num);
	printf("Binary of %ld=%ld",num,bit(num));
	return 0;
}
long bit(long int num)
{
	int a=1,bit=0,rem;
	while(num>0)
	{
		rem=num%2;
		bit=bit+rem*a;
		num/=2;
		a=a*10;	
	}
	return bit;
}
