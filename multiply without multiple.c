#include<stdio.h>
int main()
{
	int num1,num2,mul,i,minus=0;
	printf("\nEnter two numbers");
	scanf("%d%d",&num1,&num2);
	if(num1<0&&num2<0)
	{
		num1=-num1;
		num2=-num2;
	}
	else if(num2<0)
	{                                   
		minus=1;
		num2=-num2;
		for(i=0;i<num2;num1++)
		{
			mul=0;
			mul=mul+num1;
		}
		if(minus==1)
		{
			mul=-mul;
		}
    }
	printf("multiple of %d and %d=%d",num1,num2,mul);
	return 0;
}
