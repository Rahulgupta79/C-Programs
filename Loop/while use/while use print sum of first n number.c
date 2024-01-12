#include<stdio.h>
int main()
{
	int num,sum,d;
	printf("\n Enter a number=");
	scanf("%d",&num);
	sum=0;
	while(num!=0)
	{
		d=num%10;
		sum=sum+d;
		num=num/10;
	}
	printf("Sum of first n numbers=%d",sum);
	return 0;
}
