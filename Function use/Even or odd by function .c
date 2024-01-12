#include<stdio.h>
void Num(num)
{
	if(num%2==0)
	{
		printf("\t\tEven Number =%d",num);
	}
	else
	{
		printf("\t\tOdd Number =%d",num);
	}
}
int main()
{
	int num;
	printf("\nEnter Number =");
	scanf("%d",&num);
	Num(num);
	return 0;
}
