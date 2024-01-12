#include<stdio.h>
int main()
{
	float n1,n2,ans;
	char opr;
	printf("Enter first number,operator,Second number");
	scanf("%f%c%f",&n1,&opr,&n2);
	getchar ();
	if (opr=='+')
	{
		printf("\n ans =%.2 f",ans=n1+n2);
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
	else
	{
	   printf("Tumko nhi aata hai");
	}
	return 0;
}
