#include<stdio.h>
int main()
{
	int num1,num2,rem,result;
	printf("\nEnter two numbers");
	scanf("%d%d",&num1,&num2);
	if(num1==0&&num2!=0)
	{
		printf(" GCD of %d and %d=%d",num1,num2,num2);
	}
	do{
		if(num1<num2)
		{
			rem=num1%num2;
			if(rem==0)
			{
				result=num2;
			}
			else
			{
				num1=num2;
				num2=rem;
			}
		}
	}while(rem!=0);
	printf("\nGCD of %d amd %d= %d",num1,num2,result);
	return 0;
}
