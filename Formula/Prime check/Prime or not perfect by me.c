#include<stdio.h>
int main()
{
	int num,i;
	printf("\nEnter number=");
	scanf("%d",&num);
	for(i=2;i<=num-1;i++)
	{
		if(num%i==0)
		break;
	}
	if(i==num)
	{
		printf("\nPrime number =%d",num);
	}
	else
	{
		printf("\nNot Prime number =%d",num);
	}
	return 0;
}
