#include<stdio.h>
int sum(int num);
int main()
{
	int num;
	printf("\nEnter number:");
	scanf("%d",&num);
	printf("Sum of digits=%d=%d",num,sum(num));
	return 0;
}
int sum(int num)
{
	int i,ren,sum=0;
	while(num>0)
	{
		ren=num%10;
		sum+=ren;
		num=num/10;
	}
	return sum;
}
