#include<stdio.h>
int isLeap(int year)
{
	int flag=0;
	if(year<=1752)
	{
		if(year%4==0)
		{
			flag=1;
		}
		else
		{
			flag=0;
		}
	}
	else
	{
		if(year%100==0)
		{
			if(year%400==0)
			{
				flag=1;
			}
			else
			{
				flag=0;
			}
		}
		else
		{
			if(year%4==0)
			{
				flag=1;
			}
			else
			{
				flag=0;
			}
		}
	}
	return flag;
}
int main()
{
	int year;
	printf("\nEnter year:");
	scanf("%d",&year);
	isLeap(year);
	if(flag=0)
	{
		printf("Not Leap");
	}
	else
	{
		printf("Leap");
	}
	return 0;
}