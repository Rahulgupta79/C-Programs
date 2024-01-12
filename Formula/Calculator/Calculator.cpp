#include<stdio.h>
#include<conio.h>
int main()
{
	float n1,n2,ans;
	char opr;
	printf("Enter first number");
	scanf("%f",&n1);
	getchar ();
	printf("\n Enter any operator");
	scanf("%c",&opr);
	printf("\n Enter second number");
	scanf("%f",&n2);
	if (opr=='+')
	{
		printf("\n ans =%.2f",ans=n1+n2);
	}
	else if(opr=='-') 
	{
		printf("\n ans =%.2f",ans=n1-n2);
	}
	else if (opr=='*')
	{
		printf("\n ans =%.2f",ans=n1*n2);	
	}
	else if(opr=='/')
	{
		printf("\n ans =%.2f",ans=n1/n2);
	}
	else {
		printf("retry");
	}
	return 0;
}
