#include<stdio.h>
int main()
{
	int num,i,num1;
	printf("\n Enter a number");
	scanf("%d",&num);
	i=1;
	while(i<=num)
	{
		num1=num1*i;
		i++;
	}
	printf("\nFactorial of %d",num1);
	return 0;
}
