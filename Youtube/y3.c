#include<stdio.h>
int main()
{
	int yy;
	printf("\nEnter any Year =");
	scanf("%d",&yy);
	if(yy<=1752)
	{
		if(yy%4==0)
		{
			printf("Leap Year =%d",yy);
		}
		else
		{
			printf("Not a Leap Year =%d",yy);
		}
	}
	else
	{
		if(yy%100==0)
		{
			if(yy%400==0)
			{
				printf("Leap year =%d",yy);
			}
			else
			{
				printf("Not a Leap Year =%d",yy);
			}
		}
		else
		{
			if(yy%4==0)
			{
				printf("Leap Year =%d",yy);
			}
			else
			{
				printf("Not a Leap Year =%d",yy);
			}
		}
	}
	return 0;
}
