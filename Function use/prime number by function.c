#include<stdio.h>
#include<stdlib.h>
void prime(int num,int i)
{
	if(num==2)
	{
		printf("Yes");
	}
	else
	{
	for(i=2;i<=num;i++)
	{
		if(num%i==0)
		{
		printf("Not");
		break;
		}
		else
		{
		printf("yes");
		break;
		}
	}
	}
}
int main()
{
	int num,i=1;
	printf("\nEnter number :");
	scanf("%d",&num);
	fflush(stdin);
	prime(num,i);
	return 0;
}
