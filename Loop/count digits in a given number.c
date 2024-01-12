#include<stdio.h>
int main()
{
	int num,rem,count=0;
	printf("\nEnter number");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		count++;
		num=num/10;
	}
	printf("The digits of given number=%d",count);
	return 0;
}
