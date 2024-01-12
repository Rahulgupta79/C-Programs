#include<stdio.h>
int main()
{
	int num1,num2,l,m;//num1 ko rakhne ke liye  liya gya hi
	printf("\nEnter two number");//prime check ke liye m liya gya hai 
	scanf("%d%d",&num1,&num2);
	
	for(l=num1;l<=num2;l++)
	{
		for(m=2;m<=num2;m++)
		{
			if(l%m==0)
			break;
		}
		if(m==l)
		{
			printf("\n%d\t",l);
		}
	}
	return 0;
}
