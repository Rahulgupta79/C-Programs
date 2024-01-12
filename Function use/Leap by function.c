#include<stdio.h>
int Leap(int yy);
int main()
{
	int yy,L;
	printf("\nEnter year =");
	scanf("%d",&yy);
	L=Leap(yy);
	if(L==0)
	{
		printf("Year=%d is not Leap",yy);
	}
	else
	{
		printf("Year=%d is Leap",yy);
	}
	return 0;
}
int Leap(yy)
{
	int i,flag=1;
	if(yy<=1752)
	{
		if(yy%4==0)
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
		if(yy%100==0)
		{
			if(yy%400==0)
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
			if(yy%4==0)
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
