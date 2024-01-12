#include<stdio.h>
int main()
{
	int num1,num2,mul,i;
	printf("\nEnter two numbers which you want to multiply ");
	scanf("%d%d",&num1,&num2);
	i=1;
	if(num1<num2)
	{
		do
		{
			mul=num1+num1;
			i++;	
		}while(i<=num2);
	}
	else
	{
		do
		{
			mul=num2+num2;
			i++;
		}while(i<=num1);
	}
	printf("Multiple 0f %d and %d= %d",num1,num2,mul);
	return 0;
}
