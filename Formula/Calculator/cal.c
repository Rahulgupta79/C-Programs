#include<stdio.h>
#include<math.h>
int main()
{
	float n1,n2;
	char operator;
	printf("Enter number,operator and number");
	scanf("%f%c%f",&n1,&operator,&n2);
	if(operator=='+')
	{
		printf("Add=%f",n1+n2);
	}
	else if(operator=='-')
	{
		printf("Sub=%f",n1-n2);
	}
	else if(operator=='*')
	{
		printf("Mult=%f",n1*n2);
	}
	else if(operator=='/')
	{
		if(n2==0)
		{
			printf("Undefine");
		}
		else
		{
			printf("Div=%f",n1/n2);
		}
	}
	else if(operator=='^')
	 {
	 	printf("Power=%f",pow(n1,n2));
	 }
	 else
	 {
	 	printf("Samjho Pahle");
	 }
	 return 0;
}
