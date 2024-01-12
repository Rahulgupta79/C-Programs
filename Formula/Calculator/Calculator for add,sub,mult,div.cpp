#include<stdio.h>
int main()
{
	float n1,n2,Sum,Sub,Mult,Div;
	char opr;
	printf("Enter number,Operator and Number=");
	scanf("%f%c%f",&n1,&opr,&n2);
	getchar();
	if (opr=='+')
	{
		printf("Sum=%.2f",Sum=n1+n2);
	}
	else if(opr=='-')
	{
		printf("Sub=%.2f",Sub=n1-n2);
	}
	else if(opr='*')
	{
		printf("Mult=%.2f",Mult=n1*n2);
	}
	else if(opr=='/')
	{
		printf("Div=%.2f",Div=n1/n2);
	}
	else
	{
		printf("Error operator BRO");
	}
	return 0;
	
}
