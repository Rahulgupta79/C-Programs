#include<stdio.h>
int prime(int num);
int main()
{
	int num,p;
	printf("\nEnter number");
	scanf("%d",&num);
	p=prime(num);
	if(p==0)
	{
		printf("Not Prime: %d",num);
	}
	else
	printf("\nPrime number: %d",num);
	return 0;
}
int prime(num)
{
	int i=2,flag=1;
	if(num<2)
	{
		flag=0;
	}
	else
	{
		while(i<=num/2)
		{
			if(num%i==0)
			{
				flag=0;
			}
			break;
			i++;
		}
	}
	return flag;	
}
