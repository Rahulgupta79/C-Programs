#include<stdio.h>
int main()
{
	int num,sum,rem;
	printf("\n Enter number");
	scanf("%d",&num);
	sum=0;
	while(num>0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	printf("Sum of Digit=%d",sum);
	return 0;
}
