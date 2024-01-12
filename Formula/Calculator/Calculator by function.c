#include<stdio.h>
#include<math.h>
void cal(float n1,char opr,float n2,float result)
{
	if(opr=='+')
	{
		printf("\nAdd=%.2f",result=n1+n2);
	}
	else if(opr=='-')
	{
		printf("\nSubtract=%.2f",result=n1-n2);
	}
	else if(opr=='*')
	{
		printf("\nMultiple=%.2f",result=n1*n2);
	}
	else if(opr=='/')
	{
		if(n2==0)
		{
			printf("Undefine");
		}
		else
		{
			printf("Division=%.2f",result=n1/n2);
		}
	}
	else if(opr=='^')
	{
		printf("Power=%.2f",result=pow(n1,n2));
	}
	else
	 {
	 	printf("Samjho Pahle");
	 }
}
int main()
{
	float n1,n2,result;
	char opr;
	printf("\nEnter number");
	scanf("%f%c%f",&n1,&opr,&n2);
	getchar();
	cal(n1,opr,n2,result);
	return 0;
}
