#include<stdio.h>
int main()
{
	int num,fact,i;
	printf("\nEnter a number");
	scanf("%d",&num);
	fact=1;
	if(num<0)
	{
		printf("There are no factorial of a negative number");
	}
	else if(num==0)
	{
		printf("Factorial of 0: 1");
	}
	else
	{
		for(i=1;i<=num;i++)
		{
			fact=fact*i;
		}
		printf("Factorial of %d is %d",num,fact);
	}
	return 0;
}
