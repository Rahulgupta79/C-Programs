#include<stdio.h>
int main()
{
	int num,quo,sum,rem,sum1;
	printf("\nEnter a number");
	scanf("%d",&num);
	sum=0;
	sum1=0;
	while(num!=0)
	{
		quo=num%10;
		sum=sum+quo;
		num=num/10;
	}
	rem=sum;
	while(rem!=0)
	{
	rem=rem%10;
	sum1=sum1+rem;
	rem=rem/10;
	}
	printf("Number=%d",sum1);
	return 0;
}
