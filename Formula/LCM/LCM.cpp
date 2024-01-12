#include<stdio.h>
int main()
{
	int num1,num2,rem,result,lcm,n1,n2;
	printf("\nEnter two numbers");
	scanf("%d%d",&num1,&num2);
	n1=num1;
	n2=num2;
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
	lcm=(n1*n2)/result;
	printf("\nLCM = %d",lcm);
	return 0;
}
