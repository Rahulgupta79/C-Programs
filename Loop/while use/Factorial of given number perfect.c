#include<stdio.h>
int main()
{
	int num,fact;
	printf("\nEnter a number-:");
	scanf("%d",&num);
	fact=1;
	if(num<0)
	{
		printf("No factorial of negative number");
	}
	else
	{
		
		while(num>0)
		{
			fact=fact*num;
			num--;
		}
		printf("Factorial of number %d=%d",num,fact);
	}
	return 0;
}
