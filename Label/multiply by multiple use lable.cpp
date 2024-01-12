#include<stdio.h>
int main()
{
	int num1,num2,num;
	printf("\nEnter one number");
	scanf("%d",&num1);
	printf("\n Enter two number");
	scanf("%d",&num2);
	RE:num=num1+num1;
	if(num1!=num2)
	{
		num=num1+num1;
		goto RE;
	}
	else
	{
		num=num1+num1;
		goto RE;
	}
	printf("Mul=%d",num);
	return 0;		
}
